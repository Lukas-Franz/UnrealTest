// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "UnrealTest2HUD.generated.h"

UCLASS()
class AUnrealTest2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealTest2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

