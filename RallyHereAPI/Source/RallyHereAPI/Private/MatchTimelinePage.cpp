// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchTimelinePage.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchTimelinePage

void FRHAPI_MatchTimelinePage::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Events_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("events"));
		RallyHereAPI::WriteJsonValue(Writer, Events_Optional);
	}
	if (Cursor_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("cursor"));
		if (Cursor_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Cursor_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_MatchTimelinePage::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
	const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
	if (JsonCursorField.IsValid())
	{
		Cursor_IsNull = JsonCursorField->IsNull();
		Cursor_IsSet = Cursor_IsNull || TryGetJsonValue(JsonCursorField, Cursor_Optional);
		ParseSuccess &= Cursor_IsSet;
	}

	return ParseSuccess;
}

