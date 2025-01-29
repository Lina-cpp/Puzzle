// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"


AMovingPlatform::AMovingPlatform()
{
    //Set up tick
    PrimaryActorTick.bCanEverTick = true;
    //SetMoblity to movable so it can move
    SetMobility(EComponentMobility::Movable);

}

void AMovingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);



    //check if "HasAuthority" aka is a Server
    if (HasAuthority())
    {
        //get current location and add x every tick(DeltaTime)
        FVector Location = GetActorLocation();
        //multiplies Location Vector by MoveValues(BP editable) vector x DeltaTime
        Location += FVector(MoveValues * DeltaTime);
        //SetActorLocation in tick by new Location
        SetActorLocation(Location); 
    }
}