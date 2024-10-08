// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "Common/RH_Version.h"
#include "Misc/App.h"
#include "Misc/EngineVersion.h"

namespace RH_VersionStrings
{
	/** @brief Retrieves a version number to use to indicate a build version */
	FString GetBuildVersion()
	{
		if (OnGetBuildVersion.IsBound())
		{
			return OnGetBuildVersion.Execute();
		}

		return FApp::GetBuildVersion();
	}
	/** @brief Retrieves a version number to use for session compatibility checks, not necessarily same as build version */
	FString GetVersionForSession()
	{
		if (OnGetVersionForSession.IsBound())
		{
			return OnGetVersionForSession.Execute();
		}

		// put compatibility and current changelists first, to better conform to SymVer.
		static FString SessionVersion = FString::Printf(TEXT("%d.%d.%d+%s"), FEngineVersion::CompatibleWith().GetChangelist(), FEngineVersion::Current().GetChangelist(), 0, *FEngineVersion::Current().ToString(EVersionComponent::Patch));
		return SessionVersion;
	}

	/** @brief Override delegate for overriding behavior of GetBuildVersion() */
	FRallyHereVersionDelegate OnGetBuildVersion;
	/** @brief Override delegate for overriding behavior of GetVersionForSession() */
	FRallyHereVersionDelegate OnGetVersionForSession;
}

