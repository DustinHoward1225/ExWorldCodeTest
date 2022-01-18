// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProgrammingTestProjGameMode.h"
#include "ProgrammingTestProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProgrammingTestProjGameMode::AProgrammingTestProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
