// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InstanceHealthSettingsResponse.generated.h"

/** @defgroup RHAPI_InstanceHealthSettingsResponse RallyHere API Model InstanceHealthSettingsResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceHealthSettingsResponse : public FRHAPI_Model
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

    /** @brief How often we expect instance health checks to occur */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 CadenceSeconds{ 0 };
    /** @brief Gets the value of CadenceSeconds */
    int32& GetCadenceSeconds() { return CadenceSeconds; }
    /** @brief Gets the value of CadenceSeconds */
    const int32& GetCadenceSeconds() const { return CadenceSeconds; }
    /** @brief Sets the value of CadenceSeconds */
    void SetCadenceSeconds(int32 NewValue) { CadenceSeconds = NewValue;  }
    /** @brief Returns true if CadenceSeconds matches the default value */
    bool IsCadenceSecondsDefaultValue() const { return CadenceSeconds == 0; }
    /** @brief Sets the value of CadenceSeconds to its default  */
    void SetCadenceSecondsToDefault() { CadenceSeconds = 0;  }

    /** @brief What percentage of health checks must be missing before an instance's status becomes unhealthy */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float UnhealthyHealthCheckPercentage{  };
    /** @brief Gets the value of UnhealthyHealthCheckPercentage */
    float& GetUnhealthyHealthCheckPercentage() { return UnhealthyHealthCheckPercentage; }
    /** @brief Gets the value of UnhealthyHealthCheckPercentage */
    const float& GetUnhealthyHealthCheckPercentage() const { return UnhealthyHealthCheckPercentage; }
    /** @brief Sets the value of UnhealthyHealthCheckPercentage */
    void SetUnhealthyHealthCheckPercentage(float NewValue) { UnhealthyHealthCheckPercentage = NewValue;  }

    /** @brief How many health checks we must miss in a row before an instance's status becomes unknown */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 MissedChecksBeforeUnknown{ 0 };
    /** @brief Gets the value of MissedChecksBeforeUnknown */
    int32& GetMissedChecksBeforeUnknown() { return MissedChecksBeforeUnknown; }
    /** @brief Gets the value of MissedChecksBeforeUnknown */
    const int32& GetMissedChecksBeforeUnknown() const { return MissedChecksBeforeUnknown; }
    /** @brief Sets the value of MissedChecksBeforeUnknown */
    void SetMissedChecksBeforeUnknown(int32 NewValue) { MissedChecksBeforeUnknown = NewValue;  }
    /** @brief Returns true if MissedChecksBeforeUnknown matches the default value */
    bool IsMissedChecksBeforeUnknownDefaultValue() const { return MissedChecksBeforeUnknown == 0; }
    /** @brief Sets the value of MissedChecksBeforeUnknown to its default  */
    void SetMissedChecksBeforeUnknownToDefault() { MissedChecksBeforeUnknown = 0;  }
};

/** @} */