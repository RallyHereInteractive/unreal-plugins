// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FOnlineSubsystemBasicModule : public IModuleInterface
{
private:
	/** Class responsible for creating instance(s) of the subsystem */
	TUniquePtr<class FOnlineFactoryBasic> BasicFactory;

public:
	FOnlineSubsystemBasicModule()
		: BasicFactory(nullptr)
	{
	}

	virtual ~FOnlineSubsystemBasicModule() = default;

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
