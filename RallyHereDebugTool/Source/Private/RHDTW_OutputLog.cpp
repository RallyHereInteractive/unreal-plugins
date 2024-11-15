// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereDebugToolModule.h"
#include "RHDTW_OutputLog.h"
#include "Engine/Engine.h"
#include "Misc/OutputDeviceHelper.h"
#include "Misc/CoreDelegates.h"
#include "RallyHereDebugToolSettings.h"
#include "RallyHereDebugTool.h"
#include "RH_ImGuiUtilities.h"

#include "imgui.h"

// used for copy support
#if PLATFORM_ALLOWS_COPY
#include "HAL/PlatformApplicationMisc.h"
#endif

namespace RH_OutputLog
{
	/** Expression context to test the given messages against the current text filter */
	class FLogFilter_TextFilterExpressionContext : public ITextFilterExpressionContext
	{
	public:
		explicit FLogFilter_TextFilterExpressionContext(const FOutputLogMessage& InMessage) : Message(&InMessage) {}

		/** Test the given value against the strings extracted from the current item */
		virtual bool TestBasicStringExpression(const FTextFilterString& InValue, const ETextFilterTextComparisonMode InTextComparisonMode) const override { return TextFilterUtils::TestBasicStringExpression(UTF8_TO_TCHAR(Message->GetMessageAsANSIString()), InValue, InTextComparisonMode); }

		/**
		* Perform a complex expression test for the current item
		* No complex expressions in this case - always returns false
		*/
		virtual bool TestComplexExpression(const FName& InKey, const FTextFilterString& InValue, const ETextFilterComparisonOperation InComparisonOperation, const ETextFilterTextComparisonMode InTextComparisonMode) const override { return false; }

	private:
		/** Message that is being filtered */
		const FOutputLogMessage* Message;
	};

	FOutputLogHistory::FOutputLogHistory()
		: FOutputDevice()
		, bIsBoundToGLog(false)
		, Messages()
	{
		URallyHereDebugToolSettings::OnSettingsLoaded.AddRaw(this, &FOutputLogHistory::UpdateGLogBinding);

		UpdateGLogBinding();

		GLog->SerializeBacklog(this);
	}

	FOutputLogHistory::~FOutputLogHistory()
	{
		URallyHereDebugToolSettings::OnSettingsLoaded.RemoveAll(this);

		// At shutdown, GLog may already be null
		if (bIsBoundToGLog && GLog != NULL)
		{
			GLog->RemoveOutputDevice(this);
		}

		bIsBoundToGLog = false;
	}

	void FOutputLogHistory::UpdateGLogBinding()
	{
		bool bShouldBindToLog = true;
		if (const URallyHereDebugToolSettings* Settings = URallyHereDebugToolSettings::Get())
		{
			bShouldBindToLog = !Settings->bOnlyLogWhileActive;
		}

		if (bShouldBindToLog && !bIsBoundToGLog)
		{
			if (GLog != nullptr)
			{
				GLog->AddOutputDevice(this);
				bIsBoundToGLog = true;
			}
		}
		else if (!bShouldBindToLog && bIsBoundToGLog)
		{
			if (GLog != nullptr)
			{
				GLog->RemoveOutputDevice(this);
				bIsBoundToGLog = false;
			}
		}
	}

	void FOutputLogHistory::Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category)
	{
		// Capture all incoming messages and store them in history
		FScopeLock Lock(&MessagesLock);
		FRHDTW_OutputLog::CreateLogMessages(V, Verbosity, Category, Messages);
	}

	bool FOutputLogFilter::IsMessageAllowed(const TSharedPtr<FOutputLogMessage>& Message)
	{
		// Filter Verbosity
		{
			if (Message->Verbosity == ELogVerbosity::Error && !bShowErrors)
			{
				return false;
			}

			if (Message->Verbosity == ELogVerbosity::Warning && !bShowWarnings)
			{
				return false;
			}

			if (Message->Verbosity != ELogVerbosity::Error && Message->Verbosity != ELogVerbosity::Warning && !bShowLogs)
			{
				return false;
			}
		}

		// Filter by Category
		{
			if (!IsLogCategoryEnabled(Message->Category))
			{
				return false;
			}
		}

		// Filter search phrase
		{
			if (!TextFilterExpressionEvaluator.TestTextFilter(FLogFilter_TextFilterExpressionContext(*Message)))
			{
				return false;
			}
		}

		return true;
	}

	void FOutputLogFilter::AddAvailableLogCategory(FName& LogCategory)
	{
		// Use an insert-sort to keep AvailableLogCategories alphabetically sorted
		int32 InsertIndex = 0;
		for (InsertIndex = AvailableLogCategories.Num() - 1; InsertIndex >= 0; --InsertIndex)
		{
			FName CheckCategory = AvailableLogCategories[InsertIndex];
			// No duplicates
			if (CheckCategory == LogCategory)
			{
				return;
			}
			else if (CheckCategory.Compare(LogCategory) < 0)
			{
				break;
			}
		}
		AvailableLogCategories.Insert(LogCategory, InsertIndex + 1);
		if (bShowAllCategories)
		{
			ToggleLogCategory(LogCategory);
		}
	}

	void FOutputLogFilter::ToggleLogCategory(const FName& LogCategory)
	{
		int32 FoundIndex = SelectedLogCategories.Find(LogCategory);
		if (FoundIndex == INDEX_NONE)
		{
			SelectedLogCategories.Add(LogCategory);
		}
		else
		{
			SelectedLogCategories.RemoveAt(FoundIndex, /*Count=*/1);
		}
	}

	bool FOutputLogFilter::IsLogCategoryEnabled(const FName& LogCategory) const
	{
		return SelectedLogCategories.Contains(LogCategory);
	}

	void FOutputLogFilter::ClearSelectedLogCategories()
	{
		// No need to churn memory each time the selected categories are cleared
		SelectedLogCategories.Reset();
	}
}

TSharedPtr<RH_OutputLog::FOutputLogHistory> FRHDTW_OutputLog::OutputLogHistory(nullptr);

FRHDTW_OutputLog::FRHDTW_OutputLog()
	: FRH_DebugToolWindow()
	, FOutputDevice()
	, bPendingForceScroll(false)
	, bIsUserScrolled(false)
	, LastScrollY(-1.0f)
	, bIsBoundToGLog(false)
	, AllMessages()
	, NextPendingMessageIndex(0)
	, FilteredMessages()
	, bFilteredMessageCacheDirty(false)
	, Filter()
	, SearchLogBuffer()
	, OnCrashHandle()
	, SettingsLoadedHandle()
	, DebugToolActiveHandle()
{
	DefaultPos = FVector2D(610, 430);
	DefaultSize = FVector2D(900, 400);
	bShowMenuBar = true;
	AdditionalWindowFlags = ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse;
	SearchLogBuffer.AddZeroed(SearchLogBuffer.GetSlack());
	CopyText.Empty();
}

FRHDTW_OutputLog::~FRHDTW_OutputLog()
{
	UnregisterDelegates();

	if (bIsBoundToGLog && GLog != nullptr)
	{
		GLog->RemoveOutputDevice(this);
	}
	bIsBoundToGLog = false;
}

void FRHDTW_OutputLog::Init(URallyHereDebugTool* InOwner, const FString& InName)
{
	FRH_DebugToolWindow::Init(InOwner, InName);

	if (OutputLogHistory.IsValid())
	{
		{
			FScopeLock Lock(&AllMessagesLock);
			AllMessages = OutputLogHistory->GetMessagesCopy();
		}
		NextPendingMessageIndex=0;
		FilteredMessages.Reset();
		bFilteredMessageCacheDirty = true;
	}

	RegisterDelegates();

	bIsUserScrolled = false;
	bPendingForceScroll = true;
	RequestForceScroll();
}

void FRHDTW_OutputLog::Uninit()
{
	UnregisterDelegates();

	if (bIsBoundToGLog && GLog != nullptr)
	{
		GLog->RemoveOutputDevice(this);
		bIsBoundToGLog = false;
	}

	FRH_DebugToolWindow::Uninit();
}

void FRHDTW_OutputLog::Do()
{
	if(ImGui::BeginMenuBar())
	{
		if(ImGui::BeginMenu("Filters"))
		{

			ImVec4 colGray(FLinearColor::Gray.R, FLinearColor::Gray.G, FLinearColor::Gray.B, FLinearColor::Gray.A);
			ImGui::PushStyleColor(ImGuiCol_Text, colGray);
			ImGui::LabelText("##VerbosityLabel", "Verbosity");
			ImGui::PopStyleColor();
			if (ImGui::Checkbox("Messages", &Filter.bShowLogs))
			{
				bFilteredMessageCacheDirty = true;
			}
			if (ImGui::Checkbox("Warnings", &Filter.bShowWarnings))
			{
				bFilteredMessageCacheDirty = true;
			}
			if (ImGui::Checkbox("Errors", &Filter.bShowErrors))
			{
				bFilteredMessageCacheDirty = true;
			}
			ImGui::Separator();
			ImGui::PushStyleColor(ImGuiCol_Text, colGray);
			ImGui::LabelText("##MiscellaneousLabel", "Miscellaneous");
			ImGui::PopStyleColor();
			if(ImGui::BeginMenu("Categories"))
			{
				if (ImGui::Checkbox("Show All", &Filter.bShowAllCategories))
				{
					Filter.ClearSelectedLogCategories();
					if (Filter.bShowAllCategories)
					{
						for (const auto& AvailableCategory : Filter.GetAvailableLogCategories())
						{
							Filter.ToggleLogCategory(AvailableCategory);
						}
					}
					bFilteredMessageCacheDirty = true;
				}
				for (const FName& Category : Filter.GetAvailableLogCategories())
				{
					bool bIsSelected = Filter.IsLogCategoryEnabled(Category);
					if (ImGui::Checkbox(TCHAR_TO_UTF8(*Category.ToString()), &bIsSelected))
					{
						Filter.ToggleLogCategory(Category);
						bFilteredMessageCacheDirty = true;
					}
				}
				ImGui::EndMenu();
			}
			ImGui::EndMenu();
		}
#if PLATFORM_ALLOWS_COPY
		if (ImGui::Button("Copy View to Clipboard"))
		{
			FPlatformApplicationMisc::ClipboardCopy(*CopyText);
		}
		if (ImGui::IsItemHovered())
		{
			ImGui::SetTooltip("Copy the current visible log segment to clipboard.");
		}
#endif

		if (ImGui::InputTextWithHint("##SearchLog", "Search Log", SearchLogBuffer.GetData(), SearchLogBuffer.Num()))
		{
			Filter.SetFilterText( FText::AsCultureInvariant( UTF8_TO_TCHAR(SearchLogBuffer.GetData()) ) );
			bFilteredMessageCacheDirty = true;
		}
		if (ImGui::Button("Clear Search"))
		{
			check(SearchLogBuffer.IsValidIndex(0));
			SearchLogBuffer[0] = 0;
			Filter.SetFilterText(FText::GetEmpty());
			bFilteredMessageCacheDirty = true;
		}

		ImGui::EndMenuBar();
	}

	ImGui::BeginChild("ScrollingRegion", ImVec2(0, -ImGui::GetFrameHeightWithSpacing()), false, ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_AlwaysVerticalScrollbar | ImGuiWindowFlags_AlwaysHorizontalScrollbar);

	if (ImGui::BeginPopupContextWindow())
	{
		if (ImGui::Selectable("Clear")) OnClearLog();
		ImGui::EndPopup();
	}

	EvaluateUserScrolled(ImGui::GetScrollY(), ImGui::GetScrollMaxY());

	// Display every line as a separate entry so we can change their color or add custom widgets. If you only want raw text you can use ImGui::TextUnformatted(log.begin(), log.end());
	// NB- if you have thousands of entries this approach may be too inefficient and may require user-side clipping to only process visible items.
	// You can seek and display only the lines that are visible using the ImGuiListClipper helper, if your elements are evenly spaced and you have cheap random access to the elements.
	// To use the clipper we could replace the 'for (int i = 0; i < Items.Size; i++)' loop with:
	//     ImGuiListClipper clipper(Items.Size);
	//     while (clipper.Step())
	//         for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++)
	// However take note that you can not use this code as is if a filter is active because it breaks the 'cheap random-access' property. We would need random-access on the post-filtered list.
	// A typical application wanting coarse clipping and filtering may want to pre-compute an array of indices that passed the filtering test, recomputing this array when user changes the filter,
	// and appending newly elements as they are inserted. This is left as a task to the user until we can manage to improve this example code!
	// If your items are of variable size you may want to implement code similar to what ImGuiListClipper does. Or split your data into fixed height items to allow random-seeking into your list.
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1)); // Tighten spacing

	if (bFilteredMessageCacheDirty)
	{
		NextPendingMessageIndex = 0;
		FilteredMessages.Reset();
		bFilteredMessageCacheDirty = false;
	}

	ProcessPendingMessages();

	CopyText.Empty();
	ImGuiListClipper clipper;
	clipper.Begin(FilteredMessages.Num());
	while (clipper.Step())
	{
		for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++)
		{
			const char* item = FilteredMessages[i]->GetMessageAsANSIString();
			ImVec4 col = ImVec4(1.0f, 1.0f, 1.0f, 1.0f); // A better implementation may store a type per-item. For the sample let's just parse the text.
			if (FilteredMessages[i]->Verbosity == ELogVerbosity::Error) col = ImColor(1.0f, 0.4f, 0.4f, 1.0f);
			else if (FilteredMessages[i]->Verbosity == ELogVerbosity::Warning) col = ImColor(1.0f, 0.78f, 0.58f, 1.0f);
			ImGui::PushStyleColor(ImGuiCol_Text, col);
			ImGui::TextUnformatted(item);
			ImGui::PopStyleColor();

			// Only save line 0 if line 1 is also in, since ImGuiListClipper always process line 0.
			if (i == 1)
			{
				CopyText += FString(FilteredMessages[0]->GetMessageAsANSIString()) + LINE_TERMINATOR;
			}
			if (i != 0)
			{
				CopyText += FString(item) + LINE_TERMINATOR;
			}
		}
	}

	if ((bPendingForceScroll || !bIsUserScrolled) && FilteredMessages.Num() > 0)
	{
		ImGui::SetScrollY(ImGui::GetScrollMaxY());
		bIsUserScrolled = false;
	}

	LastScrollY = ImGui::GetScrollY();
	bPendingForceScroll = false;

	ImGui::PopStyleVar();
	ImGui::EndChild();
	ImGui::Separator();
	if (ImGui::Button("Clear Log"))
	{
		OnClearLog();
	}
	ImGui::SameLine();
	if (ImGui::Button("Scroll To Bottom"))
	{
		RequestForceScroll();
	}
	
	ImGui::SameLine();
	bool bSendConsoleCommand = ImGui::InputText("##ConsoleInput", &ConsoleInput, ImGuiInputTextFlags_EnterReturnsTrue);
	ImGui::SameLine();
	if (ImGui::Button("Send") || bSendConsoleCommand)
	{
		GEngine->Exec(GetWorld(), *ConsoleInput);
		ConsoleInput.Empty();
	}
}

bool FRHDTW_OutputLog::CreateLogMessages(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category, TArray< TSharedPtr<RH_OutputLog::FOutputLogMessage> >& OutMessages)
{
	if (Verbosity == ELogVerbosity::SetColor)
	{
		// Skip Color Events
		return false;
	}
	else
	{
		// Get the style for this message. When piping output from child processes (eg. when cooking through the editor), we want to highlight messages
		// according to their original verbosity, so also check for "Error:" and "Warning:" substrings. This is consistent with how the build system processes logs.
		FName Style;
		if (Category == NAME_Cmd)
		{
			Style = FName(TEXT("Log.Command"));
		}
		else if (Verbosity == ELogVerbosity::Error || FCString::Stristr(V, TEXT("Error:")) != nullptr)
		{
			Style = FName(TEXT("Log.Error"));
		}
		else if (Verbosity == ELogVerbosity::Warning || FCString::Stristr(V, TEXT("Warning:")) != nullptr)
		{
			Style = FName(TEXT("Log.Warning"));
		}
		else
		{
			Style = FName(TEXT("Log.Normal"));
		}

		// Determine how to format timestamps
		static ELogTimes::Type LogTimestampMode = ELogTimes::None;
		if (const URallyHereDebugToolSettings* Settings = URallyHereDebugToolSettings::Get())
		{
			LogTimestampMode = Settings->OutputLogTimesType;
		}

		const int32 OldNumMessages = OutMessages.Num();

		// handle multiline strings by breaking them apart by line
		TArray<FTextRange> LineRanges;
		FString CurrentLogDump = V;
		FTextRange::CalculateLineRangesFromString(CurrentLogDump, LineRanges);

		bool bIsFirstLineInMessage = true;
		for (const FTextRange& LineRange : LineRanges)
		{
			if (!LineRange.IsEmpty())
			{
				FString Line = CurrentLogDump.Mid(LineRange.BeginIndex, LineRange.Len());
				Line = Line.ConvertTabsToSpaces(4);

				// Hard-wrap lines to avoid them being too long
				static const int32 HardWrapLen = INT_MAX;
				for (int32 CurrentStartIndex = 0; CurrentStartIndex < Line.Len();)
				{
					int32 HardWrapLineLen = 0;
					if (bIsFirstLineInMessage)
					{
						FString MessagePrefix = FOutputDeviceHelper::FormatLogLine(Verbosity, Category, nullptr, LogTimestampMode);

						HardWrapLineLen = FMath::Min(HardWrapLen - MessagePrefix.Len(), Line.Len() - CurrentStartIndex);
						FString HardWrapLine = Line.Mid(CurrentStartIndex, HardWrapLineLen);

						OutMessages.Add(MakeShared<RH_OutputLog::FOutputLogMessage>((MessagePrefix + HardWrapLine), Verbosity, Category, Style));
					}
					else
					{
						HardWrapLineLen = FMath::Min(HardWrapLen, Line.Len() - CurrentStartIndex);
						FString HardWrapLine = Line.Mid(CurrentStartIndex, HardWrapLineLen);

						OutMessages.Add(MakeShared<RH_OutputLog::FOutputLogMessage>(HardWrapLine, Verbosity, Category, Style));
					}

					bIsFirstLineInMessage = false;
					CurrentStartIndex += HardWrapLineLen;
				}
			}
		}

		return OldNumMessages != OutMessages.Num();
	}
}

void FRHDTW_OutputLog::OnClearLog()
{
	{
		FScopeLock Lock(&AllMessagesLock);
		AllMessages.Reset();
	}
	NextPendingMessageIndex=0;
	FilteredMessages.Reset();
	bFilteredMessageCacheDirty = false;
	bIsUserScrolled = false;
	RequestForceScroll();
}

bool FRHDTW_OutputLog::CanClearLog() const
{
	return AllMessages.Num() > 0;
}

void FRHDTW_OutputLog::RegisterDelegates()
{
	if (!SettingsLoadedHandle.IsValid())
	{
		SettingsLoadedHandle = URallyHereDebugToolSettings::OnSettingsLoaded.AddSP(this, &FRHDTW_OutputLog::UpdateGLogBinding);
	}

	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner != nullptr && !DebugToolActiveHandle.IsValid())
	{
		DebugToolActiveHandle = pOwner->OnActiveStateChanged.AddSP(this, &FRHDTW_OutputLog::UpdateGLogBinding);
	}

	if (!OnCrashHandle.IsValid())
	{
		// Remove itself on crash (crashmalloc has limited memory and echoing logs here at that point is useless).
		OnCrashHandle = FCoreDelegates::OnHandleSystemError.AddSP(this, &FRHDTW_OutputLog::OnCrash);
	}
}

void FRHDTW_OutputLog::UnregisterDelegates()
{
	if (SettingsLoadedHandle.IsValid())
	{
		URallyHereDebugToolSettings::OnSettingsLoaded.Remove(SettingsLoadedHandle);
		SettingsLoadedHandle.Reset();
	}

	if(DebugToolActiveHandle.IsValid())
	{
		URallyHereDebugTool* pOwner = GetOwner();
		if (pOwner != nullptr)
		{
			pOwner->OnActiveStateChanged.Remove(DebugToolActiveHandle);
		}
		DebugToolActiveHandle.Reset();
	}

	if (OnCrashHandle.IsValid())
	{
		FCoreDelegates::OnHandleSystemError.Remove(OnCrashHandle);
		OnCrashHandle.Reset();
	}
}

void FRHDTW_OutputLog::UpdateGLogBinding()
{
	bool bIsDebugToolActive = GetOwner() != nullptr && GetOwner()->IsUIActive();

	bool bShouldLocalWhileInactive = false;
	if (const URallyHereDebugToolSettings* Settings = URallyHereDebugToolSettings::Get())
	{
		bShouldLocalWhileInactive = !Settings->bOnlyLogWhileActive;
	}

	const bool bShouldBindToGLog = bShouldLocalWhileInactive || bIsDebugToolActive;

	if (bShouldBindToGLog && !bIsBoundToGLog)
	{
		if (GLog != nullptr)
		{
			GLog->AddOutputDevice(this);
			bIsBoundToGLog = true;
		}
	}
	else if (!bShouldBindToGLog && bIsBoundToGLog)
	{
		if (GLog != nullptr)
		{
			GLog->RemoveOutputDevice(this);
			bIsBoundToGLog = false;
		}
	}
}

void FRHDTW_OutputLog::Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category)
{
	FScopeLock Lock(&AllMessagesLock);
	CreateLogMessages(V, Verbosity, Category, AllMessages);
}

void FRHDTW_OutputLog::OnCrash()
{
	if (bIsBoundToGLog && GLog != nullptr)
	{
		GLog->RemoveOutputDevice(this);
		bIsBoundToGLog = false;
	}
}

void FRHDTW_OutputLog::ProcessPendingMessages()
{
	FScopeLock Lock(&AllMessagesLock);
	if (AllMessages.IsValidIndex(NextPendingMessageIndex))
	{
		int32 NewMessageCount = AllMessages.Num() - NextPendingMessageIndex;
		if (!Filter.IsFilterSet())
		{
			FilteredMessages.Append(&AllMessages[NextPendingMessageIndex], NewMessageCount);
		}
		else
		{

			FilteredMessages.Reserve(FilteredMessages.Num()+NewMessageCount);
			for (int32 i = NextPendingMessageIndex; i < AllMessages.Num(); i++)
			{
				const TSharedPtr<RH_OutputLog::FOutputLogMessage> Message = AllMessages[i];

				Filter.AddAvailableLogCategory(Message->Category);
				if (Filter.IsMessageAllowed(Message))
				{
					FilteredMessages.Add(Message);
				}
			}
		}
		NextPendingMessageIndex = AllMessages.Num();
	}
}

void FRHDTW_OutputLog::EvaluateUserScrolled(float ScrollOffset, float ScrollMax)
{
	if (FMath::IsNearlyEqual(ScrollOffset, ScrollMax))
	{
		bIsUserScrolled = false;
	}
	else if (!FMath::IsNearlyEqual(ScrollOffset, LastScrollY))
	{
		bIsUserScrolled = true;
	}
}

void FRHDTW_OutputLog::RequestForceScroll()
{
	if (AllMessages.Num() > 0)
	{
		bPendingForceScroll = true;
	}
}
