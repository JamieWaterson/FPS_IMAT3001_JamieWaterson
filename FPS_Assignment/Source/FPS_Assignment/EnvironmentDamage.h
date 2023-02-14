// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentDamage.generated.h"

UCLASS()
class FPS_ASSIGNMENT_API AEnvironmentDamage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvironmentDamage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere)
		class UBoxComponent* DamageCollision;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		FVector BaseLocation;
	//Function to allow the player to collide with the collider
	UFUNCTION()
		void OnCollide(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);

	//Default damage value which can be edited outside of the code to make it easier
	UPROPERTY(EditAnywhere)
		float DamageValue = 5.0f;

public:
	void DealDamage(float DamageAmount);

};
