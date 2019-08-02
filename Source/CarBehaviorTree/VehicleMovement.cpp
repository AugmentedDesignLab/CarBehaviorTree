// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleMovement.h"
#include "Engine.h"

AVehicleMovement::AVehicleMovement()
{
}

void AVehicleMovement::BeginPlay()
{
	Super::BeginPlay();
	PrintLog("ILU");
	this->GetVehicleMovement()->SetThrottleInput(1.0);
}

void AVehicleMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PrintLog("ILU");
}

void AVehicleMovement::PrintLog(FString text)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::White, *text);
}
