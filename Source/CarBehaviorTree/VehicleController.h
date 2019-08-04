// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "VehicleMovement.h"
#include "VehicleController.generated.h"

/**
 * 
 */
UCLASS()
class CARBEHAVIORTREE_API AVehicleController : public AAIController
{
	GENERATED_BODY()
	
public:
	AVehicleController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime) override;

	AVehicleMovement* Vehicle;

	float CalculateSteeringValue(float delta);

	void VahicleBrake(float BrakeValue);

	float Move(float Speed);

	float Stop(float Speed);

	void PrintLog(FString Text);
};
