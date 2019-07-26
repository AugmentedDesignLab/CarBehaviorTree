// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Components/SplineComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Actor.h"
#include "WayPoint.generated.h"

UCLASS()
class JULY_15_CAR_TEST_API AWayPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWayPoint();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere)
	//ADummyCar* CarRef;


	UPROPERTY(EditAnywhere)
	USplineComponent *SP;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent *Sphere;

	UPROPERTY(EditAnywhere)
	UArrowComponent *Arrow;

	void SetActorHeight(float Height);

	float TotalDistance = 0.0;

};
