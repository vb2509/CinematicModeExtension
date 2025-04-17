// Fill out your copyright notice in the Description page of Project Settings.


#include "CinematicModeBlocker.h"
#include "EnhancedPlayerInput.h"

FInputActionValue UCinematicModeBlocker::ModifyRaw(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	//Nullifies the value if we are in cinematic mode
	return CurrentValue.Get<FVector>() * !(PlayerInput->GetOuterAPlayerController()->bCinematicMode);
}
