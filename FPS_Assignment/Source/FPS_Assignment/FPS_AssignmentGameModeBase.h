// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPS_AssignmentGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPS_ASSIGNMENT_API AFPS_AssignmentGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	//Restarting the level if the player wins
	void RestartGameplay(bool Won);

private:
	//Allow for resetting the level 
	void ResetLevel();

public:

	//Setting the timer
	UPROPERTY(BlueprintReadOnly)
		int TimerCount = 300;

private:

	//Getting the timer to countdown the time
	FTimerHandle CountDownTimerHandle = FTimerHandle();

	void CountDownTimer();

public:

	void BeginPlay() override;

protected:
	virtual void StartPlay() override; 

};
