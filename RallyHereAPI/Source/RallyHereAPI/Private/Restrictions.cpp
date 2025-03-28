// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Restrictions.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Restrictions

void FRHAPI_Restrictions::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Restrictions_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("restrictions"));
		RallyHereAPI::WriteJsonValue(Writer, Restrictions_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_Restrictions::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonRestrictionsField = (*Object)->TryGetField(TEXT("restrictions"));
	if (JsonRestrictionsField.IsValid())
	{
		Restrictions_IsSet = TryGetJsonValue(JsonRestrictionsField, Restrictions_Optional);
		ParseSuccess &= Restrictions_IsSet;
	}

	return ParseSuccess;
}

