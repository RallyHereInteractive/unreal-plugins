// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PostGameEventsResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PostGameEventsResponse

void FRHAPI_PostGameEventsResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("posted_events"));
	RallyHereAPI::WriteJsonValue(Writer, PostedEvents);
	if (Errors_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("errors"));
		RallyHereAPI::WriteJsonValue(Writer, Errors_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_PostGameEventsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPostedEventsField = (*Object)->TryGetField(TEXT("posted_events"));
	const bool PostedEvents_IsValid = JsonPostedEventsField.IsValid() && (!JsonPostedEventsField->IsNull() && TryGetJsonValue(JsonPostedEventsField, PostedEvents));
	ParseSuccess &= PostedEvents_IsValid; 
	const TSharedPtr<FJsonValue> JsonErrorsField = (*Object)->TryGetField(TEXT("errors"));
	if (JsonErrorsField.IsValid())
	{
		Errors_IsSet = TryGetJsonValue(JsonErrorsField, Errors_Optional);
		ParseSuccess &= Errors_IsSet;
	}

	return ParseSuccess;
}

