// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "StorageInformation.generated.h"

/** @defgroup RHAPI_StorageInformation RallyHere API Model StorageInformation
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_StorageInformation : public FRHAPI_Model
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

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 TotalFiles_Optional{  };
	/** @brief true if TotalFiles_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TotalFiles_IsSet{ false };
	/** @brief Gets the value of TotalFiles_Optional, regardless of it having been set */
	int32& GetTotalFiles() { return TotalFiles_Optional; }
	/** @brief Gets the value of TotalFiles_Optional, regardless of it having been set */
	const int32& GetTotalFiles() const { return TotalFiles_Optional; }
	/** @brief Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetTotalFiles(const int32& DefaultValue) const { if (TotalFiles_IsSet) return TotalFiles_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false */
	bool GetTotalFiles(int32& OutValue) const { if (TotalFiles_IsSet) OutValue = TotalFiles_Optional; return TotalFiles_IsSet; }
	/** @brief Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr */
	int32* GetTotalFilesOrNull() { if (TotalFiles_IsSet) return &TotalFiles_Optional; return nullptr; }
	/** @brief Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetTotalFilesOrNull() const { if (TotalFiles_IsSet) return &TotalFiles_Optional; return nullptr; }
	/** @brief Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true */
	void SetTotalFiles(int32 NewValue) { TotalFiles_Optional = NewValue; TotalFiles_IsSet = true; }
	 /** @brief Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false */
	void ClearTotalFiles() { TotalFiles_Optional = 0; TotalFiles_IsSet = false; }
	/** @brief Returns true if TotalFiles_Optional is set and matches the default value */
	bool IsTotalFilesDefaultValue() const { return TotalFiles_IsSet && TotalFiles_Optional == 0; }
	/** @brief Sets the value of TotalFiles_Optional to its default and also sets TotalFiles_IsSet to true */
	void SetTotalFilesToDefault() { TotalFiles_Optional = 0; TotalFiles_IsSet = true; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 TotalSizeBytes_Optional{  };
	/** @brief true if TotalSizeBytes_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TotalSizeBytes_IsSet{ false };
	/** @brief Gets the value of TotalSizeBytes_Optional, regardless of it having been set */
	int32& GetTotalSizeBytes() { return TotalSizeBytes_Optional; }
	/** @brief Gets the value of TotalSizeBytes_Optional, regardless of it having been set */
	const int32& GetTotalSizeBytes() const { return TotalSizeBytes_Optional; }
	/** @brief Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetTotalSizeBytes(const int32& DefaultValue) const { if (TotalSizeBytes_IsSet) return TotalSizeBytes_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false */
	bool GetTotalSizeBytes(int32& OutValue) const { if (TotalSizeBytes_IsSet) OutValue = TotalSizeBytes_Optional; return TotalSizeBytes_IsSet; }
	/** @brief Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr */
	int32* GetTotalSizeBytesOrNull() { if (TotalSizeBytes_IsSet) return &TotalSizeBytes_Optional; return nullptr; }
	/** @brief Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetTotalSizeBytesOrNull() const { if (TotalSizeBytes_IsSet) return &TotalSizeBytes_Optional; return nullptr; }
	/** @brief Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true */
	void SetTotalSizeBytes(int32 NewValue) { TotalSizeBytes_Optional = NewValue; TotalSizeBytes_IsSet = true; }
	 /** @brief Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false */
	void ClearTotalSizeBytes() { TotalSizeBytes_Optional = 0; TotalSizeBytes_IsSet = false; }
	/** @brief Returns true if TotalSizeBytes_Optional is set and matches the default value */
	bool IsTotalSizeBytesDefaultValue() const { return TotalSizeBytes_IsSet && TotalSizeBytes_Optional == 0; }
	/** @brief Sets the value of TotalSizeBytes_Optional to its default and also sets TotalSizeBytes_IsSet to true */
	void SetTotalSizeBytesToDefault() { TotalSizeBytes_Optional = 0; TotalSizeBytes_IsSet = true; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 TotalSizeMb_Optional{  };
	/** @brief true if TotalSizeMb_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TotalSizeMb_IsSet{ false };
	/** @brief Gets the value of TotalSizeMb_Optional, regardless of it having been set */
	int32& GetTotalSizeMb() { return TotalSizeMb_Optional; }
	/** @brief Gets the value of TotalSizeMb_Optional, regardless of it having been set */
	const int32& GetTotalSizeMb() const { return TotalSizeMb_Optional; }
	/** @brief Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetTotalSizeMb(const int32& DefaultValue) const { if (TotalSizeMb_IsSet) return TotalSizeMb_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false */
	bool GetTotalSizeMb(int32& OutValue) const { if (TotalSizeMb_IsSet) OutValue = TotalSizeMb_Optional; return TotalSizeMb_IsSet; }
	/** @brief Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr */
	int32* GetTotalSizeMbOrNull() { if (TotalSizeMb_IsSet) return &TotalSizeMb_Optional; return nullptr; }
	/** @brief Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetTotalSizeMbOrNull() const { if (TotalSizeMb_IsSet) return &TotalSizeMb_Optional; return nullptr; }
	/** @brief Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true */
	void SetTotalSizeMb(int32 NewValue) { TotalSizeMb_Optional = NewValue; TotalSizeMb_IsSet = true; }
	 /** @brief Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false */
	void ClearTotalSizeMb() { TotalSizeMb_Optional = 0; TotalSizeMb_IsSet = false; }
	/** @brief Returns true if TotalSizeMb_Optional is set and matches the default value */
	bool IsTotalSizeMbDefaultValue() const { return TotalSizeMb_IsSet && TotalSizeMb_Optional == 0; }
	/** @brief Sets the value of TotalSizeMb_Optional to its default and also sets TotalSizeMb_IsSet to true */
	void SetTotalSizeMbToDefault() { TotalSizeMb_Optional = 0; TotalSizeMb_IsSet = true; }
};

/** @} */