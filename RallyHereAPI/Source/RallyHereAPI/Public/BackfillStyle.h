// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BackfillStyle.generated.h"


/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_BackfillStyle : uint8
{
	TeamRequest UMETA(ToolTip=""),
	Composition UMETA(ToolTip=""),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_BackfillStyle& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_BackfillStyle& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_BackfillStyle& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_BackfillStyle& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_BackfillStyle& Value);
