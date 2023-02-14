// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "FPSProjectile.h"
#include "BaseAmmoReload.h"
#include "BaseAmmoPickup.h"
#include "HealthPickup.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "FPSCharacter.generated.h"


UCLASS()
class FPS_ASSIGNMENT_API AFPSCharacter : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;
	//Declaring values for the player
	void MoveForward(float Axis);
	void MoveRight(float Axis);
	void Shoot();
	void ReloadWeapon(EWeaponType _weaponType);
	void ManualReload();
	int CalculateAmmo(int _ammoAmount);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CharacterMovement: Walking")
		float SprintSpeedMultiplier;


	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AFPSProjectile> ProjectileClass;

	UFUNCTION(BlueprintCallable)
		void AddAmmo(EAmmoType _ammoType, int _ammoAmount);

	UFUNCTION(BlueprintCallable)
		void AddHealth(int _healthAmmount);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Options to add sound and animation to the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	ABaseAmmoReload* weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int assaultRifleAmmo;

	//Used for Animation
	class UAnimInstance* AnimInstance;

	FRotator SpawnRotation;
	FVector SpawnLocation;

	//Player Starting health
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Health = 100.0f;
public:
	//Functions for Damage towards the player
	void DealDamage(float DamageAmount);
	void EnvironmentDamage(float EnvironmentAmount);

protected:
	//Functions for Sprinting
	void Sprint();
	void StopSprinting();


};
