// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_PurgeSubsystem.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"

void URH_PurgeSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
}

void URH_PurgeSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
}

void URH_PurgeSubsystem::OnUserChanged()
{
	Super::OnUserChanged();
	PurgeStatus = FRHAPI_PurgeResponse();
}

bool URH_PurgeSubsystem::EnqueueMeForPurge(const TOptional<FDateTime>& PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_QueueMeForPurge();
	Request.AuthContext = GetAuthContext();
	if (PurgeTime.IsSet()) Request.PurgeRequest.SetSuggestedPurgeTime(PurgeTime.GetValue());

	const auto HttpPtr = RH_APIs::GetAPIs().GetUsers()->QueueMeForPurge(Request,
    		RallyHereAPI::FDelegate_QueueMeForPurge::CreateUObject(
    			this, &URH_PurgeSubsystem::OnPurgeMe,
    			Delegate),
				GetDefault<URH_IntegrationSettings>()->PurgeQueuePriority);
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false, PurgeStatus, FRH_ErrorInfo());
	}
	return true;
}

bool URH_PurgeSubsystem::DequeueMeForPurge(const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_DequeueMeForPurge();
	Request.AuthContext = GetAuthContext();

	const auto HttpPtr = RH_APIs::GetAPIs().GetUsers()->DequeueMeForPurge(Request,
    		RallyHereAPI::FDelegate_DequeueMeForPurge::CreateUObject(
    			this, &URH_PurgeSubsystem::OnDequeueMe,
    			Delegate),
				GetDefault<URH_IntegrationSettings>()->PurgeQueuePriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false, PurgeStatus, FRH_ErrorInfo());
	}
	return true;
}

bool URH_PurgeSubsystem::QueryMyPurgeStatus(const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate)
{
	auto Request = RallyHereAPI::FRequest_GetQueuePurgeStatusForMe();
	Request.AuthContext = GetAuthContext();

	const auto HttpPtr = RH_APIs::GetAPIs().GetUsers()->GetQueuePurgeStatusForMe(Request,
    		RallyHereAPI::FDelegate_GetQueuePurgeStatusForMe::CreateUObject(
    			this, &URH_PurgeSubsystem::OnGetMyPurgeStatus,
    			Delegate),
				GetDefault<URH_IntegrationSettings>()->PurgeGetStatusPriority);

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false, PurgeStatus, FRH_ErrorInfo());
	}
	return true;
}

void URH_PurgeSubsystem::OnPurgeMe(const RallyHereAPI::FResponse_QueueMeForPurge& Resp,
                           const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		// User's access token should be switched out with access token that includes restriction
		auto AuthContext = GetAuthContext();
		if (AuthContext.IsValid())
		{
			AuthContext->Refresh();
		}
		PurgeStatus = *Content;
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else
	{
		auto Error = FRH_ErrorInfo(Resp);
		Delegate.ExecuteIfBound(false, PurgeStatus, Error);
	}
}

void URH_PurgeSubsystem::OnDequeueMe(const RallyHereAPI::FResponse_DequeueMeForPurge& Resp,
                           const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		PurgeStatus = FRHAPI_PurgeResponse();
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else
	{
		auto Error = FRH_ErrorInfo(Resp);
		Delegate.ExecuteIfBound(false, PurgeStatus, Error);
	}
}

void URH_PurgeSubsystem::OnGetMyPurgeStatus(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe& Resp,
                           const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		PurgeStatus = *Content;
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::Type::NotFound)
	{
		PurgeStatus = FRHAPI_PurgeResponse();
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else
	{
		auto Error = FRH_ErrorInfo(Resp);
		Delegate.ExecuteIfBound(false, PurgeStatus, Error);
	}
}




