#include "RH_InventorySubsystem.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_CatalogSubsystem.h"

void URH_InventorySubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid())
	{
		AuthContext->OnLoginUserChanged().AddUObject(this, &URH_InventorySubsystem::OnUserChanged);
	}
}

void URH_InventorySubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid())
	{
		AuthContext->OnLoginUserChanged().RemoveAll(this);
	}
}

void URH_InventorySubsystem::InitPropertiesWithDefaultValues()
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

FAuthContextPtr URH_InventorySubsystem::GetAuthContext() const
{
	if (const URH_PlayerInfoSubsystem* PSS = GetPlayerInfo()->GetPlayerInfoSubsystem())
	{
		return PSS->GetAuthContext();
	}
	return nullptr;
}

void URH_InventorySubsystem::OnUserChanged()
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

FGuid URH_InventorySubsystem::GetRHPlayerUuid() const
{ 
	return PlayerInfo ? PlayerInfo->GetRHPlayerUuid() : FGuid(); 
}

void URH_InventorySubsystem::GetInventoryCount(int32 ItemId, const FRH_GetInventoryCountBlock& Delegate)
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
	}
	else
	{
		Delegate.ExecuteIfBound(0);
	}
}

void URH_InventorySubsystem::GetInventoryCount_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryCountBlock& Delegate)
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
					if (!CatalogSubsystem->CanRulesetUsePlatformForBucket(Item->GetItemInventoryBucketUseRulesetId(), RH_GetInventoryBucketFromPlatformType(GetPlayerInfo()->GetLoggedInPlatformType()), InventoryItem.Bucket))
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

void URH_InventorySubsystem::IsInventoryItemOwned(int32 ItemId, const FRH_GetInventoryStateBlock& Delegate)
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

void URH_InventorySubsystem::IsInventoryItemOwned_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate)
{
	if (Item != nullptr && GetPlayerInfo() != nullptr)
	{
		if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			for (auto& InventoryItem : GetCachedInventoryForItem(Item->GetItemId()))
			{
				if (!Item->GetItemInventoryBucketUseRulesetId().IsEmpty())
				{
					if (!CatalogSubsystem->CanRulesetUsePlatformForBucket(Item->GetItemInventoryBucketUseRulesetId(), RH_GetInventoryBucketFromPlatformType(GetPlayerInfo()->GetLoggedInPlatformType()), InventoryItem.Bucket))
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

void URH_InventorySubsystem::IsInventoryItemRented(int32 ItemId, const FRH_GetInventoryStateBlock& Delegate)
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

void URH_InventorySubsystem::IsInventoryItemRented_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate)
{
	if (Item != nullptr && GetPlayerInfo() != nullptr)
	{
		if (URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
		{
			for (auto& InventoryItem : GetCachedInventoryForItem(Item->GetItemId()))
			{
				if (!Item->GetItemInventoryBucketUseRulesetId().IsEmpty())
				{
					if (!CatalogSubsystem->CanRulesetUsePlatformForBucket(Item->GetItemInventoryBucketUseRulesetId(), RH_GetInventoryBucketFromPlatformType(GetPlayerInfo()->GetLoggedInPlatformType()), InventoryItem.Bucket))
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

void URH_InventorySubsystem::CreateInventorySession(const TOptional<ERHAPI_Platform> Platform, const FRH_OnInventorySessionUpdateDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_CreateNewInventorySessionByPlayerUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	if (Platform.IsSet())
	{
		Request.InventorySessionCreateRequest.SessionPlatform_IsSet = true;
		Request.InventorySessionCreateRequest.SessionPlatform_Optional = Platform.GetValue();
	}
	else
	{
		Request.InventorySessionCreateRequest.SessionPlatform_IsSet = false;
	}

	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory().CreateNewInventorySessionByPlayerUuid(Request,
			RallyHereAPI::FDelegate_CreateNewInventorySessionByPlayerUuid::CreateUObject(
				this, &URH_InventorySubsystem::HandleCreateInventorySession,
				Delegate));
	
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_InventorySubsystem::HandleCreateInventorySession(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid& Response, FRH_OnInventorySessionUpdateDelegateBlock Delegate)
{
	if (Response.IsSuccessful())
	{
		InventorySession.SessionId = Response.Content.SessionId;
		if (Response.Content.OrderId_IsSet)
		{
			InventorySession.OrderId =  Response.Content.OrderId_Optional;
		}
		if (Response.Content.SessionPlatform_IsSet)
		{
			InventorySession.SessionPlatform = Response.Content.SessionPlatform_Optional;
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

void URH_InventorySubsystem::GetInventorySession(const FRH_OnInventorySessionUpdateDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_GetInventorySessionInfoByPlayerUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	
	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory().GetInventorySessionInfoByPlayerUuid(Request,
			RallyHereAPI::FDelegate_GetInventorySessionInfoByPlayerUuid::CreateUObject(
				this, &URH_InventorySubsystem::HandleGetInventorySession,
				Delegate));
	
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_InventorySubsystem::HandleGetInventorySession(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid& Response, FRH_OnInventorySessionUpdateDelegateBlock Delegate)
{
	if (Response.IsSuccessful())
	{
		InventorySession.SessionId = Response.Content.SessionId;
		if (Response.Content.SessionPlatform_IsSet)
		{
			InventorySession.SessionPlatform = Response.Content.SessionPlatform_Optional;
		}
		InventorySession.AppliedDurableLoot = Response.Content.AppliedDurableLoot;
		
		Delegate.ExecuteIfBound(true);
		return;
	}

	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Type::NotFound)
	{
		InventorySession = {};
	}

	Delegate.ExecuteIfBound(false);
}


TArray<FRH_ItemInventory> URH_InventorySubsystem::GetAllCachedInventory() const
{
	return GetCachedInventoryForItems({});
}

TArray<FRH_ItemInventory> URH_InventorySubsystem::GetCachedInventoryForItem(const int32 ItemId) const
{
	return GetCachedInventoryForItems({ ItemId });
}

TArray<FRH_ItemInventory> URH_InventorySubsystem::GetCachedInventoryForItems(const TArray<int32>& ItemIds) const
{
	return GetCachedInventoryForItemsAndTypes(ItemIds, {});
}

TArray<FRH_ItemInventory> URH_InventorySubsystem::GetCachedInventoryForItemsAndTypes(const TArray<int32>& ItemIds, const TArray<ERHAPI_InventoryType>& Types) const
{
	TArray<FRH_ItemInventory> Results;

	if (ItemIds.IsEmpty())
	{
		if (Types.IsEmpty())
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
					if (Types.IsEmpty() || Types.Contains(Inv.InventoryType))
					{
						Results.Emplace(Inv);
					}
				}
			}
		}
	}
	
	return Results;
}

TArray<FRH_ItemInventory> URH_InventorySubsystem::GetCachedInventoryForType(const ERHAPI_InventoryType& Type) const
{
	return GetCachedInventoryForItemsAndTypes({}, {Type});
}

bool URH_InventorySubsystem::GetCachedInventoryForInventoryId(const FGuid& InventoryId, FRH_ItemInventory& Out) const
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

void URH_InventorySubsystem::GetInventory(TArray<int32> ItemIds, const FRH_OnInventoryUpdateDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_GetPlayerInventoryUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	if (!ItemIds.IsEmpty())
	{
		Request.ItemIds = ItemIds;
	}
	
	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory().GetPlayerInventoryUuid(Request,
			RallyHereAPI::FDelegate_GetPlayerInventoryUuid::CreateUObject(
				this, &URH_InventorySubsystem::HandleGetInventory,
				ItemIds, Delegate));
	
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_InventorySubsystem::HandleGetInventory(const RallyHereAPI::FResponse_GetPlayerInventoryUuid& Response,
	const TArray<int32> ItemIds, FRH_OnInventoryUpdateDelegateBlock Delegate)
{
	if (!Response.IsSuccessful())
	{
		Delegate.ExecuteIfBound(false);
	}
	
	//partial item updates
	if (!ItemIds.IsEmpty())
	{
		if (!Response.Content.Inventory_IsSet || !Response.Content.Inventory_Optional.Items_IsSet)
		{
			for(const auto ItemId : ItemIds)
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
			const auto& ItemInventory = Response.Content.Inventory_Optional.Items_Optional.Find(ItemIdAsString);
			if (ItemInventory == nullptr)
			{
				InventoryCache.Remove(ItemId);
			}
			else
			{
				TArray<FRH_ItemInventory>& InventoryForItem = InventoryCache.FindOrAdd(ItemId);
				InventoryForItem.Empty();

				for (const auto& InvEntry : ItemInventory->Records_Optional)
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

	if (!Response.Content.Inventory_IsSet || !Response.Content.Inventory_Optional.Items_IsSet)
	{
		InventoryCache = TMap<int32, TArray<FRH_ItemInventory>>();
		BroadcastOnInventoryCacheUpdated(ItemIds);
		Delegate.ExecuteIfBound(true);
		return;
	}

	// full update
	InventoryCache = TMap<int32, TArray<FRH_ItemInventory>>();
	for (const auto& Entry : Response.Content.Inventory_Optional.Items_Optional)
	{
		if (!Entry.Value.Records_IsSet)
		{
			continue;
		}
		
		int32 ItemId = FCString::Atoi(*Entry.Key);
		TArray<FRH_ItemInventory>& InventoryForItem = InventoryCache.FindOrAdd(ItemId);
		InventoryForItem.Empty();

		for (const auto& InvEntry : Entry.Value.Records_Optional)
		{
			FRH_ItemInventory InventoryEntry = {};
			InventoryEntry.Init(ItemId, InvEntry.Value);
			InventoryForItem.Emplace(InventoryEntry);
		}
	}

	BroadcastOnInventoryCacheUpdated(ItemIds);
	Delegate.ExecuteIfBound(true);
}

void URH_InventorySubsystem::CreateInventory(const TOptional<FGuid> ClientOrderReferenceId, const TArray<FRH_CreateInventory>& CreateInventories, const ERHAPI_Source Source, 
		const FRH_OnInventoryUpdateDelegateBlock& Delegate)
{
	if (CreateInventories.IsEmpty())
	{
		Delegate.ExecuteIfBound(false);
		return;
	}
	
	auto Request = RallyHereAPI::FRequest_CreatePlayerInventoryUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	Request.CreateInventoryRequests.Source_Optional = Source;
	if (ClientOrderReferenceId.IsSet())
	{
		Request.CreateInventoryRequests.ClientOrderRefId_Optional = ClientOrderReferenceId.GetValue();
	}

	for (const auto& CreateInventory : CreateInventories)
	{
		FRHAPI_CreateInventoryRequest Create = {};
		Create.Count_Optional = CreateInventory.Count;
		Create.Count_IsSet = true;
		if (CreateInventory.Expires.IsSet())
		{
			Create.Expires_Optional = CreateInventory.Expires.GetValue();
		}

		
		Create.Type_Optional = CreateInventory.InventoryType;
		Create.Type_IsSet = true;
		Create.ItemId = CreateInventory.ItemId;
		Create.Bucket_Optional = CreateInventory.Bucket;
		Create.Bucket_IsSet = true;
		Create.CustomData_Optional = CreateInventory.CustomData;
		Create.CustomData_IsSet = true;
		Request.CreateInventoryRequests.Inventory.Emplace(Create);
	}
	
	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory().CreatePlayerInventoryUuid(Request,
			RallyHereAPI::FDelegate_CreatePlayerInventoryUuid::CreateUObject(
				this, &URH_InventorySubsystem::HandleCreateInventory, Delegate));
	
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_InventorySubsystem::HandleCreateInventory(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid& Response,
	FRH_OnInventoryUpdateDelegateBlock Delegate)
{
	if (Response.Content.OrderId.IsEmpty())
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		auto* NewOrder = NewObject<URH_PendingOrder>(this);
		NewOrder->Init(Response.Content.OrderId, Delegate);
		PendingOrders.Push(NewOrder);
		return;
	}

	if (!Response.IsSuccessful())
	{
		Delegate.ExecuteIfBound(false);
	}

	Delegate.ExecuteIfBound(true);
}

void URH_InventorySubsystem::UpdateInventory(const TOptional<FGuid> ClientOrderReferenceId, const TArray<FRH_UpdateInventory>& UpdateInventories, const ERHAPI_Source Source, 
		const FRH_OnInventoryUpdateDelegateBlock& Delegate)
{
	if (UpdateInventories.IsEmpty())
	{
		Delegate.ExecuteIfBound(false);
		return;
	}
	
	auto Request = RallyHereAPI::FRequest_ModifyManyPlayerInventoryUuid();

	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	Request.UpdateInventoryRequests.Source_Optional = Source;
	Request.UpdateInventoryRequests.Source_IsSet = true;
	if (ClientOrderReferenceId.IsSet())
	{
		Request.UpdateInventoryRequests.ClientOrderRefId_Optional = ClientOrderReferenceId.GetValue(); 
		Request.UpdateInventoryRequests.ClientOrderRefId_IsSet = true; 
	}

	for (const auto& ModifyInventory : UpdateInventories)
	{
		FRHAPI_UpdateInventoryRequestById Update = {};
		Update.InventoryId = ModifyInventory.InventoryId;
		Update.Count_Optional = ModifyInventory.Count;
		Update.Count_IsSet = true;
		if (ModifyInventory.Expires.IsSet())
		{
			Update.Expires_Optional = ModifyInventory.Expires.GetValue();
			Update.Expires_IsSet = true;
		}
		Update.ItemId_Optional = ModifyInventory.ItemId;
		Update.ItemId_IsSet = true;
		Update.Bucket_Optional = ModifyInventory.Bucket;
		Update.Bucket_IsSet = true;
		Update.CustomData_Optional = ModifyInventory.CustomData;
		Update.CustomData_IsSet = true;
		Request.UpdateInventoryRequests.Inventory.Emplace(Update);
	}
	
	const auto HttpPtr = RH_APIs::GetAPIs().GetInventory().ModifyManyPlayerInventoryUuid(Request,
			RallyHereAPI::FDelegate_ModifyManyPlayerInventoryUuid::CreateUObject(
				this, &URH_InventorySubsystem::HandleUpdateInventory, Delegate));
	
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false);
	}
}

void URH_InventorySubsystem::HandleUpdateInventory(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid& Response,
	FRH_OnInventoryUpdateDelegateBlock Delegate)
{
	if (Response.Content.OrderId.IsEmpty())
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	if (Response.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		auto* NewOrder = NewObject<URH_PendingOrder>(this);
		NewOrder->Init(Response.Content.OrderId, Delegate);
		PendingOrders.Push(NewOrder);
		return;
	}

	if (!Response.IsSuccessful())
	{
		Delegate.ExecuteIfBound(false);
	}

	Delegate.ExecuteIfBound(true);
}

void URH_InventorySubsystem::CheckPollStatus()
{
	if (!ShouldPollInventory())
	{
		// no one is listening, disable polling
		if (InventoryPoller.IsValid())
		{
			InventoryPoller->StopPoll();
		}
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
			InventoryPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_InventorySubsystem::PollInventory), PollTimerName, true);
		}
	}

	if (!ShouldPollPendingInventory())
	{
		// no one is listening, disable polling
		if (PendingInventoryPoller.IsValid())
		{
			PendingInventoryPoller->StopPoll();
		}
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
			PendingInventoryPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_InventorySubsystem::PollPendingInventory), PollTimerName, true);
		}
	}
}

void URH_InventorySubsystem::PollInventory(const FRH_PollCompleteFunc& Delegate)
{
	if (!OrderWatch)
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	OrderWatch->RequestOrders(FRH_GenericSuccessDelegate::CreateLambda([Delegate](bool bSuccess) { Delegate.ExecuteIfBound(bSuccess, true); }));
}


void URH_InventorySubsystem::PollPendingInventory(const FRH_PollCompleteFunc& Delegate)
{
	// if no pending orders remain, stop polling (note - this function is effectively asynchronously recursive!
	if (PendingOrders.Num() <= 0)
	{
		Delegate.ExecuteIfBound(true, false);
		return;
	}

	auto CompletionDelegate = FRH_GenericSuccessDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess)
		{
			if (bSuccess)
			{
				// poll any remaining orders, do not call final completion callback
				PollPendingInventory(Delegate);
			}
			else
			{
				// call final completion delegate and tell it to keep polling as we did not fully clear all pending orders
				Delegate.ExecuteIfBound(false, true);
			}
		});

	// clean any nullptr entries out of the array (they should not exist, but best to be sure)
	PendingOrders.RemoveAll([](const URH_PendingOrder* Value) { return Value == nullptr; });

	// move the current pending order we are about to process to the back of the list before processing.  This ensures we wont get "stuck" on it if there is a fulfillment problem
	auto* Pending = PendingOrders[0];
	PendingOrders.RemoveAt(0);
	PendingOrders.Add(Pending);
	PendingOrders.Last()->RequestOrders(CompletionDelegate);
}

void URH_InventorySubsystem::RedeemPromoCode(const FString& PromoCode, FRH_PromoCodeResultBlock Delegate)
{
	auto Request = TCreateOrder::Request();

	Request.AuthContext = GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, nullptr);
		return;
	}

	Request.PlayerOrderCreate.SetSource(ERHAPI_Source::Client);
	Request.PlayerUuid = GetRHPlayerUuid();
	FRHAPI_PlayerOrderEntryCreate NewOrderEntry;
	NewOrderEntry.Type = ERHAPI_PlayerOrderEntryType::PromotionCode;
	NewOrderEntry.SetExternalTranId(PromoCode);
	NewOrderEntry.Quantity = 1;
	Request.PlayerOrderCreate.Entries.Push(NewOrderEntry);

	if (!TCreateOrder::DoCall(RH_APIs::GetInventoryAPI(), Request, TCreateOrder::Delegate::CreateUObject(this, &URH_InventorySubsystem::RedeemPromoCodeResponse, Delegate, PromoCode)))
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, nullptr);
	}
}

void URH_InventorySubsystem::RedeemPromoCodeResponse(const TCreateOrder::Response& Resp, FRH_PromoCodeResultBlock Delegate, FString PromoCode)
{
	if (Resp.Content.OrderId.IsEmpty())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, nullptr);
		return;
	}

	if (Resp.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		auto* NewOrder = NewObject<URH_PendingOrder>(this);
		NewOrder->Init(Resp.Content.OrderId, PromoCode, Delegate);
		PendingOrders.Push(NewOrder);
		return;
	}

	if (!Resp.IsSuccessful())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, nullptr);
		return;
	}

	URH_PlayerOrderResult* PlayerOrderResult = ParseOrderResult(Resp.Content);
	Delegate.ExecuteIfBound(GetPlayerInfo(), PromoCode, PlayerOrderResult);
}

URH_PlayerOrderResult* URH_InventorySubsystem::ParseOrderResult(const FRHAPI_PlayerOrder& Content)
{
	URH_PlayerOrderResult* OrderResult = NewObject<URH_PlayerOrderResult>(this);

	OrderResult->OrderId = Content.OrderId;
	OrderResult->PlayerUuid = Content.PlayerUuid;
	OrderResult->CreatedTime = Content.CreatedTime;

	Content.GetSource(OrderResult->Source);
	Content.GetClientOrderRefId(OrderResult->ClientOrderRefId);
	Content.GetPortalUserId(OrderResult->PortalUserId);
	Content.GetInstanceId(OrderResult->InstanceId);
	Content.GetMatchId(OrderResult->MatchId);
	Content.GetPortalId(OrderResult->PlatformType);

	for (auto& OrderEntry : Content.Entries)
	{
		if (OrderEntry.Details_IsSet)
		{
			UpdateInventoryFromOrderDetails(OrderEntry.GetDetails());
		}

		auto NewOrderEntry = NewObject<URH_PlayerOrderResultEntry>(this);
		NewOrderEntry->OrderEntryType = OrderEntry.Type;

		if (const auto LootId = OrderEntry.GetLootIdOrNull())
		{
			if (const URH_CatalogSubsystem* CatalogSubsystem = GetCatalogSubsystem())
			{
				NewOrderEntry->VendorItem = CatalogSubsystem->GetVendorItemByLootId(*LootId);
			}
			NewOrderEntry->LootId = OrderEntry.GetLootId();
		}

		NewOrderEntry->Quantity = OrderEntry.Quantity;

		if (const auto PurchasePrice = OrderEntry.GetPurchasePriceOrNull())
		{
			NewOrderEntry->PriceItemId = PurchasePrice->PriceItemId;
			NewOrderEntry->Price = PurchasePrice->Price;
			OrderEntry.GetPurchasePrice().GetPriceCouponItemId(NewOrderEntry->CouponItemId);
		}

		OrderEntry.GetExternalTranId(NewOrderEntry->ExternalTransactionId);
		OrderEntry.GetExternalItemSku(NewOrderEntry->ExternalItemSku);
		OrderEntry.GetPlayerPortalEventId(NewOrderEntry->PlayerPortalEventId);
		OrderEntry.GetInventoryId(NewOrderEntry->InventoryId);
		OrderEntry.GetItemId(NewOrderEntry->ItemId);
		OrderEntry.GetExpires(NewOrderEntry->Expiration);
		OrderEntry.GetCustomData(NewOrderEntry->CustomData);
		OrderEntry.GetResult(NewOrderEntry->Result);

		OrderResult->OrderEntries.Add(NewOrderEntry);
	}

	CachedOrderResults.Add(OrderResult);

	return OrderResult;
}

void URH_InventorySubsystem::UpdateInventoryFromOrderDetails(const TArray<FRHAPI_PlayerOrderDetail>& OrderDetails)
{
	TArray<int32> InventoryCacheUpdates;

	for (auto& OrderDetail : OrderDetails)
	{
		if (const FRHAPI_PlayerInventoryChange* InventoryChangePtr = OrderDetail.GetInvChangeOrNull())
		{
			FRHAPI_PlayerInventoryChange InventoryChange = *InventoryChangePtr;
			int32* BeforeItemIdPtr = InventoryChange.GetBeforeItemIdOrNull();
			int32* AfterItemIdPtr = InventoryChange.GetAfterItemIdOrNull();

			// If we have a before Inventory Record we need to find that entry to modify
			if (BeforeItemIdPtr)
			{
				if (const FRHAPI_InventoryRecord* BeforeRecordPtr = InventoryChange.GetBeforeOrNull())
				{
					TArray<FRH_ItemInventory>* InventoryForItem = InventoryCache.Find(*BeforeItemIdPtr);
					const FRHAPI_InventoryRecord BeforeRecord = *BeforeRecordPtr;

					if (InventoryForItem != nullptr)
					{
						for (auto& InventoryRecord : *InventoryForItem)
						{
							if (InventoryRecord.InventoryId == BeforeRecord.GetInventoryId())
							{
								if (AfterItemIdPtr != nullptr)
								{
									if (const FRHAPI_InventoryRecord* AfterRecordPtr = InventoryChange.GetAfterOrNull())
									{
										InventoryRecord.Init(*AfterItemIdPtr, *AfterRecordPtr);
										InventoryCacheUpdates.AddUnique(*AfterItemIdPtr);
									}

									// If the itemId has changed, move the record in the inventory cache
									if (AfterItemIdPtr == nullptr || (*BeforeItemIdPtr != *AfterItemIdPtr))
									{
										if (AfterItemIdPtr != nullptr)
										{
											TArray<FRH_ItemInventory>* AfterInventoryForItem = InventoryCache.Find(*AfterItemIdPtr);

											if (AfterInventoryForItem)
											{
												AfterInventoryForItem->Push(InventoryRecord);
											}
											else
											{
												InventoryCache.Add(*AfterItemIdPtr, TArray<FRH_ItemInventory>({ InventoryRecord }));
											}
										}

										InventoryForItem->Remove(InventoryRecord);
										InventoryCacheUpdates.AddUnique(*BeforeItemIdPtr);
									}
								}
								break;
							}
						}
					}
				}
			}
			else if (AfterItemIdPtr != nullptr)
			{
				if (const FRHAPI_InventoryRecord* AfterRecordPtr = InventoryChange.GetAfterOrNull())
				{
					FRH_ItemInventory NewInventoryItem;

					NewInventoryItem.Init(*AfterItemIdPtr, *AfterRecordPtr);

					TArray<FRH_ItemInventory>* InventoryForItem = InventoryCache.Find(*AfterItemIdPtr);

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

	if (InventoryCacheUpdates.Num())
	{ 
		BroadcastOnInventoryCacheUpdated(InventoryCacheUpdates);
	}
}

void URH_InventorySubsystem::CreatePlayerOrder(TSharedPtr<RallyHereAPI::FAuthContext> InAuthContext, ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, TArray<URH_PlayerOrderEntry*> OrderEntries, FRH_OrderResultBlock Delegate)
{
	auto Request = TCreateOrder::Request();

	Request.AuthContext = InAuthContext;

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, nullptr);
		return;
	}

	// #RHTODO: Expose or remove PlayerOrderCreate.ClientOrderRefId
	Request.PlayerOrderCreate.SetSource(OrderSource);
	Request.PlayerUuid = GetRHPlayerUuid();
	WriteOrderEntries(Request.PlayerOrderCreate.Entries, OrderEntries, FillType);

	if (Request.PlayerOrderCreate.Entries.Num() == 0)
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, nullptr);
		return;
	}

	if (!TCreateOrder::DoCall(RH_APIs::GetInventoryAPI(), Request, TCreateOrder::Delegate::CreateUObject(this, &URH_InventorySubsystem::CreatePlayerOrderResponse, Delegate, OrderEntries)))
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, nullptr);
	}
}

void URH_InventorySubsystem::WriteOrderEntries(TArray<FRHAPI_PlayerOrderEntryCreate>& Entries, TArray<URH_PlayerOrderEntry*> OrderEntries, ERHAPI_PlayerOrderEntryType FillType)
{
	for (const auto& OrderEntry : OrderEntries)
	{
		if (OrderEntry->GetVendorItem() != nullptr || OrderEntry->GetLootId() > 0)
		{
			FRHAPI_PlayerOrderEntryCreate NewOrderEntry;
			NewOrderEntry.Type = FillType;
			NewOrderEntry.SetLootId(OrderEntry->GetVendorItem() != nullptr ? OrderEntry->GetVendorItem()->GetLootId() : OrderEntry->GetLootId());
			NewOrderEntry.Quantity = OrderEntry->GetQuantity();
			NewOrderEntry.SetExternalTranId(OrderEntry->GetExternalTransactionId());

			if (FillType == ERHAPI_PlayerOrderEntryType::PurchaseLoot)
			{
				if (OrderEntry->GetVendorItem() != nullptr && OrderEntry->GetVendorItem()->GetParentVendor() != nullptr && OrderEntry->GetPriceItemId() >= 0)
				{
					NewOrderEntry.SetVendorEtag(OrderEntry->GetVendorItem()->GetParentVendor()->ETag);

					FRHAPI_PurchasePrice NewPurchasePrice;
					NewPurchasePrice.PriceItemId = OrderEntry->GetPriceItemId();
					NewPurchasePrice.Price = OrderEntry->GetPrice();
					NewPurchasePrice.SetPriceCouponItemId(OrderEntry->GetCouponItemId());

					NewOrderEntry.SetPurchasePrice(NewPurchasePrice);
				}
				else
				{
					continue;
				}
			}

			Entries.Push(NewOrderEntry);
		}
	}
}

void URH_InventorySubsystem::CreatePlayerOrderResponse(const TCreateOrder::Response& Resp, FRH_OrderResultBlock Delegate, TArray<URH_PlayerOrderEntry*> OrderEntries)
{
	if (Resp.Content.OrderId.IsEmpty())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, nullptr);
		return;
	}

	if (Resp.GetHttpResponseCode() == EHttpResponseCodes::Accepted)
	{
		auto* NewOrder = NewObject<URH_PendingOrder>(this);
		NewOrder->Init(Resp.Content.OrderId, OrderEntries, Delegate);
		PendingOrders.Push(NewOrder);
		return;
	}

	if (!Resp.IsSuccessful())
	{
		Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, nullptr);
		return;
	}

	URH_PlayerOrderResult* PlayerOrderResult = ParseOrderResult(Resp.Content);
	Delegate.ExecuteIfBound(GetPlayerInfo(), OrderEntries, PlayerOrderResult);
}

void URH_InventorySubsystem::ClearPendingOrder(URH_PlayerOrderResult* OrderResult)
{
	if (PendingOrders.Num() && OrderResult != nullptr)
	{
		for (int32 i = PendingOrders.Num() - 1; i >= 0; --i)
		{
			if (PendingOrders[i] != nullptr &&
				PendingOrders[i]->OrderId == OrderResult->OrderId &&
				PendingOrders[i]->GetInventorySubsystem()->GetRHPlayerUuid() == OrderResult->PlayerUuid)
			{
				PendingOrders.RemoveAt(i);
				return;
			}
		}
	}
}

void URH_InventorySubsystem::SetOrderWatch(FRH_OrderDetailsBlock Delegate)
{
	if (OrderWatch == nullptr)
	{
		OrderWatch = NewObject<URH_PlayerOrderWatch>(this);
	}

	OrderWatch->Delegates.Add(Delegate);
}

void URH_InventorySubsystem::ClearOrderWatch(FRH_OrderDetailsBlock Delegate)
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

URH_CatalogSubsystem* URH_InventorySubsystem::GetCatalogSubsystem()
{
	if (const URH_PlayerInfoSubsystem* PSS = GetPlayerInfo()->GetPlayerInfoSubsystem())
	{
		if (const URH_GameInstanceSubsystem* RHGI = PSS->GetGameInstanceSubsystem())
		{
			return RHGI->GetCatalogSubsystem();
		}
	}

	return nullptr;
}

///

URH_InventorySubsystem* URH_PlayerOrderWatch::GetInventorySubsystem() const
{
	return CastChecked<URH_InventorySubsystem>(GetOuter());
}


bool URH_PlayerOrderWatch::RequestOrders(FRH_GenericSuccessBlock Delegate)
{
	auto* InventorySubsystem = GetInventorySubsystem();
	if (!InventorySubsystem)
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	auto Request = TGetOrders::Request();

	Request.AuthContext = InventorySubsystem->GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	Request.PlayerUuid = InventorySubsystem->GetRHPlayerUuid();
	// #RHTODO: Do we want to make the first request without a cursor timed to the players initial login?
	Request.Cursor = Cursor;
	Request.Limit = 10; // #RHTODO: Expose this as a parameter? 

	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetOrders>>(
		TGetOrders::Delegate::CreateUObject(this, &URH_PlayerOrderWatch::RequestOrdersResponse),
		Delegate
	);

	Helper->Start(RH_APIs::GetInventoryAPI(), Request);
	return true;
}

void URH_PlayerOrderWatch::RequestOrdersResponse(const TGetOrders::Response& Resp)
{
	if (Resp.IsSuccessful())
	{
		Resp.Content.Page.GetCursor(Cursor);

		if (const auto Data = Resp.Content.GetDataOrNull())
		{
			auto* InventorySubsystem = GetInventorySubsystem();
			if (InventorySubsystem != nullptr)
			{
				TArray<URH_PlayerOrderResult*> OrderDetails;

				for (const auto& Order : *Data)
				{
					if (URH_PlayerOrderResult* PlayerOrderResult = InventorySubsystem->ParseOrderResult(Order))
					{
						OrderDetails.Add(PlayerOrderResult);
					}
				}

				if (OrderDetails.Num())
				{
					for (const auto& Delegate : Delegates)
					{
						Delegate.ExecuteIfBound(OrderDetails);
					}
				}
			}
		}
	}
}

///

URH_PendingOrder::URH_PendingOrder(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, OrderId(TEXT(""))
	, PromoCode(TEXT(""))
	, LastPollTime(FDateTime::MinValue())
	, OrderResultDelegate(FRH_OrderResultBlock())
	, InventoryUpdateDelegate(FRH_OnInventoryUpdateDelegateBlock())
	, PromoCodeResultsDelegate(FRH_PromoCodeResultBlock())
	, bHasActiveOrderRequest(false)
{
}

URH_InventorySubsystem* URH_PendingOrder::GetInventorySubsystem() const
{
	return CastChecked<URH_InventorySubsystem>(GetOuter());
}

bool URH_PendingOrder::RequestOrders(FRH_GenericSuccessBlock Delegate)
{
	auto* InventorySubsystem = GetInventorySubsystem();
	if (!InventorySubsystem)
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	auto Request = TGetOrderById::Request();

	Request.AuthContext = InventorySubsystem->GetAuthContext();

	if (!Request.AuthContext.IsValid())
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	Request.PlayerUuid = InventorySubsystem->GetRHPlayerUuid();
	Request.OrderId = OrderId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetOrderById>>(
		TGetOrderById::Delegate::CreateUObject(this, &URH_PendingOrder::RequestOrdersResponse),
		Delegate
	);

	Helper->Start(RH_APIs::GetInventoryAPI(), Request);

	return true;
}

void URH_PendingOrder::RequestOrdersResponse(const TGetOrderById::Response& Resp)
{
	bHasActiveOrderRequest = false;
	LastPollTime = FDateTime::UtcNow();

	auto* InventorySubsystem = GetInventorySubsystem();

	if (Resp.IsSuccessful() && InventorySubsystem != nullptr)
	{
		URH_PlayerOrderResult* PlayerOrderResult = InventorySubsystem->ParseOrderResult(Resp.Content);

		// Only one of these will be setup so just try to fire both, if we end up with more types we may want to make this smarter
		OrderResultDelegate.ExecuteIfBound(InventorySubsystem->GetPlayerInfo(), OrderEntries, PlayerOrderResult);
		PromoCodeResultsDelegate.ExecuteIfBound(InventorySubsystem->GetPlayerInfo(), PromoCode, PlayerOrderResult);
		InventoryUpdateDelegate.ExecuteIfBound(true);
		InventorySubsystem->ClearPendingOrder(PlayerOrderResult);
	}
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

FString URH_InventoryBlueprintLibrary::FindCustomDataOnItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key)
{
	return ItemInventory.FindCustomDataWithKey(Key);
}

bool URH_InventoryBlueprintLibrary::InitCreateInventoryWithItemInventoryValues(FRH_CreateInventory CreateInventory, FRH_ItemInventory& ItemInventory)
{
	return CreateInventory.InitFromItemInventory(ItemInventory);
}

bool URH_InventoryBlueprintLibrary::InitUpdateInventoryWithItemInventoryValues(FRH_UpdateInventory UpdateInventory, FRH_ItemInventory& ItemInventory)
{
	return UpdateInventory.InitFromItemInventory(ItemInventory);
}