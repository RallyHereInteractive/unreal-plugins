// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "PlatformScout.generated.h"

/** @defgroup RHAPI_PlatformScout RallyHere API Model PlatformScout
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformScout : public FRHAPI_Model
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

	/** @brief UUID of player who is the designated scout for the platform session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PlayerUuid{  };
	/** @brief Gets the value of PlayerUuid */
	FGuid& GetPlayerUuid() { return PlayerUuid; }
	/** @brief Gets the value of PlayerUuid */
	const FGuid& GetPlayerUuid() const { return PlayerUuid; }
	/** @brief Sets the value of PlayerUuid */
	void SetPlayerUuid(const FGuid& NewValue) { PlayerUuid = NewValue;   }
	/** @brief Sets the value of PlayerUuid using move semantics */
	void SetPlayerUuid(FGuid&& NewValue) { PlayerUuid = NewValue;   }

	/** @brief Which platform this specified player is a scout for */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Platform Platform{  };
	/** @brief Gets the value of Platform */
	ERHAPI_Platform& GetPlatform() { return Platform; }
	/** @brief Gets the value of Platform */
	const ERHAPI_Platform& GetPlatform() const { return Platform; }
	/** @brief Sets the value of Platform */
	void SetPlatform(const ERHAPI_Platform& NewValue) { Platform = NewValue;   }
	/** @brief Sets the value of Platform using move semantics */
	void SetPlatform(ERHAPI_Platform&& NewValue) { Platform = NewValue;   }
};

/** @} */