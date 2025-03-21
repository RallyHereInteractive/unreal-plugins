// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Loot.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Loot

void FRHAPI_Loot::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (CustomData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_data"));
		RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
	}
	if (LootUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("loot_uuid"));
		if (LootUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, LootUuid_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("loot_id"));
	RallyHereAPI::WriteJsonValue(Writer, LootId);
	Writer->WriteIdentifierPrefix(TEXT("vendor_id"));
	RallyHereAPI::WriteJsonValue(Writer, VendorId);
	if (VendorUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("vendor_uuid"));
		if (VendorUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, VendorUuid_Optional);
	}
	if (ItemId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("item_id"));
		if (ItemId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, ItemId_Optional);
	}
	if (ItemUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("item_uuid"));
		if (ItemUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, ItemUuid_Optional);
	}
	if (Item_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("item"));
		if (Item_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Item_Optional);
	}
	if (SubVendorId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("sub_vendor_id"));
		if (SubVendorId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, SubVendorId_Optional);
	}
	if (SubVendorUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("sub_vendor_uuid"));
		if (SubVendorUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, SubVendorUuid_Optional);
	}
	if (Quantity_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("quantity"));
		RallyHereAPI::WriteJsonValue(Writer, Quantity_Optional);
	}
	if (InventorySelectorType_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("inventory_selector_type"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(InventorySelectorType_Optional));
	}
	if (InventoryOperation_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("inventory_operation"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(InventoryOperation_Optional));
	}
	if (Active_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("active"));
		RallyHereAPI::WriteJsonValue(Writer, Active_Optional);
	}
	if (SortOrder_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("sort_order"));
		RallyHereAPI::WriteJsonValue(Writer, SortOrder_Optional);
	}
	if (DropWeight_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("drop_weight"));
		RallyHereAPI::WriteJsonValue(Writer, DropWeight_Optional);
	}
	if (FillInNewOrder_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("fill_in_new_order"));
		RallyHereAPI::WriteJsonValue(Writer, FillInNewOrder_Optional);
	}
	if (AllowPartialBundles_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("allow_partial_bundles"));
		RallyHereAPI::WriteJsonValue(Writer, AllowPartialBundles_Optional);
	}
	if (RequiredItemId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("required_item_id"));
		if (RequiredItemId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, RequiredItemId_Optional);
	}
	if (RequiredItemUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("required_item_uuid"));
		if (RequiredItemUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, RequiredItemUuid_Optional);
	}
	if (RequiredItemCount_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("required_item_count"));
		RallyHereAPI::WriteJsonValue(Writer, RequiredItemCount_Optional);
	}
	if (StackLimit_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("stack_limit"));
		RallyHereAPI::WriteJsonValue(Writer, StackLimit_Optional);
	}
	if (UiHint_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("ui_hint"));
		RallyHereAPI::WriteJsonValue(Writer, UiHint_Optional);
	}
	if (EffectiveFrom_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("effective_from"));
		if (EffectiveFrom_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, EffectiveFrom_Optional);
	}
	if (QuantityType_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("quantity_type"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(QuantityType_Optional));
	}
	if (QuantityMultInventoryItemId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("quantity_mult_inventory_item_id"));
		if (QuantityMultInventoryItemId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, QuantityMultInventoryItemId_Optional);
	}
	if (QuantityMultInventoryItemUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("quantity_mult_inventory_item_uuid"));
		if (QuantityMultInventoryItemUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, QuantityMultInventoryItemUuid_Optional);
	}
	if (IsClaimableByClient_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("is_claimable_by_client"));
		RallyHereAPI::WriteJsonValue(Writer, IsClaimableByClient_Optional);
	}
	if (TimeFrameId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("time_frame_id"));
		if (TimeFrameId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, TimeFrameId_Optional);
	}
	if (UseInventoryBucket_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("use_inventory_bucket"));
		if (UseInventoryBucket_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(UseInventoryBucket_Optional));
	}
	if (XpQuantityTransformType_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("xp_quantity_transform_type"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(XpQuantityTransformType_Optional));
	}
	if (CurrentPricePointGuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("current_price_point_guid"));
		if (CurrentPricePointGuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, CurrentPricePointGuid_Optional);
	}
	if (PreSalePricePointGuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("pre_sale_price_point_guid"));
		if (PreSalePricePointGuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, PreSalePricePointGuid_Optional);
	}
	if (CacheInfo_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("cache_info"));
		if (CacheInfo_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
	}
	if (HardQuantityMaximum_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("hard_quantity_maximum"));
		RallyHereAPI::WriteJsonValue(Writer, HardQuantityMaximum_Optional);
	}
	if (Price_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("price"));
		if (Price_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Price_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_Loot::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
	if (JsonCustomDataField.IsValid())
	{
		CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
		ParseSuccess &= CustomData_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonLootUuidField = (*Object)->TryGetField(TEXT("loot_uuid"));
	if (JsonLootUuidField.IsValid())
	{
		LootUuid_IsNull = JsonLootUuidField->IsNull();
		LootUuid_IsSet = LootUuid_IsNull || TryGetJsonValue(JsonLootUuidField, LootUuid_Optional);
		ParseSuccess &= LootUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonLootIdField = (*Object)->TryGetField(TEXT("loot_id"));
	const bool LootId_IsValid = JsonLootIdField.IsValid() && (!JsonLootIdField->IsNull() && TryGetJsonValue(JsonLootIdField, LootId));
	ParseSuccess &= LootId_IsValid; 
	const TSharedPtr<FJsonValue> JsonVendorIdField = (*Object)->TryGetField(TEXT("vendor_id"));
	const bool VendorId_IsValid = JsonVendorIdField.IsValid() && (!JsonVendorIdField->IsNull() && TryGetJsonValue(JsonVendorIdField, VendorId));
	ParseSuccess &= VendorId_IsValid; 
	const TSharedPtr<FJsonValue> JsonVendorUuidField = (*Object)->TryGetField(TEXT("vendor_uuid"));
	if (JsonVendorUuidField.IsValid())
	{
		VendorUuid_IsNull = JsonVendorUuidField->IsNull();
		VendorUuid_IsSet = VendorUuid_IsNull || TryGetJsonValue(JsonVendorUuidField, VendorUuid_Optional);
		ParseSuccess &= VendorUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonItemIdField = (*Object)->TryGetField(TEXT("item_id"));
	if (JsonItemIdField.IsValid())
	{
		ItemId_IsNull = JsonItemIdField->IsNull();
		ItemId_IsSet = ItemId_IsNull || TryGetJsonValue(JsonItemIdField, ItemId_Optional);
		ParseSuccess &= ItemId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonItemUuidField = (*Object)->TryGetField(TEXT("item_uuid"));
	if (JsonItemUuidField.IsValid())
	{
		ItemUuid_IsNull = JsonItemUuidField->IsNull();
		ItemUuid_IsSet = ItemUuid_IsNull || TryGetJsonValue(JsonItemUuidField, ItemUuid_Optional);
		ParseSuccess &= ItemUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonItemField = (*Object)->TryGetField(TEXT("item"));
	if (JsonItemField.IsValid())
	{
		Item_IsNull = JsonItemField->IsNull();
		Item_IsSet = Item_IsNull || TryGetJsonValue(JsonItemField, Item_Optional);
		ParseSuccess &= Item_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSubVendorIdField = (*Object)->TryGetField(TEXT("sub_vendor_id"));
	if (JsonSubVendorIdField.IsValid())
	{
		SubVendorId_IsNull = JsonSubVendorIdField->IsNull();
		SubVendorId_IsSet = SubVendorId_IsNull || TryGetJsonValue(JsonSubVendorIdField, SubVendorId_Optional);
		ParseSuccess &= SubVendorId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSubVendorUuidField = (*Object)->TryGetField(TEXT("sub_vendor_uuid"));
	if (JsonSubVendorUuidField.IsValid())
	{
		SubVendorUuid_IsNull = JsonSubVendorUuidField->IsNull();
		SubVendorUuid_IsSet = SubVendorUuid_IsNull || TryGetJsonValue(JsonSubVendorUuidField, SubVendorUuid_Optional);
		ParseSuccess &= SubVendorUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonQuantityField = (*Object)->TryGetField(TEXT("quantity"));
	if (JsonQuantityField.IsValid())
	{
		Quantity_IsSet = TryGetJsonValue(JsonQuantityField, Quantity_Optional);
		ParseSuccess &= Quantity_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInventorySelectorTypeField = (*Object)->TryGetField(TEXT("inventory_selector_type"));
	if (JsonInventorySelectorTypeField.IsValid())
	{
		InventorySelectorType_IsSet = TryGetJsonValue(JsonInventorySelectorTypeField, InventorySelectorType_Optional);
		ParseSuccess &= InventorySelectorType_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInventoryOperationField = (*Object)->TryGetField(TEXT("inventory_operation"));
	if (JsonInventoryOperationField.IsValid())
	{
		InventoryOperation_IsSet = TryGetJsonValue(JsonInventoryOperationField, InventoryOperation_Optional);
		ParseSuccess &= InventoryOperation_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonActiveField = (*Object)->TryGetField(TEXT("active"));
	if (JsonActiveField.IsValid())
	{
		Active_IsSet = TryGetJsonValue(JsonActiveField, Active_Optional);
		ParseSuccess &= Active_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSortOrderField = (*Object)->TryGetField(TEXT("sort_order"));
	if (JsonSortOrderField.IsValid())
	{
		SortOrder_IsSet = TryGetJsonValue(JsonSortOrderField, SortOrder_Optional);
		ParseSuccess &= SortOrder_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonDropWeightField = (*Object)->TryGetField(TEXT("drop_weight"));
	if (JsonDropWeightField.IsValid())
	{
		DropWeight_IsSet = TryGetJsonValue(JsonDropWeightField, DropWeight_Optional);
		ParseSuccess &= DropWeight_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonFillInNewOrderField = (*Object)->TryGetField(TEXT("fill_in_new_order"));
	if (JsonFillInNewOrderField.IsValid())
	{
		FillInNewOrder_IsSet = TryGetJsonValue(JsonFillInNewOrderField, FillInNewOrder_Optional);
		ParseSuccess &= FillInNewOrder_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonAllowPartialBundlesField = (*Object)->TryGetField(TEXT("allow_partial_bundles"));
	if (JsonAllowPartialBundlesField.IsValid())
	{
		AllowPartialBundles_IsSet = TryGetJsonValue(JsonAllowPartialBundlesField, AllowPartialBundles_Optional);
		ParseSuccess &= AllowPartialBundles_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonRequiredItemIdField = (*Object)->TryGetField(TEXT("required_item_id"));
	if (JsonRequiredItemIdField.IsValid())
	{
		RequiredItemId_IsNull = JsonRequiredItemIdField->IsNull();
		RequiredItemId_IsSet = RequiredItemId_IsNull || TryGetJsonValue(JsonRequiredItemIdField, RequiredItemId_Optional);
		ParseSuccess &= RequiredItemId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonRequiredItemUuidField = (*Object)->TryGetField(TEXT("required_item_uuid"));
	if (JsonRequiredItemUuidField.IsValid())
	{
		RequiredItemUuid_IsNull = JsonRequiredItemUuidField->IsNull();
		RequiredItemUuid_IsSet = RequiredItemUuid_IsNull || TryGetJsonValue(JsonRequiredItemUuidField, RequiredItemUuid_Optional);
		ParseSuccess &= RequiredItemUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonRequiredItemCountField = (*Object)->TryGetField(TEXT("required_item_count"));
	if (JsonRequiredItemCountField.IsValid())
	{
		RequiredItemCount_IsSet = TryGetJsonValue(JsonRequiredItemCountField, RequiredItemCount_Optional);
		ParseSuccess &= RequiredItemCount_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonStackLimitField = (*Object)->TryGetField(TEXT("stack_limit"));
	if (JsonStackLimitField.IsValid())
	{
		StackLimit_IsSet = TryGetJsonValue(JsonStackLimitField, StackLimit_Optional);
		ParseSuccess &= StackLimit_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonUiHintField = (*Object)->TryGetField(TEXT("ui_hint"));
	if (JsonUiHintField.IsValid())
	{
		UiHint_IsSet = TryGetJsonValue(JsonUiHintField, UiHint_Optional);
		ParseSuccess &= UiHint_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonEffectiveFromField = (*Object)->TryGetField(TEXT("effective_from"));
	if (JsonEffectiveFromField.IsValid())
	{
		EffectiveFrom_IsNull = JsonEffectiveFromField->IsNull();
		EffectiveFrom_IsSet = EffectiveFrom_IsNull || TryGetJsonValue(JsonEffectiveFromField, EffectiveFrom_Optional);
		ParseSuccess &= EffectiveFrom_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonQuantityTypeField = (*Object)->TryGetField(TEXT("quantity_type"));
	if (JsonQuantityTypeField.IsValid())
	{
		QuantityType_IsSet = TryGetJsonValue(JsonQuantityTypeField, QuantityType_Optional);
		ParseSuccess &= QuantityType_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonQuantityMultInventoryItemIdField = (*Object)->TryGetField(TEXT("quantity_mult_inventory_item_id"));
	if (JsonQuantityMultInventoryItemIdField.IsValid())
	{
		QuantityMultInventoryItemId_IsNull = JsonQuantityMultInventoryItemIdField->IsNull();
		QuantityMultInventoryItemId_IsSet = QuantityMultInventoryItemId_IsNull || TryGetJsonValue(JsonQuantityMultInventoryItemIdField, QuantityMultInventoryItemId_Optional);
		ParseSuccess &= QuantityMultInventoryItemId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonQuantityMultInventoryItemUuidField = (*Object)->TryGetField(TEXT("quantity_mult_inventory_item_uuid"));
	if (JsonQuantityMultInventoryItemUuidField.IsValid())
	{
		QuantityMultInventoryItemUuid_IsNull = JsonQuantityMultInventoryItemUuidField->IsNull();
		QuantityMultInventoryItemUuid_IsSet = QuantityMultInventoryItemUuid_IsNull || TryGetJsonValue(JsonQuantityMultInventoryItemUuidField, QuantityMultInventoryItemUuid_Optional);
		ParseSuccess &= QuantityMultInventoryItemUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonIsClaimableByClientField = (*Object)->TryGetField(TEXT("is_claimable_by_client"));
	if (JsonIsClaimableByClientField.IsValid())
	{
		IsClaimableByClient_IsSet = TryGetJsonValue(JsonIsClaimableByClientField, IsClaimableByClient_Optional);
		ParseSuccess &= IsClaimableByClient_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonTimeFrameIdField = (*Object)->TryGetField(TEXT("time_frame_id"));
	if (JsonTimeFrameIdField.IsValid())
	{
		TimeFrameId_IsNull = JsonTimeFrameIdField->IsNull();
		TimeFrameId_IsSet = TimeFrameId_IsNull || TryGetJsonValue(JsonTimeFrameIdField, TimeFrameId_Optional);
		ParseSuccess &= TimeFrameId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonUseInventoryBucketField = (*Object)->TryGetField(TEXT("use_inventory_bucket"));
	if (JsonUseInventoryBucketField.IsValid())
	{
		UseInventoryBucket_IsNull = JsonUseInventoryBucketField->IsNull();
		UseInventoryBucket_IsSet = UseInventoryBucket_IsNull || TryGetJsonValue(JsonUseInventoryBucketField, UseInventoryBucket_Optional);
		ParseSuccess &= UseInventoryBucket_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonXpQuantityTransformTypeField = (*Object)->TryGetField(TEXT("xp_quantity_transform_type"));
	if (JsonXpQuantityTransformTypeField.IsValid())
	{
		XpQuantityTransformType_IsSet = TryGetJsonValue(JsonXpQuantityTransformTypeField, XpQuantityTransformType_Optional);
		ParseSuccess &= XpQuantityTransformType_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCurrentPricePointGuidField = (*Object)->TryGetField(TEXT("current_price_point_guid"));
	if (JsonCurrentPricePointGuidField.IsValid())
	{
		CurrentPricePointGuid_IsNull = JsonCurrentPricePointGuidField->IsNull();
		CurrentPricePointGuid_IsSet = CurrentPricePointGuid_IsNull || TryGetJsonValue(JsonCurrentPricePointGuidField, CurrentPricePointGuid_Optional);
		ParseSuccess &= CurrentPricePointGuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPreSalePricePointGuidField = (*Object)->TryGetField(TEXT("pre_sale_price_point_guid"));
	if (JsonPreSalePricePointGuidField.IsValid())
	{
		PreSalePricePointGuid_IsNull = JsonPreSalePricePointGuidField->IsNull();
		PreSalePricePointGuid_IsSet = PreSalePricePointGuid_IsNull || TryGetJsonValue(JsonPreSalePricePointGuidField, PreSalePricePointGuid_Optional);
		ParseSuccess &= PreSalePricePointGuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCacheInfoField = (*Object)->TryGetField(TEXT("cache_info"));
	if (JsonCacheInfoField.IsValid())
	{
		CacheInfo_IsNull = JsonCacheInfoField->IsNull();
		CacheInfo_IsSet = CacheInfo_IsNull || TryGetJsonValue(JsonCacheInfoField, CacheInfo_Optional);
		ParseSuccess &= CacheInfo_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonHardQuantityMaximumField = (*Object)->TryGetField(TEXT("hard_quantity_maximum"));
	if (JsonHardQuantityMaximumField.IsValid())
	{
		HardQuantityMaximum_IsSet = TryGetJsonValue(JsonHardQuantityMaximumField, HardQuantityMaximum_Optional);
		ParseSuccess &= HardQuantityMaximum_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPriceField = (*Object)->TryGetField(TEXT("price"));
	if (JsonPriceField.IsValid())
	{
		Price_IsNull = JsonPriceField->IsNull();
		Price_IsSet = Price_IsNull || TryGetJsonValue(JsonPriceField, Price_Optional);
		ParseSuccess &= Price_IsSet;
	}

	return ParseSuccess;
}

