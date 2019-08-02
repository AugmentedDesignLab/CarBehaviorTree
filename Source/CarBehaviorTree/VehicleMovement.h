// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"

#include "WayPoint.h"
#include "Classes/Components/SplineComponent.h"
#include "WheeledVehicleMovementComponent4W.h"

#include "VehicleMovement.generated.h"

/**
 * 
 */
UCLASS()
class CARBEHAVIORTREE_API AVehicleMovement : public AWheeledVehicle
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AVehicleMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
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
};
