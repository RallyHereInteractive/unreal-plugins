// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_GuideSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GuideSearch.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIHelpers.h"
#include "GuideAPI.h"
#include "Engine/World.h"

void URH_GuideSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	InitPropertiesWithDefaultValues();
}

void URH_GuideSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
	InitPropertiesWithDefaultValues();
}

URH_GuideSearch* URH_GuideSubsystem::CreateGuideSearch(const FRH_GuideSearchRequest& InRequest)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	URH_GuideSearch* Search = NewObject<URH_GuideSearch>(this);
	Search->Initialize(InRequest, GetAuthContext());
	Searches.Add(Search);
	return Search;
}

const FRHAPI_GuideFull* URH_GuideSubsystem::GetCachedGuide(const FGuid& GuideID) const
{
	return Guides.Find(GuideID);
}

bool URH_GuideSubsystem::GetGuide(const FGuid& GuideID, FRHAPI_GuideFull& OutGuide) const
{
	if (auto* Guide = GetCachedGuide(GuideID))
	{
		OutGuide = *Guide;
		return true;
	}
	return false;
}

bool URH_GuideSubsystem::RemoveCachedGuide(const FGuid& GuideID)
{
	return Guides.Remove(GuideID) > 0;
}

void URH_GuideSubsystem::GetGuideAsync(const FGuid& GuideID, bool bIgnoreCache, const FRH_GuideGetCallBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (!bIgnoreCache)
	{
		if (auto CachedGuide = GetCachedGuide(GuideID))
		{
			Delegate.ExecuteIfBound(true, FRH_ErrorInfo(), *CachedGuide);
			return;
		}
	}

	TGetGuideById::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideId = GuideID;
	
	typedef TGetGuideById BaseType;
	TSharedPtr<FRHAPI_GuideFull> ResponseContent = MakeShared<FRHAPI_GuideFull>();
	
	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, ResponseContent](const BaseType::Response& Response)
			{
				FRHAPI_GuideFull Content;
				if (Response.TryGetContentFor200(Content))
				{
					*ResponseContent = Content;
					Guides.Add(Content.GuideId, MoveTemp(Content));
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, ResponseContent](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *ResponseContent);
			}),
		GetDefault<URH_IntegrationSettings>()->GuideSearchGuidesPriority
	);
	Helper->Start(RH_APIs::GetGuideAPI(), Request);
}

void URH_GuideSubsystem::CreateGuide(FRHAPI_GuideCreateRequest InRequest, const FRH_GuideUpdateCallBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TCreateGuide::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideCreateRequest = MoveTemp(InRequest);
	
	typedef TCreateGuide BaseType;
	TSharedPtr<FGuid> NewGuideID = MakeShared<FGuid>();
	
	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, NewGuideID](const BaseType::Response& Response)
			{
				FRHAPI_GuideFull Content;
				if (Response.TryGetContentFor201(Content))
				{
					Guides.Add(Content.GuideId, MoveTemp(Content));
					*NewGuideID = Content.GuideId;
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, NewGuideID](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, *NewGuideID);
			}),
		GetDefault<URH_IntegrationSettings>()->GuideSearchGuidesPriority
	);
	Helper->Start(RH_APIs::GetGuideAPI(), Request);
}

void URH_GuideSubsystem::UpdateGuide(const FGuid& GuideID, FRHAPI_GuideCreateRequest InRequest, const FRH_GuideUpdateCallBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TUpdateGuideById::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideId = GuideID;
	Request.GuideCreateRequest = MoveTemp(InRequest);
	
	typedef TUpdateGuideById BaseType;
	
	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, GuideID](const BaseType::Response& Response)
			{
				FRHAPI_GuideFull Content;
				if (Response.TryGetContentFor200(Content))
				{
					Guides.Add(Content.GuideId, MoveTemp(Content));
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, GuideID](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, GuideID);
			}),
		GetDefault<URH_IntegrationSettings>()->GuideSearchGuidesPriority
	);
	Helper->Start(RH_APIs::GetGuideAPI(), Request);
}

void URH_GuideSubsystem::DeleteGuide(const FGuid& GuideID, const FRH_GuideUpdateCallBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TDeleteGuideById::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideId = GuideID;
	
	typedef TDeleteGuideById BaseType;
	
	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, GuideID](const BaseType::Response& Response)
			{
				if (Response.IsSuccessful())
				{
					Guides.Remove(GuideID);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate, GuideID](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo, GuideID);
			}),
		GetDefault<URH_IntegrationSettings>()->GuideSearchGuidesPriority
	);
	Helper->Start(RH_APIs::GetGuideAPI(), Request);
}

void URH_GuideSubsystem::InitPropertiesWithDefaultValues()
{
	Searches.Empty();
}
