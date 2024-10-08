// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakInterfacePtr.h"

#include "Misc/EngineVersionComparison.h"

//#include "RH_Version.generated.h"

#define RH_BELOW_ENGINE_VERSION(Major, Minor)  (ENGINE_MAJOR_VERSION < (Major) || (ENGINE_MAJOR_VERSION == (Major) && ENGINE_MINOR_VERSION < (Minor)))
#define RH_FROM_ENGINE_VERSION(Major, Minor)   !RH_BELOW_ENGINE_VERSION(Major, Minor)

/**
 *	@ingroup Common
 *  @addtogroup Common
 *  @{
 */

namespace RH_VersionStrings
{
	/** @brief Retrieves a version number to use to indicate a build version */
	RALLYHEREINTEGRATION_API FString GetBuildVersion();
	/** @brief Retrieves a version number to use for session compatibility checks, not necessarily same as build version */
	RALLYHEREINTEGRATION_API FString GetVersionForSession();
	
	// override delegates for version retrieval, otherwise uses engine version
	DECLARE_DELEGATE_RetVal(FString, FRallyHereVersionDelegate);
	/** @brief Override delegate for overriding behavior of GetBuildVersion() */
	extern FRallyHereVersionDelegate OnGetBuildVersion;
	/** @brief Override delegate for overriding behavior of GetVersionForSession() */
	extern FRallyHereVersionDelegate OnGetVersionForSession;
};

/**
 *  @}
 */