// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerReferral.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerReferral

void FRHAPI_PlayerReferral::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("referree_player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, ReferreePlayerUuid);
	Writer->WriteIdentifierPrefix(TEXT("referrer_player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, ReferrerPlayerUuid);
	Writer->WriteIdentifierPrefix(TEXT("created_datetime"));
	RallyHereAPI::WriteJsonValue(Writer, CreatedDatetime);
	Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
	RallyHereAPI::WriteJsonValue(Writer, LastModifiedTimestamp);
	Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerReferral::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonReferreePlayerUuidField = (*Object)->TryGetField(TEXT("referree_player_uuid"));
	const bool ReferreePlayerUuid_IsValid = JsonReferreePlayerUuidField.IsValid() && (!JsonReferreePlayerUuidField->IsNull() && TryGetJsonValue(JsonReferreePlayerUuidField, ReferreePlayerUuid));
	ParseSuccess &= ReferreePlayerUuid_IsValid; 
	const TSharedPtr<FJsonValue> JsonReferrerPlayerUuidField = (*Object)->TryGetField(TEXT("referrer_player_uuid"));
	const bool ReferrerPlayerUuid_IsValid = JsonReferrerPlayerUuidField.IsValid() && (!JsonReferrerPlayerUuidField->IsNull() && TryGetJsonValue(JsonReferrerPlayerUuidField, ReferrerPlayerUuid));
	ParseSuccess &= ReferrerPlayerUuid_IsValid; 
	const TSharedPtr<FJsonValue> JsonCreatedDatetimeField = (*Object)->TryGetField(TEXT("created_datetime"));
	const bool CreatedDatetime_IsValid = JsonCreatedDatetimeField.IsValid() && (!JsonCreatedDatetimeField->IsNull() && TryGetJsonValue(JsonCreatedDatetimeField, CreatedDatetime));
	ParseSuccess &= CreatedDatetime_IsValid; 
	const TSharedPtr<FJsonValue> JsonLastModifiedTimestampField = (*Object)->TryGetField(TEXT("last_modified_timestamp"));
	const bool LastModifiedTimestamp_IsValid = JsonLastModifiedTimestampField.IsValid() && (!JsonLastModifiedTimestampField->IsNull() && TryGetJsonValue(JsonLastModifiedTimestampField, LastModifiedTimestamp));
	ParseSuccess &= LastModifiedTimestamp_IsValid; 

	return ParseSuccess;
}

