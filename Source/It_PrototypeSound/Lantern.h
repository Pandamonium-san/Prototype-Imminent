// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Lantern.generated.h"

UCLASS()
class IT_PROTOTYPESOUND_API ALantern : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ALantern();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
