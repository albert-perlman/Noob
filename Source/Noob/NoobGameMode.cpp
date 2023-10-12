// Copyright Epic Games, Inc. All Rights Reserved.

#include "NoobGameMode.h"
#include "NoobCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANoobGameMode::ANoobGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
