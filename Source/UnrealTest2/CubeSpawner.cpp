// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest2.h"
#include "CubeSpawner.h"
#include "MyActorCube.h"


// Sets default values for this component's properties
UCubeSpawner::UCubeSpawner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCubeSpawner::BeginPlay()
{
	Super::BeginPlay();

	if (MaxBoxes < 16)
	{
		MaxBoxes = 16;
	}

	UWorld *world = GetWorld();
	FRotator SpawnRotation = FRotator();
	for (size_t i = 0; i < MaxBoxes; i++)
	{
		FVector SpawnLocation = FVector(1.0 * 100, i * 100, 3.0 * 100);
		world->SpawnActor<AMyActorCube>(AMyActorCube::StaticClass(), SpawnLocation, SpawnRotation);
	}
	// ...
	
}


// Called every frame
void UCubeSpawner::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

