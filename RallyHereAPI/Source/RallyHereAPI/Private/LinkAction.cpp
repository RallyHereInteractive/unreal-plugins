// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "LinkAction.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_LinkAction
FString EnumToString(const ERHAPI_LinkAction& Value)
{
	switch (Value)
	{
	case ERHAPI_LinkAction::Link:
		return TEXT("link");
	case ERHAPI_LinkAction::Unlink:
		return TEXT("unlink");
	case ERHAPI_LinkAction::NewPerson:
		return TEXT("new_person");
	case ERHAPI_LinkAction::XprogEnable:
		return TEXT("xprog_enable");
	case ERHAPI_LinkAction::XprogDisable:
		return TEXT("xprog_disable");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_LinkAction::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_LinkAction& Value)
{
	static TMap<FString, ERHAPI_LinkAction> StringToEnum = { 
		{ TEXT("link"), ERHAPI_LinkAction::Link },
		{ TEXT("unlink"), ERHAPI_LinkAction::Unlink },
		{ TEXT("new_person"), ERHAPI_LinkAction::NewPerson },
		{ TEXT("xprog_enable"), ERHAPI_LinkAction::XprogEnable },
		{ TEXT("xprog_disable"), ERHAPI_LinkAction::XprogDisable },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_LinkAction& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_LinkAction& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_LinkAction& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}

