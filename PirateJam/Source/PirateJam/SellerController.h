// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SellerController.generated.h"

/**
 *  sellercontroller handles player inputs and interfaces with the UI
 *  this is just so that the main potionSeller class is less cluttered
 */
UCLASS()
class PIRATEJAM_API ASellerController : public APlayerController
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void UISetup();
	void handleInput();
	void handleUI();

	UUserWidget* UI;
};
