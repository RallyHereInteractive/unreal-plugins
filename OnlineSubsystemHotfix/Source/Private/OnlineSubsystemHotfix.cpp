// Copyright 1998-2020 Hi-Rez Studios, Inc. All Rights Reserved.

#include "OnlineSubsystemHotfix.h"
#include "OnlineTitleFileHotfix.h"
#include "Misc/CommandLine.h"

IOnlineTitleFilePtr FOnlineSubsystemHotfix::GetTitleFileInterface() const
{
	return TitleFileInterface;
}

FString FOnlineSubsystemHotfix::GetAppId() const
{
	static const FString strNotApplicable(TEXT("Not Applicable"));
	return strNotApplicable;
}

FText FOnlineSubsystemHotfix::GetOnlineServiceName() const
{
	return NSLOCTEXT("OnlineSubsystemHotfix", "OnlineServiceName", "Hotfix");
}

EOnlineEnvironment::Type FOnlineSubsystemHotfix::GetOnlineEnvironment() const
{
	IOnlineSubsystem* DefaultOSS = IOnlineSubsystem::Get();
	if (DefaultOSS != nullptr)
	{
		return DefaultOSS->GetOnlineEnvironment();
	}
	return EOnlineEnvironment::Development;
}

bool FOnlineSubsystemHotfix::Init()
{
	if (bInitialized)
	{
		return false;
	}

	TitleFileInterface = MakeShareable(new FOnlineTitleFileHotfix());
	TitleFileInterface->Init();

	bInitialized = true;
	UE_LOG_ONLINE(Log, TEXT("Init Complete"));
	return true;
}

bool FOnlineSubsystemHotfix::Shutdown()
{
	FOnlineSubsystemImpl::Shutdown();

	if (!bInitialized)
	{
		return true;
	}

	UE_LOG_ONLINE(Log, TEXT("Shutdown Complete"));
	bInitialized = false;
	return true;
}

bool FOnlineSubsystemHotfix::Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	return FOnlineSubsystemImpl::Exec(InWorld, Cmd, Ar);
}