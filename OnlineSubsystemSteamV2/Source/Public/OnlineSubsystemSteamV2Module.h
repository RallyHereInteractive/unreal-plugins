// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FOnlineSubsystemSteamV2Module : public IModuleInterface
{
private:
	/** Class responsible for creating instance(s) of the subsystem */
	TUniquePtr<class FOnlineFactorySteamV2> SteamV2Factory;

public:
	FOnlineSubsystemSteamV2Module()
		: SteamV2Factory(nullptr)
	{
	}

	virtual ~FOnlineSubsystemSteamV2Module() = default;

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
