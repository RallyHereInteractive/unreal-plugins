// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
using System;
using System.IO;
using UnrealBuildTool;

public class RallyHereIntegration : ModuleRules
{
    public RallyHereIntegration(ReadOnlyTargetRules Target) : base(Target)
    {
		bAllowConfidentialPlatformDefines = true;

		PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "HTTP",
                "Json",
                "Engine",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
                "RallyHereAPI",
				"RallyHereGameHostProvider",
                "WebAuth",
				"Sockets",
				"Networking",
				"DeveloperSettings",
            }
        );

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Hotfix",
				"Projects",
				"Analytics",
				"EngineSettings",
				"CoreOnline",
				"PerfCounters",
				"RenderCore",
				"RHI",
			}
		);

		if ((Target.IsInPlatformGroup(UnrealPlatformGroup.Windows)))
		{
			// Uses DXGI to query GPU hardware
			// This is what will allow us to get GPU usage statistics at runtime
			PublicSystemLibraries.Add("DXGI.lib");
		}
    }
}
