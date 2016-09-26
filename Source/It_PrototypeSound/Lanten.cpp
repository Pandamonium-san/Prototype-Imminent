// Fill out your copyright notice in the Description page of Project Settings.

#include "It_PrototypeSound.h"
#include "Lanten.h"


// Sets default values
ALanten::ALanten()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALanten::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALanten::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ALanten::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	//THIS IS TESTING FOR COOL GIT

	//BUT THIS IS EVEN COOLER

	//BALDER IS NOT AS COOL AS THIS
}

