# Purge <a id="group__Purge"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349)`()` | Safely tears down the subsystem.
`public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1aed569372dd43c72131f772165a7f0270)`(FDateTime PurgeTime,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Requests a purge for the local player at a specific time.
`public inline bool `[`BLUEPRINT_EnqueueMeForPurgeWithPurgeTime`](#classURH__PurgeSubsystem_1a4e9014c02e850570123fde3e2ddd9518)`(FDateTime PurgeTime,const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` | 
`public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a1e188b31403224a4e042a0fb1e75c34e)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Requests a purge for the local player, uses a configured default amount of time til purge from request.
`public inline bool `[`BLUEPRINT_EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a4ae7b5c639fe1dcd128557b1fd69b072)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` | 
`public inline bool `[`PurgeMeImmediately`](#classURH__PurgeSubsystem_1a7d0ea10c338126dd2faf76497210feef)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Requests a purge for the local player that will be resolved immediately.
`public inline bool `[`BLUEPRINT_PurgeMeImmediately`](#classURH__PurgeSubsystem_1aa5406090b8740e63e2a7fc7d80afc135)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` | 
`public bool `[`DequeueMeForPurge`](#classURH__PurgeSubsystem_1acd2725255e5612dab251e59f39c8ab56)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Requests to clear the purge request for the local play.
`public inline bool `[`BLUEPRINT_DequeueMeForPurge`](#classURH__PurgeSubsystem_1aedf8bff50126ffdcee03903974bd2c6b)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` | 
`public bool `[`QueryMyPurgeStatus`](#classURH__PurgeSubsystem_1a631aeba8f531d205667eb334bbf11944)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Requests the status of a purge for the local player.
`public inline bool `[`BLUEPRINT_QueryMyPurgeStatus`](#classURH__PurgeSubsystem_1aeda5a4776e1ad2c9145aacf3f6b876ba)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` | 
`public inline `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`GetMyPurgeStatus`](#classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40)`() const` | Gets the local players Purge Status.
`protected `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`PurgeStatus`](#classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58) | Current Purge Status.
`protected virtual void `[`OnUserChanged`](#classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a7bf1d76940ed4c4eabda2a442cae8dbe)`(TOptional< FDateTime > PurgeTime,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Queue Me For Purge call.
`protected virtual void `[`OnPurgeMe`](#classURH__PurgeSubsystem_1a9ebbd2486214812c8183d1fcf172b835)`(const RallyHereAPI::FResponse_QueueMeForPurge & Resp,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Purge Me call.
`protected virtual void `[`OnDequeueMe`](#classURH__PurgeSubsystem_1a714f733fa746fc16bfd99914e993c3ec)`(const RallyHereAPI::FResponse_DequeueMeForPurge & Resp,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Dequeue Me For Purge call.
`protected virtual void `[`OnGetMyPurgeStatus`](#classURH__PurgeSubsystem_1af3fdb8e27baa2ea46e56ac0185b316a9)`(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe & Resp,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` | Handles the response to a Get Purge Status call.

#### Members

#### `public virtual void `[`Initialize`](#classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca)`()` <a id="classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349)`()` <a id="classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349"></a>

Safely tears down the subsystem.

<br>
#### `public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1aed569372dd43c72131f772165a7f0270)`(FDateTime PurgeTime,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1aed569372dd43c72131f772165a7f0270"></a>

Requests a purge for the local player at a specific time.

#### Parameters
* `PurgeTime` The exact time to complete the purge. 

* `Delegate` Callback with the current status of the purge request.

<br>
#### `public inline bool `[`BLUEPRINT_EnqueueMeForPurgeWithPurgeTime`](#classURH__PurgeSubsystem_1a4e9014c02e850570123fde3e2ddd9518)`(FDateTime PurgeTime,const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` <a id="classURH__PurgeSubsystem_1a4e9014c02e850570123fde3e2ddd9518"></a>

<br>
#### `public inline bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a1e188b31403224a4e042a0fb1e75c34e)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a1e188b31403224a4e042a0fb1e75c34e"></a>

Requests a purge for the local player, uses a configured default amount of time til purge from request.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

<br>
#### `public inline bool `[`BLUEPRINT_EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a4ae7b5c639fe1dcd128557b1fd69b072)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` <a id="classURH__PurgeSubsystem_1a4ae7b5c639fe1dcd128557b1fd69b072"></a>

<br>
#### `public inline bool `[`PurgeMeImmediately`](#classURH__PurgeSubsystem_1a7d0ea10c338126dd2faf76497210feef)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a7d0ea10c338126dd2faf76497210feef"></a>

Requests a purge for the local player that will be resolved immediately.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

<br>
#### `public inline bool `[`BLUEPRINT_PurgeMeImmediately`](#classURH__PurgeSubsystem_1aa5406090b8740e63e2a7fc7d80afc135)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` <a id="classURH__PurgeSubsystem_1aa5406090b8740e63e2a7fc7d80afc135"></a>

<br>
#### `public bool `[`DequeueMeForPurge`](#classURH__PurgeSubsystem_1acd2725255e5612dab251e59f39c8ab56)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1acd2725255e5612dab251e59f39c8ab56"></a>

Requests to clear the purge request for the local play.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

<br>
#### `public inline bool `[`BLUEPRINT_DequeueMeForPurge`](#classURH__PurgeSubsystem_1aedf8bff50126ffdcee03903974bd2c6b)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` <a id="classURH__PurgeSubsystem_1aedf8bff50126ffdcee03903974bd2c6b"></a>

<br>
#### `public bool `[`QueryMyPurgeStatus`](#classURH__PurgeSubsystem_1a631aeba8f531d205667eb334bbf11944)`(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a631aeba8f531d205667eb334bbf11944"></a>

Requests the status of a purge for the local player.

#### Parameters
* `Delegate` Callback with the current status of the purge request.

<br>
#### `public inline bool `[`BLUEPRINT_QueryMyPurgeStatus`](#classURH__PurgeSubsystem_1aeda5a4776e1ad2c9145aacf3f6b876ba)`(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)` <a id="classURH__PurgeSubsystem_1aeda5a4776e1ad2c9145aacf3f6b876ba"></a>

<br>
#### `public inline `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`GetMyPurgeStatus`](#classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40)`() const` <a id="classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40"></a>

Gets the local players Purge Status.

<br>
#### `protected `[`FRHAPI_PurgeResponse`](models/RHAPI_PurgeResponse.md#structFRHAPI__PurgeResponse)` `[`PurgeStatus`](#classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58) <a id="classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58"></a>

Current Purge Status.

<br>
#### `protected virtual void `[`OnUserChanged`](#classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e)`()` <a id="classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

<br>
#### `protected virtual bool `[`EnqueueMeForPurge`](#classURH__PurgeSubsystem_1a7bf1d76940ed4c4eabda2a442cae8dbe)`(TOptional< FDateTime > PurgeTime,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a7bf1d76940ed4c4eabda2a442cae8dbe"></a>

Handles the response to a Queue Me For Purge call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnPurgeMe`](#classURH__PurgeSubsystem_1a9ebbd2486214812c8183d1fcf172b835)`(const RallyHereAPI::FResponse_QueueMeForPurge & Resp,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a9ebbd2486214812c8183d1fcf172b835"></a>

Handles the response to a Purge Me call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnDequeueMe`](#classURH__PurgeSubsystem_1a714f733fa746fc16bfd99914e993c3ec)`(const RallyHereAPI::FResponse_DequeueMeForPurge & Resp,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1a714f733fa746fc16bfd99914e993c3ec"></a>

Handles the response to a Dequeue Me For Purge call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnGetMyPurgeStatus`](#classURH__PurgeSubsystem_1af3fdb8e27baa2ea46e56ac0185b316a9)`(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe & Resp,FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)` <a id="classURH__PurgeSubsystem_1af3fdb8e27baa2ea46e56ac0185b316a9"></a>

Handles the response to a Get Purge Status call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
