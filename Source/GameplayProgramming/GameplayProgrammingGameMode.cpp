// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameplayProgrammingGameMode.h"
#include "GameplayProgrammingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameplayProgrammingGameMode::AGameplayProgrammingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
