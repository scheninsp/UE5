// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AnimPawn1.generated.h"

class USkeletalMeshComponent;


UCLASS()
class TESTENGINE5_API AAnimPawn1 : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = Pawn, BlueprintReadWrite)
	TObjectPtr<USkeletalMeshComponent> SrcMesh;

	UPROPERTY(EditDefaultsOnly, Category = Pawn, BlueprintReadWrite)
	TObjectPtr<USkeletalMeshComponent> DstMesh;

public:
	// Sets default values for this pawn's properties
	AAnimPawn1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
