// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseAmmoPickup.generated.h"

UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	E_AssaultRifle UMETA(DisplayName = "ASSAULT_RIFLE"),
};


UCLASS()
class FPS_ASSIGNMENT_API ABaseAmmoPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseAmmoPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//creating editable Categorys within the blueprints for the ammo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		int ammoAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		EAmmoType ammoType;
};
