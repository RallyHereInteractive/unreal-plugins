// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "AuditResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_AuditResponse

void FRHAPI_AuditResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Events_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("events"));
		RallyHereAPI::WriteJsonValue(Writer, Events_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_AuditResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonEventsField = (*Object)->TryGetField(TEXT("events"));
	if (JsonEventsField.IsValid())
	{
		Events_IsSet = TryGetJsonValue(JsonEventsField, Events_Optional);
		ParseSuccess &= Events_IsSet;
	}

	return ParseSuccess;
}

