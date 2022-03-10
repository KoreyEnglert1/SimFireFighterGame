// Fill out your copyright notice in the Description page of Project Settings.


#include "FFUnit.h"

// Sets default values
AFFUnit::AFFUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFFUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFFUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFFUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

