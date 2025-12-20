// Fill out your copyright notice in the Description page of Project Settings.


#include "UATKey.h"

 AUATKey::AUATKey()
{
	 // Registers the OnPickup function 
	 OnActorBeginOverlap.AddDynamic(this, &AUATKey::OnPickup);
}
 // Do not put ; add the end of these lines 
 void AUATKey::OnPickup( AActor* OverlappedActor, class AActor* OtherActor)
 {

	 //Destroys the other actor(door/lock)

	 lockToOpen->Destroy();
	
	 // Destroys this key
	 this->Destroy();
 }
 