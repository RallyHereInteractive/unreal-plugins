// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InstanceSourceProvider.h"
#include "InstanceFubar.generated.h"

/** @defgroup RHAPI_InstanceFubar RallyHere API Model InstanceFubar
 *  @{
 */

/**
 * @brief Information about an instance that has been determined to be FUBAR
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceFubar : public FRHAPI_Model
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

    /** @brief ID for which instance was marked as FUBAR */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString InstanceId{  };
    /** @brief Gets the value of InstanceId */
    FString& GetInstanceId() { return InstanceId; }
    /** @brief Gets the value of InstanceId */
    const FString& GetInstanceId() const { return InstanceId; }
    /** @brief Sets the value of InstanceId */
    void SetInstanceId(FString NewValue) { InstanceId = NewValue;  }

    /** @brief Error string describing what caused the instance failure */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Error{  };
    /** @brief Gets the value of Error */
    FString& GetError() { return Error; }
    /** @brief Gets the value of Error */
    const FString& GetError() const { return Error; }
    /** @brief Sets the value of Error */
    void SetError(FString NewValue) { Error = NewValue;  }

    /** @brief What region the failed instance was in */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Region{  };
    /** @brief Gets the value of Region */
    FString& GetRegion() { return Region; }
    /** @brief Gets the value of Region */
    const FString& GetRegion() const { return Region; }
    /** @brief Sets the value of Region */
    void SetRegion(FString NewValue) { Region = NewValue;  }

    /** @brief ID for which matchmaking profile was used to generate the failed instance */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString MatchmakingProfileId_Optional{  };
    /** @brief true if MatchmakingProfileId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool MatchmakingProfileId_IsSet{ false };
    /** @brief Gets the value of MatchmakingProfileId_Optional, regardless of it having been set */
    FString& GetMatchmakingProfileId() { return MatchmakingProfileId_Optional; }
    /** @brief Gets the value of MatchmakingProfileId_Optional, regardless of it having been set */
    const FString& GetMatchmakingProfileId() const { return MatchmakingProfileId_Optional; }
    /** @brief Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMatchmakingProfileId(const FString& DefaultValue) const { if (MatchmakingProfileId_IsSet) return MatchmakingProfileId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatchmakingProfileId(FString& OutValue) const { if (MatchmakingProfileId_IsSet) OutValue = MatchmakingProfileId_Optional; return MatchmakingProfileId_IsSet; }
    /** @brief Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMatchmakingProfileIdOrNull() { if (MatchmakingProfileId_IsSet) return &MatchmakingProfileId_Optional; return nullptr; }
    /** @brief Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMatchmakingProfileIdOrNull() const { if (MatchmakingProfileId_IsSet) return &MatchmakingProfileId_Optional; return nullptr; }
    /** @brief Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true */
    void SetMatchmakingProfileId(FString NewValue) { MatchmakingProfileId_Optional = NewValue; MatchmakingProfileId_IsSet = true; }
     /** @brief Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false */
    void ClearMatchmakingProfileId() { MatchmakingProfileId_IsSet = false; }

    /** @brief Which instance provider allocated this failed instance */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    ERHAPI_InstanceSourceProvider InstanceSourceProvider_Optional{  };
    /** @brief true if InstanceSourceProvider_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool InstanceSourceProvider_IsSet{ false };
    /** @brief Gets the value of InstanceSourceProvider_Optional, regardless of it having been set */
    ERHAPI_InstanceSourceProvider& GetInstanceSourceProvider() { return InstanceSourceProvider_Optional; }
    /** @brief Gets the value of InstanceSourceProvider_Optional, regardless of it having been set */
    const ERHAPI_InstanceSourceProvider& GetInstanceSourceProvider() const { return InstanceSourceProvider_Optional; }
    /** @brief Gets the value of InstanceSourceProvider_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_InstanceSourceProvider& GetInstanceSourceProvider(const ERHAPI_InstanceSourceProvider& DefaultValue) const { if (InstanceSourceProvider_IsSet) return InstanceSourceProvider_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceSourceProvider_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceSourceProvider(ERHAPI_InstanceSourceProvider& OutValue) const { if (InstanceSourceProvider_IsSet) OutValue = InstanceSourceProvider_Optional; return InstanceSourceProvider_IsSet; }
    /** @brief Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_InstanceSourceProvider* GetInstanceSourceProviderOrNull() { if (InstanceSourceProvider_IsSet) return &InstanceSourceProvider_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_InstanceSourceProvider* GetInstanceSourceProviderOrNull() const { if (InstanceSourceProvider_IsSet) return &InstanceSourceProvider_Optional; return nullptr; }
    /** @brief Sets the value of InstanceSourceProvider_Optional and also sets InstanceSourceProvider_IsSet to true */
    void SetInstanceSourceProvider(ERHAPI_InstanceSourceProvider NewValue) { InstanceSourceProvider_Optional = NewValue; InstanceSourceProvider_IsSet = true; }
     /** @brief Clears the value of InstanceSourceProvider_Optional and sets InstanceSourceProvider_IsSet to false */
    void ClearInstanceSourceProvider() { InstanceSourceProvider_IsSet = false; }
};

/** @} */