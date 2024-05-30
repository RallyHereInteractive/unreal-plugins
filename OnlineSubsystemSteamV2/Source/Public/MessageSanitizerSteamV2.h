// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "Interfaces/IMessageSanitizerInterface.h"

class FOnlineSubsystemSteamV2;

class FMessageSanitizerSteamV2
	: public IMessageSanitizer
{
public:
	explicit FMessageSanitizerSteamV2(FOnlineSubsystemSteamV2* InSteamV2Subsystem)
		: SteamV2Subsystem(InSteamV2Subsystem)
	{
	}

	void Initialize();

	// IMessageSanitizer
	virtual void SanitizeDisplayName(const FString& DisplayName, const FOnMessageProcessed& CompletionDelegate) override;
	virtual void SanitizeDisplayNames(const TArray<FString>& DisplayNames, const FOnMessageArrayProcessed& CompletionDelegate) override;
	virtual void QueryBlockedUser(int32 LocalUserNum, const FString& FromUserIdStr, const FString& FromPlatform, const FOnQueryUserBlockedResponse& CompletionDelegate) override;
	virtual void ResetBlockedUserCache() override;
	// IMessageSanitizer

protected:
	FString GetSanitizedDisplayName(const FString& DisplayName);
	
	FOnlineSubsystemSteamV2* SteamV2Subsystem;
	/** Holds a map of sanitized words */
	TMap<FString, FString> WordMap;
};

typedef TSharedPtr<FMessageSanitizerSteamV2, ESPMode::ThreadSafe> FMessageSanitizerSteamV2Ptr;
