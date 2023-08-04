#include "OnlineAsyncTaskManagerSteamV2.h"
#include "OnlineSubsystemSteamV2.h"
#include "OnlineStoreInterfaceSteamV2.h"
#include "OnlinePurchaseInterfaceSteamV2.h"

void FOnlineAsyncTaskManagerSteamV2::OnlineTick()
{
	check(SteamSubsystem);
	check(FPlatformTLS::GetCurrentThreadId() == OnlineThreadId);

	/* The following are handled by the embedded SteamV1 integration.  Ticking them here when the integration is not wholy-owned by this subsystem makes it subject to race conditions with the SteamV1 interface
	if (SteamSubsystem->IsSteamClientAvailable())
	{
		SteamAPI_RunCallbacks();
	}

	if (SteamSubsystem->IsSteamServerAvailable())
	{
		SteamGameServer_RunCallbacks();
	}
	*/
}

class FOnlineAsyncEventSteamInventoryDefinitionUpdate : public FOnlineAsyncEvent<FOnlineSubsystemSteamV2>
{
	FOnlineAsyncEventSteamInventoryDefinitionUpdate() :
		FOnlineAsyncEvent(NULL)
	{
	}

public:

	FOnlineAsyncEventSteamInventoryDefinitionUpdate(FOnlineSubsystemSteamV2* InSubsystem) :
		FOnlineAsyncEvent(InSubsystem)
	{
	}

	/**
	 * Get a human readable description of task
	 */
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncEventSteamInventoryDefinitionUpdate got new information"));
	}

	/**
	 * Give the async task a chance to marshal its data back to the game thread
	 * Can only be called on the game thread by the async task manager
	 */
	virtual void Finalize() override
	{
		if (auto StoreInterface = StaticCastSharedPtr<FOnlineStoreSteam>(Subsystem->GetStoreV2Interface()))
		{
			StoreInterface->UpdateInventoryDefinitions();
		}
	}
};

void FOnlineAsyncTaskManagerSteamV2::OnInventoryDefinitionUpdate(SteamInventoryDefinitionUpdate_t* CallbackData)
{
	auto* NewEvent = new FOnlineAsyncEventSteamInventoryDefinitionUpdate(SteamSubsystem);
	UE_LOG_ONLINE(Verbose, TEXT("%s"), *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

class FOnlineAsyncEventSteamInventoryResultReady : public FOnlineAsyncEvent<FOnlineSubsystemSteamV2>
{
	FOnlineAsyncEventSteamInventoryResultReady() :
		FOnlineAsyncEvent(NULL)
	{
	}

public:

	FOnlineAsyncEventSteamInventoryResultReady(FOnlineSubsystemSteamV2* InSubsystem) :
		FOnlineAsyncEvent(InSubsystem)
	{
	}

	/**
	 * Get a human readable description of task
	 */
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncEventSteamInventoryResultReady got new information"));
	}

	/**
	 * Give the async task a chance to marshal its data back to the game thread
	 * Can only be called on the game thread by the async task manager
	 */
	virtual void Finalize() override
	{
		if (auto Purchase = StaticCastSharedPtr<FOnlinePurchaseSteam>(Subsystem->GetPurchaseInterface()))
		{
			// Unfortunately, steam does not provide any means of associating "you got stuff" back to the initial purchase directly.
			// So we just assume if we got here and there are purchases, they have been successful.
			Purchase->MarkPurchasesAsSuccessful();
		}
	}
};

void FOnlineAsyncTaskManagerSteamV2::OnInventoryResultReady(SteamInventoryResultReady_t* CallbackData)
{
	auto* NewEvent = new FOnlineAsyncEventSteamInventoryResultReady(SteamSubsystem);
	UE_LOG_ONLINE(Verbose, TEXT("%s"), *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}