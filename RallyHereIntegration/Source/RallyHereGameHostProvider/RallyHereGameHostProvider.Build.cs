// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
using System;
using System.IO;
using UnrealBuildTool;

public class RallyHereGameHostProvider : ModuleRules
{
    public RallyHereGameHostProvider(ReadOnlyTargetRules Target) : base(Target)
    {
		PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
				"Engine",
                "Json",
				"RallyHereGameHostAdapter"
			}
        );

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"SSL"
			}
		);
    }
}
