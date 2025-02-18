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

FRHDTW_Guide::FRHDTW_Guide()
{
	SelectedGuideSearchHandle = 0;
	SelectedGuideSearchPage = 0;
	SelectedGuideSearchDisplayString = "Select a Search";
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

	if (ImGui::BeginTabBar("Matches"))
	{
		if (ImGui::BeginTabItem("Search Matches"))
		{
			DoSearchGuides();
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

FString FRHDTW_Guide::GetSearchString(const FRH_GuideSearch& Search) const
{
	FString Result;
	if (!Search.InputRequest.Name.IsEmpty())
	{
		Result += TEXT("Name:");
		Result += Search.InputRequest.Name;
		Result += TEXT(" ");
	}
	
	if (Search.InputRequest.bDoOwnerSearch)
	{
		Result += EnumToString(Search.InputRequest.OwnerEntityType);
		Result += TEXT(":");
		Result += Search.InputRequest.OwnerEntityId;
	}

	if (!Search.InputRequest.Language.IsEmpty())
	{
		Result += Search.InputRequest.Language;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.GuideType.IsEmpty())
	{
		Result += TEXT("Type:");
		Result += Search.InputRequest.GuideType;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.GameVersion.IsEmpty())
	{
		Result += TEXT("Version:");
		Result += Search.InputRequest.GameVersion;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref1.IsEmpty())
	{
		Result += TEXT("Ref1:");
		Result += Search.InputRequest.Ref1;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref2.IsEmpty())
	{
		Result += TEXT("Ref2:");
		Result += Search.InputRequest.Ref2;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref3.IsEmpty())
	{
		Result += TEXT("Ref3:");
		Result += Search.InputRequest.Ref3;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref4.IsEmpty())
	{
		Result += TEXT("Ref4:");
		Result += Search.InputRequest.Ref4;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref5.IsEmpty())
	{
		Result += TEXT("Ref5:");
		Result += Search.InputRequest.Ref5;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref6.IsEmpty())
	{
		Result += TEXT("Ref6:");
		Result += Search.InputRequest.Ref6;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref7.IsEmpty())
	{
		Result += TEXT("Ref7:");
		Result += Search.InputRequest.Ref7;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref8.IsEmpty())
	{
		Result += TEXT("Ref8:");
		Result += Search.InputRequest.Ref8;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref9.IsEmpty())
	{
		Result += TEXT("Ref9:");
		Result += Search.InputRequest.Ref9;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref10.IsEmpty())
	{
		Result += TEXT("Ref10:");
		Result += Search.InputRequest.Ref10;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref11.IsEmpty())
	{
		Result += TEXT("Ref11:");
		Result += Search.InputRequest.Ref11;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref12.IsEmpty())
	{
		Result += TEXT("Ref12:");
		Result += Search.InputRequest.Ref12;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref13.IsEmpty())
	{
		Result += TEXT("Ref13:");
		Result += Search.InputRequest.Ref13;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref14.IsEmpty())
	{
		Result += TEXT("Ref14:");
		Result += Search.InputRequest.Ref14;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref15.IsEmpty())
	{
		Result += TEXT("Ref15:");
		Result += Search.InputRequest.Ref15;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref16.IsEmpty())
	{
		Result += TEXT("Ref16:");
		Result += Search.InputRequest.Ref16;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref17.IsEmpty())
	{
		Result += TEXT("Ref17:");
		Result += Search.InputRequest.Ref17;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref18.IsEmpty())
	{
		Result += TEXT("Ref18:");
		Result += Search.InputRequest.Ref18;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref19.IsEmpty())
	{
		Result += TEXT("Ref19:");
		Result += Search.InputRequest.Ref19;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref20.IsEmpty())
	{
		Result += TEXT("Ref20:");
		Result += Search.InputRequest.Ref20;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref21.IsEmpty())
	{
		Result += TEXT("Ref21:");
		Result += Search.InputRequest.Ref21;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref22.IsEmpty())
	{
		Result += TEXT("Ref22:");
		Result += Search.InputRequest.Ref22;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref23.IsEmpty())
	{
		Result += TEXT("Ref23:");
		Result += Search.InputRequest.Ref23;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref24.IsEmpty())
	{
		Result += TEXT("Ref24:");
		Result += Search.InputRequest.Ref24;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref25.IsEmpty())
	{
		Result += TEXT("Ref25:");
		Result += Search.InputRequest.Ref25;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref26.IsEmpty())
	{
		Result += TEXT("Ref26:");
		Result += Search.InputRequest.Ref26;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref27.IsEmpty())
	{
		Result += TEXT("Ref27:");
		Result += Search.InputRequest.Ref27;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref28.IsEmpty())
	{
		Result += TEXT("Ref28:");
		Result += Search.InputRequest.Ref28;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref29.IsEmpty())
	{
		Result += TEXT("Ref29:");
		Result += Search.InputRequest.Ref29;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref30.IsEmpty())
	{
		Result += TEXT("Ref30:");
		Result += Search.InputRequest.Ref30;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref31.IsEmpty())
	{
		Result += TEXT("Ref31:");
		Result += Search.InputRequest.Ref31;
		Result += TEXT(" ");
	}
	
	if (!Search.InputRequest.Ref32.IsEmpty())
	{
		Result += TEXT("Ref32:");
		Result += Search.InputRequest.Ref32;
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

	ImGui::Text("Search Matches");

	if (ImGui::BeginCombo("Search", SelectedGuideSearchDisplayString.c_str()))
	{
		for (TMap<int32, FRH_GuideSearch>::TConstIterator Itr(GuideSS->GetSearches()); Itr; ++Itr)
		{
			FString SearchText = GetSearchString(Itr.Value()) + FString::Format(TEXT("#{0}"), {Itr.Key()});
			FTCHARToUTF8 UTF8SearchText(*SearchText);
			bool bIsSelected = Itr.Key() == SelectedGuideSearchHandle;
			if (ImGui::Selectable(UTF8SearchText.Get(), bIsSelected))
			{
				SelectedGuideSearchHandle = Itr.Key();
				SelectedGuideSearchDisplayString = UTF8SearchText.Get();
				SelectedGuideSearchPage = 0;
				bIsSelected = true;
			}
			if (bIsSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}

	if (ImGui::Button("Create New"))
	{
		ImGui::OpenPopup("CreateNewGuideSearch");
	}

	if (ImGui::BeginPopup("CreateNewGuideSearch"))
	{
		if (DoCreateNewSearch())
		{
			ImGui::CloseCurrentPopup();
			SelectedGuideSearchHandle = GuideSS->CreateSearchGuides(SearchParams);
			SelectedGuideSearchDisplayString = TCHAR_TO_UTF8(*GetSearchString(*GuideSS->GetSearches().Find(SelectedGuideSearchHandle)));
			SelectedGuideSearchPage = 0;
		}
		ImGui::EndPopup();
	}

	ImGui::SameLine();
	if (ImGui::Button("Remove Current"))
	{
		GuideSS->ClearSearchGuide(SelectedGuideSearchHandle);
		SelectedGuideSearchHandle = 0;
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

	ImGuiDisplayEnumCombo("SortBy", SearchParams.SortBy);
	ImGuiDisplayEnumCombo("Sort", SearchParams.Sort);

	if (ImGui::InputInt("Page Size", &SearchParams.PageSize))
	{
		SearchParams.PageSize = FMath::Clamp(SearchParams.PageSize, 0, 100);
	}
	
	if (ImGui::Checkbox("Owner?", &SearchParams.bDoOwnerSearch))
	{
		ImGuiDisplayEnumCombo("##OwnerType", SearchParams.OwnerEntityType);
		ImGui::InputText("##OwnerId", &SearchParams.OwnerEntityId);
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

	auto GuideSearch = GuideSS->GetSearches().Find(SelectedGuideSearchHandle);
	if (!GuideSearch)
	{
		return;
	}

	ImGui::Text("Page: ");
	ImGui::SameLine();
	for (int32 x = 0; x < GuideSearch->ResultPages.Num(); ++x)
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
		GuideSS->RequestNextSearchGuidePage(SelectedGuideSearchHandle);
	}

	if (SelectedGuideSearchPage >= GuideSearch->ResultPages.Num())
	{
		ImGui::Text("Invalid Page");
		return;
	}

	const auto& Page = GuideSearch->ResultPages[SelectedGuideSearchPage];
	auto PageResults = Page.GetResultsOrNull();
	if (!PageResults)
	{
		ImGui::Text("No Results");
		return;
	}

	for (TArray<FRHAPI_GuideSearchResult>::TConstIterator Itr(*PageResults); Itr; ++Itr)
	{
		const FString ExpandName = FString::Format(TEXT("{0} - {1}"), {Itr->GuideId.ToString(), Itr->Name});
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*ExpandName), RH_DefaultTreeFlags))
		{
			DoShowGuideSearchPage(*Itr);
		}
	}
}

void FRHDTW_Guide::DoShowGuideSearchPage(const FRHAPI_GuideSearchResult& Result)
{
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
