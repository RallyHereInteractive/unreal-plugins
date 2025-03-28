// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "EntitlementEventRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_EntitlementEventRequest

void FRHAPI_EntitlementEventRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("action_type"));
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(ActionType));
	if (Status_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("status"));
		if (Status_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(Status_Optional));
	}
	if (PlayerUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
		if (PlayerUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PlayerUuid_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("platform"));
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Platform));
	Writer->WriteIdentifierPrefix(TEXT("platform_user_id"));
	RallyHereAPI::WriteJsonValue(Writer, PlatformUserId);
	Writer->WriteIdentifierPrefix(TEXT("sku"));
	RallyHereAPI::WriteJsonValue(Writer, Sku);
	if (Quantity_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("quantity"));
		RallyHereAPI::WriteJsonValue(Writer, Quantity_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("platform_transaction_id"));
	RallyHereAPI::WriteJsonValue(Writer, PlatformTransactionId);
	if (PlatformData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform_data"));
		if (PlatformData_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PlatformData_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_EntitlementEventRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonActionTypeField = (*Object)->TryGetField(TEXT("action_type"));
	const bool ActionType_IsValid = JsonActionTypeField.IsValid() && (!JsonActionTypeField->IsNull() && TryGetJsonValue(JsonActionTypeField, ActionType));
	ParseSuccess &= ActionType_IsValid; 
	const TSharedPtr<FJsonValue> JsonStatusField = (*Object)->TryGetField(TEXT("status"));
	if (JsonStatusField.IsValid())
	{
		Status_IsNull = JsonStatusField->IsNull();
		Status_IsSet = Status_IsNull || TryGetJsonValue(JsonStatusField, Status_Optional);
		ParseSuccess &= Status_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	if (JsonPlayerUuidField.IsValid())
	{
		PlayerUuid_IsNull = JsonPlayerUuidField->IsNull();
		PlayerUuid_IsSet = PlayerUuid_IsNull || TryGetJsonValue(JsonPlayerUuidField, PlayerUuid_Optional);
		ParseSuccess &= PlayerUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformField = (*Object)->TryGetField(TEXT("platform"));
	const bool Platform_IsValid = JsonPlatformField.IsValid() && (!JsonPlatformField->IsNull() && TryGetJsonValue(JsonPlatformField, Platform));
	ParseSuccess &= Platform_IsValid; 
	const TSharedPtr<FJsonValue> JsonPlatformUserIdField = (*Object)->TryGetField(TEXT("platform_user_id"));
	const bool PlatformUserId_IsValid = JsonPlatformUserIdField.IsValid() && (!JsonPlatformUserIdField->IsNull() && TryGetJsonValue(JsonPlatformUserIdField, PlatformUserId));
	ParseSuccess &= PlatformUserId_IsValid; 
	const TSharedPtr<FJsonValue> JsonSkuField = (*Object)->TryGetField(TEXT("sku"));
	const bool Sku_IsValid = JsonSkuField.IsValid() && (!JsonSkuField->IsNull() && TryGetJsonValue(JsonSkuField, Sku));
	ParseSuccess &= Sku_IsValid; 
	const TSharedPtr<FJsonValue> JsonQuantityField = (*Object)->TryGetField(TEXT("quantity"));
	if (JsonQuantityField.IsValid())
	{
		Quantity_IsSet = TryGetJsonValue(JsonQuantityField, Quantity_Optional);
		ParseSuccess &= Quantity_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformTransactionIdField = (*Object)->TryGetField(TEXT("platform_transaction_id"));
	const bool PlatformTransactionId_IsValid = JsonPlatformTransactionIdField.IsValid() && (!JsonPlatformTransactionIdField->IsNull() && TryGetJsonValue(JsonPlatformTransactionIdField, PlatformTransactionId));
	ParseSuccess &= PlatformTransactionId_IsValid; 
	const TSharedPtr<FJsonValue> JsonPlatformDataField = (*Object)->TryGetField(TEXT("platform_data"));
	if (JsonPlatformDataField.IsValid())
	{
		PlatformData_IsNull = JsonPlatformDataField->IsNull();
		PlatformData_IsSet = PlatformData_IsNull || TryGetJsonValue(JsonPlatformDataField, PlatformData_Optional);
		ParseSuccess &= PlatformData_IsSet;
	}

	return ParseSuccess;
}

