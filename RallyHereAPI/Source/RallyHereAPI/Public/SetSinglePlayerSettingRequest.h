// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SetSinglePlayerSettingRequest.generated.h"

/** @defgroup RHAPI_SetSinglePlayerSettingRequest RallyHere API Model SetSinglePlayerSettingRequest
 *  @{
 */

/**
 * @brief Updatable contents of a setting document for a player
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SetSinglePlayerSettingRequest : public FRHAPI_Model
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

	/** @brief Setting Type Version to update setting for.  Must be a valid version for the setting type */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 V{ 0 };
	/** @brief Gets the value of V */
	int32& GetV() { return V; }
	/** @brief Gets the value of V */
	const int32& GetV() const { return V; }
	/** @brief Sets the value of V */
	void SetV(const int32& NewValue) { V = NewValue;   }
	/** @brief Sets the value of V using move semantics */
	void SetV(int32&& NewValue) { V = NewValue;   }
	/** @brief Returns true if V matches the default value */
	bool IsVDefaultValue() const { return V == 0; }
	/** @brief Sets the value of V to its default  */
	void SetVToDefault() { SetV(0); }

	/** @brief New value document for the setting.  Must conform to the jsonschema defined for the setting type+version */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_JsonValue Value{  };
	/** @brief true if Value has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Value_IsNull{ false };
	/** @brief Gets the value of Value */
	FRHAPI_JsonValue& GetValue() { return Value; }
	/** @brief Gets the value of Value */
	const FRHAPI_JsonValue& GetValue() const { return Value; }
	/** @brief Sets the value of Value */
	void SetValue(const FRHAPI_JsonValue& NewValue) { Value = NewValue;  Value_IsNull = false; }
	/** @brief Sets the value of Value using move semantics */
	void SetValue(FRHAPI_JsonValue&& NewValue) { Value = NewValue;  Value_IsNull = false; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetValueToNull() { Value_IsNull = true; }
	/** @brief Checks whether Value is set to null */
	bool IsValueNull() const { return  Value_IsNull; }
};

/** @} */
