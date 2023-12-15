// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimPawn1.h"

// Sets default values
AAnimPawn1::AAnimPawn1()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SrcMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SourceMesh");
	DstMesh = CreateDefaultSubobject<USkeletalMeshComponent>("DestinationMesh");

	DstMesh->AttachToComponent(SrcMesh, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void AAnimPawn1::BeginPlay()
{
	Super::BeginPlay();
	SrcMesh->SetVisibility(false);
}

// Called every frame
void AAnimPawn1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAnimPawn1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

