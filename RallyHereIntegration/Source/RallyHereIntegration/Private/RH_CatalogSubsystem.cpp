#include "RH_CatalogSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIHelpers.h"
#include "Engine/World.h"

void URH_CatalogSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	InitPropertiesWithDefaultValues();
}

void URH_CatalogSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
	InitPropertiesWithDefaultValues();
}

URH_CatalogXpTable* URH_CatalogSubsystem::GetXpTable(int32 XpTableId) const
{
	if (auto XpTable = XpTables.Find(XpTableId))
	{
		return *XpTable;
	}

	return nullptr;
}

void URH_CatalogSubsystem::InitPropertiesWithDefaultValues()
{
	XpTables.Empty();
	InventoryBucketUseRuleSets.Empty();
	VendorRequests.Empty();
	EnqueuedVendorsToGet.Empty();
	CatalogVendors.Empty();
	CatalogItems.Empty();
	CatalogVendorItems.Empty();
	CatalogPricePoints.Empty();
	GetCatalogAllETag = {};
	GetCatalogXpAllETag = {};
	GetCatalogPricePointsAllETag = {};
	GetCatalogInventoryBucketUseRuleSetsAllETag = {};
}

void URH_CatalogSubsystem::GetCatalogAll(FRH_CatalogCallBlock Delegate)
{
	auto Request = TGetCatalogAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogAllResponse, Delegate)))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogAllResponse(const TGetCatalogAll::Response& Resp, FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogAllETag = Resp.ETag.GetValue();
		}

		if (const auto Data = Resp.Content.GetXpTablesOrNull())
		{
			ParseAllXpTables(*Data);
		}

		if (const auto Data = Resp.Content.GetInventoryBucketUseRuleSetsOrNull())
		{
			ParseAllInventoryBucketUseRuleSets(*Data);
		}

		if (const auto Data = Resp.Content.GetPricePointsOrNull())
		{
			ParseAllPricePoints(*Data);
		}

		// #RHTODO - Implement full parsing
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful());
}

void URH_CatalogSubsystem::GetCatalogXpAll(FRH_CatalogCallBlock Delegate)
{
	auto Request = TGetCatalogXpAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogXpAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogXpAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogXpAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogXpAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogXpAllResponse, Delegate)))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogXpAllResponse(const TGetCatalogXpAll::Response& Resp, FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogXpAllETag = Resp.ETag.GetValue();
		}

		ParseAllXpTables(Resp.Content);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful());
}

void URH_CatalogSubsystem::GetCatalogItem(int32 ItemId, FRH_CatalogCallBlock Delegate)
{
	// #RHTODO: Implement refreshing item based on Etag

	if (GetCatalogItemByItemId(ItemId))
	{
		Delegate.ExecuteIfBound(true);
		return;
	}

	auto Request = TGetCatalogItem::Request();
	Request.AuthContext = GetAuthContext();
	Request.ItemId = ItemId;

	if (!TGetCatalogItem::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogItem::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogItemResponse, ItemId, Delegate)))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogItemResponse(const TGetCatalogItem::Response& Resp, int32 ItemId, FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		ParseCatalogItem(Resp.Content, ItemId);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful());
}

void URH_CatalogSubsystem::ParseAllXpTables(FRHAPI_XpTables Content)
{
	if (const auto NewXpTables = Content.GetXpTablesOrNull())
	{
		XpTables.Empty();

		for (auto const& XpTable : *NewXpTables)
		{
			int32 TableId = FCString::Atoi(*XpTable.Key);

			auto NewXpTable = NewObject<URH_CatalogXpTable>();
			NewXpTable->XpTableId = TableId;

			if (const auto CacheInfo = XpTable.Value.GetCacheInfoOrNull())
			{
				NewXpTable->ETag = CacheInfo->Etag;
			}

			if (const auto XpEntries = XpTable.Value.GetXpEntriesOrNull())
			{
				for (auto const& XpEntry : *XpEntries)
				{
					NewXpTable->XpEntries.Push(XpEntry.Value);
				}
			}

			XpTables.Add(TableId, NewXpTable);
		}
	}
}

void URH_CatalogSubsystem::GetCatalogInventoryBucketUseRuleSetsAll(FRH_CatalogCallBlock Delegate)
{
	auto Request = TGetCatalogInventoryBucketUseRuleSetsAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogInventoryBucketUseRuleSetsAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogInventoryBucketUseRuleSetsAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogInventoryBucketUseRuleSetsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogInventoryBucketUseRuleSetsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogInventoryBucketUseRuleSetsAllResponse, Delegate)))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogInventoryBucketUseRuleSetsAllResponse(const TGetCatalogInventoryBucketUseRuleSetsAll::Response& Resp, FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogInventoryBucketUseRuleSetsAllETag = Resp.ETag.GetValue();
		}

		ParseAllInventoryBucketUseRuleSets(Resp.Content);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful());
}

void URH_CatalogSubsystem::ParseAllInventoryBucketUseRuleSets(FRHAPI_InventoryBucketUseRuleSets Content)
{
	InventoryBucketUseRuleSets.Empty();
	if (Content.RuleSets_Optional.Num() == 0)
	{
		return;
	}
	
	for (auto const& RuleSet : Content.RuleSets_Optional)
	{
		if (RuleSet.Value.Rules_Optional.Num() == 0)
		{
			continue;
		}
		
		TMap<ERHAPI_InventoryBucket, URH_InventoryBucketUseRuleSet*> BucketRuleSet{};
		for (auto const& Rules : RuleSet.Value.Rules_Optional)
		{
			const auto Bucket = RH_GETENUMFROMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryBucket", Rules.Key);
			if (Bucket == INDEX_NONE)
			{
				continue;
			}

			ERHAPI_InventoryBucket InventoryBucket = static_cast<ERHAPI_InventoryBucket>(Bucket);
			URH_InventoryBucketUseRuleSet* NewInventoryBucketUseRuleSet = NewObject<URH_InventoryBucketUseRuleSet>();
			NewInventoryBucketUseRuleSet->Bucket = InventoryBucket;
			for (auto const& Rule : Rules.Value)
			{
				NewInventoryBucketUseRuleSet->BucketUseOrder.Add(static_cast<ERHAPI_InventoryBucket>(Rule));
			}

			if (RuleSet.Value.CacheInfo_IsSet)
			{
				NewInventoryBucketUseRuleSet->ETag = RuleSet.Value.CacheInfo_Optional.Etag;
			}

			BucketRuleSet.Add(InventoryBucket, NewInventoryBucketUseRuleSet);
		}
		
		InventoryBucketUseRuleSets.Add(RuleSet.Key, BucketRuleSet);
	}
}

bool URH_CatalogSubsystem::CanRulesetUsePlatformForBucket(const FString& InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryPortal InventoryPlatform) const
{
	return CanRulesetUsePlatformForBucket(InventoryBucketRulesetId, TargetBucket, RH_GetInventoryBucketFromInventoryPortal(InventoryPlatform));
}

bool URH_CatalogSubsystem::CanRulesetUsePlatformForBucket(const FString& InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryBucket ItemInventoryBucket) const
{
	if (auto findRuleset = InventoryBucketUseRuleSets.Find(InventoryBucketRulesetId))
	{
		TMap<ERHAPI_InventoryBucket, URH_InventoryBucketUseRuleSet*> ruleset = *findRuleset;
		URH_InventoryBucketUseRuleSet* InventoryBucket = nullptr;

		if (auto findInventoryBucket = ruleset.Find(TargetBucket))
		{
			InventoryBucket = *findInventoryBucket;
		}
		else if (auto findFallbackInventoryBucket = ruleset.Find(ERHAPI_InventoryBucket::None))
		{
			InventoryBucket = *findFallbackInventoryBucket;
		}

		if (InventoryBucket != nullptr)
		{
			return InventoryBucket->BucketUseOrder.Contains(ItemInventoryBucket);
		}
	}

	return false;
}

void URH_CatalogSubsystem::GetCatalogVendor(const FRHVendorGetRequest& VendorRequest)
{
	// If there were no requested vendors, fail the request.
	if (VendorRequest.VendorIds.Num() == 0)
	{
		VendorRequest.Delegate.ExecuteIfBound(false);
		return;
	}

	// Add the vendor request to the active list, and then enqueue the vendors to get
	VendorRequests.Add(VendorRequest);

	for (auto const& VendorId : VendorRequest.VendorIds)
	{
		EnqueuedVendorsToGet.AddUnique(VendorId);
	}

	if (!bHasActiveVendorRequest && EnqueuedVendorsToGet.Num())
	{
		GetCatalogVendorSingle(EnqueuedVendorsToGet.Pop());
	}
}

void URH_CatalogSubsystem::GetCatalogVendorSingle(int32 VendorId)
{
	// Make sure we don't have a vendor request in flight
	if (bHasActiveVendorRequest)
	{
		return;
	}

	bHasActiveVendorRequest = true;

	auto Request = TGetCatalogVendor::Request();

	if (const auto& FindItem = CatalogVendors.Find(VendorId))
	{
		if (!Request.IfNoneMatch.IsSet() && !(*FindItem)->ETag.IsEmpty())
		{
			Request.IfNoneMatch.Emplace((*FindItem)->ETag);
		}
	}

	Request.VendorId = VendorId;
	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogVendor::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogVendor::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogVendorResponse, VendorId)))
	{
		bHasActiveVendorRequest = false;
		// Remove any vendor requests that were expecting this vendor and fail them as our call failed
		for (int32 i = VendorRequests.Num() - 1; i >= 0; i--)
		{
			if (VendorRequests[i].VendorIds.Contains(VendorId))
			{
				VendorRequests[i].Delegate.ExecuteIfBound(false);
				VendorRequests.RemoveAt(i);
			}
		}
	}
}

void URH_CatalogSubsystem::OnGetCatalogVendorResponse(const TGetCatalogVendor::Response& Resp, int32 VendorId)
{
	bHasActiveVendorRequest = false;
	URH_CatalogVendor* Vendor = nullptr;

	if (Resp.IsSuccessful())
	{
		Vendor = ParseVendor(Resp.Content, VendorId);
	}
	else if (Resp.GetHttpResponseCode() ==  EHttpResponseCodes::NotModified)
	{
		// Find the vendor we were requesting, as it hasn't changed since last time
		if (const auto& FindItem = CatalogVendors.Find(VendorId))
		{
			Vendor = *FindItem;
		}
	}

	TArray<int32> SubVendorsToRequest;
	// Request all sub vendors of the vendor we just got to update them as needed
	if (Vendor != nullptr)
	{
		for (const auto& VendorItem : Vendor->VendorItems)
		{
			if (const URH_CatalogVendor* SubVendor = VendorItem.Value->SubVendor)
			{
				SubVendorsToRequest.AddUnique(SubVendor->VendorId);
				EnqueuedVendorsToGet.AddUnique(SubVendor->VendorId);
			}
		}
	}

	for (int32 i = VendorRequests.Num() - 1; i >= 0; i--)
	{
		// Append any sub vendors to the vendor requests that were expecting this vendor, remove this vendor from the requests
		if (VendorRequests[i].VendorIds.Contains(VendorId))
		{
			for (int32 SubVendorId : SubVendorsToRequest)
			{
				VendorRequests[i].VendorIds.AddUnique(SubVendorId);
			}
			VendorRequests[i].VendorIds.Remove(VendorId);
		}

		// If the request is complete, execute the delegate and remove it
		if (VendorRequests[i].VendorIds.Num() == 0)
		{
			VendorRequests[i].Delegate.ExecuteIfBound(true);
			VendorRequests.RemoveAt(i);
		}
	}	

	if (!bHasActiveVendorRequest && EnqueuedVendorsToGet.Num())
	{
		GetCatalogVendorSingle(EnqueuedVendorsToGet.Pop());
	}
}

URH_CatalogVendor* URH_CatalogSubsystem::ParseVendor(FRHAPI_Vendor CatalogVendor, int32 VendorId)
{
	URH_CatalogVendor* Vendor = nullptr;

	// Find or create the Vendor we are updating
	if (const auto& FindItem = CatalogVendors.Find(VendorId))
	{
		Vendor = *FindItem;
	}

	if (Vendor == nullptr)
	{
		Vendor = NewObject<URH_CatalogVendor>();
		CatalogVendors.Add(VendorId, Vendor);
	}

	if (const auto CacheInfo = CatalogVendor.GetCacheInfoOrNull())
	{
		// If our ETag is the same, then we don't need to update this item
		if (Vendor->ETag == CacheInfo->Etag)
		{
			return Vendor;
		}

		// If our ETag has changed, wipe ourselves to defaults
		Vendor->Clear();
		Vendor->ETag = CacheInfo->Etag;
	}

	Vendor->VendorId = VendorId;

	if (const auto LootMap = CatalogVendor.GetLootOrNull())
	{
		for (auto const& Loot : *LootMap)
		{
			if (URH_CatalogVendorItem* CatalogVendorItem = ParseCatalogVendorItem(Loot.Value, Vendor))
			{
				Vendor->VendorItems.Add(CatalogVendorItem->GetLootId(), CatalogVendorItem);
			}
		}
	}

	CatalogVendor.GetType(Vendor->VendorType);

	return Vendor;
}

URH_CatalogVendorItem* URH_CatalogSubsystem::ParseCatalogVendorItem(FRHAPI_Loot LootItem, URH_CatalogVendor* ParentVendor)
{
	// Find or create the VendorItem we are updating
	URH_CatalogVendorItem* VendorItem = nullptr;

	if (const auto& FindItem = CatalogVendorItems.Find(LootItem.LootId))
	{
		VendorItem = *FindItem;
	}

	if (VendorItem == nullptr)
	{
		VendorItem = NewObject<URH_CatalogVendorItem>();
		CatalogVendorItems.Add(LootItem.LootId, VendorItem);
	}
	
	if (const auto CacheInfo = LootItem.GetCacheInfoOrNull())
	{
		// If our ETag is the same, then we don't need to update this item
		if (VendorItem->ETag == CacheInfo->Etag)
		{
			return VendorItem;
		}

		// If our ETag has changed, wipe ourselves to defaults
		VendorItem->Clear();
		VendorItem->ETag = CacheInfo->Etag;
	}

	VendorItem->LootId = LootItem.LootId;

	if (ParentVendor != nullptr)
	{
		VendorItem->ParentVendor = ParentVendor;
	}
	else
	{
		URH_CatalogVendor* Vendor = nullptr;

		// Find or create the Vendor we are updating
		if (const auto& FindItem = CatalogVendors.Find(LootItem.VendorId))
		{
			Vendor = *FindItem;
		}

		if (Vendor == nullptr)
		{
			// If we don't have a vendor record for the vendor that owns this item, create a stub with the vendor Id on it.
			Vendor = NewObject<URH_CatalogVendor>();
			Vendor->VendorId = LootItem.VendorId;
			CatalogVendors.Add(Vendor->VendorId, Vendor);
		}

		VendorItem->ParentVendor = Vendor;
	}

	if (const auto SubVendorId = LootItem.GetSubVendorIdOrNull())
	{
		URH_CatalogVendor* Vendor = nullptr;

		// Find or create the Vendor we are updating
		if (const auto& FindItem = CatalogVendors.Find(*SubVendorId))
		{
			Vendor = *FindItem;
		}

		if (Vendor == nullptr)
		{
			// If we don't have a vendor record for the vendor that owns this item, create a stub with the vendor Id on it.
			Vendor = NewObject<URH_CatalogVendor>();
			Vendor->VendorId = *SubVendorId;
			CatalogVendors.Add(Vendor->VendorId, Vendor);
		}

		VendorItem->SubVendor = Vendor;
	}

	const auto Item = LootItem.GetItemOrNull();
	int32 ItemId;
	if (Item && LootItem.GetItemId(ItemId))
	{
		VendorItem->Item = ParseCatalogItem(*Item, ItemId);
	}

	if (const auto CurrentPricePointGuid = LootItem.GetCurrentPricePointGuidOrNull())
	{
		FGuid::Parse(*CurrentPricePointGuid, VendorItem->CurrentPricePointGuid);
	}

	if (const auto PreSalePricePointGuid = LootItem.GetPreSalePricePointGuidOrNull())
	{
		FGuid::Parse(*PreSalePricePointGuid, VendorItem->PreSalePricePointGuid);
	}

	LootItem.GetUseInventoryBucket(VendorItem->UseInventoryBucket);
	LootItem.GetInventorySelectorType(VendorItem->InventorySelectorType);
	LootItem.GetInventoryOperation(VendorItem->InventoryOperation);
	LootItem.GetQuantity(VendorItem->Quantity);
	LootItem.GetQuantityType(VendorItem->QuantityType);
	LootItem.GetXpQuantityTransformType(VendorItem->XpQuantityTransformType);
	LootItem.GetActive(VendorItem->Active);
	LootItem.GetSortOrder(VendorItem->SortOrder);
	LootItem.GetDropWeight(VendorItem->DropWeight);
	LootItem.GetFillInNewOrder(VendorItem->FillInNewOrder);
	LootItem.GetAllowPartialBundles(VendorItem->AllowPartialBundles);
	LootItem.GetRequiredItemId(VendorItem->RequiredItemId);
	LootItem.GetRequiredItemCount(VendorItem->RequiredItemCount);
	LootItem.GetStackLimit(VendorItem->StackLimit);
	LootItem.GetUiHint(VendorItem->UiHint);
	LootItem.GetEffectiveFrom(VendorItem->EffectiveFrom);
	LootItem.GetQuantityMultInventoryItemId(VendorItem->QuantityMultInventoryItemId);
	LootItem.GetIsClaimableByClient(VendorItem->ClaimableByClient);
	LootItem.GetTimeFrameId(VendorItem->TimeFrameId);
	LootItem.GetHardQuantityMaximum(VendorItem->HardQuantityMaximum);

	return VendorItem;
}

URH_CatalogItem* URH_CatalogSubsystem::ParseCatalogItem(FRHAPI_Item CatalogItem, int32 ItemId)
{
	// Find or create the Item we are updating
	URH_CatalogItem* Item = nullptr;
	bool ItemAdded = false;

	if (const auto& FindItem = CatalogItems.Find(ItemId))
	{
		Item = *FindItem;
	}

	if (Item == nullptr)
	{
		// If we don't have an item record yet, create one and parse the Item Contents
		Item = NewObject<URH_CatalogItem>();
		CatalogItems.Add(ItemId, Item);
		ItemAdded = true;
	}

	if (const auto CacheInfo = CatalogItem.GetCacheInfoOrNull())
	{
		// If our ETag is the same, then we don't need to update this item
		if (Item->ETag == CacheInfo->Etag)
		{
			return Item;
		}

		// If our ETag has changed, wipe ourselves to defaults
		Item->Clear();
		Item->ETag = CacheInfo->Etag;
	}

	Item->ItemId = ItemId;
	
	CatalogItem.GetType(Item->Type);
	CatalogItem.GetRefItemId(Item->RefItemId);
	CatalogItem.GetAvailabilityFlags(Item->AvailabilityFlags);
	CatalogItem.GetEntitledLootId(Item->EntitledLootId);
	CatalogItem.GetLevelXpTableId(Item->LevelXpTableId);
	CatalogItem.GetLevelVendorId(Item->LevelVendorId);
	CatalogItem.GetCouponDiscountCurrencyItemId(Item->CouponDiscountCurrencyItemId);
	CatalogItem.GetCouponDiscountPercentage(Item->CouponDiscountPercentage);
	CatalogItem.GetCouponConsumeOnUse(Item->CouponConsumeOnUse);
	CatalogItem.GetInventoryBucketUseRuleSetId(Item->ItemInventoryBucketUseRuleSetId);
	
	if (const auto CouponDiscountLoot = CatalogItem.GetCouponDiscountLootOrNull())
	{
		Item->CouponDiscountLoot.Append(*CouponDiscountLoot);
	}

	if (ItemAdded)
	{
		OnCatalogItemAdded.ExecuteIfBound(Item);
	}

	return Item;
}

void URH_CatalogSubsystem::GetCatalogPricePointsAll(FRH_CatalogCallBlock Delegate)
{
	auto Request = TGetCatalogPricePointsAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogPricePointsAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogPricePointsAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogPricePointsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogPricePointsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogPricePointsAllResponse, Delegate)))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogPricePointsAllResponse(const TGetCatalogPricePointsAll::Response& Resp, FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogPricePointsAllETag = Resp.ETag.GetValue();
		}

		ParseAllPricePoints(Resp.Content);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}

void URH_CatalogSubsystem::ParseAllPricePoints(FRHAPI_PricePoints Content)
{
	if (const auto PricePoints = Content.GetPricePointsOrNull())
	{
		for (const auto& PricePointPair : *PricePoints)
		{
			// Find or create the PricePoint we are updating
			URH_CatalogPricePoint* PricePoint = nullptr;
			FGuid PricePointGuid = FGuid(PricePointPair.Key);
			FRHAPI_PricePoint PricePointData = PricePointPair.Value;

			if (const auto& FindItem = CatalogPricePoints.Find(PricePointGuid))
			{
				PricePoint = *FindItem;
			}

			if (PricePoint == nullptr)
			{
				// If we don't have a price point record yet, create one and parse the price point
				PricePoint = NewObject<URH_CatalogPricePoint>();
				CatalogPricePoints.Add(PricePointGuid, PricePoint);
			}

			if (const auto CacheInfo = PricePointData.GetCacheInfoOrNull())
			{
				// If our ETag is the same, then we don't need to update this price point
				if (PricePoint->ETag == CacheInfo->Etag)
				{
					continue;
				}

				// If our ETag has changed, wipe ourselves to defaults
				PricePoint->Clear();
				PricePoint->ETag = CacheInfo->Etag;
			}

			PricePoint->PricePointId = PricePointGuid;
			PricePointData.GetName(PricePoint->Name);
			PricePointData.GetStrictFlag(PricePoint->StrictFlag);
			PricePointData.GetCapFlag(PricePoint->CapFlag);
			
			if (const auto CurrentBreakpoints = PricePointData.GetCurrentBreakpointsOrNull())
			{
				for (const auto& PriceBreakpoint : *CurrentBreakpoints)
				{
					URH_CatalogPriceBreakpoint* NewPriceBreakpoint = NewObject<URH_CatalogPriceBreakpoint>();
					NewPriceBreakpoint->PriceItemId = PriceBreakpoint.PriceItemId;
					NewPriceBreakpoint->Quantity = PriceBreakpoint.Quantity;
					NewPriceBreakpoint->Price = PriceBreakpoint.Price;
					PricePoint->CurrentPriceBreakpoints.Add(NewPriceBreakpoint);
				}
			}

			if (const auto PreSaleBreakpoints = PricePointData.GetPreSaleBreakpointsOrNull())
			{
				for (const auto& PriceBreakpoint : *PreSaleBreakpoints)
				{
					URH_CatalogPriceBreakpoint* NewPriceBreakpoint = NewObject<URH_CatalogPriceBreakpoint>();
					NewPriceBreakpoint->PriceItemId = PriceBreakpoint.PriceItemId;
					NewPriceBreakpoint->Quantity = PriceBreakpoint.Quantity;
					NewPriceBreakpoint->Price = PriceBreakpoint.Price;
					PricePoint->PreSalePriceBreakpoints.Add(NewPriceBreakpoint);
				}
			}			
		}
	}
}

void URH_CatalogSubsystem::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	Super::AddReferencedObjects(InThis, Collector);
	URH_CatalogSubsystem* This = CastChecked<URH_CatalogSubsystem>(InThis);
	for (auto Entry : This->InventoryBucketUseRuleSets)
	{
		Collector.AddReferencedObjects(Entry.Value, This);
	}
}