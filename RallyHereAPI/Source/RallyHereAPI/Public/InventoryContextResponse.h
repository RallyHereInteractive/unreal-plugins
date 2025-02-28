// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Inventory.h"
#include "InventoryContextResponse.generated.h"

/** @defgroup RHAPI_InventoryContextResponse RallyHere API Model InventoryContextResponse
 *  @{
 */

/**
 * @brief Inventory Context for a Player.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InventoryContextResponse : public FRHAPI_Model
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

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_Inventory Inventory_Optional{  };
	/** @brief true if Inventory_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Inventory_IsSet{ false };
	/** @brief Gets the value of Inventory_Optional, regardless of it having been set */
	FRHAPI_Inventory& GetInventory() { return Inventory_Optional; }
	/** @brief Gets the value of Inventory_Optional, regardless of it having been set */
	const FRHAPI_Inventory& GetInventory() const { return Inventory_Optional; }
	/** @brief Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_Inventory& GetInventory(const FRHAPI_Inventory& DefaultValue) const { if (Inventory_IsSet) return Inventory_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false */
	bool GetInventory(FRHAPI_Inventory& OutValue) const { if (Inventory_IsSet) OutValue = Inventory_Optional; return Inventory_IsSet; }
	/** @brief Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_Inventory* GetInventoryOrNull() { if (Inventory_IsSet) return (&Inventory_Optional); return nullptr; }
	/** @brief Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_Inventory* GetInventoryOrNull() const { if (Inventory_IsSet) return (&Inventory_Optional); return nullptr; }
	/** @brief Sets the value of Inventory_Optional and also sets Inventory_IsSet to true */
	void SetInventory(const FRHAPI_Inventory& NewValue) { Inventory_Optional = NewValue; Inventory_IsSet = true;  }
	/** @brief Sets the value of Inventory_Optional and also sets Inventory_IsSet to true using move semantics */
	void SetInventory(FRHAPI_Inventory&& NewValue) { Inventory_Optional = NewValue; Inventory_IsSet = true;  }
	/** @brief Clears the value of Inventory_Optional and sets Inventory_IsSet to false */
	void ClearInventory() { Inventory_IsSet = false;  }
	/** @brief Checks whether Inventory_Optional has been set */
	bool IsInventorySet() const { return Inventory_IsSet; }
};

/** @} */
