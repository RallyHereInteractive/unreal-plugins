// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "Misc/OutputDevice.h"
#include "Containers/StringConv.h"
#include "Misc/TextFilterExpressionEvaluator.h"

struct FRHDTW_OutputLog;

/*******************************************************************************
A large portion of this code is taken from
Engine/Source/Developer/OutputLog/Private/SOutputLog.h which provides a solid
implementation of an output log, but is not publicly accessible.
*******************************************************************************/

namespace RH_OutputLog
{
	/**
	* A single log message for the output log, holding a message and
	* a style, for color and bolding of the message.
	*/
	struct FOutputLogMessage
	{
		TSharedRef<TArray<ANSICHAR>> Message;
		ELogVerbosity::Type Verbosity;
		FName Category;
		FName Style;

		FOutputLogMessage(const FString& NewMessage, FName NewCategory, FName NewStyle = NAME_None)
			: Message(MakeShared<TArray<ANSICHAR>>())
			, Verbosity(ELogVerbosity::Log)
			, Category(NewCategory)
			, Style(NewStyle)
		{
			int32 StringLength = FTCHARToUTF8_Convert::ConvertedLength(*NewMessage, NewMessage.Len());

			int32 BufferSize = StringLength + 1;

			Message->SetNum(BufferSize);

			FTCHARToUTF8_Convert::Convert((ANSICHAR*)Message->GetData(), BufferSize, *NewMessage, NewMessage.Len() + 1);
		}

		FOutputLogMessage(const FString& NewMessage, ELogVerbosity::Type NewVerbosity, FName NewCategory, FName NewStyle = NAME_None)
			: Message(MakeShared<TArray<ANSICHAR>>())
			, Verbosity(NewVerbosity)
			, Category(NewCategory)
			, Style(NewStyle)
		{
			int32 StringLength = FTCHARToUTF8_Convert::ConvertedLength(*NewMessage, NewMessage.Len());

			int32 BufferSize = StringLength + 1;

			Message->SetNum(BufferSize);

			FTCHARToUTF8_Convert::Convert(Message->GetData(), BufferSize, *NewMessage, NewMessage.Len() + 1);
		}

		const ANSICHAR* GetMessageAsANSIString() const
		{
			return Message->GetData();
		}
	};

	/** This class is to capture all log output even if the log window is closed */
	class FOutputLogHistory : public FOutputDevice
	{
	public:

		FOutputLogHistory();
		~FOutputLogHistory();

		/** Gets all captured messages */
		const TArray< TSharedPtr<FOutputLogMessage> >& GetMessagesRaw() const
		{
			return Messages;
		}
		const TArray< TSharedPtr<FOutputLogMessage> > GetMessagesCopy() const
		{
			FScopeLock Lock(&MessagesLock);
			return Messages;
		}

		FCriticalSection& GetMessagesLock() { return MessagesLock; }

	protected:
		void UpdateGLogBinding();
		virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category) override;

	private:
		bool bIsBoundToGLog;

		/** All log messsges since this module has been started */
		TArray< TSharedPtr<FOutputLogMessage> > Messages;

		mutable FCriticalSection MessagesLock;
	};

	/**
	* Holds information about filters
	*/
	struct FOutputLogFilter
	{
		/** true to show Logs. */
		bool bShowLogs;

		/** true to show Warnings. */
		bool bShowWarnings;

		/** true to show Errors. */
		bool bShowErrors;

		/** true to allow all Log Categories */
		bool bShowAllCategories;

		/** Enable all filters by default */
		FOutputLogFilter() : TextFilterExpressionEvaluator(ETextFilterExpressionEvaluatorMode::BasicString)
		{
			bShowErrors = bShowLogs = bShowWarnings = bShowAllCategories = true;
		}

		/** Returns true if any messages should be filtered out */
		bool IsFilterSet() { return !bShowErrors || !bShowLogs || !bShowWarnings || !bShowAllCategories || TextFilterExpressionEvaluator.GetFilterType() != ETextFilterExpressionType::Empty || !TextFilterExpressionEvaluator.GetFilterText().IsEmpty(); }

		/** Checks the given message against set filters */
		bool IsMessageAllowed(const TSharedPtr<FOutputLogMessage>& Message);

		/** Set the Text to be used as the Filter's restrictions */
		void SetFilterText(const FText& InFilterText) { TextFilterExpressionEvaluator.SetFilterText(InFilterText); }

		/** Get the Text currently being used as the Filter's restrictions */
		const FText GetFilterText() const { return TextFilterExpressionEvaluator.GetFilterText(); }

		/** Returns Evaluator syntax errors (if any) */
		FText GetSyntaxErrors() { return TextFilterExpressionEvaluator.GetFilterErrorText(); }

		const TArray<FName>& GetAvailableLogCategories() { return AvailableLogCategories; }

		/** Adds a Log Category to the list of available categories, if it isn't already present */
		void AddAvailableLogCategory(FName& LogCategory);

		/** Enables or disables a Log Category in the filter */
		void ToggleLogCategory(const FName& LogCategory);

		/** Returns true if the specified log category is enabled */
		bool IsLogCategoryEnabled(const FName& LogCategory) const;

		/** Empties the list of selected log categories */
		void ClearSelectedLogCategories();

	private:
		/** Expression evaluator that can be used to perform complex text filter queries */
		FTextFilterExpressionEvaluator TextFilterExpressionEvaluator;

		/** Array of Log Categories which are available for filter -- i.e. have been used in a log this session */
		TArray<FName> AvailableLogCategories;

		/** Array of Log Categories which are being used in the filter */
		TArray<FName> SelectedLogCategories;
	};
}

/**
 * Widget which holds a list view of logs of the program output
 * as well as a combo box for entering in new commands
 */
struct FRHDTW_OutputLog
	: public FRH_DebugToolWindow, public FOutputDevice
{

public:
	FRHDTW_OutputLog();
	virtual ~FRHDTW_OutputLog();

	virtual void Init(URallyHereDebugTool* InOwner, const FString& InName) override;
	virtual void Uninit() override;
	virtual void Do() override;

	/**
	 * Creates FOutputLogMessage objects from FOutputDevice log callback
	 *
	 * @param	V Message text
	 * @param Verbosity Message verbosity
	 * @param Category Message category
	 * @param OutMessages Array to receive created FOutputLogMessage messages
	 * @param Filters [Optional] Filters to apply to Messages
	 *
	 * @return true if any messages have been created, false otherwise
	 */
	static bool CreateLogMessages(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category, TArray< TSharedPtr<RH_OutputLog::FOutputLogMessage> >& OutMessages);

	/**
	* Called when delete all is selected
	*/
	void OnClearLog();

	/**
	 * Called to determine whether delete all is currently a valid command
	 */
	bool CanClearLog() const;

protected:
	void RegisterDelegates();
	void UnregisterDelegates();

	void UpdateGLogBinding();

	virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category) override;

	/* Remove itself on crash to prevent adding log lines here */
	void OnCrash();

protected:
	void ProcessPendingMessages();

	/**
	 * Called when the user scrolls the log window vertically
	 */
	void EvaluateUserScrolled(float ScrollOffset, float ScrollMax);

	/** Request we immediately force scroll to the bottom of the log */
	void RequestForceScroll();

	bool bPendingForceScroll;

	/** True if the user has scrolled the window upwards */
	bool bIsUserScrolled;

	float LastScrollY;

	/** For copying to clipboard */
	FString CopyText;

	FString ConsoleInput;

private:
	///** Called by Slate when the filter box changes text. */
	//void OnFilterTextChanged(const FText& InFilterText);

	///** Called by Slate when the filter text box is confirmed. */
	//void OnFilterTextCommitted(const FText& InFilterText, ETextCommit::Type InCommitType);

	///** Make the "Filters" menu. */
	//TSharedRef<SWidget> MakeAddFilterMenu();

	///** Make the "Categories" sub-menu. */
	//void MakeSelectCategoriesSubMenu(FMenuBuilder& MenuBuilder);

	///** Toggles Verbosity "Logs" true/false. */
	//void VerbosityLogs_Execute();

	///** Returns the state of Verbosity "Logs". */
	//bool VerbosityLogs_IsChecked() const;

	///** Toggles Verbosity "Warnings" true/false. */
	//void VerbosityWarnings_Execute();

	///** Returns the state of Verbosity "Warnings". */
	//bool VerbosityWarnings_IsChecked() const;

	///** Toggles Verbosity "Errors" true/false. */
	//void VerbosityErrors_Execute();

	///** Returns the state of Verbosity "Errors". */
	//bool VerbosityErrors_IsChecked() const;

	///** Toggles All Categories true/false. */
	//void CategoriesShowAll_Execute();

	///** Returns the state of "Show All" */
	//bool CategoriesShowAll_IsChecked() const;

	///** Toggles the given category true/false. */
	//void CategoriesSingle_Execute(FName InName);

	///** Returns the state of the given category */
	//bool CategoriesSingle_IsChecked(FName InName) const;

	///** Forces re-population of the messages list */
	//void Refresh();

	//bool IsWordWrapEnabled() const;

	//void SetWordWrapEnabled(ECheckBoxState InValue);

	//bool IsClearOnPIEEnabled() const;

	//void SetClearOnPIE(ECheckBoxState InValue);

	//FSlateColor GetViewButtonForegroundColor() const;

	//TSharedRef<SWidget> GetViewButtonContent();

public:
	bool bIsBoundToGLog;

	FCriticalSection AllMessagesLock;
	TArray< TSharedPtr<RH_OutputLog::FOutputLogMessage> > AllMessages;
	int32 NextPendingMessageIndex;
	TArray< TSharedPtr<RH_OutputLog::FOutputLogMessage> > FilteredMessages;
	bool bFilteredMessageCacheDirty;

	/** Visible messages filter */
	RH_OutputLog::FOutputLogFilter Filter;

	/** Search Log Buffer */
	TArray<ANSICHAR, TInlineAllocator<100>> SearchLogBuffer;

	FDelegateHandle OnCrashHandle;
	FDelegateHandle SettingsLoadedHandle;
	FDelegateHandle DebugToolActiveHandle;

	/** Our global output log app spawner */
	static TSharedPtr<RH_OutputLog::FOutputLogHistory> OutputLogHistory;
};