// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ExternalKeyEntitlement.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_ExternalKeyEntitlement

void FRHAPI_ExternalKeyEntitlement::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("external_key_campaign_id"));
    RallyHereAPI::WriteJsonValue(Writer, ExternalKeyCampaignId);
    Writer->WriteIdentifierPrefix(TEXT("quantity"));
    RallyHereAPI::WriteJsonValue(Writer, Quantity);
    Writer->WriteObjectEnd();
}

bool FRHAPI_ExternalKeyEntitlement::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonExternalKeyCampaignIdField = (*Object)->TryGetField(TEXT("external_key_campaign_id"));
    ParseSuccess &= JsonExternalKeyCampaignIdField.IsValid() && !JsonExternalKeyCampaignIdField->IsNull() && TryGetJsonValue(JsonExternalKeyCampaignIdField, ExternalKeyCampaignId);
    const TSharedPtr<FJsonValue> JsonQuantityField = (*Object)->TryGetField(TEXT("quantity"));
    ParseSuccess &= JsonQuantityField.IsValid() && !JsonQuantityField->IsNull() && TryGetJsonValue(JsonQuantityField, Quantity);

    return ParseSuccess;
}
