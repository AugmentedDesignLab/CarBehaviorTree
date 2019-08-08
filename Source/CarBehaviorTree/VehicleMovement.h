// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "WayPoint.h"
#include <Runtime\AIModule\Classes\BehaviorTree\BehaviorTree.h>
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

	UFUNCTION(BlueprintPure, Category = "vehicle_movement")
	FTransform GetVehicleTransform();

	UFUNCTION(BlueprintPure, Category = "vehicle_movement")
	FVector GetVehicleLocation();
	
	UFUNCTION(BlueprintPure, Category = "vehicle_movement")
	FVector GetVehicleForward();

	UFUNCTION(BlueprintPure, Category = "vehicle_movement")
	FVector GetVehicleVelocity();
	
	UFUNCTION(BlueprintPure, Category = "vehicle_movement")
	float GetTraveledDistance();
	
	AWayPoint* GetWayPoint();


	void SetLocation(FVector Location);

	void SetControl();

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
	UBehaviorTree* VehicleBehavior;

	void PrintLog(FString text);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float Time = 0.0f;



};
