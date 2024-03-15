// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RH_Common.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceBootstrappers.h"
#include "RH_GameHostProviderInterface.h"
#include "OnlineSubsystem.h"
#include "Tickable.h"
#include "HttpModule.h"


DECLARE_DELEGATE_TwoParams(FRH_ServerBootstrapFinalizerDelegate, bool, const FRH_BootstrappingResult&);

// simple task that can be chained into that will take a valid but not complete bootstrapping result, and attempt to complete it
class FRH_SessionBootstrappingFinalizer : public FRH_AsyncTaskHelper, FTickableGameObject
{
	typedef RallyHereAPI::Traits_GetSessionById SessionByIdType;
	typedef RallyHereAPI::Traits_GetSessionByAllocationId SessionByAllocationIdType;
	typedef RallyHereAPI::Traits_GetSessionTemplateByType TemplateLookupType;
public:
	FRH_SessionBootstrappingFinalizer(FAuthContextPtr InAuthContext, const FRH_BootstrappingResult& InBootstrappingResult, FRH_ServerBootstrapFinalizerDelegate InDelegate)
		: AuthContext(InAuthContext)
		, BootstrappingResult(InBootstrappingResult)
		, Delegate(InDelegate)
		, NextPollTime(FDateTime())
		, PollInterval(FTimespan::FromSeconds(GetDefault<URH_BootstrappingSettings>()->PollIntervalFinalizer))
		, PollCount(0)
		, PollLogInterval(GetDefault<URH_BootstrappingSettings>()->PollLogIntervalFinalizer)
		, MaxPollCount(GetDefault<URH_BootstrappingSettings>()->MaxPollCountFinalizer)
	{
	}

	void Start()
	{
		Started();

		if (BootstrappingResult.IsComplete())
		{
			Completed(BootstrappingResult.IsComplete());
		}
		else if (BootstrappingResult.IsValid())
		{
			Poll();
		}
		else
		{
			Failed(TEXT("Bootstrapping finalizer given invalid bootstrapping result"));
		}
	}

protected:

	void OnSessionLookupById(const SessionByIdType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful())
		{
			BootstrappingResult.Session = Resp.Content;
			BootstrappingResult.ETag = Resp.ETag;

			LookupSessionTemplate(Resp.Content.Type);
		}
		else
		{
			Failed(TEXT("LookupById Failed"));
		}
	}


	void OnSessionLookupByAllocationId(const SessionByAllocationIdType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful())
		{
			const auto Instance = Resp.Content.GetInstanceOrNull();
			if (!Instance)
			{
				Failed(TEXT("Allocation lookup found a session but instance was not set, treating session as no longer valid"));
				return;
			}

			check(BootstrappingResult.AllocationInfo.AllocationId.IsSet());
			if (!BootstrappingResult.AllocationInfo.AllocationId.IsSet())
			{
				Failed(TEXT("Allocation lookup has no allocation id but we are in the allocation id lookup flow"));
				return;
			}

			const auto AllocationID = Instance->GetAllocationIdOrNull();
			if (AllocationID && *AllocationID == BootstrappingResult.AllocationInfo.AllocationId)
			{
				// everything matches, we are done
				BootstrappingResult.Session = Resp.Content;
				BootstrappingResult.ETag = Resp.ETag;

				LookupSessionTemplate(Resp.Content.Type);
			}
			else if (AllocationID)
			{
				const FString ErrorMsg = FString::Printf(TEXT("Bootstrapping finalier expected allocation id %s but returned session has allocation id %s"),
					*BootstrappingResult.AllocationInfo.AllocationId.GetValue(), **AllocationID);
				Failed(*ErrorMsg);
			}
			else
			{
				// we have an instance but no allocation id is set yet because session API is still processing, so we need to retry a few times
				SetNextPollTime();
			}
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
		{
			// this lookup is allowed to fail, as the instance allocation assignment may still be in flight.  Poll again until we reach our poll limit
			SetNextPollTime();
		}
		else
		{
			Failed(TEXT("Invalid response when trying to lookup allocation"));
		}
	}

	void LookupSessionTemplate(const FString& TemplateName)
	{
		TemplateLookupType::Request Request;

		Request.SessionType = TemplateName;
		Request.AuthContext = AuthContext;

		HttpRequest = TemplateLookupType::DoCall(RH_APIs::GetSessionsAPI(), Request, TemplateLookupType::Delegate::CreateSP(this, &FRH_SessionBootstrappingFinalizer::OnLooupSessionTemplateComplete), GetDefault<URH_IntegrationSettings>()->SessionGetTemplatePriority);
		if (!HttpRequest)
		{
			FString ErrorMsg = FString::Printf(TEXT("Could not create lookup request for Template %s"), *TemplateName);
			Failed(*ErrorMsg);
		}
	}
	void OnLooupSessionTemplateComplete(const TemplateLookupType::Response& Resp)
	{
		if (Resp.IsSuccessful())
		{
			BootstrappingResult.Template = Resp.Content;

			Completed(BootstrappingResult.IsComplete());
		}
		else
		{
			Failed(TEXT("Template lookup Failed"));
		}
	}

	void Poll()
	{
		if ((PollCount % PollLogInterval) == 0)
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Polling for allocation/session [%d]"), *GetName(), PollCount);
		}
		PollCount++;

		if (MaxPollCount > 0 && PollCount >= MaxPollCount)
		{
			Failed(TEXT("Exceeded maximum poll count"));
			return;
		}

		// if allocation id is set, it is treated as the primary, as it means we MUST have a session and it MUST have a matching instance
		if (BootstrappingResult.AllocationInfo.AllocationId.IsSet())
		{
			SessionByAllocationIdType::Request Request;
			Request.AllocationId = BootstrappingResult.AllocationInfo.AllocationId.GetValue();
			Request.AuthContext = AuthContext;

			HttpRequest = SessionByAllocationIdType::DoCall(RH_APIs::GetSessionsAPI(), Request, SessionByAllocationIdType::Delegate::CreateSP(this, &FRH_SessionBootstrappingFinalizer::OnSessionLookupByAllocationId), GetDefault<URH_IntegrationSettings>()->SessionGetByAllocationIdPriority);
			if (!HttpRequest)
			{
				FString ErrorMsg = FString::Printf(TEXT("Could not create lookup request for AllocationId %s"), *BootstrappingResult.AllocationInfo.AllocationId.GetValue());
				Failed(*ErrorMsg);
			}
		}
		// if only a session id was set, we do not care if it has an instance, we just need the session object
		else if (BootstrappingResult.AllocationInfo.SessionId.IsSet())
		{
			SessionByIdType::Request Request;
			Request.SessionId = BootstrappingResult.AllocationInfo.SessionId.GetValue();
			Request.AuthContext = AuthContext;
			Request.RefreshTtl = true; // we are polling, so we want to refresh the session ttl

			HttpRequest = SessionByIdType::DoCall(RH_APIs::GetSessionsAPI(), Request, SessionByIdType::Delegate::CreateSP(this, &FRH_SessionBootstrappingFinalizer::OnSessionLookupById), GetDefault<URH_IntegrationSettings>()->SessionGetBySessionIdPriority);			if (!HttpRequest)
			{
				FString ErrorMsg = FString::Printf(TEXT("Could not create lookup request for SessionId %s"), *BootstrappingResult.AllocationInfo.AllocationId.GetValue());
				Failed(*ErrorMsg);
			}
		}
		else
		{
			Failed(TEXT("Bootstrapping finalizer given valid bootstrapping result with no valid ids"));
		}
	}

	void SetNextPollTime()
	{
		NextPollTime = FDateTime::Now() + PollInterval;
	}
	void ResetNextPollTime()
	{
		NextPollTime = FDateTime();
	}

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime)
	{
		if (FDateTime::Now() > NextPollTime && NextPollTime.GetTicks() > 0)
		{
			ResetNextPollTime();
			if (HttpRequest != nullptr)
			{
				// poll still in flight, repoll at next interval
				SetNextPollTime();
			}
			else
			{
				Poll();
			}
		}
	}
	virtual bool IsTickable() const { return NextPollTime.GetTicks() > 0; }
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_Finalizer, STATGROUP_TaskGraphTasks); }

	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_SessionBootstrappingFinalizer"));
		return Name;
	}

	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, BootstrappingResult);
	}

	FAuthContextPtr AuthContext;
	FRH_BootstrappingResult BootstrappingResult;
	FRH_ServerBootstrapFinalizerDelegate Delegate;

	FHttpRequestPtr HttpRequest;

	FDateTime NextPollTime;
	FTimespan PollInterval;
	int32 PollCount;
	int32 PollLogInterval;
	int32 MaxPollCount;
};

class FRH_GameHostProviderFallbackAutoCreate : public IRH_GameHostProviderInterface
{
public:
	typedef RallyHereAPI::Traits_CreateOrJoinSession BaseType;

	FRH_GameHostProviderFallbackAutoCreate(const FString& Commandline) : IRH_GameHostProviderInterface(Commandline)
	{

	}

	static bool IsAvailable() { return true; }

	/** @brief Gets whether this provider object is in a valid state */
	virtual bool IsValid() const { return true; }

	/** @brief Asynchronous connect to the provider, triggers OnProviderConnectComplete upon completion */
	virtual void BeginConnecting()
	{
		OnProviderConnectComplete.ExecuteIfBound(true);
	}

	/** @brief Asynchronous register with the provider for hosting non-self-allocating allocated servers, triggers OnProviderRegisterComplete upon completion, and OnProviderAllocationComplete once an allocation has been created */
	virtual void BeginRegister()
	{
		// autocreate fallback cannot register, it must be run in reservation mode
		OnProviderRegisterComplete.ExecuteIfBound(false);
	}

	/** @brief Asynchronous reservation creation for self-allocating servers, triggers OnProviderReservationComplete upon completion */
	virtual void BeginReservation()
	{
		OnProviderReservationComplete.ExecuteIfBound(true);
	}

	/** @brief Asynchronous creation an allocation with the provider for self-allocating servers, triggers OnProviderSelfAllocateComplete upon completion */
	virtual void BeginSelfAllocate()
	{
		OnProviderSelfAllocateComplete.ExecuteIfBound(true);
	}

	/** @brief Notify the provider that the game process initiated a soft stop on its own (this may end up calling the soft stop callback!) */
	virtual void NotifySoftStopRequested()
	{
		// do nothing, no special handling is required
	}
};

// helper class that contains the full flow of a server login (so it can be called during bootstrapping, or other times)
class FRH_ServerLoginHelper : public FRH_AsyncTaskHelper
{
	typedef RallyHereAPI::Traits_Login LoginType;

public:
	FRH_ServerLoginHelper(FAuthContextPtr InAuthContext, IOnlineSubsystem* InOSS, const FRH_GenericSuccessWithErrorDelegate& InDelegate )
		: AuthContext(InAuthContext)
		, OSS(InOSS)
		, Delegate(InDelegate)
	{
	}

	void Start()
	{
		Started();

		if (AuthContext.IsValid() == false)
		{
			Failed(TEXT("Invalid AuthContext"));
			return;
		}

		// update the auth context with the current client id and secret in case it changed since prior logins
		AuthContext->SetClientId(FRallyHereIntegrationModule::Get().GetClientId());
		AuthContext->SetClientSecret(FRallyHereIntegrationModule::Get().GetClientSecret());

		// if we have an OSS that is valid and has a grant type, use it
		if (OSS != nullptr && RH_GetGrantTypeFromOSSName(OSS->GetSubsystemName()).IsSet())
		{
			DoOSSLogin();
		}
		else
		{
			DoCredentialLogin();
		}
	}

protected:

	void DoOSSLogin()
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

		auto Identity = OSS != nullptr ? OSS->GetIdentityInterface() : nullptr;
		if (!Identity.IsValid())
		{
			Failed(FString::Printf(TEXT("[%s] - Could not find login OSS to use for server authentication"), ANSI_TO_TCHAR(__FUNCTION__)));
			return;
		}

		if (OnOSSLoginCompleteDelegateHandle.IsValid())
		{
			Failed(FString::Printf(TEXT("[%s] OSS Login already pending"), ANSI_TO_TCHAR(__FUNCTION__)));
			return;
		}

		int32 ControllerId = 0;

		OnOSSLoginCompleteDelegateHandle = Identity->AddOnLoginCompleteDelegate_Handle(
			ControllerId, FOnLoginCompleteDelegate::CreateSP(this, &FRH_ServerLoginHelper::OnOSSLoginComplete));

		if (!Identity->AutoLogin(ControllerId))
		{
			Failed(FString::Printf(TEXT("[%s] Autologin failed"), ANSI_TO_TCHAR(__FUNCTION__)));
		}
	}

	void OnOSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId& UniqueId, const FString& ErrorMessage)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

		auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
		if (OSS == nullptr || !Identity.IsValid())
		{
			Failed(FString::Printf(TEXT("[%s] - Could not find login OSS to use for server authentication"), ANSI_TO_TCHAR(__FUNCTION__)));
			return;
		}

		// clear the delegate, because the controller id may change next time
		Identity->ClearOnLoginCompleteDelegate_Handle(ControllerId, OnOSSLoginCompleteDelegateHandle);
		OnOSSLoginCompleteDelegateHandle.Reset();

		if (!bSuccessful)
		{
			Failed(FString::Printf(TEXT("[%s] OSS Login Failed: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorMessage));
			return;
		}

		auto UniqueIdPtr = Identity->GetUniquePlayerId(ControllerId);
		if (Identity->GetLoginStatus(*UniqueIdPtr) != ELoginStatus::LoggedIn)
		{
			Failed(FString::Printf(TEXT("[%s] OSS User Not Logged In: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorMessage));
			return;
		}

		if (RH_UseGetAuthTokenFallbackFromOSSName(OSS->GetSubsystemName()))
		{
			FExternalAuthToken AuthToken;
			AuthToken.TokenString = Identity->GetAuthToken(ControllerId);;
			RetrieveOSSAuthTokenComplete(ControllerId, !AuthToken.IsValid(), AuthToken);
		}
		else
		{
#if RH_FROM_ENGINE_VERSION(5,2)
			Identity->GetLinkedAccountAuthToken(ControllerId, FString(), IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateSP(this, &FRH_ServerLoginHelper::RetrieveOSSAuthTokenComplete));
#else
			Identity->GetLinkedAccountAuthToken(ControllerId, IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateSP(this, &FRH_ServerLoginHelper::RetrieveOSSAuthTokenComplete));
#endif
		}
	}

	void RetrieveOSSAuthTokenComplete(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken& AuthTokenWrapper)
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

		auto Identity = OSS != nullptr ? OSS->GetIdentityInterface() : nullptr;
		if (OSS == nullptr || !Identity.IsValid())
		{
			Failed(FString::Printf(TEXT("[%s] - Could not find login OSS to use for server authentication"), ANSI_TO_TCHAR(__FUNCTION__)));
			return;
		}

		if (!bWasSuccessful)
		{
			Failed(FString::Printf(TEXT("[%s] Could not retrieve auth token - check that the OSS '%s' was able to fully log in (ex: may have logged into a local account rather than a network account)"), ANSI_TO_TCHAR(__FUNCTION__),
				*OSS->GetSubsystemName().ToString()));
			return;
		}
		else if (!AuthTokenWrapper.HasTokenString())
		{
			Failed(FString::Printf(TEXT("[%s] Auth token has no token string, and RH bootstrapping does not currently support a binary auth token"), ANSI_TO_TCHAR(__FUNCTION__),
				*OSS->GetSubsystemName().ToString()));
			return;
		}

		if (OSS == nullptr)
		{
			Failed(TEXT("Invalid OSS"));
			return;
		}

		auto GrantType = RH_GetGrantTypeFromOSSName(OSS->GetSubsystemName());
		if (!GrantType.IsSet())
		{
			Failed(FString::Printf(TEXT("[%s] Unable to find grant type for OSS '%s'."), ANSI_TO_TCHAR(__FUNCTION__),
				*OSS->GetSubsystemName().ToString()));
			return;
		}

		LoginType::Request Request;
		Request.SetShouldRetry();
		Request.AuthContext = AuthContext;
		Request.LoginRequestV1.SetIncludeRefresh(true);
		Request.LoginRequestV1.SetAcceptEula(true);
		Request.LoginRequestV1.SetAcceptTos(true);
		Request.LoginRequestV1.SetAcceptPrivacyPolicy(true);
		Request.LoginRequestV1.SetGrantType(GrantType.GetValue());
		Request.LoginRequestV1.SetPortalAccessToken(AuthTokenWrapper.TokenString);

		HttpRequest = LoginType::DoCall(RH_APIs::GetAuthAPI(), Request, LoginType::Delegate::CreateSP(this, &FRH_ServerLoginHelper::OnRHLoginComplete), GetDefault<URH_IntegrationSettings>()->AuthLoginPriority);
		if (!HttpRequest)
		{
			FString ErrorMsg = FString::Printf(TEXT("Could not create login request"));
			Failed(*ErrorMsg);
		}
	}

	void DoCredentialLogin()
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

		LoginType::Request Request;
		Request.SetShouldRetry();
		Request.AuthContext = AuthContext;
		Request.LoginRequestV1.SetIncludeRefresh(true);
		Request.LoginRequestV1.SetAcceptEula(true);
		Request.LoginRequestV1.SetAcceptTos(true);
		Request.LoginRequestV1.SetAcceptPrivacyPolicy(true);
		Request.LoginRequestV1.SetGrantType(ERHAPI_GrantType::ClientCredentials);

		HttpRequest = LoginType::DoCall(RH_APIs::GetAuthAPI(), Request, LoginType::Delegate::CreateSP(this, &FRH_ServerLoginHelper::OnRHLoginComplete), GetDefault<URH_IntegrationSettings>()->AuthLoginPriority);
		if (!HttpRequest)
		{
			FString ErrorMsg = FString::Printf(TEXT("Could not create login request"));
			Failed(*ErrorMsg);
		}
	}

	void OnRHLoginComplete(const LoginType::Response& Resp)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

		HttpRequest = nullptr;

		// handle the response from the auth context
		AuthContext->ProcessLogin(Resp);

		if (Resp.IsSuccessful())
		{
			Completed(true);
		}
		else
		{
			Failed(TEXT("RallyHere Login Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_SessionBootstrappingFinalizer"));
		return Name;
	}

	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
	}

	FAuthContextPtr AuthContext;
	IOnlineSubsystem* OSS;
	FRH_GenericSuccessWithErrorDelegate Delegate;
	FRH_ErrorInfo ErrorInfo;

	FHttpRequestPtr HttpRequest;

	/** Delegate handle for the OSS login call */
	FDelegateHandle OnOSSLoginCompleteDelegateHandle;
};