
#pragma once

#include "Containers/UnrealString.h"

namespace ImGui
{
    // ImGui::InputText() with std::string
    // Because text input needs dynamic resizing, we need to setup a callback to grow the capacity
    IMGUI_API bool  InputText(const char* label, FString* str, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = nullptr, void* user_data = nullptr);
    IMGUI_API bool  InputTextMultiline(const char* label, FString* str, const ImVec2& size = ImVec2(0, 0), ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = nullptr, void* user_data = nullptr);
    IMGUI_API bool  InputTextWithHint(const char* label, const char* hint, FString* str, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = nullptr, void* user_data = nullptr);

    IMGUI_API ImVec2 CalcTextSize(const FString& str, bool hide_text_after_double_hash = false, float wrap_width = -1.0f);
}
