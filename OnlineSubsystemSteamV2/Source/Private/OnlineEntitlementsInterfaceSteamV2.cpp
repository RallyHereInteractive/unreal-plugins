#include "OnlineEntitlementsInterfaceSteamV2.h"

#include <vector>
#include <string>

#include "Interfaces/OnlineIdentityInterface.h"
#include "OnlineStoreInterfaceSteamV2.h"
#include "OnlineSubsystemSteamV2.h"
#include "OnlineError.h"
#include "OnlineAsyncTaskManagerSteamV2.h"

namespace
{
	/**
	 *	Async task to load inventory item prices in the local user's currency.
	 */
	class FOnlineAsyncTaskSteamGetAllUserInventory : public FOnlineAsyncTaskSteam
	{
	public:
		enum EGetAllUserInventoryState
		{
			Startup,
			GrantPromoItems,
			GetAllInventory,
		};

	private:

		/** Has this task been initialized yet */
		EGetAllUserInventoryState State;
		/** Returned results from Steam */
		SteamInventoryResult_t CallbackResults;
		TArray<TSharedRef<FOnlineEntitlementSteam>> UserEntitlements;
		TSharedRef<const FUniqueNetId> UserId;
		FString Namespace;

	public:
		FOnlineAsyncTaskSteamGetAllUserInventory(FOnlineSubsystemSteamV2* InSteamSubsystem, TSharedRef<const FUniqueNetId> InUserId, FString InNamespace) :
			FOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
			State{ EGetAllUserInventoryState::Startup },
			CallbackResults{ k_SteamInventoryResultInvalid },
			UserEntitlements{},
			UserId{ InUserId },
			Namespace{ InNamespace }
		{
		}

		/**
		 *	Get a human readable description of task
		 */
		FString ToString() const override
		{
			return FString::Printf(TEXT("FOnlineAsyncTaskSteamGetAllUserInventory bWasSuccessful: %d"), WasSuccessful());
		}

		FString GetStateName()
		{
			switch (State)
			{
			case EGetAllUserInventoryState::Startup:
				return TEXT("Startup");
			case EGetAllUserInventoryState::GrantPromoItems:
				return TEXT("GrantPromoItems");
			case EGetAllUserInventoryState::GetAllInventory:
				return TEXT("GetAllInventory");
			default:
				return TEXT("Unknown");
			}
		}

		/**
		 * Give the async task time to do its work
		 * Can only be called on the async task manager thread
		 */
		virtual void Tick() override
		{
			const auto resultStatus = CallbackResults != k_SteamInventoryResultInvalid ? SteamInventory()->GetResultStatus(CallbackResults) : k_EResultOK;
			switch (resultStatus)
			{
			case k_EResultPending:  // Still in progress
				return;
			case k_EResultExpired: // Done, result ready, maybe out of date(see DeserializeResult)
				UE_LOG_ONLINE_ENTITLEMENT(Log, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - %s Complete - results may be out of date."), *GetStateName());
				CompleteState();
				break;
			case k_EResultOK: // Done, the request has completed successfully and the result is ready.
				UE_LOG_ONLINE_ENTITLEMENT(Log, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - %s Complete"), *GetStateName());
				CompleteState();
				break;
			case k_EResultInvalidParam: // ERROR: Invalid API call parameters.
			case k_EResultServiceUnavailable: // ERROR: Service temporarily down, you may retry later.
			case k_EResultLimitExceeded: // ERROR: Operation would exceed per - user inventory limits.
			case k_EResultFail:
			default:
				UE_LOG_ONLINE_ENTITLEMENT(Log, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - %s error %d."), *GetStateName(), resultStatus);
				bWasSuccessful = false;
				bIsComplete = true;
				break;
			}
		}

		void CompleteState()
		{
			switch (State)
			{
			case EGetAllUserInventoryState::Startup:
				if (SteamInventory()->GrantPromoItems(&CallbackResults))
				{
					State = EGetAllUserInventoryState::GrantPromoItems;
				}
				else
				{
					bWasSuccessful = false;
					bIsComplete = true;
				}
				break;
			case EGetAllUserInventoryState::GrantPromoItems:
				SteamInventory()->DestroyResult(CallbackResults); // Cleanup leftover data from the grant promo items call

				if (SteamInventory()->GetAllItems(&CallbackResults))
				{
					State = EGetAllUserInventoryState::GetAllInventory;
				}
				else
				{
					bWasSuccessful = false;
					bIsComplete = true;
				}
				break;
			case EGetAllUserInventoryState::GetAllInventory:
				bWasSuccessful = BuildUserEntitlementsFromCallbackResults();
				SteamInventory()->DestroyResult(CallbackResults);
				bIsComplete = true;
				break;
			}
		}

		bool BuildUserEntitlementsFromCallbackResults()
		{
			TArray<SteamItemDetails_t> steamEntitlements;
			uint32 count = 0;
			if (!SteamInventory()->GetResultItems(CallbackResults, nullptr, &count))
			{
				return false;
			}

			if (count == 0)
			{
				return true;
			}

			steamEntitlements.SetNumUninitialized(count);
			if (!SteamInventory()->GetResultItems(CallbackResults, steamEntitlements.GetData(), &count))
			{
				return false;
			}

			for (const auto& steamEnt : steamEntitlements)
			{
				auto entRef = UserEntitlements.Add_GetRef(MakeShared<FOnlineEntitlementSteam>());
				entRef->Id = FromSteamItemInstanceId(steamEnt.m_itemId);
				entRef->ItemId = FromSteamItemDefId(steamEnt.m_iDefinition);
				entRef->SteamItemFlags = steamEnt.m_unFlags;
				entRef->RemainingCount = steamEnt.m_unQuantity;
				UE_LOG_ONLINE_ENTITLEMENT(Verbose, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - Entitlement %s - SKU %s - Count %d - Flags %d"), *entRef->Id, *entRef->ItemId, entRef->RemainingCount, entRef->SteamItemFlags);
			}
			return true;
		}

		/**
		 * Give the async task a chance to marshal its data back to the game thread
		 * Can only be called on the game thread by the async task manager
		 */
		virtual void Finalize() override
		{
			FOnlineAsyncTaskSteam::Finalize();

			auto Interface = StaticCastSharedPtr<FOnlineEntitlementsSteam>(Subsystem->GetEntitlementsInterface());
			Interface->OnUserEntitlementUpdate(bWasSuccessful, UserId, Namespace, std::move(UserEntitlements));
		}

		/**
		 *	Async task is given a chance to trigger its delegates
		 */
		virtual void TriggerDelegates() override
		{
			FOnlineAsyncTaskSteam::TriggerDelegates();

			auto Interface = StaticCastSharedPtr<FOnlineEntitlementsSteam>(Subsystem->GetEntitlementsInterface());
			Interface->TriggerOnQueryEntitlementsCompleteDelegates(bWasSuccessful, *UserId, Namespace, TEXT(""));
		}
	};
}

SteamItemDef_t FOnlineEntitlementSteam::GetItemDefinitionID() const
{
	return ToSteamItemDefId(ItemId);
}

SteamItemInstanceID_t FOnlineEntitlementSteam::GetItemInstanceID() const
{
	return ToSteamItemInstanceId(Id);
}

bool FOnlineEntitlementSteam::IsNoTrade() const
{
	return (SteamItemFlags & ESteamItemFlags::k_ESteamItemNoTrade) != 0;
}

bool FOnlineEntitlementSteam::IsRemoved() const
{
	return (SteamItemFlags & ESteamItemFlags::k_ESteamItemRemoved) != 0;
}

bool FOnlineEntitlementSteam::IsConsumed() const
{
	return (SteamItemFlags & ESteamItemFlags::k_ESteamItemConsumed) != 0;
}

FOnlineEntitlementsSteam::FOnlineEntitlementsSteam(FOnlineSubsystemSteamV2* InSubsystem)
	: Subsystem(InSubsystem)
{
	check(Subsystem);
}

FOnlineEntitlementsSteam::~FOnlineEntitlementsSteam()
{
}

TSharedPtr<FOnlineEntitlement> FOnlineEntitlementsSteam::GetEntitlement(const FUniqueNetId& UserId, const FUniqueEntitlementId& EntitlementId)
{
	auto EntList = CachedEntitlements.Find(UserId.AsShared());
	if (!EntList)
	{
		return nullptr;
	}

	for (auto& namespacedEntitlements : *EntList)
	{
		auto Ent = namespacedEntitlements.Value.FindByPredicate([&EntitlementId](const TSharedRef<FOnlineEntitlement>& Ent) {
			return Ent->Id == EntitlementId;
			});

		if (Ent)
		{
			return *Ent;
		}
	}

	return nullptr;
}

TSharedPtr<FOnlineEntitlement> FOnlineEntitlementsSteam::GetItemEntitlement(const FUniqueNetId& UserId, const FString& ItemId)
{
	auto EntList = CachedEntitlements.Find(UserId.AsShared());
	if (!EntList)
	{
		return nullptr;
	}

	for (auto& namespacedEntitlements : *EntList)
	{
		auto Ent = namespacedEntitlements.Value.FindByPredicate([&ItemId](const TSharedRef<FOnlineEntitlement>& Ent) {
			return Ent->ItemId == ItemId;
			});

		if (Ent)
		{
			return *Ent;
		}
	}

	return nullptr;
}

void FOnlineEntitlementsSteam::GetAllEntitlements(const FUniqueNetId& UserId, const FString& Namespace, TArray<TSharedRef<FOnlineEntitlement>>& OutUserEntitlements)
{
	if (auto NSEntList = CachedEntitlements.Find(UserId.AsShared()))
	{
		if (auto EntList = NSEntList->Find(Namespace))
		{
			OutUserEntitlements.Append(*EntList);
		}
	}
}

bool FOnlineEntitlementsSteam::QueryEntitlements(const FUniqueNetId& UserId, const FString& Namespace, const FPagedQuery& Page)
{
	if (!UserId.IsValid())
	{
		TriggerOnQueryEntitlementsCompleteDelegates(false, UserId, Namespace, TEXT("User Id is not valid"));
		return false;
	}

	auto LocalPlayerId = Subsystem->GetIdentityInterface()->GetUniquePlayerId(0);
	if (UserId != *LocalPlayerId)
	{
		TriggerOnQueryEntitlementsCompleteDelegates(false, UserId, Namespace, TEXT("Steam can only query the local user"));
		return false;
	}

	if (UserId.GetType() != LocalPlayerId->GetType())
	{
		TriggerOnQueryEntitlementsCompleteDelegates(false, UserId, Namespace, TEXT("User Id type is not supported by Steam"));
		return false;
	}

	auto sharedUserId = UserId.AsShared();
	ClearCachedEntitlements(sharedUserId, Namespace);
	Subsystem->QueueAsyncTask(new FOnlineAsyncTaskSteamGetAllUserInventory(Subsystem, sharedUserId, Namespace));
	return true;
}

void FOnlineEntitlementsSteam::OnUserEntitlementUpdate(bool bSuccess, TSharedRef<const FUniqueNetId> UserId, const FString& Namespace, TArray<TSharedRef<FOnlineEntitlementSteam>> NewEnts)
{
	if (bSuccess)
	{
		CachedEntitlements.FindOrAdd(UserId).FindOrAdd(Namespace) = std::move(NewEnts);
	}
}

void FOnlineEntitlementsSteam::ClearCachedEntitlements(const TSharedRef<const FUniqueNetId>& UserId, const FString& Namespace)
{
	if (auto NSEnts = CachedEntitlements.Find(UserId))
	{
		NSEnts->Remove(Namespace);
		if (NSEnts->Num() == 0)
		{
			CachedEntitlements.Remove(UserId);
		}
	}
}

FString FromSteamItemDefId(SteamItemDef_t itemDefId)
{
	return FString::FromInt(itemDefId);
}

SteamItemDef_t ToSteamItemDefId(const FString& offerId)
{
	return FCString::Atoi(*offerId);
}

FString FromSteamItemInstanceId(SteamItemInstanceID_t itemInstanceId)
{
	return FString::Printf(TEXT("%llu"), itemInstanceId);
}

SteamItemInstanceID_t ToSteamItemInstanceId(const FString& entitlementId)
{
	return FCString::Strtoui64(*entitlementId, nullptr, 10);
}
