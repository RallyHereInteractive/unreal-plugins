// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchWithPlayers.h"
#include "PagedMatchResponse.generated.h"

/** @defgroup RHAPI_PagedMatchResponse RallyHere API Model PagedMatchResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PagedMatchResponse : public FRHAPI_Model
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

    /** @brief List of matches */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TArray<FRHAPI_MatchWithPlayers> Matches_Optional{  };
    /** @brief true if Matches_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Matches_IsSet{ false };
    /** @brief Gets the value of Matches_Optional, regardless of it having been set */
    TArray<FRHAPI_MatchWithPlayers>& GetMatches() { return Matches_Optional; }
    /** @brief Gets the value of Matches_Optional, regardless of it having been set */
    const TArray<FRHAPI_MatchWithPlayers>& GetMatches() const { return Matches_Optional; }
    /** @brief Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_MatchWithPlayers>& GetMatches(const TArray<FRHAPI_MatchWithPlayers>& DefaultValue) const { if (Matches_IsSet) return Matches_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatches(TArray<FRHAPI_MatchWithPlayers>& OutValue) const { if (Matches_IsSet) OutValue = Matches_Optional; return Matches_IsSet; }
    /** @brief Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_MatchWithPlayers>* GetMatchesOrNull() { if (Matches_IsSet) return &Matches_Optional; return nullptr; }
    /** @brief Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_MatchWithPlayers>* GetMatchesOrNull() const { if (Matches_IsSet) return &Matches_Optional; return nullptr; }
    /** @brief Sets the value of Matches_Optional and also sets Matches_IsSet to true */
    void SetMatches(TArray<FRHAPI_MatchWithPlayers> NewValue) { Matches_Optional = NewValue; Matches_IsSet = true; }
     /** @brief Clears the value of Matches_Optional and sets Matches_IsSet to false */
    void ClearMatches() { Matches_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Cursor_Optional{  };
    /** @brief true if Cursor_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Cursor_IsSet{ false };
    /** @brief Gets the value of Cursor_Optional, regardless of it having been set */
    FString& GetCursor() { return Cursor_Optional; }
    /** @brief Gets the value of Cursor_Optional, regardless of it having been set */
    const FString& GetCursor() const { return Cursor_Optional; }
    /** @brief Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetCursor(const FString& DefaultValue) const { if (Cursor_IsSet) return Cursor_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false */
    bool GetCursor(FString& OutValue) const { if (Cursor_IsSet) OutValue = Cursor_Optional; return Cursor_IsSet; }
    /** @brief Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr */
    FString* GetCursorOrNull() { if (Cursor_IsSet) return &Cursor_Optional; return nullptr; }
    /** @brief Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetCursorOrNull() const { if (Cursor_IsSet) return &Cursor_Optional; return nullptr; }
    /** @brief Sets the value of Cursor_Optional and also sets Cursor_IsSet to true */
    void SetCursor(FString NewValue) { Cursor_Optional = NewValue; Cursor_IsSet = true; }
     /** @brief Clears the value of Cursor_Optional and sets Cursor_IsSet to false */
    void ClearCursor() { Cursor_IsSet = false; }
};

/** @} */