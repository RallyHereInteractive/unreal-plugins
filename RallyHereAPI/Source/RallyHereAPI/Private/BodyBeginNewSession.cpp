// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BodyBeginNewSession.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BodyBeginNewSession

void FRHAPI_BodyBeginNewSession::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("country_code"));
	RallyHereAPI::WriteJsonValue(Writer, CountryCode);
	if (DeviceId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("device_id"));
		RallyHereAPI::WriteJsonValue(Writer, DeviceId_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_BodyBeginNewSession::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonCountryCodeField = (*Object)->TryGetField(TEXT("country_code"));
	const bool CountryCode_IsValid = JsonCountryCodeField.IsValid() && (!JsonCountryCodeField->IsNull() && TryGetJsonValue(JsonCountryCodeField, CountryCode));
	ParseSuccess &= CountryCode_IsValid; 
	const TSharedPtr<FJsonValue> JsonDeviceIdField = (*Object)->TryGetField(TEXT("device_id"));
	if (JsonDeviceIdField.IsValid())
	{
		DeviceId_IsSet = TryGetJsonValue(JsonDeviceIdField, DeviceId_Optional);
		ParseSuccess &= DeviceId_IsSet;
	}

	return ParseSuccess;
}

