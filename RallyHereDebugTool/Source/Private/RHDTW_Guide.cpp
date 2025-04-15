// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Guide.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "Misc/Paths.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GuideSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "RH_ImGuiUtilities.h"

namespace
{
	const char* Opts[] = { "Unset", "Null", "Value" };
	template<typename EditFunc>
	void ImGuiOptionalNullableFunc(const char* Label, bool* bIsSet, bool* bIsNull, EditFunc Func)
	{
		ImGui::PushID(Label);
		int index = *bIsNull ? 1 : (*bIsSet ? 2 : 0);
		if (ImGui::Combo("##OptNullable", &index, Opts, UE_ARRAY_COUNT(Opts)))
		{
			*bIsSet = index == 2;
			*bIsNull = index == 1;
		}
		ImGui::BeginDisabled(index != 2);
		Func();
		ImGui::EndDisabled();
		ImGui::PopID();
	}

	void ImGuiOptionalNullableValue(const char* Label, bool* bIsSet, bool* bIsNull, FString& Value)
	{
		ImGuiOptionalNullableFunc(Label, bIsSet, bIsNull, [&]()
		{
			ImGui::InputText(Label, &Value);
		});
	}
}

FRHDTW_Guide::FRHDTW_Guide()
{
	SelectedGuideSearchIndex = 0;
	SelectedGuideSearchPage = 0;
	SelectedGuideSearchDisplayString = "Select a Search";
	GuideUpdateRating = 0;
}

FRHDTW_Guide::~FRHDTW_Guide()
{
}

void FRHDTW_Guide::Do()
{
	auto GuideSS = GetSubsystemWithTextForFailures();
	if (!GuideSS)
	{
		return;
	}

	if (ImGui::BeginTabBar("Guides"))
	{
		if (ImGui::BeginTabItem("Search Guides"))
		{
			DoSearchGuides();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Guide Full"))
		{
			DoGuideFull();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Engagement"))
		{
			DoGuideEngagement();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

URH_GuideSubsystem* FRHDTW_Guide::GetSubsystemWithTextForFailures() const
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return nullptr;
	}

	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("No Game Instance Found");
		return nullptr;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISubsystem == nullptr)
	{
		ImGui::Text("No Game Instance Subsystem Found");
		return nullptr;
	}
	
	auto pGIGuideSubsystem = pGISubsystem->GetGuideSubsystem();
	if (pGIGuideSubsystem  == nullptr)
	{
		ImGui::Text("No Guide Subsystem Found");
		return nullptr;
	}
	return pGIGuideSubsystem;
}

TArray<FGuid> FRHDTW_Guide::GetGuideIDsFromInput(const FString& Input) const
{
	TArray<FGuid> GuideIDs;
	TArray<FString> GuideIDStrings;
	Input.ParseIntoArray(GuideIDStrings, TEXT(","));
	for (const FString& GuideIDString : GuideIDStrings)
	{
		FGuid GuideID;
		if (FGuid::Parse(GuideIDString, GuideID))
		{
			GuideIDs.Add(GuideID);
		}
	}
	return GuideIDs;
}

void FRHDTW_Guide::DoGuideEngagement()
{
	URH_PlayerGuideEngagement* pURH_PlayerGuideEngagement = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
		{
			ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
			pURH_PlayerGuideEngagement  = ActivePlayerInfo->GetGuideEngagement();
		}
	}
	if (pURH_PlayerGuideEngagement == nullptr)
	{
		ImGui::Text("%s", "URH_PlayerGuideEngagement not available for first selected player.");
		return;
	}
	
	ImGui::InputText("Guide IDs CSV", &RequestGuideById);
	TArray<FGuid> GuideIDs = GetGuideIDsFromInput(RequestGuideById);
	ImGui::SameLine();
	if (ImGui::Button("Request Current Engagement"))
	{
		RequestEngagementForAllGuides(GuideIDs);
	}
	ImGuiEngagementInput_Favorite(GuideIDs);
	ImGuiEngagementInput_Rate(GuideIDs);
	
	ImGui::Separator();

	if (ImGui::BeginTable("GuideEnagement", 4, RH_TableFlagsPropSizing))
	{
		ImGui::TableSetupColumn("Guide ID");
		ImGui::TableSetupColumn("Rating");
		ImGui::TableSetupColumn("Favorited At");
		ImGui::TableHeadersRow();
		
		for (TMap<FGuid, FRHAPI_EntityGuideEngagement>::TConstIterator Itr(pURH_PlayerGuideEngagement->GetGuideEngagement()); Itr; ++Itr)
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("ID"), Itr->Value.GetGuideId(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Rating"), Itr->Value.GetRatingOrNull(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Favorited At"), Itr->Value.GetFavoritedAtOrNull(), ECopyMode::Value);
		}
		ImGui::EndTable();
	}
}

void FRHDTW_Guide::RequestEngagementForAllGuides(const TArray<FGuid>& GuideIDs)
{
	ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([GuideIDs](URH_PlayerInfo* PlayerInfo)
	{
		if (PlayerInfo)
		{
			if (auto PlayerGuideEngagement = PlayerInfo->GetGuideEngagement())
			{
				PlayerGuideEngagement->GetGuideEngagementAsync(GuideIDs);
			}
		}
	}));
}

void FRHDTW_Guide::DoGuideFull()
{
	auto GuideSS = GetSubsystemWithTextForFailures();
	if (!GuideSS)
	{
		return;
	}

	ImGui::InputText("By Guide ID", &RequestGuideById);
	ImGui::SameLine();
	if (ImGui::Button("Request"))
	{
		FGuid GuideIdToRequest;
		if (FGuid::Parse(RequestGuideById, GuideIdToRequest))
		{
			GuideSS->GetGuideAsync(GuideIdToRequest, true);
		}
	}
	ImGui::SameLine();
	if (ImGui::Button("Delete"))
	{
		FGuid GuideIdToRequest;
		if (FGuid::Parse(RequestGuideById, GuideIdToRequest))
		{
			GuideSS->DeleteGuide(GuideIdToRequest);
		}
	}

	if (ImGui::Button("Create New"))
	{
		ImGui::OpenPopup("CreateNewGuide");
	}

	if (ImGui::BeginPopup("CreateNewGuide"))
	{
		ImGui::SetNextWindowSize(ImVec2(800, 500));
		if (DoCreateNewGuide())
		{
			GuideSS->CreateGuide(GuideCreateRequest);
			ImGui::CloseCurrentPopup();
		}
		ImGui::EndPopup();
	}
	TArray<const FRHAPI_GuideFull*> AllGuides;
	for (TMap<FGuid, FRHAPI_GuideFull>::TConstIterator Itr(GuideSS->GetCachedGuides()); Itr; ++Itr)
	{
		AllGuides.Add(&Itr->Value);
	}

	Algo::Sort(AllGuides, [](const FRHAPI_GuideFull* l, const FRHAPI_GuideFull* r)
	{
		return l->Name < r->Name;
	});

	for (TArray<const FRHAPI_GuideFull*>::TConstIterator Itr(AllGuides); Itr; ++Itr)
	{
		const FString ExpandName = FString::Format(TEXT("{0} - {1} - {2}"), {(*Itr)->GuideId.ToString(EGuidFormats::DigitsWithHyphensLower), (*Itr)->GuideType, (*Itr)->Name});
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*ExpandName), RH_DefaultTreeFlags))
		{
			DoShowGuideFull(**Itr, GuideSS);
			ImGui::TreePop();
		}
	}
}

bool FRHDTW_Guide::DoCreateNewGuide()
{
	ImGui::Text("Create a new Guide");
	ImGui::Separator();
	ImGui::InputText("Name", &GuideCreateRequest.Name);
	ImGui::InputText("Language", &GuideCreateRequest.Language);
	ImGui::InputText("Guide Type", &GuideCreateRequest.GuideType);
	ImGui::InputText("Game Version", &GuideCreateRequest.GameVersion);
	ImGuiOptionalNullableValue("Short Desc", &GuideCreateRequest.ShortDesc_IsSet, &GuideCreateRequest.ShortDesc_IsNull, GuideCreateRequest.ShortDesc_Optional);
	ImGuiOptionalNullableValue("Content", &GuideCreateRequest.Content_IsSet, &GuideCreateRequest.Content_IsNull, GuideCreateRequest.Content_Optional);
	ImGuiOptionalNullableValue("Ref1", &GuideCreateRequest.Ref1_IsSet, &GuideCreateRequest.Ref1_IsNull, GuideCreateRequest.Ref1_Optional);
	ImGuiOptionalNullableValue("Ref2", &GuideCreateRequest.Ref2_IsSet, &GuideCreateRequest.Ref2_IsNull, GuideCreateRequest.Ref2_Optional);
	ImGuiOptionalNullableValue("Ref3", &GuideCreateRequest.Ref3_IsSet, &GuideCreateRequest.Ref3_IsNull, GuideCreateRequest.Ref3_Optional);
	ImGuiOptionalNullableValue("Ref4", &GuideCreateRequest.Ref4_IsSet, &GuideCreateRequest.Ref4_IsNull, GuideCreateRequest.Ref4_Optional);
	ImGuiOptionalNullableValue("Ref5", &GuideCreateRequest.Ref5_IsSet, &GuideCreateRequest.Ref5_IsNull, GuideCreateRequest.Ref5_Optional);
	ImGuiOptionalNullableValue("Ref6", &GuideCreateRequest.Ref6_IsSet, &GuideCreateRequest.Ref6_IsNull, GuideCreateRequest.Ref6_Optional);
	ImGuiOptionalNullableValue("Ref7", &GuideCreateRequest.Ref7_IsSet, &GuideCreateRequest.Ref7_IsNull, GuideCreateRequest.Ref7_Optional);
	ImGuiOptionalNullableValue("Ref8", &GuideCreateRequest.Ref8_IsSet, &GuideCreateRequest.Ref8_IsNull, GuideCreateRequest.Ref8_Optional);
	ImGuiOptionalNullableValue("Ref9", &GuideCreateRequest.Ref9_IsSet, &GuideCreateRequest.Ref9_IsNull, GuideCreateRequest.Ref9_Optional);
	ImGuiOptionalNullableValue("Ref10", &GuideCreateRequest.Ref10_IsSet, &GuideCreateRequest.Ref10_IsNull, GuideCreateRequest.Ref10_Optional);
	ImGuiOptionalNullableValue("Ref11", &GuideCreateRequest.Ref11_IsSet, &GuideCreateRequest.Ref11_IsNull, GuideCreateRequest.Ref11_Optional);
	ImGuiOptionalNullableValue("Ref12", &GuideCreateRequest.Ref12_IsSet, &GuideCreateRequest.Ref12_IsNull, GuideCreateRequest.Ref12_Optional);
	ImGuiOptionalNullableValue("Ref13", &GuideCreateRequest.Ref13_IsSet, &GuideCreateRequest.Ref13_IsNull, GuideCreateRequest.Ref13_Optional);
	ImGuiOptionalNullableValue("Ref14", &GuideCreateRequest.Ref14_IsSet, &GuideCreateRequest.Ref14_IsNull, GuideCreateRequest.Ref14_Optional);
	ImGuiOptionalNullableValue("Ref15", &GuideCreateRequest.Ref15_IsSet, &GuideCreateRequest.Ref15_IsNull, GuideCreateRequest.Ref15_Optional);
	ImGuiOptionalNullableValue("Ref16", &GuideCreateRequest.Ref16_IsSet, &GuideCreateRequest.Ref16_IsNull, GuideCreateRequest.Ref16_Optional);
	ImGuiOptionalNullableValue("Ref17", &GuideCreateRequest.Ref17_IsSet, &GuideCreateRequest.Ref17_IsNull, GuideCreateRequest.Ref17_Optional);
	ImGuiOptionalNullableValue("Ref18", &GuideCreateRequest.Ref18_IsSet, &GuideCreateRequest.Ref18_IsNull, GuideCreateRequest.Ref18_Optional);
	ImGuiOptionalNullableValue("Ref19", &GuideCreateRequest.Ref19_IsSet, &GuideCreateRequest.Ref19_IsNull, GuideCreateRequest.Ref19_Optional);
	ImGuiOptionalNullableValue("Ref20", &GuideCreateRequest.Ref20_IsSet, &GuideCreateRequest.Ref20_IsNull, GuideCreateRequest.Ref20_Optional);
	ImGuiOptionalNullableValue("Ref21", &GuideCreateRequest.Ref21_IsSet, &GuideCreateRequest.Ref21_IsNull, GuideCreateRequest.Ref21_Optional);
	ImGuiOptionalNullableValue("Ref22", &GuideCreateRequest.Ref22_IsSet, &GuideCreateRequest.Ref22_IsNull, GuideCreateRequest.Ref22_Optional);
	ImGuiOptionalNullableValue("Ref23", &GuideCreateRequest.Ref23_IsSet, &GuideCreateRequest.Ref23_IsNull, GuideCreateRequest.Ref23_Optional);
	ImGuiOptionalNullableValue("Ref24", &GuideCreateRequest.Ref24_IsSet, &GuideCreateRequest.Ref24_IsNull, GuideCreateRequest.Ref24_Optional);
	ImGuiOptionalNullableValue("Ref25", &GuideCreateRequest.Ref25_IsSet, &GuideCreateRequest.Ref25_IsNull, GuideCreateRequest.Ref25_Optional);
	ImGuiOptionalNullableValue("Ref26", &GuideCreateRequest.Ref26_IsSet, &GuideCreateRequest.Ref26_IsNull, GuideCreateRequest.Ref26_Optional);
	ImGuiOptionalNullableValue("Ref27", &GuideCreateRequest.Ref27_IsSet, &GuideCreateRequest.Ref27_IsNull, GuideCreateRequest.Ref27_Optional);
	ImGuiOptionalNullableValue("Ref28", &GuideCreateRequest.Ref28_IsSet, &GuideCreateRequest.Ref28_IsNull, GuideCreateRequest.Ref28_Optional);
	ImGuiOptionalNullableValue("Ref29", &GuideCreateRequest.Ref29_IsSet, &GuideCreateRequest.Ref29_IsNull, GuideCreateRequest.Ref29_Optional);
	ImGuiOptionalNullableValue("Ref30", &GuideCreateRequest.Ref30_IsSet, &GuideCreateRequest.Ref30_IsNull, GuideCreateRequest.Ref30_Optional);
	ImGuiOptionalNullableValue("Ref31", &GuideCreateRequest.Ref31_IsSet, &GuideCreateRequest.Ref31_IsNull, GuideCreateRequest.Ref31_Optional);
	ImGuiOptionalNullableValue("Ref32", &GuideCreateRequest.Ref32_IsSet, &GuideCreateRequest.Ref32_IsNull, GuideCreateRequest.Ref32_Optional);

	if (ImGui::BeginTabBar("Guides"))
	{
		GuideCreateRequest.Sections_IsSet = true;
		int32 IndexToRemove = INDEX_NONE;
		for (TArray<FRHAPI_GuideSectionCreate>::TIterator Itr(GuideCreateRequest.Sections_Optional); Itr; ++Itr)
		{
			if (ImGui::BeginTabItem(std::to_string(Itr.GetIndex()).c_str()))
			{
				if (ImGui::Button("Remove Section"))
				{
					IndexToRemove = Itr.GetIndex();
				}
				DoCreateNewGuideSection(*Itr);
				ImGui::EndTabItem();
			}
		}

		if (IndexToRemove != INDEX_NONE)
		{
			GuideCreateRequest.Sections_Optional.RemoveAt(IndexToRemove);
		}
		
		if (ImGui::TabItemButton("+##AddNewSection"))
		{
			GuideCreateRequest.Sections_Optional.AddDefaulted();
		}
		ImGui::EndTabBar();
	}

	if (ImGui::Button("Create"))
	{
		return true;
	}
	return false;
}

void FRHDTW_Guide::DoCreateNewGuideSection(struct FRHAPI_GuideSectionCreate& SectionCreate)
{
	ImGui::InputText("Name", &SectionCreate.Name);
	ImGui::InputText("Section Type", &SectionCreate.SectionType);
	ImGuiOptionalNullableValue("Short Desc", &SectionCreate.ShortDesc_IsSet, &SectionCreate.ShortDesc_IsNull, SectionCreate.ShortDesc_Optional);
	ImGuiOptionalNullableValue("Content", &SectionCreate.Content_IsSet, &SectionCreate.Content_IsNull, SectionCreate.Content_Optional);
	ImGuiOptionalNullableValue("Ref1", &SectionCreate.Ref1_IsSet, &SectionCreate.Ref1_IsNull, SectionCreate.Ref1_Optional);
	ImGuiOptionalNullableValue("Ref2", &SectionCreate.Ref2_IsSet, &SectionCreate.Ref2_IsNull, SectionCreate.Ref2_Optional);
	ImGuiOptionalNullableValue("Ref3", &SectionCreate.Ref3_IsSet, &SectionCreate.Ref3_IsNull, SectionCreate.Ref3_Optional);
	ImGuiOptionalNullableValue("Ref4", &SectionCreate.Ref4_IsSet, &SectionCreate.Ref4_IsNull, SectionCreate.Ref4_Optional);
	ImGuiOptionalNullableValue("Ref5", &SectionCreate.Ref5_IsSet, &SectionCreate.Ref5_IsNull, SectionCreate.Ref5_Optional);
	ImGuiOptionalNullableValue("Ref6", &SectionCreate.Ref6_IsSet, &SectionCreate.Ref6_IsNull, SectionCreate.Ref6_Optional);
	ImGuiOptionalNullableValue("Ref7", &SectionCreate.Ref7_IsSet, &SectionCreate.Ref7_IsNull, SectionCreate.Ref7_Optional);
	ImGuiOptionalNullableValue("Ref8", &SectionCreate.Ref8_IsSet, &SectionCreate.Ref8_IsNull, SectionCreate.Ref8_Optional);
	ImGuiOptionalNullableValue("Ref9", &SectionCreate.Ref9_IsSet, &SectionCreate.Ref9_IsNull, SectionCreate.Ref9_Optional);
	ImGuiOptionalNullableValue("Ref10", &SectionCreate.Ref10_IsSet, &SectionCreate.Ref10_IsNull, SectionCreate.Ref10_Optional);
	ImGuiOptionalNullableValue("Ref11", &SectionCreate.Ref11_IsSet, &SectionCreate.Ref11_IsNull, SectionCreate.Ref11_Optional);
	ImGuiOptionalNullableValue("Ref12", &SectionCreate.Ref12_IsSet, &SectionCreate.Ref12_IsNull, SectionCreate.Ref12_Optional);
	ImGuiOptionalNullableValue("Ref13", &SectionCreate.Ref13_IsSet, &SectionCreate.Ref13_IsNull, SectionCreate.Ref13_Optional);
	ImGuiOptionalNullableValue("Ref14", &SectionCreate.Ref14_IsSet, &SectionCreate.Ref14_IsNull, SectionCreate.Ref14_Optional);
	ImGuiOptionalNullableValue("Ref15", &SectionCreate.Ref15_IsSet, &SectionCreate.Ref15_IsNull, SectionCreate.Ref15_Optional);
	ImGuiOptionalNullableValue("Ref16", &SectionCreate.Ref16_IsSet, &SectionCreate.Ref16_IsNull, SectionCreate.Ref16_Optional);
	ImGuiOptionalNullableValue("Ref17", &SectionCreate.Ref17_IsSet, &SectionCreate.Ref17_IsNull, SectionCreate.Ref17_Optional);
	ImGuiOptionalNullableValue("Ref18", &SectionCreate.Ref18_IsSet, &SectionCreate.Ref18_IsNull, SectionCreate.Ref18_Optional);
	ImGuiOptionalNullableValue("Ref19", &SectionCreate.Ref19_IsSet, &SectionCreate.Ref19_IsNull, SectionCreate.Ref19_Optional);
	ImGuiOptionalNullableValue("Ref20", &SectionCreate.Ref20_IsSet, &SectionCreate.Ref20_IsNull, SectionCreate.Ref20_Optional);
	ImGuiOptionalNullableValue("Ref21", &SectionCreate.Ref21_IsSet, &SectionCreate.Ref21_IsNull, SectionCreate.Ref21_Optional);
	ImGuiOptionalNullableValue("Ref22", &SectionCreate.Ref22_IsSet, &SectionCreate.Ref22_IsNull, SectionCreate.Ref22_Optional);
	ImGuiOptionalNullableValue("Ref23", &SectionCreate.Ref23_IsSet, &SectionCreate.Ref23_IsNull, SectionCreate.Ref23_Optional);
	ImGuiOptionalNullableValue("Ref24", &SectionCreate.Ref24_IsSet, &SectionCreate.Ref24_IsNull, SectionCreate.Ref24_Optional);
	ImGuiOptionalNullableValue("Ref25", &SectionCreate.Ref25_IsSet, &SectionCreate.Ref25_IsNull, SectionCreate.Ref25_Optional);
	ImGuiOptionalNullableValue("Ref26", &SectionCreate.Ref26_IsSet, &SectionCreate.Ref26_IsNull, SectionCreate.Ref26_Optional);
	ImGuiOptionalNullableValue("Ref27", &SectionCreate.Ref27_IsSet, &SectionCreate.Ref27_IsNull, SectionCreate.Ref27_Optional);
	ImGuiOptionalNullableValue("Ref28", &SectionCreate.Ref28_IsSet, &SectionCreate.Ref28_IsNull, SectionCreate.Ref28_Optional);
	ImGuiOptionalNullableValue("Ref29", &SectionCreate.Ref29_IsSet, &SectionCreate.Ref29_IsNull, SectionCreate.Ref29_Optional);
	ImGuiOptionalNullableValue("Ref30", &SectionCreate.Ref30_IsSet, &SectionCreate.Ref30_IsNull, SectionCreate.Ref30_Optional);
	ImGuiOptionalNullableValue("Ref31", &SectionCreate.Ref31_IsSet, &SectionCreate.Ref31_IsNull, SectionCreate.Ref31_Optional);
	ImGuiOptionalNullableValue("Ref32", &SectionCreate.Ref32_IsSet, &SectionCreate.Ref32_IsNull, SectionCreate.Ref32_Optional);
}

FString FRHDTW_Guide::GetSearchString(const URH_GuideSearch* InSearch) const
{
	if (!InSearch)
	{
		return FString();
	}
	const FRH_GuideSearchRequest& Input = InSearch->GetInputRequest();
	
	FString Result;
	if (!Input.Name.IsEmpty())
	{
		Result += TEXT("Name:");
		Result += Input.Name;
		Result += TEXT(" ");
	}
	
	if (Input.bDoOwnerSearch)
	{
		Result += EnumToString(Input.OwnerEntityType);
		Result += TEXT(":");
		Result += Input.OwnerEntityId;
	}

	if (!Input.Language.IsEmpty())
	{
		Result += Input.Language;
		Result += TEXT(" ");
	}
	
	if (!Input.GuideType.IsEmpty())
	{
		Result += TEXT("Type:");
		Result += Input.GuideType;
		Result += TEXT(" ");
	}
	
	if (!Input.GameVersion.IsEmpty())
	{
		Result += TEXT("Version:");
		Result += Input.GameVersion;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref1.IsEmpty())
	{
		Result += TEXT("Ref1:");
		Result += Input.Ref1;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref2.IsEmpty())
	{
		Result += TEXT("Ref2:");
		Result += Input.Ref2;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref3.IsEmpty())
	{
		Result += TEXT("Ref3:");
		Result += Input.Ref3;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref4.IsEmpty())
	{
		Result += TEXT("Ref4:");
		Result += Input.Ref4;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref5.IsEmpty())
	{
		Result += TEXT("Ref5:");
		Result += Input.Ref5;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref6.IsEmpty())
	{
		Result += TEXT("Ref6:");
		Result += Input.Ref6;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref7.IsEmpty())
	{
		Result += TEXT("Ref7:");
		Result += Input.Ref7;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref8.IsEmpty())
	{
		Result += TEXT("Ref8:");
		Result += Input.Ref8;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref9.IsEmpty())
	{
		Result += TEXT("Ref9:");
		Result += Input.Ref9;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref10.IsEmpty())
	{
		Result += TEXT("Ref10:");
		Result += Input.Ref10;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref11.IsEmpty())
	{
		Result += TEXT("Ref11:");
		Result += Input.Ref11;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref12.IsEmpty())
	{
		Result += TEXT("Ref12:");
		Result += Input.Ref12;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref13.IsEmpty())
	{
		Result += TEXT("Ref13:");
		Result += Input.Ref13;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref14.IsEmpty())
	{
		Result += TEXT("Ref14:");
		Result += Input.Ref14;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref15.IsEmpty())
	{
		Result += TEXT("Ref15:");
		Result += Input.Ref15;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref16.IsEmpty())
	{
		Result += TEXT("Ref16:");
		Result += Input.Ref16;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref17.IsEmpty())
	{
		Result += TEXT("Ref17:");
		Result += Input.Ref17;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref18.IsEmpty())
	{
		Result += TEXT("Ref18:");
		Result += Input.Ref18;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref19.IsEmpty())
	{
		Result += TEXT("Ref19:");
		Result += Input.Ref19;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref20.IsEmpty())
	{
		Result += TEXT("Ref20:");
		Result += Input.Ref20;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref21.IsEmpty())
	{
		Result += TEXT("Ref21:");
		Result += Input.Ref21;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref22.IsEmpty())
	{
		Result += TEXT("Ref22:");
		Result += Input.Ref22;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref23.IsEmpty())
	{
		Result += TEXT("Ref23:");
		Result += Input.Ref23;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref24.IsEmpty())
	{
		Result += TEXT("Ref24:");
		Result += Input.Ref24;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref25.IsEmpty())
	{
		Result += TEXT("Ref25:");
		Result += Input.Ref25;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref26.IsEmpty())
	{
		Result += TEXT("Ref26:");
		Result += Input.Ref26;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref27.IsEmpty())
	{
		Result += TEXT("Ref27:");
		Result += Input.Ref27;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref28.IsEmpty())
	{
		Result += TEXT("Ref28:");
		Result += Input.Ref28;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref29.IsEmpty())
	{
		Result += TEXT("Ref29:");
		Result += Input.Ref29;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref30.IsEmpty())
	{
		Result += TEXT("Ref30:");
		Result += Input.Ref30;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref31.IsEmpty())
	{
		Result += TEXT("Ref31:");
		Result += Input.Ref31;
		Result += TEXT(" ");
	}
	
	if (!Input.Ref32.IsEmpty())
	{
		Result += TEXT("Ref32:");
		Result += Input.Ref32;
		Result += TEXT(" ");
	}
	
	return Result;
}

void FRHDTW_Guide::DoSearchGuides()
{
	auto GuideSS = GetSubsystemWithTextForFailures();
	if (!GuideSS)
	{
		return;
	}

	ImGui::Text("Search Guides");

	if (ImGui::BeginCombo("Search", SelectedGuideSearchDisplayString.c_str()))
	{
		for (TArray<URH_GuideSearch*>::TConstIterator Itr(GuideSS->GetGuideSearches()); Itr; ++Itr)
		{
			ImGui::PushID(*Itr);
			FString SearchText = GetSearchString(*Itr);
			FTCHARToUTF8 UTF8SearchText(*SearchText);
			bool bIsSelected = Itr.GetIndex() == SelectedGuideSearchIndex;
			if (ImGui::Selectable(UTF8SearchText.Get(), bIsSelected))
			{
				SelectedGuideSearchIndex = Itr.GetIndex();
				SelectedGuideSearchDisplayString = UTF8SearchText.Get();
				SelectedGuideSearchPage = 0;
				bIsSelected = true;
			}
			if (bIsSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
			ImGui::PopID();
		}
		ImGui::EndCombo();
	}

	ImGui::SameLine();
	if (ImGui::Button("Create New"))
	{
		ImGui::OpenPopup("CreateNewGuideSearch");
	}

	ImGui::SameLine();
	if (ImGui::Button("Remove All"))
	{
		GuideSS->RemoveAllGuideSearches();
	}

	if (ImGui::BeginPopup("CreateNewGuideSearch"))
	{
		if (DoCreateNewSearch())
		{
			ImGui::CloseCurrentPopup();
			URH_GuideSearch* NewSearch = GuideSS->CreateGuideSearch(SearchParams);
			SelectedGuideSearchIndex = GuideSS->GetGuideSearches().Find(NewSearch);
			SelectedGuideSearchDisplayString = TCHAR_TO_UTF8(*GetSearchString(NewSearch));
			SelectedGuideSearchPage = 0;
		}
		ImGui::EndPopup();
	}

	ImGui::SameLine();
	if (ImGui::Button("Remove Current"))
	{
		GuideSS->RemoveGuideSearchAt(SelectedGuideSearchIndex);
		SelectedGuideSearchIndex = INDEX_NONE;
		SelectedGuideSearchPage = 0;
		SelectedGuideSearchDisplayString = "Select a Search";
	}

	ImGui::Separator();

	DoShowCurrentGuideSearch();
}

bool FRHDTW_Guide::DoCreateNewSearch()
{
	ImGui::Text("Create a new Guide Search");
	ImGui::Separator();

	ImGuiDisplayListEnumCombos("SortBy", SearchParams.SortBy);
	ImGuiDisplayListEnumCombos("Sort", SearchParams.Sort);

	if (ImGui::InputInt("Page Size", &SearchParams.PageSize))
	{
		SearchParams.PageSize = FMath::Clamp(SearchParams.PageSize, 0, 100);
	}
	
	ImGui::Checkbox("Owner?", &SearchParams.bDoOwnerSearch);
	if (SearchParams.bDoOwnerSearch)
	{
		ImGuiDisplayEnumCombo("Owner Type", SearchParams.OwnerEntityType);
		ImGui::InputText("Owner Id", &SearchParams.OwnerEntityId);
	}

	ImGui::InputText("Name", &SearchParams.Name);
	ImGui::InputText("Language", &SearchParams.Language);
	ImGui::InputText("Guide Type", &SearchParams.GuideType);
	ImGui::InputText("Game Version", &SearchParams.GameVersion);
	ImGui::InputText("Ref1", &SearchParams.Ref1);
	ImGui::InputText("Ref2", &SearchParams.Ref2);
	ImGui::InputText("Ref3", &SearchParams.Ref3);
	ImGui::InputText("Ref4", &SearchParams.Ref4);
	ImGui::InputText("Ref5", &SearchParams.Ref5);
	ImGui::InputText("Ref6", &SearchParams.Ref6);
	ImGui::InputText("Ref7", &SearchParams.Ref7);
	ImGui::InputText("Ref8", &SearchParams.Ref8);
	ImGui::InputText("Ref9", &SearchParams.Ref9);
	ImGui::InputText("Ref10", &SearchParams.Ref10);
	ImGui::InputText("Ref11", &SearchParams.Ref11);
	ImGui::InputText("Ref12", &SearchParams.Ref12);
	ImGui::InputText("Ref13", &SearchParams.Ref13);
	ImGui::InputText("Ref14", &SearchParams.Ref14);
	ImGui::InputText("Ref15", &SearchParams.Ref15);
	ImGui::InputText("Ref16", &SearchParams.Ref16);
	ImGui::InputText("Ref17", &SearchParams.Ref17);
	ImGui::InputText("Ref18", &SearchParams.Ref18);
	ImGui::InputText("Ref19", &SearchParams.Ref19);
	ImGui::InputText("Ref20", &SearchParams.Ref20);
	ImGui::InputText("Ref21", &SearchParams.Ref21);
	ImGui::InputText("Ref22", &SearchParams.Ref22);
	ImGui::InputText("Ref23", &SearchParams.Ref23);
	ImGui::InputText("Ref24", &SearchParams.Ref24);
	ImGui::InputText("Ref25", &SearchParams.Ref25);
	ImGui::InputText("Ref26", &SearchParams.Ref26);
	ImGui::InputText("Ref27", &SearchParams.Ref27);
	ImGui::InputText("Ref28", &SearchParams.Ref28);
	ImGui::InputText("Ref29", &SearchParams.Ref29);
	ImGui::InputText("Ref30", &SearchParams.Ref30);
	ImGui::InputText("Ref31", &SearchParams.Ref31);
	ImGui::InputText("Ref32", &SearchParams.Ref32);

	if (ImGui::Button("Create"))
	{
		return true;
	}
	return false;
}

void FRHDTW_Guide::DoShowCurrentGuideSearch()
{
	auto GuideSS = GetSubsystemWithTextForFailures();
	if (!GuideSS)
	{
		return;
	}

	if (SelectedGuideSearchIndex >= GuideSS->GetGuideSearches().Num())
	{
		return;
	}

	URH_GuideSearch* GuideSearch = GuideSS->GetGuideSearches()[SelectedGuideSearchIndex];
	if (!GuideSearch)
	{
		return;
	}

	ImGui::Text("Page: ");
	ImGui::SameLine();
	for (int32 x = 0; x < GuideSearch->GetResultPages().Num(); ++x)
	{
		std::string ButtonText = std::to_string(x);
		if (x == SelectedGuideSearchPage)
		{
			ButtonText += "*";
		}
		if (ImGui::Button(ButtonText.c_str()))
		{
			SelectedGuideSearchPage = x;
		}
		ImGui::SameLine();
	}
	
	if (ImGui::Button("Request Next"))
	{
		GuideSearch->RequestNextPage();
	}

	if (SelectedGuideSearchPage >= GuideSearch->GetResultPages().Num())
	{
		ImGui::Text("Invalid Page");
		return;
	}

	const auto& Page = GuideSearch->GetResultPages()[SelectedGuideSearchPage];
	auto PageResults = Page.GetResultsOrNull();
	if (!PageResults)
	{
		ImGui::Text("No Results");
		return;
	}

	if (ImGui::Button("Request Engagement For All"))
	{
		TArray<FGuid> GuideIDs;
		for (TArray<FRHAPI_GuideSearchResult>::TConstIterator Itr(*PageResults); Itr; ++Itr)
		{
			GuideIDs.Add(Itr->GuideId);
		}
		RequestEngagementForAllGuides(GuideIDs);
	}

	for (TArray<FRHAPI_GuideSearchResult>::TConstIterator Itr(*PageResults); Itr; ++Itr)
	{
		const FString ExpandName = FString::Format(TEXT("{0} - {1} - {2}"), {Itr->GuideId.ToString(), Itr->GuideType, Itr->Name});
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*ExpandName), RH_DefaultTreeFlags))
		{
			DoShowGuideSearchPage(*Itr, GuideSS);
			ImGui::TreePop();
		}
	}
}

void FRHDTW_Guide::DoShowGuideSearchPage(const FRHAPI_GuideSearchResult& Result, class URH_GuideSubsystem* GuideSS)
{
	if (ImGui::Button("Request Full"))
	{
		GuideSS->GetGuideAsync(Result.GetGuideId(), true);
	}
	ImGuiEngagementInput_Favorite({ Result.GetGuideId() });
	ImGuiEngagementInput_Rate({ Result.GetGuideId() });
	
	ImGuiDisplayCopyableValue(TEXT("ID"), Result.GetGuideId());
	ImGuiDisplayCopyableValue(TEXT("Name"), Result.GetName());
	ImGuiDisplayCopyableValue(TEXT("Guide Type"), Result.GetGuideType());
	ImGuiDisplayCopyableValue(TEXT("Owner Type"), EnumToString(Result.GetOwnerEntityType()));
	ImGuiDisplayCopyableValue(TEXT("Owner ID"), Result.GetOwnerEntityId());
	ImGuiDisplayCopyableValue(TEXT("Language"), Result.GetLanguage());
	ImGuiDisplayCopyableValue(TEXT("Game Version"), Result.GetGameVersion());
	ImGuiDisplayCopyableValue(TEXT("Short Desc"), Result.GetShortDescOrNull());
	ImGuiDisplayCopyableValue(TEXT("Created"), Result.GetCreated());
	ImGuiDisplayCopyableValue(TEXT("Modified"), Result.GetModified());
	ImGuiDisplayCopyableValue(TEXT("Favorites"), Result.GetFavoritesOrNull());
	ImGuiDisplayCopyableValue(TEXT("Upvotes"), Result.GetUpvotesOrNull());
	ImGuiDisplayCopyableValue(TEXT("Downvotes"), Result.GetDownvotesOrNull());
	ImGuiDisplayCopyableValue(TEXT("Ref1"), Result.GetRef1());
	ImGuiDisplayCopyableValue(TEXT("Ref2"), Result.GetRef2());
	ImGuiDisplayCopyableValue(TEXT("Ref3"), Result.GetRef3());
	ImGuiDisplayCopyableValue(TEXT("Ref4"), Result.GetRef4());
	ImGuiDisplayCopyableValue(TEXT("Ref5"), Result.GetRef5());
	ImGuiDisplayCopyableValue(TEXT("Ref6"), Result.GetRef6());
	ImGuiDisplayCopyableValue(TEXT("Ref7"), Result.GetRef7());
	ImGuiDisplayCopyableValue(TEXT("Ref8"), Result.GetRef8());
	ImGuiDisplayCopyableValue(TEXT("Ref9"), Result.GetRef9());
	ImGuiDisplayCopyableValue(TEXT("Ref10"), Result.GetRef10());
	ImGuiDisplayCopyableValue(TEXT("Ref11"), Result.GetRef11());
	ImGuiDisplayCopyableValue(TEXT("Ref12"), Result.GetRef12());
	ImGuiDisplayCopyableValue(TEXT("Ref13"), Result.GetRef13());
	ImGuiDisplayCopyableValue(TEXT("Ref14"), Result.GetRef14());
	ImGuiDisplayCopyableValue(TEXT("Ref15"), Result.GetRef15());
	ImGuiDisplayCopyableValue(TEXT("Ref16"), Result.GetRef16());
	ImGuiDisplayCopyableValue(TEXT("Ref17"), Result.GetRef17());
	ImGuiDisplayCopyableValue(TEXT("Ref18"), Result.GetRef18());
	ImGuiDisplayCopyableValue(TEXT("Ref19"), Result.GetRef19());
	ImGuiDisplayCopyableValue(TEXT("Ref20"), Result.GetRef20());
	ImGuiDisplayCopyableValue(TEXT("Ref21"), Result.GetRef21());
	ImGuiDisplayCopyableValue(TEXT("Ref22"), Result.GetRef22());
	ImGuiDisplayCopyableValue(TEXT("Ref23"), Result.GetRef23());
	ImGuiDisplayCopyableValue(TEXT("Ref24"), Result.GetRef24());
	ImGuiDisplayCopyableValue(TEXT("Ref25"), Result.GetRef25());
	ImGuiDisplayCopyableValue(TEXT("Ref26"), Result.GetRef26());
	ImGuiDisplayCopyableValue(TEXT("Ref27"), Result.GetRef27());
	ImGuiDisplayCopyableValue(TEXT("Ref28"), Result.GetRef28());
	ImGuiDisplayCopyableValue(TEXT("Ref29"), Result.GetRef29());
	ImGuiDisplayCopyableValue(TEXT("Ref30"), Result.GetRef30());
	ImGuiDisplayCopyableValue(TEXT("Ref31"), Result.GetRef31());
	ImGuiDisplayCopyableValue(TEXT("Ref32"), Result.GetRef32());
	ImGuiDisplayCopyableValue(TEXT("Etag"), Result.GetEtag());
}

void FRHDTW_Guide::ImGuiEngagementInput_Favorite(const TArray<FGuid>& GuideIDs)
{
	if (ImGui::Button("Favorite"))
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([GuideIDs](URH_PlayerInfo* PlayerInfo)
		{
			if (PlayerInfo)
			{
				if (auto PlayerGuideEngagement = PlayerInfo->GetGuideEngagement())
				{
					for (const auto& GuideID : GuideIDs)
					{
						PlayerGuideEngagement->AddGuideToFavorites(GuideID);
					}
				}
			}
		}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Unfavorite"))
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([GuideIDs](URH_PlayerInfo* PlayerInfo)
		{
			if (PlayerInfo)
			{
				if (auto PlayerGuideEngagement = PlayerInfo->GetGuideEngagement())
				{
					for (const auto& GuideID : GuideIDs)
					{
						PlayerGuideEngagement->RemoveGuideFromFavorites(GuideID);
					}
				}
			}
		}));
	}
}

void FRHDTW_Guide::ImGuiEngagementInput_Rate(const TArray<FGuid>& GuideIDs)
{
	if (ImGui::InputInt("Rating (-1,0,1)", &GuideUpdateRating))
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, GuideIDs](URH_PlayerInfo* PlayerInfo)
		{
			if (PlayerInfo)
			{
				if (auto PlayerGuideEngagement = PlayerInfo->GetGuideEngagement())
				{
					for (const auto& GuideID : GuideIDs)
					{
						PlayerGuideEngagement->RateGuide(GuideID, GuideUpdateRating);
					}
				}
			}
		}));
	}
}

const FRHAPI_EntityGuideEngagement* FRHDTW_Guide::FindGuideEngagement(const FGuid& GuideID) const
{
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
		{
			if (URH_PlayerGuideEngagement* pURH_PlayerGuideEngagement = ActivePlayerInfo->GetGuideEngagement())
			{
				return pURH_PlayerGuideEngagement->GetGuideEngagement().Find(GuideID);
			}
		}
	}
	return nullptr;
}

void FRHDTW_Guide::DoShowGuideFull(const FRHAPI_GuideFull& Result, class URH_GuideSubsystem* GuideSS)
{
	bool bNeedsDelete = false;
	if (ImGui::Button("Delete"))
	{
		bNeedsDelete = true; // Delay to end, so we can still display this frame properly
	}

	ImGui::SameLine();
	bool bNeedsCacheRemoval = false;
	if (ImGui::Button("Remove from cache"))
	{
		bNeedsCacheRemoval = true;
	}
	ImGuiEngagementInput_Favorite({ Result.GetGuideId() });
	ImGuiEngagementInput_Rate({ Result.GetGuideId() });
	
	ImGuiDisplayCopyableValue(TEXT("ID"), Result.GetGuideId());
	ImGuiDisplayCopyableValue(TEXT("Name"), Result.GetName());
	ImGuiDisplayCopyableValue(TEXT("Guide Type"), Result.GetGuideType());
	ImGuiDisplayCopyableValue(TEXT("Owner Type"), EnumToString(Result.GetOwnerEntityType()));
	ImGuiDisplayCopyableValue(TEXT("Owner ID"), Result.GetOwnerEntityId());
	ImGuiDisplayCopyableValue(TEXT("Language"), Result.GetLanguage());
	ImGuiDisplayCopyableValue(TEXT("Game Version"), Result.GetGameVersion());
	ImGuiDisplayCopyableValue(TEXT("Short Desc"), Result.GetShortDescOrNull());
	ImGuiDisplayCopyableValue(TEXT("Created"), Result.GetCreated());
	ImGuiDisplayCopyableValue(TEXT("Modified"), Result.GetModified());
	ImGuiDisplayCopyableValue(TEXT("Favorites"), Result.GetFavoritesOrNull());
	ImGuiDisplayCopyableValue(TEXT("Upvotes"), Result.GetUpvotesOrNull());
	ImGuiDisplayCopyableValue(TEXT("Downvotes"), Result.GetDownvotesOrNull());
	ImGuiDisplayCopyableValue(TEXT("Ref1"), Result.GetRef1());
	ImGuiDisplayCopyableValue(TEXT("Ref2"), Result.GetRef2());
	ImGuiDisplayCopyableValue(TEXT("Ref3"), Result.GetRef3());
	ImGuiDisplayCopyableValue(TEXT("Ref4"), Result.GetRef4());
	ImGuiDisplayCopyableValue(TEXT("Ref5"), Result.GetRef5());
	ImGuiDisplayCopyableValue(TEXT("Ref6"), Result.GetRef6());
	ImGuiDisplayCopyableValue(TEXT("Ref7"), Result.GetRef7());
	ImGuiDisplayCopyableValue(TEXT("Ref8"), Result.GetRef8());
	ImGuiDisplayCopyableValue(TEXT("Ref9"), Result.GetRef9());
	ImGuiDisplayCopyableValue(TEXT("Ref10"), Result.GetRef10());
	ImGuiDisplayCopyableValue(TEXT("Ref11"), Result.GetRef11());
	ImGuiDisplayCopyableValue(TEXT("Ref12"), Result.GetRef12());
	ImGuiDisplayCopyableValue(TEXT("Ref13"), Result.GetRef13());
	ImGuiDisplayCopyableValue(TEXT("Ref14"), Result.GetRef14());
	ImGuiDisplayCopyableValue(TEXT("Ref15"), Result.GetRef15());
	ImGuiDisplayCopyableValue(TEXT("Ref16"), Result.GetRef16());
	ImGuiDisplayCopyableValue(TEXT("Ref17"), Result.GetRef17());
	ImGuiDisplayCopyableValue(TEXT("Ref18"), Result.GetRef18());
	ImGuiDisplayCopyableValue(TEXT("Ref19"), Result.GetRef19());
	ImGuiDisplayCopyableValue(TEXT("Ref20"), Result.GetRef20());
	ImGuiDisplayCopyableValue(TEXT("Ref21"), Result.GetRef21());
	ImGuiDisplayCopyableValue(TEXT("Ref22"), Result.GetRef22());
	ImGuiDisplayCopyableValue(TEXT("Ref23"), Result.GetRef23());
	ImGuiDisplayCopyableValue(TEXT("Ref24"), Result.GetRef24());
	ImGuiDisplayCopyableValue(TEXT("Ref25"), Result.GetRef25());
	ImGuiDisplayCopyableValue(TEXT("Ref26"), Result.GetRef26());
	ImGuiDisplayCopyableValue(TEXT("Ref27"), Result.GetRef27());
	ImGuiDisplayCopyableValue(TEXT("Ref28"), Result.GetRef28());
	ImGuiDisplayCopyableValue(TEXT("Ref29"), Result.GetRef29());
	ImGuiDisplayCopyableValue(TEXT("Ref30"), Result.GetRef30());
	ImGuiDisplayCopyableValue(TEXT("Ref31"), Result.GetRef31());
	ImGuiDisplayCopyableValue(TEXT("Ref32"), Result.GetRef32());
	ImGuiDisplayCopyableValue(TEXT("Etag"), Result.GetEtag());
	ImGuiDisplayCopyableValue(TEXT("Content"), Result.GetContentOrNull());

	for (TArray<FRHAPI_GuideSectionFull>::TConstIterator Itr(Result.GetSections()); Itr; ++Itr)
	{
		const FString ExpandName = FString::Format(TEXT("{0} - {1} - {2}"), {Itr.GetIndex(), Itr->SectionType, Itr->Name});
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*ExpandName), RH_DefaultTreeFlags))
		{
			DoShowGuideSectionFull(*Itr);
			ImGui::TreePop();
		}
	}

	if (bNeedsDelete)
	{
		GuideSS->DeleteGuide(Result.GetGuideId());
	}
	if (bNeedsCacheRemoval)
	{
		GuideSS->RemoveCachedGuide(Result.GetGuideId());
	}
}

void FRHDTW_Guide::DoShowGuideSectionFull(const FRHAPI_GuideSectionFull& Result)
{
	ImGuiDisplayCopyableValue(TEXT("Name"), Result.GetName());
	ImGuiDisplayCopyableValue(TEXT("Section Type"), Result.GetSectionType());
	ImGuiDisplayCopyableValue(TEXT("Short Desc"), Result.GetShortDescOrNull());
	ImGuiDisplayCopyableValue(TEXT("Created"), Result.GetCreated());
	ImGuiDisplayCopyableValue(TEXT("Modified"), Result.GetModified());
	ImGuiDisplayCopyableValue(TEXT("Ref1"), Result.GetRef1());
	ImGuiDisplayCopyableValue(TEXT("Ref2"), Result.GetRef2());
	ImGuiDisplayCopyableValue(TEXT("Ref3"), Result.GetRef3());
	ImGuiDisplayCopyableValue(TEXT("Ref4"), Result.GetRef4());
	ImGuiDisplayCopyableValue(TEXT("Ref5"), Result.GetRef5());
	ImGuiDisplayCopyableValue(TEXT("Ref6"), Result.GetRef6());
	ImGuiDisplayCopyableValue(TEXT("Ref7"), Result.GetRef7());
	ImGuiDisplayCopyableValue(TEXT("Ref8"), Result.GetRef8());
	ImGuiDisplayCopyableValue(TEXT("Ref9"), Result.GetRef9());
	ImGuiDisplayCopyableValue(TEXT("Ref10"), Result.GetRef10());
	ImGuiDisplayCopyableValue(TEXT("Ref11"), Result.GetRef11());
	ImGuiDisplayCopyableValue(TEXT("Ref12"), Result.GetRef12());
	ImGuiDisplayCopyableValue(TEXT("Ref13"), Result.GetRef13());
	ImGuiDisplayCopyableValue(TEXT("Ref14"), Result.GetRef14());
	ImGuiDisplayCopyableValue(TEXT("Ref15"), Result.GetRef15());
	ImGuiDisplayCopyableValue(TEXT("Ref16"), Result.GetRef16());
	ImGuiDisplayCopyableValue(TEXT("Ref17"), Result.GetRef17());
	ImGuiDisplayCopyableValue(TEXT("Ref18"), Result.GetRef18());
	ImGuiDisplayCopyableValue(TEXT("Ref19"), Result.GetRef19());
	ImGuiDisplayCopyableValue(TEXT("Ref20"), Result.GetRef20());
	ImGuiDisplayCopyableValue(TEXT("Ref21"), Result.GetRef21());
	ImGuiDisplayCopyableValue(TEXT("Ref22"), Result.GetRef22());
	ImGuiDisplayCopyableValue(TEXT("Ref23"), Result.GetRef23());
	ImGuiDisplayCopyableValue(TEXT("Ref24"), Result.GetRef24());
	ImGuiDisplayCopyableValue(TEXT("Ref25"), Result.GetRef25());
	ImGuiDisplayCopyableValue(TEXT("Ref26"), Result.GetRef26());
	ImGuiDisplayCopyableValue(TEXT("Ref27"), Result.GetRef27());
	ImGuiDisplayCopyableValue(TEXT("Ref28"), Result.GetRef28());
	ImGuiDisplayCopyableValue(TEXT("Ref29"), Result.GetRef29());
	ImGuiDisplayCopyableValue(TEXT("Ref30"), Result.GetRef30());
	ImGuiDisplayCopyableValue(TEXT("Ref31"), Result.GetRef31());
	ImGuiDisplayCopyableValue(TEXT("Ref32"), Result.GetRef32());
	ImGuiDisplayCopyableValue(TEXT("Content"), Result.GetContentOrNull());
}
