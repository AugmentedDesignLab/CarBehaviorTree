// Fill out your copyright notice in the Description page of Project Settings.


#include "WayPointSpawner.h"

// Sets default values
AWayPointSpawner::AWayPointSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWayPointSpawner::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();
	if (World)
	{
		const FVector& Location = FVector(0.0f, 0.0f, 0.0f);
		const FActorSpawnParameters& SpawnParameters = FActorSpawnParameters();
		const FRotator& Rotation = FRotator();
		World->SpawnActor<AWayPoint>(AWayPoint::StaticClass(), Location, Rotation, SpawnParameters);
	}
	
}

// Called every frame
void AWayPointSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

