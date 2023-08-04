#include "RH_EntitlementSubsystem.h"

#include "OnlineSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"
#include "RH_LocalPlayerSubsystem.h"

void URH_EntitlementSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
}

void URH_EntitlementSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
}

void URH_EntitlementSubsystem::OnUserChanged(const FGuid& OldPlayerUuid, URH_PlayerInfo* OldLocalPlayerInfo)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::OnUserChanged(OldPlayerUuid, OldLocalPlayerInfo);

	// clear out old notification binding
	if (OldLocalPlayerInfo != nullptr)
	{
		OldLocalPlayerInfo->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("inventory")).RemoveAll(this);
	}

	// add new notification binding
	if (GetLocalPlayerSubsystem()->GetPlayerNotifications() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("inventory")).AddUObject(this, &URH_EntitlementSubsystem::HandleNotification);
	}
}


void URH_EntitlementSubsystem::HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams)
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
			if (FGuid::Parse(APIParams[2], PlayerUuid) && PlayerUuid == GetLocalPlayerSubsystem()->GetPlayerUuid())
			{
				// this is an inventory notification for us!
				if (APIParams.Num() >= 4 && APIParams[3] == "entitlement")
				{
					// TODO
				}
			}
		}
	}
}


void URH_EntitlementSubsystem::SubmitEntitlementsForLoggedInOSS(FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate, FRH_GetPlatformRegionDelegate PlatformRegionDelegate)
{
	auto Helper = MakeShared<FRH_EntitlementProcessor>(this,
			GetOSS(),
			GetPurchaseSubsystem(),
			GetRH_LocalPlayerSubsystem()->GetPlatformUserId(),
			GetRH_LocalPlayerSubsystem()->GetOSSUniqueId().GetUniqueNetId(),
			GetTimerManager(),
			EntitlementProcessorCompleteDelegate,
			PlatformRegionDelegate,
			std::nullopt
		);
	Helper->Start();
}

void URH_EntitlementSubsystem::SubmitEntitlementsForOSS(ERHAPI_Platform platform, FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate, FRH_GetPlatformRegionDelegate PlatformRegionDelegate)
{
	auto Helper = MakeShared<FRH_EntitlementProcessor>(this,
			GetOSS(),
			GetPurchaseSubsystem(),
			GetRH_LocalPlayerSubsystem()->GetPlatformUserId(),
			GetRH_LocalPlayerSubsystem()->GetOSSUniqueId().GetUniqueNetId(),
			GetTimerManager(),
			EntitlementProcessorCompleteDelegate,
			PlatformRegionDelegate,
			std::optional<ERHAPI_Platform>{platform}
		);
	Helper->Start();
}

TMap<FString, FRHAPI_PlatformEntitlementProcessResult>* URH_EntitlementSubsystem::GetEntitlementResults()
{
	return &EntitlementProcessResultMap;
}

IOnlineSubsystem* URH_EntitlementSubsystem::GetOSS() const
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		if (LPSS->GetLocalPlayer() == nullptr)
		{
			return nullptr;
		}
		
		IOnlineSubsystem* oss = LPSS->GetOSS(EntitlementOSSName);
		if (oss == nullptr)
		{
			return nullptr;
		}

		return oss;
	}

	return nullptr;
}

IOnlinePurchasePtr URH_EntitlementSubsystem::GetPurchaseSubsystem() const
{
	if (IOnlineSubsystem* OSS = GetOSS())
	{
		IOnlinePurchasePtr purchase = OSS->GetPurchaseInterface();
		return purchase;
	}

	return nullptr;
}

URH_LocalPlayerSubsystem* URH_EntitlementSubsystem::GetRH_LocalPlayerSubsystem() const
{
	return Cast<URH_LocalPlayerSubsystem>(GetOuter());
}

FTimerManager& URH_EntitlementSubsystem::GetTimerManager()
{
	return GetRH_LocalPlayerSubsystem()->GetLocalPlayer()->GetGameInstance()->GetTimerManager();
}

void URH_EntitlementSubsystem::SetEntitlementOSSName(const FName& InEntitlementOSSName)
{
	EntitlementOSSName = InEntitlementOSSName;
}

FName URH_EntitlementSubsystem::GetEntitlementOSSName()
{
	return EntitlementOSSName;
}

    	