// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class AnalyticsRallyHere : ModuleRules
	{
		public AnalyticsRallyHere(ReadOnlyTargetRules Target) : base(Target)
		{
			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"Analytics",
					"AnalyticsET",
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"HTTP",
					"Json",
                    // ... add private dependencies that you statically link with here ...
				}
				);

			PublicIncludePathModuleNames.Add("Analytics");
		}
	}
}
