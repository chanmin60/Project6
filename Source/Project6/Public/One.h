// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "One.generated.h"

UCLASS()
class PROJECT6_API AOne : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOne();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")
	FRotator RotationVelocity = FRotator(0, 0, 0);

	void RotateOne(float DeltaTime);

};
