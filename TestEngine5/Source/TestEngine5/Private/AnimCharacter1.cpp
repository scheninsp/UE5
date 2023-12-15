// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimCharacter1.h"

// Sets default values
AAnimCharacter1::AAnimCharacter1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAnimCharacter1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAnimCharacter1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAnimCharacter1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

