// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class FPS_ASSIGNMENT_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UPROPERTY()

	//To assign a Box collision to the enemy 
	UPROPERTY(EditAnywhere)
		class UBoxComponent* DamageCollision;
	//This is for the enemy to get hit by the projectiles
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);

	//These are for the enemy to sense the player sop we can get its location for the enemy to move towards
	UPROPERTY(VisibleDefaultsOnly, Category = Enemy)
		class UAIPerceptionComponent* AIPerComp;

	UPROPERTY(VisibleDefaultsOnly, Category = Enemy)
		class UAISenseConfig_Sight* SightConfig;

	UFUNCTION()
		void OnSensed(const TArray<AActor*>& UpdatedActors);

	UPROPERTY()
		APawn* SpottedPlayer = nullptr;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		FRotator EnemyRotation;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		FVector BaseLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		FVector CurrentVelocity;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		float MovementSpeed;

	void SetNewRotation(FVector TargetPosition, FVector CurrentPosition);
	//These are to get the enemies locations and reset back to original locations
	bool BackToBaseLocation;
	FVector NewLocation;
	float DistanceSquared;
	//Total health of the enemy
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Health = 100.0f;
	//Amount value to deal to the player
	UPROPERTY(EditAnywhere)
		float DamageValue = 5.0f;

public:
	//For dealing damage to the player
	void DealDamage(float DamageAmount);
};
