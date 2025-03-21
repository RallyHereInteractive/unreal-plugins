// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "FavoriteGuideRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_FavoriteGuideRequest

void FRHAPI_FavoriteGuideRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("guide_id"));
	RallyHereAPI::WriteJsonValue(Writer, GuideId);
	Writer->WriteObjectEnd();
}

bool FRHAPI_FavoriteGuideRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonGuideIdField = (*Object)->TryGetField(TEXT("guide_id"));
	const bool GuideId_IsValid = JsonGuideIdField.IsValid() && (!JsonGuideIdField->IsNull() && TryGetJsonValue(JsonGuideIdField, GuideId));
	ParseSuccess &= GuideId_IsValid; 

	return ParseSuccess;
}

