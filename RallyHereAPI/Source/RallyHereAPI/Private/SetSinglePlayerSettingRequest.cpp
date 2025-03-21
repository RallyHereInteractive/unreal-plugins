// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SetSinglePlayerSettingRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SetSinglePlayerSettingRequest

void FRHAPI_SetSinglePlayerSettingRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("v"));
	RallyHereAPI::WriteJsonValue(Writer, V);
	Writer->WriteIdentifierPrefix(TEXT("value"));
	if (Value_IsNull)
		WriteJsonValue(Writer, nullptr);
	else
	RallyHereAPI::WriteJsonValue(Writer, Value);
	Writer->WriteObjectEnd();
}

bool FRHAPI_SetSinglePlayerSettingRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonVField = (*Object)->TryGetField(TEXT("v"));
	const bool V_IsValid = JsonVField.IsValid() && (!JsonVField->IsNull() && TryGetJsonValue(JsonVField, V));
	ParseSuccess &= V_IsValid; 
	const TSharedPtr<FJsonValue> JsonValueField = (*Object)->TryGetField(TEXT("value"));
	Value_IsNull = JsonValueField != nullptr && JsonValueField->IsNull();
	const bool Value_IsValid = JsonValueField.IsValid() && (Value_IsNull|| TryGetJsonValue(JsonValueField, Value));
	ParseSuccess &= Value_IsValid; 

	return ParseSuccess;
}

