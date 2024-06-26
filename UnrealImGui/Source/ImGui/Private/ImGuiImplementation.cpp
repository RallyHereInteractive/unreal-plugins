// Distributed under the MIT License (MIT) (see accompanying LICENSE file)

#include "ImGuiImplementation.h"

#include <CoreMinimal.h>

// For convenience and easy access to the ImGui source code, we build it as part of this module.
// We don't need to define IMGUI_API manually because it is already done for this module.

#if PLATFORM_MICROSOFT && !PLATFORM_DESKTOP
// Disable Win32 functions used in ImGui and not supported on XBox.
#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS
#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
#endif

#if PLATFORM_WINDOWS
#include <Windows/AllowWindowsPlatformTypes.h>
#endif // PLATFORM_WINDOWS

#if WITH_EDITOR

#include "ImGuiModule.h"
#include "Utilities/RedirectingHandle.h"

// Redirecting handle which will automatically bind to another one, if a different instance of the module is loaded.
struct FImGuiContextHandle : public Utilities::TRedirectingHandle<ImGuiContext*>
{
	FImGuiContextHandle(ImGuiContext*& InDefaultContext)
		: Utilities::TRedirectingHandle<ImGuiContext*>(InDefaultContext)
	{
		if (FImGuiModule* Module = FModuleManager::GetModulePtr<FImGuiModule>("ImGui"))
		{
			SetParent(Module->ImGuiContextHandle);
		}
	}
};

static ImGuiContext* ImGuiContextPtr = nullptr;
static FImGuiContextHandle ImGuiContextPtrHandle(ImGuiContextPtr);

// Get the global ImGui context pointer (GImGui) indirectly to allow redirections in obsolete modules.
#define GImGui (ImGuiContextPtrHandle.Get())
#endif // WITH_EDITOR

#include "imgui.cpp"
#include "imgui_demo.cpp"
#include "imgui_draw.cpp"
#include "imgui_widgets.cpp"

//$$ BEGIN - Support additional features
#include "imgui_tables.cpp"
//$$ END - Support additional features

#ifdef WITH_IMGUI_STRING_SUPPORT
#include "imgui_stdlib.cpp"
#include "imgui_unrealstring.cpp"
#endif

//$$ BEGIN - Support ImPlot
#ifdef WITH_IMGUI_IMPLOT
#include "implot.cpp"
#include "implot_items.cpp"
#include "implot_demo.cpp"
#endif
//$$ END - Support ImPlot

//$$ BEGIN - Support NetImGui
#ifdef WITH_IMGUI_NETIMGUI
#define NETIMGUI_IMPLEMENTATION
#define NETIMGUI_WINSOCKET_ENABLED 0
#define NETIMGUI_POSIX_SOCKETS_ENABLED 0
#include "NetImgui_Api.h"
#endif
//$$ END - Support NetImGui

#if PLATFORM_WINDOWS
#include <Windows/HideWindowsPlatformTypes.h>
#endif // PLATFORM_WINDOWS

#include "ImGuiInteroperability.h"


namespace ImGuiImplementation
{
#if WITH_EDITOR
	FImGuiContextHandle& GetContextHandle()
	{
		return ImGuiContextPtrHandle;
	}

	void SetParentContextHandle(FImGuiContextHandle& Parent)
	{
		ImGuiContextPtrHandle.SetParent(&Parent);
	}
#endif // WITH_EDITOR
}
