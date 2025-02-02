// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformTrigger.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlatformTrigger::APlatformTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(FName("TriggerVolume")); //create defauly object -> a box compoent -> of name
		RootComponent = TriggerVolume; //assign root to the box

	
	TriggerMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("TriggerMesh"));
	
	//if (!ensure(TriggerMesh != nullptr)) return; check if its nullpointer
	

	ConstructorHelpers::FObjectFinder<UStaticMesh>MESH(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MESH.Succeeded())
	{
		TriggerMesh->SetStaticMesh(Cast<UStaticMesh>(MESH.Object));
	}
	TriggerMesh->SetupAttachment(TriggerVolume);	//attach TriggerMesh to TriggerVolume
	TriggerMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -100.0f));

	
}

// Called when the game starts or when spawned
void APlatformTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlatformTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

