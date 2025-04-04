// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "LeaderboardEntry.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_LeaderboardEntry

void FRHAPI_LeaderboardEntry::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
	if (StatValue_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("stat_value"));
		if (StatValue_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, StatValue_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("position"));
	RallyHereAPI::WriteJsonValue(Writer, Position);
	Writer->WriteObjectEnd();
}

bool FRHAPI_LeaderboardEntry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	const bool PlayerUuid_IsValid = JsonPlayerUuidField.IsValid() && (!JsonPlayerUuidField->IsNull() && TryGetJsonValue(JsonPlayerUuidField, PlayerUuid));
	ParseSuccess &= PlayerUuid_IsValid; 
	const TSharedPtr<FJsonValue> JsonStatValueField = (*Object)->TryGetField(TEXT("stat_value"));
	if (JsonStatValueField.IsValid())
	{
		StatValue_IsNull = JsonStatValueField->IsNull();
		StatValue_IsSet = StatValue_IsNull || TryGetJsonValue(JsonStatValueField, StatValue_Optional);
		ParseSuccess &= StatValue_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPositionField = (*Object)->TryGetField(TEXT("position"));
	const bool Position_IsValid = JsonPositionField.IsValid() && (!JsonPositionField->IsNull() && TryGetJsonValue(JsonPositionField, Position));
	ParseSuccess &= Position_IsValid; 

	return ParseSuccess;
}

