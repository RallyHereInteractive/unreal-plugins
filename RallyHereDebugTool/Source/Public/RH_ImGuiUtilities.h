// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once
#include "CoreMinimal.h"
#include "Misc/Guid.h"
#include "Misc/DateTime.h"
#include "Misc/Optional.h"
#include "Dom/JsonObject.h"
#include "imgui.h"
#include "RH_Properties.h"
#include "RH_Common.h"

#define RH_STRINGENTRY_GUIDSIZE 64
static int32 GuidFieldWidth = 300;

#define RH_DefaultTreeFlags (ImGuiTreeNodeFlags_Framed)
#define RH_DefaultTreeFlagsDefaultOpen (ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_DefaultOpen)
#define RH_DefaultTreeFlagsLeaf (ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_Leaf)

#define RH_DefaultTableFlags (ImGuiTableFlags_Resizable | ImGuiTableFlags_BordersOuterH | ImGuiTableFlags_BordersOuterV | ImGuiTableFlags_BordersInnerH | ImGuiTableFlags_BordersInnerV)
#define RH_TableFlagsPropSizing (RH_DefaultTableFlags | ImGuiTableFlags_SizingStretchProp)
#define RH_TableFlagsFitSizing (RH_DefaultTableFlags | ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_NoHostExtendX)

#define PLATFORM_ALLOWS_COPY (PLATFORM_DESKTOP)

#ifdef WITH_IMGUI_STRING_SUPPORT
#include "imgui_stdlib.h"
#include "imgui_unrealstring.h"
#else
#error "The RallyHere Debug Tool assumes that imgui_stdlib.h and imgui_unrealstring.h are able to be included, see ImGuiStringLibrary module"
#endif

enum class ECopyMode : uint8
{
	Button,		// displays just a button saying "Copy"
	ButtonKey,	// displays just a button with the key as the label
	Key,		// displays the key and a copy button
	Value,		// displays the value and a copy button
	KeyValue,	// displays the key and value and a copy button in "%s : %s" format
	TwoColumn,	// displays the key and value in two columns format
};

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyButton(const FString& Key, const FString& Value, bool bContentAsTooltip = false, bool bUseKeyAsLabel = false);

void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FString& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FText& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FGuid& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FDateTime& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableValue(const FString& Key, const FTimespan& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false);
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
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableEnumValue(const FString& Key, const T& Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false, bool bUseDisplayName = true)
{
	FString DisplayValue = bUseDisplayName ? UEnum::GetDisplayValueAsText(Value).ToString() : UEnum::GetValueAsString(Value);

	ImGuiDisplayCopyableValue(Key, DisplayValue, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}

template<typename T>
void RALLYHEREDEBUGTOOL_API ImGuiDisplayCopyableEnumValue(const FString& Key, const T* Value, ECopyMode CopyMode = ECopyMode::KeyValue, bool bButtonOnLeftSide = false, bool bContentAsTooltip = false, bool bUseDisplayName = true)
{
	if (Value != nullptr)
	{
		ImGuiDisplayCopyableEnumValue(Key, *Value, CopyMode, bButtonOnLeftSide, bContentAsTooltip, bUseDisplayName);
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


void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TMap<FString, FString>& CustomData, const FString & Key = "", const FString& Label = TEXT("Custom Data"));
FORCEINLINE void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TMap<FString, FString>* CustomData, const FString& Key = TEXT(""), const FString& Label = TEXT("Custom Data"))
{
	if (CustomData != nullptr)
	{
		ImGuiDisplayCustomData(*CustomData, Key, Label);
	}
	else
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s##%s"), *Label, *Key)), RH_DefaultTreeFlags))
		{
			ImGui::Text("<UNSET>");

			ImGui::TreePop();
		}
	}
}
FORCEINLINE void RALLYHEREDEBUGTOOL_API ImGuiDisplayCustomData(const TOptional<TMap<FString, FString>>& CustomData, const FString& Key = TEXT(""), const FString& Label = TEXT("Custom Data"))
{
	ImGuiDisplayCustomData(GetPtrOrNull(CustomData), Key, Label);
}

FString RALLYHEREDEBUGTOOL_API GetShortUuid(const FGuid& Uuid);

FORCEINLINE void RALLYHEREDEBUGTOOL_API ImGuiDisplayShortenedCopyableUuid(const FGuid& Uuid)
{
	FString buttonLabel = GetShortUuid(Uuid);
	ImGuiDisplayCopyableValue(buttonLabel, Uuid, ECopyMode::ButtonKey, false, true);
}

void RALLYHEREDEBUGTOOL_API ImGuiDisplayJsonObject(const TSharedPtr<FJsonObject> JsonObject, bool bHasCopyAllButton);
void RALLYHEREDEBUGTOOL_API ImGuiDisplayJsonArray(const TArray<TSharedPtr<FJsonValue>> JsonArray);

template<typename ModelType>
void ImGuiDisplayModelData(const ModelType& Model)
{
	ImGuiDisplayModelData(Model, *ModelType::StaticStruct());
}

void RALLYHEREDEBUGTOOL_API ImGuiDisplayProperty(const FString& Key, FProperty const* Property, FProperty const* IsSetProperty, uint8 const* Data, uint8 const* IsSetData, const FString& IdentifierKey = FString(""));
void RALLYHEREDEBUGTOOL_API ImGuiDisplayModelData(const FRHAPI_Model& Model, const UStruct& Struct);

void RALLYHEREDEBUGTOOL_API ImGuiCopyStringToTextInputBuffer(const FString& StringToCopy, TArray<ANSICHAR>& Buffer);

FString RALLYHEREDEBUGTOOL_API ImGuiGetStringFromTextInputBuffer(TArray<ANSICHAR>& Buffer);

// changes current value reference if changed, returns true if changed
bool RALLYHEREDEBUGTOOL_API ImGuiDisplayCombo(const FString& ComboLabel, FString& CurrentValue, const TArray<FString>& PossibleValues, const TMap<FString, FString>* DisplayNames);
// changes current value reference if changed, returns true if changed
template<typename T>
bool RALLYHEREDEBUGTOOL_API ImGuiDisplayEnumCombo(const FString& ComboLabel, T& CurrentValue)
{
	// look up the UEnum for the type
	static_assert(TIsEnum<T>::Value, "Should only call this with enum types");
	UEnum* EnumClass = StaticEnum<T>();
	check(EnumClass != nullptr);
	
	// build value list
	TArray<FString> Values;
	TMap<FString, FString> DisplayNames;
	Values.Reserve(EnumClass->NumEnums());
	DisplayNames.Reserve(EnumClass->NumEnums());
	for (int64 EnumIndex = 0; EnumIndex < EnumClass->NumEnums(); ++EnumIndex)
	{
		const auto ValueName = EnumClass->GetNameStringByIndex(EnumIndex);

		// exclude the _MAX entry
		bool bIndexIsMAXEntry = EnumClass->ContainsExistingMax() && (ValueName.EndsWith(TEXT("_MAX"), ESearchCase::CaseSensitive));
		if (bIndexIsMAXEntry)
		{
			continue;
		}

		const auto ValueDisplayname = EnumClass->GetDisplayNameTextByIndex(EnumIndex).ToString();
		Values.Add(ValueName);
		DisplayNames.Add(ValueName, ValueDisplayname);
	}

	// look up current value
	FString CurrentString = EnumClass->GetNameStringByValue((int64)CurrentValue);

	// display combo
	bool bChanged = ImGuiDisplayCombo(ComboLabel, CurrentString, Values, &DisplayNames);
	if (bChanged)
	{
		int64 NewValueInt64 = EnumClass->GetValueByNameString(CurrentString);
		if (NewValueInt64 != INDEX_NONE)
		{
			CurrentValue = (T)NewValueInt64;
		}
	}
	return bChanged;
}

namespace ImGuiColors
{
	FORCEINLINE static const ImGuiStyle& GetDefaultStyle()
	{
		static ImGuiStyle DefaultStyle = ImGuiStyle();
		return DefaultStyle;
	}

	FORCEINLINE ImVec4 FLinearColorToImColor(const FLinearColor& LinearColor)
	{
		return ImVec4(LinearColor.R, LinearColor.G, LinearColor.B, LinearColor.A);
	}
	FORCEINLINE ImVec4 LinearColorToImColor(float R, float G, float B, float A)
	{
		const FLinearColor LinearColor = FLinearColor(R, G, B, A);
		return FLinearColorToImColor(LinearColor);
	}

	FORCEINLINE ImVec4 FColorToImColor(const FColor& InColor)
	{
		return FLinearColorToImColor(InColor.ReinterpretAsLinear());
	}
	FORCEINLINE ImVec4 ColorToImColor(uint8 R, uint8 G, uint8 B, uint8 A)
	{
		const FColor Color = FColor(R, G, B, A);
		return FColorToImColor(Color);
	}

	namespace HeaderStyle
	{
		typedef TTuple<ImVec4, ImVec4, ImVec4> HeaderStyleColor;

		static const ImVec4 Red_Base = ColorToImColor(121, 51, 70, 230);
		static const ImVec4 Red_Hovered = ColorToImColor(131, 49, 73, 230);
		static const ImVec4 Red_Active = ColorToImColor(155, 71, 93, 230);
		static const HeaderStyleColor Red = { Red_Base, Red_Hovered, Red_Active };

		static const ImVec4 Yellow_Base = ColorToImColor(113, 111, 60, 230);
		static const ImVec4 Yellow_Hovered = ColorToImColor(132, 130, 63, 230);
		static const ImVec4 Yellow_Active = ColorToImColor(150, 148, 85, 230);
		static const HeaderStyleColor Yellow = { Yellow_Base, Yellow_Hovered, Yellow_Active };

		static const ImVec4 Teal_Base = ColorToImColor(58, 107, 109, 230);
		static const ImVec4 Teal_Hovered = ColorToImColor(59, 123, 125, 230);
		static const ImVec4 Teal_Active = ColorToImColor(82, 142, 144, 230);
		static const HeaderStyleColor Teal = { Teal_Base, Teal_Hovered, Teal_Active };

		FORCEINLINE static HeaderStyleColor GetDefault()
		{
			const auto& DefaultStyle = GetDefaultStyle();
			return HeaderStyleColor(DefaultStyle.Colors[ImGuiCol_Header], DefaultStyle.Colors[ImGuiCol_HeaderHovered], DefaultStyle.Colors[ImGuiCol_HeaderActive]);
		}

		static int32 HeaderStackCount = 0;

		FORCEINLINE bool IsStyledHeaderActive() { return HeaderStackCount > 0; };

		FORCEINLINE int32 Push(const ImVec4& BaseColor, const ImVec4& HoveredColor, const ImVec4& ActiveColor)
		{
			ImGui::PushStyleColor(ImGuiCol_Header, BaseColor);
			ImGui::PushStyleColor(ImGuiCol_HeaderHovered, HoveredColor);
			ImGui::PushStyleColor(ImGuiCol_HeaderActive, ActiveColor);

			return ++HeaderStackCount;
		}

		FORCEINLINE int32 Push(const HeaderStyleColor& Style)
		{
			return Push(Style.Get<0>(), Style.Get<1>(), Style.Get<2>());
		}

		FORCEINLINE int32 Pop()
		{
			if (HeaderStackCount > 0)
			{
				ImGui::PopStyleColor(3);
				--HeaderStackCount;
			}
			return HeaderStackCount;
		}

		FORCEINLINE void PopAll()
		{
			while (HeaderStackCount > 0)
			{
				Pop();
			}
		}

		struct ScopedHeaderStyle
		{
			ScopedHeaderStyle(const HeaderStyleColor InStyle)
				: Style(InStyle)
			{
				Push(Style);
			}

			~ScopedHeaderStyle()
			{
				Pop();
			}

			const HeaderStyleColor Style;
		};
	}
}

struct RALLYHEREDEBUGTOOL_API FImGuiCustomDataStager
{
public:
	FImGuiCustomDataStager()
		: KeyInputLength(64),
		ValueInputLength(256)
	{
		AddKeyInput.SetNumZeroed(KeyInputLength);
		AddValueInput.SetNumZeroed(ValueInputLength);
		Name.Empty();
		Warnings.Empty();
	};

	FImGuiCustomDataStager(int32 InKeyInputLength, int32 InValueInputLength)
		: FImGuiCustomDataStager()
	{
		KeyInputLength = InKeyInputLength;
		ValueInputLength = InValueInputLength;
	}

	void SetName(const FString& InName) { Name = InName; };

	void DisplayCustomDataStager(bool bDefaultOpen = true, const TMap<FString, FString>* CurrentState = nullptr);

	void GetCustomDataMap(TMap<FString, FString>& OutMap);
	void SetDataFromMap(const TMap<FString, FString>& InMap);

	void Clear() { SetDataFromMap(TMap<FString, FString>()); }

private:
	struct KeyValueInputPair
	{
		TArray<ANSICHAR> KeyInput;
		TArray<ANSICHAR> ValueInput;

		inline bool operator ==(const KeyValueInputPair& OtherPair) const
		{
			return KeyInput == OtherPair.KeyInput;
		}
	};

	FString Name;
	TArray<KeyValueInputPair> Fields;
	TArray<ANSICHAR> AddKeyInput;
	TArray<ANSICHAR> AddValueInput;
	int32 KeyInputLength;
	int32 ValueInputLength;
	static const int32 TextInputPadding = 6;
	FString Warnings;

// Helpers
	void ConvertToJsonStringIfValid(TArray<ANSICHAR>& InString) const;
};