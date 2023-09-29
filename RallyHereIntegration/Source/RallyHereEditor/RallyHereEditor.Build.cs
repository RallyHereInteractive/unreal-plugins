using UnrealBuildTool;

public class RallyHereEditor : ModuleRules
{
	public RallyHereEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		bEnforceIWYU = true;
		bTreatAsEngineModule = true;
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
				"GameplayTags",
				"SlateCore",
				"Slate",
				"ToolWidgets",
				"RallyHereDeveloperAPI",
				"WebBrowserWidget",
				"Json",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"AssetRegistry",
				"Slate",
				"SlateCore",
				"Projects",
				"InputCore",
				"EditorFramework",
				"UnrealEd",
				"ToolMenus",
				"CoreUObject",
				"Engine",
				"WebBrowser",
				"WebBrowserWidget",
				"WorkspaceMenuStructure",
				"PropertyEditor"
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