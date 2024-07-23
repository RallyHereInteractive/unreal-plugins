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

#include "Misc/App.h"
#include "Misc/FilterCollection.h"

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
	AutomationController->OnTestsRefreshed().AddLambda([WeakThis=SharedThis(this).ToWeakPtr()]()
		{
			auto StrongThis = WeakThis.Pin();
			if (StrongThis.IsValid())
			{
				// Reset the filter string when the tests are refreshed
				StrongThis->bHasInitializedFilter = false;
			}
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

	ImGui::Text("Tests are running: %s", AreTestsRunning() ? "true" : "false");

	ImGui::BeginDisabled(AreTestsRunning() || AutomationController->GetEnabledTestsNum() == 0);
	if (ImGui::Button("Run Tests"))
	{
		AutomationController->RunTests();
	}
	ImGui::EndDisabled();

	ImGui::Separator();

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
	if (ImGui::Button("Enable Visible"))
	{
		AutomationController->SetVisibleTestsEnabled(true);
	}
	ImGui::SameLine();
	if (ImGui::Button("Disable Visible"))
	{
		AutomationController->SetVisibleTestsEnabled(false);
	}
	ImGui::SameLine();
	if (ImGui::Button("Enable Only Visible"))
	{
		AutomationController->SetEnabledTests(TArray<FString>());
		AutomationController->SetVisibleTestsEnabled(true);
	}

	ImGui::SameLine();
	if (ImGui::Button("Disable All"))
	{
		AutomationController->SetEnabledTests(TArray<FString>());
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

	{
		FString CurrentBucketName;
		bool bCurrentBucketExpanded = false;

		for (const auto& TestName : FilteredTestNames)
		{
			bool bIsEnabled = EnabledTestNames.Contains(TestName);

			FString BucketName;
			TestName.Split(TEXT("."), &BucketName, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

			if (BucketName != CurrentBucketName)
			{
				if (bCurrentBucketExpanded)
				{
					CurrentBucketName = TEXT("");
					bCurrentBucketExpanded = false;
					ImGui::TreePop();
				}

				auto BucketTests = FilteredTestNames.FilterByPredicate([BucketName](const FString& TestName)
					{
						FString TestBucketName;
						TestName.Split(TEXT("."), &TestBucketName, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
						return TestBucketName == BucketName;
					});

				bool bAllEnabled = true;
				bool bAllDisabled = true;
				for (const auto& Test : BucketTests)
				{
					if (!EnabledTestNames.Contains(Test))
					{
						bAllEnabled = false;
					}
					else if (EnabledTestNames.Contains(Test))
					{
						bAllDisabled = false;
					}
				}

				// using a flags array which allows for mixed result display
				int flags = bAllEnabled ? 0xF : (bAllDisabled ? 0x0 : 0x1);
				FString HiddenBucketName = FString::Printf(TEXT("##%s"), *BucketName);
				if (ImGui::CheckboxFlags(TCHAR_TO_UTF8(*HiddenBucketName), &flags, 0xF))
				{
					if (flags == 0xF)
					{
						for (const auto& Test : BucketTests)
						{
							EnabledTestNames.Add(Test);
						}
						AutomationController->SetEnabledTests(EnabledTestNames);
					}
					else if (flags == 0x0)
					{
						for (const auto& Test : BucketTests)
						{
							EnabledTestNames.Remove(Test);
						}
						AutomationController->SetEnabledTests(EnabledTestNames);
					}
				}
				ImGui::SameLine();

				bCurrentBucketExpanded = ImGui::TreeNodeEx(TCHAR_TO_ANSI(*BucketName), RH_DefaultTreeFlagsDefaultOpen);
				CurrentBucketName = BucketName;
			}

			if (bCurrentBucketExpanded)
			{
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

		if (bCurrentBucketExpanded)
		{
			ImGui::TreePop();
		}
	}
}

void FRHDTW_Automation::DoResultsTab()
{
	auto EnabledReports = AutomationController->GetEnabledReports();

	EnabledReports.Sort([](const TSharedPtr<IAutomationReport>& A, const TSharedPtr<IAutomationReport>& B)
		{
			return A->GetFullTestPath() < B->GetFullTestPath();
		});

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
					FString CurrentBucketName;
					bool bCurrentBucketExpanded = false;

					for (const auto& Report : EnabledReports)
					{
						FString BucketName;
						Report->GetFullTestPath().Split(TEXT("."), &BucketName, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

						if (BucketName != CurrentBucketName)
						{
							if (bCurrentBucketExpanded)
							{
								CurrentBucketName = TEXT("");
								bCurrentBucketExpanded = false;
								ImGui::TreePop();
							}

							bCurrentBucketExpanded = ImGui::TreeNodeEx(TCHAR_TO_ANSI(*BucketName), RH_DefaultTreeFlagsDefaultOpen);
							CurrentBucketName = BucketName;
						}

						if (bCurrentBucketExpanded)
						{
							const auto Result = Report->GetResults(i, LastPassIndex);

							ImGuiColors::HeaderStyle::HeaderStyleColor HeaderColor = ImGuiColors::HeaderStyle::GetDefault();

							switch (Result.State)
							{
							case EAutomationState::NotRun:				// Automation test was not run
								HeaderColor = ImGuiColors::HeaderStyle::Yellow;
								break;
							case EAutomationState::InProcess:			// Automation test is running now
								HeaderColor = ImGuiColors::HeaderStyle::Teal;
								break;
							case EAutomationState::Fail:				// Automation test was run and failed
								HeaderColor = ImGuiColors::HeaderStyle::Red;
								break;
							case EAutomationState::Skipped:				// Automation test was skipped
								HeaderColor = ImGuiColors::HeaderStyle::Yellow;
								break;
							case EAutomationState::Success:				// Automation test was run and succeeded
							default:
								// no custom styling, use default
								HeaderColor = ImGuiColors::HeaderStyle::GetDefault();
								break;
							}

							ImGuiColors::HeaderStyle::ScopedHeaderStyle ResultStyle(HeaderColor);

							auto ReportName = Report->GetFullTestPath();
							if (ImGui::TreeNodeEx(TCHAR_TO_ANSI(*ReportName), RH_DefaultTreeFlags))
							{
								FAutomationTestResults TestResults = Report->GetResults(i, LastPassIndex);
								if (TestResults.GameInstance == DeviceInstanceName)
								{
									// Display the test results

									ImGuiDisplayCopyableValue(TEXT("Duration"), TestResults.Duration);
									ImGuiDisplayCopyableValue(TEXT("State:"), AutomationStateToString(TestResults.State));

									auto DisplayFilteredEvents = [&](EAutomationEventType Type, const FString& Title, const ImGuiColors::HeaderStyle::HeaderStyleColor& Color)
										{
											auto FilteredEvents = TestResults.GetEntries().FilterByPredicate([Type](const FAutomationExecutionEntry& Event)
												{
													return Event.Event.Type == Type;
												});

											if (FilteredEvents.Num() > 0)
											{
												ImGuiColors::HeaderStyle::ScopedHeaderStyle EventStyle(Color);
												FString FilteredEventsString = FString::Printf(TEXT("%s: %d"), *Title, FilteredEvents.Num());

												if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FilteredEventsString), RH_DefaultTreeFlags))
												{
													int32 EventIndex = 0;
													for (const auto& Event : FilteredEvents)
													{
														const auto Key = FString::Printf(TEXT("Event %d"), EventIndex++);
														ImGuiDisplayCopyableValue(Key, Event.ToString(), ECopyMode::Value);
													}

													ImGui::TreePop();
												}
											}
										};

									DisplayFilteredEvents(EAutomationEventType::Error, TEXT("Errors"), ImGuiColors::HeaderStyle::Red);

									DisplayFilteredEvents(EAutomationEventType::Warning, TEXT("Warnings"), ImGuiColors::HeaderStyle::Yellow);

									DisplayFilteredEvents(EAutomationEventType::Info, TEXT("Logs"), ImGuiColors::HeaderStyle::Teal);
								}

								ImGui::TreePop();
							}
						}
					}

					if (bCurrentBucketExpanded)
					{
						ImGui::TreePop();
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
