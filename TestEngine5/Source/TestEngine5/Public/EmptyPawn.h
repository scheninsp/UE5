#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EmptyPawn.generated.h"


UCLASS()
class AEmptyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEmptyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};