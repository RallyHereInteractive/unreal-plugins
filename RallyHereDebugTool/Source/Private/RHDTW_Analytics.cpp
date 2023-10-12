#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RallyHereIntegrationModule.h"
#include "imgui.h"
#include "RH_WebRequests.h"
#include "RH_ImGuiUtilities.h"
#include <string>

#ifdef WITH_IMGUI_IMPLOT
#include "implot.h"
#endif

#include "RHDTW_Analytics.h"

FRHDTW_Analytics::FRHDTW_Analytics()
	: Super()
{
	APINameFilterInput.SetNumZeroed(64);
	URLFilterInput.SetNumZeroed(64);
	APINameCountPlotToggle = 0;
	URLCountPlotToggle = 0;
}

FRHDTW_Analytics::~FRHDTW_Analytics()
{
}

void FRHDTW_Analytics::Do()
{
	URH_WebRequests* WebRequestsTracker = FRallyHereIntegrationModule::Get().GetWebRequestTracker();
	if (WebRequestsTracker == nullptr)
	{
		ImGui::Text("RH_WebRequests unavailable.");
		return;
	}

	// call count all time
	const TMap<FName, int32> APINameCountAllTime = WebRequestsTracker->GetAPINameToCallCountMap();
	const TMap<FName, int32> URLCountAllTime = WebRequestsTracker->GetSimplifiedPathToCallCountMap();

	// call count for last 60s
	TMap<FName, int32> APINameCountRecent;
	TMap<FName, int32> URLCountRecent;
	WebRequestsTracker->GetRecentCallCountMaps(&APINameCountRecent, &URLCountRecent);

	// Bursts in last 60s
	TMap<FName, TTuple<int32, int32>> APINameBursts; // API name -> <num bursts, largest burst>
	TMap<FName, TTuple<int32, int32>> URLBursts; // Simplified Path -> <num bursts, largest burst>
	WebRequestsTracker->DetectRecentBursts(&APINameBursts, &URLBursts);

	if (ImGui::BeginTabBar("Analytics"))
	{
		if (ImGui::BeginTabItem("Web Calls By API Names"))
		{
			ImGui::SetNextItemWidth(300.f);
			ImGui::InputText("Filter by API Name", APINameFilterInput.GetData(), APINameFilterInput.Num());
			const FString FilterString = UTF8_TO_TCHAR(APINameFilterInput.GetData());

			if (ImGui::BeginTable("APIPlotsTable", 2))
			{
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::RadioButton("Last 60s", &APINameCountPlotToggle, 0);
				ImGui::SameLine();
				ImGui::RadioButton("All Time", &APINameCountPlotToggle, 1);
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				DoCallCountPlot(APINameCountAllTime, APINameCountRecent, APINameCountPlotToggle == 1, FString(TEXT("Calls Per API")), FString(TEXT("API")), FilterString);
				ImGui::TableNextColumn();
				DoTimelinePlot(WebRequestsTracker, FilterString, [](FRH_WebRequest* Request) -> FName
					{
						return Request->APIName;
					});
				ImGui::EndTable();
			}
			DoTable(APINameCountAllTime, APINameCountRecent, APINameBursts, FString(TEXT("APIName-CallCountsTable")), FString(TEXT("API Name")), FilterString);

			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Web Calls By Simplified Paths"))
		{
			ImGui::SetNextItemWidth(300.f);
			ImGui::InputText("Filter by Simplified Path", URLFilterInput.GetData(), URLFilterInput.Num());
			const FString FilterString = UTF8_TO_TCHAR(URLFilterInput.GetData());

			if (ImGui::BeginTable("URLPlotsTable", 2))
			{
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::RadioButton("Last 60s", &URLCountPlotToggle, 0);
				ImGui::SameLine();
				ImGui::RadioButton("All Time", &URLCountPlotToggle, 1);
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				DoCallCountPlot(URLCountAllTime, URLCountRecent, URLCountPlotToggle == 1, FString(TEXT("Calls Per Simplified Path")), FString(TEXT("Simplified Path")), FilterString);
				ImGui::TableNextColumn();
				DoTimelinePlot(WebRequestsTracker, FilterString, [](FRH_WebRequest* Request) -> FName
					{
						return Request->Metadata.SimplifiedPath;
					});
				ImGui::EndTable();
			}
			DoTable(URLCountAllTime, URLCountRecent, URLBursts, FString(TEXT("SimplifiedPath-CallCountsTable")), FString(TEXT("Simplified Path")), FilterString);
			
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Async Tasks"))
		{
			const TArray<TSharedRef<FRH_AsyncTaskHelper>>& OngoingRequests = FRH_AsyncTaskHelper::GetOngoingRequests();

			if (ImGui::BeginTable("Ongoing Requests", 3))
			{
				ImGui::TableSetupColumn("Task Name");
				ImGui::TableSetupColumn("Duration");
				ImGui::TableSetupColumn("Priority");
				ImGui::TableHeadersRow();
				for (auto& Task : OngoingRequests)
				{
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGuiDisplayCopyableValue(Task->GetName(), Task->GetName(), ECopyMode::Value);
					ImGui::TableNextColumn();
					ImGui::Text("%.2f", Task->GetDuration().GetTotalSeconds());
					ImGui::TableNextColumn();
					ImGui::Text("%d", Task->GetTaskPriority());
				}
				ImGui::EndTable();
			}
		}

		ImGui::EndTabBar();
	}
}

#pragma region REUSABLE HELPERS
void FRHDTW_Analytics::DoCallCountPlot(const TMap<FName, int32>& CountAllTime, TMap<FName, int32>& CountRecent, bool bAllTime, const FString& PlotName, const FString& CategoryName, const FString& FilterString)
{
#ifdef WITH_IMGUI_IMPLOT
	TMap<FName, int32>& MapToUse = CountRecent;
	MapToUse = bAllTime ? CountAllTime : CountRecent;

	if (ImPlot::BeginPlot(TCHAR_TO_UTF8(*PlotName), ImVec2(-1, 0), ImPlotFlags_NoLegend))
	{
		TArray<std::string> APINames;
		TArray<int32> CallCounts;
		TArray<double> Positions;

		double Position = 0;
		for (auto Pair : MapToUse)
		{
			const FString KeyAsString = Pair.Key.ToString();
			if (!FilterString.IsEmpty() && !KeyAsString.Contains(FilterString))
			{
				continue;
			}
			APINames.Add(TCHAR_TO_UTF8(*KeyAsString));
			CallCounts.Add(Pair.Value);
			Positions.Add(Position);
			Position += 1.0;
		}

		// convert std::string to ANSICHAR* while using the memory of the original array
		TArray<const ANSICHAR*> APINamesAsChars;
		APINamesAsChars.Reserve(APINames.Num());
		for (const std::string& APIName : APINames)
		{
			APINamesAsChars.Add(APIName.c_str());
		}

		const char* Labels[] = { "Call Count" };

		ImPlot::SetupAxes("Call Count", TCHAR_TO_UTF8(*CategoryName), ImPlotAxisFlags_AutoFit, ImPlotAxisFlags_AutoFit);
		ImPlot::SetupAxisTicks(ImAxis_Y1, Positions.GetData(), APINamesAsChars.Num(), APINamesAsChars.GetData());
		ImPlot::PlotBarGroups(Labels, CallCounts.GetData(), 1, APINamesAsChars.Num(), 0.5, 0, ImPlotBarGroupsFlags_Horizontal);

		ImPlot::EndPlot();
	}
#endif
}

void FRHDTW_Analytics::DoTimelinePlot(URH_WebRequests* WebRequestsTracker, const FString& FilterString, TFunctionRef<FName(FRH_WebRequest*)> GetKeyFromRequest)
{
#ifdef WITH_IMGUI_IMPLOT
	static const int SecondsInOneMinute = 60;
	const auto& TrackedRequests = WebRequestsTracker->GetTrackedRequests();
	const FDateTime TimeMin = FDateTime::Now() - FTimespan(0, 1, 0);

	struct KeyToCount
	{
		TMap<FName, int32> KeyToCount;
	};

	TArray<KeyToCount> TimelineCountByTimeAndKey;
	TimelineCountByTimeAndKey.SetNum(SecondsInOneMinute);
	TArray<FName> ItemsByFName;
	TDoubleLinkedListIterator<TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>::TDoubleLinkedListNode, TSharedPtr<FRH_WebRequest>>  requestsIterator(TrackedRequests.GetTail());
	for (; requestsIterator.GetNode() != nullptr; --requestsIterator)
	{
		auto request = requestsIterator.GetNode()->GetValue().Get();
		if (!request)
		{
			continue;
		}
		if (!FilterString.IsEmpty() && !GetKeyFromRequest(request).ToString().Contains(FilterString))
		{
			continue;
		}
		if (request->Timestamp <= TimeMin)
		{
			break;
		}

		int32 Bucket = request->Timestamp.ToUnixTimestamp() - TimeMin.ToUnixTimestamp() - 1;

		FString time1 = request->Timestamp.ToString();
		FString time2 = TimeMin.ToString();
		if (TimelineCountByTimeAndKey.IsValidIndex(Bucket))
		{
			TimelineCountByTimeAndKey[Bucket].KeyToCount.FindOrAdd(GetKeyFromRequest(request))++;
			ItemsByFName.AddUnique(GetKeyFromRequest(request));
		}
	}

	TArray<int32> PlotData;
	PlotData.SetNum(SecondsInOneMinute * ItemsByFName.Num());
	for (int i = 0; i < SecondsInOneMinute; i++)
	{
		for (auto Pair : TimelineCountByTimeAndKey[i].KeyToCount)
		{
			int index = ItemsByFName.Find(Pair.Key) * SecondsInOneMinute + i;
			if (PlotData.IsValidIndex(index))
			{
				PlotData[index] = Pair.Value;
			}
		}
	}

	if (ImPlot::BeginPlot("Calls Per Second", ImVec2(-1, 0)))
	{
		// Keys to ANSICHAR*
		TArray<std::string> ItemsAsStdString;
		TArray<const ANSICHAR*> ItemsAsCStr;
		for (FName Item : ItemsByFName)
		{
			int index = ItemsAsStdString.Add(TCHAR_TO_UTF8(*Item.ToString()));
		}

		ItemsAsCStr.Reserve(ItemsAsStdString.Num());
		for (const std::string& String : ItemsAsStdString)
		{
			ItemsAsCStr.Add(String.c_str());
		}

		// Marking 59 - 0
		TArray<double> Positions;
		TArray<std::string> LabelsAsStdString;
		TArray<const ANSICHAR*> LabelsAsCStr;
		for (int i = 0; i < SecondsInOneMinute; i++)
		{
			Positions.Add(i * 1.0f);
			if ((SecondsInOneMinute - 1 - i) % 5 == 0) // Mark with number every 5 steps
			{
				LabelsAsStdString.Add(TCHAR_TO_UTF8(*FString::FromInt(SecondsInOneMinute - 1 - i)));
			}
			else
			{
				LabelsAsStdString.Add("");
			}
		}
		LabelsAsCStr.Reserve(LabelsAsStdString.Num());
		for (const std::string& String : LabelsAsStdString)
		{
			LabelsAsCStr.Add(String.c_str());
		}

		ImPlot::SetupAxes("Time (Seconds Ago)", "Call Count", ImPlotAxisFlags_AutoFit, ImPlotAxisFlags_AutoFit);
		ImPlot::SetupAxisTicks(ImAxis_X1, Positions.GetData(), SecondsInOneMinute, LabelsAsCStr.GetData());
		ImPlot::PlotBarGroups(ItemsAsCStr.GetData(), PlotData.GetData(), ItemsAsCStr.Num(), SecondsInOneMinute, 0.5, 0, ImPlotBarGroupsFlags_Stacked);

		ImPlot::EndPlot();
	}
#endif
}

void FRHDTW_Analytics::DoTable(const TMap<FName, int32>& CountAllTime, TMap<FName, int32>& CountRecent, TMap<FName, TTuple<int32, int32>>& Bursts, const FString& TableName, const FString& CategoryName, const FString& FilterString)
{
	if (ImGui::BeginTable(TCHAR_TO_UTF8(*TableName), 5, RH_TableFlagsFitSizing))
	{
		// Header
		ImGui::TableSetupColumn(TCHAR_TO_UTF8(*CategoryName));
		ImGui::TableSetupColumn("Call count (all time)");
		ImGui::TableSetupColumn("Call count (last 60s)");
		ImGui::TableSetupColumn("Number of bursts (last 60s)");
		ImGui::TableSetupColumn("Largest burst (last 60s)");
		ImGui::TableHeadersRow();

		// Content
		TArray<FName> Keys;
		CountAllTime.GetKeys(Keys);
		Keys.Sort([](const FName e1, const FName e2)
			{
				return e1.ToString() < e2.ToString();
			});
		for (FName Key : Keys)
		{
			const FString KeyAsString = Key.ToString();
			if (!FilterString.IsEmpty() && !KeyAsString.Contains(FilterString))
			{
				continue;
			}
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*KeyAsString));
			ImGui::TableNextColumn();
			ImGui::Text("%d", CountAllTime[Key]);
			ImGui::TableNextColumn();
			ImGui::Text("%d", CountRecent.Contains(Key) ? CountRecent[Key] : 0);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Bursts.Contains(Key) ? Bursts[Key].Key : 0);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Bursts.Contains(Key) ? Bursts[Key].Value : 0);
		}

		ImGui::EndTable();
	}
}
#pragma endregion