#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemImpl.h"
#include "OnlineSubsystemBasicNames.h"
#include "OnlineSubsystemBasicPackage.h"

typedef TSharedPtr<class FOnlineIdentityBasic, ESPMode::ThreadSafe> FOnlineIdentityBasicPtr;

/**
 *	FOnlineSubsystemEpic - Implementation of the online subsystem for Epic services
 */
class ONLINESUBSYSTEMBASIC_API FOnlineSubsystemBasic : public FOnlineSubsystemImpl
{
protected:

	/** Online async task thread */
	class FRunnableThread* OnlineAsyncTaskThread;

PACKAGE_SCOPE:

	/** Only the factory makes instances */
    FOnlineSubsystemBasic() = delete;
    FOnlineSubsystemBasic(FName InInstanceName) :
		FOnlineSubsystemImpl(BASIC_SUBSYSTEM, InInstanceName),
		OnlineAsyncTaskThread(nullptr),
        bInitialized(false)
	{}

    FOnlineIdentityBasicPtr IdentityInterface;

public:

	virtual ~FOnlineSubsystemBasic()
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

private:
    bool bInitialized;
};

typedef TSharedPtr<FOnlineSubsystemBasic, ESPMode::ThreadSafe> FOnlineSubsystemBasicPtr;
