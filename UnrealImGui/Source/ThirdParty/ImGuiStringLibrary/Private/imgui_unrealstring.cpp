
#include "imgui.h"
#include "imgui_unrealstring.h"
#include "Containers/StringConv.h"
#include "Containers/StringView.h"
#include <memory>
#include <string>

void  ImGui::Text(FStringView label)
{
	FTCHARToUTF8 Converter(label.GetData(), label.Len());
	return Text(Converter.Get());
}
bool  ImGui::Button(FStringView label, const ImVec2& size)
{
	FTCHARToUTF8 Converter(label.GetData(), label.Len());
	return Button(Converter.Get());
}
bool  ImGui::SmallButton(FStringView label)
{
	FTCHARToUTF8 Converter(label.GetData(), label.Len());
	return SmallButton(Converter.Get());
}

struct InputTextCallback_UserData_UnrealString
{
	FString*                OriginalStr;
	std::shared_ptr<std::string> Str;
	ImGuiInputTextCallback  ChainCallback;
	void*                   ChainCallbackUserData;
};

static int InputTextCallback_UnrealString(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData_UnrealString* user_data = (InputTextCallback_UserData_UnrealString*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        IM_ASSERT(data->Buf == user_data->Str->c_str());
		user_data->Str->resize(data->BufTextLen);
        data->Buf = (char*)user_data->Str->c_str();

        // update unreal string
        *user_data->OriginalStr = FString(UTF8_TO_TCHAR(user_data->Str->c_str()));
    }
    else if (data->EventFlag == ImGuiInputTextFlags_CallbackEdit)
    {
        // update unreal string
        *user_data->OriginalStr = FString(UTF8_TO_TCHAR(user_data->Str->c_str()));
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}

bool ImGui::InputText(const char* label, FString* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserData_UnrealString cb_user_data;
    cb_user_data.OriginalStr = str;
    cb_user_data.Str = std::make_shared<std::string>(TCHAR_TO_UTF8(**str));    // copy string to std::string
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    auto ret = InputText(label, (char*)cb_user_data.Str->c_str(), cb_user_data.Str->capacity() + 1, flags, InputTextCallback_UnrealString, &cb_user_data);
	// update unreal string in case the text was changed
	*cb_user_data.OriginalStr = FString(UTF8_TO_TCHAR(cb_user_data.Str->c_str()));
	return ret;
}

bool ImGui::InputTextMultiline(const char* label, FString* str, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserData_UnrealString cb_user_data;
    cb_user_data.OriginalStr = str;
	cb_user_data.Str = std::make_shared<std::string>(TCHAR_TO_UTF8(**str));    // copy string to std::string
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    auto ret = InputTextMultiline(label, (char*)cb_user_data.Str->c_str(), cb_user_data.Str->capacity() + 1, size, flags, InputTextCallback_UnrealString, &cb_user_data);
	// update unreal string in case the text was changed
	*cb_user_data.OriginalStr = FString(UTF8_TO_TCHAR(cb_user_data.Str->c_str()));
	return ret;
}

bool ImGui::InputTextWithHint(const char* label, const char* hint, FString* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserData_UnrealString cb_user_data;
    cb_user_data.OriginalStr = str;
	cb_user_data.Str = std::make_shared<std::string>(TCHAR_TO_UTF8(**str));    // copy string to std::string
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    auto ret = InputTextWithHint(label, hint, (char*)cb_user_data.Str->c_str(), cb_user_data.Str->capacity() + 1, flags, InputTextCallback_UnrealString, &cb_user_data);
	// update unreal string in case the text was changed
	*cb_user_data.OriginalStr = FString(UTF8_TO_TCHAR(cb_user_data.Str->c_str()));
	return ret;
}

ImVec2 ImGui::CalcTextSize(const FString& str, bool hide_text_after_double_hash, float wrap_width)
{
    return CalcTextSize(TCHAR_TO_UTF8(*str), nullptr, hide_text_after_double_hash, wrap_width);
}