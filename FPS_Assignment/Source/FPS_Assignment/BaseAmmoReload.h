// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseAmmoReload.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	E_AssaultRifle UMETA(DisplayName = "Assault_Rifle"),
};

UCLASS()
class FPS_ASSIGNMENT_API ABaseAmmoReload : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseAmmoReload();
	
	
	//Allowing the properties to be editable within the blueprints to easily change values
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int maxTotalAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int maxMagSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int totalAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int magAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		EWeaponType weaponType;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
