// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RestrictionReasonCode.generated.h"


/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_RestrictionReasonCode : uint8
{
	CheatingAutodetected UMETA(ToolTip=""),
	SpeedhackAutodetect UMETA(ToolTip=""),
	Other UMETA(ToolTip=""),
	CheatingObserved UMETA(ToolTip=""),
	CheatingReportedByPlayer UMETA(ToolTip=""),
	Threats UMETA(ToolTip=""),
	Language UMETA(ToolTip=""),
	Griefing UMETA(ToolTip=""),
	Fraud UMETA(ToolTip=""),
	RevokeFailed UMETA(ToolTip=""),
	Unknown UMETA(ToolTip=""),
	Guardian UMETA(ToolTip=""),
	IssuerProcess UMETA(ToolTip=""),
	AccountMigration UMETA(ToolTip=""),
	UserRequest UMETA(ToolTip=""),
	Maintenance UMETA(ToolTip=""),
	PendingDeletion UMETA(ToolTip=""),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_RestrictionReasonCode& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_RestrictionReasonCode& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_RestrictionReasonCode& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_RestrictionReasonCode& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_RestrictionReasonCode& Value);