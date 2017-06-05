// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BootcampGameMode.h"
#include "BootcampCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABootcampGameMode::ABootcampGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
