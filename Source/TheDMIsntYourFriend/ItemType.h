// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EItemType : uint8 {
	IT_WEAPON     UMETA(DisplayName = "Weapon"),
	IT_ARMOR      UMETA(DisplayName = "Armor"),
	IT_CONSUMABLE UMETA(DisplayName = "Consumable")
};
