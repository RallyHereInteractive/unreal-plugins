// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "OnlineSubsystem.h"

/**
 * Online subsystem module class  (Hotfix Implementation)
 * Code related to the loading of the Hotfix module
 */
class FOnlineSubsystemHotfixModule : public IModuleInterface
{
private:
	/** Class responsible for creating instance(s) of the subsystem */
	TUniquePtr<IOnlineFactory> HotfixFactory;
public:
	FOnlineSubsystemHotfixModule() = default;
	virtual ~FOnlineSubsystemHotfixModule() = default;
	FOnlineSubsystemHotfixModule(const FOnlineSubsystemHotfixModule& Other) = delete;

	// IModuleInterface

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}

	virtual bool SupportsAutomaticShutdown() override
	{
		return false;
	}
};

typedef TSharedPtr<FOnlineSubsystemHotfixModule> FOnlineSubsystemHotfixModulePtr;