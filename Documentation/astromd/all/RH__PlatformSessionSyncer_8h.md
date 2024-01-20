---
title: RH_PlatformSessionSyncer.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer)||
|enum|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)|Sync Action state enum.|
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga442cb63323e21ee2a9ca3be5cecfe338)(FRH_PlatformSessionSyncerCleanupDynamicDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , Syncer )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga1bcbb834b13069c3d251137b66e8388f)(FRH_PlatformSessionSyncerCleanupDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga1c25a63280b536d1f6c693d6125e836c)(FRH_PlatformSessionSyncerStateChangedDynamicDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , Syncer , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , OldState , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , NewState )||
||[DECLARE_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1ga850ab9a93bf85fed00040b7eda888d89)(FRH_PlatformSessionSyncerStateChangedDelegate , [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) , [ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) )||
|define|[SETTING_RALLYHERE_SESSION_ID](/unreal-plugins/all/rh__platformsessionsyncer_8h/#RH__PlatformSessionSyncer_8h_1a9e38ee4568a8c6f2250ecddaf9eeaef1)||
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







## Defines



### `SETTING_RALLYHERE_SESSION_ID` <a id="RH__PlatformSessionSyncer_8h_1a9e38ee4568a8c6f2250ecddaf9eeaef1"></a>


#define SETTING_RALLYHERE_SESSION_ID FName(TEXT("SESSIONRALLYHEREID"))



Session id setting name, used to store the RH Session id on the platform session objects 




