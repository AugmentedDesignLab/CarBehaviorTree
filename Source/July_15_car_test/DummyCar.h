// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "WayPoint.h"
#include "Classes/Components/SplineComponent.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "DummyCar.generated.h"

/**
 * 
 */
UCLASS()
class JULY_15_CAR_TEST_API ADummyCar : public AWheeledVehicle
{
	GENERATED_BODY()

public:
	ADummyCar();

protected:
	virtual void BeginPlay() override;	

public:
	virtual void Tick(float DeltaTime) override;

	float Time = 0.0f;

	UPROPERTY(EditAnywhere)
	float TravelDistance = 0.0f;

	UPROPERTY(EditAnywhere)
	float DistanceThreshold = 0.0;

	UPROPERTY(EditAnywhere)
	float C1 = 0.0;

	UPROPERTY(EditAnywhere)
	float Throttle = 0.0;

	UPROPERTY(EditAnywhere)
	AWayPoint *WayPoint;

	void PrintLog(FString text);

	/*
	int Index = 0;
	UPROPERTY(EditAnywhere)
	float SteerVal[10] = { 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };

	UPROPERTY(EditAnywhere)
	float ThrottleVal[10] = { 1.0, 0.8f, 0.5f, 0.3f, 0.2f, 1.0f, 1.0f, 0.9f, 1.0f, 0.0 };
	*/


};
