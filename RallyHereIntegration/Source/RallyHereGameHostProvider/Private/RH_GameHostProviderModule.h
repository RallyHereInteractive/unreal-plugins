// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

class RALLYHEREGAMEHOSTPROVIDER_API FRallyHereGameHostProviderModule : public IModuleInterface
{
public:
	void StartupModule() final;
	void ShutdownModule() final;
};
