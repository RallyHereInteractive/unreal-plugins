// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PurgeResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PurgeResponse

void FRHAPI_PurgeResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("person_id"));
	RallyHereAPI::WriteJsonValue(Writer, PersonId);
	Writer->WriteIdentifierPrefix(TEXT("purge_on"));
	RallyHereAPI::WriteJsonValue(Writer, PurgeOn);
	Writer->WriteIdentifierPrefix(TEXT("created_on"));
	RallyHereAPI::WriteJsonValue(Writer, CreatedOn);
	Writer->WriteIdentifierPrefix(TEXT("last_modified_on"));
	RallyHereAPI::WriteJsonValue(Writer, LastModifiedOn);
	Writer->WriteIdentifierPrefix(TEXT("status"));
	RallyHereAPI::WriteJsonValue(Writer, Status);
	Writer->WriteObjectEnd();
}

bool FRHAPI_PurgeResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPersonIdField = (*Object)->TryGetField(TEXT("person_id"));
	const bool PersonId_IsValid = JsonPersonIdField.IsValid() && (!JsonPersonIdField->IsNull() && TryGetJsonValue(JsonPersonIdField, PersonId));
	ParseSuccess &= PersonId_IsValid; 
	const TSharedPtr<FJsonValue> JsonPurgeOnField = (*Object)->TryGetField(TEXT("purge_on"));
	const bool PurgeOn_IsValid = JsonPurgeOnField.IsValid() && (!JsonPurgeOnField->IsNull() && TryGetJsonValue(JsonPurgeOnField, PurgeOn));
	ParseSuccess &= PurgeOn_IsValid; 
	const TSharedPtr<FJsonValue> JsonCreatedOnField = (*Object)->TryGetField(TEXT("created_on"));
	const bool CreatedOn_IsValid = JsonCreatedOnField.IsValid() && (!JsonCreatedOnField->IsNull() && TryGetJsonValue(JsonCreatedOnField, CreatedOn));
	ParseSuccess &= CreatedOn_IsValid; 
	const TSharedPtr<FJsonValue> JsonLastModifiedOnField = (*Object)->TryGetField(TEXT("last_modified_on"));
	const bool LastModifiedOn_IsValid = JsonLastModifiedOnField.IsValid() && (!JsonLastModifiedOnField->IsNull() && TryGetJsonValue(JsonLastModifiedOnField, LastModifiedOn));
	ParseSuccess &= LastModifiedOn_IsValid; 
	const TSharedPtr<FJsonValue> JsonStatusField = (*Object)->TryGetField(TEXT("status"));
	const bool Status_IsValid = JsonStatusField.IsValid() && (!JsonStatusField->IsNull() && TryGetJsonValue(JsonStatusField, Status));
	ParseSuccess &= Status_IsValid; 

	return ParseSuccess;
}

