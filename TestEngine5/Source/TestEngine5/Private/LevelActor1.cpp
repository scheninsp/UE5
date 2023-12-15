// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelActor1.h"
#include "Kismet/GameplayStatics.h" 

// Sets default values
ALevelActor1::ALevelActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SelectedCamera = CreateDefaultSubobject<ACameraActor>("SlectedCamera");

}

// Called when the game starts or when spawned
void ALevelActor1::BeginPlay()
{
	Super::BeginPlay();
	if (AnimPawn1_BP_Ref) {
		FActorSpawnParameters SpawnInfo;
		APawn* pawn_inst = GetWorld()->SpawnActor<AAnimPawn1>(AnimPawn1_BP_Ref, FVector(0.0f), FRotator(0, 0, 0), SpawnInfo);
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundActors);

	SelectedCamera = Cast<ACameraActor>(FoundActors[0]);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTarget(SelectedCamera);

	UE_LOG(LogTemp, Warning, TEXT("LevelActor1 BeginPlay"));
}

// Called every frame
void ALevelActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

