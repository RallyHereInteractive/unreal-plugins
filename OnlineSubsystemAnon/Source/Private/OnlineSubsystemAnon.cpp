
#include "OnlineSubsystemAnon.h"
#include "OnlineSubsystemAnonPrivate.h"
#include "OnlineIdentityInterfaceAnon.h"
#include "Misc/App.h"
#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h"

IOnlineSessionPtr FOnlineSubsystemAnon::GetSessionInterface() const
{
    return nullptr;
}

IOnlineFriendsPtr FOnlineSubsystemAnon::GetFriendsInterface() const
{
    return nullptr;
}

IOnlinePartyPtr FOnlineSubsystemAnon::GetPartyInterface() const
{
    return nullptr;
}

IOnlineGroupsPtr FOnlineSubsystemAnon::GetGroupsInterface() const
{
    return nullptr;
}

IOnlineSharedCloudPtr FOnlineSubsystemAnon::GetSharedCloudInterface() const
{
    return nullptr;
}

IOnlineUserCloudPtr FOnlineSubsystemAnon::GetUserCloudInterface() const
{
    return nullptr;
}

IOnlineLeaderboardsPtr FOnlineSubsystemAnon::GetLeaderboardsInterface() const
{
    return nullptr;
}

IOnlineVoicePtr FOnlineSubsystemAnon::GetVoiceInterface() const
{
    return nullptr;
}

IOnlineExternalUIPtr FOnlineSubsystemAnon::GetExternalUIInterface() const
{
    return nullptr;
}

IOnlineTimePtr FOnlineSubsystemAnon::GetTimeInterface() const
{
    return nullptr;
}

IOnlineIdentityPtr FOnlineSubsystemAnon::GetIdentityInterface() const
{
    return IdentityInterface;
}

IOnlineTitleFilePtr FOnlineSubsystemAnon::GetTitleFileInterface() const
{
    return nullptr;
}

IOnlineEntitlementsPtr FOnlineSubsystemAnon::GetEntitlementsInterface() const
{
    return nullptr;
}

IOnlineStoreV2Ptr FOnlineSubsystemAnon::GetStoreV2Interface() const
{
    return nullptr;
}

IOnlinePurchasePtr FOnlineSubsystemAnon::GetPurchaseInterface() const
{
    return nullptr;
}

IOnlineEventsPtr FOnlineSubsystemAnon::GetEventsInterface() const
{
    return nullptr;
}

IOnlineAchievementsPtr FOnlineSubsystemAnon::GetAchievementsInterface() const
{
    return nullptr;
}

IOnlineSharingPtr FOnlineSubsystemAnon::GetSharingInterface() const
{
    return nullptr;
}

IOnlineUserPtr FOnlineSubsystemAnon::GetUserInterface() const
{
    return nullptr;
}

IOnlineMessagePtr FOnlineSubsystemAnon::GetMessageInterface() const
{
    return nullptr;
}

IOnlinePresencePtr FOnlineSubsystemAnon::GetPresenceInterface() const
{
    return nullptr;
}

IOnlineChatPtr FOnlineSubsystemAnon::GetChatInterface() const
{
    return nullptr;
}

IOnlineStatsPtr FOnlineSubsystemAnon::GetStatsInterface() const
{
    return nullptr;
}

IOnlineTurnBasedPtr FOnlineSubsystemAnon::GetTurnBasedInterface() const
{
    return nullptr;
}

IOnlineTournamentPtr FOnlineSubsystemAnon::GetTournamentInterface() const
{
    return nullptr;
}

bool FOnlineSubsystemAnon::Init()
{
    if (bInitialized)
    {
        return false;
    }

    IdentityInterface = MakeShareable(new FOnlineIdentityAnon(this));
    bInitialized = true;
    UE_LOG_ONLINE(Log, TEXT("Init complete"));
    return true;
}

bool FOnlineSubsystemAnon::Shutdown()
{
    FOnlineSubsystemImpl::Shutdown();

    if (!bInitialized)
    {
        return true;
    }

    if (IdentityInterface.IsValid())
    {
        ensure(IdentityInterface.IsUnique());
        IdentityInterface = nullptr;
    }

    UE_LOG_ONLINE(Log, TEXT("Shutdown Complete"));
    bInitialized = false;
    return true;
}

bool FOnlineSubsystemAnon::Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
    if (FOnlineSubsystemImpl::Exec(InWorld, Cmd, Ar))
    {
        return true;
    }

    return false;
}

bool FOnlineSubsystemAnon::IsEnabled() const
{
    if (bInitialized)
    {
        return true;
    }
    return FOnlineSubsystemImpl::IsEnabled();
}

FString FOnlineSubsystemAnon::GetAppId() const
{
    return LexToString(1000);
}

FText FOnlineSubsystemAnon::GetOnlineServiceName() const
{
    return NSLOCTEXT("OnlineSubsystemAnon", "OnlineServiceName", "Anon");
}

bool FOnlineSubsystemAnon::Tick(float DeltaTime)
{
    if (!FOnlineSubsystemImpl::Tick(DeltaTime))
    {
        return false;
    }

    if (IdentityInterface)
    {
        IdentityInterface->Tick(DeltaTime);
    }

    return true;
}
