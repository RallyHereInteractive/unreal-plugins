// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "Vendor.h"
#include "Vendors.generated.h"

/** @defgroup RHAPI_Vendors RallyHere API Model Vendors
 *  @{
 */

/**
 * @brief A collection of Vendors by Vendor ID.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Vendors : public FRHAPI_Model
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
	TMap<FString, FRHAPI_Vendor> Vendors_Optional{  };
	/** @brief true if Vendors_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Vendors_IsSet{ false };
	/** @brief Gets the value of Vendors_Optional, regardless of it having been set */
	TMap<FString, FRHAPI_Vendor>& GetVendors() { return Vendors_Optional; }
	/** @brief Gets the value of Vendors_Optional, regardless of it having been set */
	const TMap<FString, FRHAPI_Vendor>& GetVendors() const { return Vendors_Optional; }
	/** @brief Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FRHAPI_Vendor>& GetVendors(const TMap<FString, FRHAPI_Vendor>& DefaultValue) const { if (Vendors_IsSet) return Vendors_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false */
	bool GetVendors(TMap<FString, FRHAPI_Vendor>& OutValue) const { if (Vendors_IsSet) OutValue = Vendors_Optional; return Vendors_IsSet; }
	/** @brief Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FRHAPI_Vendor>* GetVendorsOrNull() { if (Vendors_IsSet) return (&Vendors_Optional); return nullptr; }
	/** @brief Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FRHAPI_Vendor>* GetVendorsOrNull() const { if (Vendors_IsSet) return (&Vendors_Optional); return nullptr; }
	/** @brief Sets the value of Vendors_Optional and also sets Vendors_IsSet to true */
	void SetVendors(const TMap<FString, FRHAPI_Vendor>& NewValue) { Vendors_Optional = NewValue; Vendors_IsSet = true;  }
	/** @brief Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics */
	void SetVendors(TMap<FString, FRHAPI_Vendor>&& NewValue) { Vendors_Optional = NewValue; Vendors_IsSet = true;  }
	/** @brief Clears the value of Vendors_Optional and sets Vendors_IsSet to false */
	void ClearVendors() { Vendors_IsSet = false;  }
	/** @brief Checks whether Vendors_Optional has been set */
	bool IsVendorsSet() const { return Vendors_IsSet; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_CacheInfo CacheInfo_Optional{  };
	/** @brief true if CacheInfo_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CacheInfo_IsSet{ false };
	/** @brief true if CacheInfo_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CacheInfo_IsNull{ false };
	/** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
	FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
	/** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
	const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
	/** @brief Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false */
	bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet && !CacheInfo_IsNull) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
	/** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return (CacheInfo_IsNull ? nullptr : &CacheInfo_Optional); return nullptr; }
	/** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return (CacheInfo_IsNull ? nullptr : &CacheInfo_Optional); return nullptr; }
	/** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true */
	void SetCacheInfo(const FRHAPI_CacheInfo& NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; CacheInfo_IsNull = false; }
	/** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics */
	void SetCacheInfo(FRHAPI_CacheInfo&& NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; CacheInfo_IsNull = false; }
	/** @brief Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false */
	void ClearCacheInfo() { CacheInfo_IsSet = false; CacheInfo_IsNull = false; }
	/** @brief Checks whether CacheInfo_Optional has been set */
	bool IsCacheInfoSet() const { return CacheInfo_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetCacheInfoToNull() { CacheInfo_IsSet = true; CacheInfo_IsNull = true; }
	/** @brief Checks whether CacheInfo_Optional is set to null */
	bool IsCacheInfoNull() const { return CacheInfo_IsSet && CacheInfo_IsNull; }
};

/** @} */
