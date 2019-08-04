// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "WayPoint.h"
#include "Classes/Components/SplineComponent.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "VehicleMovement.generated.h"



USTRUCT()
struct FVehicleControl
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float SteeringValue;

	UPROPERTY(EditAnywhere)
	float ThrottleValue;

	UPROPERTY(EditAnywhere)
	float BrakeValue;

	UPROPERTY(EditAnywhere)
	float DistanceThreshold;

	UPROPERTY(EditAnywhere)
	float TraveledDistance;

	UPROPERTY(EditAnywhere)
	AWayPoint *WayPoint;

};



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

	//control getter
	FVehicleControl& GetLastControl();

	FTransform GetVehicleTransform();

	FVector GetVehicleLocation();
	
	FVector GetVehicleForward();

	FVector GetVehicleVelocity();
	
	float GetTraveledDistance();
	
	AWayPoint* GetWayPoint();



	void SetLocation(FVector Location);

	void SetControl(FVehicleControl Control);

	void SetSteeringValue(float SteeringValue);

	void SetThrottleValue(float ThrottleValue);

	void SetBrakeValue(float BrakeValue);

	void SetWayPoint(AWayPoint* WayPoint);

	//traveled distance on the current spline
	void SetTraveledDistance(float Distance);

	//last contro setting
	UPROPERTY(EditAnywhere)
	FVehicleControl LastControl;

	UPROPERTY(EditAnywhere)
	float TravelDistance = 0.0f;

	void PrintLog(FString text);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float Time = 0.0f;



};