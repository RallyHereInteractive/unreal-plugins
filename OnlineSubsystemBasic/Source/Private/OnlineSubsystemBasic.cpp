// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "OnlineSubsystemBasic.h"
#include "OnlineSubsystemBasicPrivate.h"
#include "OnlineIdentityInterfaceBasic.h"
#include "Misc/App.h"
#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h"

IOnlineSessionPtr FOnlineSubsystemBasic::GetSessionInterface() const
{
    return nullptr;
}

IOnlineFriendsPtr FOnlineSubsystemBasic::GetFriendsInterface() const
{
    return nullptr;
}

IOnlinePartyPtr FOnlineSubsystemBasic::GetPartyInterface() const
{
    return nullptr;
}

IOnlineGroupsPtr FOnlineSubsystemBasic::GetGroupsInterface() const
{
    return nullptr;
}

IOnlineSharedCloudPtr FOnlineSubsystemBasic::GetSharedCloudInterface() const
{
    return nullptr;
}

IOnlineUserCloudPtr FOnlineSubsystemBasic::GetUserCloudInterface() const
{
    return nullptr;
}

IOnlineLeaderboardsPtr FOnlineSubsystemBasic::GetLeaderboardsInterface() const
{
    return nullptr;
}

IOnlineVoicePtr FOnlineSubsystemBasic::GetVoiceInterface() const
{
    return nullptr;
}

IOnlineExternalUIPtr FOnlineSubsystemBasic::GetExternalUIInterface() const
{
    return nullptr;
}

IOnlineTimePtr FOnlineSubsystemBasic::GetTimeInterface() const
{
    return nullptr;
}

IOnlineIdentityPtr FOnlineSubsystemBasic::GetIdentityInterface() const
{
    return IdentityInterface;
}

IOnlineTitleFilePtr FOnlineSubsystemBasic::GetTitleFileInterface() const
{
    return nullptr;
}

IOnlineEntitlementsPtr FOnlineSubsystemBasic::GetEntitlementsInterface() const
{
    return nullptr;
}

IOnlineStoreV2Ptr FOnlineSubsystemBasic::GetStoreV2Interface() const
{
    return nullptr;
}

IOnlinePurchasePtr FOnlineSubsystemBasic::GetPurchaseInterface() const
{
    return nullptr;
}

IOnlineEventsPtr FOnlineSubsystemBasic::GetEventsInterface() const
{
    return nullptr;
}

IOnlineAchievementsPtr FOnlineSubsystemBasic::GetAchievementsInterface() const
{
    return nullptr;
}

IOnlineSharingPtr FOnlineSubsystemBasic::GetSharingInterface() const
{
    return nullptr;
}

IOnlineUserPtr FOnlineSubsystemBasic::GetUserInterface() const
{
    return nullptr;
}

IOnlineMessagePtr FOnlineSubsystemBasic::GetMessageInterface() const
{
    return nullptr;
}

IOnlinePresencePtr FOnlineSubsystemBasic::GetPresenceInterface() const
{
    return nullptr;
}

IOnlineChatPtr FOnlineSubsystemBasic::GetChatInterface() const
{
    return nullptr;
}

IOnlineStatsPtr FOnlineSubsystemBasic::GetStatsInterface() const
{
    return nullptr;
}

IOnlineTurnBasedPtr FOnlineSubsystemBasic::GetTurnBasedInterface() const
{
    return nullptr;
}

IOnlineTournamentPtr FOnlineSubsystemBasic::GetTournamentInterface() const
{
    return nullptr;
}

bool FOnlineSubsystemBasic::Init()
{
    if (bInitialized)
    {
        return false;
    }

    IdentityInterface = MakeShareable(new FOnlineIdentityBasic(this));
    bInitialized = true;
    UE_LOG_ONLINE(Log, TEXT("Init complete"));
    return true;
}

bool FOnlineSubsystemBasic::Shutdown()
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

bool FOnlineSubsystemBasic::Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
    if (FOnlineSubsystemImpl::Exec(InWorld, Cmd, Ar))
    {
        return true;
    }

    return false;
}

bool FOnlineSubsystemBasic::IsEnabled() const
{
    if (bInitialized)
    {
        return true;
    }
    return FOnlineSubsystemImpl::IsEnabled();
}

FString FOnlineSubsystemBasic::GetAppId() const
{
    return LexToString(1000);
}

FText FOnlineSubsystemBasic::GetOnlineServiceName() const
{
    return NSLOCTEXT("OnlineSubsystemBasic", "OnlineServiceName", "Basic");
}

bool FOnlineSubsystemBasic::Tick(float DeltaTime)
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
