// Fill out your copyright notice in the Description page of Project Settings.


#include "WayPoint.h"
#include "Engine.h"

// Sets default values
AWayPoint::AWayPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Sphere = CreateDefaultSubobject<UStaticMeshComponent>("SphereObject");
	//Arrow = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");
	SP = CreateDefaultSubobject<USplineComponent>("SplineObject");
	RootComponent = SP;

}

// Called when the game starts or when spawned
void AWayPoint::BeginPlay()
{
	Super::BeginPlay();
	TotalDistance = SP->GetSplineLength();
	FString distance = " total distance" + FString::SanitizeFloat(TotalDistance);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, *distance);
	/*
	//TotalDistance = SP->GetSplineLength();
	TotalPoint = 0;
	FString distance = " total distance" + FString::SanitizeFloat(TotalDistance);
	FString duration = " duration" + FString::SanitizeFloat(SP->Duration);
	
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, *distance);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, *duration);

	*/
	
}

// Called every frame
void AWayPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	int factor = 1000;
	FVector pos = Cube->GetActorLocation();

	TotalDistance += factor * DeltaTime;
	FVector p = SP->GetLocationAtDistanceAlongSpline(TotalDistance, ESplineCoordinateSpace::World);	
	FQuat dir = SP->GetQuaternionAtDistanceAlongSpline(TotalDistance, ESplineCoordinateSpace::World);
	
	FTransform t = FTransform();
	t.SetLocation(p);
	t.SetRotation(dir);
	t.SetScale3D(Cube->GetActorScale3D());

	Cube->SetActorTransform(t, false, nullptr, ETeleportType::None);

	FString a = " p " +  p.ToString();
	FString b = " dir " + dir.ToString();

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, *a);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, *b);
	*/
	
}

void AWayPoint::SetActorHeight(float Height)
{
	this->SetActorLocation(FVector( this->GetActorLocation().X, this->GetActorLocation().Y, Height));
}



