---
title: FRH_SessionMemberStatusState Struct
---
Utility struct to wrapper a player state for a player state update change.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe)|Player Uuid for this state.|
|bool|[bIsValid](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79)|Whether the state is valid (a state is not valid if a player is not associated with the session)|
|ERHAPI_SessionPlayerStatus|[Status](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520)|Status of the player at the time of recording the state.|
|int32|[TeamId](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17)|Team of the player at the time of recording the state.|
||[FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3)()|Default Constructor.|
|FORCEINLINE bool|[operator==](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6)(const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & Comparator)|Equivalence check used to determine if a notification should be dispatched.|
|FORCEINLINE bool|[operator!=](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56)(const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & Comparator)|Inequivalence check used to determine if a notification should be dispatched.|
## Public Attributes



### `PlayerUuid` <a id="structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe"></a>

`FGuid FRH_SessionMemberStatusState::PlayerUuid`

Player Uuid for this state.




### `bIsValid` <a id="structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79"></a>

`bool FRH_SessionMemberStatusState::bIsValid`

Whether the state is valid (a state is not valid if a player is not associated with the session)




### `Status` <a id="structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520"></a>

`ERHAPI_SessionPlayerStatus FRH_SessionMemberStatusState::Status`

Status of the player at the time of recording the state.




### `TeamId` <a id="structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17"></a>

`int32 FRH_SessionMemberStatusState::TeamId`

Team of the player at the time of recording the state.





## Public Functions



### `FRH_SessionMemberStatusState` <a id="structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3"></a>

 FRH_SessionMemberStatusState()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default Constructor.




### `operator==` <a id="structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6"></a>

FORCEINLINE bool operator==(const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & Comparator)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) &|Comparator|

#### Description

Equivalence check used to determine if a notification should be dispatched.




### `operator!=` <a id="structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56"></a>

FORCEINLINE bool operator!=(const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) & Comparator)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_SessionMemberStatusState](/unreal-plugins/all/structfrh__sessionmemberstatusstate/#structFRH__SessionMemberStatusState) &|Comparator|

#### Description

Inequivalence check used to determine if a notification should be dispatched.





