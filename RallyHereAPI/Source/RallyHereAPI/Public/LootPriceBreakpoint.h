// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "LootPriceCurrencies.h"
#include "LootPriceBreakpoint.generated.h"

/** @defgroup RHAPI_LootPriceBreakpoint RallyHere API Model LootPriceBreakpoint
 *  @{
 */

/**
 * @brief Price Breakpoint for a specific quantity of units to purchase.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_LootPriceBreakpoint : public FRHAPI_Model
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

	/** @brief Amount of units that must be purchased to use this price */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Quantity_Optional{  };
	/** @brief true if Quantity_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Quantity_IsSet{ false };
	/** @brief Gets the value of Quantity_Optional, regardless of it having been set */
	int32& GetQuantity() { return Quantity_Optional; }
	/** @brief Gets the value of Quantity_Optional, regardless of it having been set */
	const int32& GetQuantity() const { return Quantity_Optional; }
	/** @brief Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetQuantity(const int32& DefaultValue) const { if (Quantity_IsSet) return Quantity_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false */
	bool GetQuantity(int32& OutValue) const { if (Quantity_IsSet) OutValue = Quantity_Optional; return Quantity_IsSet; }
	/** @brief Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr */
	int32* GetQuantityOrNull() { if (Quantity_IsSet) return (&Quantity_Optional); return nullptr; }
	/** @brief Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetQuantityOrNull() const { if (Quantity_IsSet) return (&Quantity_Optional); return nullptr; }
	/** @brief Sets the value of Quantity_Optional and also sets Quantity_IsSet to true */
	void SetQuantity(const int32& NewValue) { Quantity_Optional = NewValue; Quantity_IsSet = true;  }
	/** @brief Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics */
	void SetQuantity(int32&& NewValue) { Quantity_Optional = NewValue; Quantity_IsSet = true;  }
	/** @brief Clears the value of Quantity_Optional and sets Quantity_IsSet to false */
	void ClearQuantity() { Quantity_Optional = 1; Quantity_IsSet = false;  }
	/** @brief Checks whether Quantity_Optional has been set */
	bool IsQuantitySet() const { return Quantity_IsSet; }
	/** @brief Returns true if Quantity_Optional is set and matches the default value */
	bool IsQuantityDefaultValue() const { return Quantity_IsSet && Quantity_Optional == 1; }
	/** @brief Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true */
	void SetQuantityToDefault() { SetQuantity(1); }

	/** @brief List of all possible prices that this breakpoint can be purchased with. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_LootPriceCurrencies> Prices_Optional{  };
	/** @brief true if Prices_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Prices_IsSet{ false };
	/** @brief Gets the value of Prices_Optional, regardless of it having been set */
	TArray<FRHAPI_LootPriceCurrencies>& GetPrices() { return Prices_Optional; }
	/** @brief Gets the value of Prices_Optional, regardless of it having been set */
	const TArray<FRHAPI_LootPriceCurrencies>& GetPrices() const { return Prices_Optional; }
	/** @brief Gets the value of Prices_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<FRHAPI_LootPriceCurrencies>& GetPrices(const TArray<FRHAPI_LootPriceCurrencies>& DefaultValue) const { if (Prices_IsSet) return Prices_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Prices_Optional and returns true if it has been set, otherwise returns false */
	bool GetPrices(TArray<FRHAPI_LootPriceCurrencies>& OutValue) const { if (Prices_IsSet) OutValue = Prices_Optional; return Prices_IsSet; }
	/** @brief Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr */
	TArray<FRHAPI_LootPriceCurrencies>* GetPricesOrNull() { if (Prices_IsSet) return (&Prices_Optional); return nullptr; }
	/** @brief Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr */
	const TArray<FRHAPI_LootPriceCurrencies>* GetPricesOrNull() const { if (Prices_IsSet) return (&Prices_Optional); return nullptr; }
	/** @brief Sets the value of Prices_Optional and also sets Prices_IsSet to true */
	void SetPrices(const TArray<FRHAPI_LootPriceCurrencies>& NewValue) { Prices_Optional = NewValue; Prices_IsSet = true;  }
	/** @brief Sets the value of Prices_Optional and also sets Prices_IsSet to true using move semantics */
	void SetPrices(TArray<FRHAPI_LootPriceCurrencies>&& NewValue) { Prices_Optional = NewValue; Prices_IsSet = true;  }
	/** @brief Clears the value of Prices_Optional and sets Prices_IsSet to false */
	void ClearPrices() { Prices_IsSet = false;  }
	/** @brief Checks whether Prices_Optional has been set */
	bool IsPricesSet() const { return Prices_IsSet; }
};

/** @} */