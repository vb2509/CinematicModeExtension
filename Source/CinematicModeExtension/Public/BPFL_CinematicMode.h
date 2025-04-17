// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_CinematicMode.generated.h"

/**
 * 
 */
 class APlayerController;
UCLASS()
class CINEMATICMODEEXTENSION_API UBPFL_CinematicMode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	/* Check if the player is in cinematic mode. */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerController")
	static bool IsInCinematicMode(APlayerController* PlayerController){
		if (!IsValid(PlayerController)) {
			return false;
		}

		return PlayerController->bCinematicMode;
	}
};
