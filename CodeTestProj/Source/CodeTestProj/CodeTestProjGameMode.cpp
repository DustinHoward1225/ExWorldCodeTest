// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodeTestProjGameMode.h"
#include "CodeTestProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodeTestProjGameMode::ACodeTestProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
