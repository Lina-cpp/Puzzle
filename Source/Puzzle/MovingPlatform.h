// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLE_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

	//Move speed
	UPROPERTY(EditAnywhere, Category="Editable Vars", DisplayName="AxisSpeed")
	float Speed;
	//Location where Platform will move to
	UPROPERTY(EditAnywhere, Category="Editable Vars", meta=(MakeEditWidget="true"))
	FVector TargetLocation;

	//functions to add/remove triggers
	void AddActiveTrigger();
	void RemoveActiveTrigger();

private:
	
	FVector GlobalTargetLocation;
	FVector	GlobalStartLocation;

	UPROPERTY(EditAnywhere)
		int ActiveTriggers = 1; //Triggers for platforms, if 0 platform wont move
};
