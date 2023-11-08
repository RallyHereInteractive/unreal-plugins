// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemImpl.h"
#include "OnlineSubsystemSteam.h"
#include "OnlineAsyncTaskManagerSteamV2.h"
#include "OnlineSubsystemSteamV2Names.h"
#include "OnlineSubsystemSteamV2Package.h"

class FOnlinePurchaseSteam;
class FOnlineStoreSteam;
class FOnlineEntitlementsSteam;

typedef TSharedPtr<class FOnlinePurchaseSteam, ESPMode::ThreadSafe> FOnlinePurchaseSteamPtr;
typedef TSharedPtr<class FOnlineStoreSteam, ESPMode::ThreadSafe> FOnlineStoreSteamPtr;
typedef TSharedPtr<class FOnlineEntitlementsSteam, ESPMode::ThreadSafe> FOnlineEntitlementsSteamPtr;

/**
 *	OnlineSubsystemSteamV2 - Implementation of the online subsystem for extended Steam services
 */
class ONLINESUBSYSTEMSTEAMV2_API FOnlineSubsystemSteamV2 : public FOnlineSubsystemImpl
{
protected:

	FOnlinePurchaseSteamPtr PurchaseInterface;
	FOnlineStoreSteamPtr StoreInterface;
	FOnlineEntitlementsSteamPtr EntitlementsInterface;

	FOnlineSubsystemSteam* SteamSubsystem;

PACKAGE_SCOPE:

	/** Only the factory makes instances */
	FOnlineSubsystemSteamV2() = delete;
	FOnlineSubsystemSteamV2(FName InInstanceName) :
		FOnlineSubsystemImpl(STEAMV2_SUBSYSTEM, InInstanceName),
		PurchaseInterface(nullptr),
		StoreInterface(nullptr),
		EntitlementsInterface(nullptr),
		SteamSubsystem(nullptr),
		OnlineAsyncTaskThreadRunnable(nullptr),
		OnlineAsyncTaskThread(nullptr)
	{}

	void QueueAsyncTask(class FOnlineAsyncTask* AsyncTask);

	/** Online async task runnable */
	class FOnlineAsyncTaskManagerSteamV2* OnlineAsyncTaskThreadRunnable;

	/** Online async task thread */
	class FRunnableThread* OnlineAsyncTaskThread;

public:

	virtual ~FOnlineSubsystemSteamV2()
	{
		Shutdown();
	}

	// IOnlineSubsystem

	virtual IOnlineSessionPtr GetSessionInterface() const override;
	virtual IOnlineFriendsPtr GetFriendsInterface() const override;
	virtual IOnlinePartyPtr GetPartyInterface() const override;
	virtual IOnlineGroupsPtr GetGroupsInterface() const override;
	virtual IOnlineSharedCloudPtr GetSharedCloudInterface() const override;
	virtual IOnlineUserCloudPtr GetUserCloudInterface() const override;
	virtual IOnlineLeaderboardsPtr GetLeaderboardsInterface() const override;
	virtual IOnlineVoicePtr GetVoiceInterface() const override;
	virtual IOnlineExternalUIPtr GetExternalUIInterface() const override;
	virtual IOnlineTimePtr GetTimeInterface() const override;
	virtual IOnlineIdentityPtr GetIdentityInterface() const override;
	virtual IOnlineTitleFilePtr GetTitleFileInterface() const override;
	virtual IOnlineEntitlementsPtr GetEntitlementsInterface() const override;
	virtual IOnlineStoreV2Ptr GetStoreV2Interface() const override;
	virtual IOnlinePurchasePtr GetPurchaseInterface() const override;
	virtual IOnlineEventsPtr GetEventsInterface() const override;
	virtual IOnlineAchievementsPtr GetAchievementsInterface() const override;
	virtual IOnlineSharingPtr GetSharingInterface() const override;
	virtual IOnlineUserPtr GetUserInterface() const override;
	virtual IOnlineMessagePtr GetMessageInterface() const override;
	virtual IOnlinePresencePtr GetPresenceInterface() const override;
	virtual IOnlineChatPtr GetChatInterface() const override;
	virtual IOnlineStatsPtr GetStatsInterface() const override;
	virtual IOnlineTurnBasedPtr GetTurnBasedInterface() const override;
	virtual IOnlineTournamentPtr GetTournamentInterface() const override;
	virtual bool Init() override;
	virtual bool Shutdown() override;
	virtual bool Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
	virtual bool IsEnabled() const override;
	virtual FString GetAppId() const override;
	virtual FText GetOnlineServiceName() const override;
	virtual EOnlineEnvironment::Type GetOnlineEnvironment() const override { return EOnlineEnvironment::Development; }  // always use Dev - the -hirezenv switch can be used to override discovery

	virtual bool Tick(float DeltaTime) override;

	inline bool IsSteamClientAvailable()
	{
		return SteamSubsystem && SteamSubsystem->IsSteamClientAvailable();
	}

	inline bool IsSteamServerAvailable()
	{
		return SteamSubsystem && SteamSubsystem->IsSteamServerAvailable();
	}
};

typedef TSharedPtr<FOnlineSubsystemSteamV2, ESPMode::ThreadSafe> FOnlineSubsystemSteamV2Ptr;