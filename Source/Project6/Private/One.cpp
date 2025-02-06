// Fill out your copyright notice in the Description page of Project Settings.


#include "One.h"

// Sets default values
AOne::AOne()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOne::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateOne(DeltaTime);
}

void AOne::RotateOne(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}
