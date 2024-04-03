using UnrealBuildTool;
using System.IO;

public class ImGuiStringLibrary : ModuleRules
{
#if WITH_FORWARDED_MODULE_RULES_CTOR
	public ImGuiStringLibrary(ReadOnlyTargetRules Target) : base(Target)
#else
	public ImGuiStringLibrary(TargetInfo Target)
#endif
	{
		Type = ModuleType.External;
	}
}
