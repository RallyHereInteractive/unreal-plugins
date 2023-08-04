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

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"SSL"
			}
		);

		if (Target.Type == TargetType.Server || Target.Type == TargetType.Editor)
		{
			string LibSubdirectory = Path.Combine(PluginDirectory, "Source", "RallyHereGameHostProvider", "lib");
			if (Target.Platform == UnrealTargetPlatform.Linux)
			{
				RuntimeDependencies.Add("$(TargetOutputDir)/libgame-host-adapter.so",
					Path.Combine(LibSubdirectory, "Linux", "libgame-host-adapter.so"));
			}
			else if (Target.Platform == UnrealTargetPlatform.Win64)
			{
				RuntimeDependencies.Add("$(TargetOutputDir)/game-host-adapter.dll",
					Path.Combine(LibSubdirectory, "Win64", "game-host-adapter.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/boost_filesystem-vc143-mt-x64-1_82.dll",
					Path.Combine(LibSubdirectory, "Win64", "boost_filesystem-vc143-mt-x64-1_82.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/boost_json-vc143-mt-x64-1_82.dll",
					Path.Combine(LibSubdirectory, "Win64", "boost_json-vc143-mt-x64-1_82.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/boost_url-vc143-mt-x64-1_82.dll",
					Path.Combine(LibSubdirectory, "Win64", "boost_url-vc143-mt-x64-1_82.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/libcrypto-3-x64.dll",
					Path.Combine(LibSubdirectory, "Win64", "libcrypto-3-x64.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/libssl-3-x64.dll",
					Path.Combine(LibSubdirectory, "Win64", "libssl-3-x64.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/zlib1.dll",
					Path.Combine(LibSubdirectory, "Win64", "zlib1.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/fmt.dll",
					Path.Combine(LibSubdirectory, "Win64", "fmt.dll"));
			}
		}
    }
}
