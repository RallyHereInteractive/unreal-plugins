// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "FriendRelationship.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_FriendRelationship

void FRHAPI_FriendRelationship::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("friends_player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, FriendsPlayerUuid);
	Writer->WriteIdentifierPrefix(TEXT("status"));
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Status));
	if (Notes_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("notes"));
		RallyHereAPI::WriteJsonValue(Writer, Notes_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("last_modified_on"));
	RallyHereAPI::WriteJsonValue(Writer, LastModifiedOn);
	Writer->WriteObjectEnd();
}

bool FRHAPI_FriendRelationship::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonFriendsPlayerUuidField = (*Object)->TryGetField(TEXT("friends_player_uuid"));
	const bool FriendsPlayerUuid_IsValid = JsonFriendsPlayerUuidField.IsValid() && (!JsonFriendsPlayerUuidField->IsNull() && TryGetJsonValue(JsonFriendsPlayerUuidField, FriendsPlayerUuid));
	ParseSuccess &= FriendsPlayerUuid_IsValid; 
	const TSharedPtr<FJsonValue> JsonStatusField = (*Object)->TryGetField(TEXT("status"));
	const bool Status_IsValid = JsonStatusField.IsValid() && (!JsonStatusField->IsNull() && TryGetJsonValue(JsonStatusField, Status));
	ParseSuccess &= Status_IsValid; 
	const TSharedPtr<FJsonValue> JsonNotesField = (*Object)->TryGetField(TEXT("notes"));
	if (JsonNotesField.IsValid())
	{
		Notes_IsSet = TryGetJsonValue(JsonNotesField, Notes_Optional);
		ParseSuccess &= Notes_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonLastModifiedOnField = (*Object)->TryGetField(TEXT("last_modified_on"));
	const bool LastModifiedOn_IsValid = JsonLastModifiedOnField.IsValid() && (!JsonLastModifiedOnField->IsNull() && TryGetJsonValue(JsonLastModifiedOnField, LastModifiedOn));
	ParseSuccess &= LastModifiedOn_IsValid; 

	return ParseSuccess;
}

