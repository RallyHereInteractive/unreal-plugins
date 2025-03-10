
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

void URH_LeaderboardSubsystem::GetAllConfigAsync(const FRH_LeaderboardConfigCallBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetAllLeaderboardConfig BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	TSharedPtr<FRHAPI_LeaderboardConfigList> ResponseContent = MakeShared<FRHAPI_LeaderboardConfigList>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardConfigList Content;
				if (Response.TryGetContentFor200(Content))
				{
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

void URH_LeaderboardSubsystem::GetLeaderboardPageAsync(const FString& LeaderboardID, const FString& Cursor, int32 PageSize, const FRH_LeaderboardPageBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboard BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	Request.Cursor = Cursor;
	Request.PageSize = PageSize;
	TSharedPtr<FRHAPI_LeaderboardPage> ResponseContent = MakeShared<FRHAPI_LeaderboardPage>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardPage Content;
				if (Response.TryGetContentFor200(Content))
				{
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

void URH_LeaderboardSubsystem::GetLeaderboardPositionAsync(const FString& LeaderboardID, int32 Position, const FRH_LeaderboardPositionBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboardPositionEntry BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	Request.LeaderboardPosition = Position;
	TSharedPtr<FRHAPI_LeaderboardEntry> ResponseContent = MakeShared<FRHAPI_LeaderboardEntry>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardEntry Content;
				if (Response.TryGetContentFor200(Content))
				{
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

void URH_LeaderboardSubsystem::GetLeaderboardMetaDataAsync(const FString& LeaderboardID, int32 Position, const FRH_LeaderboardMetaDataBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef TGetLeaderboardMetaData BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.LeaderboardId = LeaderboardID;
	TSharedPtr<FRHAPI_LeaderboardMetaData> ResponseContent = MakeShared<FRHAPI_LeaderboardMetaData>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, LeaderboardID, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_LeaderboardMetaData Content;
				if (Response.TryGetContentFor200(Content))
				{
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
