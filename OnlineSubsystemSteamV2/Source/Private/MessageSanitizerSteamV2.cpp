// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "MessageSanitizerSteamV2.h"
#include "OnlineSubsystemSteamV2.h"

void FMessageSanitizerSteamV2::Initialize()
{
	ISteamUtils* SteamUtilsPtr = SteamUtils();
	check(SteamUtilsPtr);
	const bool bInitialized = SteamUtilsPtr->InitFilterText();
	UE_LOG_ONLINE(Log, TEXT("[%s] successful? %i"), ANSI_TO_TCHAR(__FUNCTION__), bInitialized);
}

FString FMessageSanitizerSteamV2::GetSanitizedDisplayName(const FString& DisplayName)
{
	if (const FString* FoundString = WordMap.Find(DisplayName))
	{
		UE_LOG_ONLINE(VeryVerbose, TEXT("[%s(%s)] returning FoundString %s"), ANSI_TO_TCHAR(__FUNCTION__), *DisplayName, **FoundString);
		return *FoundString;
	}

	ISteamUtils* SteamUtilsPtr = SteamUtils();
	check(SteamUtilsPtr);

	const uint32 SanitizedBufferSize = 4 * DisplayName.Len() + 1;
	char* SanitizedMessage = new char[SanitizedBufferSize];
	SteamUtilsPtr->FilterText(k_ETextFilteringContextName, CSteamID(), TCHAR_TO_UTF8(*DisplayName), SanitizedMessage, SanitizedBufferSize);

	const FString SanitizedString = UTF8_TO_TCHAR(SanitizedMessage);
	delete [] SanitizedMessage;

	UE_LOG_ONLINE(VeryVerbose, TEXT("[%s(%s)] returning %s"), ANSI_TO_TCHAR(__FUNCTION__), *DisplayName, *SanitizedString);
	return WordMap.Add(DisplayName, SanitizedString);
}

void FMessageSanitizerSteamV2::SanitizeDisplayName(const FString& DisplayName, const FOnMessageProcessed& CompletionDelegate)
{
	FString SanitizedString = GetSanitizedDisplayName(DisplayName);
	SteamV2Subsystem->ExecuteNextTick([SanitizedString, CompletionDelegate]()
		{
			CompletionDelegate.ExecuteIfBound(true, SanitizedString);
		});
}

void FMessageSanitizerSteamV2::SanitizeDisplayNames(const TArray<FString>& DisplayNames, const FOnMessageArrayProcessed& CompletionDelegate)
{
	TArray<FString> SanitizedStrings;

	for (const FString& DisplayName : DisplayNames)
	{
		SanitizedStrings.Add(GetSanitizedDisplayName(DisplayName));
	}
	
	SteamV2Subsystem->ExecuteNextTick([SanitizedStrings, CompletionDelegate]()
		{
			CompletionDelegate.ExecuteIfBound(true, SanitizedStrings);
		});
}

void FMessageSanitizerSteamV2::QueryBlockedUser(int32 LocalUserNum, const FString& FromUserIdStr, const FString& FromPlatform, const FOnQueryUserBlockedResponse& CompletionDelegate)
{
	FBlockedQueryResult Result;
	Result.UserId = FromUserIdStr;
	Result.bIsBlocked = false;
	CompletionDelegate.ExecuteIfBound(Result);
}

void FMessageSanitizerSteamV2::ResetBlockedUserCache()
{
	//Not implemented
	UE_LOG_ONLINE(Log, TEXT("FMessageSanitizerSteamV2::ResetBlockedUserCache is not implemented"));
}
