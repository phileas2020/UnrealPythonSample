// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileGameMode.h"
#include "MobileCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMobileGameMode::AMobileGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
