// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzleGI.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLE_API UPuzzleGI : public UGameInstance
{
	GENERATED_BODY()

	
public:	
	UPuzzleGI(const FObjectInitializer& ObjectInitializer); //GI constructor

	virtual void Init(); //GI init

	
//console commands	
	UFUNCTION(Exec)
	void host();

	UFUNCTION(Exec)
	void join(const FString& Address);
	
};
