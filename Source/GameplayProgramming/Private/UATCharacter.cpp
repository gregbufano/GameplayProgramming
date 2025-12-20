// Fill out your copyright notice in the Description page of Project Settings.


#include "UATCharacter.h"

// Sets default values
AUATCharacter::AUATCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUATCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}





// Called every frame
void AUATCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUATCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveFoward"), this, &AUATCharacter::MoveFoward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AUATCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AUATCharacter::DoJump);
	//PlayerInputComponent->BindAction(TEXT("Stun"), IE_Pressed, this, &AUATCharacter::DoStun);
}

void AUATCharacter::MoveFoward(float axisValue)
{
	AddMovementInput(GetActorForwardVector(), axisValue);
}

void AUATCharacter::MoveRight(float axisValue)
{
	AddControllerYawInput(axisValue);
}
/*
void AUATCharacter::DoStun()
{
	// Get all the UATCharacters within a radius of this character 
	// call their stun event on those characters - that event will seat an "isStunned" on their blackboard and set a timer
	// isStunned is their first decision option, so they always do it first
	// when the timer ends, it will set isStunned back to false

}*/

void AUATCharacter::DoJump()
{
	Jump();
}
