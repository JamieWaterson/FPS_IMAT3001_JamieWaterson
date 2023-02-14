// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAmmoPickup.h"

// Sets default values
ABaseAmmoPickup::ABaseAmmoPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ammoType = EAmmoType::E_AssaultRifle;
	ammoAmount = 20;
}

// Called when the game starts or when spawned
void ABaseAmmoPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAmmoPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

