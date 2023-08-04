// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

public class OnlineSubsystemBasic : ModuleRules
{
    public OnlineSubsystemBasic(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDefinitions.Add("ONLINESUBSYSTEMBASIC_PACKAGE=1");
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "OnlineSubsystemUtils"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "OnlineSubsystem"
            }
        );
    }
}
