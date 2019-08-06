// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include <vector>
#include "VehicleMovement.h"
#include <Runtime\AIModule\Classes\BehaviorTree\BehaviorTreeComponent.h>
#include <Runtime\AIModule\Classes\BehaviorTree\BlackboardComponent.h>
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

	std::vector<AVehicleMovement> OtherVehicle;

public:

	void Tick(float DeltaTime) override;

	AVehicleMovement* Vehicle;

	UPROPERTY(EditAnywhere)
	float time = 0.0;

	/*
	using a forum post template 
		https://forums.unrealengine.com/community/community-content-tools-and-tutorials/188-behavior-tree-tutorial?130-Behavior-Tree-Tutorial=&highlight=mikepurvis%20AI%20Behavior%20Tree
	*/

	UPROPERTY(transient)
	UBlackboardComponent *BlackboardComp;

	UPROPERTY(transient)
	UBehaviorTreeComponent *BehaviorComp;

	float SpeedLimit = 30.0;

	int StopSignLocation;
	bool IsNormalRoad = true;

	float CalculateSteeringValue(float delta);

	UFUNCTION(BlueprintCallable)
	void VahicleBrake(float BrakeValue);

	float Move(float Speed);

	float Stop(float Speed);

	void PrintLog(FString Text);
};
