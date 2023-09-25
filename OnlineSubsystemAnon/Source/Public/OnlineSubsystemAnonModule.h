// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FOnlineSubsystemAnonModule : public IModuleInterface
{
private:
	/** Class responsible for creating instance(s) of the subsystem */
	TUniquePtr<class FOnlineFactoryAnon> AnonFactory;

public:
	FOnlineSubsystemAnonModule()
		: AnonFactory(nullptr)
	{
	}

	virtual ~FOnlineSubsystemAnonModule() = default;

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
