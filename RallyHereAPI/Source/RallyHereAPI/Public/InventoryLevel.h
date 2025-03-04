// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InventoryLevel.generated.h"

/** @defgroup RHAPI_InventoryLevel RallyHere API Model InventoryLevel
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InventoryLevel : public FRHAPI_Model
{
	GENERATED_BODY()

	/**
	* @brief Fills this object with data from the passed in JSON
	*
	* @param [in] JsonValue Data from the API call.
	*
	* @return true if parsing of the JSON data was successful.
	*/
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

	/**
	* @brief Writes the data from this object into the specified JSON Writer stream
	*
	* @param [in] Writer JSON Writer stream to push .
	*/
	virtual void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

	/** @brief Item UUID for this Inventory Level. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid ItemUuid{  };
	/** @brief Gets the value of ItemUuid */
	FGuid& GetItemUuid() { return ItemUuid; }
	/** @brief Gets the value of ItemUuid */
	const FGuid& GetItemUuid() const { return ItemUuid; }
	/** @brief Sets the value of ItemUuid */
	void SetItemUuid(const FGuid& NewValue) { ItemUuid = NewValue;   }
	/** @brief Sets the value of ItemUuid using move semantics */
	void SetItemUuid(FGuid&& NewValue) { ItemUuid = NewValue;   }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 ItemId_Optional{ 0 };
	/** @brief true if ItemId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ItemId_IsSet{ false };
	/** @brief true if ItemId_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ItemId_IsNull{ false };
	/** @brief Gets the value of ItemId_Optional, regardless of it having been set */
	int32& GetItemId() { return ItemId_Optional; }
	/** @brief Gets the value of ItemId_Optional, regardless of it having been set */
	const int32& GetItemId() const { return ItemId_Optional; }
	/** @brief Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetItemId(const int32& DefaultValue) const { if (ItemId_IsSet) return ItemId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false */
	bool GetItemId(int32& OutValue) const { if (ItemId_IsSet && !ItemId_IsNull) OutValue = ItemId_Optional; return ItemId_IsSet; }
	/** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetItemIdOrNull() { if (ItemId_IsSet) return (ItemId_IsNull ? nullptr : &ItemId_Optional); return nullptr; }
	/** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetItemIdOrNull() const { if (ItemId_IsSet) return (ItemId_IsNull ? nullptr : &ItemId_Optional); return nullptr; }
	/** @brief Sets the value of ItemId_Optional and also sets ItemId_IsSet to true */
	void SetItemId(const int32& NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; ItemId_IsNull = false; }
	/** @brief Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics */
	void SetItemId(int32&& NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; ItemId_IsNull = false; }
	/** @brief Clears the value of ItemId_Optional and sets ItemId_IsSet to false */
	void ClearItemId() { ItemId_Optional = 0; ItemId_IsSet = false; ItemId_IsNull = false; }
	/** @brief Checks whether ItemId_Optional has been set */
	bool IsItemIdSet() const { return ItemId_IsSet; }
	/** @brief Returns true if ItemId_Optional is set and matches the default value */
	bool IsItemIdDefaultValue() const { return ItemId_IsSet && ItemId_Optional == 0; }
	/** @brief Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true */
	void SetItemIdToDefault() { SetItemId(0); }
	/** @brief Sets the value explicitly to be treated as null */
	void SetItemIdToNull() { ItemId_IsSet = true; ItemId_IsNull = true; }
	/** @brief Checks whether ItemId_Optional is set to null */
	bool IsItemIdNull() const { return ItemId_IsSet && ItemId_IsNull; }

	/** @brief Current Level */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Level{ 0 };
	/** @brief Gets the value of Level */
	int32& GetLevel() { return Level; }
	/** @brief Gets the value of Level */
	const int32& GetLevel() const { return Level; }
	/** @brief Sets the value of Level */
	void SetLevel(const int32& NewValue) { Level = NewValue;   }
	/** @brief Sets the value of Level using move semantics */
	void SetLevel(int32&& NewValue) { Level = NewValue;   }
	/** @brief Returns true if Level matches the default value */
	bool IsLevelDefaultValue() const { return Level == 0; }
	/** @brief Sets the value of Level to its default  */
	void SetLevelToDefault() { SetLevel(0); }

	/** @brief Current quantity */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Count{ 0 };
	/** @brief Gets the value of Count */
	int32& GetCount() { return Count; }
	/** @brief Gets the value of Count */
	const int32& GetCount() const { return Count; }
	/** @brief Sets the value of Count */
	void SetCount(const int32& NewValue) { Count = NewValue;   }
	/** @brief Sets the value of Count using move semantics */
	void SetCount(int32&& NewValue) { Count = NewValue;   }
	/** @brief Returns true if Count matches the default value */
	bool IsCountDefaultValue() const { return Count == 0; }
	/** @brief Sets the value of Count to its default  */
	void SetCountToDefault() { SetCount(0); }

	/** @brief Quantity required for the next level. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 CountForNextLevel{ 0 };
	/** @brief Gets the value of CountForNextLevel */
	int32& GetCountForNextLevel() { return CountForNextLevel; }
	/** @brief Gets the value of CountForNextLevel */
	const int32& GetCountForNextLevel() const { return CountForNextLevel; }
	/** @brief Sets the value of CountForNextLevel */
	void SetCountForNextLevel(const int32& NewValue) { CountForNextLevel = NewValue;   }
	/** @brief Sets the value of CountForNextLevel using move semantics */
	void SetCountForNextLevel(int32&& NewValue) { CountForNextLevel = NewValue;   }
	/** @brief Returns true if CountForNextLevel matches the default value */
	bool IsCountForNextLevelDefaultValue() const { return CountForNextLevel == 0; }
	/** @brief Sets the value of CountForNextLevel to its default  */
	void SetCountForNextLevelToDefault() { SetCountForNextLevel(0); }
};

/** @} */
