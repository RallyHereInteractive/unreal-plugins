// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "FileListResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_FileListResponse

void FRHAPI_FileListResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("files"));
	RallyHereAPI::WriteJsonValue(Writer, Files);
	Writer->WriteObjectEnd();
}

bool FRHAPI_FileListResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonFilesField = (*Object)->TryGetField(TEXT("files"));
	const bool Files_IsValid = JsonFilesField.IsValid() && (!JsonFilesField->IsNull() && TryGetJsonValue(JsonFilesField, Files));
	ParseSuccess &= Files_IsValid; 

	return ParseSuccess;
}

