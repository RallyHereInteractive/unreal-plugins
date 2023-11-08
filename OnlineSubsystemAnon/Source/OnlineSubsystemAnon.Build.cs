// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

using UnrealBuildTool;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

public class OnlineSubsystemAnon : ModuleRules
{
    public OnlineSubsystemAnon(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDefinitions.Add("ONLINESUBSYSTEMANON_PACKAGE=1");
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
