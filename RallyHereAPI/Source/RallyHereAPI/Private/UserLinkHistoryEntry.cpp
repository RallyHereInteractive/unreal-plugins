// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "UserLinkHistoryEntry.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_UserLinkHistoryEntry

void FRHAPI_UserLinkHistoryEntry::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (EntryId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("entry_id"));
		RallyHereAPI::WriteJsonValue(Writer, EntryId_Optional);
	}
	if (PlayerUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
		RallyHereAPI::WriteJsonValue(Writer, PlayerUuid_Optional);
	}
	if (Platform_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(Platform_Optional));
	}
	if (PlatformUserId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform_user_id"));
		RallyHereAPI::WriteJsonValue(Writer, PlatformUserId_Optional);
	}
	if (PersonId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("person_id"));
		RallyHereAPI::WriteJsonValue(Writer, PersonId_Optional);
	}
	if (ActivePlayerUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("active_player_uuid"));
		RallyHereAPI::WriteJsonValue(Writer, ActivePlayerUuid_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("action"));
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Action));
	if (Timestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, Timestamp_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_UserLinkHistoryEntry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonEntryIdField = (*Object)->TryGetField(TEXT("entry_id"));
	if (JsonEntryIdField.IsValid())
	{
		EntryId_IsSet = TryGetJsonValue(JsonEntryIdField, EntryId_Optional);
		ParseSuccess &= EntryId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	if (JsonPlayerUuidField.IsValid())
	{
		PlayerUuid_IsSet = TryGetJsonValue(JsonPlayerUuidField, PlayerUuid_Optional);
		ParseSuccess &= PlayerUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformField = (*Object)->TryGetField(TEXT("platform"));
	if (JsonPlatformField.IsValid())
	{
		Platform_IsSet = TryGetJsonValue(JsonPlatformField, Platform_Optional);
		ParseSuccess &= Platform_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformUserIdField = (*Object)->TryGetField(TEXT("platform_user_id"));
	if (JsonPlatformUserIdField.IsValid())
	{
		PlatformUserId_IsSet = TryGetJsonValue(JsonPlatformUserIdField, PlatformUserId_Optional);
		ParseSuccess &= PlatformUserId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPersonIdField = (*Object)->TryGetField(TEXT("person_id"));
	if (JsonPersonIdField.IsValid())
	{
		PersonId_IsSet = TryGetJsonValue(JsonPersonIdField, PersonId_Optional);
		ParseSuccess &= PersonId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonActivePlayerUuidField = (*Object)->TryGetField(TEXT("active_player_uuid"));
	if (JsonActivePlayerUuidField.IsValid())
	{
		ActivePlayerUuid_IsSet = TryGetJsonValue(JsonActivePlayerUuidField, ActivePlayerUuid_Optional);
		ParseSuccess &= ActivePlayerUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonActionField = (*Object)->TryGetField(TEXT("action"));
	const bool Action_IsValid = JsonActionField.IsValid() && (!JsonActionField->IsNull() && TryGetJsonValue(JsonActionField, Action));
	ParseSuccess &= Action_IsValid; 
	const TSharedPtr<FJsonValue> JsonTimestampField = (*Object)->TryGetField(TEXT("timestamp"));
	if (JsonTimestampField.IsValid())
	{
		Timestamp_IsSet = TryGetJsonValue(JsonTimestampField, Timestamp_Optional);
		ParseSuccess &= Timestamp_IsSet;
	}

	return ParseSuccess;
}

