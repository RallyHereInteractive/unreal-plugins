// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_LocalPlayerLoginSubsystem.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "Misc/ConfigCacheIni.h"
#include "RallyHereIntegrationModule.h"
#include "OnlineSubsystem.h"
#include "Online.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "WebAuthModule.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Misc/CommandLine.h"
#include "Misc/CoreDelegates.h"
#include "Async/TaskGraphInterfaces.h"
#include "UObject/Package.h"
#include "Interfaces/IAnalyticsProvider.h"
#include "RH_Events.h"

FString ToString(ERHAPI_LoginResult Val)
{
    return RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_LoginResult", Val);
}

FString ToString(ERHAPI_LocalPlayerLoginOSS Val)
{
    return RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_LocalPlayerLoginOSS", Val);
}

void URH_LocalPlayerLoginSubsystem::Initialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
}

void URH_LocalPlayerLoginSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
}

bool OSSCannotRelogin(FName OSSName)
{
	return OSSName == EOS_SUBSYSTEM;
}

FString URH_LocalPlayerLoginSubsystem::GetSavedCredentialEnvironment(FName OSSName) const
{
    return SavedCredentialPrefix
        + TEXT("__") + OSSName.ToString()
        + TEXT("__") + FPlatformProcess::ExecutableName()
        + TEXT("__") + FRallyHereIntegrationModule::Get().GetEnvironmentId()
        + TEXT("__") + FRallyHereIntegrationModule::Get().GetBaseURL();
}

bool URH_LocalPlayerLoginSubsystem::ShouldUseSavedCredentials() const
{
    if (!bLoginAllowStoredRefreshToken)
    {
        return false;
    }

    for (const auto& Key : IgnoreSavedCredentialsCommandLineKeys)
    {
        bool bIgnore;
        if (FParse::Bool(FCommandLine::Get(), *Key, bIgnore) && bIgnore)
        {
            return false;
        }
    }

    return true;
}

IOnlineSubsystem* URH_LocalPlayerLoginSubsystem::GetLoginOSS() const
{
    return GetLocalPlayerSubsystem()->GetOSS(LoginOSSName);
}

IOnlineSubsystem* URH_LocalPlayerLoginSubsystem::GetNicknameOSS() const
{
    if (NicknameOSSName.IsNone())
    {
        return GetLoginOSS();
    }
    return GetLocalPlayerSubsystem()->GetOSS(NicknameOSSName);
}

IOnlineSubsystem* URH_LocalPlayerLoginSubsystem::GetOSS(ERHAPI_LocalPlayerLoginOSS OSSType) const
{
    switch (OSSType)
    {
    case ERHAPI_LocalPlayerLoginOSS::Login:
        return GetLoginOSS();
    case ERHAPI_LocalPlayerLoginOSS::Nickname:
        return GetNicknameOSS();
    default:
        return nullptr;
    }
}

FRH_LoginResult URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::CreateResult(ERHAPI_LoginResult ResultType) const
{
    FRH_LoginResult Result{};
    Result.Result = ResultType;
    Result.OSSType = LoginPhase;
    Result.OSSUniqueId = OSSUniqueId;
    Result.NicknameOSSUniqueId = NicknameOSSUniqueId;
    return Result;
}

void URH_LocalPlayerLoginSubsystem::PostResults(FRH_PendingLoginRequest& Req, const FRH_LoginResult& Res)
{
    switch (Res.Result)
    {
    case ERHAPI_LoginResult::Fail_OSSLogin:
    case ERHAPI_LoginResult::Fail_OSSNeedsProfile:
    case ERHAPI_LoginResult::Fail_RHDenied:
    case ERHAPI_LoginResult::Fail_RHUnknown:
        if (ShouldUseSavedCredentials() && FWebAuthModule::Get().IsAvailable())
        {
            const auto LoginOSS = GetLoginOSS();

            if (LoginOSS != nullptr)
            {
                // If this was a refresh token login that failed, then whatever refresh data we have is invalid.
                // Clear that data, run a logout (so the user must login again), and run through the process again.
                FWebAuthModule::Get().GetWebAuth().SaveCredentials(Req.OSSUniqueId->ToString(), FString{},
                                                                   GetSavedCredentialEnvironment(LoginOSS->GetInstanceName()));
            }

            if (bLogoutAndRetryLoginIfRefreshLoginFailed && !Req.CredentialRefreshToken.IsEmpty())
            {
                const auto Identity = LoginOSS ? LoginOSS->GetIdentityInterface() : nullptr;
                if (Identity.IsValid() && Identity->Logout(
                    GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId()))
                {
                    UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Logged out and retrying login"),
                           ANSI_TO_TCHAR(__FUNCTION__));
                    Req.CredentialRefreshToken.Empty();
                    DoLoginOSSLogin(Req);
                    return;
                }
            }
        }
        break;
    }

	// update analytics provider before triggering callbacks, so that any callbacks that trigger analytics events will be recorded with the new player id
	auto* LPSubsystem = GetLocalPlayerSubsystem();
	if (LPSubsystem != nullptr && LPSubsystem->GetAnalyticsProvider().IsValid())
	{
		auto* AnalyticsProvider = LPSubsystem->GetAnalyticsProvider().Get();

		// use local player subsystem accessor for ease of use, rather than cracking auth context ourselves
		FGuid PlayerUuid = LPSubsystem->GetPlayerUuid();
		AnalyticsProvider->SetUserID(PlayerUuid.IsValid() ? PlayerUuid.ToString(EGuidFormats::DigitsWithHyphens) : TEXT(""));

		RHStandardEvents::FLoginCompleteEvent Event;

		// pull platform user id and platform id from local player subsystem
		Event.PlatformId = EnumToString(LPSubsystem->GetPlayerPlatformId().PlatformType);
		Event.PlatformUserId = LPSubsystem->GetPlayerPlatformId().UserId;
		Event.Status = RH_GETENUMSTRING("/Script/RallyhereIntegration", "ERHAPI_LoginResult", Res.Result);
		Event.Reason = Res.OSSErrorMessage.Len() > 0 ? Res.OSSErrorMessage : Res.RallyHereErrorCode;

		// TODO: add timing

		const auto AuthContext = LPSubsystem->GetAuthContext();
		const auto RHLoginResult = AuthContext->GetLoginResult();
		if (RHLoginResult.IsSet())
		{
			if (RHLoginResult->GetDisplayNameOrNull() != nullptr)
			{
				Event.PlatformDisplayName = *RHLoginResult->GetDisplayNameOrNull();
			}
			if (RHLoginResult->GetPersonIdOrNull() != nullptr)
			{
				Event.PersonId = *RHLoginResult->GetPersonIdOrNull()->ToString(EGuidFormats::DigitsWithHyphens);
			}
		}

		Event.EmitTo(AnalyticsProvider);
	}

	if (Res.Result == ERHAPI_LoginResult::Success)
	{
		LastSuccessfulLoginRequest = Req;
	}
	else
	{
		LastSuccessfulLoginRequest.Reset();
	}

    Req.OnLoginComplete.ExecuteIfBound(Res);

	SCOPED_NAMED_EVENT(RallyHere_BroadcastOnLoginComplete, FColor::Purple);
	OnLoginComplete.Broadcast(Res);
	BLUEPRINT_OnLoginComplete.Broadcast(Res);
}

void URH_LocalPlayerLoginSubsystem::SubmitAutoLogin(bool bAcceptEULA, bool bAcceptTOS, bool bAcceptPP,
                                                    const FRH_OnLoginComplete& OnLoginCompleteDelegate)
{
    FOnlineAccountCredentials Credentials;
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_TYPE="), Credentials.Type);
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), Credentials.Id);
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_PASSWORD="), Credentials.Token);

    const auto LoginOSS = GetLoginOSS();
    if (LoginOSS && LoginOSS->GetSubsystemName() == SWITCH_SUBSYSTEM)
    {
        Credentials.Type = TEXT("NintendoAccount");
    }

    FString SavedUserId, SavedRefreshToken;
    if (ShouldUseSavedCredentials() && FWebAuthModule::Get().IsAvailable())
    {
        if (LoginOSS && FWebAuthModule::Get().GetWebAuth().LoadCredentials(SavedUserId, SavedRefreshToken,
                                                               GetSavedCredentialEnvironment(LoginOSS->GetInstanceName())))
        {
            Credentials.Id = SavedUserId;
        }
        else
        {
            SavedRefreshToken.Empty();
        }
    }

    SubmitLogin(Credentials, SavedRefreshToken, bAcceptEULA, bAcceptTOS, bAcceptPP, OnLoginCompleteDelegate);
}

void URH_LocalPlayerLoginSubsystem::ResubmitLastSuccessfulLogin(const FRH_OnLoginComplete& OnLoginCompleteDelegate)
{
	if (LastSuccessfulLoginRequest.IsSet())
	{
		SubmitLogin(LastSuccessfulLoginRequest->Credentials, LastSuccessfulLoginRequest->CredentialRefreshToken,
			LastSuccessfulLoginRequest->bAcceptEULA, LastSuccessfulLoginRequest->bAcceptTOS,
			LastSuccessfulLoginRequest->bAcceptPP, OnLoginCompleteDelegate);
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] No last successful login to resubmit"), ANSI_TO_TCHAR(__FUNCTION__));

		FRH_PendingLoginRequest Req;
		Req.LoginPhase = ERHAPI_LocalPlayerLoginOSS::Login;
		Req.OnLoginComplete = OnLoginCompleteDelegate;

		PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_ReloginWithoutSavedCredentials));
	}
}

void URH_LocalPlayerLoginSubsystem::SubmitLogin(const FOnlineAccountCredentials& Credentials,
                                                FString CredentialRefreshToken, bool bAcceptEULA, bool bAcceptTOS,
                                                bool bAcceptPP, FRH_OnLoginComplete OnLoginCompleteDelegate)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// inform analytics we are about to start a login attempt
	auto* LPSubsystem = GetLocalPlayerSubsystem();
	if (LPSubsystem != nullptr && LPSubsystem->GetAnalyticsProvider().IsValid())
	{
		auto* AnalyticsProvider = LPSubsystem->GetAnalyticsProvider().Get();

		// todo - see if we can look up display name here
		RHStandardEvents::FLoginStartEvent::Emit(AnalyticsProvider, TOptional<FString>());
	}

    FRH_PendingLoginRequest Req;
    Req.LoginPhase = ERHAPI_LocalPlayerLoginOSS::Login;
    Req.Credentials = Credentials;
    Req.CredentialRefreshToken = MoveTemp(CredentialRefreshToken);
    Req.bAcceptEULA = bAcceptEULA;
    Req.bAcceptTOS = bAcceptTOS;
    Req.bAcceptPP = bAcceptPP;
    Req.OnLoginComplete = MoveTemp(OnLoginCompleteDelegate);
    DoShowLoginOSSLoginUI(Req);
}

void URH_LocalPlayerLoginSubsystem::DoShowLoginOSSLoginUI(FRH_PendingLoginRequest& Req)
{
    if (!bLoginOSSRequireLoginUIFirst)
    {
        DoLoginOSSLogin(Req);
        return;
    }

    const bool bSuccess = ShowLoginProfileSelectionUI(
        false,
        FRH_OnProfileSelectionUIClosed::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::LoginOSSLoginUIClosed, Req),
        ERHAPI_LocalPlayerLoginOSS::Login);
    if (!bSuccess)
    {
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSLoginUINotShown));
    }
}

void URH_LocalPlayerLoginSubsystem::DoShowNicknameOSSLoginUI(FRH_PendingLoginRequest& Req)
{
    Req.LoginPhase = ERHAPI_LocalPlayerLoginOSS::Nickname;
    if (!bNicknameOSSRequireLoginUIFirst)
    {
        DoNicknameOSSLogin(Req);
        return;
    }

    const bool bSuccess = ShowLoginProfileSelectionUI(
        false,
        FRH_OnProfileSelectionUIClosed::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::NicknameOSSLoginUIClosed, Req),
        ERHAPI_LocalPlayerLoginOSS::Nickname);
    if (!bSuccess)
    {
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSLoginUINotShown));
    }
}

void URH_LocalPlayerLoginSubsystem::LoginOSSLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId,
                           const FOnlineError& Error,
                           FRH_PendingLoginRequest Req)
{
    if (Error.WasSuccessful() && UniqueId.IsValid())
    {
        Req.OSSUniqueId = UniqueId;
        DoLoginOSSLogin(Req);
    }
    else
    {
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSLoginUINoUserSelected);
        Result.OSSErrorMessage = Error.ToLogString();
        PostResults(Req, Result);
    }
}

void URH_LocalPlayerLoginSubsystem::NicknameOSSLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId,
                               const FOnlineError& Error,
                               FRH_PendingLoginRequest Req)
{
    if (Error.WasSuccessful() && UniqueId.IsValid())
    {
        Req.NicknameOSSUniqueId = UniqueId;
        DoNicknameOSSLogin(Req);
    }
    else
    {
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSLoginUINoUserSelected);
        Result.OSSErrorMessage = Error.ToLogString();
        PostResults(Req, Result);
    }
}

void URH_LocalPlayerLoginSubsystem::DoLoginOSSLogin(FRH_PendingLoginRequest& Req)
{
#if WITH_HIREZ_ENGINE
    if (!bLoginDuringPartialInstall)
    {
        IPlatformChunkInstall* pChunkInstall = FPlatformMisc::GetPlatformChunkInstall();
        if (pChunkInstall != nullptr && !pChunkInstall->AreAllChunksInstalled())
        {
            UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Installation incomplete"), ANSI_TO_TCHAR(__FUNCTION__));
            PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_PartialInstall));
            return;
        }
    }
#endif

	auto OSS = GetLoginOSS();
	if (OSSCannotRelogin(OSS->GetSubsystemName()))
	{
		auto IdentityInterface = OSS->GetIdentityInterface();
		auto LoginUser = IdentityInterface->GetUniquePlayerId(GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId());
		if (LoginUser && LoginUser->IsValid() && IdentityInterface->GetLoginStatus(*LoginUser) == ELoginStatus::LoggedIn)
		{
			Req.OSSUniqueId = LoginUser;
			DoLoginOSSPrivilegeCheck(Req);
			return;
		}
	}

    DoOSSLogin(Req, GetLoginOSS(), &URH_LocalPlayerLoginSubsystem::OSSLoginComplete);
}

void URH_LocalPlayerLoginSubsystem::DoNicknameOSSLogin(FRH_PendingLoginRequest& Req)
{
    auto LoginOSS = GetLoginOSS();
    auto NicknameOSS = GetNicknameOSS();
    if (LoginOSS == NicknameOSS)
    {
        RetrieveOSSAuthToken(Req);
    }
    else
    {
		if (OSSCannotRelogin(NicknameOSS->GetSubsystemName()))
		{
			auto IdentityInterface = NicknameOSS->GetIdentityInterface();
			auto LoginUser = IdentityInterface->GetUniquePlayerId(GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId());
			if (LoginUser && LoginUser->IsValid() && IdentityInterface->GetLoginStatus(*LoginUser) == ELoginStatus::LoggedIn)
			{
				Req.NicknameOSSUniqueId = LoginUser;
				DoNicknameOSSPrivilegeCheck(Req);
				return;
			}
		}
        DoOSSLogin(Req, NicknameOSS, &URH_LocalPlayerLoginSubsystem::OSSNicknameLoginComplete);
    }
}

void URH_LocalPlayerLoginSubsystem::DoOSSLogin(FRH_PendingLoginRequest& Req, IOnlineSubsystem* OSS,
                                               OSSLoginCompleteFn OnComplete)
{
    auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
    if (OSS == nullptr || !Identity.IsValid())
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Missing OSS Identity - check that the OSS is valid"),
               ANSI_TO_TCHAR(__FUNCTION__));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSMissing));
        return;
    }

    if (OnOSSLoginCompleteDelegateHandle.IsValid())
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSS Login already pending"), ANSI_TO_TCHAR(__FUNCTION__));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_LoginAlreadyPending));
        return;
    }

	int32 ControllerId = GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId();
    if (OSS->GetSubsystemName() == SWITCH_SUBSYSTEM)
    {
        FString ForcedUserAccountMode;
        if (GConfig->GetString(
                TEXT("/Script/SwitchRuntimeSettings.SwitchRuntimeSettings"), TEXT("StartupAccountMode"),
                ForcedUserAccountMode, GEngineIni)
            && ForcedUserAccountMode != TEXT("None"))
        {
            // If we're using any Startup Account Mode, then we always handle login events as ControllerId 0
            ControllerId = 0;
        }
    }

    OnOSSLoginCompleteDelegateHandle = Identity->AddOnLoginCompleteDelegate_Handle(
        ControllerId, FOnLoginCompleteDelegate::CreateUObject(this, OnComplete, Req));
    Identity->Login(ControllerId, Req.Credentials);
}

void URH_LocalPlayerLoginSubsystem::OSSLoginComplete(int32 ControllerId,
                                                     bool bSuccessful,
                                                     const FUniqueNetId& UniqueId,
                                                     const FString& ErrorMessage,
                                                     FRH_PendingLoginRequest Req)
{
    const auto bSuccess = OnOSSLoginComplete(ControllerId,
                                             bSuccessful,
                                             UniqueId,
                                             ErrorMessage,
                                             Req,
                                             GetLoginOSS(),
                                             &FRH_PendingLoginRequest::OSSUniqueId,
                                             bLoginOSSRequireValidUserIdForFailedLogin);
    if (bSuccess)
    {
        DoLoginOSSPrivilegeCheck(Req);
    }
}

void URH_LocalPlayerLoginSubsystem::OSSNicknameLoginComplete(int32 ControllerId,
                                                             bool bSuccessful,
                                                             const FUniqueNetId& UniqueId,
                                                             const FString& ErrorMessage,
                                                             FRH_PendingLoginRequest Req)
{
    const auto bSuccess = OnOSSLoginComplete(ControllerId,
                                             bSuccessful,
                                             UniqueId,
                                             ErrorMessage,
                                             Req,
                                             GetNicknameOSS(),
                                             &FRH_PendingLoginRequest::NicknameOSSUniqueId,
                                             bNicknameOSSRequireValidUserIdForFailedLogin);
    if (bSuccess)
    {
        DoNicknameOSSPrivilegeCheck(Req);
    }
}

bool URH_LocalPlayerLoginSubsystem::OnOSSLoginComplete(int32 ControllerId,
                                                       bool bSuccessful,
                                                       const FUniqueNetId& UserId,
                                                       const FString& ErrorMessage,
                                                       FRH_PendingLoginRequest& Req,
                                                       IOnlineSubsystem* OSS,
                                                       PendingLoginUniqueIdRef UniqueIdPtr,
                                                       bool bOSSRequireValidUserIdForFailedLogin)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

    auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
    if (!Identity.IsValid())
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Missing OSS Identity - check that the OSS is valid"),
               ANSI_TO_TCHAR(__FUNCTION__));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSMissing));
        return false;
    }

    // clear the delegate, because the controller id may change next time
    Identity->ClearOnLoginCompleteDelegate_Handle(ControllerId, OnOSSLoginCompleteDelegateHandle);
    OnOSSLoginCompleteDelegateHandle.Reset();

    if (!bSuccessful)
    {
        if (bOSSRequireValidUserIdForFailedLogin && !UserId.IsValid())
        {
            UE_LOG(LogRallyHereIntegration, Error,
                   TEXT("[%s] OSS Login Failed - user is missing.  Need to prompt for profile selection"),
                   ANSI_TO_TCHAR(__FUNCTION__));
            FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSNeedsProfile);
            Result.OSSErrorMessage = ErrorMessage;
            PostResults(Req, Result);
            return false;
        }

        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSS Login Failed"), ANSI_TO_TCHAR(__FUNCTION__));
        Req.*UniqueIdPtr = Identity->GetUniquePlayerId(ControllerId);
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSLogin);
        Result.OSSErrorMessage = ErrorMessage;
        PostResults(Req, Result);
        return false;
    }

    // For whatever reason, the OSS interface doesn't return a SharedPtr to the identity here, so we have to recreate it to forward.
    Req.*UniqueIdPtr = Identity->GetUniquePlayerId(ControllerId);
    if (Identity->GetLoginStatus(*(Req.*UniqueIdPtr)) != ELoginStatus::LoggedIn)
    {
        UE_LOG(LogRallyHereIntegration, Error,
               TEXT("[%s] OSS Login Failed - user is not logged in.  Need to prompt for profile selection"),
               ANSI_TO_TCHAR(__FUNCTION__));
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSNeedsProfile);
        Result.OSSErrorMessage = ErrorMessage;
        PostResults(Req, Result);
        return false;
    }

    if (bResolveRallyHereBaseURLAfterOSSLogin)
    {
		FRallyHereIntegrationModule::Get().ResolveEnvironmentId(); // force re-resolve resolve environment id (can change during login process on Sony systems)
        FRallyHereIntegrationModule::Get().ResolveBaseURL(); // force re-resolve base URL
    }

    return true;
}

bool URH_LocalPlayerLoginSubsystem::ShowLoginProfileSelectionUI(bool bShowOnlineOnly,
                                                                const FRH_OnProfileSelectionUIClosed& OnClosed,
                                                                ERHAPI_LocalPlayerLoginOSS OSSType)
{
    auto OSS = GetOSS(OSSType);
    auto ExternalUI = OSS ? OSS->GetExternalUIInterface() : nullptr;
    if (!ExternalUI)
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Missing OSS ExternalUI - check that the OSS is valid"),
               ANSI_TO_TCHAR(__FUNCTION__));
        return false;
    }

    const int32 ControllerId = GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId();
    const bool bShow = ExternalUI->ShowLoginUI(ControllerId,
                                               bShowOnlineOnly,
                                               false,
                                               FOnLoginUIClosedDelegate::CreateUObject(
                                                   this, &URH_LocalPlayerLoginSubsystem::ExternalUI_ShowLoginUIClosed,
                                                   OnClosed));
    if (bShow)
    {
        UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Showing"), ANSI_TO_TCHAR(__FUNCTION__));
    }
    else
    {
        UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Error showing"), ANSI_TO_TCHAR(__FUNCTION__));
    }
    return bShow;
}

void URH_LocalPlayerLoginSubsystem::ExternalUI_ShowLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId,
                                                                 const int ControllerIndex,
                                                                 const FOnlineError& Error,
                                                                 FRH_OnProfileSelectionUIClosed OnClosed)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
    OnClosed.ExecuteIfBound(UniqueId, Error);
}

void URH_LocalPlayerLoginSubsystem::DoLoginOSSPrivilegeCheck(FRH_PendingLoginRequest& Req)
{
    if (!bLoginOSSRequireOnlinePlayToLogin)
    {
        UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Submitting RallyHereLogin"), ANSI_TO_TCHAR(__FUNCTION__));
        DoShowNicknameOSSLoginUI(Req);
        return;
    }
    DoOSSPrivilegeCheck(Req, GetLoginOSS(), &FRH_PendingLoginRequest::OSSUniqueId,
                        &URH_LocalPlayerLoginSubsystem::OnLoginOSSPrivilegeResults);
}

void URH_LocalPlayerLoginSubsystem::DoNicknameOSSPrivilegeCheck(FRH_PendingLoginRequest& Req)
{
    if (!bNicknameOSSRequireOnlinePlayToLogin)
    {
        RetrieveOSSAuthToken(Req);
        return;
    }
    DoOSSPrivilegeCheck(Req, GetNicknameOSS(), &FRH_PendingLoginRequest::NicknameOSSUniqueId,
                        &URH_LocalPlayerLoginSubsystem::OnNicknameOSSPrivilegeResults);
}

void URH_LocalPlayerLoginSubsystem::DoOSSPrivilegeCheck(FRH_PendingLoginRequest& Req,
                                                        IOnlineSubsystem* OSS,
                                                        PendingLoginUniqueIdRef UniqueIdPtr,
                                                        OSSPrivilegeResultsFn OnPrivilegeResults)
{
    auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
    if (!Identity.IsValid())
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Missing OSS Identity - check that the OSS is valid"),
               ANSI_TO_TCHAR(__FUNCTION__));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSMissing));
        return;
    }

    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] OSS CanPlayOnline privilege check started"),
           ANSI_TO_TCHAR(__FUNCTION__));
    Identity->GetUserPrivilege(*(Req.*UniqueIdPtr),
                               EUserPrivileges::CanPlayOnline,
                               IOnlineIdentity::FOnGetUserPrivilegeCompleteDelegate::CreateUObject(
                                   this, OnPrivilegeResults, Req));
}

void URH_LocalPlayerLoginSubsystem::OnLoginOSSPrivilegeResults(const FUniqueNetId& UniqueId,
                                                               EUserPrivileges::Type Privilege, uint32 PrivilegeResults,
                                                               FRH_PendingLoginRequest Req)
{
    const bool bSuccess = OnOSSPrivilegeResults(UniqueId,
                                                Privilege,
                                                PrivilegeResults,
                                                Req,
                                                GetLoginOSS(),
                                                bLoginOSSPromptAccountUpgradeIfInsufficient);
    if (bSuccess)
    {
        DoShowNicknameOSSLoginUI(Req);
    }
}

void URH_LocalPlayerLoginSubsystem::OnNicknameOSSPrivilegeResults(const FUniqueNetId& UniqueId,
                                                                  EUserPrivileges::Type Privilege,
                                                                  uint32 PrivilegeResults, FRH_PendingLoginRequest Req)
{
    const bool bSuccess = OnOSSPrivilegeResults(UniqueId,
                                                Privilege,
                                                PrivilegeResults,
                                                Req,
                                                GetNicknameOSS(),
                                                bNicknameOSSPromptAccountUpgradeIfInsufficient);
    if (bSuccess)
    {
        RetrieveOSSAuthToken(Req);
    }
}

bool URH_LocalPlayerLoginSubsystem::OnOSSPrivilegeResults(const FUniqueNetId& UserId,
                                                          EUserPrivileges::Type Privilege,
                                                          uint32 PrivilegeResults,
                                                          FRH_PendingLoginRequest Req,
                                                          IOnlineSubsystem* OSS,
                                                          bool bPromptForAccountUpgradeIfInsufficient)
{
    auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
    if (!Identity.IsValid())
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Missing OSS Identity - check that the OSS is valid"),
               ANSI_TO_TCHAR(__FUNCTION__));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSMissing));
        return false;
    }

    if ((IOnlineIdentity::EPrivilegeResults)PrivilegeResults == IOnlineIdentity::EPrivilegeResults::NoFailures)
    {
        const auto LoginStatus = Identity->GetLoginStatus(UserId);
        if (LoginStatus != ELoginStatus::LoggedIn)
        {
            UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] User logged out (%s) during privilege check"),
                   ANSI_TO_TCHAR(__FUNCTION__), ToString(LoginStatus));
            FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSLogout);
            Result.PrivilegeResults = PrivilegeResults;
            PostResults(Req, Result);
            return false;
        }

        UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] All Privileges valid"), ANSI_TO_TCHAR(__FUNCTION__));
        return true;
    }
    else if (PrivilegeResults & (uint32)IOnlineIdentity::EPrivilegeResults::AccountTypeFailure)
    {
        if (bPromptForAccountUpgradeIfInsufficient)
        {
            auto ExternalUI = OSS ? OSS->GetExternalUIInterface() : nullptr;
            if (ExternalUI.IsValid())
            {
                ExternalUI->ShowAccountUpgradeUI(UserId);
            }
        }

        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Showing account upgrade UI"), ANSI_TO_TCHAR(__FUNCTION__));
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSAccountTypeNotSufficient);
        Result.PrivilegeResults = PrivilegeResults;
        PostResults(Req, Result);
        return false;
    }
    else if (PrivilegeResults & (uint32)IOnlineIdentity::EPrivilegeResults::AgeRestrictionFailure)
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] User is age restricted"), ANSI_TO_TCHAR(__FUNCTION__));
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSAgeRestriction);
        Result.PrivilegeResults = PrivilegeResults;
        PostResults(Req, Result);
        return false;
    }
    else if (PrivilegeResults & ((uint32)IOnlineIdentity::EPrivilegeResults::UserNotFound | (uint32)
        IOnlineIdentity::EPrivilegeResults::UserNotLoggedIn))
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] User not found"), ANSI_TO_TCHAR(__FUNCTION__));
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSUserNotFound);
        Result.PrivilegeResults = PrivilegeResults;
        PostResults(Req, Result);
        return false;
    }
    else
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Unknown privilege check failure %d"),
               ANSI_TO_TCHAR(__FUNCTION__), PrivilegeResults);
        FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_OSSPrivilegeCheck);
        Result.PrivilegeResults = PrivilegeResults;
        PostResults(Req, Result);
        return false;
    }
}

void URH_LocalPlayerLoginSubsystem::RetrieveOSSAuthToken(FRH_PendingLoginRequest& Req)
{
	Req.LoginPhase = ERHAPI_LocalPlayerLoginOSS::None;

	auto LoginOSS = GetLoginOSS();
	auto LoginIdentity = LoginOSS ? LoginOSS->GetIdentityInterface() : nullptr;
	if (LoginOSS == nullptr || !LoginIdentity)
	{
		UE_LOG(LogRallyHereIntegration, Error,
			TEXT("[%s] Missing OSS Identity - check that the login OSS '%s' is valid"), ANSI_TO_TCHAR(__FUNCTION__),
			LoginOSS ? *LoginOSS->GetSubsystemName().ToString() : TEXT("NotFound"));
		PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSMissing));
		return;
	}

	int32 ControllerId = GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId();

	if (RH_UseGetAuthTokenFallbackFromOSSName(LoginOSS->GetSubsystemName()))
	{
		FExternalAuthToken AuthToken;
		AuthToken.TokenString = LoginIdentity->GetAuthToken(ControllerId);
		RetrieveOSSAuthTokenComplete(ControllerId, AuthToken.IsValid(), AuthToken, Req);
	}
	else
	{
#if RH_FROM_ENGINE_VERSION(5,2)
	LoginIdentity->GetLinkedAccountAuthToken(ControllerId, FString(), IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::RetrieveOSSAuthTokenComplete, Req));
#else
	LoginIdentity->GetLinkedAccountAuthToken(ControllerId, IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::RetrieveOSSAuthTokenComplete, Req));
#endif
	}
}

void URH_LocalPlayerLoginSubsystem::RetrieveOSSAuthTokenComplete(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken& AuthToken, FRH_PendingLoginRequest Req)
{
	if (bWasSuccessful)
	{
		DoRallyHereLogin(Req, AuthToken);
	}
	else
	{
		auto LoginOSS = GetLoginOSS();

		UE_LOG(LogRallyHereIntegration, Error,
			TEXT("[%s] Could not retrieve auth token - check that the login OSS '%s' was able to fully log in (ex: may have logged into a local account rather than a network account)"), ANSI_TO_TCHAR(__FUNCTION__),
			LoginOSS ? *LoginOSS->GetSubsystemName().ToString() : TEXT("NotFound"));
		PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSAuthToken));
		return;
	}
}

void URH_LocalPlayerLoginSubsystem::DoRallyHereLogin(FRH_PendingLoginRequest& Req, const FExternalAuthToken& AuthToken)
{
    Req.LoginPhase = ERHAPI_LocalPlayerLoginOSS::None;

    auto LoginOSS = GetLoginOSS();
    auto LoginIdentity = LoginOSS ? LoginOSS->GetIdentityInterface() : nullptr;
    if (LoginOSS == nullptr || !LoginIdentity)
    {
        UE_LOG(LogRallyHereIntegration, Error,
               TEXT("[%s] Missing OSS Identity - check that the login OSS '%s' is valid"), ANSI_TO_TCHAR(__FUNCTION__),
               LoginOSS ? *LoginOSS->GetSubsystemName().ToString() : TEXT("NotFound"));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSMissing));
        return;
    }

	if (GetLocalPlayerSubsystem()->GetLocalPlayer() == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Error,
			TEXT("[%s] Missing local player"), ANSI_TO_TCHAR(__FUNCTION__));
		PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_LocalPlayerMissing));
		return;
	}

	if (!AuthToken.HasTokenString())
	{
		UE_LOG(LogRallyHereIntegration, Error,
			TEXT("[%s] Empty auth token - check that the login OSS '%s' was able to fully log in (ex: may have logged into a local account rather than a network account)"), ANSI_TO_TCHAR(__FUNCTION__),
			LoginOSS ? *LoginOSS->GetSubsystemName().ToString() : TEXT("NotFound"));
		PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSAuthToken));
		return;
	}

	int32 ControllerId = GetLocalPlayerSubsystem()->GetLocalPlayer()->GetControllerId();

	// update the auth context with the current client id and secret in case it changed since prior logins
	auto AuthContext = GetAuthContext();
	AuthContext->SetClientId(FRallyHereIntegrationModule::Get().GetClientId());
	AuthContext->SetClientSecret(FRallyHereIntegrationModule::Get().GetClientSecret());

    RallyHereAPI::FRequest_Login Request;
    Request.SetShouldRetry();
    Request.AuthContext = AuthContext;
    Request.LoginRequestV1.SetIncludeRefresh(true);
    Request.LoginRequestV1.SetAcceptEula(Req.bAcceptEULA);
    Request.LoginRequestV1.SetAcceptTos(Req.bAcceptTOS);
    Request.LoginRequestV1.SetAcceptPrivacyPolicy(Req.bAcceptPP);
    if (Req.CredentialRefreshToken.IsEmpty())
    {
        auto NicknameOSS = GetNicknameOSS();
        auto NicknameIdentity = NicknameOSS ? NicknameOSS->GetIdentityInterface() : nullptr;
        if (!NicknameIdentity.IsValid())
        {
            NicknameIdentity = LoginIdentity;
        }

        auto GrantType = RH_GetGrantTypeFromOSSName(LoginOSS->GetSubsystemName());
        if (!GrantType)
        {
            UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Unable to find grant type for OSS '%s'."),
                   ANSI_TO_TCHAR(__FUNCTION__), *LoginOSS->GetSubsystemName().ToString());
            PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_OSSNotSupported));
            return;
        }

        Request.LoginRequestV1.SetGrantType(*GrantType);
        Request.LoginRequestV1.SetPortalAccessToken(AuthToken.TokenString);
        Request.LoginRequestV1.SetPortalDisplayName(NicknameIdentity->GetPlayerNickname(ControllerId));

        UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s] Login Attempt (Login OSS '%s'/'%s': status '%s', id '%s', nick '%s')"),
               ANSI_TO_TCHAR(__FUNCTION__),
               *LoginOSS->GetInstanceName().ToString(),
               *LoginOSS->GetSubsystemName().ToString(),
               ToString(LoginIdentity->GetLoginStatus(ControllerId)),
               *LoginIdentity->GetPlayerNickname(ControllerId),
               *LoginIdentity->GetUniquePlayerId(ControllerId)->ToDebugString());
        UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s] Login Attempt (Nickname OSS '%s'/'%s': status '%s', id '%s', nick '%s')"),
               ANSI_TO_TCHAR(__FUNCTION__),
               NicknameOSS ? *NicknameOSS->GetInstanceName().ToString() : *LoginOSS->GetInstanceName().ToString(),
               NicknameOSS ? *NicknameOSS->GetSubsystemName().ToString() : *LoginOSS->GetSubsystemName().ToString(),
               ToString(NicknameIdentity->GetLoginStatus(ControllerId)),
               *NicknameIdentity->GetPlayerNickname(ControllerId),
               *NicknameIdentity->GetUniquePlayerId(ControllerId)->ToDebugString());
    }
    else
    {
        Request.LoginRequestV1.SetGrantType(ERHAPI_GrantType::Refresh);
        Request.LoginRequestV1.SetPortalAccessToken(Req.CredentialRefreshToken);
    }

	if (auto UserAccount = LoginIdentity->GetUserAccount(*Req.OSSUniqueId))
	{
		FString IDToken;
		if (UserAccount->GetAuthAttribute(AUTH_ATTR_ID_TOKEN, IDToken))
		{
			if (bLoginOSSUseIDTokenAsPortalParentAccessToken)
			{
				Request.LoginRequestV1.SetPortalParentAccessToken(IDToken);
			}
			else if (bLoginOSSUseIDTokenAsPortalAccessToken)
			{
				Request.LoginRequestV1.SetPortalAccessToken(IDToken);
			}
		}
	}

    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Creating RallyHere Login request"),
           ANSI_TO_TCHAR(__FUNCTION__));
    auto HttpRequest = RH_APIs::GetAPIs().GetAuth().Login(Request,
		RallyHereAPI::FDelegate_Login::CreateUObject(
		    this,
		    &URH_LocalPlayerLoginSubsystem::RallyHereLoginComplete,
		    Req));

    if (!HttpRequest)
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Failed to create request"), ANSI_TO_TCHAR(__FUNCTION__));
    }
}

const TCHAR* GetBoolStr(bool b)
{
    return b ? TEXT("True") : TEXT("False");
}

void URH_LocalPlayerLoginSubsystem::RallyHereLoginComplete(const RallyHereAPI::FResponse_Login& Resp,
                                                           FRH_PendingLoginRequest Req)
{
	auto AuthContext = GetLocalPlayerSubsystem()->GetAuthContext();
    if (!AuthContext.IsValid())
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] AuthContext is null"), ANSI_TO_TCHAR(__FUNCTION__));
        return;
    }

    AuthContext->ProcessLogin(Resp);
    if (Resp.GetHttpResponseCode() == EHttpResponseCodes::Ok)
    {
        if (ShouldUseSavedCredentials() && FWebAuthModule::Get().IsAvailable())
        {
            // Store the refresh token in secure storage for subsequent logins
            auto& RHLoginResult = AuthContext->GetLoginResult();
        	FString RefreshToken;
            if (RHLoginResult.IsSet() && RHLoginResult->GetRefreshToken(RefreshToken) && !RefreshToken.IsEmpty())
            {
                const auto LoginOSS = GetLoginOSS();
                const FName OSSName = LoginOSS ? LoginOSS->GetInstanceName() : NAME_None;
                FWebAuthModule::Get().GetWebAuth().SaveCredentials(Req.OSSUniqueId->ToString(),
                                                                   *RefreshToken,
                                                                   GetSavedCredentialEnvironment(OSSName));
            }
        }

		CheckCrossplayPrivilege(*Req.OSSUniqueId);
		CheckCommunicationPrivilege(*Req.OSSUniqueId);
		FCoreDelegates::ApplicationHasReactivatedDelegate.AddUObject(this, &URH_LocalPlayerLoginSubsystem::HandleAppReactivated);

        UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Success"), ANSI_TO_TCHAR(__FUNCTION__));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Success));
    }
    else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::Denied || Resp.GetHttpResponseCode() ==
        EHttpResponseCodes::Forbidden)
    {
		FRHAPI_AgreementMessage Msg;
		Resp.TryGetContentFor403(Msg);
		bool NeedsEula = false, NeedsTos = false, NeedsPrivacyPolicy = false;
		if ((Msg.GetNeedsEula(NeedsEula) && NeedsEula) || (Msg.GetNeedsTos(NeedsTos) && NeedsTos) ||
			(Msg.GetNeedsPrivacyPolicy(NeedsPrivacyPolicy) && NeedsPrivacyPolicy))
		{
			FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_MustAcceptAgreements);
			Result.bMustAcceptEULA = NeedsEula;
			Result.bMustAcceptTOS = NeedsTos;
			Result.bMustAcceptPP = NeedsPrivacyPolicy;
			Result.RallyHereErrorCode = Msg.GetErrorCode();
			UE_LOG(LogRallyHereIntegration,
				   Log,
				   TEXT("[%s] User needs to accept eula=%s tos=%s pp=%s (%s: %s)"),
				   ANSI_TO_TCHAR(__FUNCTION__),
				   GetBoolStr(Result.bMustAcceptEULA),
				   GetBoolStr(Result.bMustAcceptTOS),
				   GetBoolStr(Result.bMustAcceptPP),
				   *Msg.GetErrorCode(),
				   *Msg.GetDesc());
			PostResults(Req, Result);
			return;
		}

        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Denied for error code %s: %s"), ANSI_TO_TCHAR(__FUNCTION__),
               *Msg.GetErrorCode(), *Msg.GetDesc());
		FRH_LoginResult Result = Req.CreateResult(ERHAPI_LoginResult::Fail_RHDenied);
		Result.RallyHereErrorCode = Msg.GetErrorCode();
        PostResults(Req, Result);
    }
    else
    {
        UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Unknown error (%s) with content: %s"),
               ANSI_TO_TCHAR(__FUNCTION__),
               *Resp.GetResponseString(),
               Resp.GetHttpResponse() ? *Resp.GetHttpResponse()->GetContentAsString() : TEXT(""));
        PostResults(Req, Req.CreateResult(ERHAPI_LoginResult::Fail_RHUnknown));
    }
}

void URH_LocalPlayerLoginSubsystem::Logout()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	const auto LoginOSS = GetLoginOSS();

	FString RefreshToken;

	// clear the last successful login request, as we are explicitly logging out
	LastSuccessfulLoginRequest.Reset();

	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid())
	{
		// cache off the refresh token, to be used for the logout call (this call is to "play nice" with the backend)
		RefreshToken = AuthContext->GetRefreshToken();

		// clear the auth context, so no more calls are authorized
		AuthContext->ClearAuthContext();

		auto Request = TLogout::Request();
		Request.LogoutRequest.SetRefreshToken(RefreshToken);
		TLogout::DoCall(RH_APIs::GetAuthAPI(), Request, TLogout::Delegate(), GetDefault<URH_IntegrationSettings>()->AuthLogoutPriority);
	}
}

void URH_LocalPlayerLoginSubsystem::CheckCrossplayPrivilege(const FUniqueNetId& UniqueId)
{
	auto Identity = GetLoginOSS() ? GetLoginOSS()->GetIdentityInterface() : nullptr;
	if (!Identity.IsValid())
	{
		return;
	}

	Identity->GetUserPrivilege(UniqueId,
		EUserPrivileges::CanUserCrossPlay,
		IOnlineIdentity::FOnGetUserPrivilegeCompleteDelegate::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::HandleCheckCrossPlayPrivilegeComplete));
}

void URH_LocalPlayerLoginSubsystem::HandleCheckCrossPlayPrivilegeComplete(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults)
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		if (UserId == LPSS->GetOSSUniqueId())
		{
			switch ((IOnlineIdentity::EPrivilegeResults)PrivilegeResults)
			{
				case IOnlineIdentity::EPrivilegeResults::NoFailures:
				{
					bCrossplayEnabled = true;
				}
				break;
				default:
				{
					bCrossplayEnabled = false;
				}
				break;
			}
		}
	}

	SCOPED_NAMED_EVENT(RallyHere_BroadcastOnCrossplaySettignChanged, FColor::Purple);
	OnCrossplaySettingChanged.Broadcast();
	BLUEPRINT_OnCrossplaySettingChanged.Broadcast();
}

void URH_LocalPlayerLoginSubsystem::CheckCommunicationPrivilege(const FUniqueNetId& UniqueId)
{
	auto Identity = GetLoginOSS() ? GetLoginOSS()->GetIdentityInterface() : nullptr;
	if (!Identity.IsValid())
	{
		return;
	}

	Identity->GetUserPrivilege(UniqueId,
		EUserPrivileges::CanCommunicateOnline,
		IOnlineIdentity::FOnGetUserPrivilegeCompleteDelegate::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::HandleCheckCommunicationPrivilegeComplete));
}

void URH_LocalPlayerLoginSubsystem::HandleCheckCommunicationPrivilegeComplete(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults)
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		if (UserId == LPSS->GetOSSUniqueId())
		{
			switch ((IOnlineIdentity::EPrivilegeResults)PrivilegeResults)
			{
				case IOnlineIdentity::EPrivilegeResults::NoFailures:
				{
					bCommunicationEnabled = true;
				}
				break;
				default:
				{
					bCommunicationEnabled = false;
					uint32 ChatRestrictionMask = (uint32)IOnlineIdentity::EPrivilegeResults::ChatRestriction | (uint32)IOnlineIdentity::EPrivilegeResults::AgeRestrictionFailure;
					bool bHasSpecificChatRestriction = (PrivilegeResults & ChatRestrictionMask) != 0;
					const auto ExternalUI = Online::GetExternalUIInterface();
					if (bHasSpecificChatRestriction && ExternalUI.IsValid())
					{
						ExternalUI->ShowPlatformMessageBox(UserId, EPlatformMessageType::ChatRestricted);
					}
				}
				break;
			}
		}
	}
}


void URH_LocalPlayerLoginSubsystem::HandleAppReactivated()
{
	DECLARE_CYCLE_STAT(TEXT("URH_LocalPlayerLoginSubsystem::HandleAppReactivated"), STAT_URH_LocalPlayerLoginSubsystem_HandleAppReactivated, STATGROUP_TaskGraphTasks);

	const FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateUObject(this, &URH_LocalPlayerLoginSubsystem::HandleAppReactivatedGameThread),
		GET_STATID(STAT_URH_LocalPlayerLoginSubsystem_HandleAppReactivated),
		nullptr,
		ENamedThreads::GameThread);
}

void URH_LocalPlayerLoginSubsystem::HandleAppReactivatedGameThread()
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		if (auto* World = LPSS->GetWorld())
		{
			FTimerHandle TimerHandle;
			World->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateWeakLambda(this, [this]()
				{
					if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
					{
						CheckCrossplayPrivilege(*LPSS->GetOSSUniqueId());
						CheckCommunicationPrivilege(*LPSS->GetOSSUniqueId());
					}
				}), 1.0f, false);
		}
	}
}