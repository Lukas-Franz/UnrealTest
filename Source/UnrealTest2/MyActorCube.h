// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MyActorCube.generated.h"

UCLASS()
class UNREALTEST2_API AMyActorCube : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	AMyActorCube();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, Category = "Visible Setting")
	class UBoxComponent* Box;
};
