#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cyl.generated.h"

UCLASS()
class PROJECT6_API ACyl : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACyl();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="ObjectSettings")
	FVector ObjectVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")
	float ObjectMoveDistance = 100;

	FVector StartLocation;

	void MoveCyl(float DeltaTime);

	float GetMovedDistance() const;

	bool IsTruningPointReached() const;
};
