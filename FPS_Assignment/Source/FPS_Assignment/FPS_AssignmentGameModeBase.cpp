// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPS_AssignmentGameModeBase.h"
#include "Kismet/GameplayStatics.h"


void AFPS_AssignmentGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//Setting up the timer as the game starts
		GetWorldTimerManager().SetTimer(CountDownTimerHandle, this,
			&AFPS_AssignmentGameModeBase::CountDownTimer, 1.0f, true, 1.0f);
}


void AFPS_AssignmentGameModeBase::RestartGameplay(bool Won)
{
	if (Won)
	{
		ResetLevel();
	}
	else
	{
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AFPS_AssignmentGameModeBase::ResetLevel, 3.0f);
	}
}

//This is so that if the game is to be reset it will take you back to the main menu screen
void AFPS_AssignmentGameModeBase::ResetLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Menu");
}

//Resetting the current level if the timer reaches 0
void AFPS_AssignmentGameModeBase::CountDownTimer()
{
	TimerCount--;

	if (TimerCount == 0)
	{
		GetWorldTimerManager().ClearTimer(CountDownTimerHandle);
		ResetLevel();
	}
}


void AFPS_AssignmentGameModeBase::StartPlay()
{
	Super::StartPlay();

}

