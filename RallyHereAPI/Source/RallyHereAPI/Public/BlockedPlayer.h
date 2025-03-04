// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BlockedPlayer.generated.h"

/** @defgroup RHAPI_BlockedPlayer RallyHere API Model BlockedPlayer
 *  @{
 */

/**
 * @brief The player that is being blocked.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BlockedPlayer : public FRHAPI_Model
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
	FGuid BlockedPlayerUuid{  };
	/** @brief Gets the value of BlockedPlayerUuid */
	FGuid& GetBlockedPlayerUuid() { return BlockedPlayerUuid; }
	/** @brief Gets the value of BlockedPlayerUuid */
	const FGuid& GetBlockedPlayerUuid() const { return BlockedPlayerUuid; }
	/** @brief Sets the value of BlockedPlayerUuid */
	void SetBlockedPlayerUuid(const FGuid& NewValue) { BlockedPlayerUuid = NewValue;   }
	/** @brief Sets the value of BlockedPlayerUuid using move semantics */
	void SetBlockedPlayerUuid(FGuid&& NewValue) { BlockedPlayerUuid = NewValue;   }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime LastModifiedOn{  };
	/** @brief Gets the value of LastModifiedOn */
	FDateTime& GetLastModifiedOn() { return LastModifiedOn; }
	/** @brief Gets the value of LastModifiedOn */
	const FDateTime& GetLastModifiedOn() const { return LastModifiedOn; }
	/** @brief Sets the value of LastModifiedOn */
	void SetLastModifiedOn(const FDateTime& NewValue) { LastModifiedOn = NewValue;   }
	/** @brief Sets the value of LastModifiedOn using move semantics */
	void SetLastModifiedOn(FDateTime&& NewValue) { LastModifiedOn = NewValue;   }
};

/** @} */
