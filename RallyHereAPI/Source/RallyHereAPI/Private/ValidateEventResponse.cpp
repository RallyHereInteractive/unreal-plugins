// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ValidateEventResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_ValidateEventResponse

void FRHAPI_ValidateEventResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("success"));
	RallyHereAPI::WriteJsonValue(Writer, Success);
	if (ErrorCode_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("error_code"));
		if (ErrorCode_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, ErrorCode_Optional);
	}
	if (Context_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("context"));
		if (Context_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Context_Optional);
	}
	if (OutputEvent_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("output_event"));
		if (OutputEvent_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, OutputEvent_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_ValidateEventResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonSuccessField = (*Object)->TryGetField(TEXT("success"));
	const bool Success_IsValid = JsonSuccessField.IsValid() && (!JsonSuccessField->IsNull() && TryGetJsonValue(JsonSuccessField, Success));
	ParseSuccess &= Success_IsValid; 
	const TSharedPtr<FJsonValue> JsonErrorCodeField = (*Object)->TryGetField(TEXT("error_code"));
	if (JsonErrorCodeField.IsValid())
	{
		ErrorCode_IsNull = JsonErrorCodeField->IsNull();
		ErrorCode_IsSet = ErrorCode_IsNull || TryGetJsonValue(JsonErrorCodeField, ErrorCode_Optional);
		ParseSuccess &= ErrorCode_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonContextField = (*Object)->TryGetField(TEXT("context"));
	if (JsonContextField.IsValid())
	{
		Context_IsNull = JsonContextField->IsNull();
		Context_IsSet = Context_IsNull || TryGetJsonValue(JsonContextField, Context_Optional);
		ParseSuccess &= Context_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonOutputEventField = (*Object)->TryGetField(TEXT("output_event"));
	if (JsonOutputEventField.IsValid())
	{
		OutputEvent_IsNull = JsonOutputEventField->IsNull();
		OutputEvent_IsSet = OutputEvent_IsNull || TryGetJsonValue(JsonOutputEventField, OutputEvent_Optional);
		ParseSuccess &= OutputEvent_IsSet;
	}

	return ParseSuccess;
}

