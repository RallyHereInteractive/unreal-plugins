---
title: Session
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer)||
|struct|[FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams)||
|class|[URH_SessionBrowserCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache)||
|struct|[FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState)||
|struct|[TRH_DataWithETagWrapper](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper)||
|struct|[FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll)||
|class|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView)||
|class|[URH_InvitedSession](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession)||
|class|[URH_OfflineSession](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession)||
|class|[URH_OnlineSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession)||
|class|[URH_SessionOwnerInterface](/unreal-plugins/all/classurh__sessionownerinterface/#classURH__SessionOwnerInterface)||
|class|[IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface)||
|enum|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)|Sync Action state enum.|
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga442cb63323e21ee2a9ca3be5cecfe338)(FRH_PlatformSessionSyncerCleanupDynamicDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , Syncer )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga1bcbb834b13069c3d251137b66e8388f)(FRH_PlatformSessionSyncerCleanupDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga1c25a63280b536d1f6c693d6125e836c)(FRH_PlatformSessionSyncerStateChangedDynamicDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , Syncer , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , OldState , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , NewState )||
||[DECLARE_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga850ab9a93bf85fed00040b7eda888d89)(FRH_PlatformSessionSyncerStateChangedDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) )||
## 




### `ESyncActionState` <a id="group__Session_1gaa60e236caf03784c17c443c4a520d642"></a>
Sync Action state enum.



| Enumerator | Initializer|
|------------|------------|
|`Uninitialized`|``|
|`Unsynchronized`|``|
|`CreatePlatformSession`|``|
|`JoinPlatformSession`|``|
|`LeavePlatformSession`|``|
|`UpdateRHSession`|``|
|`Synchronized`|``|
|`Error`|``|
|`Cleanup`|``|
|`CleanupComplete`|``|


### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="group__Session_1ga442cb63323e21ee2a9ca3be5cecfe338"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_PlatformSessionSyncerCleanupDynamicDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , Syncer )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlatformSessionSyncerCleanupDynamicDelegate||
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *||
|Syncer||

#### Description



Delegates for when platform synchronization objects are cleaned up 



### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="group__Session_1ga1bcbb834b13069c3d251137b66e8388f"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_PlatformSessionSyncerCleanupDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlatformSessionSyncerCleanupDelegate||
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams` <a id="group__Session_1ga1c25a63280b536d1f6c693d6125e836c"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRH_PlatformSessionSyncerStateChangedDynamicDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , Syncer , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , OldState , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , NewState )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlatformSessionSyncerStateChangedDynamicDelegate||
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *||
|Syncer||
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)||
|OldState||
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)||
|NewState||

#### Description



Delegates for when platform synchronization objects have state changes 



### `DECLARE_MULTICAST_DELEGATE_ThreeParams` <a id="group__Session_1ga850ab9a93bf85fed00040b7eda888d89"></a>

 DECLARE_MULTICAST_DELEGATE_ThreeParams(FRH_PlatformSessionSyncerStateChangedDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlatformSessionSyncerStateChangedDelegate||
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *||
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)||
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)||

#### Description







