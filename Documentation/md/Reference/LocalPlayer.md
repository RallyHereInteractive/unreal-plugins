---
title: LocalPlayer
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ERHAPI_LoginResult`](#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)            | Login Results.
`enum `[`ERHAPI_LocalPlayerLoginOSS`](#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)            | Login Online Subsystem Type.
`class `[`URH_LocalPlayerLoginSubsystem`](#classURH__LocalPlayerLoginSubsystem) | Login Subsystem for the local player.
`class `[`URH_LocalPlayerPresenceSubsystem`](#classURH__LocalPlayerPresenceSubsystem) | Subsystem to manage the local players presence.
`class `[`URH_LocalPlayerSessionSubsystem`](#classURH__LocalPlayerSessionSubsystem) | Subsystem to manage sessions for the local player.
`class `[`URH_LocalPlayerSubsystem`](#classURH__LocalPlayerSubsystem) | Subsystem to manage the local player.
`struct `[`FRH_LoginResult`](#structFRH__LoginResult) | Struct for the login results.

## Members

#### `enum `[`ERHAPI_LoginResult`](#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0) <a id="group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
Success            | Login was a success.
Fail_PartialInstall            | Login denied because a partial install is underway.
Fail_LoginAlreadyPending            | There is already a pending login for this LocalPlayer.
Fail_OSSMissing            | There is no OnlineSubsystem to login with. Check that the LoginOSS is valid, and the OSS was started correctly
Fail_OSSNotSupported            | OSS Is not supported by Rally Here
Fail_OSSLoginUINotShown            | OSS Login UI could not be opened
Fail_OSSLoginUINoUserSelected            | OSS Login UI could not be opened
Fail_OSSLogin            | OnlineSubsystem login failed due to an OSS-specific reason. See the OSSErrorMessage for more details
Fail_OSSLogout            | OSS User was logged out during our login operation. Login can be retried.
Fail_OSSNeedsProfile            | OnlineSubsystem needs a valid selected profile. Call ShowProfileSelectionUI before logging in again
Fail_OSSAccountTypeNotSufficient            | OSS User's account type is not sufficient (e.g. they do not have Xbox Live Gold or PS+)
Fail_OSSUserNotFound            | OSS User was not found, even after OSS Login completed. This usually means that there is no connection to Xbox Live/PSN/etc
Fail_OSSAgeRestriction            | OSS User does not meet age requirements for online play
Fail_OSSPrivilegeCheck            | OSS User does not meet requirements for online play. See [FRH_LoginResult::PrivilegeResults](LocalPlayer.md#structFRH__LoginResult_1a0348a5f8c7982ea7a648276df7096998) and IOnlineIdentity::EPrivilegeResults
Fail_OSSAuthToken            | OSS AuthToken could not be retrieved for a user that was logged into the OSS. This can be caused by a few reasons, such as the OSS account not being able to talk to the OSS network but being able to log into the account locally to the client machine
Fail_MustAcceptAgreements            | User must accept all required agreements. See [FRH_LoginResult::bMustAcceptEULA](LocalPlayer.md#structFRH__LoginResult_1a3b1a5425c4ad3df85754d7828afa429f), [FRH_LoginResult::bMustAcceptTOS](LocalPlayer.md#structFRH__LoginResult_1a662f76700fe5dd56560bb7df514b0b6a), [FRH_LoginResult::bMustAcceptPP](LocalPlayer.md#structFRH__LoginResult_1a0f6674180918672b79770379a8af937c)
Fail_RHDenied            | RH web login was denied. There are many reasons that can cause this, including misconfiguration of OSS IDs with the Rally Here APIs
Fail_LocalPlayerMissing            | Local player went missing during login process
Fail_ReloginWithoutSavedCredentials            | Relogin called without saved credentials
Fail_InvalidAuthContext            | The auth context has become invalid over the course of the login process
Fail_InvalidOSSUniqueNetId            | The OSS unique id is invalid after it was required to be valid in the login process
Fail_RHUnknown            | RH web login failed for an unknown reason. This usually means there was a server error of some kind.

Login Results.

#### `enum `[`ERHAPI_LocalPlayerLoginOSS`](#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) <a id="group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
None            | No type, means RallyHere.
Login            | Uses the Login OSS.
Nickname            | Uses the Nickname OSS.

Login Online Subsystem Type.

## class `URH_LocalPlayerLoginSubsystem` <a id="classURH__LocalPlayerLoginSubsystem"></a>

```
class URH_LocalPlayerLoginSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Login Subsystem for the local player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnLoginCompleteMulticast `[`OnLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a843a3800206848baa22ddf46eb997e04) | Multicast delegate that gets broadcasted on login complete.
`public FRH_GeneralSettingChangedMulticast `[`OnCrossplaySettingChanged`](#classURH__LocalPlayerLoginSubsystem_1ab039522171ab500f9c26d0e224bde938) | Multicast delegate that gets broadcasted when a player's crossplay setting is changed.
`public FName `[`LoginOSSName`](#classURH__LocalPlayerLoginSubsystem_1a01d07f25f0c0000420aeaa3a9a124a85) | Online Subsystem to use for login. If not provided, will use the default OSS.
`public FName `[`NicknameOSSName`](#classURH__LocalPlayerLoginSubsystem_1a1328f2314ce4640fa291c3ea6722c286) | Online Subsystem to use for getting the user's display name for Rally Here. If not provided, will use the Login OSS.
`public bool `[`bLoginAllowStoredRefreshToken`](#classURH__LocalPlayerLoginSubsystem_1a37770d7b5203f211cdbb6aa79147393a) | Is the login process allowed to load/store a refresh token for future login attempts?
`public bool `[`bLoginDuringPartialInstall`](#classURH__LocalPlayerLoginSubsystem_1a48d9066d47e46f02ce854b99adf0c8d2) | Does the game allow logins before full installation has completed? (Only supported with HIREZ ENGINE changes)
`public bool `[`bLoginOSSRequireLoginUIFirst`](#classURH__LocalPlayerLoginSubsystem_1a2313c3e5a982d6bb4d8d27636b9ad384) | Should the OSS require show the login UI before the login attempt?
`public bool `[`bNicknameOSSRequireLoginUIFirst`](#classURH__LocalPlayerLoginSubsystem_1aa48fefd9f000fde0f8020800d3a72863) | Should the OSS require show the login UI before the login attempt?
`public bool `[`bLoginOSSRequireOnlinePlayToLogin`](#classURH__LocalPlayerLoginSubsystem_1a75a3157fecc25b6b82d90aab3ba43041) | Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.
`public bool `[`bNicknameOSSRequireOnlinePlayToLogin`](#classURH__LocalPlayerLoginSubsystem_1a8b294ac15cd5f2d1c75b8c092a593905) | Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.
`public bool `[`bLoginOSSPromptAccountUpgradeIfInsufficient`](#classURH__LocalPlayerLoginSubsystem_1aa82d05952f1e26b805d9c6ae9b2addd7) | Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)
`public bool `[`bNicknameOSSPromptAccountUpgradeIfInsufficient`](#classURH__LocalPlayerLoginSubsystem_1a02788d0e33ad37faecda684ac3058862) | Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)
`public bool `[`bLoginOSSRequireValidUserIdForFailedLogin`](#classURH__LocalPlayerLoginSubsystem_1a61dd1b6a2b1d6ea234d3ee722ef45e8e) | Should the OSS require a valid user id, even for failed logins.
`public bool `[`bNicknameOSSRequireValidUserIdForFailedLogin`](#classURH__LocalPlayerLoginSubsystem_1aea1502da749e3a887d5e854302f9b11f) | Should the OSS require a valid user id, even for failed logins.
`public bool `[`bLogoutAndRetryLoginIfRefreshLoginFailed`](#classURH__LocalPlayerLoginSubsystem_1a1f638ff5b5f352dfffdb315e30478d3c) | Should we logout of the OSS and retry the login (that included a refresh token) failed?
`public bool `[`bLoginOSSUseIDTokenAsPortalParentAccessToken`](#classURH__LocalPlayerLoginSubsystem_1ae7c66f0f89b289dff65c385c23f0590d) | Should we use the ID Token for populating the PARENT Portal Access Token.
`public bool `[`bLoginOSSUseIDTokenAsPortalAccessToken`](#classURH__LocalPlayerLoginSubsystem_1a2ddbbfbcad16d8ae949cfcbed714eef1) | Should we use the ID Token for populating the Portal Access Token.
`public bool `[`bResolveRallyHereBaseURLAfterOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1a92a9774beae64448f7c0895a7e6eacff) | Should an OSS Login trigger a Base URL Resolve on the [FRH_Integration](IntegrationBase.md#classFRH__Integration)? This is necessary for some OSSes (e.g. Switch/PS4) that don't have environment information until after a login is attempted.
`public FString `[`SavedCredentialPrefix`](#classURH__LocalPlayerLoginSubsystem_1a5ff0051c770983ee18208136805b9754) | Prefix applied to the saved credentials on platforms that support storing the refresh token.
`public virtual void `[`Initialize`](#classURH__LocalPlayerLoginSubsystem_1a938bd41c5c5fa6b5eacbeb43d0758a63)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__LocalPlayerLoginSubsystem_1a363bdf9386b7854ed44a03cfe6faea18)`()` | Safely tears down the subsystem.
`public virtual void `[`OnUserChanged`](#classURH__LocalPlayerLoginSubsystem_1ab6d2f50070d3611329243a43e898785b)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Base handling when the local user changes, override to provide functionality.
`public virtual void `[`HandleNotification`](#classURH__LocalPlayerLoginSubsystem_1ad80279dbf8a8ae3b3c1a022afb109985)`(const struct `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` | Handle a notification from the notification API.
`public void `[`SubmitAutoLogin`](#classURH__LocalPlayerLoginSubsystem_1aec27fd534d794470e4eb893de8d722c4)`(bool bAcceptEULA,bool bAcceptTOS,bool bAcceptPP,const FRH_OnLoginComplete & OnLoginCompleteDelegate)` | Begins a complete multi-phased login to the OnlineSubsystem with the credentials provided on the command line, checking if the user has appropriate permissions, and logging into RallyHere.
`public void `[`ResubmitLastSuccessfulLogin`](#classURH__LocalPlayerLoginSubsystem_1a937e6ee9e5592c699ff28bbf89344532)`(const FRH_OnLoginComplete & OnLoginCompleteDelegate)` | Submits a complete multi-phased login using the last successful set of login parameters.
`public void `[`SubmitLogin`](#classURH__LocalPlayerLoginSubsystem_1a8feda49ddf6a5f48448d4f989eca3d57)`(const FOnlineAccountCredentials & Credentials,FString CredentialRefreshToken,bool bAcceptEULA,bool bAcceptTOS,bool bAcceptPP,FRH_OnLoginComplete OnLoginCompleteDelegate)` | Begins a complete multi-phased login to the OnlineSubsystem with the provided credentials, checking if the user has appropriate permissions, and logging into RallyHere.
`public void `[`Logout`](#classURH__LocalPlayerLoginSubsystem_1ae3394f883c697e57a705c23d8b0be23a)`()` | Requests a logout on the server clearing the players auth credentials.
`public bool `[`ShowLoginProfileSelectionUI`](#classURH__LocalPlayerLoginSubsystem_1a6b569dc65fc1a0a0b6bb9f03a5c33ca9)`(bool bShowOnlineOnly,const FRH_OnProfileSelectionUIClosed & OnClosed,`[`ERHAPI_LocalPlayerLoginOSS`](undefined.md#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)` OSSType)` | Show an OSS-specific profile selection UI to the user. This is for Xbox and other platforms that support profile swapping. A valid profile is required to login on those platforms.
`public bool `[`ShouldUseSavedCredentials`](#classURH__LocalPlayerLoginSubsystem_1a508f8e109c3ec8be8a8b3fc2cb4ded58)`() const` | Are saved credentials allowed for auto-login?
`public IOnlineSubsystem * `[`GetOSS`](#classURH__LocalPlayerLoginSubsystem_1a386630639294cc738abf45fff7109357)`(`[`ERHAPI_LocalPlayerLoginOSS`](undefined.md#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)` OSSType) const` | Get the fully resolved OSS by type.
`public IOnlineSubsystem * `[`GetLoginOSS`](#classURH__LocalPlayerLoginSubsystem_1ac64020e992c532e82d93fd02bc4fee71)`() const` | Get the fully resolved OSS to use for Login.
`public IOnlineSubsystem * `[`GetNicknameOSS`](#classURH__LocalPlayerLoginSubsystem_1aa8daa7ad4b47b22e42e80fb55caa60b0)`() const` | Get the fully resolved OSS to use for getting a player's display name for login. This triggers a second OSS login.
`public inline virtual bool `[`IsCrossplayEnabled`](#classURH__LocalPlayerLoginSubsystem_1a311a51ee03f291f4c236f1983e0b3f7c)`() const` | Gets if crossplay is enabled.
`public inline virtual bool `[`IsCommunicationEnabled`](#classURH__LocalPlayerLoginSubsystem_1a1412124dc14c386e02ce52bbcb2671c0)`() const` | Gets if cvommunication is enabled.
`protected TArray< FString > `[`IgnoreSavedCredentialsCommandLineKeys`](#classURH__LocalPlayerLoginSubsystem_1a807481151c1204a711576e7372534dc1) | Configurations to skip saved credentials.
`protected FDelegateHandle `[`OnOSSLoginCompleteDelegateHandle`](#classURH__LocalPlayerLoginSubsystem_1a646e2be986b89238b1f25a9de4578e96) | Delegate to listen for OSS login completion.
`protected bool `[`bCrossplayEnabled`](#classURH__LocalPlayerLoginSubsystem_1a7c85f34c2500e512c00bb4d424948069) | Stores if crossplay is enabled.
`protected TOptional< `[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` > `[`LastSuccessfulLoginRequest`](#classURH__LocalPlayerLoginSubsystem_1af7d7ed1e837db9861c24dc7100fcac2c) | Stores the last successful login result, for use when refresh token expires.
`protected bool `[`bCommunicationEnabled`](#classURH__LocalPlayerLoginSubsystem_1a80a9112506cf7920ab1945062b2eb7ca) | Stores if communication is enabled.
`protected virtual void `[`PostResults`](#classURH__LocalPlayerLoginSubsystem_1aa8588e2a9f530a54818aeb56fd091e7d)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,const `[`FRH_LoginResult`](LocalPlayer.md#structFRH__LoginResult)` & Res)` | Posts the results from a login request.
`protected virtual void `[`DoShowLoginOSSLoginUI`](#classURH__LocalPlayerLoginSubsystem_1ac38e03f331309d47d734f788930ed3f4)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Prompts the online subsystem to show login UI.
`protected virtual void `[`DoShowNicknameOSSLoginUI`](#classURH__LocalPlayerLoginSubsystem_1a8c668ea60d6d684d3f66cf96ac5a6914)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Prompts the online subsystem to show the choose nickname login UI.
`protected virtual void `[`NicknameOSSLoginUIClosed`](#classURH__LocalPlayerLoginSubsystem_1a3a8c0c7cb777ae735eaf5816b5c1442c)`(TSharedPtr< const FUniqueNetId > UniqueId,const FOnlineError & Error,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Callback from the user closing the nickname selection on the online subsystem.
`protected virtual void `[`LoginOSSLoginUIClosed`](#classURH__LocalPlayerLoginSubsystem_1a3ed944e354b67a3253fc3b266d2d74f3)`(TSharedPtr< const FUniqueNetId > UniqueId,const FOnlineError & Error,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Callback from the user closing the login UI of the online subsystem.
`protected virtual void `[`DoLoginOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1a1348a27ffee35644cd6b1ffaaa992ff0)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Starts the online subsystem login.
`protected virtual void `[`DoNicknameOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1aaec0f125f3a1b048f96dd9f0b15c8378)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Starts the online subsystem nickname login.
`protected virtual void `[`DoOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1a4a4d560752f5f6d1eee297d1b0d533a4)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,IOnlineSubsystem * OSS,OSSLoginCompleteFn OnComplete)` | Starts the online subsystem login.
`protected virtual void `[`OSSLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a09d25f9ea9975061d1c66c113bfb6339)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Handler for OSS Login Completion.
`protected virtual void `[`OSSNicknameLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a37bae042ff553fd98f3770c129a45949)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Handler for OSS Nickname Login Completion.
`protected virtual bool `[`OnOSSLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1af158781b3e66c68f16de41e6149e6b2e)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,IOnlineSubsystem * OSS,PendingLoginUniqueIdRef UniqueIdPtr,bool bOSSRequireValidUserIdForFailedLogin)` | Handler for OSS Login Completion.
`protected virtual void `[`ExternalUI_ShowLoginUIClosed`](#classURH__LocalPlayerLoginSubsystem_1a333418b1fa9eb68991567bac31129339)`(TSharedPtr< const FUniqueNetId > UniqueId,const int ControllerIndex,const FOnlineError & Error,FRH_OnProfileSelectionUIClosed OnClosed)` | Callback for when the OSS login UI is closed.
`protected virtual void `[`DoLoginOSSPrivilegeCheck`](#classURH__LocalPlayerLoginSubsystem_1a7b65ebe24a9e0bf8d0a1cf5813c28c96)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Checks users Privileges for OSS Login.
`protected virtual void `[`DoNicknameOSSPrivilegeCheck`](#classURH__LocalPlayerLoginSubsystem_1a59711795bf74e953d9efab8f66eecc03)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Checks users Privileges for OSS Nickname Login.
`protected virtual void `[`DoOSSPrivilegeCheck`](#classURH__LocalPlayerLoginSubsystem_1a529bf4977cd385ddc75ca33b711ef914)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,IOnlineSubsystem * OSS,PendingLoginUniqueIdRef UniqueIdPtr,OSSPrivilegeResultsFn OnPrivilegeResults)` | Checks users Privileges for OSS Login.
`protected virtual void `[`OnLoginOSSPrivilegeResults`](#classURH__LocalPlayerLoginSubsystem_1a2381665262c193523ec0bfae00b073af)`(const FUniqueNetId & UniqueId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Handler for online subsystem callback for OSS Privilege check.
`protected virtual void `[`OnNicknameOSSPrivilegeResults`](#classURH__LocalPlayerLoginSubsystem_1a650fbeb427bb5c402e36bef9c793342a)`(const FUniqueNetId & UniqueId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Handler for online subsystem callback for OSS Nickname Privilege check.
`protected virtual bool `[`OnOSSPrivilegeResults`](#classURH__LocalPlayerLoginSubsystem_1a8d1c57f00dd702f3739e5e2f18665542)`(const FUniqueNetId & UniqueId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req,IOnlineSubsystem * OSS,bool bPromptForAccountUpgradeIfInsufficient)` | Handler for online subsystem callback for OSS Privilege check.
`protected virtual void `[`RetrieveOSSAuthToken`](#classURH__LocalPlayerLoginSubsystem_1abe4cba66bc2a21657b730e9c456a8297)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` | Start the retrieval of the OSS Auth Token.
`protected virtual void `[`RetrieveOSSAuthTokenComplete`](#classURH__LocalPlayerLoginSubsystem_1a27fbe50ee06ccb5822c1edbf773d81a8)`(int32 LocalUserNum,bool bWasSuccessful,const FExternalAuthToken & AuthToken,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Start the login to Rally Here.
`protected virtual void `[`DoRallyHereLogin`](#classURH__LocalPlayerLoginSubsystem_1ac566c5385eac7117a5562ba0010cf4fc)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,const FExternalAuthToken & AuthToken)` | Start the login to Rally Here.
`protected virtual void `[`DoRallyHereLoginWithIpAddress`](#classURH__LocalPlayerLoginSubsystem_1a9ab43c881dddd615e3ea4ae6ab298149)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,const FExternalAuthToken & AuthToken,const FString & IpAddress)` | Start the login to Rally Here.
`protected virtual void `[`RallyHereLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a7b877ea539a11d526e488f43a1044cd4)`(const RallyHereAPI::FResponse_Login & Resp,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` | Handle the response from the login to Rally Here.
`protected virtual FString `[`GetSavedCredentialEnvironment`](#classURH__LocalPlayerLoginSubsystem_1a159afb852506a24c40a44f315debfbc6)`(FName OSSName) const` | Gets the cached credentials for the given online subsystem.
`protected virtual void `[`CheckCrossplayPrivilege`](#classURH__LocalPlayerLoginSubsystem_1a56da439941bdce891cbe97ebf75d5666)`(const FUniqueNetId & UniqueId)` | Checks the users OSS privileges for crossplay.
`protected virtual void `[`HandleCheckCrossPlayPrivilegeComplete`](#classURH__LocalPlayerLoginSubsystem_1a9695dff647ab1d5f81acbf29f38882e6)`(const FUniqueNetId & UserId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults)` | Handles the response of the OSS crossplay privilege check.
`protected virtual void `[`CheckCommunicationPrivilege`](#classURH__LocalPlayerLoginSubsystem_1af758cbf06c5f4a9a5ab87367cb69d60a)`(const FUniqueNetId & UniqueId)` | Checks the users OSS privileges for communicataion.
`protected virtual void `[`HandleCheckCommunicationPrivilegeComplete`](#classURH__LocalPlayerLoginSubsystem_1a941c8ad7a2ca3204ce9ac44bad2b7986)`(const FUniqueNetId & UserId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults)` | Handles the response of the OSS communicaation privilege check.
`protected virtual void `[`HandleAppReactivated`](#classURH__LocalPlayerLoginSubsystem_1aa8c118625fd0a61d8ee5283d539d6d00)`()` | Handles the app being restored from being suspended.
`protected virtual void `[`HandleAppReactivatedGameThread`](#classURH__LocalPlayerLoginSubsystem_1a60779ab08578f6978df960d7d3877782)`()` | Handles the app game thread being restored from being suspended.
`typedef `[`TLogout`](#classURH__LocalPlayerLoginSubsystem_1a8eb4169e49a752b5334dbfb87e7d5c93) | Type Define for logout calls.

### Members

#### `public FRH_OnLoginCompleteMulticast `[`OnLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a843a3800206848baa22ddf46eb997e04) <a id="classURH__LocalPlayerLoginSubsystem_1a843a3800206848baa22ddf46eb997e04"></a>

Multicast delegate that gets broadcasted on login complete.

#### `public FRH_GeneralSettingChangedMulticast `[`OnCrossplaySettingChanged`](#classURH__LocalPlayerLoginSubsystem_1ab039522171ab500f9c26d0e224bde938) <a id="classURH__LocalPlayerLoginSubsystem_1ab039522171ab500f9c26d0e224bde938"></a>

Multicast delegate that gets broadcasted when a player's crossplay setting is changed.

#### `public FName `[`LoginOSSName`](#classURH__LocalPlayerLoginSubsystem_1a01d07f25f0c0000420aeaa3a9a124a85) <a id="classURH__LocalPlayerLoginSubsystem_1a01d07f25f0c0000420aeaa3a9a124a85"></a>

Online Subsystem to use for login. If not provided, will use the default OSS.

#### `public FName `[`NicknameOSSName`](#classURH__LocalPlayerLoginSubsystem_1a1328f2314ce4640fa291c3ea6722c286) <a id="classURH__LocalPlayerLoginSubsystem_1a1328f2314ce4640fa291c3ea6722c286"></a>

Online Subsystem to use for getting the user's display name for Rally Here. If not provided, will use the Login OSS.

#### `public bool `[`bLoginAllowStoredRefreshToken`](#classURH__LocalPlayerLoginSubsystem_1a37770d7b5203f211cdbb6aa79147393a) <a id="classURH__LocalPlayerLoginSubsystem_1a37770d7b5203f211cdbb6aa79147393a"></a>

Is the login process allowed to load/store a refresh token for future login attempts?

#### `public bool `[`bLoginDuringPartialInstall`](#classURH__LocalPlayerLoginSubsystem_1a48d9066d47e46f02ce854b99adf0c8d2) <a id="classURH__LocalPlayerLoginSubsystem_1a48d9066d47e46f02ce854b99adf0c8d2"></a>

Does the game allow logins before full installation has completed? (Only supported with HIREZ ENGINE changes)

#### `public bool `[`bLoginOSSRequireLoginUIFirst`](#classURH__LocalPlayerLoginSubsystem_1a2313c3e5a982d6bb4d8d27636b9ad384) <a id="classURH__LocalPlayerLoginSubsystem_1a2313c3e5a982d6bb4d8d27636b9ad384"></a>

Should the OSS require show the login UI before the login attempt?

#### `public bool `[`bNicknameOSSRequireLoginUIFirst`](#classURH__LocalPlayerLoginSubsystem_1aa48fefd9f000fde0f8020800d3a72863) <a id="classURH__LocalPlayerLoginSubsystem_1aa48fefd9f000fde0f8020800d3a72863"></a>

Should the OSS require show the login UI before the login attempt?

#### `public bool `[`bLoginOSSRequireOnlinePlayToLogin`](#classURH__LocalPlayerLoginSubsystem_1a75a3157fecc25b6b82d90aab3ba43041) <a id="classURH__LocalPlayerLoginSubsystem_1a75a3157fecc25b6b82d90aab3ba43041"></a>

Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.

#### `public bool `[`bNicknameOSSRequireOnlinePlayToLogin`](#classURH__LocalPlayerLoginSubsystem_1a8b294ac15cd5f2d1c75b8c092a593905) <a id="classURH__LocalPlayerLoginSubsystem_1a8b294ac15cd5f2d1c75b8c092a593905"></a>

Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.

#### `public bool `[`bLoginOSSPromptAccountUpgradeIfInsufficient`](#classURH__LocalPlayerLoginSubsystem_1aa82d05952f1e26b805d9c6ae9b2addd7) <a id="classURH__LocalPlayerLoginSubsystem_1aa82d05952f1e26b805d9c6ae9b2addd7"></a>

Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)

#### `public bool `[`bNicknameOSSPromptAccountUpgradeIfInsufficient`](#classURH__LocalPlayerLoginSubsystem_1a02788d0e33ad37faecda684ac3058862) <a id="classURH__LocalPlayerLoginSubsystem_1a02788d0e33ad37faecda684ac3058862"></a>

Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)

#### `public bool `[`bLoginOSSRequireValidUserIdForFailedLogin`](#classURH__LocalPlayerLoginSubsystem_1a61dd1b6a2b1d6ea234d3ee722ef45e8e) <a id="classURH__LocalPlayerLoginSubsystem_1a61dd1b6a2b1d6ea234d3ee722ef45e8e"></a>

Should the OSS require a valid user id, even for failed logins.

#### `public bool `[`bNicknameOSSRequireValidUserIdForFailedLogin`](#classURH__LocalPlayerLoginSubsystem_1aea1502da749e3a887d5e854302f9b11f) <a id="classURH__LocalPlayerLoginSubsystem_1aea1502da749e3a887d5e854302f9b11f"></a>

Should the OSS require a valid user id, even for failed logins.

#### `public bool `[`bLogoutAndRetryLoginIfRefreshLoginFailed`](#classURH__LocalPlayerLoginSubsystem_1a1f638ff5b5f352dfffdb315e30478d3c) <a id="classURH__LocalPlayerLoginSubsystem_1a1f638ff5b5f352dfffdb315e30478d3c"></a>

Should we logout of the OSS and retry the login (that included a refresh token) failed?

#### `public bool `[`bLoginOSSUseIDTokenAsPortalParentAccessToken`](#classURH__LocalPlayerLoginSubsystem_1ae7c66f0f89b289dff65c385c23f0590d) <a id="classURH__LocalPlayerLoginSubsystem_1ae7c66f0f89b289dff65c385c23f0590d"></a>

Should we use the ID Token for populating the PARENT Portal Access Token.

#### `public bool `[`bLoginOSSUseIDTokenAsPortalAccessToken`](#classURH__LocalPlayerLoginSubsystem_1a2ddbbfbcad16d8ae949cfcbed714eef1) <a id="classURH__LocalPlayerLoginSubsystem_1a2ddbbfbcad16d8ae949cfcbed714eef1"></a>

Should we use the ID Token for populating the Portal Access Token.

#### `public bool `[`bResolveRallyHereBaseURLAfterOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1a92a9774beae64448f7c0895a7e6eacff) <a id="classURH__LocalPlayerLoginSubsystem_1a92a9774beae64448f7c0895a7e6eacff"></a>

Should an OSS Login trigger a Base URL Resolve on the [FRH_Integration](IntegrationBase.md#classFRH__Integration)? This is necessary for some OSSes (e.g. Switch/PS4) that don't have environment information until after a login is attempted.

#### `public FString `[`SavedCredentialPrefix`](#classURH__LocalPlayerLoginSubsystem_1a5ff0051c770983ee18208136805b9754) <a id="classURH__LocalPlayerLoginSubsystem_1a5ff0051c770983ee18208136805b9754"></a>

Prefix applied to the saved credentials on platforms that support storing the refresh token.

#### `public virtual void `[`Initialize`](#classURH__LocalPlayerLoginSubsystem_1a938bd41c5c5fa6b5eacbeb43d0758a63)`()` <a id="classURH__LocalPlayerLoginSubsystem_1a938bd41c5c5fa6b5eacbeb43d0758a63"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__LocalPlayerLoginSubsystem_1a363bdf9386b7854ed44a03cfe6faea18)`()` <a id="classURH__LocalPlayerLoginSubsystem_1a363bdf9386b7854ed44a03cfe6faea18"></a>

Safely tears down the subsystem.

#### `public virtual void `[`OnUserChanged`](#classURH__LocalPlayerLoginSubsystem_1ab6d2f50070d3611329243a43e898785b)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__LocalPlayerLoginSubsystem_1ab6d2f50070d3611329243a43e898785b"></a>

Base handling when the local user changes, override to provide functionality.

#### Parameters
* `OldPlayerUuid` The old player Uuid. 

* `OldLocalPlayerInfo` The old local player info.

#### `public virtual void `[`HandleNotification`](#classURH__LocalPlayerLoginSubsystem_1ad80279dbf8a8ae3b3c1a022afb109985)`(const struct `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` <a id="classURH__LocalPlayerLoginSubsystem_1ad80279dbf8a8ae3b3c1a022afb109985"></a>

Handle a notification from the notification API.

#### Parameters
* `Notification` The notification to handle. 

* `APIName` The name of the API that sent the notification. 

* `APIParams` The parameters for the API that sent the notification.

#### `public void `[`SubmitAutoLogin`](#classURH__LocalPlayerLoginSubsystem_1aec27fd534d794470e4eb893de8d722c4)`(bool bAcceptEULA,bool bAcceptTOS,bool bAcceptPP,const FRH_OnLoginComplete & OnLoginCompleteDelegate)` <a id="classURH__LocalPlayerLoginSubsystem_1aec27fd534d794470e4eb893de8d722c4"></a>

Begins a complete multi-phased login to the OnlineSubsystem with the credentials provided on the command line, checking if the user has appropriate permissions, and logging into RallyHere.

#### `public void `[`ResubmitLastSuccessfulLogin`](#classURH__LocalPlayerLoginSubsystem_1a937e6ee9e5592c699ff28bbf89344532)`(const FRH_OnLoginComplete & OnLoginCompleteDelegate)` <a id="classURH__LocalPlayerLoginSubsystem_1a937e6ee9e5592c699ff28bbf89344532"></a>

Submits a complete multi-phased login using the last successful set of login parameters.

#### `public void `[`SubmitLogin`](#classURH__LocalPlayerLoginSubsystem_1a8feda49ddf6a5f48448d4f989eca3d57)`(const FOnlineAccountCredentials & Credentials,FString CredentialRefreshToken,bool bAcceptEULA,bool bAcceptTOS,bool bAcceptPP,FRH_OnLoginComplete OnLoginCompleteDelegate)` <a id="classURH__LocalPlayerLoginSubsystem_1a8feda49ddf6a5f48448d4f989eca3d57"></a>

Begins a complete multi-phased login to the OnlineSubsystem with the provided credentials, checking if the user has appropriate permissions, and logging into RallyHere.

#### Parameters
* `Credentials` - Credentials to use to login with the LoginOSS 

* `CredentialRefreshToken` - RefreshToken to associate with the credentials. If included will be used for the RallyHere login 

* `OnLoginComplete` - Delegate called after login completes

#### `public void `[`Logout`](#classURH__LocalPlayerLoginSubsystem_1ae3394f883c697e57a705c23d8b0be23a)`()` <a id="classURH__LocalPlayerLoginSubsystem_1ae3394f883c697e57a705c23d8b0be23a"></a>

Requests a logout on the server clearing the players auth credentials.

#### `public bool `[`ShowLoginProfileSelectionUI`](#classURH__LocalPlayerLoginSubsystem_1a6b569dc65fc1a0a0b6bb9f03a5c33ca9)`(bool bShowOnlineOnly,const FRH_OnProfileSelectionUIClosed & OnClosed,`[`ERHAPI_LocalPlayerLoginOSS`](undefined.md#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)` OSSType)` <a id="classURH__LocalPlayerLoginSubsystem_1a6b569dc65fc1a0a0b6bb9f03a5c33ca9"></a>

Show an OSS-specific profile selection UI to the user. This is for Xbox and other platforms that support profile swapping. A valid profile is required to login on those platforms.

#### `public bool `[`ShouldUseSavedCredentials`](#classURH__LocalPlayerLoginSubsystem_1a508f8e109c3ec8be8a8b3fc2cb4ded58)`() const` <a id="classURH__LocalPlayerLoginSubsystem_1a508f8e109c3ec8be8a8b3fc2cb4ded58"></a>

Are saved credentials allowed for auto-login?

#### `public IOnlineSubsystem * `[`GetOSS`](#classURH__LocalPlayerLoginSubsystem_1a386630639294cc738abf45fff7109357)`(`[`ERHAPI_LocalPlayerLoginOSS`](undefined.md#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)` OSSType) const` <a id="classURH__LocalPlayerLoginSubsystem_1a386630639294cc738abf45fff7109357"></a>

Get the fully resolved OSS by type.

#### `public IOnlineSubsystem * `[`GetLoginOSS`](#classURH__LocalPlayerLoginSubsystem_1ac64020e992c532e82d93fd02bc4fee71)`() const` <a id="classURH__LocalPlayerLoginSubsystem_1ac64020e992c532e82d93fd02bc4fee71"></a>

Get the fully resolved OSS to use for Login.

#### `public IOnlineSubsystem * `[`GetNicknameOSS`](#classURH__LocalPlayerLoginSubsystem_1aa8daa7ad4b47b22e42e80fb55caa60b0)`() const` <a id="classURH__LocalPlayerLoginSubsystem_1aa8daa7ad4b47b22e42e80fb55caa60b0"></a>

Get the fully resolved OSS to use for getting a player's display name for login. This triggers a second OSS login.

#### `public inline virtual bool `[`IsCrossplayEnabled`](#classURH__LocalPlayerLoginSubsystem_1a311a51ee03f291f4c236f1983e0b3f7c)`() const` <a id="classURH__LocalPlayerLoginSubsystem_1a311a51ee03f291f4c236f1983e0b3f7c"></a>

Gets if crossplay is enabled.

#### `public inline virtual bool `[`IsCommunicationEnabled`](#classURH__LocalPlayerLoginSubsystem_1a1412124dc14c386e02ce52bbcb2671c0)`() const` <a id="classURH__LocalPlayerLoginSubsystem_1a1412124dc14c386e02ce52bbcb2671c0"></a>

Gets if cvommunication is enabled.

#### `protected TArray< FString > `[`IgnoreSavedCredentialsCommandLineKeys`](#classURH__LocalPlayerLoginSubsystem_1a807481151c1204a711576e7372534dc1) <a id="classURH__LocalPlayerLoginSubsystem_1a807481151c1204a711576e7372534dc1"></a>

Configurations to skip saved credentials.

#### `protected FDelegateHandle `[`OnOSSLoginCompleteDelegateHandle`](#classURH__LocalPlayerLoginSubsystem_1a646e2be986b89238b1f25a9de4578e96) <a id="classURH__LocalPlayerLoginSubsystem_1a646e2be986b89238b1f25a9de4578e96"></a>

Delegate to listen for OSS login completion.

#### `protected bool `[`bCrossplayEnabled`](#classURH__LocalPlayerLoginSubsystem_1a7c85f34c2500e512c00bb4d424948069) <a id="classURH__LocalPlayerLoginSubsystem_1a7c85f34c2500e512c00bb4d424948069"></a>

Stores if crossplay is enabled.

#### `protected TOptional< `[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` > `[`LastSuccessfulLoginRequest`](#classURH__LocalPlayerLoginSubsystem_1af7d7ed1e837db9861c24dc7100fcac2c) <a id="classURH__LocalPlayerLoginSubsystem_1af7d7ed1e837db9861c24dc7100fcac2c"></a>

Stores the last successful login result, for use when refresh token expires.

#### `protected bool `[`bCommunicationEnabled`](#classURH__LocalPlayerLoginSubsystem_1a80a9112506cf7920ab1945062b2eb7ca) <a id="classURH__LocalPlayerLoginSubsystem_1a80a9112506cf7920ab1945062b2eb7ca"></a>

Stores if communication is enabled.

#### `protected virtual void `[`PostResults`](#classURH__LocalPlayerLoginSubsystem_1aa8588e2a9f530a54818aeb56fd091e7d)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,const `[`FRH_LoginResult`](LocalPlayer.md#structFRH__LoginResult)` & Res)` <a id="classURH__LocalPlayerLoginSubsystem_1aa8588e2a9f530a54818aeb56fd091e7d"></a>

Posts the results from a login request.

#### Parameters
* `Req` The login request. 

* `Res` The login results.

#### `protected virtual void `[`DoShowLoginOSSLoginUI`](#classURH__LocalPlayerLoginSubsystem_1ac38e03f331309d47d734f788930ed3f4)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1ac38e03f331309d47d734f788930ed3f4"></a>

Prompts the online subsystem to show login UI.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`DoShowNicknameOSSLoginUI`](#classURH__LocalPlayerLoginSubsystem_1a8c668ea60d6d684d3f66cf96ac5a6914)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a8c668ea60d6d684d3f66cf96ac5a6914"></a>

Prompts the online subsystem to show the choose nickname login UI.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`NicknameOSSLoginUIClosed`](#classURH__LocalPlayerLoginSubsystem_1a3a8c0c7cb777ae735eaf5816b5c1442c)`(TSharedPtr< const FUniqueNetId > UniqueId,const FOnlineError & Error,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a3a8c0c7cb777ae735eaf5816b5c1442c"></a>

Callback from the user closing the nickname selection on the online subsystem.

#### Parameters
* `UniqueId` Unique Net Id player selected. 

* `Error` Error message if any. 

* `Req` The pending login request.

#### `protected virtual void `[`LoginOSSLoginUIClosed`](#classURH__LocalPlayerLoginSubsystem_1a3ed944e354b67a3253fc3b266d2d74f3)`(TSharedPtr< const FUniqueNetId > UniqueId,const FOnlineError & Error,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a3ed944e354b67a3253fc3b266d2d74f3"></a>

Callback from the user closing the login UI of the online subsystem.

#### Parameters
* `UniqueId` Unique Net Id player selected. 

* `Error` Error message if any. 

* `Req` The pending login request.

#### `protected virtual void `[`DoLoginOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1a1348a27ffee35644cd6b1ffaaa992ff0)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a1348a27ffee35644cd6b1ffaaa992ff0"></a>

Starts the online subsystem login.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`DoNicknameOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1aaec0f125f3a1b048f96dd9f0b15c8378)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1aaec0f125f3a1b048f96dd9f0b15c8378"></a>

Starts the online subsystem nickname login.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`DoOSSLogin`](#classURH__LocalPlayerLoginSubsystem_1a4a4d560752f5f6d1eee297d1b0d533a4)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,IOnlineSubsystem * OSS,OSSLoginCompleteFn OnComplete)` <a id="classURH__LocalPlayerLoginSubsystem_1a4a4d560752f5f6d1eee297d1b0d533a4"></a>

Starts the online subsystem login.

#### Parameters
* `Req` The pending login request. 

* `OSS` The online subsystem being logged into. 

* `OnComplete` Callback delegate for when login finishes.

#### `protected virtual void `[`OSSLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a09d25f9ea9975061d1c66c113bfb6339)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a09d25f9ea9975061d1c66c113bfb6339"></a>

Handler for OSS Login Completion.

#### Parameters
* `ControllerId` Controller Id of the local player logging in. 

* `bSuccessful` Was the login successful. 

* `UniqueId` Unique Net Id of the player logging in. 

* `ErrorMessage` Error message if any. 

* `Req` The pending login request.

#### `protected virtual void `[`OSSNicknameLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a37bae042ff553fd98f3770c129a45949)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a37bae042ff553fd98f3770c129a45949"></a>

Handler for OSS Nickname Login Completion.

#### Parameters
* `ControllerId` Controller Id of the local player logging in. 

* `bSuccessful` Was the login successful. 

* `UniqueId` Unique Net Id of the player logging in. 

* `ErrorMessage` Error message if any. 

* `Req` The pending login request.

#### `protected virtual bool `[`OnOSSLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1af158781b3e66c68f16de41e6149e6b2e)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,IOnlineSubsystem * OSS,PendingLoginUniqueIdRef UniqueIdPtr,bool bOSSRequireValidUserIdForFailedLogin)` <a id="classURH__LocalPlayerLoginSubsystem_1af158781b3e66c68f16de41e6149e6b2e"></a>

Handler for OSS Login Completion.

#### Parameters
* `ControllerId` Controller Id of the local player logging in. 

* `bSuccessful` Was the login successful. 

* `UniqueId` Unique Net Id of the player logging in. 

* `ErrorMessage` Error message if any. 

* `Req` The pending login request. 

* `OSS` The online subsystem being logged into. 

* `UniqueIdPtr` Pending Login pointer reference. 

* `bOSSRequireValidUserIdForFailedLogin` If the login failed due to no valid user id.

#### `protected virtual void `[`ExternalUI_ShowLoginUIClosed`](#classURH__LocalPlayerLoginSubsystem_1a333418b1fa9eb68991567bac31129339)`(TSharedPtr< const FUniqueNetId > UniqueId,const int ControllerIndex,const FOnlineError & Error,FRH_OnProfileSelectionUIClosed OnClosed)` <a id="classURH__LocalPlayerLoginSubsystem_1a333418b1fa9eb68991567bac31129339"></a>

Callback for when the OSS login UI is closed.

#### Parameters
* `UniqueId` Unique Net Id of the player logging in. 

* `ControllerIndex` Controller Id of the local player logging in. 

* `Error` Error message if any. 

* `OnClosed` Callback delegate for when the login UI is closed.

#### `protected virtual void `[`DoLoginOSSPrivilegeCheck`](#classURH__LocalPlayerLoginSubsystem_1a7b65ebe24a9e0bf8d0a1cf5813c28c96)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a7b65ebe24a9e0bf8d0a1cf5813c28c96"></a>

Checks users Privileges for OSS Login.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`DoNicknameOSSPrivilegeCheck`](#classURH__LocalPlayerLoginSubsystem_1a59711795bf74e953d9efab8f66eecc03)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a59711795bf74e953d9efab8f66eecc03"></a>

Checks users Privileges for OSS Nickname Login.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`DoOSSPrivilegeCheck`](#classURH__LocalPlayerLoginSubsystem_1a529bf4977cd385ddc75ca33b711ef914)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,IOnlineSubsystem * OSS,PendingLoginUniqueIdRef UniqueIdPtr,OSSPrivilegeResultsFn OnPrivilegeResults)` <a id="classURH__LocalPlayerLoginSubsystem_1a529bf4977cd385ddc75ca33b711ef914"></a>

Checks users Privileges for OSS Login.

#### Parameters
* `Req` The pending login request. 

* `OSS` The online subsystem being logged into. 

* `UniqueIdPtr` Pending Login pointer reference. 

* `OnPrivilegeResults` Callback delegate for when the privilege check is complete.

#### `protected virtual void `[`OnLoginOSSPrivilegeResults`](#classURH__LocalPlayerLoginSubsystem_1a2381665262c193523ec0bfae00b073af)`(const FUniqueNetId & UniqueId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a2381665262c193523ec0bfae00b073af"></a>

Handler for online subsystem callback for OSS Privilege check.

#### Parameters
* `UniqueId` Unique Net Id of the player being checked in. 

* `Privilege` Privilege being checked. 

* `PrivilegeResults` Privilege check results. 

* `Req` The pending login request.

#### `protected virtual void `[`OnNicknameOSSPrivilegeResults`](#classURH__LocalPlayerLoginSubsystem_1a650fbeb427bb5c402e36bef9c793342a)`(const FUniqueNetId & UniqueId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a650fbeb427bb5c402e36bef9c793342a"></a>

Handler for online subsystem callback for OSS Nickname Privilege check.

#### Parameters
* `UniqueId` Unique Net Id of the player being checked in. 

* `Privilege` Privilege being checked. 

* `PrivilegeResults` Privilege check results. 

* `Req` The pending login request.

#### `protected virtual bool `[`OnOSSPrivilegeResults`](#classURH__LocalPlayerLoginSubsystem_1a8d1c57f00dd702f3739e5e2f18665542)`(const FUniqueNetId & UniqueId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req,IOnlineSubsystem * OSS,bool bPromptForAccountUpgradeIfInsufficient)` <a id="classURH__LocalPlayerLoginSubsystem_1a8d1c57f00dd702f3739e5e2f18665542"></a>

Handler for online subsystem callback for OSS Privilege check.

#### Parameters
* `UniqueId` Unique Net Id of the player being checked in. 

* `Privilege` Privilege being checked. 

* `PrivilegeResults` Privilege check results. 

* `Req` The pending login request. 

* `OSS` The online subsystem being logged into. 

* `bPromptForAccountUpgradeIfInsufficient` If true, prompt user to upgrade their platform account.

#### `protected virtual void `[`RetrieveOSSAuthToken`](#classURH__LocalPlayerLoginSubsystem_1abe4cba66bc2a21657b730e9c456a8297)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req)` <a id="classURH__LocalPlayerLoginSubsystem_1abe4cba66bc2a21657b730e9c456a8297"></a>

Start the retrieval of the OSS Auth Token.

#### Parameters
* `Req` The pending login request.

#### `protected virtual void `[`RetrieveOSSAuthTokenComplete`](#classURH__LocalPlayerLoginSubsystem_1a27fbe50ee06ccb5822c1edbf773d81a8)`(int32 LocalUserNum,bool bWasSuccessful,const FExternalAuthToken & AuthToken,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a27fbe50ee06ccb5822c1edbf773d81a8"></a>

Start the login to Rally Here.

#### Parameters
* `LocalUserNum` Local user number of the player logging in. 

* `bWasSuccessful` Was the retrieval successful. 

* `AuthTokenWrapper` The auth token wrapper. 

* `Req` The pending login request.

#### `protected virtual void `[`DoRallyHereLogin`](#classURH__LocalPlayerLoginSubsystem_1ac566c5385eac7117a5562ba0010cf4fc)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,const FExternalAuthToken & AuthToken)` <a id="classURH__LocalPlayerLoginSubsystem_1ac566c5385eac7117a5562ba0010cf4fc"></a>

Start the login to Rally Here.

#### Parameters
* `Req` The pending login request. 

* `AuthToken` The auth token to use for the login.

#### `protected virtual void `[`DoRallyHereLoginWithIpAddress`](#classURH__LocalPlayerLoginSubsystem_1a9ab43c881dddd615e3ea4ae6ab298149)`(`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` & Req,const FExternalAuthToken & AuthToken,const FString & IpAddress)` <a id="classURH__LocalPlayerLoginSubsystem_1a9ab43c881dddd615e3ea4ae6ab298149"></a>

Start the login to Rally Here.

#### Parameters
* `Req` The pending login request. 

* `AuthToken` The auth token to use for the login. 

* `IpAddress` The IP address of the player logging in.

#### `protected virtual void `[`RallyHereLoginComplete`](#classURH__LocalPlayerLoginSubsystem_1a7b877ea539a11d526e488f43a1044cd4)`(const RallyHereAPI::FResponse_Login & Resp,`[`FRH_PendingLoginRequest`](undefined.md#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)` Req)` <a id="classURH__LocalPlayerLoginSubsystem_1a7b877ea539a11d526e488f43a1044cd4"></a>

Handle the response from the login to Rally Here.

#### Parameters
* `Resp` Response from the login to Rally Here. 

* `Req` The pending login request.

#### `protected virtual FString `[`GetSavedCredentialEnvironment`](#classURH__LocalPlayerLoginSubsystem_1a159afb852506a24c40a44f315debfbc6)`(FName OSSName) const` <a id="classURH__LocalPlayerLoginSubsystem_1a159afb852506a24c40a44f315debfbc6"></a>

Gets the cached credentials for the given online subsystem.

#### Parameters
* `OSSName` Name of the online subsystem. 

#### Returns
Credentials token for the subsystem.

#### `protected virtual void `[`CheckCrossplayPrivilege`](#classURH__LocalPlayerLoginSubsystem_1a56da439941bdce891cbe97ebf75d5666)`(const FUniqueNetId & UniqueId)` <a id="classURH__LocalPlayerLoginSubsystem_1a56da439941bdce891cbe97ebf75d5666"></a>

Checks the users OSS privileges for crossplay.

#### Parameters
* `UniqueId` Unique Net Id of the player being checked in.

#### `protected virtual void `[`HandleCheckCrossPlayPrivilegeComplete`](#classURH__LocalPlayerLoginSubsystem_1a9695dff647ab1d5f81acbf29f38882e6)`(const FUniqueNetId & UserId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults)` <a id="classURH__LocalPlayerLoginSubsystem_1a9695dff647ab1d5f81acbf29f38882e6"></a>

Handles the response of the OSS crossplay privilege check.

#### Parameters
* `UserId` Unique Net Id of the player being checked in. 

* `Privilege` Privilege being checked. 

* `PrivilegeResults` Privilege check results.

#### `protected virtual void `[`CheckCommunicationPrivilege`](#classURH__LocalPlayerLoginSubsystem_1af758cbf06c5f4a9a5ab87367cb69d60a)`(const FUniqueNetId & UniqueId)` <a id="classURH__LocalPlayerLoginSubsystem_1af758cbf06c5f4a9a5ab87367cb69d60a"></a>

Checks the users OSS privileges for communicataion.

#### Parameters
* `UniqueId` Unique Net Id of the player being checked in.

#### `protected virtual void `[`HandleCheckCommunicationPrivilegeComplete`](#classURH__LocalPlayerLoginSubsystem_1a941c8ad7a2ca3204ce9ac44bad2b7986)`(const FUniqueNetId & UserId,EUserPrivileges::Type Privilege,uint32 PrivilegeResults)` <a id="classURH__LocalPlayerLoginSubsystem_1a941c8ad7a2ca3204ce9ac44bad2b7986"></a>

Handles the response of the OSS communicaation privilege check.

#### Parameters
* `UserId` Unique Net Id of the player being checked in. 

* `Privilege` Privilege being checked. 

* `PrivilegeResults` Privilege check results.

#### `protected virtual void `[`HandleAppReactivated`](#classURH__LocalPlayerLoginSubsystem_1aa8c118625fd0a61d8ee5283d539d6d00)`()` <a id="classURH__LocalPlayerLoginSubsystem_1aa8c118625fd0a61d8ee5283d539d6d00"></a>

Handles the app being restored from being suspended.

#### `protected virtual void `[`HandleAppReactivatedGameThread`](#classURH__LocalPlayerLoginSubsystem_1a60779ab08578f6978df960d7d3877782)`()` <a id="classURH__LocalPlayerLoginSubsystem_1a60779ab08578f6978df960d7d3877782"></a>

Handles the app game thread being restored from being suspended.

#### `typedef `[`TLogout`](#classURH__LocalPlayerLoginSubsystem_1a8eb4169e49a752b5334dbfb87e7d5c93) <a id="classURH__LocalPlayerLoginSubsystem_1a8eb4169e49a752b5334dbfb87e7d5c93"></a>

Type Define for logout calls.

## class `URH_LocalPlayerPresenceSubsystem` <a id="classURH__LocalPlayerPresenceSubsystem"></a>

```
class URH_LocalPlayerPresenceSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Subsystem to manage the local players presence.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__LocalPlayerPresenceSubsystem_1adff181e922e0327fa815a1c482058264)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__LocalPlayerPresenceSubsystem_1a6c5c5b743483e94ddce8383032cccabe)`()` | Safely tears down the subsystem.
`public void `[`UpdatePlayerPresenceSelf`](#classURH__LocalPlayerPresenceSubsystem_1a83c721326ab8300a7bbd7c7e5137ca6c)`(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf & Request,const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf & Delegate)` | Calls the Presence API to update a players personal presence information directly, and does not update desired state. Will be overridden by the next poll.
`public void `[`GetPlayerPresenceSelf`](#classURH__LocalPlayerPresenceSubsystem_1ab096cb0926b3e19efa5be81186292fce)`(RallyHereAPI::FRequest_GetPlayerPresenceSelf & Request,const RallyHereAPI::FDelegate_GetPlayerPresenceSelf & Delegate)` | Calls the Presence API to get your own player presence information.
`public void `[`GetSettings`](#classURH__LocalPlayerPresenceSubsystem_1ad4ea4f754634f475f0dc22b2cff65ef0)`(RallyHereAPI::FRequest_GetPresenceSettings & Request,const RallyHereAPI::FDelegate_GetPresenceSettings & Delegate)` | Calls the Presence API to get the presence settings data.
`public inline void `[`SetDesiredStatus`](#classURH__LocalPlayerPresenceSubsystem_1ab6e29c7025a2ba472476ed0ce806f746)`(ERHAPI_OnlineStatus NewStatus)` | Requests an update of your presence status to be set to the desired status.
`public inline ERHAPI_OnlineStatus `[`GetDesiredStatus`](#classURH__LocalPlayerPresenceSubsystem_1a9a1748ca16136289f3764459ee8cae4e)`() const` | Gets the desired status that the player wants to be set to.
`public inline void `[`SetDesiredMessage`](#classURH__LocalPlayerPresenceSubsystem_1a9cea292e3dbfd0797b74c255eff518f8)`(FString NewMessage,bool bImmediateRefresh)` | Requests an update of your presence message to be set to the desired message.
`public inline FString `[`GetDesiredMessage`](#classURH__LocalPlayerPresenceSubsystem_1af295bb46e499c2c8aa1f208a30f722d5)`() const` | Gets the desired message that the player wants to be set to.
`public inline void `[`SetDesiredDoNotDisturb`](#classURH__LocalPlayerPresenceSubsystem_1a7f8a9a266c0ab29d1da24f836a3a58ba)`(bool NewDoNotDisturb)` | Requests an update of your presence do not disturb setting to be set to the desired setting.
`public inline bool `[`GetDesiredDoNotDisturb`](#classURH__LocalPlayerPresenceSubsystem_1aec49acc65c1627bcfb9b95eb29b1c2dc)`() const` | Gets the desired do not disturb setting that the player wants to be set to.
`public inline void `[`SetDesiredCustomData`](#classURH__LocalPlayerPresenceSubsystem_1af554c5a6e2f17be875c859f0e6503245)`(TMap< FString, FString > NewCustomData)` | Requests an update of your presence custom data to be set to the desired setting.
`public inline const TMap< FString, FString > `[`GetDesiredCustomData`](#classURH__LocalPlayerPresenceSubsystem_1a6055386d55ac708899020f7a661a70d4)`() const` | Gets the desired custom data that the player wants to be set to.
`public inline void `[`SetDesiredPresence`](#classURH__LocalPlayerPresenceSubsystem_1a4ffc23a0a9185823907fff0c361e4045)`(`[`FRHAPI_PlayerPresenceUpdateSelf`](RHAPI_PlayerPresenceUpdateSelf.md#structFRHAPI__PlayerPresenceUpdateSelf)` NewPresenceState)` | Requests an update of your entire presence state to be set to the desired structure.
`public inline const `[`FRHAPI_PlayerPresenceUpdateSelf`](RHAPI_PlayerPresenceUpdateSelf.md#structFRHAPI__PlayerPresenceUpdateSelf)` & `[`GetDesiredPresence`](#classURH__LocalPlayerPresenceSubsystem_1acbafa26fae623c26a04669ad10095760)`() const` | Gets the desired custom data that the player wants to be set to.
`public void `[`StartRefreshTimer`](#classURH__LocalPlayerPresenceSubsystem_1a32af15e5eafaf94bdea501e1dc02d90b)`()` | Starts polling to refresh the player's presence status.
`public void `[`StopRefreshTimer`](#classURH__LocalPlayerPresenceSubsystem_1a95919d768be0b60ad1134052aff7ef2c)`()` | Stops polling to refresh the player's presence status.
`public void `[`RefreshStatus`](#classURH__LocalPlayerPresenceSubsystem_1a409192cc26f0fb395231023cf4449fa7)`()` | Forces an update of the players presence with a status change.
`public bool `[`IsRefreshTimerActive`](#classURH__LocalPlayerPresenceSubsystem_1ac786e4bb032fc9711ec196868c6c6b30)`(float & TimeRemaining) const` | Returns whether the refresh timer is active. param [in].
`protected FRH_AutoPollerPtr `[`Poller`](#classURH__LocalPlayerPresenceSubsystem_1ab76093aeb1b7ae4313b979bfb5981f04) | Poller for the local presence.
`protected `[`FRHAPI_PlayerPresenceUpdateSelf`](RHAPI_PlayerPresenceUpdateSelf.md#structFRHAPI__PlayerPresenceUpdateSelf)` `[`DesiredPresenceState`](#classURH__LocalPlayerPresenceSubsystem_1a005a96091c2add66fdfdf43b685247c9) | The Status that the local player is being changed to.
`protected TOptional< FString > `[`LastETag`](#classURH__LocalPlayerPresenceSubsystem_1a8f9d559a2e3b544b53c55c2a1aebc640) | The last ETag from the last successful poll.
`protected virtual void `[`OnUserChanged`](#classURH__LocalPlayerPresenceSubsystem_1a39281ccf81d020bce677a4687ac61d16)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__LocalPlayerPresenceSubsystem_1a41e97dcb80554d54d25008f03d407e1f)`()` | Initializes the subsystem with defaults for its cached data.
`protected void `[`PollRefreshStatus`](#classURH__LocalPlayerPresenceSubsystem_1a12037a7eca5aa1bd88eb909748cf1a8e)`(const FRH_PollCompleteFunc & Delegate)` | Polls the status of the players presence.

### Members

#### `public virtual void `[`Initialize`](#classURH__LocalPlayerPresenceSubsystem_1adff181e922e0327fa815a1c482058264)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1adff181e922e0327fa815a1c482058264"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__LocalPlayerPresenceSubsystem_1a6c5c5b743483e94ddce8383032cccabe)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1a6c5c5b743483e94ddce8383032cccabe"></a>

Safely tears down the subsystem.

#### `public void `[`UpdatePlayerPresenceSelf`](#classURH__LocalPlayerPresenceSubsystem_1a83c721326ab8300a7bbd7c7e5137ca6c)`(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf & Request,const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf & Delegate)` <a id="classURH__LocalPlayerPresenceSubsystem_1a83c721326ab8300a7bbd7c7e5137ca6c"></a>

Calls the Presence API to update a players personal presence information directly, and does not update desired state. Will be overridden by the next poll.

#### Parameters
* `Request` Request object containing the information to update. 

* `Delegate` Callback delegate for if the request was successful or not.

#### `public void `[`GetPlayerPresenceSelf`](#classURH__LocalPlayerPresenceSubsystem_1ab096cb0926b3e19efa5be81186292fce)`(RallyHereAPI::FRequest_GetPlayerPresenceSelf & Request,const RallyHereAPI::FDelegate_GetPlayerPresenceSelf & Delegate)` <a id="classURH__LocalPlayerPresenceSubsystem_1ab096cb0926b3e19efa5be81186292fce"></a>

Calls the Presence API to get your own player presence information.

#### Parameters
* `Request` Request object containing needed data for the call. 

* `Delegate` Callback delegate with the player presence information.

#### `public void `[`GetSettings`](#classURH__LocalPlayerPresenceSubsystem_1ad4ea4f754634f475f0dc22b2cff65ef0)`(RallyHereAPI::FRequest_GetPresenceSettings & Request,const RallyHereAPI::FDelegate_GetPresenceSettings & Delegate)` <a id="classURH__LocalPlayerPresenceSubsystem_1ad4ea4f754634f475f0dc22b2cff65ef0"></a>

Calls the Presence API to get the presence settings data.

#### Parameters
* `Request` Request object containing needed data for the call. 

* `Delegate` Callback delegate with the presence settings data.

#### `public inline void `[`SetDesiredStatus`](#classURH__LocalPlayerPresenceSubsystem_1ab6e29c7025a2ba472476ed0ce806f746)`(ERHAPI_OnlineStatus NewStatus)` <a id="classURH__LocalPlayerPresenceSubsystem_1ab6e29c7025a2ba472476ed0ce806f746"></a>

Requests an update of your presence status to be set to the desired status.

#### Parameters
* `NewStatus` The new status to set.

#### `public inline ERHAPI_OnlineStatus `[`GetDesiredStatus`](#classURH__LocalPlayerPresenceSubsystem_1a9a1748ca16136289f3764459ee8cae4e)`() const` <a id="classURH__LocalPlayerPresenceSubsystem_1a9a1748ca16136289f3764459ee8cae4e"></a>

Gets the desired status that the player wants to be set to.

#### `public inline void `[`SetDesiredMessage`](#classURH__LocalPlayerPresenceSubsystem_1a9cea292e3dbfd0797b74c255eff518f8)`(FString NewMessage,bool bImmediateRefresh)` <a id="classURH__LocalPlayerPresenceSubsystem_1a9cea292e3dbfd0797b74c255eff518f8"></a>

Requests an update of your presence message to be set to the desired message.

#### Parameters
* `NewMessage` The new message to set.

#### `public inline FString `[`GetDesiredMessage`](#classURH__LocalPlayerPresenceSubsystem_1af295bb46e499c2c8aa1f208a30f722d5)`() const` <a id="classURH__LocalPlayerPresenceSubsystem_1af295bb46e499c2c8aa1f208a30f722d5"></a>

Gets the desired message that the player wants to be set to.

#### `public inline void `[`SetDesiredDoNotDisturb`](#classURH__LocalPlayerPresenceSubsystem_1a7f8a9a266c0ab29d1da24f836a3a58ba)`(bool NewDoNotDisturb)` <a id="classURH__LocalPlayerPresenceSubsystem_1a7f8a9a266c0ab29d1da24f836a3a58ba"></a>

Requests an update of your presence do not disturb setting to be set to the desired setting.

#### Parameters
* `NewDoNotDisturb` The new do not disturb setting desired.

#### `public inline bool `[`GetDesiredDoNotDisturb`](#classURH__LocalPlayerPresenceSubsystem_1aec49acc65c1627bcfb9b95eb29b1c2dc)`() const` <a id="classURH__LocalPlayerPresenceSubsystem_1aec49acc65c1627bcfb9b95eb29b1c2dc"></a>

Gets the desired do not disturb setting that the player wants to be set to.

#### `public inline void `[`SetDesiredCustomData`](#classURH__LocalPlayerPresenceSubsystem_1af554c5a6e2f17be875c859f0e6503245)`(TMap< FString, FString > NewCustomData)` <a id="classURH__LocalPlayerPresenceSubsystem_1af554c5a6e2f17be875c859f0e6503245"></a>

Requests an update of your presence custom data to be set to the desired setting.

#### Parameters
* `NewCustomData` The new custom data desired.

#### `public inline const TMap< FString, FString > `[`GetDesiredCustomData`](#classURH__LocalPlayerPresenceSubsystem_1a6055386d55ac708899020f7a661a70d4)`() const` <a id="classURH__LocalPlayerPresenceSubsystem_1a6055386d55ac708899020f7a661a70d4"></a>

Gets the desired custom data that the player wants to be set to.

#### `public inline void `[`SetDesiredPresence`](#classURH__LocalPlayerPresenceSubsystem_1a4ffc23a0a9185823907fff0c361e4045)`(`[`FRHAPI_PlayerPresenceUpdateSelf`](RHAPI_PlayerPresenceUpdateSelf.md#structFRHAPI__PlayerPresenceUpdateSelf)` NewPresenceState)` <a id="classURH__LocalPlayerPresenceSubsystem_1a4ffc23a0a9185823907fff0c361e4045"></a>

Requests an update of your entire presence state to be set to the desired structure.

#### Parameters
* `NewPresenceState` The new custom data desired.

#### `public inline const `[`FRHAPI_PlayerPresenceUpdateSelf`](RHAPI_PlayerPresenceUpdateSelf.md#structFRHAPI__PlayerPresenceUpdateSelf)` & `[`GetDesiredPresence`](#classURH__LocalPlayerPresenceSubsystem_1acbafa26fae623c26a04669ad10095760)`() const` <a id="classURH__LocalPlayerPresenceSubsystem_1acbafa26fae623c26a04669ad10095760"></a>

Gets the desired custom data that the player wants to be set to.

#### `public void `[`StartRefreshTimer`](#classURH__LocalPlayerPresenceSubsystem_1a32af15e5eafaf94bdea501e1dc02d90b)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1a32af15e5eafaf94bdea501e1dc02d90b"></a>

Starts polling to refresh the player's presence status.

#### `public void `[`StopRefreshTimer`](#classURH__LocalPlayerPresenceSubsystem_1a95919d768be0b60ad1134052aff7ef2c)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1a95919d768be0b60ad1134052aff7ef2c"></a>

Stops polling to refresh the player's presence status.

#### `public void `[`RefreshStatus`](#classURH__LocalPlayerPresenceSubsystem_1a409192cc26f0fb395231023cf4449fa7)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1a409192cc26f0fb395231023cf4449fa7"></a>

Forces an update of the players presence with a status change.

#### `public bool `[`IsRefreshTimerActive`](#classURH__LocalPlayerPresenceSubsystem_1ac786e4bb032fc9711ec196868c6c6b30)`(float & TimeRemaining) const` <a id="classURH__LocalPlayerPresenceSubsystem_1ac786e4bb032fc9711ec196868c6c6b30"></a>

Returns whether the refresh timer is active. param [in].

#### `protected FRH_AutoPollerPtr `[`Poller`](#classURH__LocalPlayerPresenceSubsystem_1ab76093aeb1b7ae4313b979bfb5981f04) <a id="classURH__LocalPlayerPresenceSubsystem_1ab76093aeb1b7ae4313b979bfb5981f04"></a>

Poller for the local presence.

#### `protected `[`FRHAPI_PlayerPresenceUpdateSelf`](RHAPI_PlayerPresenceUpdateSelf.md#structFRHAPI__PlayerPresenceUpdateSelf)` `[`DesiredPresenceState`](#classURH__LocalPlayerPresenceSubsystem_1a005a96091c2add66fdfdf43b685247c9) <a id="classURH__LocalPlayerPresenceSubsystem_1a005a96091c2add66fdfdf43b685247c9"></a>

The Status that the local player is being changed to.

#### `protected TOptional< FString > `[`LastETag`](#classURH__LocalPlayerPresenceSubsystem_1a8f9d559a2e3b544b53c55c2a1aebc640) <a id="classURH__LocalPlayerPresenceSubsystem_1a8f9d559a2e3b544b53c55c2a1aebc640"></a>

The last ETag from the last successful poll.

#### `protected virtual void `[`OnUserChanged`](#classURH__LocalPlayerPresenceSubsystem_1a39281ccf81d020bce677a4687ac61d16)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1a39281ccf81d020bce677a4687ac61d16"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__LocalPlayerPresenceSubsystem_1a41e97dcb80554d54d25008f03d407e1f)`()` <a id="classURH__LocalPlayerPresenceSubsystem_1a41e97dcb80554d54d25008f03d407e1f"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected void `[`PollRefreshStatus`](#classURH__LocalPlayerPresenceSubsystem_1a12037a7eca5aa1bd88eb909748cf1a8e)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__LocalPlayerPresenceSubsystem_1a12037a7eca5aa1bd88eb909748cf1a8e"></a>

Polls the status of the players presence.

#### Parameters
* `Delegate` Callback delegate when the poll completes.

## class `URH_LocalPlayerSessionSubsystem` <a id="classURH__LocalPlayerSessionSubsystem"></a>

```
class URH_LocalPlayerSessionSubsystem
  : public URH_LocalPlayerSubsystemPlugin
  : public IRH_SessionOwnerInterface
```

Subsystem to manage sessions for the local player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`JoinDetails`](#classURH__LocalPlayerSessionSubsystem_1ab51cd43e773e8da6fe045e438265d2b8) | 
`public const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__LocalPlayerSessionSubsystem_1a162d729ae29c6aaea092eb1c3ff8270c) | 
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionUpdatedDelegate`](#classURH__LocalPlayerSessionSubsystem_1a87ec0a5447e17ebbbda133342770d960) | Multicast delegate triggered when a session managed by this subsystem is updated.
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionAddedDelegate`](#classURH__LocalPlayerSessionSubsystem_1a34c015e300be4c0474addf8f6d6d947b) | Multicast delegate triggered when a session managed by this subsystem is added.
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionRemovedDelegate`](#classURH__LocalPlayerSessionSubsystem_1af13b47604f229daf45aa56fdb25554cc) | Multicast delegate triggered when a session managed by this subsystem is removed.
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionExpirationCompleteDelegate`](#classURH__LocalPlayerSessionSubsystem_1a897c37a8854ad40a5ab9f75129a57e74) | Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)
`public FRH_OnLoginPollSessionsCompleteMulticastDelegate `[`OnLoginPollSessionsCompleteDelegate`](#classURH__LocalPlayerSessionSubsystem_1adf39311c4affa07453f6dd6cfeab6203) | Multicast delegate triggered when the initial poll after login is complete, to do first-time setup.
`public FRH_OnFailedToJoinPlatformSessionMulticastDelegate `[`OnFailedToJoinPlatformSessionDelegate`](#classURH__LocalPlayerSessionSubsystem_1aaa731f4db12fb478a38ca11784438b63) | Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to.
`public  `[`URH_LocalPlayerSessionSubsystem`](#classURH__LocalPlayerSessionSubsystem_1a038813e71ac05adf08f219b29d703891)`()` | 
`public virtual void `[`Initialize`](#classURH__LocalPlayerSessionSubsystem_1a0f380ce4b08ba9e13a06496939bc14d7)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__LocalPlayerSessionSubsystem_1a120580f60e2559621a29074257000119)`()` | Deinitialize the subsystem.
`public inline virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__LocalPlayerSessionSubsystem_1a6eb6370bc861ae0aa43831888996e885)`() const` | Get auth context for session ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public inline virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__LocalPlayerSessionSubsystem_1a35fadcbb4a6200cf5f6dd50219425632)`(const FString & SessionId) const` | Get session by its Session Id.
`public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetSessionsByType`](#classURH__LocalPlayerSessionSubsystem_1ade3626d6a9eea60910b82c8be0672b90)`(const FString & Type) const` | Get all joined and invited sessions by SessionType.
`public TArray< `[`URH_InvitedSession`](Session.md#classURH__InvitedSession)` * > `[`GetInvitedSessionsByType`](#classURH__LocalPlayerSessionSubsystem_1a3f39bc19e62996704c7e7fce26d458f4)`(const FString & Type) const` | Get all invited sessions by SessionType.
`public TArray< `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * > `[`GetJoinedSessionsByType`](#classURH__LocalPlayerSessionSubsystem_1a88fb114cf7ce24803441a1606552c3a0)`(const FString & Type) const` | Get all joined sessions by SessionType.
`public inline FORCEINLINE `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetFirstSessionByType`](#classURH__LocalPlayerSessionSubsystem_1aa1daf7f451869c9f3be2a145756a4462)`(const FString & Type) const` | Get first joined or invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)
`public inline FORCEINLINE `[`URH_InvitedSession`](Session.md#classURH__InvitedSession)` * `[`GetFirstInvitedSessionByType`](#classURH__LocalPlayerSessionSubsystem_1a9431ecae7f1da9a2ac011aaace0f3b7c)`(const FString & Type) const` | Get first invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)
`public inline FORCEINLINE `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetFirstJoinedSessionByType`](#classURH__LocalPlayerSessionSubsystem_1a38dc9247565316917f5332ab63aa18d5)`(const FString & Type) const` | Get first joined sessions by SessionType (useful for titles that ensure only one of a given session type will exist)
`public `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetFirstActiveSession`](#classURH__LocalPlayerSessionSubsystem_1a8fcbcaefdffd59e7573c7112834c58f1)`() const` | Get first "active" session (session which is IsActive())
`public inline FORCEINLINE TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetSessions`](#classURH__LocalPlayerSessionSubsystem_1ac5e0acf5f9d7f762f5c9ceec8d6b9c02)`() const` | Get an array of all sessions controlled by this system.
`public virtual void `[`RemoveSessionById`](#classURH__LocalPlayerSessionSubsystem_1a7e790f89c514d7210c5b58b947cebec2)`(const FString & SessionId)` | Removes a cached session for the local player, this does NOT try to leave it.
`public inline FORCEINLINE bool `[`IsInSession`](#classURH__LocalPlayerSessionSubsystem_1ad5bfcc3b466927d7d92f94bff1ba31d5)`(const FString & SessionId)` | Utility function to determine if local player is a member of that session.
`public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__LocalPlayerSessionSubsystem_1a96a865719fb2494d0e89e7660a6fd2b2)`() const` | Utility function to look up the player info subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__LocalPlayerSessionSubsystem_1a07e92b976c6edb22a8d8e2abc574e1c7)`() const` | Utility function to look up the OnlineSubsystem to use for session calls ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__LocalPlayerSessionSubsystem_1a242dea7f5ff3092050c7d15ba05dc8a0)`() const` | Utility function to look up the UniqueNetId to use for OnlineSubsystem calls ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual FPlatformUserId `[`GetOSSPlatformUserId`](#classURH__LocalPlayerSessionSubsystem_1a381885585853e65604470259e8a053ff)`() const` | Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)
`public virtual FGuid `[`GetPlayerUuid`](#classURH__LocalPlayerSessionSubsystem_1aaf5587019c1eb05ce9e42c72541dd802)`() const` | Gets the Player UUID to use for player related calls (can be invalid)
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__LocalPlayerSessionSubsystem_1af17a705ee8af54747dccb52a37554918)`(const FString & SessionId) const` | Gets the platform session synchronization object for a given session id ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__LocalPlayerSessionSubsystem_1a5f4ce3f68b15c21a15411b1a12bad287)`(const FUniqueNetIdRepl & PlatformSessionId) const` | Gets the platform session synchronization object for a given platform session id.
`public inline virtual void `[`SetPlatformSessionToJoinOnUserChange`](#classURH__LocalPlayerSessionSubsystem_1a7b32f021e042bf401d2156764df2babc)`(const FOnlineSessionSearchResult & Session)` | Set a platform session to join upon the next user change.
`public inline virtual void `[`ClearPlatformSessionToJoinOnUserChange`](#classURH__LocalPlayerSessionSubsystem_1afa5db7d0b7302957dd89c4a7b9f78cb5)`()` | Clear a platform session to join upon the next user change.
`public inline void `[`CreateOrJoinSessionByType`](#classURH__LocalPlayerSessionSubsystem_1ae987d7bbdbc819106e7e00a06a08d918)`(const `[`FRHAPI_CreateOrJoinRequest`](RHAPI_CreateOrJoinRequest.md#structFRHAPI__CreateOrJoinRequest)` & CreateParams,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Utility function to Create or Join a session by a given SessionType (most times will create a session, but Hub join rules may do a Join instead)
`public inline void `[`JoinSessionById`](#classURH__LocalPlayerSessionSubsystem_1a81439a14711f1519f5a4c109574d0527)`(const FString & SessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Utility function to Join a session by SessionId.
`public inline void `[`JoinSessionByIdEx`](#classURH__LocalPlayerSessionSubsystem_1aaa07b3f9a72b7c7dc3d17a301df2a34a)`(const FString & SessionId,const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & JoinDetails,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Utility function to Join a session by SessionId with additional options.
`public virtual void `[`ImportAPISession`](#classURH__LocalPlayerSessionSubsystem_1a21c227f5c4a783adacd79c25714aa2e3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Imports a new or updated session from the API into this subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual void `[`ImportAPITemplate`](#classURH__LocalPlayerSessionSubsystem_1ae7616f99c6aa669e529aad3cd0a0451f)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Imports a new session template from the API into this subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual void `[`ReconcileAPISessions`](#classURH__LocalPlayerSessionSubsystem_1aede0956db4c8e8626fa239c16cb3d61e)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Reconciles the list of session ids with this subsystem, removing any sessions that are no longer in the list, then updates the stored ETag for the local player's session list ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual void `[`ReconcileAPITemplates`](#classURH__LocalPlayerSessionSubsystem_1a4f63fd2f8b8a6f34c01cc45022eeee71)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Reconciles the list of template SessionTypes with this subsystem, removing any templates that are no longer in the list, then updates the stored ETag for the local player's templatelist ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public virtual bool `[`GetTemplate`](#classURH__LocalPlayerSessionSubsystem_1a237eee46e92fabeb77c426fce7e857d8)`(const FString & Type,`[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Looks up a template from within this subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`GetTemplates`](#classURH__LocalPlayerSessionSubsystem_1a6ecb1b04a0bc6393b42a11d00609e580)`() const` | Gets a list of all templates in this subsystem.
`public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__LocalPlayerSessionSubsystem_1a2f60c3627f17b0cc366307a1c6aab830)`() const` | Looks up a ETag to use when querying for session membership ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__LocalPlayerSessionSubsystem_1a750ee76f5c28dbfae5575f206c23dbff)`() const` | Looks up a ETag to use when querying for template information ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__LocalPlayerSessionSubsystem_1a573fa34a250882293c81f9bad329f987)`() const` | Looks up all sessions to process when polling if ETags match ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)
`public void `[`SearchForSessions`](#classURH__LocalPlayerSessionSubsystem_1a2d981ffabd1a06a57e12cf2f64e991c5)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & Params,const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)` | Utility function that searches the session browser cache for information on browser sessions.
`public void `[`StartPolling`](#classURH__LocalPlayerSessionSubsystem_1a46f1de5fd5535924cb742f82878b949a)`()` | Start polling for session template and membership updates.
`public void `[`StopPolling`](#classURH__LocalPlayerSessionSubsystem_1ae11fbca181c0c52bd17cc06b701a12e1)`()` | Stop polling for session template and membership updates.
`public void `[`PollForUpdate`](#classURH__LocalPlayerSessionSubsystem_1a1a13b1d7c4f1993e553f95ec10966c5b)`(const FRH_PollCompleteFunc & Delegate)` | Poll function for use with [FRH_AutoPoller](Polling.md#structFRH__AutoPoller).
`public void `[`ForcePollForUpdate`](#classURH__LocalPlayerSessionSubsystem_1a6f7a77ff7630f1beb1aa58e3943adda1)`(bool bClearETag)` | Force an immediate poll.
`public float `[`GetPollTimeRemaining`](#classURH__LocalPlayerSessionSubsystem_1a27ce3d0bc063b3466f74c6b5e735696c)`() const` | Get the current time remaining on poll cycle, or -1.f if not polling.
`public inline virtual bool `[`HasInitialSessionData`](#classURH__LocalPlayerSessionSubsystem_1a066058a5f0658733d0e27f7ce447b4bd)`() const` | Get whether initial session data has been polled successfully (which may not include any sessions)
`protected FRH_AutoPollerPtr `[`Poller`](#classURH__LocalPlayerSessionSubsystem_1a042e9dee585644aa339fd3b3b8e6ad12) | Poller for sessions.
`protected TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates`](#classURH__LocalPlayerSessionSubsystem_1a78953314d26e12a0aa43abd5828fe912) | Map of Template Ids to Session Templates.
`protected TOptional< FString > `[`AllSessionsETag`](#classURH__LocalPlayerSessionSubsystem_1a3b99704446608834a66a9def184c133b) | ETag of last QueryAllSessions call response.
`protected TOptional< FString > `[`AllTemplatesETag`](#classURH__LocalPlayerSessionSubsystem_1a5479e5160d85fc15ecfc553a897d5bea) | ETag of last QueryAllSessionTemplates call response.
`protected TOptional< FOnlineSessionSearchResult > `[`PlatformSessionToJoinOnUserChange`](#classURH__LocalPlayerSessionSubsystem_1afcd78f39dfd5aebd442d959d6212fbaa) | OSS Session that we need to join upon user change (ex: login).
`protected TMap< FString, `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`Sessions`](#classURH__LocalPlayerSessionSubsystem_1a134d1e08da7eae1d03ba4b5a1ee419d6) | Map of Session Ids to Sessions we are in.
`protected TMap< FString, `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`ExpiringSessions`](#classURH__LocalPlayerSessionSubsystem_1ad1bcc3afd124b033ccfba4b001cebbe2) | Map of Session Ids to Sessions objects that may be in the process of cleaning themselves up.
`protected TMap< FString, `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` > `[`DeferredSessionUpdates`](#classURH__LocalPlayerSessionSubsystem_1a9f22ebb821fcb358e5e277acbef28010) | Map of Session Ids to Sessions updates we could not process for some reason, such as race conditions.
`protected TMap< FString, `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * > `[`PlatformSyncers`](#classURH__LocalPlayerSessionSubsystem_1ab601abbf8833c31cb45ccde7d481d3de) | Map of Session Ids to their Platform Session Syncers.
`protected virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`CreateOrUpdateRHSession`](#classURH__LocalPlayerSessionSubsystem_1a978d608c83b7e6db20f955d8003f77b7)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session,const ERHAPI_SessionPlayerStatus & LocalPlayerStatus)` | Creates or updates a specific session for the local player.
`protected virtual bool `[`LocalPlayerStatusFromSession`](#classURH__LocalPlayerSessionSubsystem_1aa0bec72de8c9da10cb97e78730c5cb79)`(const `[`FRHAPI_Session`](RHAPI_Session.md#structFRHAPI__Session)` & Session,ERHAPI_SessionPlayerStatus & Status) const` | Gets the local player status in a specific session.
`protected inline virtual void `[`RemoveSession`](#classURH__LocalPlayerSessionSubsystem_1ac956ad61bb35b46c9cb067e247e8b06f)`(const `[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` | Removes a cached session for the local player, this does NOT try to leave it.
`protected virtual void `[`OnExpirationComplete`](#classURH__LocalPlayerSessionSubsystem_1ae8b9736ce9f79dd68014b3f01df9fd1f)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` | Called when a session the local player is part of expires.
`protected virtual bool `[`PreprocessAPISessionImport`](#classURH__LocalPlayerSessionSubsystem_1a9c559f45b88f7a21f62dcdf6476fcbea)`(const `[`FRHAPI_Session`](RHAPI_Session.md#structFRHAPI__Session)` & Session,ERHAPI_SessionPlayerStatus & Status)` | Attepts to preprocess an API session.
`protected virtual void `[`OnUserChanged`](#classURH__LocalPlayerSessionSubsystem_1a26fbf14bcba6e280614f699fb5e3711c)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Base handling when the local user changes, override to provide functionality.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__LocalPlayerSessionSubsystem_1a8d62c9d3f5c42d59b77fa894ce226ad4)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual void `[`HandleNotification`](#classURH__LocalPlayerSessionSubsystem_1aa1277f7aa4d99bb48c64153da9b8574f)`(const struct `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` | Handle a notification from the notification API.
`protected `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`CreatePlatformSyncer`](#classURH__LocalPlayerSessionSubsystem_1a96aa1cc05790f411445ac30733532f76)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session)` | Creates a Platform Session Syncer for the local player.
`protected virtual bool `[`FilterOSSCallbackUser`](#classURH__LocalPlayerSessionSubsystem_1ac3f8a2189935d62ddee4f0c523028264)`(const int32 ControllerId)` | Checks if the online subsystem call is for the local user.
`protected virtual bool `[`FilterOSSCallbackUser`](#classURH__LocalPlayerSessionSubsystem_1a499f53a4e277ea57c023eca530e7edd1)`(const FUniqueNetId & UniqueNetId)` | Checks if the online subsystem call is for the local user.
`protected virtual void `[`OnPlatformActivityActivation`](#classURH__LocalPlayerSessionSubsystem_1aa06aadafbc3aebee2e79d0114db792a3)`(const FUniqueNetId & LocalUserId,const FString & ActivityId,const FOnlineSessionSearchResult * SessionInfo)` | Handles the response of an online subsystem activity activation.
`protected virtual void `[`OnPlatformSessionInviteAccepted`](#classURH__LocalPlayerSessionSubsystem_1a8dc7b270d5a63dc6024cc5a0422ea032)`(const bool bSuccesful,const int32 ControllerId,FUniqueNetIdPtr UserId,const FOnlineSessionSearchResult & Session)` | Handles the response of an online subsystem session invite.
`protected virtual void `[`OnPlatformSessionCreated`](#classURH__LocalPlayerSessionSubsystem_1a58f090980ad25944e7f9fc974b6d3ed2)`(FName SessionName,bool bSuccess)` | Handles the response of an online subsystem session creation.
`protected virtual void `[`OnPlatformSessionJoined`](#classURH__LocalPlayerSessionSubsystem_1a407cb4e27d487bbc1f9530a7b8a3f802)`(FName SessionName,EOnJoinSessionCompleteResult::Type Result)` | Handles the response of an online subsystem session join.
`protected virtual void `[`OnPlatformSessionStarted`](#classURH__LocalPlayerSessionSubsystem_1a0c299fea961f369123ca438e318ba266)`(FName SessionName,bool bSuccess)` | Handles the response of an online subsystem session started.
`protected virtual void `[`OnPlatformSessionEnded`](#classURH__LocalPlayerSessionSubsystem_1af0572f80f29da197fabf336175c8fcb2)`(FName SessionName,bool bSuccess)` | Handles the response of an online subsystem session ended.
`protected virtual void `[`OnPlatformSessionDestroyed`](#classURH__LocalPlayerSessionSubsystem_1a635b650a45ccde86c301b7f88aa0484d)`(FName SessionName,bool bSuccess)` | Handles the response of an online subsystem session destroy.
`protected virtual void `[`OnPlatformSessionParticipantsChanged`](#classURH__LocalPlayerSessionSubsystem_1a7d2554778e7116195c8c783eab1b1488)`(FName SessionName,const FUniqueNetId & UniqueNetId,bool bJoined)` | Called from other Platform Session Participant functions to reconcile the state of the platform syncer.
`protected virtual void `[`OnPlatformSessionParticipantChange`](#classURH__LocalPlayerSessionSubsystem_1a18ac6fdc4538f89361f5e23d27b0fcd3)`(FName SessionName,const FUniqueNetId & UniqueNetId,bool bJoined)` | Handles the response of an online subsystem session participant change.
`protected virtual void `[`OnPlatformSessionParticipantRemoved`](#classURH__LocalPlayerSessionSubsystem_1a19fcc5c2c30710932f1757dbe0ce3666)`(FName SessionName,const FUniqueNetId & UniqueNetId)` | Handles the response of an online subsystem session participant remove.
`protected virtual void `[`HandlePollAllSessionsComplete`](#classURH__LocalPlayerSessionSubsystem_1a723518fadb2e8fb85f0a624debb53b91)`(bool bSuccess,const TArray< FString > & SessionIds)` | Handles the response of polling all sessions.

### Members

#### `public const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`JoinDetails`](#classURH__LocalPlayerSessionSubsystem_1ab51cd43e773e8da6fe045e438265d2b8) <a id="classURH__LocalPlayerSessionSubsystem_1ab51cd43e773e8da6fe045e438265d2b8"></a>

#### `public const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__LocalPlayerSessionSubsystem_1a162d729ae29c6aaea092eb1c3ff8270c) <a id="classURH__LocalPlayerSessionSubsystem_1a162d729ae29c6aaea092eb1c3ff8270c"></a>

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionUpdatedDelegate`](#classURH__LocalPlayerSessionSubsystem_1a87ec0a5447e17ebbbda133342770d960) <a id="classURH__LocalPlayerSessionSubsystem_1a87ec0a5447e17ebbbda133342770d960"></a>

Multicast delegate triggered when a session managed by this subsystem is updated.

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionAddedDelegate`](#classURH__LocalPlayerSessionSubsystem_1a34c015e300be4c0474addf8f6d6d947b) <a id="classURH__LocalPlayerSessionSubsystem_1a34c015e300be4c0474addf8f6d6d947b"></a>

Multicast delegate triggered when a session managed by this subsystem is added.

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionRemovedDelegate`](#classURH__LocalPlayerSessionSubsystem_1af13b47604f229daf45aa56fdb25554cc) <a id="classURH__LocalPlayerSessionSubsystem_1af13b47604f229daf45aa56fdb25554cc"></a>

Multicast delegate triggered when a session managed by this subsystem is removed.

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionExpirationCompleteDelegate`](#classURH__LocalPlayerSessionSubsystem_1a897c37a8854ad40a5ab9f75129a57e74) <a id="classURH__LocalPlayerSessionSubsystem_1a897c37a8854ad40a5ab9f75129a57e74"></a>

Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)

#### `public FRH_OnLoginPollSessionsCompleteMulticastDelegate `[`OnLoginPollSessionsCompleteDelegate`](#classURH__LocalPlayerSessionSubsystem_1adf39311c4affa07453f6dd6cfeab6203) <a id="classURH__LocalPlayerSessionSubsystem_1adf39311c4affa07453f6dd6cfeab6203"></a>

Multicast delegate triggered when the initial poll after login is complete, to do first-time setup.

#### `public FRH_OnFailedToJoinPlatformSessionMulticastDelegate `[`OnFailedToJoinPlatformSessionDelegate`](#classURH__LocalPlayerSessionSubsystem_1aaa731f4db12fb478a38ca11784438b63) <a id="classURH__LocalPlayerSessionSubsystem_1aaa731f4db12fb478a38ca11784438b63"></a>

Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to.

#### `public  `[`URH_LocalPlayerSessionSubsystem`](#classURH__LocalPlayerSessionSubsystem_1a038813e71ac05adf08f219b29d703891)`()` <a id="classURH__LocalPlayerSessionSubsystem_1a038813e71ac05adf08f219b29d703891"></a>

#### `public virtual void `[`Initialize`](#classURH__LocalPlayerSessionSubsystem_1a0f380ce4b08ba9e13a06496939bc14d7)`()` <a id="classURH__LocalPlayerSessionSubsystem_1a0f380ce4b08ba9e13a06496939bc14d7"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__LocalPlayerSessionSubsystem_1a120580f60e2559621a29074257000119)`()` <a id="classURH__LocalPlayerSessionSubsystem_1a120580f60e2559621a29074257000119"></a>

Deinitialize the subsystem.

#### `public inline virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__LocalPlayerSessionSubsystem_1a6eb6370bc861ae0aa43831888996e885)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a6eb6370bc861ae0aa43831888996e885"></a>

Get auth context for session ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public inline virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__LocalPlayerSessionSubsystem_1a35fadcbb4a6200cf5f6dd50219425632)`(const FString & SessionId) const` <a id="classURH__LocalPlayerSessionSubsystem_1a35fadcbb4a6200cf5f6dd50219425632"></a>

Get session by its Session Id.

#### Parameters
* `SessionId` Session Id to look up 

#### Returns
Session object, if it exists

#### `public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetSessionsByType`](#classURH__LocalPlayerSessionSubsystem_1ade3626d6a9eea60910b82c8be0672b90)`(const FString & Type) const` <a id="classURH__LocalPlayerSessionSubsystem_1ade3626d6a9eea60910b82c8be0672b90"></a>

Get all joined and invited sessions by SessionType.

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Array of session objects of the specified SessionType

#### `public TArray< `[`URH_InvitedSession`](Session.md#classURH__InvitedSession)` * > `[`GetInvitedSessionsByType`](#classURH__LocalPlayerSessionSubsystem_1a3f39bc19e62996704c7e7fce26d458f4)`(const FString & Type) const` <a id="classURH__LocalPlayerSessionSubsystem_1a3f39bc19e62996704c7e7fce26d458f4"></a>

Get all invited sessions by SessionType.

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Array of session objects of the specified SessionType

#### `public TArray< `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * > `[`GetJoinedSessionsByType`](#classURH__LocalPlayerSessionSubsystem_1a88fb114cf7ce24803441a1606552c3a0)`(const FString & Type) const` <a id="classURH__LocalPlayerSessionSubsystem_1a88fb114cf7ce24803441a1606552c3a0"></a>

Get all joined sessions by SessionType.

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Array of session objects of the specified SessionType

#### `public inline FORCEINLINE `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetFirstSessionByType`](#classURH__LocalPlayerSessionSubsystem_1aa1daf7f451869c9f3be2a145756a4462)`(const FString & Type) const` <a id="classURH__LocalPlayerSessionSubsystem_1aa1daf7f451869c9f3be2a145756a4462"></a>

Get first joined or invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists

#### `public inline FORCEINLINE `[`URH_InvitedSession`](Session.md#classURH__InvitedSession)` * `[`GetFirstInvitedSessionByType`](#classURH__LocalPlayerSessionSubsystem_1a9431ecae7f1da9a2ac011aaace0f3b7c)`(const FString & Type) const` <a id="classURH__LocalPlayerSessionSubsystem_1a9431ecae7f1da9a2ac011aaace0f3b7c"></a>

Get first invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists

#### `public inline FORCEINLINE `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetFirstJoinedSessionByType`](#classURH__LocalPlayerSessionSubsystem_1a38dc9247565316917f5332ab63aa18d5)`(const FString & Type) const` <a id="classURH__LocalPlayerSessionSubsystem_1a38dc9247565316917f5332ab63aa18d5"></a>

Get first joined sessions by SessionType (useful for titles that ensure only one of a given session type will exist)

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists

#### `public `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetFirstActiveSession`](#classURH__LocalPlayerSessionSubsystem_1a8fcbcaefdffd59e7573c7112834c58f1)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a8fcbcaefdffd59e7573c7112834c58f1"></a>

Get first "active" session (session which is IsActive())

#### Parameters
* `SessionType` SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists

#### `public inline FORCEINLINE TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetSessions`](#classURH__LocalPlayerSessionSubsystem_1ac5e0acf5f9d7f762f5c9ceec8d6b9c02)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1ac5e0acf5f9d7f762f5c9ceec8d6b9c02"></a>

Get an array of all sessions controlled by this system.

#### Returns
Array of session objects

#### `public virtual void `[`RemoveSessionById`](#classURH__LocalPlayerSessionSubsystem_1a7e790f89c514d7210c5b58b947cebec2)`(const FString & SessionId)` <a id="classURH__LocalPlayerSessionSubsystem_1a7e790f89c514d7210c5b58b947cebec2"></a>

Removes a cached session for the local player, this does NOT try to leave it.

#### Parameters
* `SessionId` The Session Id to remove.

#### `public inline FORCEINLINE bool `[`IsInSession`](#classURH__LocalPlayerSessionSubsystem_1ad5bfcc3b466927d7d92f94bff1ba31d5)`(const FString & SessionId)` <a id="classURH__LocalPlayerSessionSubsystem_1ad5bfcc3b466927d7d92f94bff1ba31d5"></a>

Utility function to determine if local player is a member of that session.

#### Parameters
* `SessionId` Session Id to check 

#### Returns
whether or not the player is in the session

#### `public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__LocalPlayerSessionSubsystem_1a96a865719fb2494d0e89e7660a6fd2b2)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a96a865719fb2494d0e89e7660a6fd2b2"></a>

Utility function to look up the player info subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__LocalPlayerSessionSubsystem_1a07e92b976c6edb22a8d8e2abc574e1c7)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a07e92b976c6edb22a8d8e2abc574e1c7"></a>

Utility function to look up the OnlineSubsystem to use for session calls ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__LocalPlayerSessionSubsystem_1a242dea7f5ff3092050c7d15ba05dc8a0)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a242dea7f5ff3092050c7d15ba05dc8a0"></a>

Utility function to look up the UniqueNetId to use for OnlineSubsystem calls ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public virtual FPlatformUserId `[`GetOSSPlatformUserId`](#classURH__LocalPlayerSessionSubsystem_1a381885585853e65604470259e8a053ff)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a381885585853e65604470259e8a053ff"></a>

Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)

#### `public virtual FGuid `[`GetPlayerUuid`](#classURH__LocalPlayerSessionSubsystem_1aaf5587019c1eb05ce9e42c72541dd802)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1aaf5587019c1eb05ce9e42c72541dd802"></a>

Gets the Player UUID to use for player related calls (can be invalid)

#### `public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__LocalPlayerSessionSubsystem_1af17a705ee8af54747dccb52a37554918)`(const FString & SessionId) const` <a id="classURH__LocalPlayerSessionSubsystem_1af17a705ee8af54747dccb52a37554918"></a>

Gets the platform session synchronization object for a given session id ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### Parameters
* `SessionId` RallyHere Session Id to look up the synchornization object wiht 

#### Returns
Platform Session synchronization object

#### `public virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__LocalPlayerSessionSubsystem_1a5f4ce3f68b15c21a15411b1a12bad287)`(const FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__LocalPlayerSessionSubsystem_1a5f4ce3f68b15c21a15411b1a12bad287"></a>

Gets the platform session synchronization object for a given platform session id.

#### Parameters
* `PlatformSessionId` Platform Session Id (as string) to look up the synchornization object wiht 

#### Returns
Platform Session synchronization object

#### `public inline virtual void `[`SetPlatformSessionToJoinOnUserChange`](#classURH__LocalPlayerSessionSubsystem_1a7b32f021e042bf401d2156764df2babc)`(const FOnlineSessionSearchResult & Session)` <a id="classURH__LocalPlayerSessionSubsystem_1a7b32f021e042bf401d2156764df2babc"></a>

Set a platform session to join upon the next user change.

#### `public inline virtual void `[`ClearPlatformSessionToJoinOnUserChange`](#classURH__LocalPlayerSessionSubsystem_1afa5db7d0b7302957dd89c4a7b9f78cb5)`()` <a id="classURH__LocalPlayerSessionSubsystem_1afa5db7d0b7302957dd89c4a7b9f78cb5"></a>

Clear a platform session to join upon the next user change.

#### `public inline void `[`CreateOrJoinSessionByType`](#classURH__LocalPlayerSessionSubsystem_1ae987d7bbdbc819106e7e00a06a08d918)`(const `[`FRHAPI_CreateOrJoinRequest`](RHAPI_CreateOrJoinRequest.md#structFRHAPI__CreateOrJoinRequest)` & CreateParams,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__LocalPlayerSessionSubsystem_1ae987d7bbdbc819106e7e00a06a08d918"></a>

Utility function to Create or Join a session by a given SessionType (most times will create a session, but Hub join rules may do a Join instead)

#### Parameters
* `CreateParams` Creation paramters for the session 

* `Delegate` delegate to trigger when complete

#### `public inline void `[`JoinSessionById`](#classURH__LocalPlayerSessionSubsystem_1a81439a14711f1519f5a4c109574d0527)`(const FString & SessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__LocalPlayerSessionSubsystem_1a81439a14711f1519f5a4c109574d0527"></a>

Utility function to Join a session by SessionId.

#### Parameters
* `SessionId` The session id to join 

* `Delegate` delegate to trigger when complete

#### `public inline void `[`JoinSessionByIdEx`](#classURH__LocalPlayerSessionSubsystem_1aaa07b3f9a72b7c7dc3d17a301df2a34a)`(const FString & SessionId,const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & JoinDetails,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__LocalPlayerSessionSubsystem_1aaa07b3f9a72b7c7dc3d17a301df2a34a"></a>

Utility function to Join a session by SessionId with additional options.

#### Parameters
* `SessionId` The session id to join 

* `JoinDetails` Details to join the session with 

* `Delegate` delegate to trigger when complete

#### `public virtual void `[`ImportAPISession`](#classURH__LocalPlayerSessionSubsystem_1a21c227f5c4a783adacd79c25714aa2e3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classURH__LocalPlayerSessionSubsystem_1a21c227f5c4a783adacd79c25714aa2e3"></a>

Imports a new or updated session from the API into this subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### Parameters
* `Session` The session data to import

#### `public virtual void `[`ImportAPITemplate`](#classURH__LocalPlayerSessionSubsystem_1ae7616f99c6aa669e529aad3cd0a0451f)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classURH__LocalPlayerSessionSubsystem_1ae7616f99c6aa669e529aad3cd0a0451f"></a>

Imports a new session template from the API into this subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### Parameters
* `Template` the template data to import

#### `public virtual void `[`ReconcileAPISessions`](#classURH__LocalPlayerSessionSubsystem_1aede0956db4c8e8626fa239c16cb3d61e)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` <a id="classURH__LocalPlayerSessionSubsystem_1aede0956db4c8e8626fa239c16cb3d61e"></a>

Reconciles the list of session ids with this subsystem, removing any sessions that are no longer in the list, then updates the stored ETag for the local player's session list ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### Parameters
* `SessionIds` The list of session ids to reconcile against 

* `ETag` optional ETag to use when querying all sessions for optimization

#### `public virtual void `[`ReconcileAPITemplates`](#classURH__LocalPlayerSessionSubsystem_1a4f63fd2f8b8a6f34c01cc45022eeee71)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` <a id="classURH__LocalPlayerSessionSubsystem_1a4f63fd2f8b8a6f34c01cc45022eeee71"></a>

Reconciles the list of template SessionTypes with this subsystem, removing any templates that are no longer in the list, then updates the stored ETag for the local player's templatelist ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### Parameters
* `InTemplates` The list of template names (SessionType) ids to reconcile against 

* `ETag` optional ETag to use when querying all templates for optimization

#### `public virtual bool `[`GetTemplate`](#classURH__LocalPlayerSessionSubsystem_1a237eee46e92fabeb77c426fce7e857d8)`(const FString & Type,`[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classURH__LocalPlayerSessionSubsystem_1a237eee46e92fabeb77c426fce7e857d8"></a>

Looks up a template from within this subsystem ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### Parameters
* `Type` The SessionType to look up 

* `Template` The template information, if found 

#### Returns
Whether or not the template was found

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`GetTemplates`](#classURH__LocalPlayerSessionSubsystem_1a6ecb1b04a0bc6393b42a11d00609e580)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a6ecb1b04a0bc6393b42a11d00609e580"></a>

Gets a list of all templates in this subsystem.

#### Returns
Array of all templates

#### `public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__LocalPlayerSessionSubsystem_1a2f60c3627f17b0cc366307a1c6aab830)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a2f60c3627f17b0cc366307a1c6aab830"></a>

Looks up a ETag to use when querying for session membership ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__LocalPlayerSessionSubsystem_1a750ee76f5c28dbfae5575f206c23dbff)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a750ee76f5c28dbfae5575f206c23dbff"></a>

Looks up a ETag to use when querying for template information ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__LocalPlayerSessionSubsystem_1a573fa34a250882293c81f9bad329f987)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a573fa34a250882293c81f9bad329f987"></a>

Looks up all sessions to process when polling if ETags match ([IRH_SessionOwnerInterface](Session.md#classIRH__SessionOwnerInterface) requirement)

#### `public void `[`SearchForSessions`](#classURH__LocalPlayerSessionSubsystem_1a2d981ffabd1a06a57e12cf2f64e991c5)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & Params,const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)` <a id="classURH__LocalPlayerSessionSubsystem_1a2d981ffabd1a06a57e12cf2f64e991c5"></a>

Utility function that searches the session browser cache for information on browser sessions.

#### Parameters
* `Params` Search parameters for the browser search 

* `Delegate` Delegate to trigger once complete

#### `public void `[`StartPolling`](#classURH__LocalPlayerSessionSubsystem_1a46f1de5fd5535924cb742f82878b949a)`()` <a id="classURH__LocalPlayerSessionSubsystem_1a46f1de5fd5535924cb742f82878b949a"></a>

Start polling for session template and membership updates.

#### `public void `[`StopPolling`](#classURH__LocalPlayerSessionSubsystem_1ae11fbca181c0c52bd17cc06b701a12e1)`()` <a id="classURH__LocalPlayerSessionSubsystem_1ae11fbca181c0c52bd17cc06b701a12e1"></a>

Stop polling for session template and membership updates.

#### `public void `[`PollForUpdate`](#classURH__LocalPlayerSessionSubsystem_1a1a13b1d7c4f1993e553f95ec10966c5b)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__LocalPlayerSessionSubsystem_1a1a13b1d7c4f1993e553f95ec10966c5b"></a>

Poll function for use with [FRH_AutoPoller](Polling.md#structFRH__AutoPoller).

#### Parameters
* `PollComplete` delegate to restart the poll

#### `public void `[`ForcePollForUpdate`](#classURH__LocalPlayerSessionSubsystem_1a6f7a77ff7630f1beb1aa58e3943adda1)`(bool bClearETag)` <a id="classURH__LocalPlayerSessionSubsystem_1a6f7a77ff7630f1beb1aa58e3943adda1"></a>

Force an immediate poll.

#### `public float `[`GetPollTimeRemaining`](#classURH__LocalPlayerSessionSubsystem_1a27ce3d0bc063b3466f74c6b5e735696c)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a27ce3d0bc063b3466f74c6b5e735696c"></a>

Get the current time remaining on poll cycle, or -1.f if not polling.

#### `public inline virtual bool `[`HasInitialSessionData`](#classURH__LocalPlayerSessionSubsystem_1a066058a5f0658733d0e27f7ce447b4bd)`() const` <a id="classURH__LocalPlayerSessionSubsystem_1a066058a5f0658733d0e27f7ce447b4bd"></a>

Get whether initial session data has been polled successfully (which may not include any sessions)

#### `protected FRH_AutoPollerPtr `[`Poller`](#classURH__LocalPlayerSessionSubsystem_1a042e9dee585644aa339fd3b3b8e6ad12) <a id="classURH__LocalPlayerSessionSubsystem_1a042e9dee585644aa339fd3b3b8e6ad12"></a>

Poller for sessions.

#### `protected TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates`](#classURH__LocalPlayerSessionSubsystem_1a78953314d26e12a0aa43abd5828fe912) <a id="classURH__LocalPlayerSessionSubsystem_1a78953314d26e12a0aa43abd5828fe912"></a>

Map of Template Ids to Session Templates.

#### `protected TOptional< FString > `[`AllSessionsETag`](#classURH__LocalPlayerSessionSubsystem_1a3b99704446608834a66a9def184c133b) <a id="classURH__LocalPlayerSessionSubsystem_1a3b99704446608834a66a9def184c133b"></a>

ETag of last QueryAllSessions call response.

#### `protected TOptional< FString > `[`AllTemplatesETag`](#classURH__LocalPlayerSessionSubsystem_1a5479e5160d85fc15ecfc553a897d5bea) <a id="classURH__LocalPlayerSessionSubsystem_1a5479e5160d85fc15ecfc553a897d5bea"></a>

ETag of last QueryAllSessionTemplates call response.

#### `protected TOptional< FOnlineSessionSearchResult > `[`PlatformSessionToJoinOnUserChange`](#classURH__LocalPlayerSessionSubsystem_1afcd78f39dfd5aebd442d959d6212fbaa) <a id="classURH__LocalPlayerSessionSubsystem_1afcd78f39dfd5aebd442d959d6212fbaa"></a>

OSS Session that we need to join upon user change (ex: login).

#### `protected TMap< FString, `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`Sessions`](#classURH__LocalPlayerSessionSubsystem_1a134d1e08da7eae1d03ba4b5a1ee419d6) <a id="classURH__LocalPlayerSessionSubsystem_1a134d1e08da7eae1d03ba4b5a1ee419d6"></a>

Map of Session Ids to Sessions we are in.

#### `protected TMap< FString, `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`ExpiringSessions`](#classURH__LocalPlayerSessionSubsystem_1ad1bcc3afd124b033ccfba4b001cebbe2) <a id="classURH__LocalPlayerSessionSubsystem_1ad1bcc3afd124b033ccfba4b001cebbe2"></a>

Map of Session Ids to Sessions objects that may be in the process of cleaning themselves up.

#### `protected TMap< FString, `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` > `[`DeferredSessionUpdates`](#classURH__LocalPlayerSessionSubsystem_1a9f22ebb821fcb358e5e277acbef28010) <a id="classURH__LocalPlayerSessionSubsystem_1a9f22ebb821fcb358e5e277acbef28010"></a>

Map of Session Ids to Sessions updates we could not process for some reason, such as race conditions.

#### `protected TMap< FString, `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * > `[`PlatformSyncers`](#classURH__LocalPlayerSessionSubsystem_1ab601abbf8833c31cb45ccde7d481d3de) <a id="classURH__LocalPlayerSessionSubsystem_1ab601abbf8833c31cb45ccde7d481d3de"></a>

Map of Session Ids to their Platform Session Syncers.

#### `protected virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`CreateOrUpdateRHSession`](#classURH__LocalPlayerSessionSubsystem_1a978d608c83b7e6db20f955d8003f77b7)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session,const ERHAPI_SessionPlayerStatus & LocalPlayerStatus)` <a id="classURH__LocalPlayerSessionSubsystem_1a978d608c83b7e6db20f955d8003f77b7"></a>

Creates or updates a specific session for the local player.

#### Parameters
* `Session` Session information to create or update. 

* `LocalPlayerStatus` The status of the local player in the session. 

#### Returns
The session that is created or updated.

#### `protected virtual bool `[`LocalPlayerStatusFromSession`](#classURH__LocalPlayerSessionSubsystem_1aa0bec72de8c9da10cb97e78730c5cb79)`(const `[`FRHAPI_Session`](RHAPI_Session.md#structFRHAPI__Session)` & Session,ERHAPI_SessionPlayerStatus & Status) const` <a id="classURH__LocalPlayerSessionSubsystem_1aa0bec72de8c9da10cb97e78730c5cb79"></a>

Gets the local player status in a specific session.

#### Parameters
* `Session` The Session to get the local player status from. 

* `Status` The status of the local player in the session. 

#### Returns
True if the player is part of that session.

#### `protected inline virtual void `[`RemoveSession`](#classURH__LocalPlayerSessionSubsystem_1ac956ad61bb35b46c9cb067e247e8b06f)`(const `[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` <a id="classURH__LocalPlayerSessionSubsystem_1ac956ad61bb35b46c9cb067e247e8b06f"></a>

Removes a cached session for the local player, this does NOT try to leave it.

#### Parameters
* `Session` The Session to remove.

#### `protected virtual void `[`OnExpirationComplete`](#classURH__LocalPlayerSessionSubsystem_1ae8b9736ce9f79dd68014b3f01df9fd1f)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` <a id="classURH__LocalPlayerSessionSubsystem_1ae8b9736ce9f79dd68014b3f01df9fd1f"></a>

Called when a session the local player is part of expires.

#### Parameters
* `Session` The session that expired.

#### `protected virtual bool `[`PreprocessAPISessionImport`](#classURH__LocalPlayerSessionSubsystem_1a9c559f45b88f7a21f62dcdf6476fcbea)`(const `[`FRHAPI_Session`](RHAPI_Session.md#structFRHAPI__Session)` & Session,ERHAPI_SessionPlayerStatus & Status)` <a id="classURH__LocalPlayerSessionSubsystem_1a9c559f45b88f7a21f62dcdf6476fcbea"></a>

Attepts to preprocess an API session.

#### Parameters
* `Session` The session to preprocess. 

* `Status` The status of the local player to that session. 

#### Returns
False if deferred or dropped, true if it can be processed.

#### `protected virtual void `[`OnUserChanged`](#classURH__LocalPlayerSessionSubsystem_1a26fbf14bcba6e280614f699fb5e3711c)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__LocalPlayerSessionSubsystem_1a26fbf14bcba6e280614f699fb5e3711c"></a>

Base handling when the local user changes, override to provide functionality.

#### Parameters
* `OldPlayerUuid` The old player Uuid. 

* `OldLocalPlayerInfo` The old local player info.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__LocalPlayerSessionSubsystem_1a8d62c9d3f5c42d59b77fa894ce226ad4)`()` <a id="classURH__LocalPlayerSessionSubsystem_1a8d62c9d3f5c42d59b77fa894ce226ad4"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected virtual void `[`HandleNotification`](#classURH__LocalPlayerSessionSubsystem_1aa1277f7aa4d99bb48c64153da9b8574f)`(const struct `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` <a id="classURH__LocalPlayerSessionSubsystem_1aa1277f7aa4d99bb48c64153da9b8574f"></a>

Handle a notification from the notification API.

#### Parameters
* `Notification` The notification to handle. 

* `APIName` The name of the API that sent the notification. 

* `APIParams` The parameters for the API that sent the notification.

#### `protected `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`CreatePlatformSyncer`](#classURH__LocalPlayerSessionSubsystem_1a96aa1cc05790f411445ac30733532f76)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session)` <a id="classURH__LocalPlayerSessionSubsystem_1a96aa1cc05790f411445ac30733532f76"></a>

Creates a Platform Session Syncer for the local player.

#### Parameters
* `Session` The Session assocaited with the syncer. 

#### Returns
The Platform Session Syncer.

#### `protected virtual bool `[`FilterOSSCallbackUser`](#classURH__LocalPlayerSessionSubsystem_1ac3f8a2189935d62ddee4f0c523028264)`(const int32 ControllerId)` <a id="classURH__LocalPlayerSessionSubsystem_1ac3f8a2189935d62ddee4f0c523028264"></a>

Checks if the online subsystem call is for the local user.

#### Parameters
* `ControllerId` The controller Id to check against. 

#### Returns
True if the callback is allowed.

#### `protected virtual bool `[`FilterOSSCallbackUser`](#classURH__LocalPlayerSessionSubsystem_1a499f53a4e277ea57c023eca530e7edd1)`(const FUniqueNetId & UniqueNetId)` <a id="classURH__LocalPlayerSessionSubsystem_1a499f53a4e277ea57c023eca530e7edd1"></a>

Checks if the online subsystem call is for the local user.

#### Parameters
* `UniqueNetId` The Unique Net Id to check against. 

#### Returns
True if the callback is allowed.

#### `protected virtual void `[`OnPlatformActivityActivation`](#classURH__LocalPlayerSessionSubsystem_1aa06aadafbc3aebee2e79d0114db792a3)`(const FUniqueNetId & LocalUserId,const FString & ActivityId,const FOnlineSessionSearchResult * SessionInfo)` <a id="classURH__LocalPlayerSessionSubsystem_1aa06aadafbc3aebee2e79d0114db792a3"></a>

Handles the response of an online subsystem activity activation.

#### Parameters
* `LocalUserId` The Unique Net Id associated with the activity. 

* `ActivityId` The Id of the activity. 

* `SessionInfo` The session info associated with the activity.

#### `protected virtual void `[`OnPlatformSessionInviteAccepted`](#classURH__LocalPlayerSessionSubsystem_1a8dc7b270d5a63dc6024cc5a0422ea032)`(const bool bSuccesful,const int32 ControllerId,FUniqueNetIdPtr UserId,const FOnlineSessionSearchResult & Session)` <a id="classURH__LocalPlayerSessionSubsystem_1a8dc7b270d5a63dc6024cc5a0422ea032"></a>

Handles the response of an online subsystem session invite.

#### Parameters
* `bSuccesful` True if the invite was successful. 

* `ControllerId` The controller Id of the invited player. 

* `UserId` Unique Net Id of the invited player. 

* `Session` The Session the invite was for.

#### `protected virtual void `[`OnPlatformSessionCreated`](#classURH__LocalPlayerSessionSubsystem_1a58f090980ad25944e7f9fc974b6d3ed2)`(FName SessionName,bool bSuccess)` <a id="classURH__LocalPlayerSessionSubsystem_1a58f090980ad25944e7f9fc974b6d3ed2"></a>

Handles the response of an online subsystem session creation.

#### Parameters
* `SessionName` The name of the created session. 

* `bSuccess` True if the creation was successful.

#### `protected virtual void `[`OnPlatformSessionJoined`](#classURH__LocalPlayerSessionSubsystem_1a407cb4e27d487bbc1f9530a7b8a3f802)`(FName SessionName,EOnJoinSessionCompleteResult::Type Result)` <a id="classURH__LocalPlayerSessionSubsystem_1a407cb4e27d487bbc1f9530a7b8a3f802"></a>

Handles the response of an online subsystem session join.

#### Parameters
* `SessionName` The name of the associated session. 

* `Result` The resule of the join attempt.

#### `protected virtual void `[`OnPlatformSessionStarted`](#classURH__LocalPlayerSessionSubsystem_1a0c299fea961f369123ca438e318ba266)`(FName SessionName,bool bSuccess)` <a id="classURH__LocalPlayerSessionSubsystem_1a0c299fea961f369123ca438e318ba266"></a>

Handles the response of an online subsystem session started.

#### Parameters
* `SessionName` The name of the associated session. 

* `bSuccess` True if the creation was successful.

#### `protected virtual void `[`OnPlatformSessionEnded`](#classURH__LocalPlayerSessionSubsystem_1af0572f80f29da197fabf336175c8fcb2)`(FName SessionName,bool bSuccess)` <a id="classURH__LocalPlayerSessionSubsystem_1af0572f80f29da197fabf336175c8fcb2"></a>

Handles the response of an online subsystem session ended.

#### Parameters
* `SessionName` The name of the associated session. 

* `bSuccess` True if the creation was successful.

#### `protected virtual void `[`OnPlatformSessionDestroyed`](#classURH__LocalPlayerSessionSubsystem_1a635b650a45ccde86c301b7f88aa0484d)`(FName SessionName,bool bSuccess)` <a id="classURH__LocalPlayerSessionSubsystem_1a635b650a45ccde86c301b7f88aa0484d"></a>

Handles the response of an online subsystem session destroy.

#### Parameters
* `SessionName` The name of the associated session. 

* `bSuccess` True if the creation was successful.

#### `protected virtual void `[`OnPlatformSessionParticipantsChanged`](#classURH__LocalPlayerSessionSubsystem_1a7d2554778e7116195c8c783eab1b1488)`(FName SessionName,const FUniqueNetId & UniqueNetId,bool bJoined)` <a id="classURH__LocalPlayerSessionSubsystem_1a7d2554778e7116195c8c783eab1b1488"></a>

Called from other Platform Session Participant functions to reconcile the state of the platform syncer.

#### Parameters
* `SessionName` The name of the associated session. 

* `UniqueNetId` Unique Net Id of the participant that joined, changed, left, or was removed.

#### `protected virtual void `[`OnPlatformSessionParticipantChange`](#classURH__LocalPlayerSessionSubsystem_1a18ac6fdc4538f89361f5e23d27b0fcd3)`(FName SessionName,const FUniqueNetId & UniqueNetId,bool bJoined)` <a id="classURH__LocalPlayerSessionSubsystem_1a18ac6fdc4538f89361f5e23d27b0fcd3"></a>

Handles the response of an online subsystem session participant change.

#### Parameters
* `SessionName` The name of the associated session. 

* `UniqueNetId` Unique Net Id of the participant that changed. 

* `bJoined` If that participant joined the session.

#### `protected virtual void `[`OnPlatformSessionParticipantRemoved`](#classURH__LocalPlayerSessionSubsystem_1a19fcc5c2c30710932f1757dbe0ce3666)`(FName SessionName,const FUniqueNetId & UniqueNetId)` <a id="classURH__LocalPlayerSessionSubsystem_1a19fcc5c2c30710932f1757dbe0ce3666"></a>

Handles the response of an online subsystem session participant remove.

#### Parameters
* `SessionName` The name of the associated session. 

* `UniqueNetId` Unique Net Id of the participant that was removed.

#### `protected virtual void `[`HandlePollAllSessionsComplete`](#classURH__LocalPlayerSessionSubsystem_1a723518fadb2e8fb85f0a624debb53b91)`(bool bSuccess,const TArray< FString > & SessionIds)` <a id="classURH__LocalPlayerSessionSubsystem_1a723518fadb2e8fb85f0a624debb53b91"></a>

Handles the response of polling all sessions.

#### Parameters
* `bSuccess` True if the poll was successful. 

* `SessionIds` Session Ids updated from the polling.

## class `URH_LocalPlayerSubsystem` <a id="classURH__LocalPlayerSubsystem"></a>

```
class URH_LocalPlayerSubsystem
  : public ULocalPlayerSubsystem
```

Subsystem to manage the local player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_AutoInventoryCompleteDelegate `[`OnAutoInventorySessionCreated`](#classURH__LocalPlayerSubsystem_1a07b265e2b34b7384507856b5039833cf) | Broadcast delegate for when intial inventory session is created, if using auto creation.
`public FRH_AutoInventoryCompleteDelegate `[`OnAutoEntitlementsProcessed`](#classURH__LocalPlayerSubsystem_1af051878305aecdec83c71ea862099d47) | Broadcast delegate for when intial platform entitlements are processed, if using auto processing.
`public virtual bool `[`ShouldCreateSubsystem`](#classURH__LocalPlayerSubsystem_1a9d3cb31fe04f48ca91f2ff8dcb7dabda)`(UObject * Outer) const` | Whether to create the subsystem (defaults to not creating if there are any derived subsystems).
`public virtual void `[`Initialize`](#classURH__LocalPlayerSubsystem_1a7b1163663e929dd2cad4688fb11fac02)`(FSubsystemCollectionBase & Collection)` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__LocalPlayerSubsystem_1adfc8060ee2b1815d85009c5d9c61fb10)`()` | Safely tears down the subsystem.
`public virtual bool `[`IsLoggedIn`](#classURH__LocalPlayerSubsystem_1aa87f996f6200f58e7bb5b1e76af85f78)`() const` | Gets if the player is currently logged in.
`public virtual FGuid `[`GetPlayerUuid`](#classURH__LocalPlayerSubsystem_1a639688a2978cc465ad6576e100daffe4)`() const` | Gets the player's unique player id.
`public virtual TOptional< ERHAPI_Platform > `[`GetLoggedInPlatform`](#classURH__LocalPlayerSubsystem_1a048bf1e9a716b9bd7c2774a4646a3780)`() const` | Gets the platform type for the player if logged in.
`public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__LocalPlayerSubsystem_1a4c35e09b4d1d7b9c2b1994ba26519509)`() const` | Gets the player's OSS unique id.
`public virtual int32 `[`GetPlatformUserId`](#classURH__LocalPlayerSubsystem_1a67201c7ebaba8d4b7f72bb55064f518c)`() const` | Gets the player's platform id.
`public inline virtual TSharedPtr< class IAnalyticsProvider > `[`GetAnalyticsProvider`](#classURH__LocalPlayerSubsystem_1a850df889785b3344b6779e5daacda4a3)`() const` | Gets the player's analytics provider.
`public virtual TSharedPtr< class IAnalyticsProvider > `[`CreateAnalyticsProvider`](#classURH__LocalPlayerSubsystem_1a3b8d761019f3cecca9472b609b6b6868)`()` | Gets the player's analytics provider.
`public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetLocalPlayerInfo`](#classURH__LocalPlayerSubsystem_1adb7c2e606b0220fbabdaf9f2cfe619b6)`() const` | Gets the player's player info.
`public virtual `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`GetPlayerPlatformId`](#classURH__LocalPlayerSubsystem_1a7a9c27b2728b01d3c9cf095af2533cd0)`() const` | Gets the player's platform id wrapped with platform type.
`public inline FORCEINLINE FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystem_1aac6f2bd9809734eae11efd9cdfbb0738)`() const` | Gets the player's auth context.
`public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__LocalPlayerSubsystem_1af28d3992d7757a476ae70f4fbe9c8d9e)`(const FName & SubsystemName) const` | Get a specific OSS by name for this local player's world. In editor, this allows each world/game instance to have a different OSS.
`public inline FORCEINLINE `[`URH_LocalPlayerLoginSubsystem`](LocalPlayer.md#classURH__LocalPlayerLoginSubsystem)` * `[`GetLoginSubsystem`](#classURH__LocalPlayerSubsystem_1a83dd1b24ed384f121ac62c3454b287c2)`() const` | Gets the player's login subsystem.
`public inline FORCEINLINE `[`URH_AdSubsystem`](Ads.md#classURH__AdSubsystem)` * `[`GetAdSubsystem`](#classURH__LocalPlayerSubsystem_1a657893fe2d39f56b63f0240e93d37a35)`() const` | Gets the player's ad subsystem.
`public inline FORCEINLINE `[`URH_FriendSubsystem`](Friends.md#classURH__FriendSubsystem)` * `[`GetFriendSubsystem`](#classURH__LocalPlayerSubsystem_1aa96edae19ba92eb31d043e2e0b3c1604)`() const` | Gets the player's friend subsystem.
`public inline FORCEINLINE `[`URH_LocalPlayerSessionSubsystem`](LocalPlayer.md#classURH__LocalPlayerSessionSubsystem)` * `[`GetSessionSubsystem`](#classURH__LocalPlayerSubsystem_1a5a2555ca69234e162e92f3b2fc7fdfe7)`() const` | Gets the player's session subsystem.
`public inline FORCEINLINE `[`URH_LocalPlayerPresenceSubsystem`](LocalPlayer.md#classURH__LocalPlayerPresenceSubsystem)` * `[`GetPresenceSubsystem`](#classURH__LocalPlayerSubsystem_1af9a36cfa5adbdd12513005035cfc44a4)`() const` | Gets the player's presence subsystem.
`public inline FORCEINLINE `[`URH_PurgeSubsystem`](Purge.md#classURH__PurgeSubsystem)` * `[`GetPurgeSubsystem`](#classURH__LocalPlayerSubsystem_1a21e89c2ffedfa9051e41fac1d1e6dc00)`() const` | Gets the player's purge subsystem.
`public inline FORCEINLINE `[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` * `[`GetEntitlementSubsystem`](#classURH__LocalPlayerSubsystem_1a52dfe0c4156ebab526c61f92237ed182)`() const` | Gets the player's entitlement subsystem.
`public virtual `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`GetPlayerNotifications`](#classURH__LocalPlayerSubsystem_1aead7865f1737ed5b1b50fb9c1769c7b9)`() const` | Gets the player's notification subsystem.
`public virtual `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__LocalPlayerSubsystem_1a90c483b9675aa38167ef92c7540c02d3)`() const` | Gets the player's player info.
`public virtual void `[`CustomEndpoint`](#classURH__LocalPlayerSubsystem_1a4b55e59b8d1f8dddbd2d91a8845e12dd)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`public virtual void `[`CustomEndpoint`](#classURH__LocalPlayerSubsystem_1ad82004afa264f46a22441f80c6d27554)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDelegateBlock & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`protected TArray< `[`URH_LocalPlayerSubsystemPlugin`](SubsystemBase.md#classURH__LocalPlayerSubsystemPlugin)` * > `[`SubsystemPlugins`](#classURH__LocalPlayerSubsystem_1aa1e0f18bd03b9082f4dfa3b87e294111) | Array of plugins for the Local Player Subsystem.
`protected TArray< `[`URH_SandboxedSubsystemPlugin`](SubsystemBase.md#classURH__SandboxedSubsystemPlugin)` * > `[`SandboxedSubsystemPlugins`](#classURH__LocalPlayerSubsystem_1a17f7feb3081a6a9ddd60220806af4101) | Array of sandboxed plugins for the Local Player Subsystem.
`protected `[`URH_LocalPlayerLoginSubsystem`](LocalPlayer.md#classURH__LocalPlayerLoginSubsystem)` * `[`LoginSubsystem`](#classURH__LocalPlayerSubsystem_1a4c91f163e0d3ce122ff5945e94fbfd42) | The Login Subsystem for the player.
`protected `[`URH_AdSubsystem`](Ads.md#classURH__AdSubsystem)` * `[`AdSubsystem`](#classURH__LocalPlayerSubsystem_1a7828f1874dcd91a147856a6919086273) | The Ad Subsystem for the player.
`protected `[`URH_FriendSubsystem`](Friends.md#classURH__FriendSubsystem)` * `[`FriendSubsystem`](#classURH__LocalPlayerSubsystem_1a71f593fae588e9f7afa7733eae6aafac) | The Friend Subsystem for the player.
`protected `[`URH_LocalPlayerSessionSubsystem`](LocalPlayer.md#classURH__LocalPlayerSessionSubsystem)` * `[`SessionSubsystem`](#classURH__LocalPlayerSubsystem_1a86df20cf68d8618951ae19a98c3fb5fd) | The Session Subsystem for the player.
`protected `[`URH_LocalPlayerPresenceSubsystem`](LocalPlayer.md#classURH__LocalPlayerPresenceSubsystem)` * `[`PresenceSubsystem`](#classURH__LocalPlayerSubsystem_1a1bc3544d5e09905d1a20b7d83af5087e) | The Presence Subsystem for the player.
`protected `[`URH_PurgeSubsystem`](Purge.md#classURH__PurgeSubsystem)` * `[`PurgeSubsystem`](#classURH__LocalPlayerSubsystem_1a7e1beadec9fe8b854a37e4518b77c9cc) | The Purge Subsystem for the player.
`protected `[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` * `[`EntitlementSubsystem`](#classURH__LocalPlayerSubsystem_1abbb158bc2cd5dd965ba03363d64723ba) | The Entitlement Subsystem for the player.
`protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`SandboxedPlayerInfoSubsystem`](#classURH__LocalPlayerSubsystem_1a2f8620e8c3c50fdfea4ec0c39678b476) | The Sandboxed PlayerInfo Subsystem for the player.
`protected TWeakObjectPtr< `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` > `[`PlayerInfoCache`](#classURH__LocalPlayerSubsystem_1a48fa6f3ba219852b90b6eaa9bf0ec5e4) | The Player Info associated with the local player.
`protected FAuthContextPtr `[`AuthContext`](#classURH__LocalPlayerSubsystem_1a7db0fee21f61da0729bba78d7a892430) | The Local Players auth context.
`protected TOptional< FDateTime > `[`LastLoginTime`](#classURH__LocalPlayerSubsystem_1ae888b4ea2ddbba822b8182789f401ebe) | The timestamp of the last successful login.
`protected TSharedPtr< class IAnalyticsProvider > `[`AnalyticsProvider`](#classURH__LocalPlayerSubsystem_1a9ece424deff5492e8d400a01c3295514) | The Analytics Provider for the player.
`protected TOptional< FDateTime > `[`AnalyticsStartTime`](#classURH__LocalPlayerSubsystem_1a4035dec7f2a4568acd091f0058fbf0b3) | The start time of the AnalyticsProvider
`protected template<>`  <br/>`inline UClassToUse * `[`AddSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1ac096d2f4afb5e022914100fe52260a51)`(const FSoftClassPath & SubsystemClassPath)` | Adds a plugin to the Local Player Subsystem.
`protected inline virtual void `[`AddSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1aae3af807f829d7481c4622a022753287)`(`[`URH_LocalPlayerSubsystemPlugin`](SubsystemBase.md#classURH__LocalPlayerSubsystemPlugin)` * InPlugin)` | Adds a plugin to the Local Player Subsystem.
`protected template<>`  <br/>`inline UClassToUse * `[`AddSandboxedSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1a0025bd1e639bf3a4bbbae6fd57186b0f)`(const FSoftClassPath & SubsystemClassPath)` | Adds a sandboxed plugin to the Local Player Subsystem.
`protected inline virtual void `[`AddSandboxedSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1a92a9fa258ca81bc42ceb380a9703f747)`(`[`URH_SandboxedSubsystemPlugin`](SubsystemBase.md#classURH__SandboxedSubsystemPlugin)` * InPlugin)` | Adds a plugin to the Local Player Subsystem.
`protected virtual void `[`OnConfigKVsUpdated`](#classURH__LocalPlayerSubsystem_1ad7883d278b8e1b20b214396eca363f74)`(class `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * ConfigSubsystem)` | Called whenever the config subsystem KV list is updated.
`protected virtual void `[`OnUserLoggedIn`](#classURH__LocalPlayerSubsystem_1a9ef1338417d75dfc9f463538e2515d72)`(bool bSuccess)` | Called whenever the user logs in.
`protected virtual void `[`OnUserLoggedOut`](#classURH__LocalPlayerSubsystem_1a8486ce5ac38cd0baa2d1a3d8ed319fd5)`(bool bRefreshTokenExpired)` | Called whenever the user logs out explicitly.
`protected virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystem_1a8a159f043f9aaed47f06d7c6706cb6b7)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual void `[`OnUserRefreshTokenExpired`](#classURH__LocalPlayerSubsystem_1a822659671e98773c0c03a3eed95e5b56)`(FSimpleDelegate CompletionDelegate)` | Callback that occurs when the player's refresh token expires while logged in.

### Members

#### `public FRH_AutoInventoryCompleteDelegate `[`OnAutoInventorySessionCreated`](#classURH__LocalPlayerSubsystem_1a07b265e2b34b7384507856b5039833cf) <a id="classURH__LocalPlayerSubsystem_1a07b265e2b34b7384507856b5039833cf"></a>

Broadcast delegate for when intial inventory session is created, if using auto creation.

#### `public FRH_AutoInventoryCompleteDelegate `[`OnAutoEntitlementsProcessed`](#classURH__LocalPlayerSubsystem_1af051878305aecdec83c71ea862099d47) <a id="classURH__LocalPlayerSubsystem_1af051878305aecdec83c71ea862099d47"></a>

Broadcast delegate for when intial platform entitlements are processed, if using auto processing.

#### `public virtual bool `[`ShouldCreateSubsystem`](#classURH__LocalPlayerSubsystem_1a9d3cb31fe04f48ca91f2ff8dcb7dabda)`(UObject * Outer) const` <a id="classURH__LocalPlayerSubsystem_1a9d3cb31fe04f48ca91f2ff8dcb7dabda"></a>

Whether to create the subsystem (defaults to not creating if there are any derived subsystems).

#### `public virtual void `[`Initialize`](#classURH__LocalPlayerSubsystem_1a7b1163663e929dd2cad4688fb11fac02)`(FSubsystemCollectionBase & Collection)` <a id="classURH__LocalPlayerSubsystem_1a7b1163663e929dd2cad4688fb11fac02"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__LocalPlayerSubsystem_1adfc8060ee2b1815d85009c5d9c61fb10)`()` <a id="classURH__LocalPlayerSubsystem_1adfc8060ee2b1815d85009c5d9c61fb10"></a>

Safely tears down the subsystem.

#### `public virtual bool `[`IsLoggedIn`](#classURH__LocalPlayerSubsystem_1aa87f996f6200f58e7bb5b1e76af85f78)`() const` <a id="classURH__LocalPlayerSubsystem_1aa87f996f6200f58e7bb5b1e76af85f78"></a>

Gets if the player is currently logged in.

#### `public virtual FGuid `[`GetPlayerUuid`](#classURH__LocalPlayerSubsystem_1a639688a2978cc465ad6576e100daffe4)`() const` <a id="classURH__LocalPlayerSubsystem_1a639688a2978cc465ad6576e100daffe4"></a>

Gets the player's unique player id.

#### `public virtual TOptional< ERHAPI_Platform > `[`GetLoggedInPlatform`](#classURH__LocalPlayerSubsystem_1a048bf1e9a716b9bd7c2774a4646a3780)`() const` <a id="classURH__LocalPlayerSubsystem_1a048bf1e9a716b9bd7c2774a4646a3780"></a>

Gets the platform type for the player if logged in.

#### `public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__LocalPlayerSubsystem_1a4c35e09b4d1d7b9c2b1994ba26519509)`() const` <a id="classURH__LocalPlayerSubsystem_1a4c35e09b4d1d7b9c2b1994ba26519509"></a>

Gets the player's OSS unique id.

#### `public virtual int32 `[`GetPlatformUserId`](#classURH__LocalPlayerSubsystem_1a67201c7ebaba8d4b7f72bb55064f518c)`() const` <a id="classURH__LocalPlayerSubsystem_1a67201c7ebaba8d4b7f72bb55064f518c"></a>

Gets the player's platform id.

#### `public inline virtual TSharedPtr< class IAnalyticsProvider > `[`GetAnalyticsProvider`](#classURH__LocalPlayerSubsystem_1a850df889785b3344b6779e5daacda4a3)`() const` <a id="classURH__LocalPlayerSubsystem_1a850df889785b3344b6779e5daacda4a3"></a>

Gets the player's analytics provider.

#### `public virtual TSharedPtr< class IAnalyticsProvider > `[`CreateAnalyticsProvider`](#classURH__LocalPlayerSubsystem_1a3b8d761019f3cecca9472b609b6b6868)`()` <a id="classURH__LocalPlayerSubsystem_1a3b8d761019f3cecca9472b609b6b6868"></a>

Gets the player's analytics provider.

#### `public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetLocalPlayerInfo`](#classURH__LocalPlayerSubsystem_1adb7c2e606b0220fbabdaf9f2cfe619b6)`() const` <a id="classURH__LocalPlayerSubsystem_1adb7c2e606b0220fbabdaf9f2cfe619b6"></a>

Gets the player's player info.

#### `public virtual `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`GetPlayerPlatformId`](#classURH__LocalPlayerSubsystem_1a7a9c27b2728b01d3c9cf095af2533cd0)`() const` <a id="classURH__LocalPlayerSubsystem_1a7a9c27b2728b01d3c9cf095af2533cd0"></a>

Gets the player's platform id wrapped with platform type.

#### `public inline FORCEINLINE FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystem_1aac6f2bd9809734eae11efd9cdfbb0738)`() const` <a id="classURH__LocalPlayerSubsystem_1aac6f2bd9809734eae11efd9cdfbb0738"></a>

Gets the player's auth context.

#### `public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__LocalPlayerSubsystem_1af28d3992d7757a476ae70f4fbe9c8d9e)`(const FName & SubsystemName) const` <a id="classURH__LocalPlayerSubsystem_1af28d3992d7757a476ae70f4fbe9c8d9e"></a>

Get a specific OSS by name for this local player's world. In editor, this allows each world/game instance to have a different OSS.

#### `public inline FORCEINLINE `[`URH_LocalPlayerLoginSubsystem`](LocalPlayer.md#classURH__LocalPlayerLoginSubsystem)` * `[`GetLoginSubsystem`](#classURH__LocalPlayerSubsystem_1a83dd1b24ed384f121ac62c3454b287c2)`() const` <a id="classURH__LocalPlayerSubsystem_1a83dd1b24ed384f121ac62c3454b287c2"></a>

Gets the player's login subsystem.

#### `public inline FORCEINLINE `[`URH_AdSubsystem`](Ads.md#classURH__AdSubsystem)` * `[`GetAdSubsystem`](#classURH__LocalPlayerSubsystem_1a657893fe2d39f56b63f0240e93d37a35)`() const` <a id="classURH__LocalPlayerSubsystem_1a657893fe2d39f56b63f0240e93d37a35"></a>

Gets the player's ad subsystem.

#### `public inline FORCEINLINE `[`URH_FriendSubsystem`](Friends.md#classURH__FriendSubsystem)` * `[`GetFriendSubsystem`](#classURH__LocalPlayerSubsystem_1aa96edae19ba92eb31d043e2e0b3c1604)`() const` <a id="classURH__LocalPlayerSubsystem_1aa96edae19ba92eb31d043e2e0b3c1604"></a>

Gets the player's friend subsystem.

#### `public inline FORCEINLINE `[`URH_LocalPlayerSessionSubsystem`](LocalPlayer.md#classURH__LocalPlayerSessionSubsystem)` * `[`GetSessionSubsystem`](#classURH__LocalPlayerSubsystem_1a5a2555ca69234e162e92f3b2fc7fdfe7)`() const` <a id="classURH__LocalPlayerSubsystem_1a5a2555ca69234e162e92f3b2fc7fdfe7"></a>

Gets the player's session subsystem.

#### `public inline FORCEINLINE `[`URH_LocalPlayerPresenceSubsystem`](LocalPlayer.md#classURH__LocalPlayerPresenceSubsystem)` * `[`GetPresenceSubsystem`](#classURH__LocalPlayerSubsystem_1af9a36cfa5adbdd12513005035cfc44a4)`() const` <a id="classURH__LocalPlayerSubsystem_1af9a36cfa5adbdd12513005035cfc44a4"></a>

Gets the player's presence subsystem.

#### `public inline FORCEINLINE `[`URH_PurgeSubsystem`](Purge.md#classURH__PurgeSubsystem)` * `[`GetPurgeSubsystem`](#classURH__LocalPlayerSubsystem_1a21e89c2ffedfa9051e41fac1d1e6dc00)`() const` <a id="classURH__LocalPlayerSubsystem_1a21e89c2ffedfa9051e41fac1d1e6dc00"></a>

Gets the player's purge subsystem.

#### `public inline FORCEINLINE `[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` * `[`GetEntitlementSubsystem`](#classURH__LocalPlayerSubsystem_1a52dfe0c4156ebab526c61f92237ed182)`() const` <a id="classURH__LocalPlayerSubsystem_1a52dfe0c4156ebab526c61f92237ed182"></a>

Gets the player's entitlement subsystem.

#### `public virtual `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`GetPlayerNotifications`](#classURH__LocalPlayerSubsystem_1aead7865f1737ed5b1b50fb9c1769c7b9)`() const` <a id="classURH__LocalPlayerSubsystem_1aead7865f1737ed5b1b50fb9c1769c7b9"></a>

Gets the player's notification subsystem.

#### `public virtual `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__LocalPlayerSubsystem_1a90c483b9675aa38167ef92c7540c02d3)`() const` <a id="classURH__LocalPlayerSubsystem_1a90c483b9675aa38167ef92c7540c02d3"></a>

Gets the player's player info.

#### `public virtual void `[`CustomEndpoint`](#classURH__LocalPlayerSubsystem_1a4b55e59b8d1f8dddbd2d91a8845e12dd)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)` <a id="classURH__LocalPlayerSubsystem_1a4b55e59b8d1f8dddbd2d91a8845e12dd"></a>

Custom Endpoint wrapper (for custom endpoints that require authentication)

#### Parameters
* `[FRH_CustomEndpointRequestWrapper](Common.md#structFRH__CustomEndpointRequestWrapper)` Wrapper struct containing call information 

* `Delegate` The delegate to call when the call is complete (contains raw response)

#### `public virtual void `[`CustomEndpoint`](#classURH__LocalPlayerSubsystem_1ad82004afa264f46a22441f80c6d27554)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDelegateBlock & Delegate)` <a id="classURH__LocalPlayerSubsystem_1ad82004afa264f46a22441f80c6d27554"></a>

Custom Endpoint wrapper (for custom endpoints that require authentication)

#### Parameters
* `[FRH_CustomEndpointRequestWrapper](Common.md#structFRH__CustomEndpointRequestWrapper)` Wrapper struct containing call information 

* `Delegate` The delegate to call when the call is complete

#### `protected TArray< `[`URH_LocalPlayerSubsystemPlugin`](SubsystemBase.md#classURH__LocalPlayerSubsystemPlugin)` * > `[`SubsystemPlugins`](#classURH__LocalPlayerSubsystem_1aa1e0f18bd03b9082f4dfa3b87e294111) <a id="classURH__LocalPlayerSubsystem_1aa1e0f18bd03b9082f4dfa3b87e294111"></a>

Array of plugins for the Local Player Subsystem.

#### `protected TArray< `[`URH_SandboxedSubsystemPlugin`](SubsystemBase.md#classURH__SandboxedSubsystemPlugin)` * > `[`SandboxedSubsystemPlugins`](#classURH__LocalPlayerSubsystem_1a17f7feb3081a6a9ddd60220806af4101) <a id="classURH__LocalPlayerSubsystem_1a17f7feb3081a6a9ddd60220806af4101"></a>

Array of sandboxed plugins for the Local Player Subsystem.

#### `protected `[`URH_LocalPlayerLoginSubsystem`](LocalPlayer.md#classURH__LocalPlayerLoginSubsystem)` * `[`LoginSubsystem`](#classURH__LocalPlayerSubsystem_1a4c91f163e0d3ce122ff5945e94fbfd42) <a id="classURH__LocalPlayerSubsystem_1a4c91f163e0d3ce122ff5945e94fbfd42"></a>

The Login Subsystem for the player.

#### `protected `[`URH_AdSubsystem`](Ads.md#classURH__AdSubsystem)` * `[`AdSubsystem`](#classURH__LocalPlayerSubsystem_1a7828f1874dcd91a147856a6919086273) <a id="classURH__LocalPlayerSubsystem_1a7828f1874dcd91a147856a6919086273"></a>

The Ad Subsystem for the player.

#### `protected `[`URH_FriendSubsystem`](Friends.md#classURH__FriendSubsystem)` * `[`FriendSubsystem`](#classURH__LocalPlayerSubsystem_1a71f593fae588e9f7afa7733eae6aafac) <a id="classURH__LocalPlayerSubsystem_1a71f593fae588e9f7afa7733eae6aafac"></a>

The Friend Subsystem for the player.

#### `protected `[`URH_LocalPlayerSessionSubsystem`](LocalPlayer.md#classURH__LocalPlayerSessionSubsystem)` * `[`SessionSubsystem`](#classURH__LocalPlayerSubsystem_1a86df20cf68d8618951ae19a98c3fb5fd) <a id="classURH__LocalPlayerSubsystem_1a86df20cf68d8618951ae19a98c3fb5fd"></a>

The Session Subsystem for the player.

#### `protected `[`URH_LocalPlayerPresenceSubsystem`](LocalPlayer.md#classURH__LocalPlayerPresenceSubsystem)` * `[`PresenceSubsystem`](#classURH__LocalPlayerSubsystem_1a1bc3544d5e09905d1a20b7d83af5087e) <a id="classURH__LocalPlayerSubsystem_1a1bc3544d5e09905d1a20b7d83af5087e"></a>

The Presence Subsystem for the player.

#### `protected `[`URH_PurgeSubsystem`](Purge.md#classURH__PurgeSubsystem)` * `[`PurgeSubsystem`](#classURH__LocalPlayerSubsystem_1a7e1beadec9fe8b854a37e4518b77c9cc) <a id="classURH__LocalPlayerSubsystem_1a7e1beadec9fe8b854a37e4518b77c9cc"></a>

The Purge Subsystem for the player.

#### `protected `[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` * `[`EntitlementSubsystem`](#classURH__LocalPlayerSubsystem_1abbb158bc2cd5dd965ba03363d64723ba) <a id="classURH__LocalPlayerSubsystem_1abbb158bc2cd5dd965ba03363d64723ba"></a>

The Entitlement Subsystem for the player.

#### `protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`SandboxedPlayerInfoSubsystem`](#classURH__LocalPlayerSubsystem_1a2f8620e8c3c50fdfea4ec0c39678b476) <a id="classURH__LocalPlayerSubsystem_1a2f8620e8c3c50fdfea4ec0c39678b476"></a>

The Sandboxed PlayerInfo Subsystem for the player.

#### `protected TWeakObjectPtr< `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` > `[`PlayerInfoCache`](#classURH__LocalPlayerSubsystem_1a48fa6f3ba219852b90b6eaa9bf0ec5e4) <a id="classURH__LocalPlayerSubsystem_1a48fa6f3ba219852b90b6eaa9bf0ec5e4"></a>

The Player Info associated with the local player.

#### `protected FAuthContextPtr `[`AuthContext`](#classURH__LocalPlayerSubsystem_1a7db0fee21f61da0729bba78d7a892430) <a id="classURH__LocalPlayerSubsystem_1a7db0fee21f61da0729bba78d7a892430"></a>

The Local Players auth context.

#### `protected TOptional< FDateTime > `[`LastLoginTime`](#classURH__LocalPlayerSubsystem_1ae888b4ea2ddbba822b8182789f401ebe) <a id="classURH__LocalPlayerSubsystem_1ae888b4ea2ddbba822b8182789f401ebe"></a>

The timestamp of the last successful login.

#### `protected TSharedPtr< class IAnalyticsProvider > `[`AnalyticsProvider`](#classURH__LocalPlayerSubsystem_1a9ece424deff5492e8d400a01c3295514) <a id="classURH__LocalPlayerSubsystem_1a9ece424deff5492e8d400a01c3295514"></a>

The Analytics Provider for the player.

#### `protected TOptional< FDateTime > `[`AnalyticsStartTime`](#classURH__LocalPlayerSubsystem_1a4035dec7f2a4568acd091f0058fbf0b3) <a id="classURH__LocalPlayerSubsystem_1a4035dec7f2a4568acd091f0058fbf0b3"></a>

The start time of the AnalyticsProvider

#### `protected template<>`  <br/>`inline UClassToUse * `[`AddSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1ac096d2f4afb5e022914100fe52260a51)`(const FSoftClassPath & SubsystemClassPath)` <a id="classURH__LocalPlayerSubsystem_1ac096d2f4afb5e022914100fe52260a51"></a>

Adds a plugin to the Local Player Subsystem.

#### Parameters
* `SubsystemClassPath` The class path of the plugin to add. 

#### Returns
The plugin that was added.

#### `protected inline virtual void `[`AddSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1aae3af807f829d7481c4622a022753287)`(`[`URH_LocalPlayerSubsystemPlugin`](SubsystemBase.md#classURH__LocalPlayerSubsystemPlugin)` * InPlugin)` <a id="classURH__LocalPlayerSubsystem_1aae3af807f829d7481c4622a022753287"></a>

Adds a plugin to the Local Player Subsystem.

#### Parameters
* `SubsystemClassPath` The class path of the plugin to add. 

#### Returns
The plugin that was added.

#### `protected template<>`  <br/>`inline UClassToUse * `[`AddSandboxedSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1a0025bd1e639bf3a4bbbae6fd57186b0f)`(const FSoftClassPath & SubsystemClassPath)` <a id="classURH__LocalPlayerSubsystem_1a0025bd1e639bf3a4bbbae6fd57186b0f"></a>

Adds a sandboxed plugin to the Local Player Subsystem.

#### Parameters
* `SubsystemClassPath` The class path of the plugin to add. 

#### Returns
The plugin that was added.

#### `protected inline virtual void `[`AddSandboxedSubsystemPlugin`](#classURH__LocalPlayerSubsystem_1a92a9fa258ca81bc42ceb380a9703f747)`(`[`URH_SandboxedSubsystemPlugin`](SubsystemBase.md#classURH__SandboxedSubsystemPlugin)` * InPlugin)` <a id="classURH__LocalPlayerSubsystem_1a92a9fa258ca81bc42ceb380a9703f747"></a>

Adds a plugin to the Local Player Subsystem.

#### Parameters
* `SubsystemClassPath` The class path of the plugin to add. 

#### Returns
The plugin that was added.

#### `protected virtual void `[`OnConfigKVsUpdated`](#classURH__LocalPlayerSubsystem_1ad7883d278b8e1b20b214396eca363f74)`(class `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * ConfigSubsystem)` <a id="classURH__LocalPlayerSubsystem_1ad7883d278b8e1b20b214396eca363f74"></a>

Called whenever the config subsystem KV list is updated.

#### Parameters
* `ConfigSubsystem` The config subsystem that was updated.

#### `protected virtual void `[`OnUserLoggedIn`](#classURH__LocalPlayerSubsystem_1a9ef1338417d75dfc9f463538e2515d72)`(bool bSuccess)` <a id="classURH__LocalPlayerSubsystem_1a9ef1338417d75dfc9f463538e2515d72"></a>

Called whenever the user logs in.

#### Parameters
* `bSuccess` True if the login was successful, false otherwise.

#### `protected virtual void `[`OnUserLoggedOut`](#classURH__LocalPlayerSubsystem_1a8486ce5ac38cd0baa2d1a3d8ed319fd5)`(bool bRefreshTokenExpired)` <a id="classURH__LocalPlayerSubsystem_1a8486ce5ac38cd0baa2d1a3d8ed319fd5"></a>

Called whenever the user logs out explicitly.

#### `protected virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystem_1a8a159f043f9aaed47f06d7c6706cb6b7)`()` <a id="classURH__LocalPlayerSubsystem_1a8a159f043f9aaed47f06d7c6706cb6b7"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

#### `protected virtual void `[`OnUserRefreshTokenExpired`](#classURH__LocalPlayerSubsystem_1a822659671e98773c0c03a3eed95e5b56)`(FSimpleDelegate CompletionDelegate)` <a id="classURH__LocalPlayerSubsystem_1a822659671e98773c0c03a3eed95e5b56"></a>

Callback that occurs when the player's refresh token expires while logged in.

## struct `FRH_LoginResult` <a id="structFRH__LoginResult"></a>

Struct for the login results.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`ERHAPI_LoginResult`](undefined.md#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)` `[`Result`](#structFRH__LoginResult_1a9080e046d94049f24ff36862a570ad08) | Login Result.
`public `[`ERHAPI_LocalPlayerLoginOSS`](undefined.md#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)` `[`OSSType`](#structFRH__LoginResult_1a8639eb11fe9d1f489df4247f94480ad6) | Login OSS Type.
`public FString `[`OSSErrorMessage`](#structFRH__LoginResult_1a415022baa86bf765be7ae7c8ce50fa8f) | Login Error Message.
`public FString `[`RallyHereErrorCode`](#structFRH__LoginResult_1ac43de6491cea17e487ef4fa572f42dfa) | RallyHere API Auth Error Code.
`public TSharedPtr< const FUniqueNetId > `[`OSSUniqueId`](#structFRH__LoginResult_1a4961ad93a8bf87858fcf3a0b7d41ba26) | Unique Net Id for the player.
`public TSharedPtr< const FUniqueNetId > `[`NicknameOSSUniqueId`](#structFRH__LoginResult_1a0badf8d64f580c391a152642ed9b2ff8) | Unique Net ID for the player when using Nickname Login.
`public uint32 `[`PrivilegeResults`](#structFRH__LoginResult_1a0348a5f8c7982ea7a648276df7096998) | Privilege Result for the login.
`public bool `[`bMustAcceptEULA`](#structFRH__LoginResult_1a3b1a5425c4ad3df85754d7828afa429f) | If true, the user needs to accept the EULA.
`public bool `[`bMustAcceptTOS`](#structFRH__LoginResult_1a662f76700fe5dd56560bb7df514b0b6a) | If true, the user needs to accept the TOS.
`public bool `[`bMustAcceptPP`](#structFRH__LoginResult_1a0f6674180918672b79770379a8af937c) | If true, the user needs to accept the PP.
`public inline  `[`FRH_LoginResult`](#structFRH__LoginResult_1ae2afa140ce5f64ea98bddda688ebc1b9)`()` | Default constructor.

### Members

#### `public `[`ERHAPI_LoginResult`](undefined.md#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)` `[`Result`](#structFRH__LoginResult_1a9080e046d94049f24ff36862a570ad08) <a id="structFRH__LoginResult_1a9080e046d94049f24ff36862a570ad08"></a>

Login Result.

#### `public `[`ERHAPI_LocalPlayerLoginOSS`](undefined.md#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)` `[`OSSType`](#structFRH__LoginResult_1a8639eb11fe9d1f489df4247f94480ad6) <a id="structFRH__LoginResult_1a8639eb11fe9d1f489df4247f94480ad6"></a>

Login OSS Type.

#### `public FString `[`OSSErrorMessage`](#structFRH__LoginResult_1a415022baa86bf765be7ae7c8ce50fa8f) <a id="structFRH__LoginResult_1a415022baa86bf765be7ae7c8ce50fa8f"></a>

Login Error Message.

#### `public FString `[`RallyHereErrorCode`](#structFRH__LoginResult_1ac43de6491cea17e487ef4fa572f42dfa) <a id="structFRH__LoginResult_1ac43de6491cea17e487ef4fa572f42dfa"></a>

RallyHere API Auth Error Code.

#### `public TSharedPtr< const FUniqueNetId > `[`OSSUniqueId`](#structFRH__LoginResult_1a4961ad93a8bf87858fcf3a0b7d41ba26) <a id="structFRH__LoginResult_1a4961ad93a8bf87858fcf3a0b7d41ba26"></a>

Unique Net Id for the player.

#### `public TSharedPtr< const FUniqueNetId > `[`NicknameOSSUniqueId`](#structFRH__LoginResult_1a0badf8d64f580c391a152642ed9b2ff8) <a id="structFRH__LoginResult_1a0badf8d64f580c391a152642ed9b2ff8"></a>

Unique Net ID for the player when using Nickname Login.

#### `public uint32 `[`PrivilegeResults`](#structFRH__LoginResult_1a0348a5f8c7982ea7a648276df7096998) <a id="structFRH__LoginResult_1a0348a5f8c7982ea7a648276df7096998"></a>

Privilege Result for the login.

#### `public bool `[`bMustAcceptEULA`](#structFRH__LoginResult_1a3b1a5425c4ad3df85754d7828afa429f) <a id="structFRH__LoginResult_1a3b1a5425c4ad3df85754d7828afa429f"></a>

If true, the user needs to accept the EULA.

#### `public bool `[`bMustAcceptTOS`](#structFRH__LoginResult_1a662f76700fe5dd56560bb7df514b0b6a) <a id="structFRH__LoginResult_1a662f76700fe5dd56560bb7df514b0b6a"></a>

If true, the user needs to accept the TOS.

#### `public bool `[`bMustAcceptPP`](#structFRH__LoginResult_1a0f6674180918672b79770379a8af937c) <a id="structFRH__LoginResult_1a0f6674180918672b79770379a8af937c"></a>

If true, the user needs to accept the PP.

#### `public inline  `[`FRH_LoginResult`](#structFRH__LoginResult_1ae2afa140ce5f64ea98bddda688ebc1b9)`()` <a id="structFRH__LoginResult_1ae2afa140ce5f64ea98bddda688ebc1b9"></a>

Default constructor.

