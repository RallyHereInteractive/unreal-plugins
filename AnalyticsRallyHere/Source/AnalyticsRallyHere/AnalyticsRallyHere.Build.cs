// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

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
					"CoreUObject",
					"Analytics",
					"AnalyticsET",
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"HTTP",
					"Json",
					"RallyHereAPI",
					"RallyHereIntegration",
				}
				);

			PublicIncludePathModuleNames.Add("Analytics");
		}
	}
}
