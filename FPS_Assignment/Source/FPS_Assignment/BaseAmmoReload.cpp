// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAmmoReload.h"

// Sets default values
ABaseAmmoReload::ABaseAmmoReload()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setting the default values for the gun ammo and reload
	maxTotalAmmo = 100;
	maxMagSize = 12;
	totalAmmo = 64;
	magAmmo = 12;
	reloadTime = 3.0f;

	weaponType = EWeaponType::E_AssaultRifle;
}

// Called when the game starts or when spawned
void ABaseAmmoReload::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAmmoReload::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

