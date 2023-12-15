// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h" 
#include "GameFramework/Actor.h"
#include "AnimPawn1.h"
#include "LevelActor1.generated.h"

UCLASS()
class TESTENGINE5_API ALevelActor1 : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	TSubclassOf<AAnimPawn1> AnimPawn1_BP_Ref;

	UPROPERTY(EditDefaultsOnly, Category = "Camera", BlueprintReadWrite)
	TObjectPtr<ACameraActor> SelectedCamera;

public:	
	// Sets default values for this actor's properties
	ALevelActor1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
