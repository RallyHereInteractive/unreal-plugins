# group `Purge` <a id="group__Purge"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PurgeSubsystem`](#classURH__PurgeSubsystem) | Subsystem to manage purging a players account.

## class `URH_PurgeSubsystem` <a id="classURH__PurgeSubsystem"></a>

```
class URH_PurgeSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Subsystem to manage purging a players account.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349)`()` | Safely tears down the subsystem.
`public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a02e0aa94099eebfeeb1b597ff07738cc)`(const FDateTime & PurgeTime,const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` | Requests a purge for the local player at a specific time.
`public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1addf20225a61f48ebdc5bbf8bc32d8263)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` | Requests a purge for the local player, uses a configured default amount of time til purge from request.
`public inline bool `[`PurgeMeImmediately`](#classURH__PurgeSubsystem_1a0bb785444b4d09ce1cafeea8d59b4c1c)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` | Requests a purge for the local player that will be resolved immediately.
`public bool `[`DequeueMeForPurge`](#classURH__PurgeSubsystem_1a4b2219391a24ee4dca3967817f39d86e)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` | Requests to clear the purge request for the local play.
`public bool `[`QueryMyPurgeStatus`](#classURH__PurgeSubsystem_1a22d6f35bec5e9d367606523ed3bcb36d)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` | Requests the status of a purge for the local player.
`public inline `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`GetMyPurgeStatus`](#classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40)`() const` | Gets the local players Purge Status.
`protected `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`PurgeStatus`](#classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58) | Current Purge Status.
`protected virtual void `[`OnUserChanged`](#classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a6ce3544e1ef73d4f54aaaf78c91c9bf1)`(const TOptional< FDateTime > & PurgeTime,const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` | Creates the request to purge the local player.
`protected virtual void `[`OnPurgeMe`](#classURH__PurgeSubsystem_1ae082ed61d599f9b267b667f7793efb1c)`(const RallyHereAPI::FResponse_QueueMeForPurge & Resp,const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Purge Me call.
`protected virtual void `[`OnDequeueMe`](#classURH__PurgeSubsystem_1a7dba320ada118b170cb0105973569a95)`(const RallyHereAPI::FResponse_DequeueMeForPurge & Resp,const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Dequeue Me For Purge call.
`protected virtual void `[`OnGetMyPurgeStatus`](#classURH__PurgeSubsystem_1a4c9d03ed71e864b0ecdf732a356518ff)`(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe & Resp,const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Get Purge Status call.

### Members

#### `public virtual void `[`Initialize`](#classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca)`()` <a id="classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349)`()` <a id="classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349"></a>

Safely tears down the subsystem.

#### `public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a02e0aa94099eebfeeb1b597ff07738cc)`(const FDateTime & PurgeTime,const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` <a id="classURH__PurgeSubsystem_1a02e0aa94099eebfeeb1b597ff07738cc"></a>

Requests a purge for the local player at a specific time.

#### Parameters
* `PurgeTime` The exact time to complete the purge. 

* `Delegate` Callback with the current status of the purge request.

#### `public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1addf20225a61f48ebdc5bbf8bc32d8263)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` <a id="classURH__PurgeSubsystem_1addf20225a61f48ebdc5bbf8bc32d8263"></a>

Requests a purge for the local player, uses a configured default amount of time til purge from request.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

#### `public inline bool `[`PurgeMeImmediately`](#classURH__PurgeSubsystem_1a0bb785444b4d09ce1cafeea8d59b4c1c)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` <a id="classURH__PurgeSubsystem_1a0bb785444b4d09ce1cafeea8d59b4c1c"></a>

Requests a purge for the local player that will be resolved immediately.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

#### `public bool `[`DequeueMeForPurge`](#classURH__PurgeSubsystem_1a4b2219391a24ee4dca3967817f39d86e)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` <a id="classURH__PurgeSubsystem_1a4b2219391a24ee4dca3967817f39d86e"></a>

Requests to clear the purge request for the local play.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

#### `public bool `[`QueryMyPurgeStatus`](#classURH__PurgeSubsystem_1a22d6f35bec5e9d367606523ed3bcb36d)`(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` <a id="classURH__PurgeSubsystem_1a22d6f35bec5e9d367606523ed3bcb36d"></a>

Requests the status of a purge for the local player.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

#### `public inline `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`GetMyPurgeStatus`](#classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40)`() const` <a id="classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40"></a>

Gets the local players Purge Status.

#### `protected `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`PurgeStatus`](#classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58) <a id="classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58"></a>

Current Purge Status.

#### `protected virtual void `[`OnUserChanged`](#classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e)`()` <a id="classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

#### `protected virtual bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a6ce3544e1ef73d4f54aaaf78c91c9bf1)`(const TOptional< FDateTime > & PurgeTime,const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)` <a id="classURH__PurgeSubsystem_1a6ce3544e1ef73d4f54aaaf78c91c9bf1"></a>

Creates the request to purge the local player.

#### Parameters
* `PurgeTime` The time for the player to be purged 

* `Delegate` Delegate callback for the request.

#### `protected virtual void `[`OnPurgeMe`](#classURH__PurgeSubsystem_1ae082ed61d599f9b267b667f7793efb1c)`(const RallyHereAPI::FResponse_QueueMeForPurge & Resp,const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1ae082ed61d599f9b267b667f7793efb1c"></a>

Handles the response to a Purge Me call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnDequeueMe`](#classURH__PurgeSubsystem_1a7dba320ada118b170cb0105973569a95)`(const RallyHereAPI::FResponse_DequeueMeForPurge & Resp,const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a7dba320ada118b170cb0105973569a95"></a>

Handles the response to a Dequeue Me For Purge call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetMyPurgeStatus`](#classURH__PurgeSubsystem_1a4c9d03ed71e864b0ecdf732a356518ff)`(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe & Resp,const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a4c9d03ed71e864b0ecdf732a356518ff"></a>

Handles the response to a Get Purge Status call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

