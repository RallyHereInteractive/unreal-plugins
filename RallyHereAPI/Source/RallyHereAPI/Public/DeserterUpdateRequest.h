// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "DeserterUpdateRequest.generated.h"

/** @defgroup RHAPI_DeserterUpdateRequest RallyHere API Model DeserterUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_DeserterUpdateRequest : public FRHAPI_Model
{
	GENERATED_BODY()

	/**
	* @brief Fills this object with data from the passed in JSON
	*
	* @param [in] JsonValue Data from the API call.
	*
	* @return true if parsing of the JSON data was successful.
	*/
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

	/**
	* @brief Writes the data from this object into the specified JSON Writer stream
	*
	* @param [in] Writer JSON Writer stream to push .
	*/
	void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime DeserterExpiration{  };
	/** @brief Gets the value of DeserterExpiration */
	FDateTime& GetDeserterExpiration() { return DeserterExpiration; }
	/** @brief Gets the value of DeserterExpiration */
	const FDateTime& GetDeserterExpiration() const { return DeserterExpiration; }
	/** @brief Sets the value of DeserterExpiration */
	void SetDeserterExpiration(const FDateTime& NewValue) { DeserterExpiration = NewValue;  }
	/** @brief Sets the value of DeserterExpiration using move semantics */
	void SetDeserterExpiration(FDateTime&& NewValue) { DeserterExpiration = NewValue;  }

	/** @brief The number of times a player has deserted before the expiration */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 DeserterCount{ 0 };
	/** @brief Gets the value of DeserterCount */
	int32& GetDeserterCount() { return DeserterCount; }
	/** @brief Gets the value of DeserterCount */
	const int32& GetDeserterCount() const { return DeserterCount; }
	/** @brief Sets the value of DeserterCount */
	void SetDeserterCount(const int32& NewValue) { DeserterCount = NewValue;  }
	/** @brief Sets the value of DeserterCount using move semantics */
	void SetDeserterCount(int32&& NewValue) { DeserterCount = NewValue;  }
	/** @brief Returns true if DeserterCount matches the default value */
	bool IsDeserterCountDefaultValue() const { return DeserterCount == 0; }
	/** @brief Sets the value of DeserterCount to its default  */
	void SetDeserterCountToDefault() { DeserterCount = 0;  }

	/** @brief Custom data about a players desertion status */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> CustomData_Optional{  };
	/** @brief true if CustomData_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CustomData_IsSet{ false };
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
	bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
	void SetCustomData(const TMap<FString, FString>& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics */
	void SetCustomData(TMap<FString, FString>&& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }
};

/** @} */