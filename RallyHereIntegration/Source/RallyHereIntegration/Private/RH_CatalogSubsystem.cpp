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
	TimeFrames.Empty();
	
	GetCatalogAllETag.Reset();
	GetCatalogXpAllETag.Reset();
	GetCatalogPricePointsAllETag.Reset();
	GetCatalogVendorsAllETag.Reset();
	GetCatalogTimeFramesAllETag.Reset();
	GetCatalogInventoryBucketUseRuleSetsAllETag.Reset();
}

void URH_CatalogSubsystem::GetCatalogAll(const FRH_CatalogCallBlock& Delegate)
{
	auto Request = TGetCatalogAll::Request();

	Request.IfNoneMatch = GetCatalogAllETag;
	Request.AuthContext = GetAuthContext();

	if (!TGetCatalogAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogAllResponse(const TGetCatalogAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(GetCatalogAllETag);

		if (const auto& Data = Content->GetXpTablesOrNull())
		{
			ParseAllXpTables(*Data);
		}

		if (const auto& Data = Content->GetInventoryBucketUseRuleSetsOrNull())
		{
			ParseAllInventoryBucketUseRuleSets(*Data);
		}

		CatalogVendors.Empty();
		if (const auto& Data = Content->GetVendorsOrNull())
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
		if (const auto& Data = Content->GetLootOrNull())
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
		if (const auto& Data = Content->GetItemsOrNull())
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
		if (const auto Data = Content->GetPricePointsOrNull())
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
		if (const auto& Data = Content->GetTimeFramesOrNull())
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
	
	Request.AuthContext = GetAuthContext();
	Request.IfNoneMatch = GetCatalogXpAllETag;

	if (!TGetCatalogXpAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogXpAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogXpAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogXpAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogXpAllResponse(const TGetCatalogXpAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(GetCatalogXpAllETag);

		ParseAllXpTables(*Content);
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
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		ParseCatalogItem(*Content, ItemId);
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

	Request.AuthContext = GetAuthContext();
	Request.IfNoneMatch = GetCatalogInventoryBucketUseRuleSetsAllETag;

	if (!TGetCatalogInventoryBucketUseRuleSetsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogInventoryBucketUseRuleSetsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogInventoryBucketUseRuleSetsAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogInventoryBucketUseRuleSetsAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogInventoryBucketUseRuleSetsAllResponse(const TGetCatalogInventoryBucketUseRuleSetsAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(GetCatalogInventoryBucketUseRuleSetsAllETag);

		ParseAllInventoryBucketUseRuleSets(*Content);
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

TArray<int32> FRH_VendorRequestState::GetAllKnownVendorIds() const
{
	TArray<int32> KnownVendorIds = Request.VendorIds;

	if(!Catalog.IsValid())
	{
		return KnownVendorIds;
	}
	
	// need to check if subvendors are not cached as well, so add all known ones to the list before we check
	for (auto i = 0; i < KnownVendorIds.Num(); ++i)
	{
		const auto VendorId = KnownVendorIds[i];
		if (const auto& FindItem = Catalog->GetVendors().Find(VendorId))
		{
			if (const auto* VendorItems = FindItem->GetLootOrNull())
			{
				for (const auto& VendorItem : (*VendorItems))
				{
					if (const auto& SubVendorId = VendorItem.Value.GetSubVendorIdOrNull())
					{
						KnownVendorIds.AddUnique(*SubVendorId);
					}
				}
			}
		}
	}

	return KnownVendorIds;
}

TArray<int32> FRH_VendorRequestState::GetAwaitedVendorIds() const
{	
	const auto VendorIds = Request.bRecurseSubvendors ? GetAllKnownVendorIds() : Request.VendorIds;

	TArray<int32> AwaitedVendorIds;

	if(!Catalog.IsValid())
	{
		return AwaitedVendorIds;
	}
	
	for (const auto VendorId : VendorIds)
	{
		// if the vendor is not cached, we are awaiting it
		if (!Catalog->GetVendors().Contains(VendorId))
		{
			AwaitedVendorIds.Add(VendorId);
		}
		// if we are not checking the cache, and we have not yet received this vendor, we are awaiting it
		else if (!Request.bSkipCachedVendors && !VendorsReceived.Contains(VendorId))
		{
			AwaitedVendorIds.Add(VendorId);
		}
	}

	return AwaitedVendorIds;
}

void URH_CatalogSubsystem::GetCatalogVendor(const FRHVendorGetRequest& InVendorRequest)
{
	// If there were no requested vendors, fail the request.
	if (InVendorRequest.VendorIds.Num() == 0)
	{
		InVendorRequest.Delegate.ExecuteIfBound(false);
		return;
	}

	// remove any vendors from the list that are already cached, if desired
	auto Request = VendorRequests.Add_GetRef(FRH_VendorRequestState(this, InVendorRequest));

	// initiate processing
	ProcessVendorRequests();	
}

void URH_CatalogSubsystem::GetCatalogVendorSingle(int32 VendorId, const FRH_GenericSuccessWithErrorBlock& Delegate)
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

	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetCatalogVendor>>(
		TGetCatalogVendor::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogVendorResponseUpdate, VendorId),
		FRH_GenericSuccessWithErrorDelegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogVendorResponseComplete, VendorId, Delegate),
		GetDefault<URH_IntegrationSettings>()->GetCatalogVendorPriority
	);

	InFlightVendorRequests.Add(VendorId, Helper);

	Helper->Start(RH_APIs::GetCatalogAPI(), Request);
}

void URH_CatalogSubsystem::OnGetCatalogVendorResponseUpdate(const TGetCatalogVendor::Response& Resp, int32 VendorId)
{
	// this functon is only called on a successful vendor request, and is responsible for updating the cache with the new vendor data
	check(Resp.IsSuccessful());
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	check(Content != nullptr);

	const auto& Vendor = CatalogVendors.Add(VendorId, *Content);

	// parse data into local caches
	TArray<int32> SubVendors;
	if (const auto* VendorItems = Vendor.GetLootOrNull())
	{
		for (const auto& VendorItem : (*VendorItems))
		{
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
}

void URH_CatalogSubsystem::OnGetCatalogVendorResponseComplete(bool bSuccess, const FRH_ErrorInfo& ErrorInfo, int32 VendorId, FRH_GenericSuccessWithErrorBlock Delegate)
{
	// remove from in flight list
	InFlightVendorRequests.Remove(VendorId);

	// forward on single vendor fetch delegate, as it is now complete
	Delegate.ExecuteIfBound(bSuccess, ErrorInfo);

	// update in flight requests with status of this vendor if they are interested in it.
	{
		const auto Vendor = CatalogVendors.Find(VendorId);
		if (bSuccess && Vendor != nullptr)
		{
			// notify requests that the vendor was received
			for (auto& Request : VendorRequests)
			{
				// let the request know that vendor data was received
				Request.NotifyVendorReceived(VendorId, *Vendor);
			}

			// request completion success is handled in the processing function, which determines if any work remains to be done for the request and kicks off new work if needed
		}
		else
		{
			// vendor failed to be retrieved, or was retrieved but did not make it into the cache, treat both as failures
			TArray<FRH_CatalogCallBlock> CompletedRequestDelegates;
			
			// vendor could not be retrieved, fail any requests that were expecting this vendor
			for (int32 i = VendorRequests.Num() - 1; i >= 0; i--)
			{
				if (VendorRequests[i].NotifyVendorFailure(VendorId))
				{
					CompletedRequestDelegates.Add(VendorRequests[i].Request.Delegate);
					VendorRequests.RemoveAt(i);
				}
			}

			// execute any completed request delegates to propagate the failure (this happens last so that the processing state is complete before the delegates are executed)
			for (const auto& CompletionDelegate : CompletedRequestDelegates)
			{
				CompletionDelegate.ExecuteIfBound(false);
			}
		}

		// kick any new requests as needed
		ProcessVendorRequests();
	}
}

void URH_CatalogSubsystem::ProcessVendorRequests()
{
	// keep track of any subvendors we need to request (that are newly added to any request, and thus were not already kicked off)
	TArray<int32> VendorsToRequest;

	TArray<FRH_CatalogCallBlock> CompletedRequestDelegates;
	
	// scan through requests, fulfilling them as needed
	for (int32 i = VendorRequests.Num() - 1; i >= 0; i--)
	{
		auto& Request = VendorRequests[i];

		// check if the request is now complete
		TArray<int32> AwaitedVendors;
		if (Request.IsComplete(AwaitedVendors))
		{
			// copy the delegate and remove the request (the request will be invalid once removed from the list)
			CompletedRequestDelegates.Add(Request.Request.Delegate);
			VendorRequests.RemoveAt(i);
		}
		else
		{
			// if the request is not complete, make sure any awaited vendors are requested
			for (int32 AwaitedVendorId : AwaitedVendors)
			{
				// if the awaited vendor is not already in flight, add it to the list of subvendors to request
				if (!InFlightVendorRequests.Contains(AwaitedVendorId))
				{
					VendorsToRequest.Add(AwaitedVendorId);
				}
			}
		}
	}

	// request any subvendors determined to be needed (they are requested via a recursion request and are not in flight)
	for (int32 SubVendorId : VendorsToRequest)
	{
		GetCatalogVendorSingle(SubVendorId);
	}

	// finally, execute any completed request delegates (this happens last so that the processing state is complete before the delegates are executed)
	for (const auto& Delegate : CompletedRequestDelegates)
	{
		Delegate.ExecuteIfBound(true);
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

	Request.AuthContext = GetAuthContext();
	Request.IfNoneMatch = GetCatalogVendorsAllETag;

	if (!TGetCatalogVendorsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogVendorsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogVendorsAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogVendorsAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogVendorsAllResponse(const TGetCatalogVendorsAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(GetCatalogVendorsAllETag);

		CatalogVendors.Empty();
		CatalogLootItems.Empty();

		if (const auto& Data = Content->GetVendorsOrNull())
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
	
	Request.AuthContext = GetAuthContext();
	Request.IfNoneMatch = GetCatalogPricePointsAllETag;

	if (!TGetCatalogPricePointsAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogPricePointsAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogPricePointsAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogPricePointsAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogPricePointsAllResponse(const TGetCatalogPricePointsAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(GetCatalogPricePointsAllETag);

		CatalogPricePoints.Empty();

		if (const auto PricePoints = Content->GetPricePointsOrNull())
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

	Request.AuthContext = GetAuthContext();
	Request.IfNoneMatch = GetCatalogTimeFramesAllETag;

	if (!TGetCatalogTimeFramesAll::DoCall(RH_APIs::GetCatalogAPI(), Request, TGetCatalogTimeFramesAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogTimeFramesAllResponse, Delegate), GetDefault<URH_IntegrationSettings>()->GetCatalogTimeFramesAllPriority))
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_CatalogSubsystem::OnGetCatalogTimeFramesAllResponse(const TGetCatalogTimeFramesAll::Response& Resp, const FRH_CatalogCallBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(GetCatalogTimeFramesAllETag);

		TimeFrames.Empty();

		if (const auto& Data = Content->GetTimeFramesOrNull())
		{
			for (const auto& TimeFramePair : (*Data))
			{
				TimeFrames.Add(FCString::Atoi(*TimeFramePair.Key), TimeFramePair.Value);
			}
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}


class FRH_HttpResponseSerializable : public IHttpResponse
{
public:
	FRH_HttpResponseSerializable()
	{}
	
	FRH_HttpResponseSerializable(const FHttpResponsePtr& InHttpResponse)
	{
		check(InHttpResponse.IsValid());
		ResponseCode = InHttpResponse->GetResponseCode();
		URL = InHttpResponse->GetURL();
		ContentLength = InHttpResponse->GetContentLength();
		ContentType = InHttpResponse->GetContentType();
		Headers = InHttpResponse->GetAllHeaders();
		Content = InHttpResponse->GetContent();
	}

	bool ExportToFile(const FString& FilePath)
	{
		TArray<FString> FileContents;
		FileContents.Add(FString::Printf(TEXT("%d"), ResponseCode)); // FileContents[0]
		FileContents.Add(URL); // FileContents[1]
		FileContents.Add(FString::Printf(TEXT("%lld"), ContentLength)); // FileContents[2]
		FileContents.Add(ContentType); // FileContents[3]

		FileContents.Append(Headers); // FileContents[4] to FileContents[n-1]
		
		FileContents.Add(FBase64::Encode(Content.GetData(), Content.Num())); // // FileContents[n]
		
		FFileHelper::SaveStringArrayToFile(FileContents, *FilePath);

		return true;
	}

	bool ImportFromFile(const FString& FilePath)
	{
		TArray<FString> FileContents;
		if (!FFileHelper::LoadFileToStringArray(FileContents, *FilePath))
		{
			return false;
		}

		if (FileContents.Num() < 4) // must at least have basics (headers and content not required)
		{
			return false;
		}

		ResponseCode = FCString::Atoi(*FileContents[0]);
		URL = FileContents[1];
		ContentLength = FCString::Atoi64(*FileContents[2]);
		ContentType = FileContents[3];

		for (int i=4; i < FileContents.Num() - 1; ++i)
		{
			Headers.Add(FileContents[i]);
		}
		
		FBase64::Decode(FileContents[FileContents.Num() - 1], Content);

		return true;
	}

	int32 ResponseCode = 0;
	/**
	 * Gets the response code returned by the requested server.
	 * See EHttpResponseCodes for known response codes
	 *
	 * @return the response code.
	 */
	virtual int32 GetResponseCode() const override { return ResponseCode; }

	/**
	 * Returns the payload as a string, assuming the payload is UTF8.
	 *
	 * @return the payload as a string.
	 */
	virtual FString GetContentAsString() const override
	{
		// Content is NOT null-terminated; we need to specify lengths here
		FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(Content.GetData()), Content.Num());
		return FString(TCHARData.Length(), TCHARData.Get());
	}

	FString URL;	
	/**
	 * Get the URL used to send the request.
	 *
	 * @return the URL string.
	 */
	virtual FString GetURL() const override { return URL; }

	TMap<FString, FString> URLParameters;
	/** 
	 * Gets an URL parameter.
	 * expected format is ?Key=Value&Key=Value...
	 * If that format is not used, this function will not work.
	 * 
	 * @param ParameterName - the parameter to request.
	 * @return the parameter value string.
	 */
	virtual FString GetURLParameter(const FString& ParameterName) const override { return URLParameters.FindRef(ParameterName); };

	TArray<FString> Headers;
	/** 
	 * Gets the value of a header, or empty string if not found. 
	 * 
	 * @param HeaderName - name of the header to set.
	 */
	virtual FString GetHeader(const FString& HeaderName) const override
	{
		FString Prefix = HeaderName + ": ";
		const auto HeaderIdx = Headers.FindLastByPredicate([Prefix](const FString& Header) { return Header.StartsWith(Prefix); });
		if (HeaderIdx != INDEX_NONE)
		{
			return Headers[HeaderIdx].RightChop(Prefix.Len());
		}
		return TEXT("");
	}

	/**
	 * Return all headers in an array in "Name: Value" format.
	 *
	 * @return the header array of strings
	 */
	virtual TArray<FString> GetAllHeaders() const override { return Headers; }

	FString ContentType = TEXT("");
	/**
	 * Shortcut to get the Content-Type header value (if available)
	 *
	 * @return the content type.
	 */
	virtual FString GetContentType() const override { return ContentType; }

	int64 ContentLength = 0;
	/**
	 * Shortcut to get the Content-Length header value. Will not always return non-zero.
	 * If you want the real length of the payload, get the payload and check it's length.
	 *
	 * @return the content length (if available)
	 */
	virtual uint64 GetContentLength() const override { return ContentLength; }

	TArray<uint8> Content;
	/**
	 * Get the content payload of the request or response.
	 *
	 * @param Content - array that will be filled with the content.
	 */
	virtual const TArray<uint8>& GetContent() const override { return Content; }

	static RallyHereAPI::FRequestMetadata GetSerializableResponseMetadata()
	{
		RallyHereAPI::FRequestMetadata Metadata;
		Metadata.Flags.bDisableAuthRequirement = true;
		Metadata.Flags.bDisableReadRequestContent = true;
		Metadata.Flags.bDisableLoginRetryOnAuthorizationFailure = true;
		return Metadata;
	}
};

void URH_CatalogSubsystem::ExportCatalogToFile(const FString& FilePath, const FRH_GenericSuccessWithErrorBlock& Delegate) const
{
	FString Path = FilePath.Len() > 0 ? FilePath : GetDefaultCatalogFileExportPath();

	auto Request = TGetCatalogAll::Request();
	
	Request.AuthContext = GetAuthContext();

	struct FCallContext
	{
		FString Path;
		bool bWrittenToFile = false;
	};
	TSharedPtr<FCallContext> Context = MakeShared<FCallContext>();
	Context->Path = Path;
	
	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetCatalogAll>>(
		TGetCatalogAll::Delegate::CreateWeakLambda(this, [this, Context, Path](const TGetCatalogAll::Response& Resp)
		{
			// if the request was successful, write the data to the file
			FRH_HttpResponseSerializable SerializableResponse(Resp.GetHttpResponse());
			Context->bWrittenToFile = SerializableResponse.ExportToFile(Context->Path);
		}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [Delegate, Context](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
		{
			if (!bSuccess)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
			}
			else
			{
				// todo - adjust error info?
				Delegate.ExecuteIfBound(Context->bWrittenToFile, ErrorInfo);
			}
		}),
		GetDefault<URH_IntegrationSettings>()->GetCatalogAllPriority
	);

	Helper->Start(RH_APIs::GetCatalogAPI(), Request);
}
void URH_CatalogSubsystem::ImportCatalogFromFile(const FString& FilePath, const FRH_CatalogCallBlock& Delegate)
{
	FString Path = FilePath.Len() > 0 ? FilePath : GetDefaultCatalogFileExportPath();

	TSharedRef<FRH_HttpResponseSerializable> Response = MakeShareable(new FRH_HttpResponseSerializable());
	auto HttpResponsePtr = Response;
	if(Response->ImportFromFile(Path))
	{
		auto InnerDelegate = TGetCatalogAll::Delegate::CreateUObject(this, &URH_CatalogSubsystem::OnGetCatalogAllResponse, Delegate);
		RallyHereAPI::FRequestMetadata Metadata = FRH_HttpResponseSerializable::GetSerializableResponseMetadata();

		// inject response into the catalog API
		RH_APIs::GetCatalogAPI()->OnGetCatalogAllResponse(nullptr, HttpResponsePtr, true, InnerDelegate, Metadata, nullptr, GetDefault<URH_IntegrationSettings>()->GetCatalogAllPriority);
	}
	else
	{
		Delegate.ExecuteIfBound(false);
	}
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