// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Enemy.h"

// Sets default values
AFPSProjectile::AFPSProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating a sphere collision so that we can allow the projectile to collide and interact with other actors
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	CollisionSphere->InitSphereRadius(20.0f);

	RootComponent = CollisionSphere;

	ProjectileMovement =
		CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->UpdatedComponent = CollisionSphere;
	ProjectileMovement->InitialSpeed = 3000.0f; //Setting the initial values for the projectile, including the speed, max speed, should bounce
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	InitialLifeSpan = 3.0f;
	
	if (!ProjectileMeshComponent)
	{
		//Getting the desired mesh I want to use for the projectile, that being a bullet mesh
		ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));

		//Getting the location of that mesh, copying its reference allowing unreal to easily find and attach that mesh
		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Meshes/Gun/Medium_Bullet.Medium_Bullet'"));

		//if it finds that mesh this sets it as the static mesh
		if (Mesh.Succeeded())
		{
			ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
		}
		//Getting the location of the material I want to add to the projectile mesh 
		static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("Material'/Game/Materials/Bullet.Bullet'"));
		
		//if it finds the material its added to the mesh
		if (Material.Succeeded())
		{
			ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
		}

		ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
		ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
		ProjectileMeshComponent->SetupAttachment(RootComponent);
	}
}


// Called when the game starts or when spawned
void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();

	//To allow the projectile to collide and hit another actor, primarily the enemy
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AFPSProjectile::OnHit);

	
}

// Called every frame
void AFPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	//If the projectile hits an actor and it is the enemy it will deal damage and destroy the enemy if it has no health
	AEnemy* Enemy = Cast<AEnemy>(OtherActor);
	if (Enemy)
	{
		Enemy->DealDamage(DamageValue);
		Destroy();
	}
}

void AFPSProjectile::FireInDirection(const FVector& ShootDirection)
{
	//Bringing the values for how fast we want the projectile to move and in the correct direction
	ProjectileMovement->Velocity = ShootDirection * ProjectileMovement->InitialSpeed;
}





