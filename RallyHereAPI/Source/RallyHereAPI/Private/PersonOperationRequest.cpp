// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PersonOperationRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PersonOperationRequest

void FRHAPI_PersonOperationRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (PersonId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("person_id"));
		RallyHereAPI::WriteJsonValue(Writer, PersonId_Optional);
	}
	if (Platform_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(Platform_Optional));
	}
	if (PlatformUserId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("platform_user_id"));
		RallyHereAPI::WriteJsonValue(Writer, PlatformUserId_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_PersonOperationRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPersonIdField = (*Object)->TryGetField(TEXT("person_id"));
	if (JsonPersonIdField.IsValid() && !JsonPersonIdField->IsNull())
	{
		PersonId_IsSet = TryGetJsonValue(JsonPersonIdField, PersonId_Optional);
		ParseSuccess &= PersonId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformField = (*Object)->TryGetField(TEXT("platform"));
	if (JsonPlatformField.IsValid() && !JsonPlatformField->IsNull())
	{
		Platform_IsSet = TryGetJsonValue(JsonPlatformField, Platform_Optional);
		ParseSuccess &= Platform_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlatformUserIdField = (*Object)->TryGetField(TEXT("platform_user_id"));
	if (JsonPlatformUserIdField.IsValid() && !JsonPlatformUserIdField->IsNull())
	{
		PlatformUserId_IsSet = TryGetJsonValue(JsonPlatformUserIdField, PlatformUserId_Optional);
		ParseSuccess &= PlatformUserId_IsSet;
	}

	return ParseSuccess;
}
