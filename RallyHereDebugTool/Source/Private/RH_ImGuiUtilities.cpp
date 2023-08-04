
#include "RH_ImGuiUtilities.h"

// used for copy support
#if PLATFORM_ALLOWS_COPY
#include "HAL/PlatformApplicationMisc.h"
#endif

void ImGuiDisplayCopyableValue(const FString& Key, const FString& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	auto CopyButton = [Key, Value, CopyMode, bContentAsTooltip]() {
#if !PLATFORM_ALLOWS_COPY
		ImGui::BeginDisabled();
#endif
		FString ImGuiId = TEXT("Copy##") + Key;
		if (CopyMode == ECopyMode::ButtonKey)
		{
			ImGuiId = Key;
		}
		if (ImGui::SmallButton(TCHAR_TO_UTF8(*ImGuiId)))
		{
#if PLATFORM_ALLOWS_COPY
			FPlatformApplicationMisc::ClipboardCopy(*Value);
#endif
		}
		if (bContentAsTooltip)
		{
			if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
			{
				FString Tooltip = FString("Copy content:").Append(LINE_TERMINATOR).Append(Value);
				ImGui::SetTooltip("%s", TCHAR_TO_UTF8(*Tooltip));
			}
		}
#if !PLATFORM_ALLOWS_COPY
		ImGui::EndDisabled();
#endif
	};

	if (bButtonOnLeftSide)
	{
		CopyButton();
		if (CopyMode != ECopyMode::Button && CopyMode != ECopyMode::ButtonKey)
		{
			ImGui::SameLine();
		}
	}

	if (CopyMode == ECopyMode::Key)
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*Key));
	}
	else if (CopyMode == ECopyMode::Value)
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*Value));
	}
	else if (CopyMode == ECopyMode::KeyValue)
	{
		ImGui::Text("%s : %s", TCHAR_TO_UTF8(*Key), TCHAR_TO_UTF8(*Value));
	}
	else if (CopyMode == ECopyMode::TwoColumn)
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*Key));
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*Value));
	}

	if (!bButtonOnLeftSide)
	{
		if (CopyMode != ECopyMode::Button && CopyMode != ECopyMode::ButtonKey)
		{
			ImGui::SameLine();
		}
		CopyButton();
	}
	
	// advance column again
	if (CopyMode == ECopyMode::TwoColumn)
	{
		ImGui::NextColumn();
	}
}

void ImGuiDisplayCopyableValue(const FString& Key, const FGuid& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	FString ValueString = Value.ToString(EGuidFormats::DigitsWithHyphens);
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}

void ImGuiDisplayCopyableValue(const FString& Key, const FDateTime& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	FString ValueString = Value.ToString();
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}


void ImGuiDisplayCopyableValue(const FString& Key, const int32& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	FString ValueString = FString::Printf(TEXT("%d"), Value);
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}

void ImGuiDisplayCustomData(const TMap<FString, FString>& CustomData, const FString& Key)
{
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8 (*FString::Printf(TEXT("Custom Data##%s"), *Key)), RH_DefaultTreeFlags))
	{
		if (CustomData.Num() > 0)
		{
			for (const auto& pair : CustomData)
			{
				ImGuiDisplayCopyableValue(pair.Key, pair.Value);
			}
		}
		else
		{
			ImGui::Text("<EMPTY>");
		}

		ImGui::TreePop();
	}
}

void ImGuiCopyStringToTextInputBuffer(const FString& StringToCopy, TArray<ANSICHAR>& Buffer)
{
	FTCHARToUTF8 UTF8StringToCopy(*StringToCopy);
	auto Length = UTF8StringToCopy.Length() + 1; // includes null terminator

	if (Buffer.Num() < Length)
	{
		Buffer.AddZeroed(Length);
	}

	FMemory::Memcpy(Buffer.GetData(), UTF8StringToCopy.Get(), FMath::Min(Buffer.Num(), Length));
}

FString ImGuiGetStringFromTextInputBuffer(TArray<ANSICHAR>& Buffer)
{
	return UTF8_TO_TCHAR(Buffer.GetData());
}

FString GetShortUuid(const FGuid& Uuid)
{
	FString result = Uuid.ToString(EGuidFormats::DigitsWithHyphens); // Full UUID by default
	FString theRest = FString("");
	Uuid.ToString(EGuidFormats::DigitsWithHyphens).Split(FString("-"), &result, &theRest, ESearchCase::CaseSensitive);
	return result;
}