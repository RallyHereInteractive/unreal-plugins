// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

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
	/** Single instantiation of the STEAM interface */
	// NOTE - this is a weak interface, since sometimes the OSS manager will delete without going through the factory, and we do not want to prevent that
	static TWeakPtr<class IOnlineSubsystem, ESPMode::ThreadSafe> SteamV2Singleton;

	void DestroySubsystem()
	{
		auto SteamV2SingletonShared = SteamV2Singleton.Pin();
		SteamV2Singleton.Reset();

		if (SteamV2SingletonShared.IsValid())
		{
			SteamV2SingletonShared->Shutdown();
			SteamV2SingletonShared = nullptr;
		}

	}

public:
	FOnlineFactorySteamV2() = default;
	virtual ~FOnlineFactorySteamV2()
	{
		DestroySubsystem();
	}

	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		if (!SteamV2Singleton.IsValid())
		{
			auto SteamV2SingletonShared = MakeShared<FOnlineSubsystemSteamV2, ESPMode::ThreadSafe>(InstanceName);

			if (SteamV2SingletonShared->IsEnabled())
			{
				if (!SteamV2SingletonShared->Init())
				{
					UE_LOG_ONLINE(Warning, TEXT("Steam API failed to initialize!"));
					DestroySubsystem();
				}
			}
			else
			{
				UE_CLOG_ONLINE(IsRunningDedicatedServer() || IsRunningGame(), Warning, TEXT("Steam API disabled!"));
				DestroySubsystem();
			}

			SteamV2Singleton = SteamV2SingletonShared;

			return SteamV2SingletonShared;
		}

		UE_LOG_ONLINE(Warning, TEXT("Can't create more than one instance of SteamV2 online subsystem!"));
		return nullptr;
	}
};


TWeakPtr<class IOnlineSubsystem, ESPMode::ThreadSafe> FOnlineFactorySteamV2::SteamV2Singleton = nullptr;

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
