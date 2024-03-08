// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "EntitlementType.generated.h"


/**
 * @brief The method of granting a Platform Entitlement SKU
 */
UENUM(BlueprintType)
enum class ERHAPI_EntitlementType : uint8
{
    Consumable UMETA(ToolTip="Consumable entitlements are removed from the platform&#39;s record keeping system when used."),
    Durable UMETA(ToolTip="Durable entitlements stay in the platform&#39;s recorded keeping system and is granted to the Player each time entitlements are granted."),
    DurableSingleUse UMETA(ToolTip="Durable single use entitlements stay in the platform&#39;s recorded keeping system and is granted to the Player only once."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_EntitlementType& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_EntitlementType& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementType& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_EntitlementType& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_EntitlementType& Value);