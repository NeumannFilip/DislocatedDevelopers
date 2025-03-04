// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game3GameMode.h"
#include "Game3Character.h"
#include "UObject/ConstructorHelpers.h"

AGame3GameMode::AGame3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
