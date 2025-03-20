
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_LeaderboardSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIHelpers.h"
#include "LeaderboardAPI.h"
#include "Engine/World.h"

void URH_LeaderboardSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	InitPropertiesWithDefaultValues();
}

void URH_LeaderboardSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
	InitPropertiesWithDefaultValues();
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboardConfigs(TMap<FString, FRHAPI_LeaderboardConfig>& OutConfigMap) const
{ 
	OutConfigMap = LeaderboardConfigs;
	return true;
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboardConfig(const FString& LeaderboardID, FRHAPI_LeaderboardConfig& OutCachedConfig) const 
{ 

	auto&& Config =  LeaderboardConfigs.Find(LeaderboardID);
	if (Config == nullptr)
	{
		return false;
	}
	OutCachedConfig = *Config;
	return true;
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboardPage(const FString& LeaderboardID, FRHAPI_LeaderboardPage& OutCachedPage) const
{
	auto&& Page = CachedPages.Find(LeaderboardID);
	if (Page == nullptr)
	{
		return false;
	}
	OutCachedPage = *Page;
	return true;
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboardRef(const FString& LeaderboardID, TSharedPtr<FRH_LeaderboardResults> Ref) const
{
	auto&& Leaderboard = CachedLeaderboards.Find(LeaderboardID);
	if (Leaderboard == nullptr)
	{
		return false;
	}
	Ref = *Leaderboard;
	return true;
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboard(const FString& LeaderboardID, FRH_LeaderboardResults& OutResults) const
{
	auto&& Leaderboard = CachedLeaderboards.Find(LeaderboardID);
	if (Leaderboard == nullptr)
	{
		return false;
	}
	OutResults = **Leaderboard;
	return true;
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboardMetaData(const FString& LeaderboardID, FRHAPI_LeaderboardMetaData& OutMetaData) const 
{ 
	auto&& MetaData = CachedMetaData.Find(LeaderboardID);
	if (MetaData == nullptr)
	{
		return false;
	}
	OutMetaData = *MetaData;
	return true;
}

bool URH_LeaderboardSubsystem::GetCachedLeaderboardPosition(FRHAPI_LeaderboardEntry& OutEntry) const 
{ 
	OutEntry = CachedPositionEntry;
	return true;
}

void URH_LeaderboardSubsystem::GetAllConfigAsync(const FRH_LeaderboardConfigCallBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetAllLeaderboardConfig BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	TSharedRef<FRHAPI_LeaderboardConfigList> ResponseContent = MakeShareable(new FRHAPI_LeaderboardConfigList());

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardConfigList Content;
				if (Response.TryGetContentFor200(Content))
				{
					*ResponseContent = Content;
					for (auto& SingleConfig : Content.GetLeaderboardConfigs())
					{
						LeaderboardConfigs.Add(SingleConfig.GetLeaderboardId(), SingleConfig);
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, ResponseContent](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *ResponseContent);
			}),
		GetDefault<URH_IntegrationSettings>()->LeaderboardConfigPriority
	);
	Helper->Start(RH_APIs::GetLeaderboardAPI(), Request);
}

void URH_LeaderboardSubsystem::GetLeaderboardPageAsync(const FString& LeaderboardID, const FString& Cursor, const FGuid& PlayerUuid, int32 PageSize, const FRH_LeaderboardPageBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboard BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	Request.Cursor = Cursor;
	Request.PageSize = PageSize;
	if (PlayerUuid.IsValid())
	{
		Request.PlayerUuid = PlayerUuid;
	}
	TSharedRef<FRHAPI_LeaderboardPage> ResponseContent = MakeShareable(new FRHAPI_LeaderboardPage());

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardPage Content;
				if (Response.TryGetContentFor200(Content))
				{
					*ResponseContent = Content;
					CachedPages.FindOrAdd(LeaderboardID);
					CachedPages[LeaderboardID] = MoveTemp(Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, ResponseContent](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *ResponseContent);
			}),
		GetDefault<URH_IntegrationSettings>()->LeaderboardConfigPriority
	);
	Helper->Start(RH_APIs::GetLeaderboardAPI(), Request);
}

void URH_LeaderboardSubsystem::GetAllPages(const FString& LeaderboardID, const FString& Cursor, const FGuid& PlayerUuid, const FRH_LeaderboardPageBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboard BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	Request.Cursor = Cursor;
	Request.PageSize = 50;
	if (PlayerUuid.IsValid())
	{
		Request.PlayerUuid = PlayerUuid;
	}
	TSharedRef<FRHAPI_LeaderboardPage> ResponseContent = MakeShareable(new FRHAPI_LeaderboardPage());

	auto UpdateLambda = BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, Delegate, PlayerUuid, ResponseContent](const BaseType::Response& Response)
		{
			FRHAPI_LeaderboardPage Content;
			if (Response.TryGetContentFor200(Content))
			{
				*ResponseContent = Content;
				CachedLeaderboards.FindOrAdd(LeaderboardID);
				auto& Leaderboard = CachedLeaderboards[LeaderboardID];
				FString NextCursor = *Content.GetCursor();
				Leaderboard->Pages.Add(MoveTemp(Content));
				if (!NextCursor.Equals(TEXT("0"), ESearchCase::IgnoreCase))
				{
					GetAllPages(LeaderboardID, NextCursor, PlayerUuid, Delegate);
				}
				else
				{
					Leaderboard->SearchComplete = true;
					Leaderboard->LastUpdated = FDateTime::Now();
				}
			}
			else
			{ 
				CachedLeaderboards.FindOrAdd(LeaderboardID);
				CachedLeaderboards[LeaderboardID]->SearchComplete = true;
			}
		});
	
	auto OnCompleteLambda = FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, ResponseContent](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
		{
			Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *ResponseContent);
		});

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(UpdateLambda, OnCompleteLambda, GetDefault<URH_IntegrationSettings>()->LeaderboardConfigPriority);
	Helper->Start(RH_APIs::GetLeaderboardAPI(), Request);
}

void URH_LeaderboardSubsystem::GetLeaderboardAsync(const FString& LeaderboardID, const FGuid& PlayerUuid, const FRH_LeaderboardPageBlock& Delegate)
{
	// Create new results reference
	if (CachedLeaderboards.Find(LeaderboardID))
	{
		CachedLeaderboards[LeaderboardID] = MakeShareable(new FRH_LeaderboardResults);
	}
	else
	{
		CachedLeaderboards.Add(LeaderboardID, MakeShareable(new FRH_LeaderboardResults));
	}

	auto& NewResults = CachedLeaderboards[LeaderboardID];

	// Add the config if we have it
	FRHAPI_LeaderboardConfig Config{};
	if (GetCachedLeaderboardConfig(LeaderboardID, Config))
	{
		NewResults->Config = Config;
	}

	GetLeaderboardMetaDataAsync(LeaderboardID);
	GetAllPages(LeaderboardID, FString(TEXT("0")), PlayerUuid, Delegate);
}

void URH_LeaderboardSubsystem::GetLeaderboardPositionAsync(const FString& LeaderboardID, int32 Position, const FRH_LeaderboardPositionBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboardPositionEntry BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	Request.LeaderboardPosition = Position;
	TSharedRef<FRHAPI_LeaderboardEntry> ResponseContent = MakeShareable(new FRHAPI_LeaderboardEntry());

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardEntry Content;
				if (Response.TryGetContentFor200(Content))
				{
					*ResponseContent = Content;
					CachedPositionEntry = MoveTemp(Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, ResponseContent](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *ResponseContent);
			}),
		GetDefault<URH_IntegrationSettings>()->LeaderboardConfigPriority
	);
	Helper->Start(RH_APIs::GetLeaderboardAPI(), Request);
}

void URH_LeaderboardSubsystem::GetLeaderboardMetaDataAsync(const FString& LeaderboardID, const FRH_LeaderboardMetaDataBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboardMetaData BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	TSharedRef<FRHAPI_LeaderboardMetaData> ResponseContent = MakeShareable(new FRHAPI_LeaderboardMetaData());

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardMetaData Content;
				if (Response.TryGetContentFor200(Content))
				{
					*ResponseContent = Content;
					if (CachedLeaderboards.Find(LeaderboardID))
					{
						CachedLeaderboards[LeaderboardID]->MetaData = Content;
					}

					CachedMetaData.FindOrAdd(LeaderboardID);
					CachedMetaData[LeaderboardID] = MoveTemp(Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, ResponseContent](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *ResponseContent);
			}),
		GetDefault<URH_IntegrationSettings>()->LeaderboardConfigPriority
	);
	Helper->Start(RH_APIs::GetLeaderboardAPI(), Request);
}

void URH_LeaderboardSubsystem::InitPropertiesWithDefaultValues()
{
}
