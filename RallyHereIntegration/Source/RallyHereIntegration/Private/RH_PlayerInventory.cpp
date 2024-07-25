// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_PlayerInventory.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RH_ConfigSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_CatalogSubsystem.h"

void URH_PlayerInventory::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid())
	{
		AuthContext->OnLoginUserChanged().AddUObject(this, &URH_PlayerInventory::OnUserChanged);
	}

	auto* Notifications = GetPlayerInfo()->GetPlayerNotifications();
	if (Notifications != nullptr)
	{
		Notifications->OnNotificationStreamedByAPI.FindOrAdd(TEXT("inventory")).AddUObject(this, &URH_PlayerInventory::HandleNotification);
	}
}

void URH_PlayerInventory::InitPropertiesWithDefaultValues()
{
	TArray<int32> UpdatedItemIds;
	InventoryCache.GetKeys(UpdatedItemIds);

	InventorySession = {};
	InventoryCache.Empty();

	if (PlayerInfo != nullptr)
	{
		BroadcastOnInventoryCacheUpdated(UpdatedItemIds);
	}
}

const FAuthContextPtr URH_PlayerInventory::GetAuthContext() const
{
	if (const URH_PlayerInfoSubsystem* PSS = GetPlayerInfo()->GetPlayerInfoSubsystem())
	{
		return PSS->GetAuthContext();
	}
	return nullptr;
}

void URH_PlayerInventory::OnUserChanged()
{
	TArray<int32> UpdatedItemIds;
	InventoryCache.GetKeys(UpdatedItemIds);

	InventorySession = {};
	InventoryCache.Empty();

	if (PlayerInfo != nullptr)
	{
		BroadcastOnInventoryCacheUpdated(UpdatedItemIds);
	}
}

const FGuid URH_PlayerInventory::GetRHPlayerUuid() const
{
	return PlayerInfo ? PlayerInfo->GetRHPlayerUuid() : FGuid();
}

void URH_PlayerInventory::GetInventoryCount(const int32& ItemId, const FRH_GetInventoryCountBlock& Delegate) const
{
	if (ItemId > 0)
	{
		if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			if (URH_CatalogItem* CatalogItem = CatalogSubsystem->GetCatalogItemByItemId(ItemId))
			{
				GetInventoryCount_INTERNAL(CatalogItem, Delegate);
			}
			else
			{
				CatalogSubsystem->GetCatalogItem(ItemId, FRH_CatalogCallDelegate::CreateLambda([this, ItemId, CatalogSubsystem, Delegate](bool bSuccess)
					{
						if (bSuccess)
						{
							GetInventoryCount_INTERNAL(CatalogSubsystem->GetCatalogItemByItemId(ItemId), Delegate);
						}
						else
						{
							Delegate.ExecuteIfBound(0);
						}
					}));
			}
		}
		else
		{
			Delegate.ExecuteIfBound(0);
		}
	}
	else
	{
		Delegate.ExecuteIfBound(0);
	}
}

void URH_PlayerInventory::GetInventoryCount_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryCountBlock& Delegate) const
{
	int32 Count = 0;

	if (Item != nullptr && GetPlayerInfo() != nullptr)
	{
		if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			for (auto& InventoryItem : GetCachedInventoryForItem(Item->GetItemId()))
			{
				if (!Item->GetItemInventoryBucketUseRulesetId().IsEmpty())
				{
					if (!CatalogSubsystem->CanRulesetUsePlatformForBucket(Item->GetItemInventoryBucketUseRulesetId(), RH_GetInventoryBucketFromPlatform(GetPlayerInfo()->GetLoggedInPlatform()), InventoryItem.Bucket))
					{
						continue;
					}
				}

				if (!InventoryItem.Expires.IsSet())
				{
					Count += InventoryItem.Count;
				}
				else if (InventoryItem.Expires.GetValue() < FDateTime::UtcNow())
				{
					Count += InventoryItem.Count;
				}
			}
		}
	}

	Delegate.ExecuteIfBound(Count);
}

void URH_PlayerInventory::IsInventoryItemOwned(const int32& ItemId, const FRH_GetInventoryStateBlock& Delegate) const
{
	if (ItemId > 0)
	{
		if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			if (URH_CatalogItem* CatalogItem = CatalogSubsystem->GetCatalogItemByItemId(ItemId))
			{
				IsInventoryItemOwned_INTERNAL(CatalogItem, Delegate);
			}
			else
			{
				CatalogSubsystem->GetCatalogItem(ItemId, FRH_CatalogCallDelegate::CreateLambda([this, ItemId, CatalogSubsystem, Delegate](bool bSuccess)
					{
						if (bSuccess)
						{
							IsInventoryItemOwned_INTERNAL(CatalogSubsystem->GetCatalogItemByItemId(ItemId), Delegate);
						}
						else
						{
							Delegate.ExecuteIfBound(false);
						}
					}));
			}
		}
	}
	else
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::IsInventoryItemOwned_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate) const
{
	if (Item != nullptr && GetPlayerInfo() != nullptr)
	{
		if (const URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			for (auto& InventoryItem : GetCachedInventoryForItem(Item->GetItemId()))
			{
				if (!Item->GetItemInventoryBucketUseRulesetId().IsEmpty())
				{
					if (!CatalogSubsystem->CanRulesetUsePlatformForBucket(Item->GetItemInventoryBucketUseRulesetId(), RH_GetInventoryBucketFromPlatform(GetPlayerInfo()->GetLoggedInPlatform()), InventoryItem.Bucket))
					{
						continue;
					}
				}

				if (!InventoryItem.Expires.IsSet() && InventoryItem.Count > 0)
				{
					Delegate.ExecuteIfBound(true);
					return;
				}
			}
		}
	}

	Delegate.ExecuteIfBound(false);
}

void URH_PlayerInventory::IsInventoryItemRented(const int32& ItemId, const FRH_GetInventoryStateBlock& Delegate) const
{
	if (ItemId > 0)
	{
		if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			if (URH_CatalogItem* CatalogItem = CatalogSubsystem->GetCatalogItemByItemId(ItemId))
			{
				IsInventoryItemRented_INTERNAL(CatalogItem, Delegate);
			}
			else
			{
				CatalogSubsystem->GetCatalogItem(ItemId, FRH_CatalogCallDelegate::CreateLambda([this, ItemId, CatalogSubsystem, Delegate](bool bSuccess)
					{
						if (bSuccess)
						{
							IsInventoryItemRented_INTERNAL(CatalogSubsystem->GetCatalogItemByItemId(ItemId), Delegate);
						}
						else
						{
							Delegate.ExecuteIfBound(false);
						}
					}));
			}
		}
	}
	else
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::IsInventoryItemRented_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate) const
{
	if (Item != nullptr && GetPlayerInfo() != nullptr)
	{
		if (const URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			for (const auto& InventoryItem : GetCachedInventoryForItem(Item->GetItemId()))
			{
				if (!Item->GetItemInventoryBucketUseRulesetId().IsEmpty())
				{
					if (!CatalogSubsystem->CanRulesetUsePlatformForBucket(Item->GetItemInventoryBucketUseRulesetId(), RH_GetInventoryBucketFromPlatform(GetPlayerInfo()->GetLoggedInPlatform()), InventoryItem.Bucket))
					{
						continue;
					}
				}

				if (InventoryItem.Expires.IsSet() && InventoryItem.Expires.GetValue() < FDateTime::UtcNow() && InventoryItem.Count > 0)
				{
					Delegate.ExecuteIfBound(true);
					return;
				}
			}
		}
	}

	Delegate.ExecuteIfBound(false);
}

void URH_PlayerInventory::CreateInventorySession(const TOptional<ERHAPI_Platform> Platform, const FRH_OnInventorySessionUpdateDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_CreateNewInventorySessionByPlayerUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	if (Platform.IsSet())
	{
		Request.InventorySessionCreateRequest.SetSessionPlatform(Platform.GetValue());
	}
	else
	{
		Request.InventorySessionCreateRequest.ClearSessionPlatform();
	}

	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory()->CreateNewInventorySessionByPlayerUuid(Request,
			RallyHereAPI::FDelegate_CreateNewInventorySessionByPlayerUuid::CreateUObject(
				this, &URH_PlayerInventory::HandleCreateInventorySession,
				Delegate), GetDefault<URH_IntegrationSettings>()->InventoryCreateSessionPriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::HandleCreateInventorySession(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid& Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate)
{
	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		// reset inventory session storage, since a new one was created
		InventorySession = FRH_InventorySession();

		InventorySession.SessionId = Content->SessionId;
		if (const auto OrderId = Content->GetOrderIdOrNull())
		{
			InventorySession.OrderId =  *OrderId;
		}

		if (const auto SessionPlatform = Content->GetSessionPlatformOrNull())
		{
			InventorySession.SessionPlatform = *SessionPlatform;
		}

		Delegate.ExecuteIfBound(true);
		return;
	}

	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Type::NotFound)
	{
		InventorySession = {};
	}

	Delegate.ExecuteIfBound(false);
}

void URH_PlayerInventory::GetInventorySession(const FRH_OnInventorySessionUpdateDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_GetInventorySessionInfoByPlayerUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();

	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory()->GetInventorySessionInfoByPlayerUuid(Request,
			RallyHereAPI::FDelegate_GetInventorySessionInfoByPlayerUuid::CreateUObject(
				this, &URH_PlayerInventory::HandleGetInventorySession,
				Delegate), GetDefault<URH_IntegrationSettings>()->InventoryGetSessionPriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::HandleGetInventorySession(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid& Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate)
{
	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		InventorySession.SessionId = Content->SessionId;
		if (const auto SessionPlatform = Content->GetSessionPlatformOrNull())
		{
			InventorySession.SessionPlatform = *SessionPlatform;
		}

		InventorySession.AppliedDurableLoot = Content->GetAppliedDurableLoot(TArray<int32>());

		Delegate.ExecuteIfBound(true);
		return;
	}

	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Type::NotFound)
	{
		InventorySession = {};
	}

	Delegate.ExecuteIfBound(false);
}


const TArray<FRH_ItemInventory> URH_PlayerInventory::GetAllCachedInventory() const
{
	return GetCachedInventoryForItems({});
}

const TArray<FRH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForItem(const int32& ItemId) const
{
	return GetCachedInventoryForItems({ ItemId });
}

const TArray<FRH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForItems(const TArray<int32>& ItemIds) const
{
	return GetCachedInventoryForItemsAndTypes(ItemIds, {});
}

const TArray<FRH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForItemsAndTypes(const TArray<int32>& ItemIds, const TArray<ERHAPI_InventoryType>& Types) const
{
	TArray<FRH_ItemInventory> Results;

	if (ItemIds.Num() <= 0)
	{
		if (Types.Num() <= 0)
		{
			for (const auto& ItemInv : InventoryCache)
			{
				for (auto& Inv : ItemInv.Value)
				{
					Results.Emplace(Inv);
				}
			}
		}
		else
		{
			for (const auto& InvForItem : InventoryCache)
			{
				for (const auto& Inv : InvForItem.Value)
				{
					if (Types.Contains(Inv.InventoryType))
					{
						Results.Emplace(Inv);
					}
				}
			}
		}
	}
	else
	{
		for (const auto ItemId : ItemIds)
		{
			if (InventoryCache.Contains(ItemId))
			{
				const auto& InventoryForItem = InventoryCache.Find(ItemId);
				for (const auto& Inv : *InventoryForItem)
				{
					if (Types.Num() <= 0 || Types.Contains(Inv.InventoryType))
					{
						Results.Emplace(Inv);
					}
				}
			}
		}
	}

	return Results;
}

const TArray<FRH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForType(const ERHAPI_InventoryType& Type) const
{
	return GetCachedInventoryForItemsAndTypes({}, {Type});
}

bool URH_PlayerInventory::GetCachedInventoryForInventoryId(const FGuid& InventoryId, FRH_ItemInventory& Out) const
{
	for (const auto& ItemInv : InventoryCache)
	{
		const auto& InventoryForItem = ItemInv.Value;
		for (const auto& Inv : InventoryForItem)
		{
			if (Inv.InventoryId == InventoryId)
			{
				Out = Inv;
				return true;
			}
		}
	}
	return false;
}

void URH_PlayerInventory::GetInventory(TArray<int32> ItemIds, const FRH_OnInventoryUpdateDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_GetPlayerInventoryUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();

	if (ItemIds.Num())
	{
		Request.ItemIds = ItemIds;
	}

	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory()->GetPlayerInventoryUuid(Request,
			RallyHereAPI::FDelegate_GetPlayerInventoryUuid::CreateUObject(
				this, &URH_PlayerInventory::HandleGetInventory,
				ItemIds, Delegate), GetDefault<URH_IntegrationSettings>()->InventoryGetPriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::HandleGetInventory(const RallyHereAPI::FResponse_GetPlayerInventoryUuid& Response,
	const TArray<int32> ItemIds, const FRH_OnInventoryUpdateDelegateBlock Delegate)
{
	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (!Response.IsSuccessful() || Content == nullptr)
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	const auto Inventory = Content->GetInventoryOrNull();
	const auto Items = Inventory ? Inventory->GetItemsOrNull() : nullptr;

	// partial item updates
	if (ItemIds.Num() > 0)
	{
		if (!Items)
		{
			for (const auto ItemId : ItemIds)
			{
				TArray<FRH_ItemInventory>* InventoryForItem = InventoryCache.Find(ItemId);
				if (InventoryForItem != nullptr)
				{
					InventoryForItem->Empty();
				}
			}

			BroadcastOnInventoryCacheUpdated(ItemIds);
			Delegate.ExecuteIfBound(true);
			return;
		}

		for(const auto ItemId : ItemIds)
		{
			FString ItemIdAsString = FString::FromInt(ItemId);
			const auto& ItemInventory = Items->Find(ItemIdAsString);
			if (ItemInventory == nullptr)
			{
				InventoryCache.Remove(ItemId);
			}
			else
			{
				TArray<FRH_ItemInventory>& InventoryForItem = InventoryCache.FindOrAdd(ItemId);
				InventoryForItem.Empty();

				for (const auto& InvEntry : ItemInventory->GetRecords())
				{
					FRH_ItemInventory InventoryEntry = {};
					InventoryEntry.Init(ItemId, InvEntry.Value);
					InventoryForItem.Emplace(InventoryEntry);
				}
			}
		}

		BroadcastOnInventoryCacheUpdated(ItemIds);
		Delegate.ExecuteIfBound(true);
		return;
	}

	if (!Items)
	{
		InventoryCache = TMap<int32, TArray<FRH_ItemInventory>>();
		BroadcastOnInventoryCacheUpdated(ItemIds);
		Delegate.ExecuteIfBound(true);
		return;
	}

	TArray<int32> FullInventoryItemIds;

	// full update
	InventoryCache = TMap<int32, TArray<FRH_ItemInventory>>();
	for (const auto& Entry : *Items)
	{
		if (const auto Records = Entry.Value.GetRecordsOrNull())
		{
			int32 ItemId = FCString::Atoi(*Entry.Key);
			TArray<FRH_ItemInventory>& InventoryForItem = InventoryCache.FindOrAdd(ItemId);
			InventoryForItem.Empty();
			FullInventoryItemIds.Add(ItemId);

			for (const auto& InvEntry : *Records)
			{
				FRH_ItemInventory InventoryEntry = {};
				InventoryEntry.Init(ItemId, InvEntry.Value);
				InventoryForItem.Emplace(InventoryEntry);
			}
		}
	}

	BroadcastOnInventoryCacheUpdated(FullInventoryItemIds);
	Delegate.ExecuteIfBound(true);
}

void URH_PlayerInventory::CreateInventory(const TOptional<FGuid>& ClientOrderReferenceId, const TArray<FRH_CreateInventory>& CreateInventories, const ERHAPI_Source Source,
		const FRH_OnInventoryUpdateDelegateBlock& Delegate)
{
	if (CreateInventories.Num() <= 0)
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	auto Request = RallyHereAPI::FRequest_CreatePlayerInventoryUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	Request.CreateInventoryRequests.SetSource(Source);
	if (ClientOrderReferenceId.IsSet())
	{
		Request.CreateInventoryRequests.SetClientOrderRefId(ClientOrderReferenceId.GetValue());
	}

	for (const auto& CreateInventory : CreateInventories)
	{
		FRHAPI_CreateInventoryRequest Create = {};
		Create.SetCount(CreateInventory.Count);
		if (CreateInventory.Expires.IsSet())
		{
			Create.SetExpires(CreateInventory.Expires.GetValue());
		}


		Create.SetType(CreateInventory.InventoryType);
		Create.SetItemId(CreateInventory.ItemId);
		Create.SetBucket(CreateInventory.Bucket);
		Create.SetCustomData(CreateInventory.CustomData);
		Request.CreateInventoryRequests.Inventory.Emplace(Create);
	}

	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory()->CreatePlayerInventoryUuid(Request,
			RallyHereAPI::FDelegate_CreatePlayerInventoryUuid::CreateUObject(
				this, &URH_PlayerInventory::HandleCreateInventory, Delegate),
			GetDefault<URH_IntegrationSettings>()->InventoryCreatePriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::HandleCreateInventory(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid& Response,
	const FRH_OnInventoryUpdateDelegateBlock Delegate)
{
	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		FRHAPI_PlayerOrderCreate Response202;
		FString OrderId;
		if (Response.TryGetContentFor202(Response202) && Response202.GetOrderId(OrderId))
		{
			auto* NewOrder = NewObject<URH_PendingInventoryUpdateOrder>(this);
			NewOrder->Init(OrderId, Delegate);
			PendingOrders.Push(NewOrder);
		}
		else
		{
			Delegate.ExecuteIfBound(false);
		}
		return;
	}
	else if (Response.GetHttpResponseCode() == EHttpResponseCodes::Ok)
	{
		FRHAPI_PlayerOrder Response200;
		if (Response.TryGetContentFor200(Response200))
		{
			check(!Response200.OrderId.IsEmpty());
			ParseOrderResult(Response200);
			Delegate.ExecuteIfBound(true);
			return;
		}
	}
	
	Delegate.ExecuteIfBound(false);
}

void URH_PlayerInventory::UpdateInventory(const TOptional<FGuid>& ClientOrderReferenceId, const TArray<FRH_UpdateInventory>& UpdateInventories, const ERHAPI_Source Source,
		const FRH_OnInventoryUpdateDelegateBlock& Delegate)
{
	if (UpdateInventories.Num() <= 0)
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	auto Request = RallyHereAPI::FRequest_ModifyManyPlayerInventoryUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	Request.UpdateInventoryRequests.SetSource(Source);
	if (ClientOrderReferenceId.IsSet())
	{
		Request.UpdateInventoryRequests.SetClientOrderRefId(ClientOrderReferenceId.GetValue());
	}

	for (const auto& ModifyInventory : UpdateInventories)
	{
		FRHAPI_UpdateInventoryRequestById Update = {};
		Update.InventoryId = ModifyInventory.InventoryId;
		Update.SetCount(ModifyInventory.Count);
		if (ModifyInventory.Expires.IsSet())
		{
			Update.SetExpires(ModifyInventory.Expires.GetValue());
		}
		Update.SetItemId(ModifyInventory.ItemId);
		Update.SetBucket(ModifyInventory.Bucket);
		Update.SetCustomData(ModifyInventory.CustomData);
		Request.UpdateInventoryRequests.Inventory.Emplace(Update);
	}

	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory()->ModifyManyPlayerInventoryUuid(Request,
			RallyHereAPI::FDelegate_ModifyManyPlayerInventoryUuid::CreateUObject(
				this, &URH_PlayerInventory::HandleUpdateInventory, Delegate),
			GetDefault<URH_IntegrationSettings>()->InventoryUpdatePriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_PlayerInventory::HandleUpdateInventory(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid& Response,
	const FRH_OnInventoryUpdateDelegateBlock Delegate)
{
	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		FRHAPI_PlayerOrderCreate Response202;
		FString OrderId;
		if (Response.TryGetContentFor202(Response202) && Response202.GetOrderId(OrderId))
		{
			auto* NewOrder = NewObject<URH_PendingInventoryUpdateOrder>(this);
			NewOrder->Init(OrderId, Delegate);
			PendingOrders.Push(NewOrder);
		}
		else
		{
			Delegate.ExecuteIfBound(false);
		}
		return;
	}
	else if (Response.GetHttpResponseCode() == EHttpResponseCodes::Ok)
	{
		FRHAPI_PlayerOrder Response200;
		if (Response.TryGetContentFor200(Response200))
		{
			check(!Response200.OrderId.IsEmpty());
			ParseOrderResult(Response200);
			Delegate.ExecuteIfBound(true);
			return;
		}
	}
	
	Delegate.ExecuteIfBound(false);
}

void URH_PlayerInventory::CheckPollStatus()
{
	if (!ShouldPollInventory())
	{
		// no one is listening, disable polling
		if (InventoryPoller.IsValid() && !InventoryPoller->IsInactive())
		{
			InventoryPoller->StopPoll();
		}
		bReceivedInventoryNotification = false;
	}
	else
	{
		static FName PollTimerName(TEXT("Inventory"));

		// create a poller if one was not created yet
		if (!InventoryPoller.IsValid())
		{
			InventoryPoller = FRH_PollControl::CreateAutoPoller();
		}

		// only start if poller was not already started
		if (InventoryPoller->IsInactive())
		{
			// kick immediately, as someone just became interested in this result
			InventoryPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_PlayerInventory::PollInventory), PollTimerName, true);
			bReceivedInventoryNotification = false;
		}
		// if we received a notification
		else if (bReceivedInventoryNotification)
		{
			// wait until we are not executing
			if (!InventoryPoller->IsExecuting())
			{
				InventoryPoller->ExecutePoll();
				bReceivedInventoryNotification = false;
			}
		}
	}

	if (!ShouldPollPendingInventory())
	{
		// no one is listening, disable polling
		if (PendingInventoryPoller.IsValid() && !PendingInventoryPoller->IsInactive())
		{
			PendingInventoryPoller->StopPoll();
		}
		bReceivedPendingInventoryNotification = false;
	}
	else
	{
		static FName PollTimerName(TEXT("PendingInventory"));

		// create a poller if one was not created yet
		if (!PendingInventoryPoller.IsValid())
		{
			PendingInventoryPoller = FRH_PollControl::CreateAutoPoller();
		}

		// only start if poller was not already started
		if (PendingInventoryPoller->IsInactive())
		{
			// kick immediately, as someone just became interested in this result
			PendingInventoryPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_PlayerInventory::PollPendingInventory), PollTimerName, true);
			bReceivedPendingInventoryNotification = false;
		}
		// if we received a notification
		else if (bReceivedPendingInventoryNotification)
		{
			// wait until we are not executing
			if (!PendingInventoryPoller->IsExecuting())
			{
				PendingInventoryPoller->ExecutePoll();
				bReceivedPendingInventoryNotification = false;
			}
		}
	}
}


void URH_PlayerInventory::HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (APIName == TEXT("inventory"))	// double checking, but this should be implied
	{
		// extract the session ID from the URL
		// the first API param should be the API version
		// the second API param should be the object type
		if (APIParams.Num() >= 3 && APIParams[0] == TEXT("v2") && APIParams[1] == TEXT("player"))
		{
			// the third API param should be the player UUID
			FGuid PlayerUuid;
			if (FGuid::Parse(APIParams[2], PlayerUuid) && PlayerUuid == GetRHPlayerUuid())
			{
				// this is an inventory notification for us!
				if (APIParams.Num() >= 4 && APIParams[3] == TEXT("order"))
				{
					bReceivedPendingInventoryNotification = true;
					bReceivedInventoryNotification = true;
				}
			}
		}
	}
}


void URH_PlayerInventory::PollInventory(const FRH_PollCompleteFunc& Delegate)
{
	if (!OrderWatch)
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	OrderWatch->RequestOrders(FRH_GenericSuccessWithErrorDelegate::CreateLambda([Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo) { Delegate.ExecuteIfBound(bSuccess, true); }));
}


void URH_PlayerInventory::PollPendingInventory(const FRH_PollCompleteFunc& Delegate)
{
	// clean any nullptr entries out of the array (they should not exist, but best to be sure)
	PendingOrders.RemoveAll([](const URH_PendingOrder* Value) { return Value == nullptr; });

	if (PendingOrders.Num() <= 0)
	{
		// if no orders remain to process, complete the poll and tell to not repoll
		Delegate.ExecuteIfBound(true, false);
		return;
	}

	// process the list
	PollPendingInventoryInternal(PendingOrders, Delegate);
}

void URH_PlayerInventory::PollPendingInventoryInternal(TArray<URH_PendingOrder*> OrdersToProcess, const FRH_PollCompleteFunc& Delegate)
{
	// if no orders remain to process, complete the poll
	if (OrdersToProcess.Num() <= 0)
	{
		Delegate.ExecuteIfBound(true, true);
		return;
	}

	// pop the next order from the list
	auto PendingOrder = OrdersToProcess.Pop();

	// set completion delegate to continue processing the list
	auto CompletionDelegate = FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, OrdersToProcess, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
		{
			// continue processing the list
			PollPendingInventoryInternal(OrdersToProcess, Delegate);
		});

	// process the order
	PendingOrder->RequestOrders(CompletionDelegate);
}

void URH_PlayerInventory::RedeemPromoCode(const FString& PromoCode, const FRH_PromoCodeResultBlock& Delegate)
{
	auto Request = TCreateOrder::Request();

	Request.AuthContext = GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, FRHAPI_PlayerOrder());
		return;
	}

	Request.PlayerOrderCreate.SetSource(ERHAPI_Source::Client);
	Request.PlayerUuid = GetRHPlayerUuid();
	FRHAPI_PlayerOrderEntryCreate NewOrderEntry;
	NewOrderEntry.Type = ERHAPI_PlayerOrderEntryType::PromotionCode;
	NewOrderEntry.SetExternalTranId(PromoCode);
	NewOrderEntry.Quantity = 1;
	Request.PlayerOrderCreate.Entries.Push(NewOrderEntry);

	if (!TCreateOrder::DoCall(RH_APIs::GetInventoryAPI(), Request, TCreateOrder::Delegate::CreateUObject(this, &URH_PlayerInventory::RedeemPromoCodeResponse, Delegate, PromoCode), GetDefault<URH_IntegrationSettings>()->InventoryCreateOrderPriority))
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, FRHAPI_PlayerOrder());
	}
}

void URH_PlayerInventory::RedeemPromoCodeResponse(const TCreateOrder::Response& Response, const FRH_PromoCodeResultBlock Delegate, const FString PromoCode)
{
	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		FRHAPI_PlayerOrderCreate Response202;
		FString OrderId;
		if (Response.TryGetContentFor202(Response202) && Response202.GetOrderId(OrderId))
		{
			auto* NewOrder = NewObject<URH_PendingPromoCodeOrder>(this);
			NewOrder->Init(OrderId, PromoCode, Delegate);
			PendingOrders.Push(NewOrder);
			return;
		}
		else
		{
			Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, FRHAPI_PlayerOrder());
		}
		return;
	}
	else if (Response.GetHttpResponseCode() == EHttpResponseCodes::Ok)
	{
		FRHAPI_PlayerOrder Response200;
		if (Response.TryGetContentFor200(Response200))
		{
			check(!Response200.OrderId.IsEmpty());
			ParseOrderResult(Response200);
			Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, Response200);
			return;
		}
	}

	Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, FRHAPI_PlayerOrder());
}

void URH_PlayerInventory::ParseOrderResult(const FRHAPI_PlayerOrder& Content)
{
	if (ParsedInventoryOrders.Contains(Content.GetOrderId()))
	{
		// If we had already processed this order, remove it from the list of expected orders as we should only
		// hit this 2 times for any given order (1 from the request, 1 from a watch)
		ParsedInventoryOrders.Remove(Content.GetOrderId());
		return;
	}

	ParsedInventoryOrders.Add(Content.GetOrderId());

	for (auto& OrderEntry : Content.Entries)
	{
		if (const auto Details = OrderEntry.GetDetailsOrNull())
		{
			UpdateInventoryFromOrderDetails(*Details);
		}
	}

	CachedOrderResults.Add(Content);
}

void URH_PlayerInventory::UpdateInventoryFromOrderDetails(const TArray<FRHAPI_PlayerOrderDetail>& OrderDetails)
{
	TArray<int32> InventoryCacheUpdates;

	for (auto& OrderDetail : OrderDetails)
	{
		if (const FRHAPI_PlayerInventoryChange* InventoryChangePtr = OrderDetail.GetInvChangeOrNull())
		{
			FRHAPI_PlayerInventoryChange InventoryChange = *InventoryChangePtr;
			int32* BeforeItemIdPtr = InventoryChange.GetBeforeItemIdOrNull();
			int32* AfterItemIdPtr = InventoryChange.GetAfterItemIdOrNull();

			// If we have a before Inventory Record, find it and remove it (we will create a new record with the updated data based on the after record)
			if (BeforeItemIdPtr != nullptr)
			{
				if (const FRHAPI_InventoryRecord* BeforeRecordPtr = InventoryChange.GetBeforeOrNull())
				{
					TArray<FRH_ItemInventory>* InventoryForItem = InventoryCache.Find(*BeforeItemIdPtr);
					const FRHAPI_InventoryRecord BeforeRecord = *BeforeRecordPtr;

					if (InventoryForItem != nullptr)
					{
						auto ModifiedCount = InventoryForItem->RemoveAll([BeforeRecord](const FRH_ItemInventory& InventoryRecord)
							{
								if (InventoryRecord.InventoryId == BeforeRecord.GetInventoryId())
								{
									return true;
								}
								return false;
							});

						if (ModifiedCount == 0)
						{
							UE_LOG(LogRallyHereIntegration, Warning, TEXT("Failed to find an existing inventory record to update for item id %d with inventory id %s"), *BeforeItemIdPtr, *BeforeRecord.GetInventoryId().ToString(EGuidFormats::DigitsWithHyphens));
						}
						else if (ModifiedCount > 1)
						{
							UE_LOG(LogRallyHereIntegration, Warning, TEXT("Found multiple inventory records to update for item id %d with inventory id %s"), *BeforeItemIdPtr, *BeforeRecord.GetInventoryId().ToString(EGuidFormats::DigitsWithHyphens));
						}

						// it is possible this removed the only entry on this item, we will clean up later if so, since after item update could just readd it

						InventoryCacheUpdates.AddUnique(*BeforeItemIdPtr);
					}
				}
			}

			// update the inventory cache with the new record
			if (AfterItemIdPtr != nullptr)
			{
				if (const FRHAPI_InventoryRecord* AfterRecordPtr = InventoryChange.GetAfterOrNull())
				{
					// Note that this can add records with a count of 0.  This is intentional, as by design an empty record is considered equivalent to a count of 0.
					// In the future, it is possible that the after record will instead be null in the case of a count being reduced to zero.
					// Therefore, we try to preserve the API view as much as possible, so we have the maximum amount of future compatibility.
					FRH_ItemInventory NewInventoryItem;
					NewInventoryItem.Init(*AfterItemIdPtr, *AfterRecordPtr);

					TArray<FRH_ItemInventory>* InventoryForItem = InventoryCache.Find(*AfterItemIdPtr);

					// if we already have a listing for this item id, add the new record, otherwise create a new listing
					if (InventoryForItem != nullptr)
					{
						InventoryForItem->Push(NewInventoryItem);
					}
					else
					{
						InventoryCache.Add(*AfterItemIdPtr, TArray<FRH_ItemInventory>({ NewInventoryItem }));
					}

					InventoryCacheUpdates.AddUnique(*AfterItemIdPtr);
				}
			}
		}
	}

	// clean up any now-empty cache entries
	for (auto UpdatedItemId : InventoryCacheUpdates)
	{
		if (InventoryCache.Contains(UpdatedItemId) && InventoryCache[UpdatedItemId].IsEmpty())
		{
			InventoryCache.Remove(UpdatedItemId);
		}
	}

	// broadcast updates
	if (InventoryCacheUpdates.Num())
	{
		BroadcastOnInventoryCacheUpdated(InventoryCacheUpdates);
	}
}

void URH_PlayerInventory::PopulateInstanceData(FRHAPI_PlayerOrderCreate& PlayerOrderCreate) const
{
	if (const URH_GameInstanceSubsystem* RHGI = GetGameInstanceSubsystem())
	{
		if (const URH_GameInstanceSessionSubsystem* RHGISS = RHGI->GetSessionSubsystem())
		{
			if (const FRHAPI_InstanceInfo* InstanceInfo = RHGISS->GetInstance())
			{
				PlayerOrderCreate.SetInstanceId(*InstanceInfo->GetInstanceId());
			}

			const auto MatchId = RHGISS->GetActiveMatchId();
			if (!MatchId.IsEmpty())
			{
				PlayerOrderCreate.SetMatchId(MatchId);
			}
		}
	}
}

void URH_PlayerInventory::CreateNewPlayerOrder(ERHAPI_Source OrderSource, bool IsTransaction, const TArray<URH_PlayerOrderEntry*>& OrderEntries, const FRH_OrderResultBlock& Delegate)
{
	auto Request = TCreateOrder::Request();

	Request.AuthContext = GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, FRHAPI_PlayerOrder());
		return;
	}

	// #RHTODO: Expose or remove PlayerOrderCreate.ClientOrderRefId
	PopulateInstanceData(Request.PlayerOrderCreate);
	Request.PlayerOrderCreate.SetIsTransaction(IsTransaction);
	Request.PlayerOrderCreate.SetSource(OrderSource);
	Request.PlayerUuid = GetRHPlayerUuid();
	WriteOrderEntries(Request.PlayerOrderCreate.Entries, OrderEntries);

	if (Request.PlayerOrderCreate.Entries.Num() == 0)
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, FRHAPI_PlayerOrder());
		return;
	}

	if (!TCreateOrder::DoCall(RH_APIs::GetInventoryAPI(), Request, TCreateOrder::Delegate::CreateUObject(this, &URH_PlayerInventory::CreatePlayerOrderResponse, Delegate, OrderEntries), GetDefault<URH_IntegrationSettings>()->InventoryCreateOrderPriority))
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, FRHAPI_PlayerOrder());
	}
}

void URH_PlayerInventory::WriteOrderEntries(TArray<FRHAPI_PlayerOrderEntryCreate>& Entries, const TArray<URH_PlayerOrderEntry*>& OrderEntries)
{
	// transcribe the object order entries to the api structure
	for (const auto& OrderEntry : OrderEntries)
	{
		FRHAPI_PlayerOrderEntryCreate NewOrderEntry;
		NewOrderEntry.Type = OrderEntry->GetFillType();

		// specify the loot id if we have one, prefer the one from the loot item
		if (OrderEntry->GetLootItem().GetLootId() > 0 || OrderEntry->GetLootId() > 0)
		{
			NewOrderEntry.SetLootId(OrderEntry->GetLootItem().GetLootId() > 0 ? OrderEntry->GetLootItem().GetLootId() : OrderEntry->GetLootId());
		}

		NewOrderEntry.Quantity = OrderEntry->GetQuantity();
		NewOrderEntry.SetExternalTranId(OrderEntry->GetExternalTransactionId());
		if (OrderEntry->CustomData.Num() > 0)
		{
			NewOrderEntry.SetCustomData(OrderEntry->CustomData);
		}

		if (OrderEntry->GetFillType() == ERHAPI_PlayerOrderEntryType::PurchaseLoot)
		{
			// if we have the vendor data locally, add the ETag to the request so that the server can validate we match
			FRHAPI_Vendor Vendor;
			if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
			{
				if (CatalogSubsystem->GetVendorById(OrderEntry->GetLootItem().GetVendorId(), Vendor))
				{
					if (const auto& CacheInfo = Vendor.GetCacheInfoOrNull())
					{
						NewOrderEntry.SetVendorEtag(CacheInfo->GetEtag());
					}
				}
			}

			// add local expected unit price information to the request so that the server can validate we match
			FRHAPI_PurchasePrice NewPurchasePrice;

			if (OrderEntry->GetPrices().Num() > 0)
			{
				NewPurchasePrice.SetCurrencies(OrderEntry->GetPrices());
			}
			else
			{
				PRAGMA_DISABLE_DEPRECATION_WARNINGS
				NewPurchasePrice.SetPriceItemId(OrderEntry->GetPriceItemId());
				NewPurchasePrice.SetPrice(OrderEntry->GetPrice());
				PRAGMA_ENABLE_DEPRECATION_WARNINGS
			}
			
			NewPurchasePrice.SetPriceCouponItemId(OrderEntry->GetCouponItemId());

			NewOrderEntry.SetPurchasePrice(NewPurchasePrice);
		}

		Entries.Push(NewOrderEntry);
	}
}

void URH_PlayerInventory::CreatePlayerOrderResponse(const TCreateOrder::Response& Response, const FRH_OrderResultBlock Delegate, const TArray<URH_PlayerOrderEntry*> OrderEntries)
{
	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		FRHAPI_PlayerOrderCreate Response202;
		FString OrderId;
		if (Response.TryGetContentFor202(Response202) && Response202.GetOrderId(OrderId))
		{
			auto* NewOrder = NewObject<URH_PendingPlayerOrder>(this);
			NewOrder->Init(OrderId, OrderEntries, Delegate);
			PendingOrders.Push(NewOrder);

		}
		else
		{
			Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, FRHAPI_PlayerOrder());
		}
		return;
	}
	else if (Response.GetHttpResponseCode() == EHttpResponseCodes::Ok)
	{
		FRHAPI_PlayerOrder Response200;
		if (Response.TryGetContentFor200(Response200))
		{
			check(!Response200.OrderId.IsEmpty());
			ParseOrderResult(Response200);
			Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, Response200);
			return;
		}
	}

	Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, FRHAPI_PlayerOrder());
}

void URH_PlayerInventory::ClearPendingOrder(const FRHAPI_PlayerOrder& OrderResult)
{
	if (PendingOrders.Num())
	{
		for (int32 i = PendingOrders.Num() - 1; i >= 0; --i)
		{
			if (PendingOrders[i] != nullptr &&
				PendingOrders[i]->OrderId == OrderResult.GetOrderId() &&
				GetRHPlayerUuid() == OrderResult.GetPlayerUuid())
			{
				PendingOrders.RemoveAt(i);
				return;
			}
		}
	}
}

void URH_PlayerInventory::SetOrderWatch(const FRH_OrderDetailsBlock& Delegate)
{
	if (OrderWatch == nullptr)
	{
		OrderWatch = NewObject<URH_PlayerOrderWatch>(this);
	}

	OrderWatch->Delegates.Add(Delegate);
}

void URH_PlayerInventory::ClearOrderWatch(const FRH_OrderDetailsBlock& Delegate)
{
	if (OrderWatch != nullptr)
	{
		for (int32 i = 0; i < OrderWatch->Delegates.Num(); ++i)
		{
			if (OrderWatch->Delegates[i].Delegate.GetHandle() == Delegate.Delegate.GetHandle() &&
				OrderWatch->Delegates[i].DynDelegate == Delegate.DynDelegate)
			{
				OrderWatch->Delegates.RemoveAt(i);
				break;
			}
		}
	}
}

void URH_PlayerInventory::AddPendingOrdersFromEntitlementsArray(const TArray<FRHAPI_PlatformEntitlement>& Entitlements, const FRH_OrderDetailsBlock& Delegate)
{
	for (const FRHAPI_PlatformEntitlement& Entitlement : Entitlements)
	{
		if (const auto* OrderId = Entitlement.GetOrderIdOrNull())
		{
			if (!OrderId->IsEmpty())
			{
				auto* NewOrder = NewObject<URH_PendingOrderDetailsOrder>(this);
				NewOrder->Init(*OrderId, Delegate);
				PendingOrders.Push(NewOrder);
			}
		}
	}
}

void URH_PlayerInventory::AddPendingOrdersFromEntitlementResult(const FRHAPI_PlatformEntitlementProcessResult& EntitlementResult, const FRH_OrderDetailsBlock& Delegate)
{
	TArray<FRHAPI_PlatformEntitlement> Entitlements;
	if (EntitlementResult.GetClientEntitlements(Entitlements))
	{
		AddPendingOrdersFromEntitlementsArray(Entitlements, Delegate);
	}

	if (EntitlementResult.GetServerEntitlements(Entitlements))
	{
		AddPendingOrdersFromEntitlementsArray(Entitlements, Delegate);
	}
}

URH_GameInstanceSubsystem* URH_PlayerInventory::GetGameInstanceSubsystem() const
{
	if (const URH_PlayerInfoSubsystem* PSS = GetPlayerInfo()->GetPlayerInfoSubsystem())
	{
		return PSS->GetGameInstanceSubsystem();
	}

	return nullptr;
}

URH_CatalogSubsystem* URH_PlayerInventory::GetCatalogSubsystem() const
{
	if (const URH_GameInstanceSubsystem* RHGI = GetGameInstanceSubsystem())
	{
		return RHGI->GetCatalogSubsystem();
	}

	return nullptr;
}

///

URH_PlayerInventory* URH_PlayerOrderWatch::GetPlayerInventory() const
{
	return CastChecked<URH_PlayerInventory>(GetOuter());
}


bool URH_PlayerOrderWatch::RequestOrders(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	auto* PlayerInventory = GetPlayerInventory();
	if (!PlayerInventory)
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return false;
	}

	auto Request = TGetOrders::Request();

	Request.AuthContext = PlayerInventory->GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return false;
	}

	Request.PlayerUuid = PlayerInventory->GetRHPlayerUuid();

	// if we have a cursor from a previous request, use it
	if (const auto Cursor = LastRequestMeta.GetCursorOrNull())
	{
		Request.Cursor = *Cursor;
	}
	// else if we have made a previous request, and have a starting position, use it (this covers cases where no orders have arrived to create a cursor)
	else if (const auto LastStartingPosition = LastRequestMeta.GetStartingPositionOrNull())
	{
		Request.StartingPosition = *LastStartingPosition;
	}
	// else we have not made a successful request yet, so start fresh with current time as starting position
	else
	{
		// if we don't have a cursor or starting position, we are starting fresh

		// we want to use the server adjusted time if we can, but if we can't, we will use the local time
		Request.StartingPosition = FDateTime::UtcNow();

		// try to use the current server time as a starting position
		const auto Inventory = GetPlayerInventory();
		if (Inventory != nullptr)
		{
			const auto GameInstanceSubsystem = Inventory->GetGameInstanceSubsystem();
			if (GameInstanceSubsystem != nullptr && GameInstanceSubsystem->GetConfigSubsystem() != nullptr)
			{
				FDateTime ServerTime;
				if (GameInstanceSubsystem->GetConfigSubsystem()->GetServerTime(ServerTime))
				{
					Request.StartingPosition = ServerTime;
				}
			}
		}
	}

	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetOrders>>(
		TGetOrders::Delegate::CreateUObject(this, &URH_PlayerOrderWatch::RequestOrdersResponse),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->InventoryGetOrdersPriority
	);

	Helper->Start(RH_APIs::GetInventoryAPI(), Request);
	return true;
}

void URH_PlayerOrderWatch::RequestOrdersResponse(const TGetOrders::Response& Resp)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		LastRequestMeta = Content->Page;

		if (const auto Data = Content->GetDataOrNull())
		{
			auto* PlayerInventory = GetPlayerInventory();
			if (PlayerInventory != nullptr)
			{
				for (const auto& Order : *Data)
				{
					PlayerInventory->ParseOrderResult(Order);
				}
			}

			for (const auto& Delegate : Delegates)
			{
				Delegate.ExecuteIfBound(*Data);
			}
		}
	}
}

///

URH_PendingOrder::URH_PendingOrder(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, OrderId(TEXT(""))
{
}

URH_PlayerInventory* URH_PendingOrder::GetPlayerInventory() const
{
	return CastChecked<URH_PlayerInventory>(GetOuter());
}

bool URH_PendingOrder::RequestOrders(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	auto* PlayerInventory = GetPlayerInventory();
	if (!PlayerInventory)
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return false;
	}

	auto Request = TGetOrderById::Request();

	Request.AuthContext = PlayerInventory->GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return false;
	}

	Request.PlayerUuid = PlayerInventory->GetRHPlayerUuid();
	Request.OrderId = OrderId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetOrderById>>(
		TGetOrderById::Delegate::CreateUObject(this, &URH_PendingOrder::RequestOrdersResponse),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->InventoryGetOrdersPriority
	);

	Helper->Start(RH_APIs::GetInventoryAPI(), Request);

	return true;
}

void URH_PendingOrder::RequestOrdersResponse(const TGetOrderById::Response& Resp)
{
	auto* PlayerInventory = GetPlayerInventory();

	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && PlayerInventory != nullptr && Content != nullptr)
	{
		bool bAllEntriesHaveResults = true;

		for (const auto& Entry : Content->GetEntries())
		{
			auto Result = Entry.GetResultOrNull();
			if (!Result)
			{
				bAllEntriesHaveResults = false;
				break;
			}
		}

		// if all entries have results, consider the order complete and remove from pending list
		if (bAllEntriesHaveResults)
		{
			PlayerInventory->ParseOrderResult(*Content);
			BroadcastComplete(PlayerInventory, *Content);
			PlayerInventory->ClearPendingOrder(*Content);
		}
	}
}

URH_PendingPromoCodeOrder::URH_PendingPromoCodeOrder(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, PromoCode(TEXT(""))
	, PromoCodeResultsDelegate(FRH_PromoCodeResultBlock())
{
}

void URH_PendingPromoCodeOrder::BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content)
{
	PromoCodeResultsDelegate.ExecuteIfBound(PlayerInventory->GetPlayerInfo(), PromoCode, Content);
}

URH_PendingInventoryUpdateOrder::URH_PendingInventoryUpdateOrder(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, InventoryUpdateDelegate(FRH_OnInventoryUpdateDelegateBlock())
{
}

void URH_PendingInventoryUpdateOrder::BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content)
{
	InventoryUpdateDelegate.ExecuteIfBound(true);
}

URH_PendingPlayerOrder::URH_PendingPlayerOrder(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, OrderResultDelegate(FRH_OrderResultBlock())
{
}

void URH_PendingPlayerOrder::BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content)
{
	OrderResultDelegate.ExecuteIfBound(PlayerInventory->GetPlayerInfo(), OrderEntries, Content);
}

URH_PendingOrderDetailsOrder::URH_PendingOrderDetailsOrder(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, OrderDetailsDelegate(FRH_OrderDetailsBlock())
{
}

void URH_PendingOrderDetailsOrder::BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content)
{
	const TArray<FRHAPI_PlayerOrder> OrderArray{ Content };
	OrderDetailsDelegate.ExecuteIfBound(OrderArray);
}
///

bool URH_InventoryBlueprintLibrary::CheckIfInventoryExpires(const FRH_ItemInventory& ItemInventory)
{
	return ItemInventory.Expires.IsSet();
}

bool URH_InventoryBlueprintLibrary::GetInventoryExpiration(const FRH_ItemInventory& ItemInventory, FDateTime& DateTimeOut)
{
	const auto InvHasExpiration = CheckIfInventoryExpires(ItemInventory);
	if (InvHasExpiration)
	{
		DateTimeOut = ItemInventory.Expires.GetValue();
	}
	return InvHasExpiration;
}

void URH_InventoryBlueprintLibrary::AddCustomDataToItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key, const FString& Value)
{
	ItemInventory.AddCustomData(Key, Value);
}

void URH_InventoryBlueprintLibrary::RemoveCustomDataFromItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key)
{
	ItemInventory.RemoveCustomData(Key);
}

FString URH_InventoryBlueprintLibrary::FindCustomDataOnItemInventory(const FRH_ItemInventory& ItemInventory, const FString& Key)
{
	return ItemInventory.FindCustomDataWithKey(Key);
}

bool URH_InventoryBlueprintLibrary::InitCreateInventoryWithItemInventoryValues(FRH_CreateInventory CreateInventory, const FRH_ItemInventory& ItemInventory)
{
	return CreateInventory.InitFromItemInventory(ItemInventory);
}

bool URH_InventoryBlueprintLibrary::InitUpdateInventoryWithItemInventoryValues(FRH_UpdateInventory UpdateInventory, const FRH_ItemInventory& ItemInventory)
{
	return UpdateInventory.InitFromItemInventory(ItemInventory);
}