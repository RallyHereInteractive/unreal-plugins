// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Loots.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Loots

void FRHAPI_Loots::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Loot_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("loot"));
		RallyHereAPI::WriteJsonValue(Writer, Loot_Optional);
	}
	if (CacheInfo_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("cache_info"));
		if (CacheInfo_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_Loots::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
	if (JsonLootField.IsValid())
	{
		Loot_IsSet = TryGetJsonValue(JsonLootField, Loot_Optional);
		ParseSuccess &= Loot_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCacheInfoField = (*Object)->TryGetField(TEXT("cache_info"));
	if (JsonCacheInfoField.IsValid())
	{
		CacheInfo_IsNull = JsonCacheInfoField->IsNull();
		CacheInfo_IsSet = CacheInfo_IsNull || TryGetJsonValue(JsonCacheInfoField, CacheInfo_Optional);
		ParseSuccess &= CacheInfo_IsSet;
	}

	return ParseSuccess;
}

