// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AcknowledgeBackfillResponse.generated.h"

/** @defgroup RHAPI_AcknowledgeBackfillResponse RallyHere API Model AcknowledgeBackfillResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AcknowledgeBackfillResponse : public FRHAPI_Model
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
    TArray<FGuid> BackfilledPlayers{  };
    /** @brief Gets the value of BackfilledPlayers */
    TArray<FGuid>& GetBackfilledPlayers() { return BackfilledPlayers; }
    /** @brief Gets the value of BackfilledPlayers */
    const TArray<FGuid>& GetBackfilledPlayers() const { return BackfilledPlayers; }
    /** @brief Sets the value of BackfilledPlayers */
    void SetBackfilledPlayers(TArray<FGuid> NewValue) { BackfilledPlayers = NewValue;  }
};

/** @} */