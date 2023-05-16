// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SteamSharedModule.h"
#include "OnlineSubsystemSteamV2Module.h"
#include "OnlineSubsystemModule.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemSteamV2.h"

IMPLEMENT_MODULE(FOnlineSubsystemSteamV2Module, OnlineSubsystemSteamV2);

/**
 * Class responsible for creating instance(s) of the subsystem
 */
class FOnlineFactorySteamV2 : public IOnlineFactory
{
public:
	FOnlineFactorySteamV2() = default;
	virtual ~FOnlineFactorySteamV2() = default;

	// Mirrors OnlineSubsystemNull
	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		FOnlineSubsystemSteamV2Ptr OnlineSub = MakeShared<FOnlineSubsystemSteamV2, ESPMode::ThreadSafe>(InstanceName);
		if (!OnlineSub->IsEnabled())
		{
			UE_LOG_ONLINE(Warning, TEXT("Steam API disabled!"));
			return nullptr;
		}
		else if (!OnlineSub->Init())
		{
			UE_LOG_ONLINE(Warning, TEXT("Steam API failed to initialize!"));
			return nullptr;
		}

		return OnlineSub;
	}
};

void FOnlineSubsystemSteamV2Module::StartupModule()
{
	FSteamSharedModule& SharedModule = FSteamSharedModule::Get();

	// Load the Steam modules before first call to API
	if (SharedModule.AreSteamDllsLoaded())
	{
		// Create and register our singleton factory with the main online subsystem for easy access
		SteamV2Factory = MakeUnique<FOnlineFactorySteamV2>();

		FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSS.RegisterPlatformService(STEAMV2_SUBSYSTEM, SteamV2Factory.Get());
	}
}

void FOnlineSubsystemSteamV2Module::ShutdownModule()
{
	if (SteamV2Factory.IsValid())
	{
		FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSS.UnregisterPlatformService(STEAMV2_SUBSYSTEM);
		SteamV2Factory = nullptr;
	}
}
