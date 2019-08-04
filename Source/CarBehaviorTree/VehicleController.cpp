// Fill out your copyright notice in the Description page of Project Settings.

#include "VehicleController.h"
#include "Engine.h"
#include "UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"

AVehicleController::AVehicleController() 
{
	PrimaryActorTick.bCanEverTick = true;
	PrintLog("Cosntructor");
}

void AVehicleController::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("begin play  "));
	Vehicle = Cast<AVehicleMovement>(this->GetPawn());
	PrintLog("inside controller beginplay" + FString::SanitizeFloat(Vehicle->LastControl.SteeringValue));
	if (Vehicle == nullptr)
	{
		PrintLog("nullptr");
	}
}

void AVehicleController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Inside Tick AI Contreoller"));
	PrintLog("Inside Tick AI Contreoller");
	FVehicleControl new_control;
	new_control.SteeringValue = CalculateSteeringValue(DeltaTime);
	new_control.ThrottleValue = Move(1.0);
	Vehicle->SetControl(new_control);

}



float AVehicleController::CalculateSteeringValue(float delta)
{
	float steer_value = 0.0;
	FVector delta_distance = Vehicle->GetVelocity() * delta * 0.036;
	float distance_value = delta_distance.Size() * 27.78;
	Vehicle->SetTraveledDistance(Vehicle->GetTraveledDistance() + distance_value);
	FVector veh_loc = Vehicle->GetActorLocation();

	FVector veh_forward = Vehicle->GetVehicleForward();
	UKismetSystemLibrary::DrawDebugArrow(this, veh_loc, veh_loc + veh_forward * 1000, 500, FColor::Red, 0.1, 20);

	FVector next_direction = Vehicle->LastControl.WayPoint->SP->GetDirectionAtDistanceAlongSpline(Vehicle->GetTraveledDistance(), ESplineCoordinateSpace::World);
	UKismetSystemLibrary::DrawDebugArrow(this, veh_loc, veh_loc + next_direction * 1000, 500, FColor::Blue, 0.1, 20);

	FVector nearest_spline_point = Vehicle->LastControl.WayPoint->SP->FindLocationClosestToWorldLocation(veh_loc, ESplineCoordinateSpace::World);
	
	FVector veh_move_direction = (nearest_spline_point - veh_loc);
	veh_move_direction.Z = 0;
	if (veh_move_direction.Size() > Vehicle->LastControl.DistanceThreshold) {
		veh_move_direction = veh_move_direction.GetSafeNormal();
	}
	else {
		veh_move_direction = FVector::ZeroVector;
	}

	UKismetSystemLibrary::DrawDebugArrow(this, veh_loc, veh_loc + veh_move_direction * 1000, 500, FColor::Magenta, 0.1, 20);

	//resultant from 3 vector
	FVector resultant_vector = (next_direction + veh_forward + veh_move_direction);
	resultant_vector = resultant_vector.GetSafeNormal();
	UKismetSystemLibrary::DrawDebugArrow(this, veh_loc, veh_loc + resultant_vector * 1000, 500, FColor::Cyan, 0.1, 20);

	float dot_product = FMath::RadiansToDegrees(acosf(FVector::DotProduct(veh_forward, resultant_vector)));
	FVector cross_product = FVector::CrossProduct(veh_forward, resultant_vector);

	if (cross_product.Z >= 0)
	{
		steer_value = UKismetMathLibrary::MapRangeClamped(dot_product, 0, 90, 0, 1);
	}
	else {
		steer_value = UKismetMathLibrary::MapRangeClamped(dot_product, 0, 90, 0, -1);
	}


	return steer_value;
}

void AVehicleController::VahicleBrake(float BrakeValue)
{
	Vehicle->SetBrakeValue(BrakeValue);
}

float AVehicleController::Move(float Speed)
{
	if (Speed >= SpeedLimit)
	{
		return Stop(Speed);
	}
	else if (Speed >= SpeedLimit - 10.0f)
	{
		return 0.5f;
	}
	else
	{
		return 1.0f;
	}
}

float AVehicleController::Stop(float Speed)
{
	return (Speed >= 1.0f ? -Speed / SpeedLimit : 0.0f);
}

void AVehicleController::PrintLog(FString Text)
{
	Vehicle->PrintLog(Text);
}
