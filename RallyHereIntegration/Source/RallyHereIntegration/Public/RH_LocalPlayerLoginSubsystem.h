
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_Common.h"
#include "GrantType.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlineExternalUIInterface.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_LocalPlayerLoginSubsystem.generated.h"

class URH_LocalPlayerSubsystem;

UENUM()
enum class ERHAPI_LoginResult : uint8
{
    Success,

    /** Login denied because a partial install is underway. */
    Fail_PartialInstall,

    /** There is already a pending login for this LocalPlayer. */
    Fail_LoginAlreadyPending,

    /** There is no OnlineSubsystem to login with.  Check that the LoginOSS is valid, and the OSS was started correctly */
    Fail_OSSMissing,

    /** OSS Is not supported by Rally Here */
    Fail_OSSNotSupported,

    /** OSS Login UI could not be opened */
    Fail_OSSLoginUINotShown,

    /** OSS Login UI could not be opened */
    Fail_OSSLoginUINoUserSelected,

    /** OnlineSubsystem login failed due to an OSS-specific reason.  See the OSSErrorMessage for more details */
    Fail_OSSLogin,

    /** OSS User was logged out during our login operation.  Login can be retried. */
    Fail_OSSLogout,

    /** OnlineSubsystem needs a valid selected profile.  Call ShowProfileSelectionUI before logging in again */
    Fail_OSSNeedsProfile,

    /** OSS User's account type is not sufficient (e.g. they do not have Xbox Live Gold or PS+) */
    Fail_OSSAccountTypeNotSufficient,

    /** OSS User was not found, even after OSS Login completed.  This usually means that there is no connection to Xbox Live/PSN/etc */
    Fail_OSSUserNotFound,

    /** OSS User does not meet age requirements for online play */
    Fail_OSSAgeRestriction,

    /** OSS User does not meet requirements for online play.  See FRH_LoginResult::PrivilegeResults and IOnlineIdentity::EPrivilegeResults */
    Fail_OSSPrivilegeCheck,

    /** User must accept all required agreements.  See FRH_LoginResult::bMustAcceptEULA, FRH_LoginResult::bMustAcceptTOS, FRH_LoginResult::bMustAcceptPP */
    Fail_MustAcceptAgreements,

    /** RH web login was denied. There are many reasons that can cause this, including misconfiguration of OSS IDs with the Rally Here APIs */
    Fail_RHDenied,

    /** RH web login failed for an unknown reason.  This usually means there was a server error of some kind. */
    Fail_RHUnknown,
};

RALLYHEREINTEGRATION_API FString ToString(ERHAPI_LoginResult Val);

UENUM()
enum class ERHAPI_LocalPlayerLoginOSS : uint8
{
    None,
    Login,
    Nickname,
};

RALLYHEREINTEGRATION_API FString ToString(ERHAPI_LocalPlayerLoginOSS Val);

USTRUCT()
struct RALLYHEREINTEGRATION_API FRH_LoginResult
{
    GENERATED_BODY()
public:
    UPROPERTY()
    ERHAPI_LoginResult Result;

    UPROPERTY()
    ERHAPI_LocalPlayerLoginOSS OSSType;

    UPROPERTY()
    FString OSSErrorMessage;

    TSharedPtr<const FUniqueNetId> OSSUniqueId;
    TSharedPtr<const FUniqueNetId> NicknameOSSUniqueId;

    UPROPERTY()
    uint32 PrivilegeResults;

    UPROPERTY()
    bool bMustAcceptEULA;

    UPROPERTY()
    bool bMustAcceptTOS;

    UPROPERTY()
    bool bMustAcceptPP;

	FRH_LoginResult() :
		Result(ERHAPI_LoginResult::Fail_RHUnknown),
		OSSType(ERHAPI_LocalPlayerLoginOSS::None),
		PrivilegeResults(0),
		bMustAcceptEULA(false),
		bMustAcceptTOS(false),
		bMustAcceptPP(false)
	{
	}
};

DECLARE_DELEGATE_OneParam(FRH_OnLoginComplete, const FRH_LoginResult&);
DECLARE_DELEGATE_TwoParams(FRH_OnProfileSelectionUIClosed, TSharedPtr<const FUniqueNetId>, const FOnlineError&);

UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_LocalPlayerLoginSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()
public:
    virtual void Initialize() override;
    virtual void Deinitialize() override;

    /** Begins a complete multi-phased login to the OnlineSubsystem with the credentials provided on the command line,
      * checking if the user has appropriate permissions, and logging into RallyHere */
    void SubmitAutoLogin(bool bAcceptEULA = false,
                         bool bAcceptTOS = false,
                         bool bAcceptPP = false,
                         FRH_OnLoginComplete OnLoginComplete = FRH_OnLoginComplete());

    /**
      * Begins a complete multi-phased login to the OnlineSubsystem with the provided credentials,
      * checking if the user has appropriate permissions, and logging into RallyHere
      * @param Credentials - Credentials to use to login with the LoginOSS
      * @param CredentialRefreshToken - RefreshToken to associate with the credentials.  If included will be used for the RallyHere login
      * @param OnLoginComplete - Delegate called after login completes
      */
    void SubmitLogin(const FOnlineAccountCredentials& Credentials,
                     FString CredentialRefreshToken = FString(),
                     bool bAcceptEULA = false,
                     bool bAcceptTOS = false,
                     bool bAcceptPP = false,
                     FRH_OnLoginComplete OnLoginComplete = FRH_OnLoginComplete());

	// #MRTODO clear authenication
	void Logout() {}

    /** Show an OSS-specific profile selection UI to the user.  This is for Xbox and other platforms that support profile swapping.
      * A valid profile is required to login on those platforms
      */
    bool ShowLoginProfileSelectionUI(bool bShowOnlineOnly = false, FRH_OnProfileSelectionUIClosed OnClosed = FRH_OnProfileSelectionUIClosed(), ERHAPI_LocalPlayerLoginOSS OSSType = ERHAPI_LocalPlayerLoginOSS::Login);

    /** Online Subsystem to use for login.  If not provided, will use the default OSS */
    UPROPERTY(Config)
    FName LoginOSSName;

    /** Online Subsystem to use for getting the user's display name for Rally Here.  If not provided, will use the Login OSS */
    UPROPERTY(Config)
    FName NicknameOSSName;

    /** Is the login process allowed to load/store a refresh token for future login attempts? */
    UPROPERTY(Config)
    bool bLoginAllowStoredRefreshToken;

    /** Does the game allow logins before full installation has completed? (Only supported with HIREZ ENGINE changes)*/
    UPROPERTY(Config)
    bool bLoginDuringPartialInstall;

    /** Should the OSS require show the login UI before the login attempt? */
    UPROPERTY(Config)
    bool bLoginOSSRequireLoginUIFirst;

    /** Should the OSS require show the login UI before the login attempt? */
    UPROPERTY(Config)
    bool bNicknameOSSRequireLoginUIFirst;

    /** Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login */
    UPROPERTY(Config)
    bool bLoginOSSRequireOnlinePlayToLogin;

    /** Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login */
    UPROPERTY(Config)
    bool bNicknameOSSRequireOnlinePlayToLogin;

    /** Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold) */
    UPROPERTY(Config)
    bool bLoginOSSPromptAccountUpgradeIfInsufficient;

    /** Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold) */
    UPROPERTY(Config)
    bool bNicknameOSSPromptAccountUpgradeIfInsufficient;

    /** Should the OSS require a valid user id, even for failed logins. */
    UPROPERTY(Config)
    bool bLoginOSSRequireValidUserIdForFailedLogin;

    /** Should the OSS require a valid user id, even for failed logins. */
    UPROPERTY(Config)
    bool bNicknameOSSRequireValidUserIdForFailedLogin;

    /** Should we logout of the OSS and retry the login (that included a refresh token) failed? */
    UPROPERTY(Config)
    bool bLogoutAndRetryLoginIfRefreshLoginFailed;

	/** Should we use the ID Token for populating the PARENT Portal Access Token */
	UPROPERTY(Config)
	bool bLoginOSSUseIDTokenAsPortalParentAccessToken;

	/** Should we use the ID Token for populating the Portal Access Token */
	UPROPERTY(Config)
	bool bLoginOSSUseIDTokenAsPortalAccessToken;

    /**
      * Should an OSS Login trigger a Base URL Resolve on the URH_Integration?  This is necessary for some OSSes (e.g. Switch/PS4) that don't
      * have sandbox information until after a login is attempted
      */
    UPROPERTY(Config)
    bool bResolveRallyHereBaseURLAfterOSSLogin;

    /** Prefix applied to the saved credentials on platforms that support storing the refresh token */
    UPROPERTY(Config)
    FString SavedCredentialPrefix;

    /** What login grant type should the given OSS (real name, not lookup name) use for login? */
    TOptional<ERHAPI_GrantType> GetGrantType(FName OSSName) const;

    /** Are saved credentials allowed for auto-login? */
    bool ShouldUseSavedCredentials() const;

    /** Get the fully resolved OSS by type */
    IOnlineSubsystem* GetOSS(ERHAPI_LocalPlayerLoginOSS OSSType) const;

    /** Get the fully resolved OSS to use for Login */
    IOnlineSubsystem* GetLoginOSS() const;

    /** Get the fully resolved OSS to use for getting a player's display name for login.  This triggers a second OSS login */
    IOnlineSubsystem* GetNicknameOSS() const;

	bool IsCrossplayEnabled() const { return bCrossplayEnabled; }
	bool IsCommunicationEnabled() const { return bCommunicationEnabled; }

private:
    struct FRH_PendingLoginRequest
    {
        FOnlineAccountCredentials Credentials;
        FString CredentialRefreshToken;
        bool bAcceptEULA;
        bool bAcceptTOS;
        bool bAcceptPP;
        TSharedPtr<const FUniqueNetId> OSSUniqueId;
        TSharedPtr<const FUniqueNetId> NicknameOSSUniqueId;
        ERHAPI_LocalPlayerLoginOSS LoginPhase; // None means RallyHere
        FRH_OnLoginComplete OnLoginComplete;

        FRH_LoginResult CreateResult(ERHAPI_LoginResult Result) const;
    };

    void PostResults(FRH_PendingLoginRequest& Req, const FRH_LoginResult& Res);

    using PendingLoginUniqueIdRef = TSharedPtr<const FUniqueNetId> FRH_PendingLoginRequest::*;
    using OSSLoginCompleteFn = void (URH_LocalPlayerLoginSubsystem::*)(int32 LocalUserNum,
                                                                       bool bSuccessful,
                                                                       const FUniqueNetId& UniqueId,
                                                                       const FString& ErrorMessage,
                                                                       FRH_PendingLoginRequest Req);
    using OSSPrivilegeResultsFn = void (URH_LocalPlayerLoginSubsystem::*)(const FUniqueNetId& UniqueId,
                                                                          EUserPrivileges::Type Privilege,
                                                                          uint32 PrivilegeResults,
                                                                          FRH_PendingLoginRequest Req);

    void DoShowLoginOSSLoginUI(FRH_PendingLoginRequest& Req);
    void DoShowNicknameOSSLoginUI(FRH_PendingLoginRequest& Req);
    void NicknameOSSLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId,
                                  const FOnlineError& Error,
                                  FRH_PendingLoginRequest Req);
    void LoginOSSLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId,
                               const FOnlineError& Error,
                               FRH_PendingLoginRequest Req);
    void DoLoginOSSLogin(FRH_PendingLoginRequest& Req);
    void DoNicknameOSSLogin(FRH_PendingLoginRequest& Req);
    void DoOSSLogin(FRH_PendingLoginRequest& Req, IOnlineSubsystem* OSS, OSSLoginCompleteFn OnComplete);
    void OSSLoginComplete(int32 ControllerId,
                          bool bSuccessful,
                          const FUniqueNetId& UniqueId,
                          const FString& ErrorMessage,
                          FRH_PendingLoginRequest Req);
    void OSSNicknameLoginComplete(int32 ControllerId,
                                  bool bSuccessful,
                                  const FUniqueNetId& UniqueId,
                                  const FString& ErrorMessage,
                                  FRH_PendingLoginRequest Req);
    bool OnOSSLoginComplete(int32 ControllerId,
                            bool bSuccessful,
                            const FUniqueNetId& UniqueId,
                            const FString& ErrorMessage,
                            FRH_PendingLoginRequest& Req,
                            IOnlineSubsystem* OSS,
                            PendingLoginUniqueIdRef UniqueIdPtr,
                            bool bOSSRequireValidUserIdForFailedLogin);
    void ExternalUI_ShowLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId,
                                      const int ControllerIndex,
                                      const FOnlineError& Error,
                                      FRH_OnProfileSelectionUIClosed OnClosed);
    void DoLoginOSSPrivilegeCheck(FRH_PendingLoginRequest& Req);
    void DoNicknameOSSPrivilegeCheck(FRH_PendingLoginRequest& Req);
    void DoOSSPrivilegeCheck(FRH_PendingLoginRequest& Req,
                             IOnlineSubsystem* OSS,
                             PendingLoginUniqueIdRef UniqueIdPtr,
                             OSSPrivilegeResultsFn OnPrivilegeResults);
    void OnLoginOSSPrivilegeResults(const FUniqueNetId& UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, FRH_PendingLoginRequest Req);
    void OnNicknameOSSPrivilegeResults(const FUniqueNetId& UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, FRH_PendingLoginRequest Req);
    bool OnOSSPrivilegeResults(const FUniqueNetId& UniqueId,
                               EUserPrivileges::Type Privilege,
                               uint32 PrivilegeResults,
                               FRH_PendingLoginRequest Req,
                               IOnlineSubsystem* OSS,
                               bool bPromptForAccountUpgradeIfInsufficient);
    void DoRallyHereLogin(FRH_PendingLoginRequest& Req);
    void RallyHereLoginComplete(const RallyHereAPI::FResponse_Login& Resp, FRH_PendingLoginRequest Req);

    FString GetSavedCredentialEnvironment(FName OSSName) const;

    UPROPERTY(Config)
    TArray<FString> IgnoreSavedCredentialsCommandLineKeys;

    FDelegateHandle OnOSSLoginCompleteDelegateHandle;

	bool bCrossplayEnabled;
	void CheckCrossplayPrivilege(const FUniqueNetId& UniqueId);
	void HandleCheckCrossPlayPrivilegeComplete(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults);

	bool bCommunicationEnabled;
	void CheckCommunicationPrivilege(const FUniqueNetId& UniqueId);
	void HandleCheckCommunicationPrivilegeComplete(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults);
	
	void HandleAppReactivated();
	void HandleAppReactivatedGameThread();
};
