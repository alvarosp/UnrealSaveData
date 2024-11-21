// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealSaveDataGameMode.h"
#include "UnrealSaveDataCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealSaveDataGameMode::AUnrealSaveDataGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
