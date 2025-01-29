// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"


AMovingPlatform::AMovingPlatform()
{
    //Set up tick
    PrimaryActorTick.bCanEverTick = true;
    //SetMoblity to movable so it can move
    SetMobility(EComponentMobility::Movable);

}

void AMovingPlatform::BeginPlay()
{
    Super::BeginPlay();

    //If server - allow to replicate
    if (HasAuthority())
    {
        SetReplicates(true);
        SetReplicateMovement(true);   
    }

}

void AMovingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);



    //check if "HasAuthority" aka is a Server
    if (HasAuthority())
    {

        FVector Location = GetActorLocation();  //save actor location in var
        //Calculate difference between TargetLocation and ActorLocation and normalize
        FVector GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);  //Target loc. is local space val and location global!!!
        FVector Direction = (GlobalTargetLocation - Location).GetSafeNormal();   
        Location += MoveValues * DeltaTime * Direction;     //Adjust location bo speed, delta and direction
        SetActorLocation(Location);
  
    }
}
