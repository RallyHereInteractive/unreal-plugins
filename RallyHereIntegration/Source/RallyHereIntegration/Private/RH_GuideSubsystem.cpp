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
	if (!TGetGuideById::DoCall(RH_APIs::GetGuideAPI(), Request, TGetGuideById::Delegate::CreateUObject(this, &URH_GuideSubsystem::OnGuideGetAsync, Delegate)))
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(), FRHAPI_GuideFull());
	}
}

void URH_GuideSubsystem::OnGuideGetAsync(const TGetGuideById::Response& Resp, FRH_GuideGetCallBlock Delegate)
{
	FRHAPI_GuideFull Content;
	if (!Resp.TryGetContentFor200(Content))
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(Resp), FRHAPI_GuideFull());
		return;
	}

	const auto& NewGuide = Guides.Add(Content.GuideId, MoveTemp(Content));
	Delegate.ExecuteIfBound(true, FRH_ErrorInfo(), NewGuide);
}

void URH_GuideSubsystem::CreateGuide(FRHAPI_GuideCreateRequest InRequest, const FRH_GuideUpdateCallBlock& InDelegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TCreateGuide::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideCreateRequest = MoveTemp(InRequest);
	if (!TCreateGuide::DoCall(RH_APIs::GetGuideAPI(), Request, TCreateGuide::Delegate::CreateUObject(this, &URH_GuideSubsystem::OnGuideCreate, InDelegate)))
	{
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), FGuid());
	}
}

void URH_GuideSubsystem::OnGuideCreate(const TCreateGuide::Response& Resp, FRH_GuideUpdateCallBlock Delegate)
{
	FRHAPI_GuideFull Content;
	if (!Resp.TryGetContentFor201(Content))
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(Resp), FGuid());
		return;
	}

	auto& NewGuide = Guides.Add(Content.GuideId, MoveTemp(Content));
	Delegate.ExecuteIfBound(true, FRH_ErrorInfo(), NewGuide.GuideId);
}

void URH_GuideSubsystem::UpdateGuide(const FGuid& GuideID, FRHAPI_GuideCreateRequest InRequest, const FRH_GuideUpdateCallBlock& InDelegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TUpdateGuideById::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideId = GuideID;
	Request.GuideCreateRequest = MoveTemp(InRequest);
	if (!TUpdateGuideById::DoCall(RH_APIs::GetGuideAPI(), Request, TUpdateGuideById::Delegate::CreateUObject(this, &URH_GuideSubsystem::OnGuideUpdate, InDelegate, GuideID)))
	{
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), GuideID);
	}
}

void URH_GuideSubsystem::OnGuideUpdate(const TUpdateGuideById::Response& Resp, FRH_GuideUpdateCallBlock Delegate, FGuid GuideID)
{
	FRHAPI_GuideFull Content;
	if (!Resp.TryGetContentFor200(Content))
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(Resp), GuideID);
		return;
	}

	Guides.Add(GuideID, MoveTemp(Content));
	Delegate.ExecuteIfBound(true, FRH_ErrorInfo(), GuideID);
}

void URH_GuideSubsystem::DeleteGuide(const FGuid& GuideID, const FRH_GuideUpdateCallBlock& InDelegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TDeleteGuideById::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.GuideId = GuideID;
	if (!TDeleteGuideById::DoCall(RH_APIs::GetGuideAPI(), Request, TDeleteGuideById::Delegate::CreateUObject(this, &URH_GuideSubsystem::OnGuideDelete, InDelegate, GuideID)))
	{
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), GuideID);
	}
}

void URH_GuideSubsystem::OnGuideDelete(const TDeleteGuideById::Response& Resp, FRH_GuideUpdateCallBlock Delegate, FGuid GuideID)
{
	if (!Resp.IsSuccessful())
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(Resp), GuideID);
		return;
	}

	Guides.Remove(GuideID);
	Delegate.ExecuteIfBound(true, FRH_ErrorInfo(), GuideID);
}

void URH_GuideSubsystem::InitPropertiesWithDefaultValues()
{
	Searches.Empty();
}
