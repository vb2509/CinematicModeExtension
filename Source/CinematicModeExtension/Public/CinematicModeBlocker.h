// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "CinematicModeBlocker.generated.h"

/**
 * 
 */

 /* Use this for inputs that are not look or move that you do not want active during cinematic mode */
UCLASS()
class CINEMATICMODEEXTENSION_API UCinematicModeBlocker : public UInputModifier
{
	GENERATED_BODY()
	
	virtual FInputActionValue ModifyRaw(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);
};
