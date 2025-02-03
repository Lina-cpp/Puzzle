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

    GlobalStartLocation = GetActorLocation();
    GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);  //Target loc. is local space val and location global!!!
    
}

void AMovingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (ActiveTriggers > 0)
    {
        //check if "HasAuthority" aka is a Server
        if (HasAuthority())
        {

            FVector Location = GetActorLocation();  //save actor location in var
            //Calculate difference between TargetLocation and GlobalActorLocation and normalize
            float JourneyLength = (GlobalTargetLocation - GlobalStartLocation).Size(); //whole path
            float JourneyTraveled = (Location - GlobalStartLocation).Size();           //where on path platform currently is

            if (JourneyTraveled >= JourneyLength)
            {
                //When platform reach target - swap targets so it would go back
                FVector Swap = GlobalStartLocation;
                GlobalStartLocation = GlobalTargetLocation;
                GlobalTargetLocation = Swap;
            }

            //MovePlatform
            FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();   
            Location += Speed * DeltaTime * Direction;     //Adjust location bo speed, delta and direction
            SetActorLocation(Location);
  
        } 
    }


}


void AMovingPlatform::AddActiveTrigger()
{
    ActiveTriggers++; //add trigger
}


void AMovingPlatform::RemoveActiveTrigger()
{
    if (ActiveTriggers > 0)
    {
        ActiveTriggers--; //subtract trigger if above 0
    }
}