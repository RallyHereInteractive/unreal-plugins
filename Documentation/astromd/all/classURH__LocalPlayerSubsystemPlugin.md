---
title: URH_LocalPlayerSubsystemPlugin Class
---Inherits from [URH_SubsystemPluginBase](/unreal-plugins/all/classurh__subsystempluginbase/#classURH__SubsystemPluginBase)

Local Player Subsystem Plugin.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)()|Gets the local players Auth Context.|
|[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|[GetLocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin_1a1563225099f0ccab0dde6b7a0937756d)()|Gets the Local Player Subsystem.|
|[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem) *|[GetGameInstanceSubsystem](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin_1a0467468e4d19b5bd06c558cde90ef7e4)()|Get the Game Instance Subsystem.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)()|Base handling when the local user changes, override to provide functionality.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)(const FGuid & OldPlayerUuid, class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * OldLocalPlayerInfo)|Base handling when the local user changes, override to provide functionality.|
## Public Functions



### `GetAuthContext` <a id="classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the local players Auth Context.




### `GetLocalPlayerSubsystem` <a id="classURH__LocalPlayerSubsystemPlugin_1a1563225099f0ccab0dde6b7a0937756d"></a>

[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * GetLocalPlayerSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Local Player Subsystem.




### `GetGameInstanceSubsystem` <a id="classURH__LocalPlayerSubsystemPlugin_1a0467468e4d19b5bd06c558cde90ef7e4"></a>

[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem) * GetGameInstanceSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the Game Instance Subsystem.




### `OnUserChanged` <a id="classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Base handling when the local user changes, override to provide functionality.




### `OnUserChanged` <a id="classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc"></a>

void OnUserChanged(const FGuid & OldPlayerUuid, class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * OldLocalPlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|OldPlayerUuid|
|class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|OldLocalPlayerInfo|

#### Description

Base handling when the local user changes, override to provide functionality.


#### Parameters

OldPlayerUuid
: The old player Uuid. 
OldLocalPlayerInfo
: The old local player info. 




