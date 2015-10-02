// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UnrealTest2.h"
#include "UnrealTest2GameMode.h"
#include "UnrealTest2HUD.h"
#include "UnrealTest2Character.h"

AUnrealTest2GameMode::AUnrealTest2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealTest2HUD::StaticClass();
}
