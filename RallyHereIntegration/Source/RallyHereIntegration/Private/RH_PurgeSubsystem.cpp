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
	PurgeStatus = FRH_PurgeStatus();
}

bool URH_PurgeSubsystem::EnqueueMeForPurge(TOptional<FDateTime> PurgeTime, FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	auto Request = RallyHereAPI::FRequest_QueueMeForPurge();
	Request.AuthContext = GetAuthContext();
	if (PurgeTime.IsSet()) Request.PurgeRequest.SetSuggestedPurgeTime(PurgeTime.GetValue());

	const auto HttpPtr = RH_APIs::GetAPIs().GetUsers().QueueMeForPurge(Request,
    		RallyHereAPI::FDelegate_QueueMeForPurge::CreateUObject(
    			this, &URH_PurgeSubsystem::OnPurgeMe,
    			Delegate));
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false, PurgeStatus, FRH_ErrorInfo());
	}
	return true;
}

bool URH_PurgeSubsystem::DequeueMeForPurge(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	auto Request = RallyHereAPI::FRequest_DequeueMeForPurge();
	Request.AuthContext = GetAuthContext();
	
	const auto HttpPtr = RH_APIs::GetAPIs().GetUsers().DequeueMeForPurge(Request,
    		RallyHereAPI::FDelegate_DequeueMeForPurge::CreateUObject(
    			this, &URH_PurgeSubsystem::OnDequeueMe,
    			Delegate));

	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false, PurgeStatus, FRH_ErrorInfo());
	}
	return true;
}

bool URH_PurgeSubsystem::QueryMyPurgeStatus(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	auto Request = RallyHereAPI::FRequest_GetQueuePurgeStatusForMe();
	Request.AuthContext = GetAuthContext();
	
	const auto HttpPtr = RH_APIs::GetAPIs().GetUsers().GetQueuePurgeStatusForMe(Request,
    		RallyHereAPI::FDelegate_GetQueuePurgeStatusForMe::CreateUObject(
    			this, &URH_PurgeSubsystem::OnGetMyPurgeStatus,
    			Delegate));
	
	if (HttpPtr == nullptr)
	{
		Delegate.ExecuteIfBound(false, PurgeStatus, FRH_ErrorInfo());
	}
	return true;
}

void URH_PurgeSubsystem::OnPurgeMe(const RallyHereAPI::FResponse_QueueMeForPurge& Resp,
                           FRH_OnPurgeStatusUpdatedDelegateBlock Delegate) 
{
	if (Resp.IsSuccessful())
	{
		// User's access token should be switched out with access token that includes restriction
		auto AuthContext = GetAuthContext();
		if (AuthContext.IsValid())
		{
			AuthContext->Refresh(); 
		}
		PurgeStatus.ImportAPIStatus(Resp.Content);
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else
	{
		auto Error = FRH_ErrorInfo();
		Error.ImportErrorInfo(Resp);
		Delegate.ExecuteIfBound(false, PurgeStatus, Error);
	}
}

void URH_PurgeSubsystem::OnDequeueMe(const RallyHereAPI::FResponse_DequeueMeForPurge& Resp,
                           FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		PurgeStatus = FRH_PurgeStatus();
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else
	{
		auto Error = FRH_ErrorInfo();
		Error.ImportErrorInfo(Resp);
		Delegate.ExecuteIfBound(false, PurgeStatus, Error);
	}
}

void URH_PurgeSubsystem::OnGetMyPurgeStatus(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe& Resp,
                           FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		PurgeStatus.ImportAPIStatus(Resp.Content);
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::Type::NotFound)
	{
		PurgeStatus.ImportAPIStatus({});
		Delegate.ExecuteIfBound(true, PurgeStatus, FRH_ErrorInfo());
	}
	else
	{
		auto Error = FRH_ErrorInfo();
		Error.ImportErrorInfo(Resp);
		Delegate.ExecuteIfBound(false, PurgeStatus, Error);
	}
}




