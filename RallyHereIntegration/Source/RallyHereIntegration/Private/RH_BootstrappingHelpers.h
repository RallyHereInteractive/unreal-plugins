
#pragma once

#include "CoreMinimal.h"
#include "RH_Common.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceBootstrappers.h"
#include "RH_GameHostProviderInterface.h"
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
		static FString Name(TEXT("FRH_SessionBootstrappingFinalizer"));
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
};
