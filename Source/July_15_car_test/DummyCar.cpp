// Fill out your copyright notice in the Description page of Project Settings.


#include "DummyCar.h"
#include "Engine.h"
#include "Kismet/KismetMathLibrary.h"


ADummyCar::ADummyCar()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = 1;

	
}

void ADummyCar::BeginPlay()
{
	Super::BeginPlay();

	//WayPoint->SetActorHeight(this->GetActorLocation().Z);
	this->GetVehicleMovement()->SetThrottleInput(Throttle);
	//this->GetVehicleMovement()->SetSteeringInput(0.5f); 
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("begin play Dummy Car "));
}

void ADummyCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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

}

void ADummyCar::PrintLog(FString text)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::White, *text);
}
