// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

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
