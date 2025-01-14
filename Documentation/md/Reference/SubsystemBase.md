---
title: SubsystemBase
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_SubsystemPluginBase`](#classURH__SubsystemPluginBase) | Base class for subsystem plugins.
`class `[`URH_LocalPlayerSubsystemPlugin`](#classURH__LocalPlayerSubsystemPlugin) | Local Player Subsystem Plugin.
`class `[`URH_GameInstanceSubsystemPlugin`](#classURH__GameInstanceSubsystemPlugin) | Game Instace Subsystem Plugin.
`class `[`URH_SandboxedSubsystemPlugin`](#classURH__SandboxedSubsystemPlugin) | A plugin that can exist on the game instance as a global cache, or optionally on the local player as a sandboxed plugin.

## class `URH_SubsystemPluginBase` <a id="classURH__SubsystemPluginBase"></a>

```
class URH_SubsystemPluginBase
  : public UObject
```

Base class for subsystem plugins.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FAuthContextPtr `[`GetAuthContext`](#classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe) | Gets the auth context for the plugin to use, override to provide functionality.
`public virtual void `[`Initialize`](#classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79)`()` | Initialize the subsystem plugin.
`public virtual void `[`Deinitialize`](#classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12)`()` | Safely tears down the subsystem plugin.

### Members

#### `public FAuthContextPtr `[`GetAuthContext`](#classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe) <a id="classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe"></a>

Gets the auth context for the plugin to use, override to provide functionality.

#### `public virtual void `[`Initialize`](#classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79)`()` <a id="classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79"></a>

Initialize the subsystem plugin.

#### `public virtual void `[`Deinitialize`](#classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12)`()` <a id="classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12"></a>

Safely tears down the subsystem plugin.

## class `URH_LocalPlayerSubsystemPlugin` <a id="classURH__LocalPlayerSubsystemPlugin"></a>

```
class URH_LocalPlayerSubsystemPlugin
  : public URH_SubsystemPluginBase
```

Local Player Subsystem Plugin.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)`() const` | Gets the local players Auth Context.
`public virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a165b2e3526541ab0a005ae4b55c25969)`() const` | Gets the Local Player Subsystem.
`public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a9e5f9689bacbf129d966528b5f4abbf9)`() const` | Get the Game Instance Subsystem.
`public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)`()` | Base handling when the local user changes, override to provide functionality.
`public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Base handling when the local user changes, override to provide functionality.

### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e"></a>

Gets the local players Auth Context.

#### `public virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a165b2e3526541ab0a005ae4b55c25969)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1a165b2e3526541ab0a005ae4b55c25969"></a>

Gets the Local Player Subsystem.

#### `public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a9e5f9689bacbf129d966528b5f4abbf9)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1a9e5f9689bacbf129d966528b5f4abbf9"></a>

Get the Game Instance Subsystem.

#### `public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)`()` <a id="classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68"></a>

Base handling when the local user changes, override to provide functionality.

#### `public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc"></a>

Base handling when the local user changes, override to provide functionality.

#### Parameters
* `OldPlayerUuid` The old player Uuid. 

* `OldLocalPlayerInfo` The old local player info.

## class `URH_GameInstanceSubsystemPlugin` <a id="classURH__GameInstanceSubsystemPlugin"></a>

```
class URH_GameInstanceSubsystemPlugin
  : public URH_SubsystemPluginBase
```

Game Instace Subsystem Plugin.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652)`() const` | Gets the game instance Auth Context.
`public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__GameInstanceSubsystemPlugin_1af6b845eb94c7be36f38b681cedb6c1f3)`() const` | Get the Game Instance Subsystem.

### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652)`() const` <a id="classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652"></a>

Gets the game instance Auth Context.

#### `public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__GameInstanceSubsystemPlugin_1af6b845eb94c7be36f38b681cedb6c1f3)`() const` <a id="classURH__GameInstanceSubsystemPlugin_1af6b845eb94c7be36f38b681cedb6c1f3"></a>

Get the Game Instance Subsystem.

## class `URH_SandboxedSubsystemPlugin` <a id="classURH__SandboxedSubsystemPlugin"></a>

```
class URH_SandboxedSubsystemPlugin
  : public URH_GameInstanceSubsystemPlugin
```

A plugin that can exist on the game instance as a global cache, or optionally on the local player as a sandboxed plugin.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0)`() const` | Gets the game instance Auth Context.
`public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__SandboxedSubsystemPlugin_1acb2d67a4afd03ad510c9357bcb0dbbea)`() const` | Get the Game Instance Subsystem.
`protected virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__SandboxedSubsystemPlugin_1ae3780335b1ea9894f029dc1316b73571)`() const` | Gets the Local Player Subsystem.

### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0)`() const` <a id="classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0"></a>

Gets the game instance Auth Context.

#### `public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__SandboxedSubsystemPlugin_1acb2d67a4afd03ad510c9357bcb0dbbea)`() const` <a id="classURH__SandboxedSubsystemPlugin_1acb2d67a4afd03ad510c9357bcb0dbbea"></a>

Get the Game Instance Subsystem.

#### `protected virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__SandboxedSubsystemPlugin_1ae3780335b1ea9894f029dc1316b73571)`() const` <a id="classURH__SandboxedSubsystemPlugin_1ae3780335b1ea9894f029dc1316b73571"></a>

Gets the Local Player Subsystem.

