// Copyright Epic Games, Inc. All Rights Reserved.

#include "a2ProjectGameMode.h"
#include "a2ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aa2ProjectGameMode::Aa2ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
