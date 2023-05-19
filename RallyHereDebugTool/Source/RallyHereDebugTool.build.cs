// Copyright 2022 Hi-Rez Studios, Inc. All Rights Reserved.

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
            "DeveloperSettings",
        });
    }
}
