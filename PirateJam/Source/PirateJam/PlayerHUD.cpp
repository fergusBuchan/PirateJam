// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "Components/ProgressBar.h"

void UPlayerHUD::SetHealth(float hp, float currentHp) 
{
	if (HealthBar) {
		HealthBar->SetPercent(hp / currentHp);
	}
}