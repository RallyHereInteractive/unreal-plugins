// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_ImGuiUtilities.h"
#include "Dom/JsonValue.h"

#include "UObject/Field.h"

// used for copy support
#include "HAL/PlatformApplicationMisc.h"

void ImGuiDisplayCopyButton(const FString& Key, const FString& Value, bool bContentAsTooltip, bool bUseKeyAsLabel)
{
#if !PLATFORM_ALLOWS_COPY
	ImGui::BeginDisabled();
#endif
	FString ImGuiId = TEXT("Copy##") + Key;
	if (bUseKeyAsLabel)
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
			FString Tooltip = FString(TEXT("Copy content:")).Append(LINE_TERMINATOR).Append(Value);
			ImGui::SetTooltip("%s", TCHAR_TO_UTF8(*Tooltip));
		}
	}
#if !PLATFORM_ALLOWS_COPY
	ImGui::EndDisabled();
#endif
}

void ImGuiDisplayCopyableValue(const FString& Key, const FString& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	if (bButtonOnLeftSide)
	{
		ImGuiDisplayCopyButton(Key, Value, bContentAsTooltip, CopyMode == ECopyMode::ButtonKey);
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
		ImGuiDisplayCopyButton(Key, Value, bContentAsTooltip, CopyMode == ECopyMode::ButtonKey);
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
	FString ValueString = Value.ToIso8601();
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}

void ImGuiDisplayCopyableValue(const FString& Key, const FTimespan& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	FString ValueString = Value.ToString();
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}

void ImGuiDisplayCopyableValue(const FString& Key, const int32& Value, ECopyMode CopyMode, bool bButtonOnLeftSide, bool bContentAsTooltip)
{
	FString ValueString = FString::Printf(TEXT("%d"), Value);
	ImGuiDisplayCopyableValue(Key, ValueString, CopyMode, bButtonOnLeftSide, bContentAsTooltip);
}

void ImGuiDisplayCustomData(const TMap<FString, FString>& CustomData, const FString& Key, const FString& Label)
{
	bool bCanCopyToClipboard = false;
#if PLATFORM_ALLOWS_COPY
	bCanCopyToClipboard = true;
#endif
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s##%s"), *Label, *Key)), RH_DefaultTreeFlags))
	{
		if (CustomData.Num() > 0)
		{
			if (ImGui::BeginTable(TCHAR_TO_UTF8(*FString::Printf(TEXT("CustomDataTable##%s"), *Key)), bCanCopyToClipboard ? 3 : 2, RH_TableFlagsFitSizing))
			{
				ImGui::TableSetupColumn("Key");
				ImGui::TableSetupColumn("Value");
				if (bCanCopyToClipboard)
				{
					ImGui::TableSetupColumn("Action");
				}
				ImGui::TableHeadersRow();

				int32 Id = 0;
				for (const auto& pair : CustomData)
				{
					ImGui::PushID(Id++);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*pair.Key));
					ImGui::TableNextColumn();
					// Parse potential JSON
					auto Reader = TJsonReaderFactory<>::Create(pair.Value);
					TSharedPtr<FJsonObject> JsonObject;
					if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
					{
						FString OutJsonString;
						TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutJsonString);
						FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
						ImGui::Text("%s", TCHAR_TO_UTF8(*OutJsonString));
					}
					else
					{
						ImGui::Text("%s", TCHAR_TO_UTF8(*pair.Value));
					}
					if (bCanCopyToClipboard)
					{
						ImGui::TableNextColumn();
						if (ImGui::SmallButton("Copy"))
						{
							FPlatformApplicationMisc::ClipboardCopy(*pair.Value);
						}
					}
					ImGui::PopID();
				}
				ImGui::EndTable();
			}
		}
		else
		{
			ImGui::Text("<EMPTY>");
		}

		ImGui::TreePop();
	}
}

void ImGuiDisplayProperty(const FString& Key, FProperty const* Property, FProperty const* IsSetProperty, uint8 const* Data, uint8 const* IsSetData, const FString& IdentifierKey)
{
	if (IsSetProperty != nullptr)
	{
		if (FBoolProperty const* BoolProp = CastField<FBoolProperty>(IsSetProperty))
		{
			if (!BoolProp->GetPropertyValue(IsSetData))
			{
				ImGui::Text("<UNSET>");
				return;
			}
		}
	}

	if (FBoolProperty const* BoolProp = CastField<FBoolProperty>(Property))
	{
		ImGui::Text(BoolProp->GetPropertyValue(Data) ? "TRUE" : "FALSE");
	}
	else if (FNumericProperty const* NumericProperty = CastField<FNumericProperty>(Property))
	{
		if (NumericProperty->IsInteger())
		{
			ImGuiDisplayCopyableValue(Key, FString::Printf(TEXT("%d"), NumericProperty->GetSignedIntPropertyValue(Data)), ECopyMode::Value);
		}
		else
		{
			ImGuiDisplayCopyableValue(Key, FString::Printf(TEXT("%f"), NumericProperty->GetFloatingPointPropertyValue(Data)), ECopyMode::Value);
		}
	}
	else if (FEnumProperty const* EnumProperty = CastField<FEnumProperty>(Property))
	{
		FString	ValueStr;
		Property->ExportText_Direct(ValueStr, Data, Data, nullptr, PPF_None);

		ImGuiDisplayCopyableValue(Key, FString::Printf(TEXT("%s"), *ValueStr), ECopyMode::Value);
	}
	else if (FStrProperty const* StringProperty = CastField<FStrProperty>(Property))
	{
		FString	ValueStr;
		Property->ExportText_Direct(ValueStr, Data, Data, nullptr, PPF_None);

		FGuid TestGuid;

		if (FGuid::Parse(ValueStr, TestGuid))
		{
			ImGuiDisplayCopyableValue(Key, FString::Printf(TEXT("%s"), *TestGuid.ToString(EGuidFormats::DigitsWithHyphens)), ECopyMode::Value);
		}
		else
		{
			ImGuiDisplayCopyableValue(Key, FString::Printf(TEXT("%s"), *ValueStr), ECopyMode::Value);
		}
	}
	else if (FMapProperty const* MapProp = CastField<FMapProperty>(Property))
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("Map##%s%s"), *Key, *IdentifierKey)), RH_DefaultTreeFlags))
		{
			if (ImGui::BeginTable("DataTable", 2, RH_TableFlagsPropSizing))
			{
				ImGui::TableSetupColumn("Key");
				ImGui::TableSetupColumn("Value");
				ImGui::TableHeadersRow();

				FScriptMapHelper MapHelper(MapProp, Data);
				for (int32 i = 0; i < MapHelper.Num(); ++i)
				{
					FProperty* KeyProp = MapHelper.GetKeyProperty();
					FProperty* ValueProp = MapHelper.GetValueProperty();

					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGuiDisplayProperty(KeyProp->GetName(), KeyProp, nullptr, MapHelper.GetKeyPtr(i), nullptr, FString::Printf(TEXT("%d"), i));
					ImGui::TableNextColumn();
					ImGuiDisplayProperty(ValueProp->GetName(), ValueProp, nullptr, MapHelper.GetValuePtr(i), nullptr, FString::Printf(TEXT("%d"), i));
				}

				ImGui::EndTable();

			}
			ImGui::TreePop();
		}
	}
	else if (FStructProperty const* StructProp = CastField<FStructProperty>(Property))
	{
		if (StructProp->Struct->IsChildOf(FRHAPI_Model::StaticStruct()))
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s##%s%s"), *StructProp->Struct->GetName(), *Key, *IdentifierKey)), RH_DefaultTreeFlags))
			{
				ImGuiDisplayModelData(*(FRHAPI_Model*)Data, *StructProp->Struct);
				ImGui::TreePop();
			}
		}
		else
		{
			FString	ValueStr;
			Property->ExportText_Direct(ValueStr, Data, Data, nullptr, PPF_None);

			ImGuiDisplayCopyableValue(Key, FString::Printf(TEXT("%s"), *ValueStr), ECopyMode::Value);
		}
	}
	else if (FArrayProperty const* ArrayProp = CastField<FArrayProperty>(Property))
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("Array##%s%s"), *Key, *IdentifierKey)), RH_DefaultTreeFlags))
		{
			FScriptArrayHelper ArrayHelper(ArrayProp, Data);
			for (int32 i = 0; i < ArrayHelper.Num(); ++i)
			{
				ImGuiDisplayProperty(ArrayProp->GetName(), ArrayProp->Inner, nullptr, ArrayHelper.GetRawPtr(i), nullptr);
			}
			ImGui::TreePop();
		}
	}
	else
	{
		ImGui::Text("ERROR: Unknown Property Type");
	}
}

void ImGuiDisplayModelData(const FRHAPI_Model& Model, const UStruct& Struct)
{
	TArray<FProperty*> ValueProperties;
	TArray<FProperty*> IsSetProperties;

	for (TFieldIterator<FProperty> It(&Struct); It; ++It)
	{
		FProperty* Property = *It;

		if (Property->GetName().Contains(TEXT("_IsSet")))
		{
			IsSetProperties.Add(Property);
			continue;
		}

		ValueProperties.Add(Property);
	}

	if (ImGui::BeginTable("DataTable", 2, RH_TableFlagsPropSizing))
	{
		ImGui::TableSetupColumn("Key");
		ImGui::TableSetupColumn("Value");
		ImGui::TableHeadersRow();

		for (const auto& Prop : ValueProperties)
		{
			FProperty* IsSetProp = nullptr;
			FString PropName = Prop->GetName();

			if (Prop->GetName().Contains(TEXT("_Optional")))
			{
				PropName = PropName.LeftChop(9);
				IsSetProp = *IsSetProperties.FindByPredicate([&](const FProperty* IsSetProp) { return IsSetProp->GetName() == PropName + TEXT("_IsSet"); });
				PropName = PropName + "<?>";
			}

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*PropName));
			ImGui::TableNextColumn();
			ImGuiDisplayProperty(PropName, Prop, IsSetProp, Prop->ContainerPtrToValuePtr<uint8>(&Model), IsSetProp != nullptr ? IsSetProp->ContainerPtrToValuePtr<uint8>(&Model) : nullptr);
		}

		ImGui::EndTable();
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
	FString theRest = FString();
	Uuid.ToString(EGuidFormats::DigitsWithHyphens).Split(FString(TEXT("-")), &result, &theRest, ESearchCase::CaseSensitive);
	return result;
}

void ImGuiDisplayJsonObject(const TSharedPtr<FJsonObject> JsonObject, bool bHasCopyAllButton)
{
	if (JsonObject.IsValid())
	{
		for (auto jsonValueIt = JsonObject->Values.CreateConstIterator(); jsonValueIt; ++jsonValueIt)
		{
			const TSharedPtr<FJsonObject>* ValueAsObject;
			const TArray<TSharedPtr<FJsonValue>>* ValueAsArray;
			if ((*jsonValueIt).Value->TryGetObject(ValueAsObject))
			{
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*(*jsonValueIt).Key), RH_DefaultTreeFlags))
				{
					ImGuiDisplayJsonObject(*ValueAsObject, false);
					ImGui::TreePop();
				}
			}
			else if ((*jsonValueIt).Value->TryGetArray(ValueAsArray))
			{
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*(*jsonValueIt).Key), RH_DefaultTreeFlags))
				{
					ImGuiDisplayJsonArray(*ValueAsArray);
					ImGui::TreePop();
				}
			}
			else
			{
				ImGuiDisplayCopyableValue((*jsonValueIt).Key, (*jsonValueIt).Value->AsString(), ECopyMode::KeyValue);
			}
		}
	}
	if (bHasCopyAllButton)
	{
#if PLATFORM_ALLOWS_COPY
		if (ImGui::Button("Copy JSON to Clipboard"))
		{
			FString OutputString;
			TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
			FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

			FPlatformApplicationMisc::ClipboardCopy(*OutputString);
		}
#endif
	}
}

void ImGuiDisplayJsonArray(const TArray<TSharedPtr<FJsonValue>> JsonArray)
{
	for (int32 i = 0; i < JsonArray.Num(); ++i)
	{
		const TSharedPtr<FJsonObject>* ValueAsObject;
		const TArray<TSharedPtr<FJsonValue>>* ValueAsArray;
		if (JsonArray[i]->TryGetObject(ValueAsObject))
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("[%d]"), i)), RH_DefaultTreeFlags))
			{
				ImGuiDisplayJsonObject(*ValueAsObject, false);
				ImGui::TreePop();
			}
		}
		else if (JsonArray[i]->TryGetArray(ValueAsArray))
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("[%d]"), i)), RH_DefaultTreeFlags))
			{
				ImGuiDisplayJsonArray(*ValueAsArray);
				ImGui::TreePop();
			}
		}
		else
		{
			ImGuiDisplayCopyableValue(FString::Printf(TEXT("[%d]"), i), JsonArray[i]->AsString(), ECopyMode::KeyValue);
		}
	}
}

void FImGuiCustomDataStager::DisplayCustomDataStager(bool bDefaultOpen /*= true*/, const TMap<FString, FString>* CurrentState)
{
	ImGuiTreeNodeFlags flags = bDefaultOpen ? RH_DefaultTreeFlagsDefaultOpen : RH_DefaultTreeFlags;
	const FString HeaderText = Name.IsEmpty() ? TEXT("Custom Data Stager") : Name + TEXT(" - Custom Data Stager");
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderText), flags))
	{
		// if current state is passed in, allow copying it
		if (CurrentState != nullptr && ImGui::SmallButton("Copy Current"))
		{
			SetDataFromMap(*CurrentState);
			ImGui::SameLine();
		}

		const FString RemoveAllBtnLabel = TEXT("Remove All Fields##") + Name;
		if (ImGui::SmallButton(TCHAR_TO_UTF8(*RemoveAllBtnLabel)))
		{
			Fields.Empty();
		}

		const FString TableName = TEXT("CustomDataTable##") + Name;
		if (ImGui::BeginTable(TCHAR_TO_UTF8(*TableName), 3, RH_TableFlagsFitSizing | ImGuiTableFlags_NoSavedSettings))
		{
			ImGui::TableSetupColumn("Key", ImGuiTableColumnFlags_None, 250);
			ImGui::TableSetupColumn("Value", ImGuiTableColumnFlags_None, 250);
			ImGui::TableSetupColumn("Action", ImGuiTableColumnFlags_None, 100);
			ImGui::TableHeadersRow();

			int IndexToRemove = INDEX_NONE;
			for (int i = 0; i < Fields.Num(); i++)
			{
				ImGui::PushID(i);
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::SetNextItemWidth(250.f);
				const FString KeyEditLabel = TEXT("##KeyEdit") + Name;
				ImGui::InputText(TCHAR_TO_UTF8(*KeyEditLabel), Fields[i].KeyInput.GetData(), Fields[i].KeyInput.Num());

				ImGui::TableNextColumn();
				// Check for potential JSON?
				ConvertToJsonStringIfValid(Fields[i].ValueInput);
				ImGui::SetNextItemWidth(250.f);
				const FString ValueEditLabel = TEXT("##ValueEdit") + Name;
				ImGui::InputTextMultiline(TCHAR_TO_UTF8(*ValueEditLabel), Fields[i].ValueInput.GetData(), Fields[i].ValueInput.Num(), ImVec2(0, ImGui::CalcTextSize(Fields[i].ValueInput.GetData()).y + TextInputPadding), ImGuiInputTextFlags_AllowTabInput);

				ImGui::TableNextColumn();
				const FString RemoveBtnLabel = TEXT("Remove##") + Name;
				if (ImGui::SmallButton(TCHAR_TO_UTF8(*RemoveBtnLabel)))
				{
					IndexToRemove = i;
				}
				ImGui::PopID();
			}

			if (IndexToRemove != INDEX_NONE)
			{
				Fields.RemoveAt(IndexToRemove);
			}

			// Add new row
			ImGui::TableNextRow();
			static const FColor AddRowColor = FColor(51, 105, 173, 50);
			ImGui::TableSetBgColor(ImGuiTableBgTarget_RowBg0, AddRowColor.ToPackedABGR());
			ImGui::TableNextColumn();
			ImGui::SetNextItemWidth(250.f);
			const FString KeyAddLabel = TEXT("##KeyAdd") + Name;
			ImGui::InputText(TCHAR_TO_UTF8(*KeyAddLabel), AddKeyInput.GetData(), AddKeyInput.Num());

			ImGui::TableNextColumn();
			ImGui::SetNextItemWidth(250.f);
			const FString ValueAddLabel = TEXT("##ValueAdd") + Name;
			ImGui::InputTextMultiline(TCHAR_TO_UTF8(*ValueAddLabel), AddValueInput.GetData(), AddValueInput.Num(), ImVec2(0, ImGui::CalcTextSize(AddValueInput.GetData()).y + TextInputPadding), ImGuiInputTextFlags_AllowTabInput);

			ImGui::TableNextColumn();
			const FString AddFieldLabel = TEXT("Add Field##") + Name;
			if (ImGui::SmallButton(TCHAR_TO_UTF8(*AddFieldLabel)))
			{
				KeyValueInputPair NewPair = KeyValueInputPair();
				NewPair.KeyInput = AddKeyInput;
				NewPair.ValueInput = AddValueInput;
				Fields.Add(NewPair);

				AddKeyInput.Reset();
				AddValueInput.Reset();
				AddKeyInput.SetNumZeroed(KeyInputLength);
				AddValueInput.SetNumZeroed(ValueInputLength);
			}

			ImGui::EndTable();
		}

		Warnings.Empty();
		for (int i = 0; i < Fields.Num(); i++)
		{
			if (Fields.FindLast(Fields[i]) != i)
			{
				Warnings += TEXT("Row ") + FString::FromInt(i) + TEXT(" has a duplicate Key.") LINE_TERMINATOR;
			}
		}
		if (!Warnings.IsEmpty())
		{
			static const FColor WarningTextColor = FColor(255, 102, 102, 255);
			ImGui::PushStyleColor(ImGuiCol_Text, WarningTextColor.ToPackedABGR());
			ImGui::Text("%s", TCHAR_TO_UTF8(*Warnings));
			ImGui::PopStyleColor(1);
		}

		ImGui::TreePop();
	}
}

void FImGuiCustomDataStager::ConvertToJsonStringIfValid(TArray<ANSICHAR>& InString) const
{
	const FString ValueAsFString = UTF8_TO_TCHAR(InString.GetData());
	auto Reader = TJsonReaderFactory<>::Create(ValueAsFString);
	TSharedPtr<FJsonObject> JsonObject;
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		FString OutJsonString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutJsonString);
		FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

		ImGuiCopyStringToTextInputBuffer(OutJsonString, InString);
	}
}
void FImGuiCustomDataStager::GetCustomDataMap(TMap<FString, FString>& OutMap)
{
	OutMap.Empty(Fields.Num());
	for (auto& Pair : Fields)
	{
		FString KeyAsFString = ImGuiGetStringFromTextInputBuffer(Pair.KeyInput);
		// Use first pair that has this key
		if (!OutMap.Contains(KeyAsFString))
		{
			OutMap.Emplace(ImGuiGetStringFromTextInputBuffer(Pair.KeyInput), ImGuiGetStringFromTextInputBuffer(Pair.ValueInput));
		}
	}
}
void FImGuiCustomDataStager::SetDataFromMap(const TMap<FString, FString>& InMap)
{
	Fields.Empty(InMap.Num());
	for (auto Pair : InMap)
	{
		KeyValueInputPair NewPair = KeyValueInputPair();
		NewPair.KeyInput.SetNumZeroed(KeyInputLength);
		NewPair.ValueInput.SetNumZeroed(ValueInputLength);

		ImGuiCopyStringToTextInputBuffer(Pair.Key, NewPair.KeyInput);
		ImGuiCopyStringToTextInputBuffer(Pair.Value, NewPair.ValueInput);

		Fields.Add(NewPair);
	}
}