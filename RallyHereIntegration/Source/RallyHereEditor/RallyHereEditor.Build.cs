using UnrealBuildTool;

public class RallyHereEditor : ModuleRules
{
	public RallyHereEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		bEnforceIWYU = false;
		bTreatAsEngineModule = false;
		bEnableUndefinedIdentifierWarnings = false;
		bAllowConfidentialPlatformDefines = true;
		OptimizeCode = CodeOptimization.InNonDebugBuilds;
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivatePCHHeaderFile = "Public/RallyHereEditor.h";

		PrivateIncludePathModuleNames.AddRange(
		new string[] {
				"AssetTools",
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"UnrealEd",
				"RallyHereIntegration",
				"DeveloperSettings",
				"GameplayTags"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"AssetRegistry",
				"Slate",
				"SlateCore",
			}
		);

		PrivateIncludePaths.AddRange(
		   new string[] {
				"RallyHereEditor/Public",
				"RallyHereEditor/Private",
		   }
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[] {
				"AssetTools",
			}
		);
	}
}