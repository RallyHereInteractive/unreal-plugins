// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "OnlineSubsystemAnonModule.h"
#include "OnlineSubsystemModule.h"
#include "OnlineSubsystemNames.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemAnonPrivate.h"
#include "OnlineSubsystemAnon.h"

IMPLEMENT_MODULE(FOnlineSubsystemAnonModule, OnlineSubsystemAnon);

/**
 * Class responsible for creating instance(s) of the subsystem
 */
class FOnlineFactoryAnon : public IOnlineFactory
{
public:
	FOnlineFactoryAnon() = default;
	virtual ~FOnlineFactoryAnon() = default;

	// Mirrors OnlineSubsystemNull
	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		FOnlineSubsystemAnonPtr OnlineSub = MakeShared<FOnlineSubsystemAnon, ESPMode::ThreadSafe>(InstanceName);
		if (!OnlineSub->IsEnabled())
		{
			UE_LOG_ONLINE(Warning, TEXT("Anon API disabled!"));
			return nullptr;
		}
		else if (!OnlineSub->Init())
		{
			UE_LOG_ONLINE(Warning, TEXT("Anon API failed to initialize!"));
			return nullptr;
		}

		return OnlineSub;
	}
};

void FOnlineSubsystemAnonModule::StartupModule()
{
	// Create and register our subsystem factory with the main online subsystem for easy access
	if (!AnonFactory.IsValid())
	{
		AnonFactory = MakeUnique<FOnlineFactoryAnon>();
		FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSS.RegisterPlatformService(ANON_SUBSYSTEM, AnonFactory.Get());
	}
}

void FOnlineSubsystemAnonModule::ShutdownModule()
{
	if (AnonFactory.IsValid())
	{
		FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSS.UnregisterPlatformService(ANON_SUBSYSTEM);
		AnonFactory = nullptr;
	}
}
