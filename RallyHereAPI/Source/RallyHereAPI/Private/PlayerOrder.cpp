// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerOrder.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerOrder

void FRHAPI_PlayerOrder::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Source_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("source"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(Source_Optional));
	}
	if (ClientOrderRefId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("client_order_ref_id"));
		if (ClientOrderRefId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, ClientOrderRefId_Optional);
	}
	if (PortalId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("portal_id"));
		if (PortalId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(PortalId_Optional));
	}
	if (PortalUserId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("portal_user_id"));
		if (PortalUserId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PortalUserId_Optional);
	}
	if (InstanceId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("instance_id"));
		if (InstanceId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, InstanceId_Optional);
	}
	if (MatchId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("match_id"));
		if (MatchId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, MatchId_Optional);
	}
	if (IsTransaction_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("is_transaction"));
		RallyHereAPI::WriteJsonValue(Writer, IsTransaction_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("order_id"));
	RallyHereAPI::WriteJsonValue(Writer, OrderId);
	Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
	Writer->WriteIdentifierPrefix(TEXT("created_time"));
	RallyHereAPI::WriteJsonValue(Writer, CreatedTime);
	Writer->WriteIdentifierPrefix(TEXT("entries"));
	RallyHereAPI::WriteJsonValue(Writer, Entries);
	Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerOrder::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonSourceField = (*Object)->TryGetField(TEXT("source"));
	if (JsonSourceField.IsValid())
	{
		Source_IsSet = TryGetJsonValue(JsonSourceField, Source_Optional);
		ParseSuccess &= Source_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonClientOrderRefIdField = (*Object)->TryGetField(TEXT("client_order_ref_id"));
	if (JsonClientOrderRefIdField.IsValid())
	{
		ClientOrderRefId_IsNull = JsonClientOrderRefIdField->IsNull();
		ClientOrderRefId_IsSet = ClientOrderRefId_IsNull || TryGetJsonValue(JsonClientOrderRefIdField, ClientOrderRefId_Optional);
		ParseSuccess &= ClientOrderRefId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPortalIdField = (*Object)->TryGetField(TEXT("portal_id"));
	if (JsonPortalIdField.IsValid())
	{
		PortalId_IsNull = JsonPortalIdField->IsNull();
		PortalId_IsSet = PortalId_IsNull || TryGetJsonValue(JsonPortalIdField, PortalId_Optional);
		ParseSuccess &= PortalId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPortalUserIdField = (*Object)->TryGetField(TEXT("portal_user_id"));
	if (JsonPortalUserIdField.IsValid())
	{
		PortalUserId_IsNull = JsonPortalUserIdField->IsNull();
		PortalUserId_IsSet = PortalUserId_IsNull || TryGetJsonValue(JsonPortalUserIdField, PortalUserId_Optional);
		ParseSuccess &= PortalUserId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
	if (JsonInstanceIdField.IsValid())
	{
		InstanceId_IsNull = JsonInstanceIdField->IsNull();
		InstanceId_IsSet = InstanceId_IsNull || TryGetJsonValue(JsonInstanceIdField, InstanceId_Optional);
		ParseSuccess &= InstanceId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonMatchIdField = (*Object)->TryGetField(TEXT("match_id"));
	if (JsonMatchIdField.IsValid())
	{
		MatchId_IsNull = JsonMatchIdField->IsNull();
		MatchId_IsSet = MatchId_IsNull || TryGetJsonValue(JsonMatchIdField, MatchId_Optional);
		ParseSuccess &= MatchId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonIsTransactionField = (*Object)->TryGetField(TEXT("is_transaction"));
	if (JsonIsTransactionField.IsValid())
	{
		IsTransaction_IsSet = TryGetJsonValue(JsonIsTransactionField, IsTransaction_Optional);
		ParseSuccess &= IsTransaction_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonOrderIdField = (*Object)->TryGetField(TEXT("order_id"));
	const bool OrderId_IsValid = JsonOrderIdField.IsValid() && (!JsonOrderIdField->IsNull() && TryGetJsonValue(JsonOrderIdField, OrderId));
	ParseSuccess &= OrderId_IsValid; 
	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	const bool PlayerUuid_IsValid = JsonPlayerUuidField.IsValid() && (!JsonPlayerUuidField->IsNull() && TryGetJsonValue(JsonPlayerUuidField, PlayerUuid));
	ParseSuccess &= PlayerUuid_IsValid; 
	const TSharedPtr<FJsonValue> JsonCreatedTimeField = (*Object)->TryGetField(TEXT("created_time"));
	const bool CreatedTime_IsValid = JsonCreatedTimeField.IsValid() && (!JsonCreatedTimeField->IsNull() && TryGetJsonValue(JsonCreatedTimeField, CreatedTime));
	ParseSuccess &= CreatedTime_IsValid; 
	const TSharedPtr<FJsonValue> JsonEntriesField = (*Object)->TryGetField(TEXT("entries"));
	const bool Entries_IsValid = JsonEntriesField.IsValid() && (!JsonEntriesField->IsNull() && TryGetJsonValue(JsonEntriesField, Entries));
	ParseSuccess &= Entries_IsValid; 

	return ParseSuccess;
}

