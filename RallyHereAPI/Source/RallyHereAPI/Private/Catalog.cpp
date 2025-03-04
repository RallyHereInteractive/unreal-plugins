// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Catalog.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Catalog

void FRHAPI_Catalog::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (XpTables_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("xp_tables"));
		if (XpTables_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, XpTables_Optional);
	}
	if (PortalUseRulesets_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("portal_use_rulesets"));
		if (PortalUseRulesets_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PortalUseRulesets_Optional);
	}
	if (InventoryBucketUseRuleSets_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("inventory_bucket_use_rule_sets"));
		if (InventoryBucketUseRuleSets_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, InventoryBucketUseRuleSets_Optional);
	}
	if (Vendors_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("vendors"));
		if (Vendors_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Vendors_Optional);
	}
	if (Loot_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("loot"));
		if (Loot_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Loot_Optional);
	}
	if (Items_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("items"));
		if (Items_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Items_Optional);
	}
	if (PricePoints_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("price_points"));
		if (PricePoints_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PricePoints_Optional);
	}
	if (TimeFrames_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("time_frames"));
		if (TimeFrames_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, TimeFrames_Optional);
	}
	if (Skus_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("skus"));
		if (Skus_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Skus_Optional);
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

bool FRHAPI_Catalog::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonXpTablesField = (*Object)->TryGetField(TEXT("xp_tables"));
	if (JsonXpTablesField.IsValid())
	{
		XpTables_IsNull = JsonXpTablesField->IsNull();
		XpTables_IsSet = XpTables_IsNull || TryGetJsonValue(JsonXpTablesField, XpTables_Optional);
		ParseSuccess &= XpTables_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPortalUseRulesetsField = (*Object)->TryGetField(TEXT("portal_use_rulesets"));
	if (JsonPortalUseRulesetsField.IsValid())
	{
		PortalUseRulesets_IsNull = JsonPortalUseRulesetsField->IsNull();
		PortalUseRulesets_IsSet = PortalUseRulesets_IsNull || TryGetJsonValue(JsonPortalUseRulesetsField, PortalUseRulesets_Optional);
		ParseSuccess &= PortalUseRulesets_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInventoryBucketUseRuleSetsField = (*Object)->TryGetField(TEXT("inventory_bucket_use_rule_sets"));
	if (JsonInventoryBucketUseRuleSetsField.IsValid())
	{
		InventoryBucketUseRuleSets_IsNull = JsonInventoryBucketUseRuleSetsField->IsNull();
		InventoryBucketUseRuleSets_IsSet = InventoryBucketUseRuleSets_IsNull || TryGetJsonValue(JsonInventoryBucketUseRuleSetsField, InventoryBucketUseRuleSets_Optional);
		ParseSuccess &= InventoryBucketUseRuleSets_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonVendorsField = (*Object)->TryGetField(TEXT("vendors"));
	if (JsonVendorsField.IsValid())
	{
		Vendors_IsNull = JsonVendorsField->IsNull();
		Vendors_IsSet = Vendors_IsNull || TryGetJsonValue(JsonVendorsField, Vendors_Optional);
		ParseSuccess &= Vendors_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
	if (JsonLootField.IsValid())
	{
		Loot_IsNull = JsonLootField->IsNull();
		Loot_IsSet = Loot_IsNull || TryGetJsonValue(JsonLootField, Loot_Optional);
		ParseSuccess &= Loot_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonItemsField = (*Object)->TryGetField(TEXT("items"));
	if (JsonItemsField.IsValid())
	{
		Items_IsNull = JsonItemsField->IsNull();
		Items_IsSet = Items_IsNull || TryGetJsonValue(JsonItemsField, Items_Optional);
		ParseSuccess &= Items_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPricePointsField = (*Object)->TryGetField(TEXT("price_points"));
	if (JsonPricePointsField.IsValid())
	{
		PricePoints_IsNull = JsonPricePointsField->IsNull();
		PricePoints_IsSet = PricePoints_IsNull || TryGetJsonValue(JsonPricePointsField, PricePoints_Optional);
		ParseSuccess &= PricePoints_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonTimeFramesField = (*Object)->TryGetField(TEXT("time_frames"));
	if (JsonTimeFramesField.IsValid())
	{
		TimeFrames_IsNull = JsonTimeFramesField->IsNull();
		TimeFrames_IsSet = TimeFrames_IsNull || TryGetJsonValue(JsonTimeFramesField, TimeFrames_Optional);
		ParseSuccess &= TimeFrames_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSkusField = (*Object)->TryGetField(TEXT("skus"));
	if (JsonSkusField.IsValid())
	{
		Skus_IsNull = JsonSkusField->IsNull();
		Skus_IsSet = Skus_IsNull || TryGetJsonValue(JsonSkusField, Skus_Optional);
		ParseSuccess &= Skus_IsSet;
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

