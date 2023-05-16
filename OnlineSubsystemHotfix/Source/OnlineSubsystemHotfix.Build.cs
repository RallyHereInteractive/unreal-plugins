// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

public class OnlineSubsystemHotfix : ModuleRules
{
    public OnlineSubsystemHotfix(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/OnlineSubsystemHotfixModule.h";

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "OnlineSubsystemUtils",
                "OnlineSubsystem",
                "RallyHereIntegration",
                "Json",
                "JsonUtilities",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
            }
        );
    }
}
