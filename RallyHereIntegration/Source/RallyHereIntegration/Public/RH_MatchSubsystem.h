// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "SettingsAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_MatchSubsystem.generated.h"

class URH_SettingsSubsystem;

/** @defgroup Match RallyHere Match
 *  @{
 */

/**
 * @brief Match Subsystem used for match API calls.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_MatchSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:
};

/** @} */