// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
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

void URH_CatalogSubsystem::Tick(float DeltaTime)
{
	for (const auto& PendingGetItemCallPair : PendingGetCatalogItemCalls)
	{
		SubmittedGetCatalogItemCalls.Add(PendingGetItemCallPair);

		auto Request = TGetCatalogItem::Request();
		Request.AuthContext = GetAuthContext();
		Request.ItemId = PendingGetItemCallPair.Key;

		TGetCatalogItem::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogItem::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogItemResponse, PendingGetItemCallPair.Key), GetDefault<URH_IntegrationSettings>()->GetCatalogItemPriority);
	}

	PendingGetCatalogItemCalls.Empty();
}

bool URH_CatalogSubsystem::GetXpTable(int32 XpTableId, FRHAPI_XpTable& XpTable) const
{
	if (auto FindXpTable = XpTables.Find(XpTableId))
	{
		XpTable = *FindXpTable;
		return true;
	}

	return false;
}

void URH_CatalogSubsystem::InitPropertiesWithDefaultValues()
{
	XpTables.Empty();
	InventoryBucketUseRuleSets.Empty();
	VendorRequests.Empty();
	CatalogVendors.Empty();
	CatalogItems.Empty();
	CatalogLootItems.Empty();
	CatalogPricePoints.Empty();
	GetCatalogAllETag = {};
	GetCatalogXpAllETag = {};
	GetCatalogPricePointsAllETag = {};
	GetCatalogInventoryBucketUseRuleSetsAllETag = {};
}

void URH_CatalogSubsystem::GetCatalogAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogAllResponse(const TGetCatalogAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogAllETag = Resp.ETag.GetValue();
		}

		if (const auto& Data = Resp.Content.GetXpTablesOrNull())
		{
			ParseAllXpTables(*Data);
		}

		if (const auto& Data = Resp.Content.GetInventoryBucketUseRuleSetsOrNull())
		{
			ParseAllInventoryBucketUseRuleSets(*Data);
		}

		CatalogVendors.Empty();
		if (const auto& Data = Resp.Content.GetVendorsOrNull())
		{
			if (const auto& Vendors = (*Data).GetVendorsOrNull())
			{
				for (const auto& VendorPair : (*Vendors))
				{
					CatalogVendors.Add(FCString::Atoi(*VendorPair.Key), VendorPair.Value);
				}
			}
		}

		CatalogLootItems.Empty();
		if (const auto& Data = Resp.Content.GetLootOrNull())
		{
			if (const auto& Loot = (*Data).GetLootOrNull())
			{
				for (const auto& LootPair : (*Loot))
				{
					CatalogLootItems.Add(FCString::Atoi(*LootPair.Key), LootPair.Value);
				}
			}
		}

		CatalogItems.Empty();
		if (const auto& Data = Resp.Content.GetItemsOrNull())
		{
			if (const auto& Items = (*Data).GetItemsOrNull())
			{
				for (const auto& ItemPair : (*Items))
				{
					ParseCatalogItem(ItemPair.Value, FCString::Atoi(*ItemPair.Key));
				}
			}
		}

		CatalogPricePoints.Empty();
		if (const auto Data = Resp.Content.GetPricePointsOrNull())
		{
			if (auto PricePoints = (*Data).GetPricePointsOrNull())
			{
				for (const auto& PricePointPair : *PricePoints)
				{
					CatalogPricePoints.Add(FGuid(PricePointPair.Key), PricePointPair.Value);
				}
			}
		}

		TimeFrames.Empty();
		if (const auto& Data = Resp.Content.GetTimeFramesOrNull())
		{
			if (const auto& TimeframeData = (*Data).GetTimeFramesOrNull())
			{
				for (const auto& TimeFramePair : (*TimeframeData))
				{
					TimeFrames.Add(FCString::Atoi(*TimeFramePair.Key), TimeFramePair.Value);
				}
			}
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful());
}

void URH_CatalogSubsystem::GetCatalogXpAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogXpAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogXpAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogXpAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogXpAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogXpAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogXpAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogXpAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogXpAllResponse(const TGetCatalogXpAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
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

void URH_CatalogSubsystem::GetCatalogItem(int32 ItemId, const FRH_CatalogCallBlock& Delegate)
{
	// #RHTODO: Implement refreshing item based on Etag

	if (GetCatalogItemByItemId(ItemId))
	{
		Delegate.ExecuteIfBound(true);
		return;
	}

	// First check if there is a submitted call we can add our delegate to.
	if (const auto& findSubmittedItem = SubmittedGetCatalogItemCalls.Find(ItemId))
	{
		(*findSubmittedItem).Add(Delegate);
		return;
	}
	// The check if there is a pending call we can add our delegate to.
	else if (const auto& findPendingItem = PendingGetCatalogItemCalls.Find(ItemId))
	{
		(*findPendingItem).Add(Delegate);
		return;
	}
	// Finally just create a new pending call.
	else
	{
		PendingGetCatalogItemCalls.Add(ItemId, TArray<FRH_CatalogCallBlock>{Delegate});
	}
}

void URH_CatalogSubsystem::OnGetCatalogItemResponse(const TGetCatalogItem::Response& Resp, int32 ItemId)
{
	if (Resp.IsSuccessful())
	{
		ParseCatalogItem(Resp.Content, ItemId);
	}

	if (const auto& findItem = SubmittedGetCatalogItemCalls.Find(ItemId))
	{
		for (const auto& Delegate : *findItem)
		{
			Delegate.ExecuteIfBound(Resp.IsSuccessful());
		}
	}

	SubmittedGetCatalogItemCalls.Remove(ItemId);
}

void URH_CatalogSubsystem::ParseAllXpTables(const FRHAPI_XpTables& Content)
{
	if (const auto NewXpTables = Content.GetXpTablesOrNull())
	{
		XpTables.Empty();

		for (auto const& XpTable : *NewXpTables)
		{
			int32 TableId = FCString::Atoi(*XpTable.Key);
			XpTables.Add(FCString::Atoi(*XpTable.Key), XpTable.Value);
		}
	}
}

void URH_CatalogSubsystem::GetCatalogInventoryBucketUseRuleSetsAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogInventoryBucketUseRuleSetsAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogInventoryBucketUseRuleSetsAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogInventoryBucketUseRuleSetsAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogInventoryBucketUseRuleSetsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogInventoryBucketUseRuleSetsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogInventoryBucketUseRuleSetsAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogInventoryBucketUseRuleSetsAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogInventoryBucketUseRuleSetsAllResponse(const TGetCatalogInventoryBucketUseRuleSetsAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
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

void URH_CatalogSubsystem::ParseAllInventoryBucketUseRuleSets(const FRHAPI_InventoryBucketUseRuleSets& Content)
{
	InventoryBucketUseRuleSets.Empty();
	const auto RuleSets = Content.GetRuleSetsOrNull();
	if (!RuleSets || RuleSets->Num() == 0)
	{
		return;
	}

	InventoryBucketUseRuleSets = *RuleSets;
}

bool URH_CatalogSubsystem::CanRulesetUsePlatformForBucket(const FString& InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryBucket ItemInventoryBucket) const
{
	if (auto findRuleset = InventoryBucketUseRuleSets.Find(InventoryBucketRulesetId))
	{
		FRHAPI_InventoryBucketUseRuleSet ruleset = *findRuleset;

		const FString& TargetBucketString = EnumToString(TargetBucket);
		const FString& FallbackBucketString = EnumToString(ERHAPI_InventoryBucket::None);

		TArray<ERHAPI_InventoryBucket> InventoryBucketUseOrder;
		TArray<ERHAPI_InventoryBucket> FallbackInventoryBucketUseOrder;

		if (const auto& rules = ruleset.GetRulesOrNull())
		{
			for (const auto& rule : *rules)
			{
				if (rule.Key == TargetBucketString)
				{
					InventoryBucketUseOrder = rule.Value;
					break;
				}
				else if (rule.Key == FallbackBucketString)
				{
					FallbackInventoryBucketUseOrder = rule.Value;
				}
			}
		}

		if (InventoryBucketUseOrder.Num())
		{
			return InventoryBucketUseOrder.Contains(ItemInventoryBucket);
		}
		else if (FallbackInventoryBucketUseOrder.Num())
		{
			return FallbackInventoryBucketUseOrder.Contains(ItemInventoryBucket);
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
		GetCatalogVendorSingle(VendorId);
	}
}

void URH_CatalogSubsystem::GetCatalogVendorSingle(int32 VendorId)
{
	auto Request = TGetCatalogVendor::Request();

	if (!Request.IfNoneMatch.IsSet())
	{
		if (const auto& FindItem = CatalogVendors.Find(VendorId))
		{
			if (const auto& CacheInfo = (*FindItem).GetCacheInfoOrNull())
			{
				if (!CacheInfo->GetEtag().IsEmpty())
				{
					Request.IfNoneMatch.Emplace(CacheInfo->GetEtag());
				}
			}
		}
	}

	Request.VendorId = VendorId;
	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogVendor::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogVendor::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogVendorResponse, VendorId), GetDefault<URH_IntegrationSettings>()->GetCatalogVendorPriority))
	{
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
	FRHAPI_Vendor Vendor;

	if (Resp.IsSuccessful())
	{
		// Find or create the Vendor we are updating
		if (const auto& FindItem = CatalogVendors.Find(VendorId))
		{
			*FindItem = Resp.Content;
			Vendor = *FindItem;
		}
		else
		{
			Vendor = CatalogVendors.Add(VendorId, Resp.Content);
		}
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
	if (const auto* VendorItems = Vendor.GetLootOrNull())
	{
		for (const auto& VendorItem : (*VendorItems))
		{
			// Request all sub vendors of the vendor we just got to update them as needed
			if (const auto& SubVendorId = VendorItem.Value.GetSubVendorIdOrNull())
			{
				SubVendorsToRequest.AddUnique(*SubVendorId);
			}

			if (const auto& FindItem = CatalogLootItems.Find(VendorItem.Value.GetLootId()))
			{
				*FindItem = VendorItem.Value;
			}
			else
			{
				CatalogLootItems.Add(VendorItem.Value.GetLootId(), VendorItem.Value);
			}

			if (const auto& Item = VendorItem.Value.GetItemOrNull())
			{
				int32 ItemId = VendorItem.Value.GetItemId(0);

				if (ItemId != 0)
				{
					ParseCatalogItem((*Item), ItemId);
				}
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

	for (int32 SubVendorId : SubVendorsToRequest)
	{
		GetCatalogVendorSingle(SubVendorId);
	}
}

URH_CatalogItem* URH_CatalogSubsystem::ParseCatalogItem(const FRHAPI_Item& CatalogItem, int32 ItemId)
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

	Item->InitializeFromCatalogItem(CatalogItem, ItemId);

	if (ItemAdded)
	{
		OnCatalogItemAdded.ExecuteIfBound(Item);
	}

	return Item;
}

void URH_CatalogSubsystem::GetCatalogVendorsAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogVendorsAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogVendorsAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogVendorsAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogVendorsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogVendorsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogVendorsAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogVendorsAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogVendorsAllResponse(const TGetCatalogVendorsAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogVendorsAllETag = Resp.ETag.GetValue();
		}

		CatalogVendors.Empty();
		CatalogLootItems.Empty();

		if (const auto& Data = Resp.Content.GetVendorsOrNull())
		{
			for (const auto& VendorPair : (*Data))
			{
				CatalogVendors.Add(FCString::Atoi(*VendorPair.Key), VendorPair.Value);

				if (const auto* VendorItems = VendorPair.Value.GetLootOrNull())
				{
					for (const auto& VendorItem : (*VendorItems))
					{
						CatalogLootItems.Add(VendorItem.Value.GetLootId(), VendorItem.Value);

						if (const auto& Item = VendorItem.Value.GetItemOrNull())
						{
							int32 ItemId = VendorItem.Value.GetItemId(0);

							if (ItemId != 0)
							{
								ParseCatalogItem((*Item), ItemId);
							}
						}
					}
				}
			}
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}

void URH_CatalogSubsystem::GetCatalogPricePointsAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogPricePointsAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogPricePointsAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogPricePointsAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogPricePointsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogPricePointsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogPricePointsAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogPricePointsAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogPricePointsAllResponse(const TGetCatalogPricePointsAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogPricePointsAllETag = Resp.ETag.GetValue();
		}

		CatalogPricePoints.Empty();

		if (const auto PricePoints = Resp.Content.GetPricePointsOrNull())
		{
			for (const auto& PricePointPair : *PricePoints)
			{
				CatalogPricePoints.Add(FGuid(PricePointPair.Key), PricePointPair.Value);
			}
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}

void URH_CatalogSubsystem::GetCatalogTimeFramesAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogTimeFramesAll::Request();

	if (!Request.IfNoneMatch.IsSet() && !GetCatalogTimeFramesAllETag.IsEmpty())
	{
		Request.IfNoneMatch.Emplace(GetCatalogTimeFramesAllETag);
	}

	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogTimeFramesAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogTimeFramesAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogTimeFramesAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogTimeFramesAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogTimeFramesAllResponse(const TGetCatalogTimeFramesAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet())
		{
			GetCatalogTimeFramesAllETag = Resp.ETag.GetValue();
		}

		TimeFrames.Empty();

		if (const auto& Data = Resp.Content.GetTimeFramesOrNull())
		{
			for (const auto& TimeFramePair : (*Data))
			{
				TimeFrames.Add(FCString::Atoi(*TimeFramePair.Key), TimeFramePair.Value);
			}
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}

///

TArray<FRHAPI_PriceBreakPointCurrency> URH_CatalogBlueprintLibrary::GetUnitPrices(const TArray<FRHAPI_PriceBreakpoint>& PriceBreakpoints, const TArray<int32>& CurrencyIds, int32 Quantity)
{
	for (const auto& PriceBreakpoint : PriceBreakpoints)
	{
		if (PriceBreakpoint.GetQuantity() == Quantity)
		{
			if (const auto MultiCurrency = PriceBreakpoint.GetCurrenciesOrNull())
			{
				TArray<FRHAPI_PriceBreakPointCurrency> PriceBreakPointCurrencies;

				// copy the currenccy list, and make sure all currencies match by consuming them from the copy
				auto MultiCurrencyCopy = *MultiCurrency;
				for (const auto& CurrencyId : CurrencyIds)
				{
					// find and remove the currency from the list
					for (auto It = MultiCurrencyCopy.CreateIterator(); It; ++It)
					{
						if (It->GetPriceItemId() == CurrencyId)
						{
							FRHAPI_PriceBreakPointCurrency PriceBreakPointCurrency;
							PriceBreakPointCurrency.SetPriceItemId(It->GetPriceItemId());
							PriceBreakPointCurrency.SetPrice(It->GetPrice());

							PriceBreakPointCurrencies.Add(PriceBreakPointCurrency);

							It.RemoveCurrent();
							break;
						}
					}
				}

				// if all currencies were consumed, return the result
				if (MultiCurrencyCopy.Num() == 0)
				{
					return PriceBreakPointCurrencies;
				}
			}
			else if (CurrencyIds.Num() == 1)
			{
				// fall back to single currency and item configuration
				if (PriceBreakpoint.GetPriceItemId() == CurrencyIds[0] &&
					PriceBreakpoint.GetQuantity() == Quantity)
				{
					FRHAPI_PriceBreakPointCurrency PriceBreakPointCurrency;
					PriceBreakPointCurrency.SetPriceItemId(PriceBreakpoint.GetPriceItemId());
					PriceBreakPointCurrency.SetPrice(PriceBreakpoint.GetPrice());

					TArray<FRHAPI_PriceBreakPointCurrency> PriceBreakPointCurrencies = { PriceBreakPointCurrency };

					return PriceBreakPointCurrencies;
				}
			}
		}
	}

	return TArray<FRHAPI_PriceBreakPointCurrency>();
}

bool URH_CatalogBlueprintLibrary::IsCouponApplicableForItem(URH_CatalogItem* CouponItem, const FRHAPI_Loot& CatalogVendorItem)
{
	return IsCouponApplicableForLootId(CouponItem, CatalogVendorItem.GetLootId());
}

bool URH_CatalogBlueprintLibrary::IsCouponApplicableForLootId(URH_CatalogItem* CouponItem, int32 LootId)
{
	if (CouponItem != nullptr)
	{
		return CouponItem->GetCouponDiscountLoot().Contains(LootId);
	}

	return false;
}

int32 URH_CatalogBlueprintLibrary::GetCouponDiscountedPrice(URH_CatalogItem* CouponItem, int32 Price)
{
	if (CouponItem != nullptr)
	{
		return FMath::CeilToInt(Price * (1.f - CouponItem->GetCouponDiscountPercentage()));
	}

	return Price;
}

int64 URH_CatalogBlueprintLibrary::GetXpAtLevel(const FRHAPI_XpTable& XpTable, int32 XpLevel)
{
	if (const auto& Entries = XpTable.GetXpEntriesOrNull())
	{
		if (XpLevel > (*Entries).Num())
		{
			return INDEX_NONE;
		}

		int32 CurrentIndex = 0;
		for (auto const& XpEntry : *Entries)
		{
			if (CurrentIndex == XpLevel)
			{
				return XpEntry.Value;
			}

			CurrentIndex++;
		}
	}
	return INDEX_NONE;
}

int32 URH_CatalogBlueprintLibrary::GetLevelAtXp(const FRHAPI_XpTable& XpTable, int64 XpPoints)
{
	if (const auto& Entries = XpTable.GetXpEntriesOrNull())
	{
		int32 CurrentIndex = 0;
		for (auto const& XpEntry : *Entries)
		{
			if (XpEntry.Value > XpPoints)
			{
				return CurrentIndex;
			}

			CurrentIndex++;
		}
	}

	return 0;
}

bool URH_CatalogBlueprintLibrary::GetVendorItemById(const FRHAPI_Vendor& Vendor, int32 LootId, FRHAPI_Loot& LootItem)
{
	if (const auto& LootItems = Vendor.GetLootOrNull())
	{
		for (const auto& VendorItemPair : (*LootItems))
		{
			if (LootId == VendorItemPair.Value.GetLootId())
			{
				LootItem = VendorItemPair.Value;
				return true;
			}
		}
	}

	return false;
}