// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "LoginHistoryEntry.h"
#include "LoginHistoryPage.generated.h"

/** @defgroup RHAPI_LoginHistoryPage RallyHere API Model LoginHistoryPage
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_LoginHistoryPage : public FRHAPI_Model
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

	/** @brief The login history entries */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_LoginHistoryEntry> Entries{  };
	/** @brief Gets the value of Entries */
	TArray<FRHAPI_LoginHistoryEntry>& GetEntries() { return Entries; }
	/** @brief Gets the value of Entries */
	const TArray<FRHAPI_LoginHistoryEntry>& GetEntries() const { return Entries; }
	/** @brief Sets the value of Entries */
	void SetEntries(const TArray<FRHAPI_LoginHistoryEntry>& NewValue) { Entries = NewValue;  }
	/** @brief Sets the value of Entries using move semantics */
	void SetEntries(TArray<FRHAPI_LoginHistoryEntry>&& NewValue) { Entries = NewValue;  }

	/** @brief Token to retrieve the next page of results */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString ContinuationToken_Optional{  };
	/** @brief true if ContinuationToken_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ContinuationToken_IsSet{ false };
	/** @brief Gets the value of ContinuationToken_Optional, regardless of it having been set */
	FString& GetContinuationToken() { return ContinuationToken_Optional; }
	/** @brief Gets the value of ContinuationToken_Optional, regardless of it having been set */
	const FString& GetContinuationToken() const { return ContinuationToken_Optional; }
	/** @brief Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetContinuationToken(const FString& DefaultValue) const { if (ContinuationToken_IsSet) return ContinuationToken_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false */
	bool GetContinuationToken(FString& OutValue) const { if (ContinuationToken_IsSet) OutValue = ContinuationToken_Optional; return ContinuationToken_IsSet; }
	/** @brief Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr */
	FString* GetContinuationTokenOrNull() { if (ContinuationToken_IsSet) return &ContinuationToken_Optional; return nullptr; }
	/** @brief Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetContinuationTokenOrNull() const { if (ContinuationToken_IsSet) return &ContinuationToken_Optional; return nullptr; }
	/** @brief Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true */
	void SetContinuationToken(const FString& NewValue) { ContinuationToken_Optional = NewValue; ContinuationToken_IsSet = true; }
	/** @brief Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics */
	void SetContinuationToken(FString&& NewValue) { ContinuationToken_Optional = NewValue; ContinuationToken_IsSet = true; }
	 /** @brief Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false */
	void ClearContinuationToken() { ContinuationToken_IsSet = false; }
};

/** @} */