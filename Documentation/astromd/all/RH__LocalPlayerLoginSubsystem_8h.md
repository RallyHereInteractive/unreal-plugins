---
title: RH_LocalPlayerLoginSubsystem.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult)||
|class|[URH_LocalPlayerLoginSubsystem](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem)||
|struct|[URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest)||
|enum|[ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)|Login Results.|
|enum|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|Login Online Subsystem Type.|
|RALLYHEREINTEGRATION_API FString|[ToString](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a2a7436c32330800bfdc2c8b12342177b)([ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0) Val)|Converts the login result to a string for debug output.|
|RALLYHEREINTEGRATION_API FString|[ToString](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1aa0b826b4945d3de0af14557858ddf045)([ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) Val)|Converts the login OSS to a string for debug output.|
|RALLYHEREINTEGRATION_API bool|[OSSCannotRelogin](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a8ad67f01bfdb2c02027420ca0d790b66)(FName OSSName)|Gets if the OSS supports re-login.|
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a4c9ad4bedbc414147e439864da159914)(FRH_OnLoginComplete , const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a68cee842097e105447305d53d2ccb3de)(FRH_OnProfileSelectionUIClosed , TSharedPtr< const FUniqueNetId > , const FOnlineError & )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a3fd240325506cea1ca88b76e8a87e828)(FRH_OnLoginCompleteMulticast , const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a56981e49fbb71c44c9f1d34d1c400d9d)(FRH_OnLoginCompleteDynamicMulticast , const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & , Result )||
||[DECLARE_MULTICAST_DELEGATE](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1afeb98a3eb2aa925aec3237c092ca60b9)(FRH_GeneralSettingChangedMulticast )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE](/unreal-plugins/all/rh__localplayerloginsubsystem_8h/#RH__LocalPlayerLoginSubsystem_8h_1a9ce0cccacbc2b8e892e3ff5718e1f95b)(FRH_GeneralSettingChangedDynamicMulticast )||
## Enums




### `ERHAPI_LoginResult` <a id="group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0"></a>
Login Results.



| Enumerator | Initializer|
|------------|------------|
|`Success`|``|
|`Fail_PartialInstall`|``|
|`Fail_LoginAlreadyPending`|``|
|`Fail_OSSMissing`|``|
|`Fail_OSSNotSupported`|``|
|`Fail_OSSLoginUINotShown`|``|
|`Fail_OSSLoginUINoUserSelected`|``|
|`Fail_OSSLogin`|``|
|`Fail_OSSLogout`|``|
|`Fail_OSSNeedsProfile`|``|
|`Fail_OSSAccountTypeNotSufficient`|``|
|`Fail_OSSUserNotFound`|``|
|`Fail_OSSAgeRestriction`|``|
|`Fail_OSSPrivilegeCheck`|``|
|`Fail_OSSAuthToken`|``|
|`Fail_MustAcceptAgreements`|``|
|`Fail_RHDenied`|``|
|`Fail_LocalPlayerMissing`|``|
|`Fail_RHUnknown`|``|



### `ERHAPI_LocalPlayerLoginOSS` <a id="group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2"></a>
Login Online Subsystem Type.



| Enumerator | Initializer|
|------------|------------|
|`None`|``|
|`Login`|``|
|`Nickname`|``|



## Functions



### `ToString` <a id="RH__LocalPlayerLoginSubsystem_8h_1a2a7436c32330800bfdc2c8b12342177b"></a>

RALLYHEREINTEGRATION_API FString ToString([ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0) Val)

#### Parameters

| Type | Name |
|------|------|
|[ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)|Val|

#### Description

Converts the login result to a string for debug output.


#### Parameters

Val
: The login result to convert. 



### `ToString` <a id="RH__LocalPlayerLoginSubsystem_8h_1aa0b826b4945d3de0af14557858ddf045"></a>

RALLYHEREINTEGRATION_API FString ToString([ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2) Val)

#### Parameters

| Type | Name |
|------|------|
|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|Val|

#### Description

Converts the login OSS to a string for debug output.


#### Parameters

Val
: The login OSS to convert. 



### `OSSCannotRelogin` <a id="RH__LocalPlayerLoginSubsystem_8h_1a8ad67f01bfdb2c02027420ca0d790b66"></a>

RALLYHEREINTEGRATION_API bool OSSCannotRelogin(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description

Gets if the OSS supports re-login.




### `DECLARE_DELEGATE_OneParam` <a id="RH__LocalPlayerLoginSubsystem_8h_1a4c9ad4bedbc414147e439864da159914"></a>

 DECLARE_DELEGATE_OneParam(FRH_OnLoginComplete , const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnLoginComplete||
|const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) &||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__LocalPlayerLoginSubsystem_8h_1a68cee842097e105447305d53d2ccb3de"></a>

 DECLARE_DELEGATE_TwoParams(FRH_OnProfileSelectionUIClosed , TSharedPtr< const FUniqueNetId > , const FOnlineError & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnProfileSelectionUIClosed||
|TSharedPtr< const FUniqueNetId >||
|const FOnlineError &||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__LocalPlayerLoginSubsystem_8h_1a3fd240325506cea1ca88b76e8a87e828"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnLoginCompleteMulticast , const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnLoginCompleteMulticast||
|const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) &||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__LocalPlayerLoginSubsystem_8h_1a56981e49fbb71c44c9f1d34d1c400d9d"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnLoginCompleteDynamicMulticast , const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) & , Result )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnLoginCompleteDynamicMulticast||
|const [FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) &||
|Result||

#### Description






### `DECLARE_MULTICAST_DELEGATE` <a id="RH__LocalPlayerLoginSubsystem_8h_1afeb98a3eb2aa925aec3237c092ca60b9"></a>

 DECLARE_MULTICAST_DELEGATE(FRH_GeneralSettingChangedMulticast )

#### Parameters

| Type | Name |
|------|------|
|FRH_GeneralSettingChangedMulticast||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE` <a id="RH__LocalPlayerLoginSubsystem_8h_1a9ce0cccacbc2b8e892e3ff5718e1f95b"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRH_GeneralSettingChangedDynamicMulticast )

#### Parameters

| Type | Name |
|------|------|
|FRH_GeneralSettingChangedDynamicMulticast||

#### Description







