# SubsystemBase <a id="group__SubsystemBase"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_SubsystemPluginBase`](#classURH__SubsystemPluginBase) | Base class for subsystem plugins.
`class `[`URH_LocalPlayerSubsystemPlugin`](#classURH__LocalPlayerSubsystemPlugin) | Local Player Subsystem Plugin.
`class `[`URH_GameInstanceSubsystemPlugin`](#classURH__GameInstanceSubsystemPlugin) | Game Instace Subsystem Plugin.

## class `URH_SubsystemPluginBase` <a id="classURH__SubsystemPluginBase"></a>

```
class URH_SubsystemPluginBase
  : public UObject
```

Base class for subsystem plugins.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FAuthContextPtr `[`GetAuthContext`](#classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe) | Gets the auth context for the plugin to use, override to provide functionality.
`public virtual void `[`Initialize`](#classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79)`()` | Initialize the subsystem plugin.
`public virtual void `[`Deinitialize`](#classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12)`()` | Safely tears down the subsystem plugin.

#### Members

#### `public FAuthContextPtr `[`GetAuthContext`](#classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe) <a id="classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe"></a>

Gets the auth context for the plugin to use, override to provide functionality.

<br>
#### `public virtual void `[`Initialize`](#classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79)`()` <a id="classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79"></a>

Initialize the subsystem plugin.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12)`()` <a id="classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12"></a>

Safely tears down the subsystem plugin.

<br>
## class `URH_LocalPlayerSubsystemPlugin` <a id="classURH__LocalPlayerSubsystemPlugin"></a>

```
class URH_LocalPlayerSubsystemPlugin
  : public URH_SubsystemPluginBase
```

Local Player Subsystem Plugin.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)`() const` | Gets the local players Auth Context.
`public `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a98d69d53e543dc005bde8d07488de08d)`() const` | Gets the Local Player Subsystem.
`public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)`()` | Base handling when the local user changes, override to provide functionality.
`public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Base handling when the local user changes, override to provide functionality.

#### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1abac9a120d9ff77cf7971942c532c611e"></a>

Gets the local players Auth Context.

<br>
#### `public `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetLocalPlayerSubsystem`](#classURH__LocalPlayerSubsystemPlugin_1a98d69d53e543dc005bde8d07488de08d)`() const` <a id="classURH__LocalPlayerSubsystemPlugin_1a98d69d53e543dc005bde8d07488de08d"></a>

Gets the Local Player Subsystem.

<br>
#### `public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68)`()` <a id="classURH__LocalPlayerSubsystemPlugin_1a31753089540e2916c9c19925c4804f68"></a>

Base handling when the local user changes, override to provide functionality.

<br>
#### `public inline virtual void `[`OnUserChanged`](#classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__LocalPlayerSubsystemPlugin_1ad7c83133c0053de9a5cd4d58cf2af0bc"></a>

Base handling when the local user changes, override to provide functionality.

#### Parameters
* `OldPlayerUuid` The old player Uuid. 

* `OldLocalPlayerInfo` The old local player info.

<br>
## class `URH_GameInstanceSubsystemPlugin` <a id="classURH__GameInstanceSubsystemPlugin"></a>

```
class URH_GameInstanceSubsystemPlugin
  : public URH_SubsystemPluginBase
```

Game Instace Subsystem Plugin.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652)`() const` | Gets the game instance Auth Context.
`public `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__GameInstanceSubsystemPlugin_1afca541d684202c369b6d46ff8bbc769d)`() const` | Get the Game Instance Subsystem.

#### Members

#### `public virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652)`() const` <a id="classURH__GameInstanceSubsystemPlugin_1acd7dfc1bd22a1703de6a7eae16bb1652"></a>

Gets the game instance Auth Context.

<br>
#### `public `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__GameInstanceSubsystemPlugin_1afca541d684202c369b6d46ff8bbc769d)`() const` <a id="classURH__GameInstanceSubsystemPlugin_1afca541d684202c369b6d46ff8bbc769d"></a>

Get the Game Instance Subsystem.

<br>
