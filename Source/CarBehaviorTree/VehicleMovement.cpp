// Fill out your copyright notice in the Description page of Project Settings.



#include "VehicleMovement.h"
#include "Engine.h"
#include "Kismet/KismetMathLibrary.h"
#include "UnrealMathUtility.h"



AVehicleMovement::AVehicleMovement()
{

}

void AVehicleMovement::BeginPlay()
{
	Super::BeginPlay();
	if (!GEngine) return;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("begin play VEH MOVEMENT "));
}

void AVehicleMovement::PrintLog(FString text)
{
	if (!GEngine) return;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("begin play VEH MOVEMENT "));
}

 FVehicleControl& AVehicleMovement::GetLastControl()
{
	return LastControl;

}

FTransform AVehicleMovement::GetVehicleTransform()
{
	return GetActorTransform();
}

FVector AVehicleMovement::GetVehicleLocation()
{
	return GetActorLocation();
}

FVector AVehicleMovement::GetVehicleForward()
{
	return GetActorForwardVector();
}

FVector AVehicleMovement::GetVehicleVelocity()
{
	return GetVelocity();
}

float AVehicleMovement::GetTraveledDistance()
{
	return TravelDistance;
}

AWayPoint* AVehicleMovement::GetWayPoint()
{
	return LastControl.WayPoint;
}

void AVehicleMovement::SetLocation(FVector Location)
{
	this->SetActorLocation(Location);
}

void AVehicleMovement::SetControl(FVehicleControl Control)
{
	this->GetVehicleMovement()->SetThrottleInput(Control.ThrottleValue);
	this->GetVehicleMovement()->SetSteeringInput(Control.SteeringValue);
}

void AVehicleMovement::SetSteeringValue(float SteeringValue)
{
	LastControl.SteeringValue = SteeringValue;
}

void AVehicleMovement::SetThrottleValue(float ThrottleValue)
{
	LastControl.ThrottleValue = ThrottleValue;
}

void AVehicleMovement::SetBrakeValue(float BrakeValue)
{
	LastControl.BrakeValue = BrakeValue;
}

void AVehicleMovement::SetWayPoint(AWayPoint* WayPoint)
{
	LastControl.WayPoint = WayPoint;
}

void AVehicleMovement::SetTraveledDistance(float Distance)
{
	TravelDistance = Distance;
}

void AVehicleMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


/*
	this->Time += DeltaTime;

	//s = v * t
	FVector delta_distance = this->GetVelocity() * DeltaTime * C1;
	TravelDistance += delta_distance.Size();

	//getting car location and rotation
	FVector car_loc = this->GetActorLocation();
	FRotator car_rot = this->GetActorRotation();

	//car forward vector
	FVector car_forward = this->GetActorForwardVector();
	UKismetSystemLibrary::DrawDebugArrow(this, car_loc, car_loc + car_forward * 1000, 500, FColor::Red, 0.1, 20);

	//next location point direction
	FVector next_direction = WayPoint->SP->GetDirectionAtDistanceAlongSpline(this->TravelDistance, ESplineCoordinateSpace::World);
	UKismetSystemLibrary::DrawDebugArrow(this, car_loc, car_loc + next_direction * 1000, 500, FColor::Blue, 0.1, 20);

	//nearest point
	FVector nearest_spline_point = WayPoint->SP->FindLocationClosestToWorldLocation(car_loc, ESplineCoordinateSpace::World);

	//vector from car to nearest spline (NORMALIZED)
	FVector car_move_direction = (nearest_spline_point - car_loc);
	car_move_direction.Z = 0;
	if (car_move_direction.Size() > DistanceThreshold) {
		car_move_direction = car_move_direction.GetSafeNormal();
	}
	else {
		car_move_direction = FVector::ZeroVector;
	}
	this->PrintLog("dir " + FString::SanitizeFloat(car_move_direction.Size()));

	UKismetSystemLibrary::DrawDebugArrow(this, car_loc, car_loc + car_move_direction * 1000, 500, FColor::Magenta, 0.1, 20);

	//resultant from 3 vector
	FVector resultant_vector = (next_direction + car_forward + car_move_direction);
	resultant_vector = resultant_vector.GetSafeNormal();
	UKismetSystemLibrary::DrawDebugArrow(this, car_loc, car_loc + resultant_vector * 1000, 500, FColor::Cyan, 0.1, 20);

	float dot_product = FMath::RadiansToDegrees(acosf(FVector::DotProduct(car_forward, resultant_vector)));
	FVector cross_product = FVector::CrossProduct(car_forward, resultant_vector);

	if (cross_product.Z >= 0)
	{
		float steer_value = UKismetMathLibrary::MapRangeClamped(dot_product, 0, 90, 0, 1);
		//this->PrintLog( " + " + FString::SanitizeFloat(steer_value));
		this->GetVehicleMovement()->SetSteeringInput(steer_value);
	}
	else {
		float steer_value = UKismetMathLibrary::MapRangeClamped(dot_product, 0, 90, 0, -1);
		//this->PrintLog(" - " + FString::SanitizeFloat(steer_value));
		this->GetVehicleMovement()->SetSteeringInput(steer_value);
	}

*/
	
}


