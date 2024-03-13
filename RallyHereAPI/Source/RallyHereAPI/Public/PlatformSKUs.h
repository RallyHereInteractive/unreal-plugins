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
#include "PlatformSKU.h"
#include "PlatformSKUs.generated.h"

/** @defgroup RHAPI_PlatformSKUs RallyHere API Model PlatformSKUs
 *  @{
 */

/**
 * @brief A collection of SKUs.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformSKUs : public FRHAPI_Model
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

    /** @brief A collection of SKUs */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TArray<FRHAPI_PlatformSKU> Skus_Optional{  };
    /** @brief true if Skus_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Skus_IsSet{ false };
    /** @brief Gets the value of Skus_Optional, regardless of it having been set */
    TArray<FRHAPI_PlatformSKU>& GetSkus() { return Skus_Optional; }
    /** @brief Gets the value of Skus_Optional, regardless of it having been set */
    const TArray<FRHAPI_PlatformSKU>& GetSkus() const { return Skus_Optional; }
    /** @brief Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_PlatformSKU>& GetSkus(const TArray<FRHAPI_PlatformSKU>& DefaultValue) const { if (Skus_IsSet) return Skus_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false */
    bool GetSkus(TArray<FRHAPI_PlatformSKU>& OutValue) const { if (Skus_IsSet) OutValue = Skus_Optional; return Skus_IsSet; }
    /** @brief Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_PlatformSKU>* GetSkusOrNull() { if (Skus_IsSet) return &Skus_Optional; return nullptr; }
    /** @brief Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_PlatformSKU>* GetSkusOrNull() const { if (Skus_IsSet) return &Skus_Optional; return nullptr; }
    /** @brief Sets the value of Skus_Optional and also sets Skus_IsSet to true */
    void SetSkus(TArray<FRHAPI_PlatformSKU> NewValue) { Skus_Optional = NewValue; Skus_IsSet = true; }
     /** @brief Clears the value of Skus_Optional and sets Skus_IsSet to false */
    void ClearSkus() { Skus_IsSet = false; }

    /** @brief Cache info for the Platform SKUs. */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    /** @brief true if CacheInfo_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool CacheInfo_IsSet{ false };
    /** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
    FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
    /** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
    const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
    /** @brief Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false */
    bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
    /** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    /** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    /** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true */
    void SetCacheInfo(FRHAPI_CacheInfo NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
     /** @brief Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false */
    void ClearCacheInfo() { CacheInfo_IsSet = false; }
};

/** @} */