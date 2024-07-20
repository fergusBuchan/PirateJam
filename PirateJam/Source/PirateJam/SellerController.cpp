// Fill out your copyright notice in the Description page of Project Settings.


#include "SellerController.h"

void ASellerController::BeginPlay() {
	UISetup();
}

void ASellerController::UISetup() {
	if (!UI) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NO UI!"));
	}
}

void ASellerController::Tick(float DeltaTime) {
	handleInput();
	handleUI();
}

void ASellerController::handleInput() {
}
void ASellerController::handleUI() {
}
