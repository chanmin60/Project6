#include "Cyl.h"

// Sets default values
ACyl::ACyl()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACyl::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
}

// Called every frame
void ACyl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveCyl(DeltaTime);
}

void ACyl::MoveCyl(float DeltaTime)
{
	if (IsTruningPointReached())
	{
		FVector ObjectMoveDirection = ObjectVelocity.GetSafeNormal();
		StartLocation = StartLocation + ObjectMoveDirection * ObjectMoveDistance;
		SetActorLocation(StartLocation);
		ObjectVelocity = -ObjectVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (ObjectVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

float ACyl::GetMovedDistance() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

bool ACyl::IsTruningPointReached() const
{
	return GetMovedDistance() > ObjectMoveDistance;
}

