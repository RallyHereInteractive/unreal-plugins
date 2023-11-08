// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "RH_Properties.generated.h"

/** @defgroup Assets RallyHere Properties
 *  @{
 */

 /**
 * @brief base struct for wrapping legacy ids that were converted to Guids to keep legacy support
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_LegacyIdToGuid
{
	GENERATED_USTRUCT_BODY()

	FRH_LegacyIdToGuid() : Id(FGuid()), LegacyId(INDEX_NONE)
	{
	}

	FRH_LegacyIdToGuid(const FGuid& inGuid) : Id(inGuid), LegacyId(INDEX_NONE)
	{
	}

	FRH_LegacyIdToGuid(int32 inLegacyId) : Id(FGuid()), LegacyId(inLegacyId)
	{
	}

	FRH_LegacyIdToGuid(const FGuid& inGuid, int32 inLegacyId) : Id(inGuid), LegacyId(inLegacyId)
	{
	}

	operator int32() const { return LegacyId; }

	operator FGuid() const { return Id; }

	bool operator==(const FRH_LegacyIdToGuid& Other) const
	{
		return ((Id.IsValid() && Id == Other.Id) ||
			(LegacyId != INDEX_NONE && LegacyId == Other.LegacyId));
	}

	bool operator!=(const FRH_LegacyIdToGuid& Other) const
	{
		return ((Id.IsValid() && Id != Other.Id) ||
			(LegacyId != INDEX_NONE && LegacyId != Other.LegacyId));
	}

	/**
	* @brief Checks if there is a Id or Legacy Id assigned
	*/
	bool IsValid() const { return Id.IsValid() || LegacyId != INDEX_NONE; }

	/**
	* @brief Gets the Calculated Combined Hash for the Id
	*/
	uint32 GetCalculatedHash() const { return HashCombine(GetTypeHash(Id), GetTypeHash(LegacyId)); }

	/**
	* @brief Gets a string representation of the Id or Legacy Id
	*/
	inline FString ToString() const
	{
		if (Id.IsValid())
		{
			return Id.ToString();
		}
		else if (LegacyId != INDEX_NONE)
		{
			return FString::Printf(TEXT("%d"), LegacyId);
		}

		return TEXT("");
	}

	/**
	* @brief Legacy support for compatibility when replacing ints with FRH_LegacyIdToGuid
	*/
	bool SerializeFromMismatchedTag(struct FPropertyTag const& Tag, FStructuredArchive::FSlot Slot)
	{
		if (Tag.Type == NAME_IntProperty)
		{
			int32 OldValue;
			Slot << OldValue;
			LegacyId = OldValue;
			return true;
		}
		else if (Tag.Type == NAME_Int64Property)
		{
			int64 OldValue;
			Slot << OldValue;
			LegacyId = OldValue;
			return true;
		}

		return false;
	};

protected:
	/**
	* @brief The id associated with the item that matches the value in the database.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rally Here Id")
	FGuid Id;

	/**
	* @brief The legacy id associated with the item that matches the value in the database.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rally Here Id")
	int32 LegacyId;
};

inline uint32 GetTypeHash(const FRH_LegacyIdToGuid& A)
{
	return A.GetCalculatedHash();
}

inline bool operator==(int32 Lhs, const FRH_LegacyIdToGuid& Rhs)
{
	return Lhs == Rhs.operator int32();
}
inline bool operator==(const FGuid& Lhs, const FRH_LegacyIdToGuid& Rhs)
{
	return Lhs == Rhs.operator FGuid();
}

 /**
  * @brief Wrapper for a Rally Here Item Id to support custom editor tooling to modify.
  */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_ItemId : public FRH_LegacyIdToGuid
{
	GENERATED_USTRUCT_BODY()

	FRH_ItemId() : FRH_LegacyIdToGuid()
	{
	}

	FRH_ItemId(const FGuid& inGuid) : FRH_LegacyIdToGuid(inGuid)
	{
	}

	FRH_ItemId(int32 inLegacyItemId) : FRH_LegacyIdToGuid(inLegacyItemId)
	{
	}

	FRH_ItemId(const FGuid& inGuid, int32 inLegacyItemId) : FRH_LegacyIdToGuid(inGuid, inLegacyItemId)
	{
	}
};

template<>
struct TStructOpsTypeTraits<FRH_ItemId>
	: public TStructOpsTypeTraitsBase2<FRH_ItemId>
{
	enum
	{
		WithStructuredSerializeFromMismatchedTag = true,
	};
};

/**
  * @brief Wrapper for a Rally Here Loot Id to support custom editor tooling to modify.
  */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_LootId : public FRH_LegacyIdToGuid
{
	GENERATED_USTRUCT_BODY()

	FRH_LootId() : FRH_LegacyIdToGuid()
	{
	}

	FRH_LootId(const FGuid& inGuid) : FRH_LegacyIdToGuid(inGuid)
	{
	}

	FRH_LootId(int32 inLegacyLootId) : FRH_LegacyIdToGuid(inLegacyLootId)
	{
	}

	FRH_LootId(const FGuid& inGuid, int32 inLegacyLootId) : FRH_LegacyIdToGuid(inGuid, inLegacyLootId)
	{
	}
};

template<>
struct TStructOpsTypeTraits<FRH_LootId>
	: public TStructOpsTypeTraitsBase2<FRH_LootId>
{
	enum
	{
		WithStructuredSerializeFromMismatchedTag = true,
	};
};

/**
* @brief Properties Blueprint Library with helper methods for inventory item struct.
*/
UCLASS(Config = RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_RallyHerePropertiesBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/* @brief Helper for comparing FRM_LegacyIdToGuid in editor */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Equal (FRH_LegacyIdToGuid)", CompactNodeTitle = "=="), Category = "Rally Here Id")
	static bool EqualEqual_FRH_LegacyIdToGuid(const FRH_LegacyIdToGuid& A, const FRH_LegacyIdToGuid& B)
	{
		return A == B;
	}

	/* @brief Helper for comparing FRH_LootId in editor */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Equal (FRH_LootId)", CompactNodeTitle = "==", BlueprintThreadSafe), Category = "Rally Here Id")
	static bool EqualEqual_FRH_LootId(const FRH_LootId& A, const FRH_LootId& B)
	{
		return A == B;
	}

	/* @brief Helper for comparing FRH_ItemId in editor */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Equal (FRH_ItemId)", CompactNodeTitle = "==", BlueprintThreadSafe), Category = "Rally Here Id")
	static bool EqualEqual_FRH_ItemId(const FRH_ItemId& A, const FRH_ItemId& B)
	{
		return A == B;
	}
};

/** @} */