// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RallyHereA2S : ModuleRules
{
	public RallyHereA2S(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDefinitions.Add("WITH_RALLYHEREA2S=1");

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
								
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",
				"Networking",
				"Sockets"
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine"
			}
			);
	}
}
