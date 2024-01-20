---
title: URH_SandboxedSubsystemPlugin Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

A plugin that can exist on the game instance as a global cache, or optionally on the local player as a sandboxed plugin.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__sandboxedsubsystemplugin/#classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0)()|Gets the game instance Auth Context.|
|[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem) *|[GetGameInstanceSubsystem](/unreal-plugins/all/classurh__sandboxedsubsystemplugin/#classURH__SandboxedSubsystemPlugin_1adba25e1be3399c18148730efc0c9c9cb)()|Get the Game Instance Subsystem.|
|[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|[GetLocalPlayerSubsystem](/unreal-plugins/all/classurh__sandboxedsubsystemplugin/#classURH__SandboxedSubsystemPlugin_1a5b6ebbd31b25c5224ef36bdde19b9716)()|Gets the Local Player Subsystem.|
## Public Functions



### `GetAuthContext` <a id="classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the game instance Auth Context.




### `GetGameInstanceSubsystem` <a id="classURH__SandboxedSubsystemPlugin_1adba25e1be3399c18148730efc0c9c9cb"></a>

[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem) * GetGameInstanceSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the Game Instance Subsystem.





## Protected Functions



### `GetLocalPlayerSubsystem` <a id="classURH__SandboxedSubsystemPlugin_1a5b6ebbd31b25c5224ef36bdde19b9716"></a>

[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * GetLocalPlayerSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Local Player Subsystem.





