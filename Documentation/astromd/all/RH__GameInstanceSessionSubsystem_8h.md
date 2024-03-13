---
title: RH_GameInstanceSessionSubsystem.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_GameInstanceSessionSubsystem](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem)||
|define|[RH_SESSION_PARAMETER_NAME](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1acad59fa88cf462320a57b747180edfd5)||
|define|[RH_INSTANCE_PARAMETER_NAME](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1ac6e0ad040acf74df2a05ebec3e76ec15)||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1a67de8a19d39c90ddb1361fa5a0c52e9d)(FRH_GameInstanceSessionSyncDynamicDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , Session , bool , bSuccess , const FString & , Error )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1af196288766a868aaf03eabe4624b1c07)(FRH_GameInstanceSessionSyncDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , bool , const FString & )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1af92f7077299315d808c8a09f82628012)(FRH_OnBeaconCreatedDynamicDelegate , ARH_OnlineBeaconHost * , Host )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1a49a57038460000b8158ef4b737edb653)(FRH_OnBeaconCreatedDelegate , ARH_OnlineBeaconHost * )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1a8f67ebba433b601a5b2d5094e8cf398c)(FRH_OnActiveSessionChangedDynamicDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , OldSession , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , NewSession )||
||[DECLARE_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__gameinstancesessionsubsystem_8h/#RH__GameInstanceSessionSubsystem_8h_1a47d54d7706c84727bb580eee8b6b7a17)(FRH_OnActiveSessionChangedDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * )||
## Defines



### `RH_SESSION_PARAMETER_NAME` <a id="RH__GameInstanceSessionSubsystem_8h_1acad59fa88cf462320a57b747180edfd5"></a>


#define RH_SESSION_PARAMETER_NAME (TEXT("RHSessionId="))






### `RH_INSTANCE_PARAMETER_NAME` <a id="RH__GameInstanceSessionSubsystem_8h_1ac6e0ad040acf74df2a05ebec3e76ec15"></a>


#define RH_INSTANCE_PARAMETER_NAME (TEXT("RHInstanceId="))







## Functions



### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__GameInstanceSessionSubsystem_8h_1a67de8a19d39c90ddb1361fa5a0c52e9d"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_GameInstanceSessionSyncDynamicDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , Session , bool , bSuccess , const FString & , Error )

#### Parameters

| Type | Name |
|------|------|
|FRH_GameInstanceSessionSyncDynamicDelegate||
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *||
|Session||
|bool||
|bSuccess||
|const FString &||
|Error||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__GameInstanceSessionSubsystem_8h_1af196288766a868aaf03eabe4624b1c07"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_GameInstanceSessionSyncDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , bool , const FString & )

#### Parameters

| Type | Name |
|------|------|
|FRH_GameInstanceSessionSyncDelegate||
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *||
|bool||
|const FString &||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__GameInstanceSessionSubsystem_8h_1af92f7077299315d808c8a09f82628012"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnBeaconCreatedDynamicDelegate , ARH_OnlineBeaconHost * , Host )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnBeaconCreatedDynamicDelegate||
|ARH_OnlineBeaconHost *||
|Host||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__GameInstanceSessionSubsystem_8h_1a49a57038460000b8158ef4b737edb653"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnBeaconCreatedDelegate , ARH_OnlineBeaconHost * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnBeaconCreatedDelegate||
|ARH_OnlineBeaconHost *||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams` <a id="RH__GameInstanceSessionSubsystem_8h_1a8f67ebba433b601a5b2d5094e8cf398c"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_OnActiveSessionChangedDynamicDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , OldSession , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , NewSession )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnActiveSessionChangedDynamicDelegate||
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *||
|OldSession||
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *||
|NewSession||

#### Description






### `DECLARE_MULTICAST_DELEGATE_TwoParams` <a id="RH__GameInstanceSessionSubsystem_8h_1a47d54d7706c84727bb580eee8b6b7a17"></a>

 DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_OnActiveSessionChangedDelegate , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * , [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnActiveSessionChangedDelegate||
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *||
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *||

#### Description







