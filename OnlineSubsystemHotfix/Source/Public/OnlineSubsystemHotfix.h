// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "OnlineSubsystem.h"
#include "OnlineSubsystemImpl.h"
#include "OnlineSubsystemPackage.h"

typedef TSharedPtr<class FOnlineTitleFileHotfix, ESPMode::ThreadSafe> FOnlineTitleFileHotfixPtr;

#ifndef HOTFIX_SUBSYSTEM
#define HOTFIX_SUBSYSTEM FName(TEXT("HOTFIX"))
#endif

/**
 *	OnlineSubsystemLive - Implementation of the online subsystem for Live services
 */
class ONLINESUBSYSTEMHOTFIX_API FOnlineSubsystemHotfix
	: public FOnlineSubsystemImpl
	, public TSharedFromThis<FOnlineSubsystemHotfix, ESPMode::ThreadSafe>
{

PACKAGE_SCOPE:

	/** Only the factory makes instances */
    FOnlineSubsystemHotfix() = delete;
    FOnlineSubsystemHotfix(FName InInstanceName) :
		FOnlineSubsystemImpl(HOTFIX_SUBSYSTEM, InInstanceName),
        bInitialized(false)
	{}

public:

	virtual ~FOnlineSubsystemHotfix()
	{
	}

	// These are not stubbed properly in FOnlineSubsystemImpl
	virtual IOnlineSessionPtr GetSessionInterface() const { return nullptr; }
	virtual IOnlineFriendsPtr GetFriendsInterface() const { return nullptr; }

	// IOnlineSubsystem
	virtual IOnlineTitleFilePtr GetTitleFileInterface() const override;

	virtual FString GetAppId() const override;
	virtual FText GetOnlineServiceName() const override;
	virtual EOnlineEnvironment::Type GetOnlineEnvironment() const override;

	virtual bool Init() override;
	virtual bool Shutdown() override;
	virtual bool Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;

private:
	bool bInitialized;

	FOnlineTitleFileHotfixPtr TitleFileInterface;
};

typedef TSharedPtr<FOnlineSubsystemHotfix, ESPMode::ThreadSafe> FOnlineSubsystemHotfixPtr;