#include "OnlineSubsystemSteamV2.h"
#include "Misc/App.h"
#include "HAL/RunnableThread.h"
#include "CoreMinimal.h"

#include "OnlineSubsystemSteam.h"
#include "OnlinePurchaseInterfaceSteamV2.h"
#include "OnlineStoreInterfaceSteamV2.h"
#include "OnlineEntitlementsInterfaceSteamV2.h"

IOnlineSessionPtr FOnlineSubsystemSteamV2::GetSessionInterface() const
{
	if (SteamSubsystem) 
	{
		return SteamSubsystem->GetSessionInterface();
	}

	return nullptr;
}

IOnlineFriendsPtr FOnlineSubsystemSteamV2::GetFriendsInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetFriendsInterface();
	}

	return nullptr;
}

IOnlinePartyPtr FOnlineSubsystemSteamV2::GetPartyInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetPartyInterface();
	}

	return nullptr;
}

IOnlineGroupsPtr FOnlineSubsystemSteamV2::GetGroupsInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetGroupsInterface();
	}

	return nullptr;
}

IOnlineSharedCloudPtr FOnlineSubsystemSteamV2::GetSharedCloudInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetSharedCloudInterface();
	}

	return nullptr;
}

IOnlineUserCloudPtr FOnlineSubsystemSteamV2::GetUserCloudInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetUserCloudInterface();
	}

	return nullptr;
}

IOnlineLeaderboardsPtr FOnlineSubsystemSteamV2::GetLeaderboardsInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetLeaderboardsInterface();
	}

	return nullptr;
}

IOnlineVoicePtr FOnlineSubsystemSteamV2::GetVoiceInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetVoiceInterface();
	}

	return nullptr;
}

IOnlineExternalUIPtr FOnlineSubsystemSteamV2::GetExternalUIInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetExternalUIInterface();
	}

	return nullptr;
}

IOnlineTimePtr FOnlineSubsystemSteamV2::GetTimeInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetTimeInterface();
	}

	return nullptr;
}

IOnlineIdentityPtr FOnlineSubsystemSteamV2::GetIdentityInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetIdentityInterface();
	}

	return nullptr;
}

IOnlineTitleFilePtr FOnlineSubsystemSteamV2::GetTitleFileInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetTitleFileInterface();
	}

	return nullptr;
}

IOnlineEntitlementsPtr FOnlineSubsystemSteamV2::GetEntitlementsInterface() const
{
	return EntitlementsInterface;
}

IOnlineStoreV2Ptr FOnlineSubsystemSteamV2::GetStoreV2Interface() const
{
	return StoreInterface;
}

IOnlinePurchasePtr FOnlineSubsystemSteamV2::GetPurchaseInterface() const
{
	return PurchaseInterface;
}

IOnlineEventsPtr FOnlineSubsystemSteamV2::GetEventsInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetEventsInterface();
	}

	return nullptr;
}

IOnlineAchievementsPtr FOnlineSubsystemSteamV2::GetAchievementsInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetAchievementsInterface();
	}

	return nullptr;
}

IOnlineSharingPtr FOnlineSubsystemSteamV2::GetSharingInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetSharingInterface();
	}

	return nullptr;
}

IOnlineUserPtr FOnlineSubsystemSteamV2::GetUserInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetUserInterface();
	}

	return nullptr;
}

IOnlineMessagePtr FOnlineSubsystemSteamV2::GetMessageInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetMessageInterface();
	}

	return nullptr;
}

IOnlinePresencePtr FOnlineSubsystemSteamV2::GetPresenceInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetPresenceInterface();
	}

	return nullptr;
}

IOnlineChatPtr FOnlineSubsystemSteamV2::GetChatInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetChatInterface();
	}

	return nullptr;
}

IOnlineStatsPtr FOnlineSubsystemSteamV2::GetStatsInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetStatsInterface();
	}

	return nullptr;
}

IOnlineTurnBasedPtr FOnlineSubsystemSteamV2::GetTurnBasedInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetTurnBasedInterface();
	}

	return nullptr;
}

IOnlineTournamentPtr FOnlineSubsystemSteamV2::GetTournamentInterface() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetTournamentInterface();
	}

	return nullptr;
}

void FOnlineSubsystemSteamV2::QueueAsyncTask(FOnlineAsyncTask* AsyncTask)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToInQueue(AsyncTask);
}

bool FOnlineSubsystemSteamV2::Init()
{
	const bool bIsServer = IsRunningDedicatedServer();

	SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));

	if (SteamSubsystem == nullptr || !SteamSubsystem->IsEnabled())
	{
		UE_LOG_ONLINE(Warning, TEXT("Internal Steam Subsystem not initialized, unable to create SteamV2 online subsystem"));
		return false;
	}

	if (!bIsServer)
	{
		PurchaseInterface = MakeShareable(new FOnlinePurchaseSteam(this));
		StoreInterface = MakeShareable(new FOnlineStoreSteam(this));
		EntitlementsInterface = MakeShareable(new FOnlineEntitlementsSteam(this));
	}

	// Create the online async task thread, assume the Steam Subsystem connected
	OnlineAsyncTaskThreadRunnable = new FOnlineAsyncTaskManagerSteamV2(this);
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThread = FRunnableThread::Create(OnlineAsyncTaskThreadRunnable, *FString::Printf(TEXT("OnlineAsyncTaskThreadSteam %s"), *InstanceName.ToString()), 128 * 1024, TPri_Normal);

	UE_LOG_ONLINE(Log, TEXT("Init complete"));
	return true;
}

bool FOnlineSubsystemSteamV2::Shutdown()
{
	FOnlineSubsystemImpl::Shutdown();

	if (OnlineAsyncTaskThread)
	{
		// Destroy the online async task thread
		delete OnlineAsyncTaskThread;
		OnlineAsyncTaskThread = nullptr;
	}

	if (OnlineAsyncTaskThreadRunnable)
	{
		delete OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThreadRunnable = nullptr;
	}

#define DESTRUCT_INTERFACE(Interface) \
	if (Interface.IsValid()) \
	{ \
		ensure(Interface.IsUnique()); \
		Interface = nullptr; \
	}

	// Destruct the interfaces
	DESTRUCT_INTERFACE(PurchaseInterface);
	DESTRUCT_INTERFACE(StoreInterface);
	DESTRUCT_INTERFACE(EntitlementsInterface);

	UE_LOG_ONLINE(Log, TEXT("Shutdown Complete"));
	return true;
}

bool FOnlineSubsystemSteamV2::Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	if (FOnlineSubsystemImpl::Exec(InWorld, Cmd, Ar))
	{
		return true;
	}

	return false;
}

bool FOnlineSubsystemSteamV2::IsEnabled() const
{
	return FOnlineSubsystemImpl::IsEnabled();
}

FString FOnlineSubsystemSteamV2::GetAppId() const
{
	if (SteamSubsystem)
	{
		return SteamSubsystem->GetAppId();
	}

	return "";
}

FText FOnlineSubsystemSteamV2::GetOnlineServiceName() const
{
	return NSLOCTEXT("OnlineSubsystemSteamV2", "OnlineServiceName", "SteamV2");
}

bool FOnlineSubsystemSteamV2::Tick(float DeltaTime)
{
	if (!FOnlineSubsystemImpl::Tick(DeltaTime))
	{
		return false;
	}

	if (OnlineAsyncTaskThreadRunnable)
	{
		OnlineAsyncTaskThreadRunnable->GameTick();
	}

	if (PurchaseInterface.IsValid())
	{
		PurchaseInterface->Tick(DeltaTime);
	}

	return true;
}
