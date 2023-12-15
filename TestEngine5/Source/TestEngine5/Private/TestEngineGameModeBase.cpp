// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestEngineGameModeBase.h"
#include "EmptyPawn.h"
#include "CustomPlayerController.h"

ATestEngineGameModeBase::ATestEngineGameModeBase() {
	PlayerControllerClass = ACustomPlayerController::StaticClass();
	DefaultPawnClass = AEmptyPawn::StaticClass();
}
