// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankData.h"
#include "CalculatedRank.generated.h"

/** @defgroup RHAPI_CalculatedRank RallyHere API Model CalculatedRank
 *  @{
 */

/**
 * @brief Additional data about a specific player&#39;s rank and previous match in order to make rank calculations
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_CalculatedRank : public FRHAPI_Model
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

    /** @brief UUID for this specific player */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid PlayerUuid{  };
    /** @brief Gets the value of PlayerUuid */
    FGuid& GetPlayerUuid() { return PlayerUuid; }
    /** @brief Gets the value of PlayerUuid */
    const FGuid& GetPlayerUuid() const { return PlayerUuid; }
    /** @brief Sets the value of PlayerUuid */
    void SetPlayerUuid(FGuid NewValue) { PlayerUuid = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_RankData Rank{  };
    /** @brief Gets the value of Rank */
    FRHAPI_RankData& GetRank() { return Rank; }
    /** @brief Gets the value of Rank */
    const FRHAPI_RankData& GetRank() const { return Rank; }
    /** @brief Sets the value of Rank */
    void SetRank(FRHAPI_RankData NewValue) { Rank = NewValue;  }

    /** @brief How many seconds this player was in the match */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 SecondsInMatch{ 0 };
    /** @brief Gets the value of SecondsInMatch */
    int32& GetSecondsInMatch() { return SecondsInMatch; }
    /** @brief Gets the value of SecondsInMatch */
    const int32& GetSecondsInMatch() const { return SecondsInMatch; }
    /** @brief Sets the value of SecondsInMatch */
    void SetSecondsInMatch(int32 NewValue) { SecondsInMatch = NewValue;  }
    /** @brief Returns true if SecondsInMatch matches the default value */
    bool IsSecondsInMatchDefaultValue() const { return SecondsInMatch == 0; }
    /** @brief Sets the value of SecondsInMatch to its default  */
    void SetSecondsInMatchToDefault() { SecondsInMatch = 0;  }
};

/** @} */