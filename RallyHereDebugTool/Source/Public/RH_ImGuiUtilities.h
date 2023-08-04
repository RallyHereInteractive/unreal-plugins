
#pragma once
#include "CoreMinimal.h"
#include "Misc/Guid.h"
#include "Misc/DateTime.h"
#include "Misc/Optional.h"
#include "imgui.h"
#include "RH_Common.h"

#define RH_STRINGENTRY_GUIDSIZE 64

#define RH_DefaultTreeFlags (ImGuiTreeNodeFlags_Framed)
#define RH_DefaultTreeFlagsDefaultOpen (ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_DefaultOpen)
#define RH_DefaultTreeFlagsLeaf (ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_Leaf)

#define RH_DefaultTableFlags (ImGuiTableFlags_Sortable | ImGuiTableFlags_Resizable | ImGuiTableFlags_BordersOuterH | ImGuiTableFlags_BordersOuterV | ImGuiTableFlags_BordersInnerH | ImGuiTableFlags_BordersInnerV)
#define RH_TableFlagsPropSizing (RH_DefaultTableFlags | ImGuiTableFlags_SizingStretchProp)
#define RH_TableFlagsFitSizing (RH_DefaultTableFlags | ImGuiTableFlags_SizingFixedFit)

#define PLATFORM_ALLOWS_COPY (PLATFORM_DESKTOP)

enum class ECopyMode : uint8
{
	Button,		// displays just a button saying "Copy"
	ButtonKey,	// displays just a button with the key as the label
	Key,		// displays the key and a copy button
	Value,		// displays the value and a copy button
	KeyValue,	// displays the key and value and a copy button in "%s : %s" format
	TwoColumn,	// displays the key and value in two columns format
};

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FString& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FGuid& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FDateTime& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const int32& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);

template<typename T>
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const T* Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false)
{
	if (Value != nullptr)
	{
		ImGuiDisplayCopyableValue(Key, *Value, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
	}
	else
	{
		if (CopyMode == ECopyMode::KeyValue)
		{
			ImGui::Text("%s : <UNSET>", TCHAR_TO_UTF8(*Key));
		}
		else if (CopyMode == ECopyMode::Value)
		{
			ImGui::Text("<UNSET>");
		}
	}
}

template<typename T>
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const TOptional<T>& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false)
{
	ImGuiDisplayCopyableValue<T>(Key, GetPtrOrNull(Value), CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}


void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TMap<FString, FString>& CustomData, const FString& Key = "");
FORCEINLINE void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TMap<FString, FString>* CustomData)
{
	if (CustomData != nullptr)
	{
		ImGuiDisplayCustomData(*CustomData);
	}
	else
	{
		ImGui::Text("<UNSET>");
	}
}
FORCEINLINE void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TOptional<TMap<FString, FString>>& CustomData)
{
	ImGuiDisplayCustomData(GetPtrOrNull(CustomData));
}

FString RALLYHEREDEBUGTOOL_API GetShortUuid(const FGuid& Uuid);

FORCEINLINE void RALLYHEREDEBUGTOOL_API ImGuiDisplayShortenedCopyableUuid(const FGuid& Uuid)
{
	FString buttonLabel = GetShortUuid(Uuid);
	ImGuiDisplayCopyableValue(buttonLabel, Uuid, ECopyMode::ButtonKey, false, true);
}

void RALLYHEREDEBUGTOOL_API ImGuiCopyStringToTextInputBuffer(const FString& StringToCopy, TArray<ANSICHAR>& Buffer);

FString RALLYHEREDEBUGTOOL_API ImGuiGetStringFromTextInputBuffer(TArray<ANSICHAR>& Buffer);