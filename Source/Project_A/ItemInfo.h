// Copyrighted by Devoted Koi 2019

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "Engine/Texture2D.h"
#include "ItemInfo.generated.h"

UENUM(BlueprintType)
enum class EItem_Category : uint8
{
	ITEM_Material				UMETA(DisplayName = "Material"),
	ITEM_Consumable				UMETA(DisplayName = "Consumable"),
	ITEM_Equipment				UMETA(DisplayName = "Equipment")
};

UENUM(BlueprintType)
enum class EEquipment_Category : uint8
{
	EQUIP_Sword					UMETA(DisplayName = "Sword"),
	EQUIP_GreatSword			UMETA(DisplayName = "GreatSword"),
	EQUIP_PickAxe				UMETA(DisplayName = "Pickaxe"),
	EQUIP_Axe					UMETA(DisplayName = "Axe"),
	EQUIP_Helm					UMETA(DisplayName = "Helm"),
	EQUIP_Torso					UMETA(DisplayName = "Torso"),
	EQUIP_Legging				UMETA(DisplayName = "Legging"),
	EQUIP_Shield				UMETA(DisplayName = "Shield"),
	EQUIP_FishingRod			UMETA(DisplayName = "Fishing Rod")
};