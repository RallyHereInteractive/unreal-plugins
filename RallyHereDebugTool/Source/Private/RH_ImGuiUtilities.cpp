
#include "RH_ImGuiUtilities.h"

// used for copy support
#if PLATFORM_ALLOWS_COPY
#include "HAL/PlatformApplicationMisc.h"
#endif

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FString& Value, ECopyMode CopyMode)
{
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
#if PLATFORM_ALLOWS_COPY
	FString ImGuiId = TEXT("Copy##") + Key;
	if (CopyMode != ECopyMode::Button && CopyMode != ECopyMode::ButtonKey)
	{
		ImGui::SameLine();
	}
	if (CopyMode == ECopyMode::ButtonKey)
	{
		ImGuiId = Key;
	}
	if (ImGui::SmallButton(TCHAR_TO_UTF8(*ImGuiId)))
	{
		FPlatformApplicationMisc::ClipboardCopy(*Value);
	}
#endif
	// advance column again
	if (CopyMode == ECopyMode::TwoColumn)
	{
		ImGui::NextColumn();
	}
}

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FGuid& Value, ECopyMode CopyMode)
{
	FString ValueString = Value.ToString(EGuidFormats::DigitsWithHyphens);
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode);
}

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FDateTime& Value, ECopyMode CopyMode)
{
	FString ValueString = Value.ToString();
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode);
}


void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const int32& Value, ECopyMode CopyMode)
{
	FString ValueString = FString::Printf(TEXT("%d"), Value);
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode);
}

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TOptional<TMap<FString, FString>>& CustomData)
{
	if (ImGui::TreeNodeEx("Custom Data", RH_DefaultTreeFlags))
	{
		if (CustomData.IsSet() && CustomData->Num() > 0)
		{
			for (auto pair : CustomData.GetValue())
			{
				ImGuiDisplayCopyableValue(pair.Key, pair.Value);
			}
		}
		else if (CustomData.IsSet() && CustomData->Num() > 0)
		{
			ImGui::Text("<EMPTY>");
		}
		else
		{
			ImGui::Text("<UNSET>");
		}

		ImGui::TreePop();
	}
}