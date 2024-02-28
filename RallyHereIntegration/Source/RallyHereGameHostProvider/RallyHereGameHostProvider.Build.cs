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
				
			}
        );

		if (Target.Type == TargetType.Server || Target.Type == TargetType.Editor)
		{
			if (Target.Platform == UnrealTargetPlatform.Linux || Target.Platform == UnrealTargetPlatform.Win64)
			{
				PublicDependencyModuleNames.Add("RallyHereGameHostAdapter");
				PublicDefinitions.Add("WITH_RALLYHERE_GAME_HOST_ADAPTER=1");
			}
		}

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"SSL"
			}
		);
    }
}
