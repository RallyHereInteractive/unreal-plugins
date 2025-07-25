// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ManyPlayerOrderResponse.generated.h"

/** @defgroup RHAPI_ManyPlayerOrderResponse RallyHere API Model ManyPlayerOrderResponse
 *  @{
 */

/**
 * @brief Response listing order IDs for a bulk order request.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ManyPlayerOrderResponse : public FRHAPI_Model
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

	/** @brief Order IDs submitted in the request. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FString> OrderIds_Optional{  };
	/** @brief true if OrderIds_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool OrderIds_IsSet{ false };
	/** @brief Gets the value of OrderIds_Optional, regardless of it having been set */
	TArray<FString>& GetOrderIds() { return OrderIds_Optional; }
	/** @brief Gets the value of OrderIds_Optional, regardless of it having been set */
	const TArray<FString>& GetOrderIds() const { return OrderIds_Optional; }
	/** @brief Gets the value of OrderIds_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<FString>& GetOrderIds(const TArray<FString>& DefaultValue) const { if (OrderIds_IsSet) return OrderIds_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of OrderIds_Optional and returns true if it has been set, otherwise returns false */
	bool GetOrderIds(TArray<FString>& OutValue) const { if (OrderIds_IsSet) OutValue = OrderIds_Optional; return OrderIds_IsSet; }
	/** @brief Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr */
	TArray<FString>* GetOrderIdsOrNull() { if (OrderIds_IsSet) return (&OrderIds_Optional); return nullptr; }
	/** @brief Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr */
	const TArray<FString>* GetOrderIdsOrNull() const { if (OrderIds_IsSet) return (&OrderIds_Optional); return nullptr; }
	/** @brief Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true */
	void SetOrderIds(const TArray<FString>& NewValue) { OrderIds_Optional = NewValue; OrderIds_IsSet = true;  }
	/** @brief Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true using move semantics */
	void SetOrderIds(TArray<FString>&& NewValue) { OrderIds_Optional = NewValue; OrderIds_IsSet = true;  }
	/** @brief Clears the value of OrderIds_Optional and sets OrderIds_IsSet to false */
	void ClearOrderIds() { OrderIds_IsSet = false;  }
	/** @brief Checks whether OrderIds_Optional has been set */
	bool IsOrderIdsSet() const { return OrderIds_IsSet; }
};

/** @} */
