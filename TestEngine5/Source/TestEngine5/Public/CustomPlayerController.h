#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CustomPlayerController.generated.h"


UCLASS()
class ACustomPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACustomPlayerController();

protected:
	ASpectatorPawn* SpawnSpectatorPawn() override {
		return NULL;
	}

};