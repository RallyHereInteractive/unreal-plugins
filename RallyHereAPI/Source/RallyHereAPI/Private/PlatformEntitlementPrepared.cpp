// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformEntitlementPrepared.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlatformEntitlementPrepared

void FRHAPI_PlatformEntitlementPrepared::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (PlatformEntitlementId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform_entitlement_id"));
		if (PlatformEntitlementId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PlatformEntitlementId_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("sku"));
	RallyHereAPI::WriteJsonValue(Writer, Sku);
	if (Quantity_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("quantity"));
		RallyHereAPI::WriteJsonValue(Writer, Quantity_Optional);
	}
	if (ReceivedType_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("received_type"));
		if (ReceivedType_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(ReceivedType_Optional));
	}
	if (PlatformLabel_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform_label"));
		if (PlatformLabel_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PlatformLabel_Optional);
	}
	if (PlatformMetadata_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform_metadata"));
		RallyHereAPI::WriteJsonValue(Writer, PlatformMetadata_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_PlatformEntitlementPrepared::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPlatformEntitlementIdField = (*Object)->TryGetField(TEXT("platform_entitlement_id"));
	if (JsonPlatformEntitlementIdField.IsValid())
	{
		PlatformEntitlementId_IsNull = JsonPlatformEntitlementIdField->IsNull();
		PlatformEntitlementId_IsSet = PlatformEntitlementId_IsNull || TryGetJsonValue(JsonPlatformEntitlementIdField, PlatformEntitlementId_Optional);
		ParseSuccess &= PlatformEntitlementId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSkuField = (*Object)->TryGetField(TEXT("sku"));
	const bool Sku_IsValid = JsonSkuField.IsValid() && (!JsonSkuField->IsNull() && TryGetJsonValue(JsonSkuField, Sku));
	ParseSuccess &= Sku_IsValid; 
	const TSharedPtr<FJsonValue> JsonQuantityField = (*Object)->TryGetField(TEXT("quantity"));
	if (JsonQuantityField.IsValid())
	{
		Quantity_IsSet = TryGetJsonValue(JsonQuantityField, Quantity_Optional);
		ParseSuccess &= Quantity_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonReceivedTypeField = (*Object)->TryGetField(TEXT("received_type"));
	if (JsonReceivedTypeField.IsValid())
	{
		ReceivedType_IsNull = JsonReceivedTypeField->IsNull();
		ReceivedType_IsSet = ReceivedType_IsNull || TryGetJsonValue(JsonReceivedTypeField, ReceivedType_Optional);
		ParseSuccess &= ReceivedType_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformLabelField = (*Object)->TryGetField(TEXT("platform_label"));
	if (JsonPlatformLabelField.IsValid())
	{
		PlatformLabel_IsNull = JsonPlatformLabelField->IsNull();
		PlatformLabel_IsSet = PlatformLabel_IsNull || TryGetJsonValue(JsonPlatformLabelField, PlatformLabel_Optional);
		ParseSuccess &= PlatformLabel_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformMetadataField = (*Object)->TryGetField(TEXT("platform_metadata"));
	if (JsonPlatformMetadataField.IsValid())
	{
		PlatformMetadata_IsSet = TryGetJsonValue(JsonPlatformMetadataField, PlatformMetadata_Optional);
		ParseSuccess &= PlatformMetadata_IsSet;
	}

	return ParseSuccess;
}

