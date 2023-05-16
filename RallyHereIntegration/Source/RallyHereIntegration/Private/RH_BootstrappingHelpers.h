
#pragma once

#include "CoreMinimal.h"
#include "RH_Common.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceBootstrappers.h"
#include "Tickable.h"
#include "HttpModule.h"

DECLARE_DELEGATE_OneParam(FRH_ServerBootstrapLoginDelegate, bool);

// standalone helper that deals with initial login + refreshing token
class FRH_ServerLoginHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_ServerLoginHelper(FAuthContextPtr InAuthContext, FRH_ServerBootstrapLoginDelegate InDelegate)
		: AuthContext(InAuthContext)
		, Delegate(InDelegate)
	{
	}

	typedef RallyHereAPI::Traits_Login LoginType;

	virtual void Start()
	{
		Started();

		if (!AuthContext.IsValid())
		{
			Failed(TEXT("No AuthContext provided"));
			return;
		}

		// require file credential for now to parallel SIC.  Change later
		FString credFile;
		if (FParse::Value(FCommandLine::Get(), TEXT("rhcredentialsfile="), credFile))
		{
			TArray<FString> FileContentLines;
			if (!FFileHelper::LoadFileToStringArray(FileContentLines, *credFile))
			{
				Failed(FString::Printf(TEXT("Could not load specified credential file %s"), *credFile));
				return;
			}

			if (FileContentLines.Num() != 2)
			{
				Failed(FString::Printf(TEXT("Specified credential file %s was loaded but had invalid number of lines %d"), *credFile, FileContentLines.Num()));
				return;
			}

			//First line is username
			APIUserName = FileContentLines[0];
			APIPassword = FileContentLines[1];

			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Loaded rhapi username from file: %s"), *GetName(), *APIUserName);

			BeginRHLogin();
		}
		else
		{
			Failed(TEXT("No rhcredentialsfile specified on commandline"));
		}
	}
protected:

	void BeginRHLogin()
	{
		LoginType::Request Request;
		Request.SetShouldRetry();
		Request.AuthContext = AuthContext;
		Request.BodyLoginV1LoginPost.SetIncludeRefresh(true);
		Request.BodyLoginV1LoginPost.SetAcceptEula(true);
		Request.BodyLoginV1LoginPost.SetAcceptTos(true);
		Request.BodyLoginV1LoginPost.SetAcceptPrivacyPolicy(true);

		if (!AuthContext.IsValid() && AuthContext->GetRefreshToken().Len() > 0)
		{
			Request.BodyLoginV1LoginPost.GrantType = ERHAPI_GrantType::Refresh;
			Request.BodyLoginV1LoginPost.PortalAccessToken = AuthContext->GetRefreshToken();
		}
		else
		{
			Request.BodyLoginV1LoginPost.GrantType = ERHAPI_GrantType::Basic;
			Request.BodyLoginV1LoginPost.PortalAccessToken = FString::Printf(TEXT("%s:%s"), *APIUserName, *APIPassword);
		}

		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Creating RallyHere Login request"), *GetName());
		HttpRequest = LoginType::DoCall(RH_APIs::GetAPIs().GetAuth(), Request,
			LoginType::Delegate::CreateSP(this, &FRH_ServerLoginHelper::RHLoginComplete));

		if (!HttpRequest)
		{
			Failed(TEXT("Failed to create login request"));
		}
	}

	void RHLoginComplete(const RallyHereAPI::FResponse_Login& Resp)
	{
		if (Resp.IsSuccessful())
		{
			AuthContext->ProcessLogin(Resp);
			Completed(true);
		}
		else
		{
			Failed(FString::Printf(TEXT("Rally Here API login failed with %s"), *Resp.GetResponseString()));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerLoginHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess);
	}

	FAuthContextPtr AuthContext;
	FRH_ServerBootstrapLoginDelegate Delegate;

	FHttpRequestPtr HttpRequest;

	FString APIUserName;
	FString APIPassword;
};

DECLARE_DELEGATE_TwoParams(FRH_ServerBootstrapSidecarDelegate, bool, FRH_SidecarResult);

// simple task that can be chained into that will take a valid but not complete sidecar result, and attempt to complete it
class FRH_SessionBootstrappingSidecarFinalizer : public FRH_AsyncTaskHelper, FTickableGameObject
{
	typedef RallyHereAPI::Traits_GetSessionById SessionByIdType;
	typedef RallyHereAPI::Traits_GetSessionByAllocationId SessionByAllocationIdType;
	typedef RallyHereAPI::Traits_GetSessionTemplateByType TemplateLookupType;
public:
	FRH_SessionBootstrappingSidecarFinalizer(FAuthContextPtr InAuthContext, const FRH_SidecarResult& InSidecarResult, FRH_ServerBootstrapSidecarDelegate InDelegate)
		: AuthContext(InAuthContext)
		, SidecarResult(InSidecarResult)
		, Delegate(InDelegate)
		, NextPollTime(FDateTime())
		, PollInterval(FTimespan::FromSeconds(GetDefault<URH_SidecarSettings>()->PollIntervalFinalizer))
		, PollCount(0)
		, PollLogInterval(GetDefault<URH_SidecarSettings>()->PollLogIntervalFinalizer)
		, MaxPollCount(GetDefault<URH_SidecarSettings>()->MaxPollCountFinalizer)
	{
	}

	void Start()
	{
		Started();

		if (SidecarResult.IsComplete())
		{
			Completed(SidecarResult.IsComplete());
		}
		else if (SidecarResult.IsValid())
		{
			Poll();
		}
		else
		{
			Failed(TEXT("Sidecar finalizer given invalid sidecar result"));
		}
	}

protected:

	void OnSessionLookupById(const SessionByIdType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful())
		{
			SidecarResult.Session = Resp.Content;
			SidecarResult.ETag = Resp.ETag;

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

			const auto AllocationID = Instance->GetAllocationIdOrNull();
			if (AllocationID && *AllocationID == SidecarResult.AllocationId)
			{
				// everything matches, we are done
				SidecarResult.Session = Resp.Content;
				SidecarResult.ETag = Resp.ETag;

				LookupSessionTemplate(Resp.Content.Type);
			}
			else if (AllocationID)
			{
				const FString ErrorMsg = FString::Printf(TEXT("Sidecar expected allocation id %s but returned session has allocation id %s"), 
					*SidecarResult.AllocationId.GetValue(), **AllocationID);
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
	}

	void LookupSessionTemplate(const FString& TemplateName)
	{
		TemplateLookupType::Request Request;

		Request.SessionType = TemplateName;
		Request.AuthContext = AuthContext;

		HttpRequest = TemplateLookupType::DoCall(RH_APIs::GetSessionAPI(), Request, TemplateLookupType::Delegate::CreateSP(this, &FRH_SessionBootstrappingSidecarFinalizer::OnLooupSessionTemplateComplete));
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
			SidecarResult.Template = Resp.Content;

			Completed(SidecarResult.IsComplete());
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
		if (SidecarResult.AllocationId.IsSet())
		{
			SessionByAllocationIdType::Request Request;
			Request.AllocationId = SidecarResult.AllocationId.GetValue();
			Request.AuthContext = AuthContext;

			HttpRequest = SessionByAllocationIdType::DoCall(RH_APIs::GetSessionAPI(), Request, SessionByAllocationIdType::Delegate::CreateSP(this, &FRH_SessionBootstrappingSidecarFinalizer::OnSessionLookupByAllocationId));
			if (!HttpRequest)
			{
				FString ErrorMsg = FString::Printf(TEXT("Could not create lookup request for AllocationId %s"), *SidecarResult.AllocationId.GetValue());
				Failed(*ErrorMsg);
			}
		}
		// if only a session id was set, we do not care if it has an instance, we just need the session object
		else if (SidecarResult.SessionId.IsSet())
		{
			SessionByIdType::Request Request;
			Request.SessionId = SidecarResult.SessionId.GetValue();
			Request.AuthContext = AuthContext;

			HttpRequest = SessionByIdType::DoCall(RH_APIs::GetSessionAPI(), Request, SessionByIdType::Delegate::CreateSP(this, &FRH_SessionBootstrappingSidecarFinalizer::OnSessionLookupById));
			if (!HttpRequest)
			{
				FString ErrorMsg = FString::Printf(TEXT("Could not create lookup request for SessionId %s"), *SidecarResult.AllocationId.GetValue());
				Failed(*ErrorMsg);
			}
		}
		else
		{
			Failed(TEXT("Sidecar finalizer given valid sidecar result with no valid ids"));
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
		static FString Name(TEXT("FRH_SessionBootstrappingSidecarFinalizer"));
		return Name;
	}

	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, SidecarResult);
	}

	FAuthContextPtr AuthContext;
	FRH_SidecarResult SidecarResult;
	FRH_ServerBootstrapSidecarDelegate Delegate;

	FHttpRequestPtr HttpRequest;

	FDateTime NextPollTime;
	FTimespan PollInterval;
	int32 PollCount;
	int32 PollLogInterval;
	int32 MaxPollCount;
};

class FRH_ServerBootstrappingSidecar : public FRH_AsyncTaskHelper
{
public:
	FRH_ServerBootstrappingSidecar(FAuthContextPtr InAuthContext, FRH_ServerBootstrapSidecarDelegate InDelegate)
		: AuthContext(InAuthContext)
		, Delegate(InDelegate)
	{
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerBootstrappingSidecar"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		if (bSuccess && !SidecarResult.IsComplete())
		{
			// attempt to finalize the sidecar by chaining into a finalizer
			auto Helper = MakeShared<FRH_SessionBootstrappingSidecarFinalizer>(AuthContext, SidecarResult, Delegate);
			Helper->Start();
		}
		else
		{
			Delegate.ExecuteIfBound(bSuccess, SidecarResult);
		}
	}

protected:
	FAuthContextPtr AuthContext;
	FRH_ServerBootstrapSidecarDelegate Delegate;

	FRH_SidecarResult SidecarResult;
};

class FRH_ServerBootstrappingSidecarScripted : public FRH_ServerBootstrappingSidecar, FTickableGameObject
{
public:
	FRH_ServerBootstrappingSidecarScripted(FAuthContextPtr InAuthContext, FRH_ServerBootstrapSidecarDelegate InDelegate)
		: FRH_ServerBootstrappingSidecar(InAuthContext, InDelegate)
	{
		Proc.Reset();
		InputPipeRead = nullptr;
		InputPipeWrite = nullptr;
		OutputPipeRead = nullptr;
		OutputPipeWrite = nullptr;
	}

	void Start()
	{
		Started();

		if (!FParse::Value(FCommandLine::Get(), TEXT("rhsidecarscript="), ScriptFilePath))
		{
			Failed(TEXT("Sidecar helper did not find script file parameter"));
			return;
		}

		if (!FPaths::FileExists(*ScriptFilePath))
		{
			FString ErrorMsg = FString::Printf(TEXT("Specified sidecar file %s cannot be found"), *ScriptFilePath);
			Failed(*ErrorMsg);
			return;
		}

		// build command line parameters
		FString Params = FString::Printf(TEXT("%s"),
			FCommandLine::Get()
		);

		verify(FPlatformProcess::CreatePipe(InputPipeRead, InputPipeWrite));
		verify(FPlatformProcess::CreatePipe(OutputPipeRead, OutputPipeWrite));

		Proc = FPlatformProcess::CreateProc(*ScriptFilePath, *Params, true, false, false, nullptr, -1, nullptr, OutputPipeWrite, InputPipeRead);

		// Failed to start the sidecar process
		if (!Proc.IsValid())
		{
			FPlatformProcess::ClosePipe(InputPipeRead, InputPipeWrite);
			FPlatformProcess::ClosePipe(OutputPipeRead, OutputPipeWrite);
			Failed(TEXT("Could not create sidecar process"));
			return;
		}
	}

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime)
	{
		if (RallyHere::TermSignalHandler::HasReceivedTermSignal())
		{
			Failed(TEXT("Polling abort was requested"));
		}
		else if (FPlatformProcess::IsProcRunning(Proc))
		{
			// todo - logging?
			OutProcOutput += FPlatformProcess::ReadPipe(OutputPipeRead);
		}
		else
		{
			// final read
			OutProcOutput += FPlatformProcess::ReadPipe(OutputPipeRead);

			int ReturnCode = -1;
			FPlatformProcess::GetProcReturnCode(Proc, &ReturnCode);

			FPlatformProcess::ClosePipe(InputPipeRead, InputPipeWrite);
			FPlatformProcess::ClosePipe(OutputPipeRead, OutputPipeWrite);
			FPlatformProcess::CloseProc(Proc);

			Proc.Reset();
			
			if (ReturnCode != 0)
			{
				FString ErrorMsg = FString::Printf(TEXT("Sidecar process had return code %d and output\n%s"), ReturnCode, *OutProcOutput);
				Failed(*ErrorMsg);
				return;
			}

			ProcessOutput();
		}
	}

	void ProcessOutput()
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] sidecar generated output:\n%s"), *GetName(), *OutProcOutput);

		if (OutProcOutput.Len() == 0 || OutProcOutput == TEXT("null"))
		{
			FString ErrorMsg = FString::Printf(TEXT("Invalid result from sidecar {%s}"), *OutProcOutput);
			Failed(*ErrorMsg);
			return;
		}

		TSharedPtr<FJsonValue> JsonValue;
		auto Reader = TJsonReaderFactory<>::Create(OutProcOutput);

		const TSharedPtr<FJsonObject>* TLO;
		if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid() && JsonValue->TryGetObject(TLO))
		{
			FString temp;
			if ((*TLO)->TryGetStringField(TEXT("AllocationId"), temp))
			{
				SidecarResult.AllocationId = temp;
			}
			if ((*TLO)->TryGetStringField(TEXT("SessionId"), temp))
			{
				SidecarResult.SessionId = temp;
			}
		}
		else
		{
			FString ErrorMsg = FString::Printf(TEXT("Sidecar result could not be parsed as JSON {%s}"), *OutProcOutput);
			Failed(*ErrorMsg);
			return;
		}

		Completed(SidecarResult.IsValid());
	}

	virtual void Cleanup() override
	{
		if (Proc.IsValid())
		{
			FPlatformProcess::ClosePipe(InputPipeRead, InputPipeWrite);
			FPlatformProcess::ClosePipe(OutputPipeRead, OutputPipeWrite);
			FPlatformProcess::TerminateProc(Proc, true);
			FPlatformProcess::CloseProc(Proc);

			Proc.Reset();
		}
	}

	virtual bool IsTickable() const { return Proc.IsValid(); }
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_SidecarHelper, STATGROUP_TaskGraphTasks); }

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerBootstrappingSidecarScripted"));
		return Name;
	}

protected:
	FString ScriptFilePath;

	FProcHandle Proc;
	void* InputPipeRead;
	void* InputPipeWrite;
	void* OutputPipeRead;
	void* OutputPipeWrite;

	FString OutProcOutput;
};


class FRH_ServerBootstrappingSidecarAutoCreate : public FRH_ServerBootstrappingSidecar
{
	typedef RallyHereAPI::Traits_CreateOrJoinSession BaseType;
public:
	FRH_ServerBootstrappingSidecarAutoCreate(FAuthContextPtr InAuthContext, FRH_ServerBootstrapSidecarDelegate InDelegate)
		: FRH_ServerBootstrappingSidecar(InAuthContext, InDelegate)
	{
	}

	void Start(const FString& InSessionType)
	{
		Started();
		SessionType = InSessionType;

		if (AuthContext.IsValid())
		{
			BaseType::Request Request;
			Request.AuthContext = AuthContext;
			Request.CreateOrJoinRequest.SessionType = SessionType;
			Request.CreateOrJoinRequest.ClientVersion = URH_JoinedSession::GetClientVersionForSession();
			Request.CreateOrJoinRequest.ClientSettings.PlatformId = ERHAPI_PlatformID::Basic;
			Request.CreateOrJoinRequest.ClientSettings.Input = URH_JoinedSession::GetClientInputTypeForSession();

			HttpRequest = BaseType::DoCall(RH_APIs::GetSessionAPI(), Request, BaseType::Delegate::CreateSP(this, &FRH_ServerBootstrappingSidecarAutoCreate::OnCreated));
			if (!HttpRequest)
			{
				Failed(TEXT("Could not create http request"));
			}
		}
		else
		{
			Failed(TEXT("Improper Session Owner or Auth Context"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerBootstrappingSidecarAutoCreate"));
		return Name;
	}

protected:
	void OnCreated(const BaseType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful())
		{
			// set our new session id
			SidecarResult.SessionId = Resp.Content.SessionId;

			Completed(SidecarResult.IsValid());
		}
		else
		{
			Failed(TEXT("Request Failed"));
		}
	}

	FHttpRequestPtr HttpRequest;
	FString SessionType;
};


class FRH_ServerBootstrappingSidecarSIC : public FRH_ServerBootstrappingSidecar, FTickableGameObject
{
public:
	FRH_ServerBootstrappingSidecarSIC(FAuthContextPtr AuthContext, FRH_ServerBootstrapSidecarDelegate InDelegate)
		: FRH_ServerBootstrappingSidecar(AuthContext, InDelegate)
		, bHasRegistered(false)
		, NextPollTime(FDateTime())
		, PollInterval(FTimespan::FromSeconds(GetDefault<URH_SidecarSettings>()->PollIntervalSidecar))
		, PollCount(0)
		, PollLogInterval(GetDefault<URH_SidecarSettings>()->PollLogIntervalSidecar)
		, BindAddress(TEXT("0.0.0.0"))
		, BindPort(0)
	{
	}

	void Start()
	{
		Started();

		// SIC Login values
		// require file credential for now to parallel SIC.  Change later
		FString credFile;
		if (!FParse::Value(FCommandLine::Get(), TEXT("rhSICcredentialsfile="), credFile))
		{
			if (!FParse::Value(FCommandLine::Get(), TEXT("rhcredentialsfile="), credFile))
			{
				Failed(TEXT("No rhcredentialsfile specified on commandline"));
				return;
			}
		}

		TArray<FString> FileContentLines;
		if (!FFileHelper::LoadFileToStringArray(FileContentLines, *credFile))
		{
			Failed(FString::Printf(TEXT("Could not load specified credential file %s"), *credFile));
			return;
		}

		if (FileContentLines.Num() != 2)
		{
			Failed(FString::Printf(TEXT("Specified credential file %s was loaded but had invalid number of lines %d"), *credFile, FileContentLines.Num()));
			return;
		}

		//First line is username
		APIUserName = FileContentLines[0];
		APIPassword = FileContentLines[1];

		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Loaded rhapi username from file: %s"), *GetName(), *APIUserName);

		// SIC registration values
		if (!FParse::Value(FCommandLine::Get(), TEXT("rhsicprofileid="), SICProfileId))
		{
			Failed(TEXT("Could not parse SIC profile id from commandline"));
			return;
		}

		SICServerId = FPlatformProcess::ComputerName();
		SICHostname = FPlatformProcess::ComputerName();
		FParse::Value(FCommandLine::Get(), TEXT("rhsicserverid="), SICServerId);
		FParse::Value(FCommandLine::Get(), TEXT("rhsichostname="), SICHostname);

		if (!FParse::Value(FCommandLine::Get(), TEXT("PORT="), BindPort)) // mirrors default unreal handling, may require change
		{
			BindPort = 7777;
		}
		if (!FParse::Value(FCommandLine::Get(), TEXT("MULTIHOME="), BindAddress)) // mirrors default unreal handling, may require change
		{
			BindAddress = TEXT("0.0.0.0"); // todo - borrowing this from existing behavior, REVISIT
		}

		if (!FParse::Value(FCommandLine::Get(), TEXT("rhsicid="), SICInstanceId))
		{
			SICInstanceId = FString::Printf(TEXT("sic_%s_%d"), *SICServerId, BindPort);
		}

		if (!FParse::Value(FCommandLine::Get(), TEXT("rhsicgrouptags="), SICGroupTags))
		{
			SICGroupTags = FString::Printf(TEXT("profile_id:%s,server_id:%s,hostname:%s"), *SICProfileId, *SICServerId, *SICHostname);
		}

		BeginSICLogin();
	}

protected:

	// This sidecar does its own login, for proving reasons and because later on SIC will use a different authentication setup within the sidecar
	void BeginSICLogin()
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] attempting login to SIC"), *GetName());

		// clear our access token (but NOT our refresh token, as we may be refreshing a login)
		AccessToken.Reset();

		HttpRequest = GenerateLoginRequest();

		if (!HttpRequest)
		{
			Failed(TEXT("Failed to create login request"));
			return;
		}

		HttpRequest->OnProcessRequestComplete().BindSP(this, &FRH_ServerBootstrappingSidecarSIC::OnSICLoginComplete);
		HttpRequest->ProcessRequest();
	}


	FHttpRequestPtr GenerateLoginRequest() const
	{
		FString baseURL = FRallyHereIntegrationModule::Get().GetBaseURL();
		FString path = TEXT("/users/v1/login");

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->SetURL(baseURL + path);
		Request->SetVerb(TEXT("POST"));
		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		
		// make the body content JSON data
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		Writer->WriteObjectStart();
		{
			Writer->WriteValue(TEXT("include_refresh"), true);
			Writer->WriteValue(TEXT("accept_eula"), true);
			Writer->WriteValue(TEXT("accept_tos"), true);
			Writer->WriteValue(TEXT("accept_privacy_policy"), true);
			
			if (RefreshToken.IsSet() && RefreshToken->Len() > 0)
			{
				Writer->WriteValue(TEXT("grant_type"), TEXT("refresh"));
				Writer->WriteValue(TEXT("portal_access_token"), RefreshToken.GetValue());
			}
			else
			{
				Writer->WriteValue(TEXT("grant_type"), TEXT("basic"));
				Writer->WriteValue(TEXT("portal_access_token"), FString::Printf(TEXT("%s:%s"), *APIUserName, *APIPassword));
			}
		}
		Writer->WriteObjectEnd();

		Writer->Close();
		Request->SetContentAsString(JsonBody);

		return Request;
	}


	void OnSICLoginComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSucceeded)
	{
		FString PreprocessErrorMsg;
		TSharedPtr<FJsonObject> TLObject;

		if (!PreprocessResponseToJson(TEXT("Login"), Response, bSucceeded, TLObject, PreprocessErrorMsg, false))
		{
			if (PreprocessErrorMsg.Len() > 0)
			{
				Failed(PreprocessErrorMsg);
			}
			return;
		}

		FString AccessTokenTemp;
		FString RefreshTokenTemp;
		if (TLObject->TryGetStringField(TEXT("access_token"), AccessTokenTemp) && TLObject->TryGetStringField(TEXT("refresh_token"), RefreshTokenTemp))
		{
			AccessToken = AccessTokenTemp;
			RefreshToken = RefreshTokenTemp;

			if (!bHasRegistered)
			{
				UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] SIC login complete, continuing to registration"), *GetName());
				Register();
			}
			else
			{
				// do not do an immediate poll, as that could cause a spam loop if the failure is retrying repeatedly
				UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] SIC login complete, resuming poll loop"), *GetName());
				SetNextPollTime();
			}
		}
		else
		{
			// clear out stored tokens
			AccessToken.Reset();
			RefreshToken.Reset();

			Failed(TEXT("Login Response did not have valid access and refresh tokens"));
		}
		
	}

	void Register()
	{
		HttpRequest = GenerateRegistrationRequest();

		HttpRequest->OnProcessRequestComplete().BindSP(this, &FRH_ServerBootstrappingSidecarSIC::OnRegisterComplete);
		HttpRequest->ProcessRequest();
	}

	FHttpRequestPtr GenerateRegistrationRequest() const
	{
		FString baseURL = FRallyHereIntegrationModule::Get().GetBaseURL();
		FString path = TEXT("/instances/sic_registration/v3/register");

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->SetURL(baseURL + path);
		Request->SetVerb(TEXT("POST"));
		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		if (AccessToken.IsSet())
		{
			Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + AccessToken.GetValue());
		}
		else
		{
			// if it is not set here, that is probably an error, but let the request fail out?
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] registration request but no valid access token"), *GetName());
		}

		// Request tiemouts are only supported in UE5
#if RH_FROM_ENGINE_VERSION(5, 0)
		Request->SetTimeout(5.f);
#endif

		// make the body content JSON data
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		Writer->WriteObjectStart();
		{
			Writer->WriteArrayStart(TEXT("items"));
			{
				Writer->WriteObjectStart();
				{
					static FString DEALLOCATED = TEXT("deallocated");
					Writer->WriteValue(TEXT("allocation_state"), DEALLOCATED);
					Writer->WriteValue(TEXT("group_tags"), SICGroupTags);

					Writer->WriteValue(TEXT("id"), SICInstanceId);

					Writer->WriteValue(TEXT("public_host"), *BindAddress);
					Writer->WriteValue(TEXT("public_port"), BindPort);
				}
				Writer->WriteObjectEnd();
			}
			Writer->WriteArrayEnd();
		}
		Writer->WriteObjectEnd();

		Writer->Close();
		Request->SetContentAsString(JsonBody);

		return Request;
	}

	void OnRegisterComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSucceeded)
	{
		FString PreprocessErrorMsg;
		TSharedPtr<FJsonObject> TLObject;

		if (!PreprocessResponseToJson(TEXT("Register"), Response, bSucceeded, TLObject, PreprocessErrorMsg))
		{
			if (PreprocessErrorMsg.Len() > 0)
			{
				Failed(PreprocessErrorMsg);
			}
			return;
		}

		const TArray<TSharedPtr<FJsonValue>>* ItemsArrayValues;
		if (!TLObject->TryGetArrayField(TEXT("items"), ItemsArrayValues) || ItemsArrayValues == nullptr || (*ItemsArrayValues).Num() == 0)
		{
			Failed(TEXT("Registration response JSON did not have items member"));
			return;
		}

		auto& ItemsObject = (*ItemsArrayValues)[0]->AsObject();
		if (!ItemsObject.IsValid())
		{
			Failed(TEXT("Registration response JSON items did not have an object member"));
			return;
		}

		bool bSuccess = false;
		if (!ItemsObject->TryGetBoolField(TEXT("success"), bSuccess))
		{
			Failed(TEXT("Registration response JSON did not have success member"));
			return;
		}
					
		if (bSuccess)
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Registration successful, starting poll"), *GetName());
			bHasRegistered = true;
			SetNextPollTime();
		}
		else
		{
			// This is the error code on the API that corresponds to us being in the middle of an allocation
			const int REGISTER_ALLOCATING = 6;

			int32 errorCode = 0;
			FString errorMessage;

			if (ItemsObject->TryGetNumberField(TEXT("error_code"), errorCode)
				&& ItemsObject->TryGetStringField(TEXT("error_message"), errorMessage))
			{
				if (errorCode == REGISTER_ALLOCATING)
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("Registration found already in allocating state, starting poll"));
					bHasRegistered = true;
					SetNextPollTime();
				}
				else
				{
					FString ErrorMsg = FString::Printf(TEXT("Registration response was not succesful with error code [%d] and message [%s]"), errorCode, *errorMessage);
					Failed(*ErrorMsg);
				}
			}
			else
			{
				FString ErrorMsg = FString::Printf(TEXT("Registration response was not succesful and was not in allocating state, and could not determine error code/message"));
				Failed(*ErrorMsg);
			}
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

	void Poll()
	{
		if ((PollCount % PollLogInterval) == 0)
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Polling for allocation/session [%d]"), *GetName(), PollCount);
		}

		PollCount++;

		HttpRequest = GeneratePollRequest();

		HttpRequest->OnProcessRequestComplete().BindSP(this, &FRH_ServerBootstrappingSidecarSIC::OnPollComplete);
		HttpRequest->ProcessRequest();
	}

	FHttpRequestPtr GeneratePollRequest() const
	{
		FString baseURL = FRallyHereIntegrationModule::Get().GetBaseURL();
		FString path = TEXT("/instances/sic_registration/v1/state");

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->SetURL(baseURL + path);
		Request->SetVerb(TEXT("POST"));
		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		if (AccessToken.IsSet())
		{
			Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + AccessToken.GetValue());
		}
		else
		{
			// if it is not set here, that is probably an error, but let the request fail out?
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] poll request but no valid access token"), *GetName());
		}

		// Request tiemouts are only supported in UE5
#if RH_FROM_ENGINE_VERSION(5, 0)
		Request->SetTimeout(5.f);
#endif

		// make the body content JSON data
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		Writer->WriteObjectStart();
		{
			Writer->WriteArrayStart(TEXT("items"));
			{
				Writer->WriteObjectStart();
				{
					Writer->WriteValue(TEXT("id"), SICInstanceId);
				}
				Writer->WriteObjectEnd();
			}
			Writer->WriteArrayEnd();
		}
		Writer->WriteObjectEnd();

		Writer->Close();
		Request->SetContentAsString(JsonBody);

		return Request;
	}

	void OnPollComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSucceeded)
	{
		FString PreprocessErrorMsg;
		TSharedPtr<FJsonObject> TLObject;

		if (!PreprocessResponseToJson(TEXT("Poll"), Response, bSucceeded, TLObject, PreprocessErrorMsg))
		{
			if (PreprocessErrorMsg.Len() > 0)
			{
				Failed(PreprocessErrorMsg);
			}
			return;
		}

		const TArray<TSharedPtr<FJsonValue>>* ItemsArrayValues;
		if (!TLObject->TryGetArrayField(TEXT("items"), ItemsArrayValues) || ItemsArrayValues == nullptr || (*ItemsArrayValues).Num() == 0)
		{
			Failed(TEXT("Poll response JSON did not have items member"));
			return;
		}

		auto& ItemsObject = (*ItemsArrayValues)[0]->AsObject();
		if (!ItemsObject.IsValid())
		{
			Failed(TEXT("Poll response JSON items did not have an object member"));
			return;
		}

		bool bSuccess = false;
		if (!ItemsObject->TryGetBoolField(TEXT("success"), bSuccess))
		{
			Failed(TEXT("Poll response JSON did not have success member"));
			return;
		}
				
		if (bSuccess)
		{
			FString state;
			if (!ItemsObject->TryGetStringField(TEXT("state"), state))
			{
				FString ErrorMsg = FString::Printf(TEXT("Poll response was successful but could not determine state "));
				Failed(*ErrorMsg);
				return;
			}

			static FString ALLOCATED = TEXT("allocated");
			static FString ALLOCATING = TEXT("allocating");
			static FString DEALLOCATED = TEXT("deallocated");

			if (state == ALLOCATING || state == ALLOCATED)
			{
				FString temp;

				// pull allocation id
				if (!ItemsObject->TryGetStringField(TEXT("allocation_id"), temp))
				{
					UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Poll response was successful and had an allocating state but no allocation id"), *GetName());
					SetNextPollTime();
				}
				else
				{
					SidecarResult.AllocationId = temp;
					UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Poll response was successful and has allocation id %s"), *GetName(), *SidecarResult.AllocationId.GetValue());
					
					if (ItemsObject->TryGetStringField(TEXT("session_id"), temp))
					{
						SidecarResult.SessionId = temp;
					}

					Completed(SidecarResult.IsValid());
				}

			}
			else if (state == DEALLOCATED)
			{
				// still waiting on allocation
				SetNextPollTime();
			}
			else
			{
				FString ErrorMsg = FString::Printf(TEXT("Poll response was successful but had unknown state %s"), *state);
				Failed(*ErrorMsg);
			}
		}
		else
		{
			FString errorMessage;

			if (ItemsObject->TryGetStringField(TEXT("error_message"), errorMessage))
			{
				FString ErrorMsg = FString::Printf(TEXT("Poll response was not succesful with message [%s]"), *errorMessage);
				Failed(*ErrorMsg);
			}
			else
			{
				FString ErrorMsg = FString::Printf(TEXT("Poll response was not succesful and could not determine message"));
				Failed(*ErrorMsg);
			}
		}
	}

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime)
	{
		if (RallyHere::TermSignalHandler::HasReceivedTermSignal())
		{
			Failed(TEXT("Polling abort was requested"));
		}
		else if (FDateTime::Now() > NextPollTime && NextPollTime.GetTicks() > 0)
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


	// returns whether to continue processing (note - may not have an error but not continue, such as in a relogin case
	bool PreprocessResponseToJson(const FString& ResponseIdentifier, FHttpResponsePtr Response, bool bSucceeded, TSharedPtr<FJsonObject>& TLObject, FString& ErrorMsg, bool bAllowRefresh = true)
	{
		// clear out our local storage
		HttpRequest = nullptr;

		if (!Response.IsValid())
		{
			ErrorMsg = FString::Printf(TEXT("Invalid response from %s"), *ResponseIdentifier);
			return false;
		}

		FString ContentType = Response->GetContentType();
		ContentType.TrimStartAndEndInline();
		if (!ContentType.StartsWith(TEXT("application/json")) && !ContentType.StartsWith(TEXT("text/json")))
		{
			ErrorMsg = FString::Printf(TEXT("%s response content type is not json, was %s instead"), *ResponseIdentifier, *ContentType);
			return false;
		}

		const auto Content = Response->GetContentAsString();
		TSharedPtr<FJsonValue> JsonValue;
		const auto Reader = TJsonReaderFactory<>::Create(Content);
		const TSharedPtr<FJsonObject>* JsonObjectTemp = nullptr;

		if (!FJsonSerializer::Deserialize(Reader, JsonValue) || !JsonValue.IsValid() || !JsonValue->TryGetObject(JsonObjectTemp) || JsonObjectTemp == nullptr)
		{
			ErrorMsg = FString::Printf(TEXT("%s response content could not be deserialized:\n%s"), *ResponseIdentifier, *Content);
			return false;
		}

		TLObject = *JsonObjectTemp;

		if (!bSucceeded || (EHttpResponseCodes::Type)Response->GetResponseCode() != EHttpResponseCodes::Ok)
		{
			// check for the case of a token expiration, and relogin in that case
			bool bAuthSuccess = false;
			if (bAllowRefresh && TLObject->TryGetBoolField(TEXT("auth_success"), bAuthSuccess) && !bAuthSuccess)
			{
				// token appears to have expired
				UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] %s received error with auth_success=false, attempting to refresh login"), *GetName(), *ResponseIdentifier);
				BeginSICLogin();
				return false;
			}
			else
			{
				ErrorMsg = FString::Printf(TEXT("%s HTTP request failed with code [%d]:\n%s"), *ResponseIdentifier, Response->GetResponseCode(), *Response->GetContentAsString());
				return false;
			}
		}

		return true;
	}


	virtual bool IsTickable() const { return NextPollTime.GetTicks() > 0; }
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_SICHelper, STATGROUP_TaskGraphTasks); }

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerBootstrappingSidecarSIC"));
		return Name;
	}

protected:
	FHttpRequestPtr HttpRequest;

	FString APIUserName;
	FString APIPassword;
	TOptional<FString> AccessToken;
	TOptional<FString> RefreshToken;

	bool bHasRegistered;
	FDateTime NextPollTime;
	FTimespan PollInterval;
	int32 PollCount;
	int32 PollLogInterval;

	FString BindAddress;
	int32 BindPort;

	FString SICInstanceId;
	FString SICProfileId;
	FString SICServerId;
	FString SICHostname;
	FString SICGroupTags;
};


class FRH_ServerBootstrappingSidecarMultiplay : public FRH_ServerBootstrappingSidecar, FTickableGameObject
{
public:
	FRH_ServerBootstrappingSidecarMultiplay(FAuthContextPtr AuthContext, FRH_ServerBootstrapSidecarDelegate InDelegate)
		: FRH_ServerBootstrappingSidecar(AuthContext, InDelegate)
		, NextPollTime(FDateTime())
		, PollInterval(FTimespan::FromSeconds(GetDefault<URH_SidecarSettings>()->PollIntervalSidecar))
		, PollCount(0)
		, PollLogInterval(GetDefault<URH_SidecarSettings>()->PollLogIntervalSidecar)
	{
	}

	void Start()
	{
		Started();

		if (!FParse::Value(FCommandLine::Get(), TEXT("rhmultiplayfile="), MultiplayFilePath))
		{
			Failed("Multiplay file not specified on commandline");
			return;
		}

		// immediate poll, in case allocation happened during boot
		Poll();
	}

protected:

	void SetNextPollTime()
	{
		NextPollTime = FDateTime::Now() + PollInterval;
	}
	void ResetNextPollTime()
	{
		NextPollTime = FDateTime();
	}

	void Poll()
	{
		if ((PollCount % PollLogInterval) == 0)
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Polling for allocation/session [%d]"), *GetName(), PollCount);
		}

		PollCount++;

		// read file
		FString MultiplayFileAsString;
		if (!FFileHelper::LoadFileToString(MultiplayFileAsString, *MultiplayFilePath))
		{
			// file does not exist, set next poll time
			SetNextPollTime();
			return;
		}
		else if (MultiplayFileAsString.Len() == 0)
		{
			// file exists but is empty, set next poll time
			SetNextPollTime();
			return;
		}

		TSharedPtr<FJsonValue> JsonValue;
		const auto Reader = TJsonReaderFactory<>::Create(MultiplayFileAsString);
		const TSharedPtr<FJsonObject>* JsonObjectTemp = nullptr;

		if (!FJsonSerializer::Deserialize(Reader, JsonValue) || !JsonValue.IsValid() || !JsonValue->TryGetObject(JsonObjectTemp) || JsonObjectTemp == nullptr)
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not deserialize Multiplay file %s to JSON:\n%s"), *GetName(), *MultiplayFilePath, *MultiplayFileAsString);
			// file exists and has json, but no valid ids, set next poll time
			SetNextPollTime();
			return;
		}

		const TSharedPtr<FJsonObject> TLObject = *JsonObjectTemp;

		FString AllocationIdTemp;
		// read multiplay session id if we can, which is our allocation id
		if (TLObject->TryGetStringField(TEXT("SessionId"), AllocationIdTemp))
		{
			// if we get a valid allocation id, we are done
			if (AllocationIdTemp.Len() > 0)
			{
				SidecarResult.AllocationId = AllocationIdTemp;

				Completed(SidecarResult.IsValid());
				return;
			}
		}

		// we read the file, but it did not have a valid session id, continue polling
		SetNextPollTime();
	}

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime)
	{
		if (RallyHere::TermSignalHandler::HasReceivedTermSignal())
		{
			Failed(TEXT("Polling abort was requested"));
		}
		else if (FDateTime::Now() > NextPollTime && NextPollTime.GetTicks() > 0)
		{
			ResetNextPollTime();
			Poll();
		}
	}

	virtual bool IsTickable() const { return NextPollTime.GetTicks() > 0; }
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_MultiplayHelper, STATGROUP_TaskGraphTasks); }

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerBootstrappingSidecarMultiplay"));
		return Name;
	}

protected:
	FDateTime NextPollTime;
	FTimespan PollInterval;
	int32 PollCount;
	int32 PollLogInterval;

	FString MultiplayFilePath;
};