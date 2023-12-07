// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_Common.h"
#include "GrantType.h"
#include "AuthAPI.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlineExternalUIInterface.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_LocalPlayerLoginSubsystem.generated.h"

class URH_LocalPlayerSubsystem;

/** @ingroup LocalPlayer
 * @brief Login Results.
 */
UENUM()
enum class ERHAPI_LoginResult : uint8
{
	/** Login was a success. */
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

	/** OSS AuthToken could not be retrieved for a user that was logged into the OSS.  This can be caused by a few reasons, such as the OSS account not being able to talk to the OSS network but being able to log into the account locally to the client machine */
	Fail_OSSAuthToken,

    /** User must accept all required agreements.  See FRH_LoginResult::bMustAcceptEULA, FRH_LoginResult::bMustAcceptTOS, FRH_LoginResult::bMustAcceptPP */
    Fail_MustAcceptAgreements,

    /** RH web login was denied. There are many reasons that can cause this, including misconfiguration of OSS IDs with the Rally Here APIs */
    Fail_RHDenied,

	/** Local player went missing during login process */
	Fail_LocalPlayerMissing,

    /** RH web login failed for an unknown reason.  This usually means there was a server error of some kind. */
    Fail_RHUnknown,
};

/**
 * @brief Converts the login result to a string for debug output.
 * @param [in] Val The login result to convert.
 */
RALLYHEREINTEGRATION_API FString ToString(ERHAPI_LoginResult Val);

/** @ingroup LocalPlayer
 * @brief Login Online Subsystem Type.
 */
UENUM()
enum class ERHAPI_LocalPlayerLoginOSS : uint8
{
	/** No type, means RallyHere. */
    None,
	/** Uses the Login OSS. */
    Login,
	/** Uses the Nickname OSS. */
    Nickname,
};

/**
 * @brief Converts the login OSS to a string for debug output.
 * @param [in] Val The login OSS to convert.
 */
RALLYHEREINTEGRATION_API FString ToString(ERHAPI_LocalPlayerLoginOSS Val);
/**
 * @brief Gets if the OSS supports re-login.
 */
RALLYHEREINTEGRATION_API bool OSSCannotRelogin(FName OSSName);

/** @ingroup LocalPlayer
 * @brief Struct for the login results.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_LoginResult
{
    GENERATED_BODY()
public:
    /** @brief Login Result. */
    UPROPERTY()
    ERHAPI_LoginResult Result;
    /** @brief Login OSS Type. */
    UPROPERTY()
    ERHAPI_LocalPlayerLoginOSS OSSType;
    /** @brief Login Error Message. */
    UPROPERTY()
    FString OSSErrorMessage;
	/** @brief RallyHere API Auth Error Code */
	UPROPERTY()
	FString RallyHereErrorCode;
    /** @brief Unique Net Id for the player. */
    TSharedPtr<const FUniqueNetId> OSSUniqueId;
    /** @brief Unique Net ID for the player when using Nickname Login. */
    TSharedPtr<const FUniqueNetId> NicknameOSSUniqueId;
    /** @brief Privilege Result for the login. */
    UPROPERTY()
    uint32 PrivilegeResults;
    /** @brief If true, the user needs to accept the EULA. */
    UPROPERTY()
    bool bMustAcceptEULA;
    /** @brief If true, the user needs to accept the TOS. */
    UPROPERTY()
    bool bMustAcceptTOS;
    /** @brief If true, the user needs to accept the PP. */
    UPROPERTY()
    bool bMustAcceptPP;
    /** @brief Default constructor. */
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
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnLoginCompleteMulticast, const FRH_LoginResult&);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnLoginCompleteDynamicMulticast, const FRH_LoginResult&, Result);
DECLARE_MULTICAST_DELEGATE(FRH_GeneralSettingChangedMulticast);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRH_GeneralSettingChangedDynamicMulticast);

/** @ingroup LocalPlayer
 *  @{
 */

/**
 * @brief Login Subsystem for the local player.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_LocalPlayerLoginSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()
public:
	/** @brief Type Define for logout calls. */
	typedef RallyHereAPI::Traits_Logout TLogout;

	/**
	 * @brief Initialize the subsystem.
	 */
    virtual void Initialize() override;
	/**
	* @brief Safely tears down the subsystem.
	*/
    virtual void Deinitialize() override;

    /** @brief Begins a complete multi-phased login to the OnlineSubsystem with the credentials provided on the command line,
      * checking if the user has appropriate permissions, and logging into RallyHere */
    void SubmitAutoLogin(bool bAcceptEULA = false,
                         bool bAcceptTOS = false,
                         bool bAcceptPP = false,
                         const FRH_OnLoginComplete& OnLoginCompleteDelegate = FRH_OnLoginComplete());

    /**
      * @brief Begins a complete multi-phased login to the OnlineSubsystem with the provided credentials,
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
                     FRH_OnLoginComplete OnLoginCompleteDelegate = FRH_OnLoginComplete());

	/**
	 * @brief Multicast delegate that gets broadcasted on login complete.
	 */
	FRH_OnLoginCompleteMulticast OnLoginComplete;

	/**
	 * @brief Multicast delegate that gets broadcasted on login complete.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Login")
	FRH_OnLoginCompleteDynamicMulticast BLUEPRINT_OnLoginComplete;

	/**
	 * @brief Multicast delegate that gets broadcasted when a player's crossplay setting is changed.
	 */
	FRH_GeneralSettingChangedMulticast OnCrossplaySettingChanged;

	/**
	 * @brief Multicast delegate that gets broadcasted when a player's crossplay setting is changed.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Login")
	FRH_GeneralSettingChangedDynamicMulticast BLUEPRINT_OnCrossplaySettingChanged;

    /**
     * @brief Requests a logout on the server clearing the players auth credentials.
     */
    void Logout();

    /** @brief Show an OSS-specific profile selection UI to the user.  This is for Xbox and other platforms that support profile swapping.
      * A valid profile is required to login on those platforms
      */
    bool ShowLoginProfileSelectionUI(bool bShowOnlineOnly = false, const FRH_OnProfileSelectionUIClosed& OnClosed = FRH_OnProfileSelectionUIClosed(), ERHAPI_LocalPlayerLoginOSS OSSType = ERHAPI_LocalPlayerLoginOSS::Login);

    /** @brief Online Subsystem to use for login.  If not provided, will use the default OSS */
    UPROPERTY(Config)
    FName LoginOSSName;

    /** @brief Online Subsystem to use for getting the user's display name for Rally Here.  If not provided, will use the Login OSS */
    UPROPERTY(Config)
    FName NicknameOSSName;

    /** @brief Is the login process allowed to load/store a refresh token for future login attempts? */
    UPROPERTY(Config)
    bool bLoginAllowStoredRefreshToken;

    /** @brief Does the game allow logins before full installation has completed? (Only supported with HIREZ ENGINE changes)*/
    UPROPERTY(Config)
    bool bLoginDuringPartialInstall;

    /** @brief Should the OSS require show the login UI before the login attempt? */
    UPROPERTY(Config)
    bool bLoginOSSRequireLoginUIFirst;

    /** @brief Should the OSS require show the login UI before the login attempt? */
    UPROPERTY(Config)
    bool bNicknameOSSRequireLoginUIFirst;

    /** @brief Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login */
    UPROPERTY(Config)
    bool bLoginOSSRequireOnlinePlayToLogin;

    /** @brief Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login */
    UPROPERTY(Config)
    bool bNicknameOSSRequireOnlinePlayToLogin;

    /** @brief Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold) */
    UPROPERTY(Config)
    bool bLoginOSSPromptAccountUpgradeIfInsufficient;

    /** @brief Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold) */
    UPROPERTY(Config)
    bool bNicknameOSSPromptAccountUpgradeIfInsufficient;

    /** @brief Should the OSS require a valid user id, even for failed logins. */
    UPROPERTY(Config)
    bool bLoginOSSRequireValidUserIdForFailedLogin;

    /** @brief Should the OSS require a valid user id, even for failed logins. */
    UPROPERTY(Config)
    bool bNicknameOSSRequireValidUserIdForFailedLogin;

    /** @brief Should we logout of the OSS and retry the login (that included a refresh token) failed? */
    UPROPERTY(Config)
    bool bLogoutAndRetryLoginIfRefreshLoginFailed;

	/** @brief Should we use the ID Token for populating the PARENT Portal Access Token */
	UPROPERTY(Config)
	bool bLoginOSSUseIDTokenAsPortalParentAccessToken;

    /** @brief Should we use the ID Token for populating the Portal Access Token */
    UPROPERTY(Config)
    bool bLoginOSSUseIDTokenAsPortalAccessToken;

    /**
      * @brief Should an OSS Login trigger a Base URL Resolve on the URH_Integration?  This is necessary for some OSSes (e.g. Switch/PS4) that don't
      * have environment information until after a login is attempted
      */
    UPROPERTY(Config)
    bool bResolveRallyHereBaseURLAfterOSSLogin;

    /** @brief Prefix applied to the saved credentials on platforms that support storing the refresh token */
    UPROPERTY(Config)
    FString SavedCredentialPrefix;

    /** @brief Are saved credentials allowed for auto-login? */
    bool ShouldUseSavedCredentials() const;

    /** @brief Get the fully resolved OSS by type */
    IOnlineSubsystem* GetOSS(ERHAPI_LocalPlayerLoginOSS OSSType) const;

    /** @brief Get the fully resolved OSS to use for Login */
    IOnlineSubsystem* GetLoginOSS() const;

    /** @brief Get the fully resolved OSS to use for getting a player's display name for login.  This triggers a second OSS login */
    IOnlineSubsystem* GetNicknameOSS() const;

    /** @brief Gets if crossplay is enabled */
    virtual bool IsCrossplayEnabled() const { return bCrossplayEnabled; }
    /** @brief Gets if cvommunication is enabled */
    virtual bool IsCommunicationEnabled() const { return bCommunicationEnabled; }

protected:
    /**
     * @brief Pending login result.
     */
    struct FRH_PendingLoginRequest
    {
        /** @brief Account credentials needed to sign in to an online service. */
        FOnlineAccountCredentials Credentials;
        /** @brief Token to refresh the Account credentials. */
        FString CredentialRefreshToken;
        /** @brief Accept the EULA. */
        bool bAcceptEULA;
        /** @brief Accept the TOS. */
        bool bAcceptTOS;
        /** @brief Accept the PP. */
        bool bAcceptPP;
        /** @brief Unique Net ID for the PLAYER. */
        TSharedPtr<const FUniqueNetId> OSSUniqueId;
        /** @brief Unique Net ID for the player when using Nickname Login. */
        TSharedPtr<const FUniqueNetId> NicknameOSSUniqueId;
        /** @brief Unique Current login phase. */
        ERHAPI_LocalPlayerLoginOSS LoginPhase;
        /** @brief Delegate for login completion. */
        FRH_OnLoginComplete OnLoginComplete;
        /**
         * @brief Creates a login result from the of the pending request.
         * @param [in] Result API Response to create the result from.
         * @return The Login Result.
         */
        FRH_LoginResult CreateResult(ERHAPI_LoginResult Result) const;
    };
    /**
     * @brief Posts the results from a login request.
     * @param [in] Req The login request.
     * @param [in] Res The login results.
     */
    virtual void PostResults(FRH_PendingLoginRequest& Req, const FRH_LoginResult& Res);

    using PendingLoginUniqueIdRef = TSharedPtr<const FUniqueNetId> FRH_PendingLoginRequest::*;
    using OSSLoginCompleteFn = void (URH_LocalPlayerLoginSubsystem::*)(int32 LocalUserNum, bool bSuccessful, const FUniqueNetId& UniqueId,
                                                                       const FString& ErrorMessage, FRH_PendingLoginRequest Req);
    using OSSPrivilegeResultsFn = void (URH_LocalPlayerLoginSubsystem::*)(const FUniqueNetId& UniqueId,  EUserPrivileges::Type Privilege,
                                                                          uint32 PrivilegeResults, FRH_PendingLoginRequest Req);
    /**
     * @brief Prompts the online subsystem to show login UI.
     * @param [in] Req The pending login request.
     */
    virtual void DoShowLoginOSSLoginUI(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Prompts the online subsystem to show the choose nickname login UI.
	 * @param [in] Req The pending login request.
	 */
    virtual void DoShowNicknameOSSLoginUI(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Callback from the user closing the nickname selection on the online subsystem.
	 * @param [in] UniqueId Unique Net Id player selected.
	 * @param [in] Error Error message if any.
	 * @param [in] Req The pending login request.
	 */
    virtual void NicknameOSSLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId, const FOnlineError& Error, FRH_PendingLoginRequest Req);
	/**
	 * @brief Callback from the user closing the login UI of the online subsystem.
	 * @param [in] UniqueId Unique Net Id player selected.
	 * @param [in] Error Error message if any.
	 * @param [in] Req The pending login request.
	 */
    virtual void LoginOSSLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId, const FOnlineError& Error, FRH_PendingLoginRequest Req);
	/**
	 * @brief Starts the online subsystem login.
	 * @param [in] Req The pending login request.
	 */
    virtual void DoLoginOSSLogin(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Starts the online subsystem nickname login.
	 * @param [in] Req The pending login request.
	 */
    virtual void DoNicknameOSSLogin(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Starts the online subsystem login.
	 * @param [in] Req The pending login request.
	 * @param [in] OSS The online subsystem being logged into.
	 * @param [in] OnComplete Callback delegate for when login finishes.
	 */
    virtual void DoOSSLogin(FRH_PendingLoginRequest& Req, IOnlineSubsystem* OSS, OSSLoginCompleteFn OnComplete);
	/**
	 * @brief Handler for OSS Login Completion.
	 * @param [in] ControllerId Controller Id of the local player logging in.
	 * @param [in] bSuccessful Was the login successful.
	 * @param [in] UniqueId Unique Net Id of the player logging in.
	 * @param [in] ErrorMessage Error message if any.
	 * @param [in] Req The pending login request.
	 */
    virtual void OSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId& UniqueId, const FString& ErrorMessage, FRH_PendingLoginRequest Req);
	/**
	 * @brief Handler for OSS Nickname Login Completion.
	 * @param [in] ControllerId Controller Id of the local player logging in.
	 * @param [in] bSuccessful Was the login successful.
	 * @param [in] UniqueId Unique Net Id of the player logging in.
	 * @param [in] ErrorMessage Error message if any.
	 * @param [in] Req The pending login request.
	 */
    virtual void OSSNicknameLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId& UniqueId, const FString& ErrorMessage, FRH_PendingLoginRequest Req);
	/**
	 * @brief Handler for OSS Login Completion.
	 * @param [in] ControllerId Controller Id of the local player logging in.
	 * @param [in] bSuccessful Was the login successful.
	 * @param [in] UniqueId Unique Net Id of the player logging in.
	 * @param [in] ErrorMessage Error message if any.
	 * @param [in] Req The pending login request.
	 * @param [in] OSS The online subsystem being logged into.
	 * @param [in] UniqueIdPtr Pending Login pointer reference.
	 * @param [in] bOSSRequireValidUserIdForFailedLogin If the login failed due to no valid user id.
	 */
    virtual bool OnOSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId& UniqueId, const FString& ErrorMessage, FRH_PendingLoginRequest& Req,
									IOnlineSubsystem* OSS, PendingLoginUniqueIdRef UniqueIdPtr, bool bOSSRequireValidUserIdForFailedLogin);
	/**
	 * @brief Callback for when the OSS login UI is closed.
	 * @param [in] UniqueId Unique Net Id of the player logging in.
	 * @param [in] ControllerIndex Controller Id of the local player logging in.
	 * @param [in] Error Error message if any.
	 * @param [in] OnClosed Callback delegate for when the login UI is closed.
	 */
    virtual void ExternalUI_ShowLoginUIClosed(TSharedPtr<const FUniqueNetId> UniqueId, const int ControllerIndex,
    										  const FOnlineError& Error, FRH_OnProfileSelectionUIClosed OnClosed);
	/**
	 * @brief Checks users Privileges for OSS Login.
	 * @param [in] Req The pending login request.
	 */
    virtual void DoLoginOSSPrivilegeCheck(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Checks users Privileges for OSS Nickname Login.
	 * @param [in] Req The pending login request.
	 */
    virtual void DoNicknameOSSPrivilegeCheck(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Checks users Privileges for OSS Login.
	 * @param [in] Req The pending login request.
	 * @param [in] OSS The online subsystem being logged into.
	 * @param [in] UniqueIdPtr Pending Login pointer reference.
	 * @param [in] OnPrivilegeResults Callback delegate for when the privilege check is complete.
	 */
    virtual void DoOSSPrivilegeCheck(FRH_PendingLoginRequest& Req, IOnlineSubsystem* OSS, PendingLoginUniqueIdRef UniqueIdPtr, OSSPrivilegeResultsFn OnPrivilegeResults);
	/**
	 * @brief Handler for online subsystem callback for OSS Privilege check.
	 * @param [in] UniqueId Unique Net Id of the player being checked in.
	 * @param [in] Privilege Privilege being checked.
	 * @param [in] PrivilegeResults Privilege check results.
	 * @param [in] Req The pending login request.
	 */
    virtual void OnLoginOSSPrivilegeResults(const FUniqueNetId& UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, FRH_PendingLoginRequest Req);
	/**
	 * @brief Handler for online subsystem callback for OSS Nickname Privilege check.
	 * @param [in] UniqueId Unique Net Id of the player being checked in.
	 * @param [in] Privilege Privilege being checked.
	 * @param [in] PrivilegeResults Privilege check results.
	 * @param [in] Req The pending login request.
	 */
    virtual void OnNicknameOSSPrivilegeResults(const FUniqueNetId& UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, FRH_PendingLoginRequest Req);
	/**
	 * @brief Handler for online subsystem callback for OSS Privilege check.
	 * @param [in] UniqueId Unique Net Id of the player being checked in.
	 * @param [in] Privilege Privilege being checked.
	 * @param [in] PrivilegeResults Privilege check results.
	 * @param [in] Req The pending login request.
	 * @param [in] OSS The online subsystem being logged into.
	 * @param [in] bPromptForAccountUpgradeIfInsufficient If true, prompt user to upgrade their platform account.
	 */
    virtual bool OnOSSPrivilegeResults(const FUniqueNetId& UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults,
									   FRH_PendingLoginRequest Req, IOnlineSubsystem* OSS, bool bPromptForAccountUpgradeIfInsufficient);
	/**
	 * @brief Start the retrieval of the OSS Auth Token.
	 * @param [in] Req The pending login request.
	 */
	virtual void RetrieveOSSAuthToken(FRH_PendingLoginRequest& Req);
	/**
	 * @brief Start the login to Rally Here.
	 * @param [in] LocalUserNum Local user number of the player logging in.
	 * @param [in] bWasSuccessful Was the retrieval successful.
	 * @param [in] AuthTokenWrapper The auth token wrapper.
	 * @param [in] Req The pending login request.
	 */
	virtual void RetrieveOSSAuthTokenComplete(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken& AuthToken, FRH_PendingLoginRequest Req);
	/**
	 * @brief Start the login to Rally Here.
	 * @param [in] Req The pending login request.
	 */
    virtual void DoRallyHereLogin(FRH_PendingLoginRequest& Req, const FExternalAuthToken& AuthToken);
	/**
	 * @brief Handle the response from the login to Rally Here.
	 * @param [in] Resp Response from the login to Rally Here.
	 * @param [in] Req The pending login request.
	 */
    virtual void RallyHereLoginComplete(const RallyHereAPI::FResponse_Login& Resp, FRH_PendingLoginRequest Req);
	/**
	 * @brief Gets the cached credentials for the given online subsystem.
	 * @param OSSName Name of the online subsystem.
	 * @return Credentials token for the subsystem.
	 */
    virtual FString GetSavedCredentialEnvironment(FName OSSName) const;
	/** @brief Configurations to skip saved credentials. */
    UPROPERTY(Config)
    TArray<FString> IgnoreSavedCredentialsCommandLineKeys;
	/** @brief Delegate to listen for OSS login completion. */
    FDelegateHandle OnOSSLoginCompleteDelegateHandle;
	/** @brief Stores if crossplay is enabled. */
	bool bCrossplayEnabled;
	/**
	 * @brief Checks the users OSS privileges for crossplay.
	 * @param [in] UniqueId Unique Net Id of the player being checked in.
	 */
	virtual void CheckCrossplayPrivilege(const FUniqueNetId& UniqueId);
	/**
	 * @brief Handles the response of the OSS crossplay privilege check.
	 * @param UserId Unique Net Id of the player being checked in.
	 * @param Privilege Privilege being checked.
	 * @param PrivilegeResults Privilege check results.
	 */
	virtual void HandleCheckCrossPlayPrivilegeComplete(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults);
	/** @brief Stores if communication is enabled. */
	bool bCommunicationEnabled;
	/**
	 * @brief Checks the users OSS privileges for communicataion.
	 * @param [in] UniqueId Unique Net Id of the player being checked in.
	 */
	virtual void CheckCommunicationPrivilege(const FUniqueNetId& UniqueId);
	/**
	 * @brief Handles the response of the OSS communicaation privilege check.
	 * @param UserId Unique Net Id of the player being checked in.
	 * @param Privilege Privilege being checked.
	 * @param PrivilegeResults Privilege check results.
	 */
	virtual void HandleCheckCommunicationPrivilegeComplete(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults);
	/**
	 * @brief Handles the app being restored from being suspended.
	 */
	virtual void HandleAppReactivated();
	/**
	 * @brief Handles the app game thread being restored from being suspended.
	 */
	virtual void HandleAppReactivatedGameThread();
};

/** @} */