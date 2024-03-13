---
title: RH_SessionData.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|namespace|[RH_SessionCustomDataKeys](/unreal-plugins/all/namespacerh__sessioncustomdatakeys/#namespaceRH__SessionCustomDataKeys)||
|struct|[FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState)||
|struct|[TRH_DataWithETagWrapper](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper)||
|struct|[FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll)||
|class|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView)||
|class|[URH_InvitedSession](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession)||
|class|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession)||
|class|[URH_OfflineSession](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession)||
|class|[URH_OnlineSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession)||
|class|[URH_SessionOwnerInterface](/unreal-plugins/all/classurh__sessionownerinterface/#classURH__SessionOwnerInterface)||
|class|[IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface)||
|typedef|[FRH_SessionOwnerPtr](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1aad3caa6e1e89db4835593171ed8f1dd2)||
|typedef|[FRH_APISessionWithETag](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1ac63a72ed34c1090e30be41a293c5ebb5)||
||[DECLARE_LOG_CATEGORY_EXTERN](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a5684e761af7a29361ae524c3943f788d)(LogRHSession , Log , All )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a33d0c8b79ddf88a3b67b345cfc84e704)(FRH_OnSessionUpdatedDynamicDelegate , bool , bSuccess , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , SessionData , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1ac4eb719dbb13bf3cde7abb50523ab57d)(FRH_OnSessionUpdatedDelegate , bool , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1afd74754e43afe71aab7b5129fce8f6e6)(FRH_OnSessionUpdatedDelegateBlock , FRH_OnSessionUpdatedDelegate , FRH_OnSessionUpdatedDynamicDelegate , bool , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a9b8992e075f0f76028223a34f87450cf)(FRH_OnSessionUpdatedMulticastDynamicDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , UpdatedSession )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a4ab53485e1551fcc37a47af78113d625)(FRH_OnSessionUpdatedMulticastDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a6885c5b838034f73d9fda742af1951ee)(FRH_OnSessionMemberStateChangedDynamicDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , UpdatedSession , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & , OldStatus , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & , NewStatus )||
||[DECLARE_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a212a6fe429b9569ec33a8c76f61bfc67)(FRH_OnSessionMemberStateChangedDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1ab780717bd612a5bbc3f12217d39fd1a5)(FRH_OnSessionMemberPresenceChangedDynamicDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , UpdatedSession , class [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * , Presence )||
||[DECLARE_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1aabd03585f47936239cc9676bb95d7fef)(FRH_OnSessionMemberPresenceChangedDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , class [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a06c546b124630e9ed220bd7c92bad88b)(FRH_OnPollAllSessionsDelegate , bool , const TArray< FString > & SessionIds)||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__sessiondata_8h/#RH__SessionData_8h_1a93f4edeb8b844d29b55fc84033e6c017)(FRH_OnSessionExpiredDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * )||
## Typedefs



### `FRH_SessionOwnerPtr` <a id="RH__SessionData_8h_1aad3caa6e1e89db4835593171ed8f1dd2"></a>

typedef TWeakInterfacePtr< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > FRH_SessionOwnerPtr




### `FRH_APISessionWithETag` <a id="RH__SessionData_8h_1ac63a72ed34c1090e30be41a293c5ebb5"></a>

typedef [TRH_DataWithETagWrapper](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper)< [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) > FRH_APISessionWithETag





## Functions



### `DECLARE_LOG_CATEGORY_EXTERN` <a id="RH__SessionData_8h_1a5684e761af7a29361ae524c3943f788d"></a>

 DECLARE_LOG_CATEGORY_EXTERN(LogRHSession , Log , All )

#### Parameters

| Type | Name |
|------|------|
|LogRHSession||
|Log||
|All||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__SessionData_8h_1a33d0c8b79ddf88a3b67b345cfc84e704"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnSessionUpdatedDynamicDelegate , bool , bSuccess , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , SessionData , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionUpdatedDynamicDelegate||
|bool||
|bSuccess||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|SessionData||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|ErrorInfo||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__SessionData_8h_1ac4eb719dbb13bf3cde7abb50523ab57d"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnSessionUpdatedDelegate , bool , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionUpdatedDelegate||
|bool||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__SessionData_8h_1afd74754e43afe71aab7b5129fce8f6e6"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnSessionUpdatedDelegateBlock , FRH_OnSessionUpdatedDelegate , FRH_OnSessionUpdatedDynamicDelegate , bool , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionUpdatedDelegateBlock||
|FRH_OnSessionUpdatedDelegate||
|FRH_OnSessionUpdatedDynamicDelegate||
|bool||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__SessionData_8h_1a9b8992e075f0f76028223a34f87450cf"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnSessionUpdatedMulticastDynamicDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , UpdatedSession )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionUpdatedMulticastDynamicDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|UpdatedSession||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__SessionData_8h_1a4ab53485e1551fcc37a47af78113d625"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnSessionUpdatedMulticastDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionUpdatedMulticastDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams` <a id="RH__SessionData_8h_1a6885c5b838034f73d9fda742af1951ee"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRH_OnSessionMemberStateChangedDynamicDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , UpdatedSession , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & , OldStatus , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & , NewStatus )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionMemberStateChangedDynamicDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|UpdatedSession||
|const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) &||
|OldStatus||
|const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) &||
|NewStatus||

#### Description






### `DECLARE_MULTICAST_DELEGATE_ThreeParams` <a id="RH__SessionData_8h_1a212a6fe429b9569ec33a8c76f61bfc67"></a>

 DECLARE_MULTICAST_DELEGATE_ThreeParams(FRH_OnSessionMemberStateChangedDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & , const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionMemberStateChangedDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) &||
|const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) &||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams` <a id="RH__SessionData_8h_1ab780717bd612a5bbc3f12217d39fd1a5"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_OnSessionMemberPresenceChangedDynamicDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , UpdatedSession , class [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * , Presence )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionMemberPresenceChangedDynamicDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|UpdatedSession||
|class [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *||
|Presence||

#### Description






### `DECLARE_MULTICAST_DELEGATE_TwoParams` <a id="RH__SessionData_8h_1aabd03585f47936239cc9676bb95d7fef"></a>

 DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_OnSessionMemberPresenceChangedDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * , class [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionMemberPresenceChangedDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||
|class [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__SessionData_8h_1a06c546b124630e9ed220bd7c92bad88b"></a>

 DECLARE_DELEGATE_TwoParams(FRH_OnPollAllSessionsDelegate , bool , const TArray< FString > & SessionIds)

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPollAllSessionsDelegate||
|bool||
|const TArray< FString > &|SessionIds|

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__SessionData_8h_1a93f4edeb8b844d29b55fc84033e6c017"></a>

 DECLARE_DELEGATE_OneParam(FRH_OnSessionExpiredDelegate , [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionExpiredDelegate||
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *||

#### Description







