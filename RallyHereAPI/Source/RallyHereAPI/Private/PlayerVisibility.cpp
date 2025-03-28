// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerVisibility.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_PlayerVisibility
FString EnumToString(const ERHAPI_PlayerVisibility& Value)
{
	switch (Value)
	{
	case ERHAPI_PlayerVisibility::All:
		return TEXT("ALL");
	case ERHAPI_PlayerVisibility::Team:
		return TEXT("TEAM");
	case ERHAPI_PlayerVisibility::Self:
		return TEXT("SELF");
	case ERHAPI_PlayerVisibility::None:
		return TEXT("NONE");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_PlayerVisibility::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_PlayerVisibility& Value)
{
	static TMap<FString, ERHAPI_PlayerVisibility> StringToEnum = { 
		{ TEXT("ALL"), ERHAPI_PlayerVisibility::All },
		{ TEXT("TEAM"), ERHAPI_PlayerVisibility::Team },
		{ TEXT("SELF"), ERHAPI_PlayerVisibility::Self },
		{ TEXT("NONE"), ERHAPI_PlayerVisibility::None },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerVisibility& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PlayerVisibility& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PlayerVisibility& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


