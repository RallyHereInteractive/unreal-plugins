---
title: LocalPlayer
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult)||
|class|[URH_LocalPlayerLoginSubsystem](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem)||
|class|[URH_LocalPlayerPresenceSubsystem](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem)||
|class|[URH_LocalPlayerSessionSubsystem](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem)||
|class|[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem)||
|enum|[ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)|Login Results.|
|enum|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|Login Online Subsystem Type.|
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



