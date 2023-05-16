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
                "WebAuth",
				"Sockets",
				"Networking",
				"DeveloperSettings"
            }
        );

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Hotfix",
			}
		);

		if (Target.Type == TargetType.Server || Target.Type == TargetType.Editor)
		{
			PrivateDefinitions.Add("WITH_RALLYHEREA2S=1");
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"RallyHereA2S"
				}
			);
		}
		else
		{
			PrivateDefinitions.Add("WITH_RALLYHEREA2S=0");
		}
	}
}
