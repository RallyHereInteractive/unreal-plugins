// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "LootPrice.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_LootPrice

void FRHAPI_LootPrice::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Breakpoints_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("breakpoints"));
		RallyHereAPI::WriteJsonValue(Writer, Breakpoints_Optional);
	}
	if (StrictFlag_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("strict_flag"));
		RallyHereAPI::WriteJsonValue(Writer, StrictFlag_Optional);
	}
	if (CapFlag_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("cap_flag"));
		RallyHereAPI::WriteJsonValue(Writer, CapFlag_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_LootPrice::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonBreakpointsField = (*Object)->TryGetField(TEXT("breakpoints"));
	if (JsonBreakpointsField.IsValid())
	{
		Breakpoints_IsSet = TryGetJsonValue(JsonBreakpointsField, Breakpoints_Optional);
		ParseSuccess &= Breakpoints_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonStrictFlagField = (*Object)->TryGetField(TEXT("strict_flag"));
	if (JsonStrictFlagField.IsValid())
	{
		StrictFlag_IsSet = TryGetJsonValue(JsonStrictFlagField, StrictFlag_Optional);
		ParseSuccess &= StrictFlag_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCapFlagField = (*Object)->TryGetField(TEXT("cap_flag"));
	if (JsonCapFlagField.IsValid())
	{
		CapFlag_IsSet = TryGetJsonValue(JsonCapFlagField, CapFlag_Optional);
		ParseSuccess &= CapFlag_IsSet;
	}

	return ParseSuccess;
}
