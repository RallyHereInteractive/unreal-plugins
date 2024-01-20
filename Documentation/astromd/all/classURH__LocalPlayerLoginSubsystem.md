---
title: URH_LocalPlayerLoginSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Login Subsystem for the local player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)||
|typedef|[TLogout](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a8eb4169e49a752b5334dbfb87e7d5c93)|Type Define for logout calls.|
|typedef|[PendingLoginUniqueIdRef](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ab9ccf03ecaaebacc354d82d0fe3e798c)||
|typedef|[OSSLoginCompleteFn](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1adeae3c78db5b9cd58ec28b52ed7a891e)||
|typedef|[OSSPrivilegeResultsFn](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a3f4a32937b09376ba29f38f8a756ee14)||
|FRH_OnLoginCompleteMulticast|[OnLoginComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a843a3800206848baa22ddf46eb997e04)|Multicast delegate that gets broadcasted on login complete.|
|FRH_OnLoginCompleteDynamicMulticast|[BLUEPRINT_OnLoginComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a75fecc81fac520458fa441c2d06d09d2)|Multicast delegate that gets broadcasted on login complete.|
|FRH_GeneralSettingChangedMulticast|[OnCrossplaySettingChanged](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ab039522171ab500f9c26d0e224bde938)|Multicast delegate that gets broadcasted when a player's crossplay setting is changed.|
|FRH_GeneralSettingChangedDynamicMulticast|[BLUEPRINT_OnCrossplaySettingChanged](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ab0c4b2144b8fdc1abb63450117f16674)|Multicast delegate that gets broadcasted when a player's crossplay setting is changed.|
|FName|[LoginOSSName](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a01d07f25f0c0000420aeaa3a9a124a85)|Online Subsystem to use for login. If not provided, will use the default OSS.|
|FName|[NicknameOSSName](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a1328f2314ce4640fa291c3ea6722c286)|Online Subsystem to use for getting the user's display name for Rally Here. If not provided, will use the Login OSS.|
|bool|[bLoginAllowStoredRefreshToken](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a37770d7b5203f211cdbb6aa79147393a)|Is the login process allowed to load/store a refresh token for future login attempts?|
|bool|[bLoginDuringPartialInstall](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a48d9066d47e46f02ce854b99adf0c8d2)|Does the game allow logins before full installation has completed? (Only supported with HIREZ ENGINE changes)|
|bool|[bLoginOSSRequireLoginUIFirst](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a2313c3e5a982d6bb4d8d27636b9ad384)|Should the OSS require show the login UI before the login attempt?|
|bool|[bNicknameOSSRequireLoginUIFirst](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aa48fefd9f000fde0f8020800d3a72863)|Should the OSS require show the login UI before the login attempt?|
|bool|[bLoginOSSRequireOnlinePlayToLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a75a3157fecc25b6b82d90aab3ba43041)|Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.|
|bool|[bNicknameOSSRequireOnlinePlayToLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a8b294ac15cd5f2d1c75b8c092a593905)|Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.|
|bool|[bLoginOSSPromptAccountUpgradeIfInsufficient](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aa82d05952f1e26b805d9c6ae9b2addd7)|Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)|
|bool|[bNicknameOSSPromptAccountUpgradeIfInsufficient](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a02788d0e33ad37faecda684ac3058862)|Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)|
|bool|[bLoginOSSRequireValidUserIdForFailedLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a61dd1b6a2b1d6ea234d3ee722ef45e8e)|Should the OSS require a valid user id, even for failed logins.|
|bool|[bNicknameOSSRequireValidUserIdForFailedLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aea1502da749e3a887d5e854302f9b11f)|Should the OSS require a valid user id, even for failed logins.|
|bool|[bLogoutAndRetryLoginIfRefreshLoginFailed](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a1f638ff5b5f352dfffdb315e30478d3c)|Should we logout of the OSS and retry the login (that included a refresh token) failed?|
|bool|[bLoginOSSUseIDTokenAsPortalParentAccessToken](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ae7c66f0f89b289dff65c385c23f0590d)|Should we use the ID Token for populating the PARENT Portal Access Token.|
|bool|[bLoginOSSUseIDTokenAsPortalAccessToken](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a2ddbbfbcad16d8ae949cfcbed714eef1)|Should we use the ID Token for populating the Portal Access Token.|
|bool|[bResolveRallyHereBaseURLAfterOSSLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a92a9774beae64448f7c0895a7e6eacff)|Should an OSS Login trigger a Base URL Resolve on the URH_Integration? This is necessary for some OSSes (e.g. Switch/PS4) that don't have environment information until after a login is attempted.|
|FString|[SavedCredentialPrefix](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a5ff0051c770983ee18208136805b9754)|Prefix applied to the saved credentials on platforms that support storing the refresh token.|
|TArray< FString >|[IgnoreSavedCredentialsCommandLineKeys](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a807481151c1204a711576e7372534dc1)|Configurations to skip saved credentials.|
|FDelegateHandle|[OnOSSLoginCompleteDelegateHandle](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a646e2be986b89238b1f25a9de4578e96)|Delegate to listen for OSS login completion.|
|bool|[bCrossplayEnabled](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a7c85f34c2500e512c00bb4d424948069)|Stores if crossplay is enabled.|
|bool|[bCommunicationEnabled](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a80a9112506cf7920ab1945062b2eb7ca)|Stores if communication is enabled.|
|void|[Initialize](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a938bd41c5c5fa6b5eacbeb43d0758a63)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a363bdf9386b7854ed44a03cfe6faea18)()|Safely tears down the subsystem.|
|void|[SubmitAutoLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aec27fd534d794470e4eb893de8d722c4)(bool bAcceptEULA, bool bAcceptTOS, bool bAcceptPP, const FRH_OnLoginComplete & OnLoginCompleteDelegate)|Begins a complete multi-phased login to the OnlineSubsystem with the credentials provided on the command line, checking if the user has appropriate permissions, and logging into RallyHere.|
|void|[SubmitLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a8feda49ddf6a5f48448d4f989eca3d57)(const FOnlineAccountCredentials & Credentials, FString CredentialRefreshToken, bool bAcceptEULA, bool bAcceptTOS, bool bAcceptPP, FRH_OnLoginComplete OnLoginCompleteDelegate)|Begins a complete multi-phased login to the OnlineSubsystem with the provided credentials, checking if the user has appropriate permissions, and logging into RallyHere.|
|void|[Logout](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ae3394f883c697e57a705c23d8b0be23a)()|Requests a logout on the server clearing the players auth credentials.|
|bool|[ShowLoginProfileSelectionUI](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a6b569dc65fc1a0a0b6bb9f03a5c33ca9)(bool bShowOnlineOnly, const FRH_OnProfileSelectionUIClosed & OnClosed, [ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) OSSType)|Show an OSS-specific profile selection UI to the user. This is for Xbox and other platforms that support profile swapping. A valid profile is required to login on those platforms.|
|bool|[ShouldUseSavedCredentials](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a508f8e109c3ec8be8a8b3fc2cb4ded58)()|Are saved credentials allowed for auto-login?|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aa90dc3aaf0dd07ac57aab97b3d300e8d)([ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) OSSType)|Get the fully resolved OSS by type.|
|IOnlineSubsystem *|[GetLoginOSS](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a9e877c23c0e17ff59e45c9690b319da0)()|Get the fully resolved OSS to use for Login.|
|IOnlineSubsystem *|[GetNicknameOSS](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aaa99f329af713816b4c175c0f7671e49)()|Get the fully resolved OSS to use for getting a player's display name for login. This triggers a second OSS login.|
|bool|[IsCrossplayEnabled](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a311a51ee03f291f4c236f1983e0b3f7c)()|Gets if crossplay is enabled.|
|bool|[IsCommunicationEnabled](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a1412124dc14c386e02ce52bbcb2671c0)()|Gets if cvommunication is enabled.|
|void|[PostResults](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aa8588e2a9f530a54818aeb56fd091e7d)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & Res)|Posts the results from a login request.|
|void|[DoShowLoginOSSLoginUI](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ac38e03f331309d47d734f788930ed3f4)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Prompts the online subsystem to show login UI.|
|void|[DoShowNicknameOSSLoginUI](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a8c668ea60d6d684d3f66cf96ac5a6914)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Prompts the online subsystem to show the choose nickname login UI.|
|void|[NicknameOSSLoginUIClosed](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a3a8c0c7cb777ae735eaf5816b5c1442c)(TSharedPtr< const FUniqueNetId > UniqueId, const FOnlineError & Error, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Callback from the user closing the nickname selection on the online subsystem.|
|void|[LoginOSSLoginUIClosed](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a3ed944e354b67a3253fc3b266d2d74f3)(TSharedPtr< const FUniqueNetId > UniqueId, const FOnlineError & Error, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Callback from the user closing the login UI of the online subsystem.|
|void|[DoLoginOSSLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a1348a27ffee35644cd6b1ffaaa992ff0)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Starts the online subsystem login.|
|void|[DoNicknameOSSLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aaec0f125f3a1b048f96dd9f0b15c8378)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Starts the online subsystem nickname login.|
|void|[DoOSSLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a4a4d560752f5f6d1eee297d1b0d533a4)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, IOnlineSubsystem * OSS, OSSLoginCompleteFn OnComplete)|Starts the online subsystem login.|
|void|[OSSLoginComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a09d25f9ea9975061d1c66c113bfb6339)(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Handler for OSS Login Completion.|
|void|[OSSNicknameLoginComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a37bae042ff553fd98f3770c129a45949)(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Handler for OSS Nickname Login Completion.|
|bool|[OnOSSLoginComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1af158781b3e66c68f16de41e6149e6b2e)(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, IOnlineSubsystem * OSS, PendingLoginUniqueIdRef UniqueIdPtr, bool bOSSRequireValidUserIdForFailedLogin)|Handler for OSS Login Completion.|
|void|[ExternalUI_ShowLoginUIClosed](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a333418b1fa9eb68991567bac31129339)(TSharedPtr< const FUniqueNetId > UniqueId, const int ControllerIndex, const FOnlineError & Error, FRH_OnProfileSelectionUIClosed OnClosed)|Callback for when the OSS login UI is closed.|
|void|[DoLoginOSSPrivilegeCheck](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a7b65ebe24a9e0bf8d0a1cf5813c28c96)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Checks users Privileges for OSS Login.|
|void|[DoNicknameOSSPrivilegeCheck](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a59711795bf74e953d9efab8f66eecc03)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Checks users Privileges for OSS Nickname Login.|
|void|[DoOSSPrivilegeCheck](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a529bf4977cd385ddc75ca33b711ef914)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, IOnlineSubsystem * OSS, PendingLoginUniqueIdRef UniqueIdPtr, OSSPrivilegeResultsFn OnPrivilegeResults)|Checks users Privileges for OSS Login.|
|void|[OnLoginOSSPrivilegeResults](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a2381665262c193523ec0bfae00b073af)(const FUniqueNetId & UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Handler for online subsystem callback for OSS Privilege check.|
|void|[OnNicknameOSSPrivilegeResults](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a650fbeb427bb5c402e36bef9c793342a)(const FUniqueNetId & UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Handler for online subsystem callback for OSS Nickname Privilege check.|
|bool|[OnOSSPrivilegeResults](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a8d1c57f00dd702f3739e5e2f18665542)(const FUniqueNetId & UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req, IOnlineSubsystem * OSS, bool bPromptForAccountUpgradeIfInsufficient)|Handler for online subsystem callback for OSS Privilege check.|
|void|[RetrieveOSSAuthToken](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1abe4cba66bc2a21657b730e9c456a8297)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)|Start the retrieval of the OSS Auth Token.|
|void|[RetrieveOSSAuthTokenComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a27fbe50ee06ccb5822c1edbf773d81a8)(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken & AuthToken, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Start the login to Rally Here.|
|void|[DoRallyHereLogin](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1ac566c5385eac7117a5562ba0010cf4fc)([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, const FExternalAuthToken & AuthToken)|Start the login to Rally Here.|
|void|[RallyHereLoginComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a7b877ea539a11d526e488f43a1044cd4)(const RallyHereAPI::FResponse_Login & Resp, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)|Handle the response from the login to Rally Here.|
|FString|[GetSavedCredentialEnvironment](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a159afb852506a24c40a44f315debfbc6)(FName OSSName)|Gets the cached credentials for the given online subsystem.|
|void|[CheckCrossplayPrivilege](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a56da439941bdce891cbe97ebf75d5666)(const FUniqueNetId & UniqueId)|Checks the users OSS privileges for crossplay.|
|void|[HandleCheckCrossPlayPrivilegeComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a9695dff647ab1d5f81acbf29f38882e6)(const FUniqueNetId & UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults)|Handles the response of the OSS crossplay privilege check.|
|void|[CheckCommunicationPrivilege](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1af758cbf06c5f4a9a5ab87367cb69d60a)(const FUniqueNetId & UniqueId)|Checks the users OSS privileges for communicataion.|
|void|[HandleCheckCommunicationPrivilegeComplete](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a941c8ad7a2ca3204ce9ac44bad2b7986)(const FUniqueNetId & UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults)|Handles the response of the OSS communicaation privilege check.|
|void|[HandleAppReactivated](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1aa8c118625fd0a61d8ee5283d539d6d00)()|Handles the app being restored from being suspended.|
|void|[HandleAppReactivatedGameThread](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem_1a60779ab08578f6978df960d7d3877782)()|Handles the app game thread being restored from being suspended.|
## Public Types



### `TLogout` <a id="classURH__LocalPlayerLoginSubsystem_1a8eb4169e49a752b5334dbfb87e7d5c93"></a>

typedef RallyHereAPI::Traits_Logout TLogoutType Define for logout calls.





## Protected Types



### `PendingLoginUniqueIdRef` <a id="classURH__LocalPlayerLoginSubsystem_1ab9ccf03ecaaebacc354d82d0fe3e798c"></a>

`using URH_LocalPlayerLoginSubsystem::PendingLoginUniqueIdRef =  TSharedPtr<const FUniqueNetId> FRH_PendingLoginRequest::*`




### `OSSLoginCompleteFn` <a id="classURH__LocalPlayerLoginSubsystem_1adeae3c78db5b9cd58ec28b52ed7a891e"></a>

`using URH_LocalPlayerLoginSubsystem::OSSLoginCompleteFn =  void (URH_LocalPlayerLoginSubsystem::*)(int32 LocalUserNum, bool bSuccessful, const FUniqueNetId& UniqueId, const FString& ErrorMessage, FRH_PendingLoginRequest Req)`




### `OSSPrivilegeResultsFn` <a id="classURH__LocalPlayerLoginSubsystem_1a3f4a32937b09376ba29f38f8a756ee14"></a>

`using URH_LocalPlayerLoginSubsystem::OSSPrivilegeResultsFn =  void (URH_LocalPlayerLoginSubsystem::*)(const FUniqueNetId& UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, FRH_PendingLoginRequest Req)`





## Public Attributes



### `OnLoginComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a843a3800206848baa22ddf46eb997e04"></a>

`FRH_OnLoginCompleteMulticast URH_LocalPlayerLoginSubsystem::OnLoginComplete`

Multicast delegate that gets broadcasted on login complete.




### `BLUEPRINT_OnLoginComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a75fecc81fac520458fa441c2d06d09d2"></a>

`FRH_OnLoginCompleteDynamicMulticast URH_LocalPlayerLoginSubsystem::BLUEPRINT_OnLoginComplete`

Multicast delegate that gets broadcasted on login complete.




### `OnCrossplaySettingChanged` <a id="classURH__LocalPlayerLoginSubsystem_1ab039522171ab500f9c26d0e224bde938"></a>

`FRH_GeneralSettingChangedMulticast URH_LocalPlayerLoginSubsystem::OnCrossplaySettingChanged`

Multicast delegate that gets broadcasted when a player's crossplay setting is changed.




### `BLUEPRINT_OnCrossplaySettingChanged` <a id="classURH__LocalPlayerLoginSubsystem_1ab0c4b2144b8fdc1abb63450117f16674"></a>

`FRH_GeneralSettingChangedDynamicMulticast URH_LocalPlayerLoginSubsystem::BLUEPRINT_OnCrossplaySettingChanged`

Multicast delegate that gets broadcasted when a player's crossplay setting is changed.




### `LoginOSSName` <a id="classURH__LocalPlayerLoginSubsystem_1a01d07f25f0c0000420aeaa3a9a124a85"></a>

`FName URH_LocalPlayerLoginSubsystem::LoginOSSName`

Online Subsystem to use for login. If not provided, will use the default OSS.




### `NicknameOSSName` <a id="classURH__LocalPlayerLoginSubsystem_1a1328f2314ce4640fa291c3ea6722c286"></a>

`FName URH_LocalPlayerLoginSubsystem::NicknameOSSName`

Online Subsystem to use for getting the user's display name for Rally Here. If not provided, will use the Login OSS.




### `bLoginAllowStoredRefreshToken` <a id="classURH__LocalPlayerLoginSubsystem_1a37770d7b5203f211cdbb6aa79147393a"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginAllowStoredRefreshToken`

Is the login process allowed to load/store a refresh token for future login attempts?




### `bLoginDuringPartialInstall` <a id="classURH__LocalPlayerLoginSubsystem_1a48d9066d47e46f02ce854b99adf0c8d2"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginDuringPartialInstall`

Does the game allow logins before full installation has completed? (Only supported with HIREZ ENGINE changes)




### `bLoginOSSRequireLoginUIFirst` <a id="classURH__LocalPlayerLoginSubsystem_1a2313c3e5a982d6bb4d8d27636b9ad384"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginOSSRequireLoginUIFirst`

Should the OSS require show the login UI before the login attempt?




### `bNicknameOSSRequireLoginUIFirst` <a id="classURH__LocalPlayerLoginSubsystem_1aa48fefd9f000fde0f8020800d3a72863"></a>

`bool URH_LocalPlayerLoginSubsystem::bNicknameOSSRequireLoginUIFirst`

Should the OSS require show the login UI before the login attempt?




### `bLoginOSSRequireOnlinePlayToLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a75a3157fecc25b6b82d90aab3ba43041"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginOSSRequireOnlinePlayToLogin`

Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.




### `bNicknameOSSRequireOnlinePlayToLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a8b294ac15cd5f2d1c75b8c092a593905"></a>

`bool URH_LocalPlayerLoginSubsystem::bNicknameOSSRequireOnlinePlayToLogin`

Does the game require access to play online (meeting the OSS age and purchase requirements, like Xbox Live and PSN) before completing login.




### `bLoginOSSPromptAccountUpgradeIfInsufficient` <a id="classURH__LocalPlayerLoginSubsystem_1aa82d05952f1e26b805d9c6ae9b2addd7"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginOSSPromptAccountUpgradeIfInsufficient`

Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)




### `bNicknameOSSPromptAccountUpgradeIfInsufficient` <a id="classURH__LocalPlayerLoginSubsystem_1a02788d0e33ad37faecda684ac3058862"></a>

`bool URH_LocalPlayerLoginSubsystem::bNicknameOSSPromptAccountUpgradeIfInsufficient`

Should the OSS prompt to upgrade the user's account during login, if they failed due to invalid account type (e.g. not PS+ or Xbox Live Gold)




### `bLoginOSSRequireValidUserIdForFailedLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a61dd1b6a2b1d6ea234d3ee722ef45e8e"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginOSSRequireValidUserIdForFailedLogin`

Should the OSS require a valid user id, even for failed logins.




### `bNicknameOSSRequireValidUserIdForFailedLogin` <a id="classURH__LocalPlayerLoginSubsystem_1aea1502da749e3a887d5e854302f9b11f"></a>

`bool URH_LocalPlayerLoginSubsystem::bNicknameOSSRequireValidUserIdForFailedLogin`

Should the OSS require a valid user id, even for failed logins.




### `bLogoutAndRetryLoginIfRefreshLoginFailed` <a id="classURH__LocalPlayerLoginSubsystem_1a1f638ff5b5f352dfffdb315e30478d3c"></a>

`bool URH_LocalPlayerLoginSubsystem::bLogoutAndRetryLoginIfRefreshLoginFailed`

Should we logout of the OSS and retry the login (that included a refresh token) failed?




### `bLoginOSSUseIDTokenAsPortalParentAccessToken` <a id="classURH__LocalPlayerLoginSubsystem_1ae7c66f0f89b289dff65c385c23f0590d"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginOSSUseIDTokenAsPortalParentAccessToken`

Should we use the ID Token for populating the PARENT Portal Access Token.




### `bLoginOSSUseIDTokenAsPortalAccessToken` <a id="classURH__LocalPlayerLoginSubsystem_1a2ddbbfbcad16d8ae949cfcbed714eef1"></a>

`bool URH_LocalPlayerLoginSubsystem::bLoginOSSUseIDTokenAsPortalAccessToken`

Should we use the ID Token for populating the Portal Access Token.




### `bResolveRallyHereBaseURLAfterOSSLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a92a9774beae64448f7c0895a7e6eacff"></a>

`bool URH_LocalPlayerLoginSubsystem::bResolveRallyHereBaseURLAfterOSSLogin`

Should an OSS Login trigger a Base URL Resolve on the URH_Integration? This is necessary for some OSSes (e.g. Switch/PS4) that don't have environment information until after a login is attempted.




### `SavedCredentialPrefix` <a id="classURH__LocalPlayerLoginSubsystem_1a5ff0051c770983ee18208136805b9754"></a>

`FString URH_LocalPlayerLoginSubsystem::SavedCredentialPrefix`

Prefix applied to the saved credentials on platforms that support storing the refresh token.





## Protected Attributes



### `IgnoreSavedCredentialsCommandLineKeys` <a id="classURH__LocalPlayerLoginSubsystem_1a807481151c1204a711576e7372534dc1"></a>

`TArray<FString> URH_LocalPlayerLoginSubsystem::IgnoreSavedCredentialsCommandLineKeys`

Configurations to skip saved credentials.




### `OnOSSLoginCompleteDelegateHandle` <a id="classURH__LocalPlayerLoginSubsystem_1a646e2be986b89238b1f25a9de4578e96"></a>

`FDelegateHandle URH_LocalPlayerLoginSubsystem::OnOSSLoginCompleteDelegateHandle`

Delegate to listen for OSS login completion.




### `bCrossplayEnabled` <a id="classURH__LocalPlayerLoginSubsystem_1a7c85f34c2500e512c00bb4d424948069"></a>

`bool URH_LocalPlayerLoginSubsystem::bCrossplayEnabled`

Stores if crossplay is enabled.




### `bCommunicationEnabled` <a id="classURH__LocalPlayerLoginSubsystem_1a80a9112506cf7920ab1945062b2eb7ca"></a>

`bool URH_LocalPlayerLoginSubsystem::bCommunicationEnabled`

Stores if communication is enabled.





## Public Functions



### `Initialize` <a id="classURH__LocalPlayerLoginSubsystem_1a938bd41c5c5fa6b5eacbeb43d0758a63"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__LocalPlayerLoginSubsystem_1a363bdf9386b7854ed44a03cfe6faea18"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `SubmitAutoLogin` <a id="classURH__LocalPlayerLoginSubsystem_1aec27fd534d794470e4eb893de8d722c4"></a>

void SubmitAutoLogin(bool bAcceptEULA, bool bAcceptTOS, bool bAcceptPP, const FRH_OnLoginComplete & OnLoginCompleteDelegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bAcceptEULA|
|bool|bAcceptTOS|
|bool|bAcceptPP|
|const FRH_OnLoginComplete &|OnLoginCompleteDelegate|

#### Description

Begins a complete multi-phased login to the OnlineSubsystem with the credentials provided on the command line, checking if the user has appropriate permissions, and logging into RallyHere.




### `SubmitLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a8feda49ddf6a5f48448d4f989eca3d57"></a>

void SubmitLogin(const FOnlineAccountCredentials & Credentials, FString CredentialRefreshToken, bool bAcceptEULA, bool bAcceptTOS, bool bAcceptPP, FRH_OnLoginComplete OnLoginCompleteDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FOnlineAccountCredentials &|Credentials|
|FString|CredentialRefreshToken|
|bool|bAcceptEULA|
|bool|bAcceptTOS|
|bool|bAcceptPP|
|FRH_OnLoginComplete|OnLoginCompleteDelegate|

#### Description

Begins a complete multi-phased login to the OnlineSubsystem with the provided credentials, checking if the user has appropriate permissions, and logging into RallyHere.


#### Parameters

Credentials
: - Credentials to use to login with the LoginOSS 
CredentialRefreshToken
: - RefreshToken to associate with the credentials. If included will be used for the RallyHere login 
OnLoginComplete
: - Delegate called after login completes 



### `Logout` <a id="classURH__LocalPlayerLoginSubsystem_1ae3394f883c697e57a705c23d8b0be23a"></a>

void Logout()

#### Parameters

| Type | Name |
|------|------|

#### Description

Requests a logout on the server clearing the players auth credentials.




### `ShowLoginProfileSelectionUI` <a id="classURH__LocalPlayerLoginSubsystem_1a6b569dc65fc1a0a0b6bb9f03a5c33ca9"></a>

bool ShowLoginProfileSelectionUI(bool bShowOnlineOnly, const FRH_OnProfileSelectionUIClosed & OnClosed, [ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) OSSType)

#### Parameters

| Type | Name |
|------|------|
|bool|bShowOnlineOnly|
|const FRH_OnProfileSelectionUIClosed &|OnClosed|
|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|OSSType|

#### Description

Show an OSS-specific profile selection UI to the user. This is for Xbox and other platforms that support profile swapping. A valid profile is required to login on those platforms.




### `ShouldUseSavedCredentials` <a id="classURH__LocalPlayerLoginSubsystem_1a508f8e109c3ec8be8a8b3fc2cb4ded58"></a>

bool ShouldUseSavedCredentials()

#### Parameters

| Type | Name |
|------|------|

#### Description

Are saved credentials allowed for auto-login?




### `GetOSS` <a id="classURH__LocalPlayerLoginSubsystem_1aa90dc3aaf0dd07ac57aab97b3d300e8d"></a>

IOnlineSubsystem * GetOSS([ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) OSSType)

#### Parameters

| Type | Name |
|------|------|
|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|OSSType|

#### Description

Get the fully resolved OSS by type.




### `GetLoginOSS` <a id="classURH__LocalPlayerLoginSubsystem_1a9e877c23c0e17ff59e45c9690b319da0"></a>

IOnlineSubsystem * GetLoginOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the fully resolved OSS to use for Login.




### `GetNicknameOSS` <a id="classURH__LocalPlayerLoginSubsystem_1aaa99f329af713816b4c175c0f7671e49"></a>

IOnlineSubsystem * GetNicknameOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the fully resolved OSS to use for getting a player's display name for login. This triggers a second OSS login.




### `IsCrossplayEnabled` <a id="classURH__LocalPlayerLoginSubsystem_1a311a51ee03f291f4c236f1983e0b3f7c"></a>

bool IsCrossplayEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if crossplay is enabled.




### `IsCommunicationEnabled` <a id="classURH__LocalPlayerLoginSubsystem_1a1412124dc14c386e02ce52bbcb2671c0"></a>

bool IsCommunicationEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if cvommunication is enabled.





## Protected Functions



### `PostResults` <a id="classURH__LocalPlayerLoginSubsystem_1aa8588e2a9f530a54818aeb56fd091e7d"></a>

void PostResults([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & Res)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|
|const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) &|Res|

#### Description

Posts the results from a login request.


#### Parameters

Req
: The login request. 
Res
: The login results. 



### `DoShowLoginOSSLoginUI` <a id="classURH__LocalPlayerLoginSubsystem_1ac38e03f331309d47d734f788930ed3f4"></a>

void DoShowLoginOSSLoginUI([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Prompts the online subsystem to show login UI.


#### Parameters

Req
: The pending login request. 



### `DoShowNicknameOSSLoginUI` <a id="classURH__LocalPlayerLoginSubsystem_1a8c668ea60d6d684d3f66cf96ac5a6914"></a>

void DoShowNicknameOSSLoginUI([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Prompts the online subsystem to show the choose nickname login UI.


#### Parameters

Req
: The pending login request. 



### `NicknameOSSLoginUIClosed` <a id="classURH__LocalPlayerLoginSubsystem_1a3a8c0c7cb777ae735eaf5816b5c1442c"></a>

void NicknameOSSLoginUIClosed(TSharedPtr< const FUniqueNetId > UniqueId, const FOnlineError & Error, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< const FUniqueNetId >|UniqueId|
|const FOnlineError &|Error|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Callback from the user closing the nickname selection on the online subsystem.


#### Parameters

UniqueId
: Unique Net Id player selected. 
Error
: Error message if any. 
Req
: The pending login request. 



### `LoginOSSLoginUIClosed` <a id="classURH__LocalPlayerLoginSubsystem_1a3ed944e354b67a3253fc3b266d2d74f3"></a>

void LoginOSSLoginUIClosed(TSharedPtr< const FUniqueNetId > UniqueId, const FOnlineError & Error, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< const FUniqueNetId >|UniqueId|
|const FOnlineError &|Error|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Callback from the user closing the login UI of the online subsystem.


#### Parameters

UniqueId
: Unique Net Id player selected. 
Error
: Error message if any. 
Req
: The pending login request. 



### `DoLoginOSSLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a1348a27ffee35644cd6b1ffaaa992ff0"></a>

void DoLoginOSSLogin([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Starts the online subsystem login.


#### Parameters

Req
: The pending login request. 



### `DoNicknameOSSLogin` <a id="classURH__LocalPlayerLoginSubsystem_1aaec0f125f3a1b048f96dd9f0b15c8378"></a>

void DoNicknameOSSLogin([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Starts the online subsystem nickname login.


#### Parameters

Req
: The pending login request. 



### `DoOSSLogin` <a id="classURH__LocalPlayerLoginSubsystem_1a4a4d560752f5f6d1eee297d1b0d533a4"></a>

void DoOSSLogin([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, IOnlineSubsystem * OSS, OSSLoginCompleteFn OnComplete)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|
|IOnlineSubsystem *|OSS|
|OSSLoginCompleteFn|OnComplete|

#### Description

Starts the online subsystem login.


#### Parameters

Req
: The pending login request. 
OSS
: The online subsystem being logged into. 
OnComplete
: Callback delegate for when login finishes. 



### `OSSLoginComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a09d25f9ea9975061d1c66c113bfb6339"></a>

void OSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|int32|ControllerId|
|bool|bSuccessful|
|const FUniqueNetId &|UniqueId|
|const FString &|ErrorMessage|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Handler for OSS Login Completion.


#### Parameters

ControllerId
: Controller Id of the local player logging in. 
bSuccessful
: Was the login successful. 
UniqueId
: Unique Net Id of the player logging in. 
ErrorMessage
: Error message if any. 
Req
: The pending login request. 



### `OSSNicknameLoginComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a37bae042ff553fd98f3770c129a45949"></a>

void OSSNicknameLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|int32|ControllerId|
|bool|bSuccessful|
|const FUniqueNetId &|UniqueId|
|const FString &|ErrorMessage|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Handler for OSS Nickname Login Completion.


#### Parameters

ControllerId
: Controller Id of the local player logging in. 
bSuccessful
: Was the login successful. 
UniqueId
: Unique Net Id of the player logging in. 
ErrorMessage
: Error message if any. 
Req
: The pending login request. 



### `OnOSSLoginComplete` <a id="classURH__LocalPlayerLoginSubsystem_1af158781b3e66c68f16de41e6149e6b2e"></a>

bool OnOSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, IOnlineSubsystem * OSS, PendingLoginUniqueIdRef UniqueIdPtr, bool bOSSRequireValidUserIdForFailedLogin)

#### Parameters

| Type | Name |
|------|------|
|int32|ControllerId|
|bool|bSuccessful|
|const FUniqueNetId &|UniqueId|
|const FString &|ErrorMessage|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|
|IOnlineSubsystem *|OSS|
|PendingLoginUniqueIdRef|UniqueIdPtr|
|bool|bOSSRequireValidUserIdForFailedLogin|

#### Description

Handler for OSS Login Completion.


#### Parameters

ControllerId
: Controller Id of the local player logging in. 
bSuccessful
: Was the login successful. 
UniqueId
: Unique Net Id of the player logging in. 
ErrorMessage
: Error message if any. 
Req
: The pending login request. 
OSS
: The online subsystem being logged into. 
UniqueIdPtr
: Pending Login pointer reference. 
bOSSRequireValidUserIdForFailedLogin
: If the login failed due to no valid user id. 



### `ExternalUI_ShowLoginUIClosed` <a id="classURH__LocalPlayerLoginSubsystem_1a333418b1fa9eb68991567bac31129339"></a>

void ExternalUI_ShowLoginUIClosed(TSharedPtr< const FUniqueNetId > UniqueId, const int ControllerIndex, const FOnlineError & Error, FRH_OnProfileSelectionUIClosed OnClosed)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< const FUniqueNetId >|UniqueId|
|const int|ControllerIndex|
|const FOnlineError &|Error|
|FRH_OnProfileSelectionUIClosed|OnClosed|

#### Description

Callback for when the OSS login UI is closed.


#### Parameters

UniqueId
: Unique Net Id of the player logging in. 
ControllerIndex
: Controller Id of the local player logging in. 
Error
: Error message if any. 
OnClosed
: Callback delegate for when the login UI is closed. 



### `DoLoginOSSPrivilegeCheck` <a id="classURH__LocalPlayerLoginSubsystem_1a7b65ebe24a9e0bf8d0a1cf5813c28c96"></a>

void DoLoginOSSPrivilegeCheck([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Checks users Privileges for OSS Login.


#### Parameters

Req
: The pending login request. 



### `DoNicknameOSSPrivilegeCheck` <a id="classURH__LocalPlayerLoginSubsystem_1a59711795bf74e953d9efab8f66eecc03"></a>

void DoNicknameOSSPrivilegeCheck([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Checks users Privileges for OSS Nickname Login.


#### Parameters

Req
: The pending login request. 



### `DoOSSPrivilegeCheck` <a id="classURH__LocalPlayerLoginSubsystem_1a529bf4977cd385ddc75ca33b711ef914"></a>

void DoOSSPrivilegeCheck([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, IOnlineSubsystem * OSS, PendingLoginUniqueIdRef UniqueIdPtr, OSSPrivilegeResultsFn OnPrivilegeResults)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|
|IOnlineSubsystem *|OSS|
|PendingLoginUniqueIdRef|UniqueIdPtr|
|OSSPrivilegeResultsFn|OnPrivilegeResults|

#### Description

Checks users Privileges for OSS Login.


#### Parameters

Req
: The pending login request. 
OSS
: The online subsystem being logged into. 
UniqueIdPtr
: Pending Login pointer reference. 
OnPrivilegeResults
: Callback delegate for when the privilege check is complete. 



### `OnLoginOSSPrivilegeResults` <a id="classURH__LocalPlayerLoginSubsystem_1a2381665262c193523ec0bfae00b073af"></a>

void OnLoginOSSPrivilegeResults(const FUniqueNetId & UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UniqueId|
|EUserPrivileges::Type|Privilege|
|uint32|PrivilegeResults|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Handler for online subsystem callback for OSS Privilege check.


#### Parameters

UniqueId
: Unique Net Id of the player being checked in. 
Privilege
: Privilege being checked. 
PrivilegeResults
: Privilege check results. 
Req
: The pending login request. 



### `OnNicknameOSSPrivilegeResults` <a id="classURH__LocalPlayerLoginSubsystem_1a650fbeb427bb5c402e36bef9c793342a"></a>

void OnNicknameOSSPrivilegeResults(const FUniqueNetId & UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UniqueId|
|EUserPrivileges::Type|Privilege|
|uint32|PrivilegeResults|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Handler for online subsystem callback for OSS Nickname Privilege check.


#### Parameters

UniqueId
: Unique Net Id of the player being checked in. 
Privilege
: Privilege being checked. 
PrivilegeResults
: Privilege check results. 
Req
: The pending login request. 



### `OnOSSPrivilegeResults` <a id="classURH__LocalPlayerLoginSubsystem_1a8d1c57f00dd702f3739e5e2f18665542"></a>

bool OnOSSPrivilegeResults(const FUniqueNetId & UniqueId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req, IOnlineSubsystem * OSS, bool bPromptForAccountUpgradeIfInsufficient)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UniqueId|
|EUserPrivileges::Type|Privilege|
|uint32|PrivilegeResults|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|
|IOnlineSubsystem *|OSS|
|bool|bPromptForAccountUpgradeIfInsufficient|

#### Description

Handler for online subsystem callback for OSS Privilege check.


#### Parameters

UniqueId
: Unique Net Id of the player being checked in. 
Privilege
: Privilege being checked. 
PrivilegeResults
: Privilege check results. 
Req
: The pending login request. 
OSS
: The online subsystem being logged into. 
bPromptForAccountUpgradeIfInsufficient
: If true, prompt user to upgrade their platform account. 



### `RetrieveOSSAuthToken` <a id="classURH__LocalPlayerLoginSubsystem_1abe4cba66bc2a21657b730e9c456a8297"></a>

void RetrieveOSSAuthToken([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|

#### Description

Start the retrieval of the OSS Auth Token.


#### Parameters

Req
: The pending login request. 



### `RetrieveOSSAuthTokenComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a27fbe50ee06ccb5822c1edbf773d81a8"></a>

void RetrieveOSSAuthTokenComplete(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken & AuthToken, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|int32|LocalUserNum|
|bool|bWasSuccessful|
|const FExternalAuthToken &|AuthToken|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Start the login to Rally Here.


#### Parameters

LocalUserNum
: Local user number of the player logging in. 
bWasSuccessful
: Was the retrieval successful. 
AuthTokenWrapper
: The auth token wrapper. 
Req
: The pending login request. 



### `DoRallyHereLogin` <a id="classURH__LocalPlayerLoginSubsystem_1ac566c5385eac7117a5562ba0010cf4fc"></a>

void DoRallyHereLogin([FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) & Req, const FExternalAuthToken & AuthToken)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) &|Req|
|const FExternalAuthToken &|AuthToken|

#### Description

Start the login to Rally Here.


#### Parameters

Req
: The pending login request. 



### `RallyHereLoginComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a7b877ea539a11d526e488f43a1044cd4"></a>

void RallyHereLoginComplete(const RallyHereAPI::FResponse_Login & Resp, [FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest) Req)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_Login &|Resp|
|[FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)|Req|

#### Description

Handle the response from the login to Rally Here.


#### Parameters

Resp
: Response from the login to Rally Here. 
Req
: The pending login request. 



### `GetSavedCredentialEnvironment` <a id="classURH__LocalPlayerLoginSubsystem_1a159afb852506a24c40a44f315debfbc6"></a>

FString GetSavedCredentialEnvironment(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description

Gets the cached credentials for the given online subsystem.


#### Parameters

OSSName
: Name of the online subsystem. 

#### Returns
Credentials token for the subsystem. 



### `CheckCrossplayPrivilege` <a id="classURH__LocalPlayerLoginSubsystem_1a56da439941bdce891cbe97ebf75d5666"></a>

void CheckCrossplayPrivilege(const FUniqueNetId & UniqueId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UniqueId|

#### Description

Checks the users OSS privileges for crossplay.


#### Parameters

UniqueId
: Unique Net Id of the player being checked in. 



### `HandleCheckCrossPlayPrivilegeComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a9695dff647ab1d5f81acbf29f38882e6"></a>

void HandleCheckCrossPlayPrivilegeComplete(const FUniqueNetId & UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UserId|
|EUserPrivileges::Type|Privilege|
|uint32|PrivilegeResults|

#### Description

Handles the response of the OSS crossplay privilege check.


#### Parameters

UserId
: Unique Net Id of the player being checked in. 
Privilege
: Privilege being checked. 
PrivilegeResults
: Privilege check results. 



### `CheckCommunicationPrivilege` <a id="classURH__LocalPlayerLoginSubsystem_1af758cbf06c5f4a9a5ab87367cb69d60a"></a>

void CheckCommunicationPrivilege(const FUniqueNetId & UniqueId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UniqueId|

#### Description

Checks the users OSS privileges for communicataion.


#### Parameters

UniqueId
: Unique Net Id of the player being checked in. 



### `HandleCheckCommunicationPrivilegeComplete` <a id="classURH__LocalPlayerLoginSubsystem_1a941c8ad7a2ca3204ce9ac44bad2b7986"></a>

void HandleCheckCommunicationPrivilegeComplete(const FUniqueNetId & UserId, EUserPrivileges::Type Privilege, uint32 PrivilegeResults)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UserId|
|EUserPrivileges::Type|Privilege|
|uint32|PrivilegeResults|

#### Description

Handles the response of the OSS communicaation privilege check.


#### Parameters

UserId
: Unique Net Id of the player being checked in. 
Privilege
: Privilege being checked. 
PrivilegeResults
: Privilege check results. 



### `HandleAppReactivated` <a id="classURH__LocalPlayerLoginSubsystem_1aa8c118625fd0a61d8ee5283d539d6d00"></a>

void HandleAppReactivated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handles the app being restored from being suspended.




### `HandleAppReactivatedGameThread` <a id="classURH__LocalPlayerLoginSubsystem_1a60779ab08578f6978df960d7d3877782"></a>

void HandleAppReactivatedGameThread()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handles the app game thread being restored from being suspended.





