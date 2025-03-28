// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BodyBeginNewSession.generated.h"

/** @defgroup RHAPI_BodyBeginNewSession RallyHere API Model BodyBeginNewSession
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BodyBeginNewSession : public FRHAPI_Model
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

	/** @brief [ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString CountryCode{  };
	/** @brief Gets the value of CountryCode */
	FString& GetCountryCode() { return CountryCode; }
	/** @brief Gets the value of CountryCode */
	const FString& GetCountryCode() const { return CountryCode; }
	/** @brief Sets the value of CountryCode */
	void SetCountryCode(const FString& NewValue) { CountryCode = NewValue;   }
	/** @brief Sets the value of CountryCode using move semantics */
	void SetCountryCode(FString&& NewValue) { CountryCode = NewValue;   }

	/** @brief Unique Identifier for the device a session is started on.  E.g should be the same for multiple users on the same device. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString DeviceId_Optional{  };
	/** @brief true if DeviceId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DeviceId_IsSet{ false };
	/** @brief Gets the value of DeviceId_Optional, regardless of it having been set */
	FString& GetDeviceId() { return DeviceId_Optional; }
	/** @brief Gets the value of DeviceId_Optional, regardless of it having been set */
	const FString& GetDeviceId() const { return DeviceId_Optional; }
	/** @brief Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetDeviceId(const FString& DefaultValue) const { if (DeviceId_IsSet) return DeviceId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false */
	bool GetDeviceId(FString& OutValue) const { if (DeviceId_IsSet) OutValue = DeviceId_Optional; return DeviceId_IsSet; }
	/** @brief Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetDeviceIdOrNull() { if (DeviceId_IsSet) return (&DeviceId_Optional); return nullptr; }
	/** @brief Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetDeviceIdOrNull() const { if (DeviceId_IsSet) return (&DeviceId_Optional); return nullptr; }
	/** @brief Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true */
	void SetDeviceId(const FString& NewValue) { DeviceId_Optional = NewValue; DeviceId_IsSet = true;  }
	/** @brief Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics */
	void SetDeviceId(FString&& NewValue) { DeviceId_Optional = NewValue; DeviceId_IsSet = true;  }
	/** @brief Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false */
	void ClearDeviceId() { DeviceId_IsSet = false;  }
	/** @brief Checks whether DeviceId_Optional has been set */
	bool IsDeviceIdSet() const { return DeviceId_IsSet; }
};

/** @} */
