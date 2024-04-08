// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "FileAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_FileSubsystem.generated.h"

/**
 * @brief File Subsystem used for file API calls.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_FileSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:

	/**
	 * @brief Initialize the subsystem.
	 */
	virtual void Initialize() override;
	/**
	 * @brief Safely tears down the subsystem.
	 */
	virtual void Deinitialize() override;

};

/** @} */