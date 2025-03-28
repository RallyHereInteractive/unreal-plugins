// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerRankResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerRankResponse

void FRHAPI_PlayerRankResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
	Writer->WriteIdentifierPrefix(TEXT("rank"));
	RallyHereAPI::WriteJsonValue(Writer, Rank);
	Writer->WriteIdentifierPrefix(TEXT("rank_id"));
	RallyHereAPI::WriteJsonValue(Writer, RankId);
	Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerRankResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	const bool PlayerUuid_IsValid = JsonPlayerUuidField.IsValid() && (!JsonPlayerUuidField->IsNull() && TryGetJsonValue(JsonPlayerUuidField, PlayerUuid));
	ParseSuccess &= PlayerUuid_IsValid; 
	const TSharedPtr<FJsonValue> JsonRankField = (*Object)->TryGetField(TEXT("rank"));
	const bool Rank_IsValid = JsonRankField.IsValid() && (!JsonRankField->IsNull() && TryGetJsonValue(JsonRankField, Rank));
	ParseSuccess &= Rank_IsValid; 
	const TSharedPtr<FJsonValue> JsonRankIdField = (*Object)->TryGetField(TEXT("rank_id"));
	const bool RankId_IsValid = JsonRankIdField.IsValid() && (!JsonRankIdField->IsNull() && TryGetJsonValue(JsonRankIdField, RankId));
	ParseSuccess &= RankId_IsValid; 

	return ParseSuccess;
}

