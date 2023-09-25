// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "OnlineSubsystemBasicModule.h"
#include "OnlineSubsystemModule.h"
#include "OnlineSubsystemNames.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemBasicPrivate.h"
#include "OnlineSubsystemBasic.h"

IMPLEMENT_MODULE(FOnlineSubsystemBasicModule, OnlineSubsystemBasic);

/**
 * Class responsible for creating instance(s) of the subsystem
 */
class FOnlineFactoryBasic : public IOnlineFactory
{
public:
	FOnlineFactoryBasic() = default;
	virtual ~FOnlineFactoryBasic() = default;

	// Mirrors OnlineSubsystemNull
	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		FOnlineSubsystemBasicPtr OnlineSub = MakeShared<FOnlineSubsystemBasic, ESPMode::ThreadSafe>(InstanceName);
		if (!OnlineSub->IsEnabled())
		{
			UE_LOG_ONLINE(Warning, TEXT("Basic API disabled!"));
			return nullptr;
		}
		else if (!OnlineSub->Init())
		{
			UE_LOG_ONLINE(Warning, TEXT("Basic API failed to initialize!"));
			return nullptr;
		}

		return OnlineSub;
	}
};

void FOnlineSubsystemBasicModule::StartupModule()
{
	// Create and register our subsystem factory with the main online subsystem for easy access
	if (!BasicFactory.IsValid())
	{
		BasicFactory = MakeUnique<FOnlineFactoryBasic>();
		FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSS.RegisterPlatformService(BASIC_SUBSYSTEM, BasicFactory.Get());
	}
}

void FOnlineSubsystemBasicModule::ShutdownModule()
{
	if (BasicFactory.IsValid())
	{
		FOnlineSubsystemModule& OSS = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSS.UnregisterPlatformService(BASIC_SUBSYSTEM);
		BasicFactory = nullptr;
	}
}
