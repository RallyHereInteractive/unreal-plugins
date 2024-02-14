// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchInstance.generated.h"

/** @defgroup RHAPI_MatchInstance RallyHere API Model MatchInstance
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchInstance : public FRHAPI_Model
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString InstanceId_Optional{  };
    /** @brief true if InstanceId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InstanceId_IsSet{ false };
    /** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
    FString& GetInstanceId() { return InstanceId_Optional; }
    /** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
    const FString& GetInstanceId() const { return InstanceId_Optional; }
    /** @brief Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetInstanceId(const FString& DefaultValue) const { if (InstanceId_IsSet) return InstanceId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceId(FString& OutValue) const { if (InstanceId_IsSet) OutValue = InstanceId_Optional; return InstanceId_IsSet; }
    /** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetInstanceIdOrNull() { if (InstanceId_IsSet) return &InstanceId_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetInstanceIdOrNull() const { if (InstanceId_IsSet) return &InstanceId_Optional; return nullptr; }
    /** @brief Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true */
    void SetInstanceId(FString NewValue) { InstanceId_Optional = NewValue; InstanceId_IsSet = true; }
     /** @brief Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false */
    void ClearInstanceId() { InstanceId_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid HostPlayerUuid_Optional{  };
    /** @brief true if HostPlayerUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool HostPlayerUuid_IsSet{ false };
    /** @brief Gets the value of HostPlayerUuid_Optional, regardless of it having been set */
    FGuid& GetHostPlayerUuid() { return HostPlayerUuid_Optional; }
    /** @brief Gets the value of HostPlayerUuid_Optional, regardless of it having been set */
    const FGuid& GetHostPlayerUuid() const { return HostPlayerUuid_Optional; }
    /** @brief Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetHostPlayerUuid(const FGuid& DefaultValue) const { if (HostPlayerUuid_IsSet) return HostPlayerUuid_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false */
    bool GetHostPlayerUuid(FGuid& OutValue) const { if (HostPlayerUuid_IsSet) OutValue = HostPlayerUuid_Optional; return HostPlayerUuid_IsSet; }
    /** @brief Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetHostPlayerUuidOrNull() { if (HostPlayerUuid_IsSet) return &HostPlayerUuid_Optional; return nullptr; }
    /** @brief Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetHostPlayerUuidOrNull() const { if (HostPlayerUuid_IsSet) return &HostPlayerUuid_Optional; return nullptr; }
    /** @brief Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true */
    void SetHostPlayerUuid(FGuid NewValue) { HostPlayerUuid_Optional = NewValue; HostPlayerUuid_IsSet = true; }
     /** @brief Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false */
    void ClearHostPlayerUuid() { HostPlayerUuid_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RegionId_Optional{  };
    /** @brief true if RegionId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RegionId_IsSet{ false };
    /** @brief Gets the value of RegionId_Optional, regardless of it having been set */
    FString& GetRegionId() { return RegionId_Optional; }
    /** @brief Gets the value of RegionId_Optional, regardless of it having been set */
    const FString& GetRegionId() const { return RegionId_Optional; }
    /** @brief Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetRegionId(const FString& DefaultValue) const { if (RegionId_IsSet) return RegionId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false */
    bool GetRegionId(FString& OutValue) const { if (RegionId_IsSet) OutValue = RegionId_Optional; return RegionId_IsSet; }
    /** @brief Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetRegionIdOrNull() { if (RegionId_IsSet) return &RegionId_Optional; return nullptr; }
    /** @brief Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetRegionIdOrNull() const { if (RegionId_IsSet) return &RegionId_Optional; return nullptr; }
    /** @brief Sets the value of RegionId_Optional and also sets RegionId_IsSet to true */
    void SetRegionId(FString NewValue) { RegionId_Optional = NewValue; RegionId_IsSet = true; }
     /** @brief Clears the value of RegionId_Optional and sets RegionId_IsSet to false */
    void ClearRegionId() { RegionId_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString LaunchRequestTemplateId_Optional{  };
    /** @brief true if LaunchRequestTemplateId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LaunchRequestTemplateId_IsSet{ false };
    /** @brief Gets the value of LaunchRequestTemplateId_Optional, regardless of it having been set */
    FString& GetLaunchRequestTemplateId() { return LaunchRequestTemplateId_Optional; }
    /** @brief Gets the value of LaunchRequestTemplateId_Optional, regardless of it having been set */
    const FString& GetLaunchRequestTemplateId() const { return LaunchRequestTemplateId_Optional; }
    /** @brief Gets the value of LaunchRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetLaunchRequestTemplateId(const FString& DefaultValue) const { if (LaunchRequestTemplateId_IsSet) return LaunchRequestTemplateId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LaunchRequestTemplateId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLaunchRequestTemplateId(FString& OutValue) const { if (LaunchRequestTemplateId_IsSet) OutValue = LaunchRequestTemplateId_Optional; return LaunchRequestTemplateId_IsSet; }
    /** @brief Returns a pointer to LaunchRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetLaunchRequestTemplateIdOrNull() { if (LaunchRequestTemplateId_IsSet) return &LaunchRequestTemplateId_Optional; return nullptr; }
    /** @brief Returns a pointer to LaunchRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetLaunchRequestTemplateIdOrNull() const { if (LaunchRequestTemplateId_IsSet) return &LaunchRequestTemplateId_Optional; return nullptr; }
    /** @brief Sets the value of LaunchRequestTemplateId_Optional and also sets LaunchRequestTemplateId_IsSet to true */
    void SetLaunchRequestTemplateId(FString NewValue) { LaunchRequestTemplateId_Optional = NewValue; LaunchRequestTemplateId_IsSet = true; }
     /** @brief Clears the value of LaunchRequestTemplateId_Optional and sets LaunchRequestTemplateId_IsSet to false */
    void ClearLaunchRequestTemplateId() { LaunchRequestTemplateId_IsSet = false; }
};

/** @} */