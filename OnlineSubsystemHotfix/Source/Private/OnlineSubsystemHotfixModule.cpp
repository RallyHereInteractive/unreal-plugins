// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OnlineSubsystemHotfixModule.h"
#include "OnlineSubsystemHotfix.h"
#include "CoreMinimal.h"
#include "Misc/Paths.h"
#include "Misc/CommandLine.h"
#include "Modules/ModuleManager.h"
#include "OnlineSubsystemHotfix.h"
#include "OnlineSubsystemModule.h"
#include "OnlineSubsystemNames.h"
#include "OnlineSubsystem.h"
#include "HAL/PlatformProcess.h"

IMPLEMENT_MODULE(FOnlineSubsystemHotfixModule, OnlineSubsystemHotfix);

/**
 * Class responsible for creating instance(s) of the subsystem
 */
class FOnlineFactoryHotfix : public IOnlineFactory
{
private:
	/** Single instantiation of the LIVE interface */
	FOnlineSubsystemHotfixPtr& GetSingleton() const
	{
		static FOnlineSubsystemHotfixPtr HotfixSingleton;
		return HotfixSingleton;
	}

	virtual bool DestroySubsystem()
	{
		FOnlineSubsystemHotfixPtr& HotfixSingleton = GetSingleton();
		if (HotfixSingleton.IsValid())
		{
			HotfixSingleton->Shutdown();
			HotfixSingleton.Reset();
			return true;
		}
		return false;
	}

public:
	FOnlineFactoryHotfix() {}
	virtual ~FOnlineFactoryHotfix()
	{
		DestroySubsystem();
	}

	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		FOnlineSubsystemHotfixPtr& HotfixSingleton = GetSingleton();
		if (HotfixSingleton.IsValid())
		{
			UE_LOG_ONLINE(Warning, TEXT("Can't create more than one instance of Hotfix online subsystem!"));
			return nullptr;
		}

		HotfixSingleton = MakeShared<FOnlineSubsystemHotfix, ESPMode::ThreadSafe>(InstanceName);
		if (HotfixSingleton->IsEnabled())
		{
			if (!HotfixSingleton->Init())
			{
				UE_LOG_ONLINE(Warning, TEXT("Hotfix API failed to initialize!"));
				DestroySubsystem();
				return nullptr;
			}
		}
		else
		{
			UE_LOG_ONLINE(Warning, TEXT("Hotfix API disabled!"));
			DestroySubsystem();
			return nullptr;
		}

		return HotfixSingleton;
	}
};

/**
 * Called right after the module DLL has been loaded and the module object has been created
 * Registers the actual implementation of the Live online subsystem with the engine
 */
void FOnlineSubsystemHotfixModule::StartupModule()
{
	HotfixFactory = MakeUnique<FOnlineFactoryHotfix>();

	// Create and register our singleton factory with the main online subsystem for easy access
	FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
	OSS.RegisterPlatformService(HOTFIX_SUBSYSTEM, HotfixFactory.Get());
}

/**
 * Called before the module is unloaded, right before the module object is destroyed.
 * Overloaded to shut down all loaded online subsystems
 */
void FOnlineSubsystemHotfixModule::ShutdownModule()
{
	FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
	OSS.UnregisterPlatformService(HOTFIX_SUBSYSTEM);

	HotfixFactory.Reset();
}
