// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

using UnrealBuildTool;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

public class RallyHereDebugTool : ModuleRules
{

    public RallyHereDebugTool(ReadOnlyTargetRules Target)
        : base(Target)
    {
		PCHUsage = PCHUsageMode.UseSharedPCHs;
        PrivatePCHHeaderFile = "Public/RallyHereDebugToolModule.h";

        PublicIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Public"),
            }
        );

        PublicDependencyModuleNames.AddRange(new string[] {
	        "ApplicationCore",
            "Core",
			"HTTP",
			"Json",
			"CoreUObject",
			"InputCore",
			"Engine",
			"RallyHereAPI",
			"RallyHereIntegration",
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "ImGui",
			"SlateCore",
			"Slate",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"DeveloperSettings",
        });
    }
}
