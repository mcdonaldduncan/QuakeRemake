// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "QuakeRemakeHUD.generated.h"

UCLASS()
class AQuakeRemakeHUD : public AHUD
{
	GENERATED_BODY()

public:
	AQuakeRemakeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

