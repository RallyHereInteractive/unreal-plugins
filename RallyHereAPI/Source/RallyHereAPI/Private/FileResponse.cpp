// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "FileResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_FileResponse

void FRHAPI_FileResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("name"));
	RallyHereAPI::WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("size"));
	RallyHereAPI::WriteJsonValue(Writer, Size);
	Writer->WriteIdentifierPrefix(TEXT("content_type"));
	RallyHereAPI::WriteJsonValue(Writer, ContentType);
	Writer->WriteIdentifierPrefix(TEXT("created_timestamp"));
	RallyHereAPI::WriteJsonValue(Writer, CreatedTimestamp);
	Writer->WriteObjectEnd();
}

bool FRHAPI_FileResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
	const bool Name_IsValid = JsonNameField.IsValid() && (!JsonNameField->IsNull() && TryGetJsonValue(JsonNameField, Name));
	ParseSuccess &= Name_IsValid; 
	const TSharedPtr<FJsonValue> JsonSizeField = (*Object)->TryGetField(TEXT("size"));
	const bool Size_IsValid = JsonSizeField.IsValid() && (!JsonSizeField->IsNull() && TryGetJsonValue(JsonSizeField, Size));
	ParseSuccess &= Size_IsValid; 
	const TSharedPtr<FJsonValue> JsonContentTypeField = (*Object)->TryGetField(TEXT("content_type"));
	const bool ContentType_IsValid = JsonContentTypeField.IsValid() && (!JsonContentTypeField->IsNull() && TryGetJsonValue(JsonContentTypeField, ContentType));
	ParseSuccess &= ContentType_IsValid; 
	const TSharedPtr<FJsonValue> JsonCreatedTimestampField = (*Object)->TryGetField(TEXT("created_timestamp"));
	const bool CreatedTimestamp_IsValid = JsonCreatedTimestampField.IsValid() && (!JsonCreatedTimestampField->IsNull() && TryGetJsonValue(JsonCreatedTimestampField, CreatedTimestamp));
	ParseSuccess &= CreatedTimestamp_IsValid; 

	return ParseSuccess;
}

