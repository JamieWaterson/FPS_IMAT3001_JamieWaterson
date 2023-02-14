// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "FPS_AssignmentGameModeBase.h"


// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	//Setting values for the player movement 
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom")); //Creating a camera for the player
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera")); 
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	FollowCamera->bUsePawnControlRotation = false; 

	weapon = nullptr; //Setting the weapon 

	assaultRifleAmmo = 60; //Starting Ammo 
	
	SprintSpeedMultiplier = 1.5f; //For Sprint

}


// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();


	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Inputs to allow the player to look around with mouse movement inputs
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUP", this, &APawn::AddControllerPitchInput);
	//Input to allow the player to Jump 
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	//Inputs for Movement (Forward, Backwards, Left and Right)
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);
	//Inputs for Reloading and Shooting
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AFPSCharacter::Shoot);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSCharacter::ManualReload);
	//Inputs for sprinting
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AFPSCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AFPSCharacter::StopSprinting);
}

//Allows the player to move forward and backwards
void AFPSCharacter::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

//Allows the player to move left and right 
void AFPSCharacter::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}

//Function to allow the enemy deal damage when they get close to the player
void AFPSCharacter::DealDamage(float DamageAmount)
{
	Health -= DamageAmount;

	if (Health <= 0.0f)
	{
		AFPS_AssignmentGameModeBase* MyGameMode =
			Cast<AFPS_AssignmentGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
		if (MyGameMode)
		{
			MyGameMode->RestartGameplay(false);
		}


		Destroy();
	}
}

//A function to allow the player to take damage from an environmental actor, causing the player to die instantly and reset the current level
void AFPSCharacter::EnvironmentDamage(float EnvironmentAmount)
{
	Health -= EnvironmentAmount;

	if (Health <= 0.0f)
	{
		AFPS_AssignmentGameModeBase* MyGameMode =
			Cast<AFPS_AssignmentGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
		if (MyGameMode)
		{
			MyGameMode->RestartGameplay(false);
		}


		Destroy();
	}
}

//This is to shoot a projectile
void AFPSCharacter::Shoot()
{
	//Getting the Projectile class and choosing where to spawn the projectile, within parameters of the camera
	if (ProjectileClass)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		MuzzleOffset.Set(150.0f, 30.0f, 0.0f);

		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

		FRotator MuzzleRotation = CameraRotation;
		MuzzleRotation.Pitch += 10.0f;

		UWorld* World = GetWorld();
		if (World)
		{
			if (weapon)
			{
				//Spawning the projectile
				if (weapon->magAmmo > 0)
				{
					FActorSpawnParameters SpawnParams;
					SpawnParams.Owner = this;
					SpawnParams.Instigator = GetInstigator();

					AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);

					//Taking away ammo when projectile is fired
					if (Projectile)
					{
						FVector LaunchDirection = MuzzleRotation.Vector();
						Projectile->FireInDirection(LaunchDirection);
					}
					weapon->magAmmo -= 1;
				}

				else
				{

					ReloadWeapon(weapon->weaponType);
				}
			}
		}
	}
}
void AFPSCharacter::ManualReload()
{
	ReloadWeapon(weapon->weaponType);
}

//This is to allow the player to reload, taking the reserve ammo and adding it to the mag ammo
void AFPSCharacter::ReloadWeapon(EWeaponType _weaponType)
{
	if (weapon)
	{
		switch (_weaponType)
		{
		case EWeaponType::E_AssaultRifle:
			assaultRifleAmmo = CalculateAmmo(assaultRifleAmmo);
			break;

		default:
			break;

		}
	}
}

//This is to calculate the total ammo both in the mag and reserve ammo
int AFPSCharacter::CalculateAmmo(int _ammoAmount)

{
	if (weapon->magAmmo != weapon->maxMagSize)
	{
		if (_ammoAmount - (weapon->maxMagSize - weapon->magAmmo) >= 0)
		{
			_ammoAmount -= (weapon->maxMagSize - weapon->magAmmo);
			weapon->magAmmo = weapon->maxMagSize;
		}
		else
		{
			weapon->magAmmo += _ammoAmount;
			_ammoAmount = 0;
		}
	}
	return _ammoAmount;
}

//Adding ammo type of assault rifle (currently equipped weapon) to the ammo count
void AFPSCharacter::AddAmmo(EAmmoType _ammoType, int _ammoAmount)
{
	switch (_ammoType)
	{
	case EAmmoType::E_AssaultRifle:
		assaultRifleAmmo += _ammoAmount;
		break;

	default:
		break;

	}
}

// Setting the health so that the value is unable to go above 100, so when health is picked up and could go above 100 it sets it back down to 100
void AFPSCharacter::AddHealth(int _healthAmmount)
{
	Health += _healthAmmount;
	if (Health >= 100.0f)
	{
		Health = 100.0f;
	}
}

//Getting a multiplier on the movement speed of player to simulate a sprint
void AFPSCharacter::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed *= SprintSpeedMultiplier;
}

//This is to set the player back to original speed
void AFPSCharacter::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed /= SprintSpeedMultiplier;
}


