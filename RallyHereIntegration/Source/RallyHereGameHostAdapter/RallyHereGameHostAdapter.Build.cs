// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
using System;
using System.IO;
using UnrealBuildTool;

public class RallyHereGameHostAdapter : ModuleRules
{
    public RallyHereGameHostAdapter(ReadOnlyTargetRules Target) : base(Target)
    {
		Type = ModuleType.External;
		
		if (Target.Type == TargetType.Server || Target.Type == TargetType.Editor)
		{
			string LibSubdirectory = Path.Combine(ModuleDirectory, "lib");

			if (Target.Platform == UnrealTargetPlatform.Linux)
			{
				RuntimeDependencies.Add("$(TargetOutputDir)/libgame-host-adapter.so",
					Path.Combine(LibSubdirectory, "Linux", "libgame-host-adapter.so"));
			}
			else if (Target.Platform == UnrealTargetPlatform.Win64)
			{
				RuntimeDependencies.Add("$(TargetOutputDir)/game-host-adapter.dll",
					Path.Combine(LibSubdirectory, "Win64", "game-host-adapter.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/boost_filesystem-vc142-mt-x64-1_83.dll",
					Path.Combine(LibSubdirectory, "Win64", "boost_filesystem-vc142-mt-x64-1_83.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/boost_json-vc142-mt-x64-1_83.dll",
					Path.Combine(LibSubdirectory, "Win64", "boost_json-vc142-mt-x64-1_83.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/boost_url-vc142-mt-x64-1_83.dll",
					Path.Combine(LibSubdirectory, "Win64", "boost_url-vc142-mt-x64-1_83.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/libcrypto-3-x64.dll",
					Path.Combine(LibSubdirectory, "Win64", "libcrypto-3-x64.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/libssl-3-x64.dll",
					Path.Combine(LibSubdirectory, "Win64", "libssl-3-x64.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/zlib1.dll",
					Path.Combine(LibSubdirectory, "Win64", "zlib1.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/fmt.dll",
					Path.Combine(LibSubdirectory, "Win64", "fmt.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/civetweb.dll",
					Path.Combine(LibSubdirectory, "Win64", "civetweb.dll"));
				RuntimeDependencies.Add("$(TargetOutputDir)/civetweb-cpp.dll",
					Path.Combine(LibSubdirectory, "Win64", "civetweb-cpp.dll"));
			}
			
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		}
    }
}
