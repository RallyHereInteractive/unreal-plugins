// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchHostType.h"
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

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString InstanceId_Optional{  };
    /** @brief true if InstanceId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FGuid HostPlayerUuid_Optional{  };
    /** @brief true if HostPlayerUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString RegionId_Optional{  };
    /** @brief true if RegionId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString InstanceRequestTemplateId_Optional{  };
    /** @brief true if InstanceRequestTemplateId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool InstanceRequestTemplateId_IsSet{ false };
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
    FString& GetInstanceRequestTemplateId() { return InstanceRequestTemplateId_Optional; }
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
    const FString& GetInstanceRequestTemplateId() const { return InstanceRequestTemplateId_Optional; }
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetInstanceRequestTemplateId(const FString& DefaultValue) const { if (InstanceRequestTemplateId_IsSet) return InstanceRequestTemplateId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceRequestTemplateId(FString& OutValue) const { if (InstanceRequestTemplateId_IsSet) OutValue = InstanceRequestTemplateId_Optional; return InstanceRequestTemplateId_IsSet; }
    /** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetInstanceRequestTemplateIdOrNull() { if (InstanceRequestTemplateId_IsSet) return &InstanceRequestTemplateId_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetInstanceRequestTemplateIdOrNull() const { if (InstanceRequestTemplateId_IsSet) return &InstanceRequestTemplateId_Optional; return nullptr; }
    /** @brief Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true */
    void SetInstanceRequestTemplateId(FString NewValue) { InstanceRequestTemplateId_Optional = NewValue; InstanceRequestTemplateId_IsSet = true; }
     /** @brief Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false */
    void ClearInstanceRequestTemplateId() { InstanceRequestTemplateId_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Map_Optional{  };
    /** @brief true if Map_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Map_IsSet{ false };
    /** @brief Gets the value of Map_Optional, regardless of it having been set */
    FString& GetMap() { return Map_Optional; }
    /** @brief Gets the value of Map_Optional, regardless of it having been set */
    const FString& GetMap() const { return Map_Optional; }
    /** @brief Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMap(const FString& DefaultValue) const { if (Map_IsSet) return Map_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false */
    bool GetMap(FString& OutValue) const { if (Map_IsSet) OutValue = Map_Optional; return Map_IsSet; }
    /** @brief Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMapOrNull() { if (Map_IsSet) return &Map_Optional; return nullptr; }
    /** @brief Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMapOrNull() const { if (Map_IsSet) return &Map_Optional; return nullptr; }
    /** @brief Sets the value of Map_Optional and also sets Map_IsSet to true */
    void SetMap(FString NewValue) { Map_Optional = NewValue; Map_IsSet = true; }
     /** @brief Clears the value of Map_Optional and sets Map_IsSet to false */
    void ClearMap() { Map_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString GameMode_Optional{  };
    /** @brief true if GameMode_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool GameMode_IsSet{ false };
    /** @brief Gets the value of GameMode_Optional, regardless of it having been set */
    FString& GetGameMode() { return GameMode_Optional; }
    /** @brief Gets the value of GameMode_Optional, regardless of it having been set */
    const FString& GetGameMode() const { return GameMode_Optional; }
    /** @brief Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetGameMode(const FString& DefaultValue) const { if (GameMode_IsSet) return GameMode_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false */
    bool GetGameMode(FString& OutValue) const { if (GameMode_IsSet) OutValue = GameMode_Optional; return GameMode_IsSet; }
    /** @brief Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr */
    FString* GetGameModeOrNull() { if (GameMode_IsSet) return &GameMode_Optional; return nullptr; }
    /** @brief Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetGameModeOrNull() const { if (GameMode_IsSet) return &GameMode_Optional; return nullptr; }
    /** @brief Sets the value of GameMode_Optional and also sets GameMode_IsSet to true */
    void SetGameMode(FString NewValue) { GameMode_Optional = NewValue; GameMode_IsSet = true; }
     /** @brief Clears the value of GameMode_Optional and sets GameMode_IsSet to false */
    void ClearGameMode() { GameMode_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    ERHAPI_MatchHostType HostType_Optional{  };
    /** @brief true if HostType_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool HostType_IsSet{ false };
    /** @brief Gets the value of HostType_Optional, regardless of it having been set */
    ERHAPI_MatchHostType& GetHostType() { return HostType_Optional; }
    /** @brief Gets the value of HostType_Optional, regardless of it having been set */
    const ERHAPI_MatchHostType& GetHostType() const { return HostType_Optional; }
    /** @brief Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_MatchHostType& GetHostType(const ERHAPI_MatchHostType& DefaultValue) const { if (HostType_IsSet) return HostType_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false */
    bool GetHostType(ERHAPI_MatchHostType& OutValue) const { if (HostType_IsSet) OutValue = HostType_Optional; return HostType_IsSet; }
    /** @brief Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_MatchHostType* GetHostTypeOrNull() { if (HostType_IsSet) return &HostType_Optional; return nullptr; }
    /** @brief Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_MatchHostType* GetHostTypeOrNull() const { if (HostType_IsSet) return &HostType_Optional; return nullptr; }
    /** @brief Sets the value of HostType_Optional and also sets HostType_IsSet to true */
    void SetHostType(ERHAPI_MatchHostType NewValue) { HostType_Optional = NewValue; HostType_IsSet = true; }
     /** @brief Clears the value of HostType_Optional and sets HostType_IsSet to false */
    void ClearHostType() { HostType_IsSet = false; }
};

/** @} */