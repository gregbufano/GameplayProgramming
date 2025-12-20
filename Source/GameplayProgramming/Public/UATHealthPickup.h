// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UATPickup.h"
#include "UATHealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYPROGRAMMING_API AUATHealthPickup : public AUATPickup
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = "Pickup")
	float HealthAmount = 25.0f;
	virtual void OnPickedUp_Implementation(AActor* PickingUpActor) override;
};
