// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "RallyHereEvent.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_RallyHereEvent

void FRHAPI_RallyHereEvent::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("eventUUID"));
    RallyHereAPI::WriteJsonValue(Writer, EventUUID);
    Writer->WriteIdentifierPrefix(TEXT("eventName"));
    RallyHereAPI::WriteJsonValue(Writer, EventName);
    Writer->WriteIdentifierPrefix(TEXT("eventTimestamp"));
    RallyHereAPI::WriteJsonValue(Writer, EventTimestamp);
    Writer->WriteIdentifierPrefix(TEXT("userID"));
    RallyHereAPI::WriteJsonValue(Writer, UserID);
    Writer->WriteIdentifierPrefix(TEXT("sessionID"));
    RallyHereAPI::WriteJsonValue(Writer, SessionID);
    Writer->WriteIdentifierPrefix(TEXT("eventParams"));
    RallyHereAPI::WriteJsonValue(Writer, EventParams);
    Writer->WriteObjectEnd();
}

bool FRHAPI_RallyHereEvent::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonEventUUIDField = (*Object)->TryGetField(TEXT("eventUUID"));
    ParseSuccess &= JsonEventUUIDField.IsValid() && !JsonEventUUIDField->IsNull() && TryGetJsonValue(JsonEventUUIDField, EventUUID);
    const TSharedPtr<FJsonValue> JsonEventNameField = (*Object)->TryGetField(TEXT("eventName"));
    ParseSuccess &= JsonEventNameField.IsValid() && !JsonEventNameField->IsNull() && TryGetJsonValue(JsonEventNameField, EventName);
    const TSharedPtr<FJsonValue> JsonEventTimestampField = (*Object)->TryGetField(TEXT("eventTimestamp"));
    ParseSuccess &= JsonEventTimestampField.IsValid() && !JsonEventTimestampField->IsNull() && TryGetJsonValue(JsonEventTimestampField, EventTimestamp);
    const TSharedPtr<FJsonValue> JsonUserIDField = (*Object)->TryGetField(TEXT("userID"));
    ParseSuccess &= JsonUserIDField.IsValid() && !JsonUserIDField->IsNull() && TryGetJsonValue(JsonUserIDField, UserID);
    const TSharedPtr<FJsonValue> JsonSessionIDField = (*Object)->TryGetField(TEXT("sessionID"));
    ParseSuccess &= JsonSessionIDField.IsValid() && !JsonSessionIDField->IsNull() && TryGetJsonValue(JsonSessionIDField, SessionID);
    const TSharedPtr<FJsonValue> JsonEventParamsField = (*Object)->TryGetField(TEXT("eventParams"));
    ParseSuccess &= JsonEventParamsField.IsValid() && !JsonEventParamsField->IsNull() && TryGetJsonValue(JsonEventParamsField, EventParams);

    return ParseSuccess;
}
