// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "UATLock.h"
#include "UATKey.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYPROGRAMMING_API AUATKey : public ATriggerBox
{
	GENERATED_BODY()

	
public:
	AUATKey();
	UPROPERTY(EditAnywhere)
	AUATLock* lockToOpen;
	// don't need to declare AUAT again for Ufunctin
	UFUNCTION()
	void OnPickup(class AActor* OverlappedActor, class AActor* OtherActor);

};
