// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_GuideSearch.h"
#include "RH_OnlineSubsystemNames.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIHelpers.h"
#include "GuideAPI.h"
#include "Engine/World.h"

void URH_GuideSearch::Initialize(const FRH_GuideSearchRequest& InRequest, TSharedPtr<RallyHereAPI::FAuthContext> InAuthContext)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	TSearchGuides::Request Request;
	Request.AuthContext = InAuthContext;
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
	
	InputRequest = InRequest;
	SearchRequest = Request;
	bRequestInProgress = false;
}

bool URH_GuideSearch::HasMorePages() const
{
	return GetNextPageCursor() != nullptr;
}

FString* URH_GuideSearch::GetNextPageCursor() const
{
	auto LastPage = ResultPages.Last();
	auto NextPageCursor = LastPage.GetCursorOrNull();
	if (!NextPageCursor)
	{
		return nullptr;
	}

	auto PreviousResults = LastPage.GetResultsOrNull();
	if (!PreviousResults || PreviousResults->IsEmpty() || (SearchRequest.PageSize.IsSet() && PreviousResults->Num() < *SearchRequest.PageSize))
	{
		return nullptr;
	}
	
	return NextPageCursor;
}

bool URH_GuideSearch::RequestNextPage(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (bRequestInProgress)
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return false;
	}
	
	if (!ResultPages.IsEmpty()) // if we are requesting subsequent pages
	{
		auto NextPageCursor = GetNextPageCursor();
		if (!NextPageCursor)
		{
			Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
			return false;
		}
		
		SearchRequest.Cursor = *NextPageCursor;
	}

	bRequestInProgress = true;
	typedef TSearchGuides BaseType;
	
	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Response)
			{
				FRHAPI_SearchGuideResponse Content;
				if (Response.TryGetContentFor200(Content))
				{
					ResultPages.Add(MoveTemp(Content));
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				bRequestInProgress = false;
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GuideSearchGuidesPriority
	);
	Helper->Start(RH_APIs::GetGuideAPI(), SearchRequest);
	return true;
}
