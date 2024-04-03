// Distributed under the MIT License (MIT) (see accompanying LICENSE file)

using System.Collections.Generic;
using System.IO;
using UnrealBuildTool;

public class ImGui : ModuleRules
{
#if WITH_FORWARDED_MODULE_RULES_CTOR
	public ImGui(ReadOnlyTargetRules Target) : base(Target)
#else
	public ImGui(TargetInfo Target)
#endif
	{

#if WITH_FORWARDED_MODULE_RULES_CTOR
		bool bBuildEditor = Target.bBuildEditor;
#else
		bool bBuildEditor = (Target.Type == TargetRules.TargetType.Editor);
#endif

		// Developer modules are automatically loaded only in editor builds but can be stripped out from other builds.
		// Enable runtime loader, if you want this module to be automatically loaded in runtime builds (monolithic).
		bool bEnableRuntimeLoader = true;

		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//$$ Also needed for UE5
		bAllowConfidentialPlatformDefines = true;

#if UE_4_24_OR_LATER
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Error;
		bTreatAsEngineModule = true;
#endif
		// main imgui and docking branchs upport
		{
			PublicDefinitions.Add("WITH_IMGUI_DOCK_SUPPORT");
			PublicDefinitions.Add("WITH_IMGUI_STRING_SUPPORT");
			PublicIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "../ThirdParty/ImGuiLibrary/Public"),
				Path.Combine(ModuleDirectory, "../ThirdParty/ImGuiStringLibrary/Public"),
				// ... add public include paths required here ...
			}
			);

			PrivateIncludePaths.AddRange(
				new string[] {
				"ImGui/Private",
				Path.Combine(ModuleDirectory, "../ThirdParty/ImGuiLibrary/Private"),
				Path.Combine(ModuleDirectory, "../ThirdParty/ImGuiStringLibrary/Private"),
				// ... add other private include paths required here ...
			}
			);
		}

		// implot support
		{
			PublicDefinitions.Add("WITH_IMGUI_IMPLOT");
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty/ImPlotLibrary/Public"));
			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty/ImPlotLibrary/Private"));
		}


		// netimgui support
		{
			PublicDefinitions.Add("WITH_IMGUI_NETIMGUI");
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty/NetImGuiLibrary/Public"));
			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty/NetImGuiLibrary"));	//netimgui private files are already in a Private folder, and assume the include path to the containing folder
		}

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Projects"
				// ... add other public dependencies that you statically link with here ...
			}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"InputCore",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
				"PosixShim",
				"Sockets"
			}
			);


		if (bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"EditorStyle",
					"Settings",
					"UnrealEd",
				}
				);
		}


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);


#if !UE_4_19_OR_LATER
		List<string> PrivateDefinitions = Definitions;
#endif

		PrivateDefinitions.Add(string.Format("RUNTIME_LOADER_ENABLED={0}", bEnableRuntimeLoader ? 1 : 0));
		PrivateDefinitions.Add("IMGUI_DEFINE_MATH_OPERATORS"); //$$ ImGui 1.89.5 upgrade
	}
}
