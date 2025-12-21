// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYPROGRAMMING_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MainVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MusicVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SFXVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<bool> levelsCompleted;

};
