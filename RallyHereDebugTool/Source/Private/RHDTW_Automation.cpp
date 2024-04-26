// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RallyHereIntegrationModule.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "Engine/World.h"

#include "RHDTW_Automation.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "IAutomationControllerModule.h"
#include "IAutomationControllerManager.h"
#include "AutomationGroupFilter.h"

FRHDTW_Automation::FRHDTW_Automation()
	: Super()
{
	FilterString = TEXT("RHAutomation.");
	bHasInitializedFilter = false;
}

FRHDTW_Automation::~FRHDTW_Automation()
{
}

void FRHDTW_Automation::Init(URallyHereDebugTool* InOwner, const FString& InName)
{
	Super::Init(InOwner, InName);

	// Load the automation controller
	IAutomationControllerModule* AutomationControllerModule = &FModuleManager::LoadModuleChecked<IAutomationControllerModule>("AutomationController");
	AutomationController = AutomationControllerModule->GetAutomationController();

	AutomationController->Init();
	AutomationController->OnTestsRefreshed().AddSPLambda(this, [this]()
		{
			// Reset the filter string when the tests are refreshed
			bHasInitializedFilter = false;
		});
}

void FRHDTW_Automation::Uninit()
{
	Super::Uninit();
}

void FRHDTW_Automation::Do()
{
	if (!AutomationController.IsValid())
	{
		ImGui::Text("Automation Controller is not valid.");
		return;
	}

	if (AutomationController->GetNumDeviceClusters() == 0)
	{
		ImGui::Text("No device clusters found.");
		if (ImGui::Button("Refresh"))
		{
			AutomationController->RequestAvailableWorkers(FApp::GetSessionId());
		}
		return;
	}

	if (ImGui::BeginTabBar("Automated Tests"))
	{
		if (ImGui::BeginTabItem("Run"))
		{
			DoRunTab();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Results"))
		{
			DoResultsTab();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Automation::DoRunTab()
{
	ImGui::Text("Tests are running: %s", AreTestsRunning() ? "true" : "false");

	ImGui::BeginDisabled(AreTestsRunning() || AutomationController->GetEnabledTestsNum() == 0);
	if (ImGui::Button("Run Tests"))
	{
		AutomationController->RunTests();
	}
	ImGui::EndDisabled();

	ImGui::Separator();

	if (ImGui::Button("Enable All Visible"))
	{
		AutomationController->SetVisibleTestsEnabled(true);
	}
	ImGui::SameLine();
	if (ImGui::Button("Disable All Visible"))
	{
		AutomationController->SetVisibleTestsEnabled(false);
	}

	if (ImGui::InputText("Filter", &FilterString) || !bHasInitializedFilter)
	{
		bHasInitializedFilter = true;

		auto FilterCollection = MakeShared<AutomationFilterCollection>();

		//Split the argument names up on +
		TArray<FString> ArgumentNames;
		FilterString.ParseIntoArray(ArgumentNames, TEXT("+"), true);

		// get our settings CDO where things are stored
		UAutomationControllerSettings* Settings = UAutomationControllerSettings::StaticClass()->GetDefaultObject<UAutomationControllerSettings>();

		// iterate through the arguments to build a filter list by doing the following -
		// 1) If argument is a filter (StartsWith:system) then make sure we only filter-in tests that start with that filter
		// 2) If argument is a group then expand that group into multiple filters based on ini entries
		// 3) Otherwise just substring match (default behavior in 4.22 and earlier).
		FAutomationGroupFilter* FilterAny = new FAutomationGroupFilter();
		TArray<FAutomatedTestFilter> FiltersList;
		for (int32 ArgumentIndex = 0; ArgumentIndex < ArgumentNames.Num(); ++ArgumentIndex)
		{
			const FString GroupPrefix = TEXT("Group:");
			const FString FilterPrefix = TEXT("StartsWith:");

			FString ArgumentName = ArgumentNames[ArgumentIndex].TrimStartAndEnd();

			// if the argument is a filter (e.g. Filter:System) then create a filter that matches from the start
			if (ArgumentName.StartsWith(FilterPrefix))
			{
				FString FilterName = ArgumentName.RightChop(FilterPrefix.Len()).TrimStart();

				if (FilterName.EndsWith(TEXT(".")) == false)
				{
					FilterName += TEXT(".");
				}

				FiltersList.Add(FAutomatedTestFilter(FilterName, true, false));
			}
			else if (ArgumentName.StartsWith(GroupPrefix))
			{
				// if the argument is a group (e.g. Group:Rendering) then seach our groups for one that matches
				FString GroupName = ArgumentName.RightChop(GroupPrefix.Len()).TrimStart();

				bool FoundGroup = false;

				for (int32 i = 0; i < Settings->Groups.Num(); ++i)
				{
					FAutomatedTestGroup* GroupEntry = &(Settings->Groups[i]);
					if (GroupEntry && GroupEntry->Name == GroupName)
					{
						FoundGroup = true;
						// if found add all this groups filters to our current list
						if (GroupEntry->Filters.Num() > 0)
						{
							FiltersList.Append(GroupEntry->Filters);
						}
						else
						{
							//UE_LOG(LogAutomationCommandLine, Warning, TEXT("Group %s contains no filters"), *GroupName);
						}
					}
				}

				if (!FoundGroup)
				{
					//UE_LOG(LogAutomationCommandLine, Warning, TEXT("No matching group named %s"), *GroupName);
				}
			}
			else
			{
				bool bMatchFromStart = false;
				bool bMatchFromEnd = false;

				if (ArgumentName.StartsWith("^"))
				{
					bMatchFromStart = true;
					ArgumentName.RightChopInline(1);
				}
				if (ArgumentName.EndsWith("$"))
				{
					bMatchFromEnd = true;
					ArgumentName.LeftChopInline(1);
				}

				FiltersList.Add(FAutomatedTestFilter(ArgumentName, bMatchFromStart, bMatchFromEnd));
			}
		}

		FilterAny->SetFilters(FiltersList);

		TSharedPtr<AutomationFilterCollection> AutomationFilters = MakeShareable(new AutomationFilterCollection());
		AutomationFilters->Add(MakeShareable(FilterAny));

		AutomationController->SetFilter(AutomationFilters);
	}

	TArray<FString> EnabledTestNames;
	AutomationController->GetEnabledTestNames(EnabledTestNames);

	TArray<FString> FilteredTestNames;
	AutomationController->GetFilteredTestNames(FilteredTestNames);

	FilteredTestNames.Sort();

	for (const auto& TestName : FilteredTestNames)
	{
		bool bIsEnabled = EnabledTestNames.Contains(TestName);

		if (ImGui::Checkbox(TCHAR_TO_ANSI(*TestName), &bIsEnabled))
		{
			if (bIsEnabled)
			{
				EnabledTestNames.Add(TestName);
			}
			else
			{
				EnabledTestNames.Remove(TestName);
			}

			AutomationController->SetEnabledTests(EnabledTestNames);
		}
	}
}

void FRHDTW_Automation::DoResultsTab()
{
	auto EnabledReports = AutomationController->GetEnabledReports();

	
	auto StyleHeaderColor = [](FColor BaseColor, FColor HoveredColor, FColor ActiveColor)
	{
		ImGui::PushStyleColor(ImGuiCol_Header, BaseColor.ToPackedABGR());
		ImGui::PushStyleColor(ImGuiCol_HeaderHovered, HoveredColor.ToPackedABGR());
		ImGui::PushStyleColor(ImGuiCol_HeaderActive, ActiveColor.ToPackedABGR());
	};

	const uint32 LastPassIndex = AutomationController->GetNumPasses() - 1;

	//Pull the data out of the reports
	for (int i = 0; i < AutomationController->GetNumDeviceClusters(); ++i)
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_ANSI(*AutomationController->GetClusterGroupName(i)), RH_DefaultTreeFlagsLeaf))
		{
			for (int j = 0; j < AutomationController->GetNumDevicesInCluster(i); ++j)
			{
				auto DeviceInstanceName = AutomationController->GetGameInstanceName(i, j);
				if (ImGui::TreeNodeEx(TCHAR_TO_ANSI(*DeviceInstanceName), RH_DefaultTreeFlagsLeaf))
				{
					for (int k = 0; k < EnabledReports.Num(); ++k)
					{
						const auto Report = EnabledReports[k];
						const auto Result = Report->GetResults(i, LastPassIndex);

						bool hasColorStyling = false;

						switch (Result.State)
						{
						case EAutomationState::NotRun:				// Automation test was not run
							StyleHeaderColor(ImGuiColors::Yellow_Base, ImGuiColors::Yellow_Hovered, ImGuiColors::Yellow_Active);
							hasColorStyling = true;
							break;
						case EAutomationState::InProcess:			// Automation test is running now
							StyleHeaderColor(ImGuiColors::Teal_Base, ImGuiColors::Teal_Hovered, ImGuiColors::Teal_Active);
							hasColorStyling = true;
							break;
						case EAutomationState::Fail:				// Automation test was run and failed
							StyleHeaderColor(ImGuiColors::Red_Base, ImGuiColors::Red_Hovered, ImGuiColors::Red_Active);
							hasColorStyling = true;
							break;
						case EAutomationState::Success:				// Automation test was run and succeeded
							// no custom styling, use default
							break;
						case EAutomationState::Skipped:				// Automation test was skipped
							StyleHeaderColor(ImGuiColors::Yellow_Base, ImGuiColors::Yellow_Hovered, ImGuiColors::Yellow_Active);
							hasColorStyling = true;
							break;
						}

						auto ReportName = Report->GetDisplayNameWithDecoration();
						if (ImGui::TreeNodeEx(TCHAR_TO_ANSI(*ReportName), RH_DefaultTreeFlags))
						{
							FAutomationTestResults TestResults = Report->GetResults(i, LastPassIndex);
							if (TestResults.GameInstance == DeviceInstanceName)
							{
								// Display the test results

								ImGuiDisplayCopyableValue(TEXT("Duration"), TestResults.Duration);
								ImGuiDisplayCopyableValue(TEXT("State:"), AutomationStateToString(TestResults.State));

								if (TestResults.GetErrorTotal() > 0)
								{
									ImGui::Text("Errors: %d", TestResults.GetErrorTotal());

									if (ImGui::TreeNodeEx("Errors", RH_DefaultTreeFlagsDefaultOpen))
									{
										int32 ErrorIndex = 0;
										for (const auto& Error : TestResults.GetEntries())
										{
											if (Error.Event.Type == EAutomationEventType::Error)
											{
												const auto Key = FString::Printf(TEXT("Error %d"), ErrorIndex++);
												ImGuiDisplayCopyableValue(Key, *Error.ToString(), ECopyMode::Value);
											}
										}

										ImGui::TreePop();
									}
								}

								if (TestResults.GetWarningTotal() > 0)
								{
									ImGui::Text("Warnings: %d", TestResults.GetWarningTotal());

									if (ImGui::TreeNodeEx("Warnings", RH_DefaultTreeFlags))
									{
										int32 WarningIndex = 0;
										for (const auto& Warning : TestResults.GetEntries())
										{
											if (Warning.Event.Type == EAutomationEventType::Warning)
											{
												const auto Key = FString::Printf(TEXT("Warning %d"), WarningIndex++);
												ImGuiDisplayCopyableValue(Key, *Warning.ToString(), ECopyMode::Value);
											}
										}

										ImGui::TreePop();
									}
								}
							}

							ImGui::TreePop();
						}

						if (hasColorStyling)
						{
							ImGui::PopStyleColor(3);
						}

					}

					ImGui::TreePop();
				}

			}

			ImGui::TreePop();
		}

	}

}

bool FRHDTW_Automation::AreTestsRunning() const
{
	return AutomationController->GetTestState() == EAutomationControllerModuleState::Running;
}

#endif
