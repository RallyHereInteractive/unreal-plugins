// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_GuideSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIHelpers.h"
#include "GuideFull.h"
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

int32 URH_GuideSubsystem::CreateSearchGuides(const FRH_GuideSearchRequest& InRequest)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TSearchGuides::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.SortBy = InRequest.SortBy;
	Request.Sort = InRequest.Sort;
	if (InRequest.PageSize > 0)
	{
		Request.PageSize = InRequest.PageSize;
	}
	if (InRequest.bDoOwnerSearch)
	{
		Request.OwnerEntityType = InRequest.OwnerEntityType;
		Request.OwnerEntityId = InRequest.OwnerEntityId;
	}
	if (!InRequest.Language.IsEmpty())
	{
		Request.Language = InRequest.Language;
	}
	if (!InRequest.GuideType.IsEmpty())
	{
		Request.GuideType = InRequest.GuideType;
	}
	if (!InRequest.GameVersion.IsEmpty())
	{
		Request.GameVersion = InRequest.GameVersion;
	}
	if (!InRequest.Name.IsEmpty())
	{
		Request.Name = InRequest.Name;
	}
	if (!InRequest.Ref1.IsEmpty())
	{
		Request.Ref1 = InRequest.Ref1;
	}
	if (!InRequest.Ref2.IsEmpty())
	{
		Request.Ref2 = InRequest.Ref2;
	}
	if (!InRequest.Ref3.IsEmpty())
	{
		Request.Ref3 = InRequest.Ref3;
	}
	if (!InRequest.Ref4.IsEmpty())
	{
		Request.Ref4 = InRequest.Ref4;
	}
	if (!InRequest.Ref5.IsEmpty())
	{
		Request.Ref5 = InRequest.Ref5;
	}
	if (!InRequest.Ref6.IsEmpty())
	{
		Request.Ref6 = InRequest.Ref6;
	}
	if (!InRequest.Ref7.IsEmpty())
	{
		Request.Ref7 = InRequest.Ref7;
	}
	if (!InRequest.Ref8.IsEmpty())
	{
		Request.Ref8 = InRequest.Ref8;
	}
	if (!InRequest.Ref9.IsEmpty())
	{
		Request.Ref9 = InRequest.Ref9;
	}
	if (!InRequest.Ref10.IsEmpty())
	{
		Request.Ref10 = InRequest.Ref10;
	}
	if (!InRequest.Ref11.IsEmpty())
	{
		Request.Ref11 = InRequest.Ref11;
	}
	if (!InRequest.Ref12.IsEmpty())
	{
		Request.Ref12 = InRequest.Ref12;
	}
	if (!InRequest.Ref13.IsEmpty())
	{
		Request.Ref13 = InRequest.Ref13;
	}
	if (!InRequest.Ref14.IsEmpty())
	{
		Request.Ref14 = InRequest.Ref14;
	}
	if (!InRequest.Ref15.IsEmpty())
	{
		Request.Ref15 = InRequest.Ref15;
	}
	if (!InRequest.Ref16.IsEmpty())
	{
		Request.Ref16 = InRequest.Ref16;
	}
	if (!InRequest.Ref17.IsEmpty())
	{
		Request.Ref17 = InRequest.Ref17;
	}
	if (!InRequest.Ref18.IsEmpty())
	{
		Request.Ref18 = InRequest.Ref18;
	}
	if (!InRequest.Ref19.IsEmpty())
	{
		Request.Ref19 = InRequest.Ref19;
	}
	if (!InRequest.Ref20.IsEmpty())
	{
		Request.Ref20 = InRequest.Ref20;
	}
	if (!InRequest.Ref21.IsEmpty())
	{
		Request.Ref21 = InRequest.Ref21;
	}
	if (!InRequest.Ref22.IsEmpty())
	{
		Request.Ref22 = InRequest.Ref22;
	}
	if (!InRequest.Ref23.IsEmpty())
	{
		Request.Ref23 = InRequest.Ref23;
	}
	if (!InRequest.Ref24.IsEmpty())
	{
		Request.Ref24 = InRequest.Ref24;
	}
	if (!InRequest.Ref25.IsEmpty())
	{
		Request.Ref25 = InRequest.Ref25;
	}
	if (!InRequest.Ref26.IsEmpty())
	{
		Request.Ref26 = InRequest.Ref26;
	}
	if (!InRequest.Ref27.IsEmpty())
	{
		Request.Ref27 = InRequest.Ref27;
	}
	if (!InRequest.Ref28.IsEmpty())
	{
		Request.Ref28 = InRequest.Ref28;
	}
	if (!InRequest.Ref29.IsEmpty())
	{
		Request.Ref29 = InRequest.Ref29;
	}
	if (!InRequest.Ref30.IsEmpty())
	{
		Request.Ref30 = InRequest.Ref30;
	}
	if (!InRequest.Ref31.IsEmpty())
	{
		Request.Ref31 = InRequest.Ref31;
	}
	if (!InRequest.Ref32.IsEmpty())
	{
		Request.Ref32 = InRequest.Ref32;
	}

	const int32 NewHandle = ++LastSearchGuideRequestHandle;
	auto& Search = Searches.Add(NewHandle);
	Search.Handle = NewHandle;
	Search.InputRequest = InRequest;
	Search.SearchRequest = Request;
	Search.bRequestInProgress = false;
	return NewHandle;
}

bool URH_GuideSubsystem::RequestNextSearchGuidePage(int32 SearchGuideHandle, const FRH_GuideSearchCallBlock& InDelegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	auto Search = Searches.Find(SearchGuideHandle);
	if (!Search)
	{
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), SearchGuideHandle);
		return false;
	}

	if (Search->bRequestInProgress)
	{
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), SearchGuideHandle);
		return false;
	}
	
	if (!Search->ResultPages.IsEmpty()) // if we are requesting subsequent pages
	{
		auto LastPage = Search->ResultPages.Last();
		auto NextPageCursor = LastPage.GetCursorOrNull();
		if (!NextPageCursor)
		{
			InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), SearchGuideHandle);
			return false;
		}
		
		Search->SearchRequest.Cursor = *NextPageCursor;

		auto PreviousResults = LastPage.GetResultsOrNull();
		if (!PreviousResults || PreviousResults->IsEmpty() || (Search->SearchRequest.PageSize.IsSet() && PreviousResults->Num() < *Search->SearchRequest.PageSize))
		{
			InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), SearchGuideHandle);
			return false;
		}
	}

	Search->bRequestInProgress = true;
	auto Delegate = TSearchGuides::Delegate::CreateUObject(this, &URH_GuideSubsystem::OnSearchGuidesResponse, SearchGuideHandle, InDelegate);
	if (!TSearchGuides::DoCall(RH_APIs::GetGuideAPI(), Search->SearchRequest, Delegate, GetDefault<URH_IntegrationSettings>()->GuideSearchGuidesPriority))
	{
		Search->bRequestInProgress = false;
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), SearchGuideHandle);
		return false;
	}
	return true;
}

void URH_GuideSubsystem::OnSearchGuidesResponse(const TSearchGuides::Response& Resp, int32 SearchGuideHandle, const FRH_GuideSearchCallBlock& Delegate)
{
	SCOPED_NAMED_EVENT(RallyHere_OnSearchGuidesResponse, FColor::Purple);
	auto Search = Searches.Find(SearchGuideHandle);
	if (!Search)
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(Resp), SearchGuideHandle);
		return;
	}
	Search->bRequestInProgress = false;

	FRHAPI_SearchGuideResponse Content;
	if (!Resp.TryGetContentFor200(Content))
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo(Resp), SearchGuideHandle);
		return;
	}
	
	Search->ResultPages.Add(MoveTemp(Content));
	Delegate.ExecuteIfBound(true, FRH_ErrorInfo(), SearchGuideHandle);
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

void URH_GuideSubsystem::OnGuideGetAsync(const TGetGuideById::Response& Resp, const FRH_GuideGetCallBlock& Delegate)
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

void URH_GuideSubsystem::OnGuideCreate(const TCreateGuide::Response& Resp, const FRH_GuideUpdateCallBlock& Delegate)
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

void URH_GuideSubsystem::OnGuideUpdate(const TUpdateGuideById::Response& Resp, const FRH_GuideUpdateCallBlock& Delegate, const FGuid& GuideID)
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
	if (!TDeleteGuideById::DoCall(RH_APIs::GetGuideAPI(), Request, TDeleteGuideById::Delegate::CreateUObject(this, &URH_GuideSubsystem::OnGuideUpdate, InDelegate, GuideID)))
	{
		InDelegate.ExecuteIfBound(false, FRH_ErrorInfo(), GuideID);
	}
}

void URH_GuideSubsystem::OnGuideDelete(const TDeleteGuideById::Response& Resp, const FRH_GuideUpdateCallBlock& Delegate, const FGuid& GuideID)
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
