# group `SubsystemBase` <a id="group__SubsystemBase"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_SubsystemPluginBase`](#classURH__SubsystemPluginBase) | Base class for subsystem plugins.
`class `[`URH_LocalPlayerSubsystemPlugin`](#classURH__LocalPlayerSubsystemPlugin) | Local Player Subsystem Plugin.
`class `[`URH_GameInstanceSubsystemPlugin`](#classURH__GameInstanceSubsystemPlugin) | Game Instace Subsystem Plugin.
`class `[`URH_SandboxedSubsystemPlugin`](#classURH__SandboxedSubsystemPlugin) | A plugin that can exist on the game instance as a global cache, or optionally on the local player as a sandboxed plugin.

---
title: URH_SubsystemPluginBase
---

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

---
title: URH_LocalPlayerSubsystemPlugin
---

```
class URH_LocalPlayerSubsystemPlugin
  : public URH_SubsystemPluginBase
```

Local Player Subsystem Plugin.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)`() const` | Gets the local players Auth Context.
`public virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a1563225099f0ccab0dde6b7a0937756d)`() const` | Gets the Local Player Subsystem.
`public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a0467468e4d19b5bd06c558cde90ef7e4)`() const` | Get the Game Instance Subsystem.
`public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)`()` | Base handling when the local user changes, override to provide functionality.
`public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Base handling when the local user changes, override to provide functionality.

### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e"></a>

Gets the local players Auth Context.

#### `public virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a1563225099f0ccab0dde6b7a0937756d)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1a1563225099f0ccab0dde6b7a0937756d"></a>

Gets the Local Player Subsystem.

#### `public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a0467468e4d19b5bd06c558cde90ef7e4)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1a0467468e4d19b5bd06c558cde90ef7e4"></a>

Get the Game Instance Subsystem.

#### `public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)`()` <a id="classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68"></a>

Base handling when the local user changes, override to provide functionality.

#### `public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc"></a>

Base handling when the local user changes, override to provide functionality.

#### Parameters
* `OldPlayerUuid` The old player Uuid. 

* `OldLocalPlayerInfo` The old local player info.

---
title: URH_GameInstanceSubsystemPlugin
---

```
class URH_GameInstanceSubsystemPlugin
  : public URH_SubsystemPluginBase
```

Game Instace Subsystem Plugin.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652)`() const` | Gets the game instance Auth Context.
`public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__GameInstanceSubsystemPlugin_1a49c39e1714e1e281ef931a7bd92e32d6)`() const` | Get the Game Instance Subsystem.

### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652)`() const` <a id="classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652"></a>

Gets the game instance Auth Context.

#### `public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__GameInstanceSubsystemPlugin_1a49c39e1714e1e281ef931a7bd92e32d6)`() const` <a id="classURH__GameInstanceSubsystemPlugin_1a49c39e1714e1e281ef931a7bd92e32d6"></a>

Get the Game Instance Subsystem.

---
title: URH_SandboxedSubsystemPlugin
---

```
class URH_SandboxedSubsystemPlugin
  : public URH_GameInstanceSubsystemPlugin
```

A plugin that can exist on the game instance as a global cache, or optionally on the local player as a sandboxed plugin.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0)`() const` | Gets the game instance Auth Context.
`public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__SandboxedSubsystemPlugin_1adba25e1be3399c18148730efc0c9c9cb)`() const` | Get the Game Instance Subsystem.
`protected virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__SandboxedSubsystemPlugin_1a5b6ebbd31b25c5224ef36bdde19b9716)`() const` | Gets the Local Player Subsystem.

### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0)`() const` <a id="classURH__SandboxedSubsystemPlugin_1a252d118412cc3ad05f804ab29b0067f0"></a>

Gets the game instance Auth Context.

#### `public virtual `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__SandboxedSubsystemPlugin_1adba25e1be3399c18148730efc0c9c9cb)`() const` <a id="classURH__SandboxedSubsystemPlugin_1adba25e1be3399c18148730efc0c9c9cb"></a>

Get the Game Instance Subsystem.

#### `protected virtual `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__SandboxedSubsystemPlugin_1a5b6ebbd31b25c5224ef36bdde19b9716)`() const` <a id="classURH__SandboxedSubsystemPlugin_1a5b6ebbd31b25c5224ef36bdde19b9716"></a>

Gets the Local Player Subsystem.

