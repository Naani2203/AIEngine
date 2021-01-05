// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomAIEngineGameMode.h"
#include "CustomAIEnginePlayerController.h"
#include "CustomAIEngineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACustomAIEngineGameMode::ACustomAIEngineGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACustomAIEnginePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}