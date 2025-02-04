// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleGI.h"
#include "Engine.h"

UPuzzleGI::UPuzzleGI(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor GI"));	//always up, even in editor
}

void UPuzzleGI::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Init GI"));		//call only when game starts
}

//Console Commands

	//Hosting server
void UPuzzleGI::host()
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return; //make sure engine is not null
	Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, TEXT("Hosting server!"));


	UWorld* World = GetWorld(); //Get world so we can use "ServerTraveling"
	if (!ensure(World != nullptr)) return; //Make sure world isn't null

	World->ServerTravel("/Game/Levels/ThirdPersonMap?listen");	//Moves every player from current world to new - example from lobby to map
}

void UPuzzleGI::join(const FString& Address)
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	if (Address.IsEmpty())
	{
		Engine->AddOnScreenDebugMessage(0, 5, FColor::Red, TEXT("Missing IP Adress"));
	}
	else
	{
		Engine->AddOnScreenDebugMessage(0, 5, FColor::Green,
			FString::Printf(TEXT("Joining %s"), *Address)); //Printig "joining" and %s means reading Address
		
	}


	
}


