using UnrealBuildTool;
using System.IO;

public class NetImGuiLibrary : ModuleRules
{
#if WITH_FORWARDED_MODULE_RULES_CTOR
	public NetImGuiLibrary(ReadOnlyTargetRules Target) : base(Target)
#else
	public NetImGuiLibrary(TargetInfo Target)
#endif
	{
		Type = ModuleType.External;
	}
}
