// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ManyPlayerOrderCreate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_ManyPlayerOrderCreate

void FRHAPI_ManyPlayerOrderCreate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("orders"));
	RallyHereAPI::WriteJsonValue(Writer, Orders);
	Writer->WriteObjectEnd();
}

bool FRHAPI_ManyPlayerOrderCreate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonOrdersField = (*Object)->TryGetField(TEXT("orders"));
	const bool Orders_IsValid = JsonOrdersField.IsValid() && (!JsonOrdersField->IsNull() && TryGetJsonValue(JsonOrdersField, Orders));
	ParseSuccess &= Orders_IsValid; 

	return ParseSuccess;
}

