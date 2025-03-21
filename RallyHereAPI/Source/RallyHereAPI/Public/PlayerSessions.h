// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerSession.h"
#include "PlayerSessions.generated.h"

/** @defgroup RHAPI_PlayerSessions RallyHere API Model PlayerSessions
 *  @{
 */

/**
 * @brief Information about all sessions that a player is currently a member of, or invited to
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerSessions : public FRHAPI_Model
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

	/** @brief Session associated with this player, and any pending invites */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FRHAPI_PlayerSession> Sessions_Optional{  };
	/** @brief true if Sessions_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Sessions_IsSet{ false };
	/** @brief Gets the value of Sessions_Optional, regardless of it having been set */
	TMap<FString, FRHAPI_PlayerSession>& GetSessions() { return Sessions_Optional; }
	/** @brief Gets the value of Sessions_Optional, regardless of it having been set */
	const TMap<FString, FRHAPI_PlayerSession>& GetSessions() const { return Sessions_Optional; }
	/** @brief Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FRHAPI_PlayerSession>& GetSessions(const TMap<FString, FRHAPI_PlayerSession>& DefaultValue) const { if (Sessions_IsSet) return Sessions_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false */
	bool GetSessions(TMap<FString, FRHAPI_PlayerSession>& OutValue) const { if (Sessions_IsSet) OutValue = Sessions_Optional; return Sessions_IsSet; }
	/** @brief Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FRHAPI_PlayerSession>* GetSessionsOrNull() { if (Sessions_IsSet) return (&Sessions_Optional); return nullptr; }
	/** @brief Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FRHAPI_PlayerSession>* GetSessionsOrNull() const { if (Sessions_IsSet) return (&Sessions_Optional); return nullptr; }
	/** @brief Sets the value of Sessions_Optional and also sets Sessions_IsSet to true */
	void SetSessions(const TMap<FString, FRHAPI_PlayerSession>& NewValue) { Sessions_Optional = NewValue; Sessions_IsSet = true;  }
	/** @brief Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics */
	void SetSessions(TMap<FString, FRHAPI_PlayerSession>&& NewValue) { Sessions_Optional = NewValue; Sessions_IsSet = true;  }
	/** @brief Clears the value of Sessions_Optional and sets Sessions_IsSet to false */
	void ClearSessions() { Sessions_IsSet = false;  }
	/** @brief Checks whether Sessions_Optional has been set */
	bool IsSessionsSet() const { return Sessions_IsSet; }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime LastUpdatedTimestamp_Optional{  };
	/** @brief true if LastUpdatedTimestamp_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LastUpdatedTimestamp_IsSet{ false };
	/** @brief Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set */
	FDateTime& GetLastUpdatedTimestamp() { return LastUpdatedTimestamp_Optional; }
	/** @brief Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set */
	const FDateTime& GetLastUpdatedTimestamp() const { return LastUpdatedTimestamp_Optional; }
	/** @brief Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
	const FDateTime& GetLastUpdatedTimestamp(const FDateTime& DefaultValue) const { if (LastUpdatedTimestamp_IsSet) return LastUpdatedTimestamp_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false */
	bool GetLastUpdatedTimestamp(FDateTime& OutValue) const { if (LastUpdatedTimestamp_IsSet) OutValue = LastUpdatedTimestamp_Optional; return LastUpdatedTimestamp_IsSet; }
	/** @brief Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr */
	FDateTime* GetLastUpdatedTimestampOrNull() { if (LastUpdatedTimestamp_IsSet) return (&LastUpdatedTimestamp_Optional); return nullptr; }
	/** @brief Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr */
	const FDateTime* GetLastUpdatedTimestampOrNull() const { if (LastUpdatedTimestamp_IsSet) return (&LastUpdatedTimestamp_Optional); return nullptr; }
	/** @brief Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true */
	void SetLastUpdatedTimestamp(const FDateTime& NewValue) { LastUpdatedTimestamp_Optional = NewValue; LastUpdatedTimestamp_IsSet = true;  }
	/** @brief Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true using move semantics */
	void SetLastUpdatedTimestamp(FDateTime&& NewValue) { LastUpdatedTimestamp_Optional = NewValue; LastUpdatedTimestamp_IsSet = true;  }
	/** @brief Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false */
	void ClearLastUpdatedTimestamp() { LastUpdatedTimestamp_IsSet = false;  }
	/** @brief Checks whether LastUpdatedTimestamp_Optional has been set */
	bool IsLastUpdatedTimestampSet() const { return LastUpdatedTimestamp_IsSet; }
};

/** @} */
