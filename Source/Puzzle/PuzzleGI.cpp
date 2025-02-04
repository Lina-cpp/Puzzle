// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleGI.h"

UPuzzleGI::UPuzzleGI(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor GI"));	//always up, even in editor
}


void UPuzzleGI::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Init GI"));		//call only when game starts
}
