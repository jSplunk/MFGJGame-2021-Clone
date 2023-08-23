// Copyright Epic Games, Inc. All Rights Reserved.

#include "MFGJGame2021GameMode.h"
#include "MFGJGame2021Character.h"
#include "UObject/ConstructorHelpers.h"

AMFGJGame2021GameMode::AMFGJGame2021GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
