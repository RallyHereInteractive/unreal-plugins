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

void URH_EntitlementSubsystem::SubmitEntitlements(FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate, FRH_GetPlatformRegionDelegate PlatformRegionDelegate)
{
	auto Helper = MakeShared<FRH_EntitlementProcessor>(this,
			GetOSS(),
			GetPurchaseSubsystem(),
			GetRH_LocalPlayerSubsystem()->GetPlatformUserId(),
			GetRH_LocalPlayerSubsystem()->GetOSSUniqueId().GetUniqueNetId(),
			GetTimerManager(),
			EntitlementProcessorCompleteDelegate,
			PlatformRegionDelegate
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

    	