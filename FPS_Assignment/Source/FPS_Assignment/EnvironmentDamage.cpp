// Fill out your copyright notice in the Description page of Project Settings.

#include "EnvironmentDamage.h"
#include "Components/BoxComponent.h"
#include "FPSCharacter.h"

// Sets default values
AEnvironmentDamage::AEnvironmentDamage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating Box Collision to be attached to the actor
	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	DamageCollision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AEnvironmentDamage::BeginPlay()
{
	Super::BeginPlay();
	
	//Getting the location of the Damage collision 
	DamageCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnvironmentDamage::OnCollide);

	BaseLocation = this->GetActorLocation();
}

// Called every frame
void AEnvironmentDamage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//This is so when the player collides with the location of the box collision it will take the set damage value
void AEnvironmentDamage::OnCollide(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	AFPSCharacter* Char = Cast<AFPSCharacter>(OtherActor);

	if (Char)
	{
		Char->DealDamage(DamageValue);
	}
}

void AEnvironmentDamage::DealDamage(float DamageAmount)
{

}


