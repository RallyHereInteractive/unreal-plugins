// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InventoryBucketUseRuleSets.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InventoryBucketUseRuleSets

void FRHAPI_InventoryBucketUseRuleSets::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (RuleSets_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("rule_sets"));
		RallyHereAPI::WriteJsonValue(Writer, RuleSets_Optional);
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

bool FRHAPI_InventoryBucketUseRuleSets::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonRuleSetsField = (*Object)->TryGetField(TEXT("rule_sets"));
	if (JsonRuleSetsField.IsValid())
	{
		RuleSets_IsSet = TryGetJsonValue(JsonRuleSetsField, RuleSets_Optional);
		ParseSuccess &= RuleSets_IsSet;
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

