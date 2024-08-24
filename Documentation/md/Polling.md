# group `Polling` <a id="group__Polling"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PollingSettings`](#classURH__PollingSettings) | Settings for polling.
`struct `[`FRH_PollTimerSetting`](#structFRH__PollTimerSetting) | Settings for polling timers.
`struct `[`FRH_PollControl`](#structFRH__PollControl) | Controller for the polling.
`struct `[`FRH_AutoPoller`](#structFRH__AutoPoller) | Auto Poller to poll at a given interval for updates.

---
title: URH_PollingSettings
---

```
class URH_PollingSettings
  : public UDeveloperSettings
```

Settings for polling.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` > `[`PollingIntervals`](#classURH__PollingSettings_1afa32af0887367bdda75461ba6ac6ee84) | Array of all polling timers.
`public `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` `[`DefaultPollingTimer`](#classURH__PollingSettings_1a313312890d1d7c3d52da57de091f55cc) | Default polling time.

### Members

#### `public TArray< `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` > `[`PollingIntervals`](#classURH__PollingSettings_1afa32af0887367bdda75461ba6ac6ee84) <a id="classURH__PollingSettings_1afa32af0887367bdda75461ba6ac6ee84"></a>

Array of all polling timers.

#### `public `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` `[`DefaultPollingTimer`](#classURH__PollingSettings_1a313312890d1d7c3d52da57de091f55cc) <a id="classURH__PollingSettings_1a313312890d1d7c3d52da57de091f55cc"></a>

Default polling time.

---
title: FRH_PollTimerSetting
---

Settings for polling timers.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FName `[`TimerName`](#structFRH__PollTimerSetting_1a657d464298c1a5e7d22e7658203260d6) | Name of the timer.
`public bool `[`bDisabled`](#structFRH__PollTimerSetting_1a793ee3bbfc055b1ad9f2b39b2cb0a6e8) | Name of the timer.
`public float `[`Interval`](#structFRH__PollTimerSetting_1a55e6b906507f28b3ef6c77c075944e21) | Poll interval of the timer.
`public float `[`JitterPct`](#structFRH__PollTimerSetting_1a55b5858c5df6f2db724599e6864dd191) | How much jitter to add to the timer.
`public float `[`JitterPctInitial`](#structFRH__PollTimerSetting_1af7b21bff8f9266d642ff135dd80b8314) | How much jitter to add to the timer when started.
`public inline  `[`FRH_PollTimerSetting`](#structFRH__PollTimerSetting_1a121012c1be4a6708d43d5158130b6233)`()` | Default constructor, 60 seconds timer.

### Members

#### `public FName `[`TimerName`](#structFRH__PollTimerSetting_1a657d464298c1a5e7d22e7658203260d6) <a id="structFRH__PollTimerSetting_1a657d464298c1a5e7d22e7658203260d6"></a>

Name of the timer.

#### `public bool `[`bDisabled`](#structFRH__PollTimerSetting_1a793ee3bbfc055b1ad9f2b39b2cb0a6e8) <a id="structFRH__PollTimerSetting_1a793ee3bbfc055b1ad9f2b39b2cb0a6e8"></a>

Name of the timer.

#### `public float `[`Interval`](#structFRH__PollTimerSetting_1a55e6b906507f28b3ef6c77c075944e21) <a id="structFRH__PollTimerSetting_1a55e6b906507f28b3ef6c77c075944e21"></a>

Poll interval of the timer.

#### `public float `[`JitterPct`](#structFRH__PollTimerSetting_1a55b5858c5df6f2db724599e6864dd191) <a id="structFRH__PollTimerSetting_1a55b5858c5df6f2db724599e6864dd191"></a>

How much jitter to add to the timer.

#### `public float `[`JitterPctInitial`](#structFRH__PollTimerSetting_1af7b21bff8f9266d642ff135dd80b8314) <a id="structFRH__PollTimerSetting_1af7b21bff8f9266d642ff135dd80b8314"></a>

How much jitter to add to the timer when started.

#### `public inline  `[`FRH_PollTimerSetting`](#structFRH__PollTimerSetting_1a121012c1be4a6708d43d5158130b6233)`()` <a id="structFRH__PollTimerSetting_1a121012c1be4a6708d43d5158130b6233"></a>

Default constructor, 60 seconds timer.

---
title: FRH_PollControl
---

```
struct FRH_PollControl
  : public FTickableGameObject
```

Controller for the polling.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`FRH_PollControl`](#structFRH__PollControl_1ace8a8fbca0f6d5b799036fd5a65a95c4)`()` | Default controller.
`public void `[`Register`](#structFRH__PollControl_1aaaeb3d76d8bafe7d23059af858798632)`(FRH_AutoPollerPtr Ptr)` | Register an auto poller with the Poll Controller.
`public void `[`Unregister`](#structFRH__PollControl_1ac47947b128200e98630b3d184cdfb403)`(FRH_AutoPollerPtr Ptr)` | Unregister an auto poller with the Poll Controller.
`public void `[`Unregister`](#structFRH__PollControl_1a9b9cb3bac0ea0e982102e4375787f1ce)`(const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` * Ptr)` | Used as a final unregister in the destructor, which cannot use a shared pointer.
`public inline FORCEINLINE bool `[`IsRegistered`](#structFRH__PollControl_1aa7a8cd333c5e3c5eb5bf76b2be820a24)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` | Gets if a given auto poller is registered.
`public inline FORCEINLINE bool `[`IsActive`](#structFRH__PollControl_1a6322356ef325c1d82eeeac8b6c7b37b5)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` | Gets if a given auto poller is active.
`public inline FORCEINLINE bool `[`IsWaiting`](#structFRH__PollControl_1a8120897727ca87ba2fef7142d4039ce6)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` | Gets if a given auto poller is waiting.
`public inline FORCEINLINE bool `[`IsInactive`](#structFRH__PollControl_1a6cac1746ec5e52277abbefd704eea168)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` | Gets if a given auto poller is inactive.
`public inline FORCEINLINE bool `[`IsExecuting`](#structFRH__PollControl_1a4a52dea0b012a88b9c3bf7c799e32278)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` | Gets if a given auto poller is executing.
`public void `[`SetPollInactive`](#structFRH__PollControl_1af1e3f1c75acdd2e90eece47b52611c68)`(FRH_AutoPollerPtr Ptr)` | Sets an auto poller to inactive.
`public void `[`SetPollWaiting`](#structFRH__PollControl_1a53dc02b3fe3d57841e938790a0f2400f)`(FRH_AutoPollerPtr Ptr)` | Sets an auto poller to waiting.
`public void `[`SetPollExecuting`](#structFRH__PollControl_1a51f089a2442cc1252a84e44421092b44)`(FRH_AutoPollerPtr Ptr)` | Sets an auto poller to executing.
`public virtual void `[`Tick`](#structFRH__PollControl_1aefcc577ccceea4652127dc303c2cf221)`(float DeltaTime)` | Scan Waiting list to determine if any need to be kicked off.
`public inline virtual bool `[`IsTickable`](#structFRH__PollControl_1a24ecbe464cec40d46aca8b3635457883)`() const` | Poll controller is always tickable.
`public inline virtual TStatId `[`GetStatId`](#structFRH__PollControl_1a94251dff895305e3df471335a2e8048b)`() const` | Gets the poll controller stat Id.
`public void `[`SetPollingIntervalOverride`](#structFRH__PollControl_1aff2bd0c3387cd5f52abc05b6bd29c0d1)`(const `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` & TimerSetting)` | Sets a polling interval override by name.
`public void `[`ClearPollingIntervalOverride`](#structFRH__PollControl_1a3795267e9d083d413473dd2115dac496)`(const FName & TimerName)` | Clears a polling interval override by name.
`public const `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` & `[`GetPollTimerSetting`](#structFRH__PollControl_1a929c79f134c154715085186a6aac04f3)`(const FName & TimerName) const` | Gets the polling interval setting (including overrides) by timer name.
`public inline float `[`GetPollingInterval`](#structFRH__PollControl_1a8fcdf87d451f938fb4aa157167cf6123)`(const FName & TimerName) const` | Gets a polling interval by name, or falls back to default if not found.
`public inline float `[`GetPollingIntervalWithJitter`](#structFRH__PollControl_1a26db354c7e3ad5c6623032ab8a7991f0)`(const FName & TimerName,bool bInitial) const` | Gets a polling interval by name, or falls back to default if not found. Adds configured jitter.
`protected TArray< FRH_AutoPollerWeakPtr > `[`InactivePolls`](#structFRH__PollControl_1ac825a703abab879befa89f425264f236) | Polls that are registered but not active.
`protected TArray< FRH_AutoPollerWeakPtr > `[`WaitingPolls`](#structFRH__PollControl_1aeea32be27d6874c285eea09b2ef3968c) | Polls waiting on their timer to complete, checked each tick.
`protected TArray< FRH_AutoPollerWeakPtr > `[`ExecutingPolls`](#structFRH__PollControl_1a88809408a6d07d676787104f3b011ccb) | Polls with their poll function executing.
`protected TArray< `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` > `[`PollingIntervalOverrides`](#structFRH__PollControl_1a8d9206a531b9addcea6fc1fb85e6e786) | Array of all polling timers (overrides PollingIntervals).
`protected void `[`SortWaitingPolls`](#structFRH__PollControl_1adf3e88c4d6c1ce6f7759c4f62eb7e98f)`()` | Sorts the waiting pollers for by their next poll time.

### Members

#### `public  `[`FRH_PollControl`](#structFRH__PollControl_1ace8a8fbca0f6d5b799036fd5a65a95c4)`()` <a id="structFRH__PollControl_1ace8a8fbca0f6d5b799036fd5a65a95c4"></a>

Default controller.

#### `public void `[`Register`](#structFRH__PollControl_1aaaeb3d76d8bafe7d23059af858798632)`(FRH_AutoPollerPtr Ptr)` <a id="structFRH__PollControl_1aaaeb3d76d8bafe7d23059af858798632"></a>

Register an auto poller with the Poll Controller.

#### Parameters
* `Ptr` Auto poller to register.

#### `public void `[`Unregister`](#structFRH__PollControl_1ac47947b128200e98630b3d184cdfb403)`(FRH_AutoPollerPtr Ptr)` <a id="structFRH__PollControl_1ac47947b128200e98630b3d184cdfb403"></a>

Unregister an auto poller with the Poll Controller.

#### Parameters
* `Ptr` Auto poller to unregister.

#### `public void `[`Unregister`](#structFRH__PollControl_1a9b9cb3bac0ea0e982102e4375787f1ce)`(const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` * Ptr)` <a id="structFRH__PollControl_1a9b9cb3bac0ea0e982102e4375787f1ce"></a>

Used as a final unregister in the destructor, which cannot use a shared pointer.

#### Parameters
* `Ptr` Auto poller to unregister.

#### `public inline FORCEINLINE bool `[`IsRegistered`](#structFRH__PollControl_1aa7a8cd333c5e3c5eb5bf76b2be820a24)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` <a id="structFRH__PollControl_1aa7a8cd333c5e3c5eb5bf76b2be820a24"></a>

Gets if a given auto poller is registered.

#### Parameters
* `Ptr` Auto poller to check.

#### `public inline FORCEINLINE bool `[`IsActive`](#structFRH__PollControl_1a6322356ef325c1d82eeeac8b6c7b37b5)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` <a id="structFRH__PollControl_1a6322356ef325c1d82eeeac8b6c7b37b5"></a>

Gets if a given auto poller is active.

#### Parameters
* `Ptr` Auto poller to check.

#### `public inline FORCEINLINE bool `[`IsWaiting`](#structFRH__PollControl_1a8120897727ca87ba2fef7142d4039ce6)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` <a id="structFRH__PollControl_1a8120897727ca87ba2fef7142d4039ce6"></a>

Gets if a given auto poller is waiting.

#### Parameters
* `Ptr` Auto poller to check.

#### `public inline FORCEINLINE bool `[`IsInactive`](#structFRH__PollControl_1a6cac1746ec5e52277abbefd704eea168)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` <a id="structFRH__PollControl_1a6cac1746ec5e52277abbefd704eea168"></a>

Gets if a given auto poller is inactive.

#### Parameters
* `Ptr` Auto poller to check.

#### `public inline FORCEINLINE bool `[`IsExecuting`](#structFRH__PollControl_1a4a52dea0b012a88b9c3bf7c799e32278)`(const TSharedPtr< const `[`FRH_AutoPoller`](Polling.md#structFRH__AutoPoller)` > & Ptr) const` <a id="structFRH__PollControl_1a4a52dea0b012a88b9c3bf7c799e32278"></a>

Gets if a given auto poller is executing.

#### Parameters
* `Ptr` Auto poller to check.

#### `public void `[`SetPollInactive`](#structFRH__PollControl_1af1e3f1c75acdd2e90eece47b52611c68)`(FRH_AutoPollerPtr Ptr)` <a id="structFRH__PollControl_1af1e3f1c75acdd2e90eece47b52611c68"></a>

Sets an auto poller to inactive.

#### Parameters
* `Ptr` Auto poller to update.

#### `public void `[`SetPollWaiting`](#structFRH__PollControl_1a53dc02b3fe3d57841e938790a0f2400f)`(FRH_AutoPollerPtr Ptr)` <a id="structFRH__PollControl_1a53dc02b3fe3d57841e938790a0f2400f"></a>

Sets an auto poller to waiting.

#### Parameters
* `Ptr` Auto poller to update.

#### `public void `[`SetPollExecuting`](#structFRH__PollControl_1a51f089a2442cc1252a84e44421092b44)`(FRH_AutoPollerPtr Ptr)` <a id="structFRH__PollControl_1a51f089a2442cc1252a84e44421092b44"></a>

Sets an auto poller to executing.

#### Parameters
* `Ptr` Auto poller to update.

#### `public virtual void `[`Tick`](#structFRH__PollControl_1aefcc577ccceea4652127dc303c2cf221)`(float DeltaTime)` <a id="structFRH__PollControl_1aefcc577ccceea4652127dc303c2cf221"></a>

Scan Waiting list to determine if any need to be kicked off.

#### `public inline virtual bool `[`IsTickable`](#structFRH__PollControl_1a24ecbe464cec40d46aca8b3635457883)`() const` <a id="structFRH__PollControl_1a24ecbe464cec40d46aca8b3635457883"></a>

Poll controller is always tickable.

#### `public inline virtual TStatId `[`GetStatId`](#structFRH__PollControl_1a94251dff895305e3df471335a2e8048b)`() const` <a id="structFRH__PollControl_1a94251dff895305e3df471335a2e8048b"></a>

Gets the poll controller stat Id.

#### `public void `[`SetPollingIntervalOverride`](#structFRH__PollControl_1aff2bd0c3387cd5f52abc05b6bd29c0d1)`(const `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` & TimerSetting)` <a id="structFRH__PollControl_1aff2bd0c3387cd5f52abc05b6bd29c0d1"></a>

Sets a polling interval override by name.

#### Parameters
* `TimerName` Name of Timer to set interval for. 

* `Interval` Override Duration

#### `public void `[`ClearPollingIntervalOverride`](#structFRH__PollControl_1a3795267e9d083d413473dd2115dac496)`(const FName & TimerName)` <a id="structFRH__PollControl_1a3795267e9d083d413473dd2115dac496"></a>

Clears a polling interval override by name.

#### Parameters
* `TimerName` Name of Timer to set interval for.

#### `public const `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` & `[`GetPollTimerSetting`](#structFRH__PollControl_1a929c79f134c154715085186a6aac04f3)`(const FName & TimerName) const` <a id="structFRH__PollControl_1a929c79f134c154715085186a6aac04f3"></a>

Gets the polling interval setting (including overrides) by timer name.

#### Parameters
* `TimerName` Name of Timer to set interval for. 

#### Returns
Polling interval setting

#### `public inline float `[`GetPollingInterval`](#structFRH__PollControl_1a8fcdf87d451f938fb4aa157167cf6123)`(const FName & TimerName) const` <a id="structFRH__PollControl_1a8fcdf87d451f938fb4aa157167cf6123"></a>

Gets a polling interval by name, or falls back to default if not found.

#### Parameters
* `TimerName` Name of Timer to get interval for. 

#### Returns
Value of the polling interval

#### `public inline float `[`GetPollingIntervalWithJitter`](#structFRH__PollControl_1a26db354c7e3ad5c6623032ab8a7991f0)`(const FName & TimerName,bool bInitial) const` <a id="structFRH__PollControl_1a26db354c7e3ad5c6623032ab8a7991f0"></a>

Gets a polling interval by name, or falls back to default if not found. Adds configured jitter.

#### Parameters
* `TimerName` Name of Timer to get interval for.

#### `protected TArray< FRH_AutoPollerWeakPtr > `[`InactivePolls`](#structFRH__PollControl_1ac825a703abab879befa89f425264f236) <a id="structFRH__PollControl_1ac825a703abab879befa89f425264f236"></a>

Polls that are registered but not active.

#### `protected TArray< FRH_AutoPollerWeakPtr > `[`WaitingPolls`](#structFRH__PollControl_1aeea32be27d6874c285eea09b2ef3968c) <a id="structFRH__PollControl_1aeea32be27d6874c285eea09b2ef3968c"></a>

Polls waiting on their timer to complete, checked each tick.

#### `protected TArray< FRH_AutoPollerWeakPtr > `[`ExecutingPolls`](#structFRH__PollControl_1a88809408a6d07d676787104f3b011ccb) <a id="structFRH__PollControl_1a88809408a6d07d676787104f3b011ccb"></a>

Polls with their poll function executing.

#### `protected TArray< `[`FRH_PollTimerSetting`](Polling.md#structFRH__PollTimerSetting)` > `[`PollingIntervalOverrides`](#structFRH__PollControl_1a8d9206a531b9addcea6fc1fb85e6e786) <a id="structFRH__PollControl_1a8d9206a531b9addcea6fc1fb85e6e786"></a>

Array of all polling timers (overrides PollingIntervals).

#### `protected void `[`SortWaitingPolls`](#structFRH__PollControl_1adf3e88c4d6c1ce6f7759c4f62eb7e98f)`()` <a id="structFRH__PollControl_1adf3e88c4d6c1ce6f7759c4f62eb7e98f"></a>

Sorts the waiting pollers for by their next poll time.

---
title: FRH_AutoPoller
---

```
struct FRH_AutoPoller
  : public TSharedFromThis< FRH_AutoPoller >
```

Auto Poller to poll at a given interval for updates.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public friend `[`FRH_PollControl`](#structFRH__AutoPoller_1a54996f25797ab347a029ec1247ff4819) | 
`public  `[`FRH_AutoPoller`](#structFRH__AutoPoller_1ace8f443c029e897ee9ca524476cccc3a)`()` | Exposed for the shared pointer interface, please use CreateAutoPoller for construction.
`public virtual  `[`~FRH_AutoPoller`](#structFRH__AutoPoller_1a00769b26af3c16c8dd0d1776782850ab)`()` | Default descrutor.
`public void `[`StartPoll`](#structFRH__AutoPoller_1a62e083464b64a21638917e4c432ae217)`(const FRH_PollFunc & InDelegate,const FName InTimerName,bool bImmediate,bool bCheckDisabledFlag)` | Starts a poll, only stores timer name, restart will always query settings for that timer name.
`public void `[`StopPoll`](#structFRH__AutoPoller_1a5068e2702f7f5995734ac17fa861db6b)`()` | Stops the poller.
`public void `[`DeferPollTimer`](#structFRH__AutoPoller_1a2ced322da767eaf7d6ac1ae9969e2ec2)`()` | Manually defer the poll timer (ex: out of band update). Safe to call at all times as it does not change state, only increments NextPollTime.
`public void `[`ExecutePoll`](#structFRH__AutoPoller_1addc2a7551be1a441f17dce3f463142bd)`()` | Executes the poller.
`public inline FORCEINLINE bool `[`IsRegistered`](#structFRH__AutoPoller_1afc1f75ea4c14720ebacf8d03ed12f2c3)`() const` | Gets if the poller is registered with poll control.
`public inline FORCEINLINE bool `[`IsActive`](#structFRH__AutoPoller_1a06ec9400533eb366109f4f9e45e43e8c)`() const` | Gets if the poller is active with poll control.
`public inline FORCEINLINE bool `[`IsWaiting`](#structFRH__AutoPoller_1a982bcbc2e6dff3515a0df4e72e965e3a)`() const` | Gets if the poller is waiting with poll control.
`public inline FORCEINLINE bool `[`IsInactive`](#structFRH__AutoPoller_1af32eb09dfddca17516e4754e6d4837f2)`() const` | Gets if the poller is inactive with poll control.
`public inline FORCEINLINE bool `[`IsExecuting`](#structFRH__AutoPoller_1a114832c16a15985551fa3593ce5a2db1)`() const` | Gets if the poller is executing with poll control.
`public inline FORCEINLINE const FDateTime & `[`GetNextPollTime`](#structFRH__AutoPoller_1a0169c89c621ccfed98114885dc681baf)`() const` | Gets the next poll time.
`public inline FORCEINLINE float `[`GetTimeRemaining`](#structFRH__AutoPoller_1ae592de2857f70bbaebb936a54d0ae11b)`()` | Gets the poll time remaining in seconds. Returns -1.f if the poll is inactive or executing.
`protected FDateTime `[`NextPollTime`](#structFRH__AutoPoller_1aa1fe3300b55d50dcbf73e89f0ff22d4d) | When the next poll should run.
`protected FRH_PollFunc `[`PollFunc`](#structFRH__AutoPoller_1acf0883c8af80dde4c365138ff19a14db) | Call when the poll timer fires.
`protected FName `[`TimerName`](#structFRH__AutoPoller_1aeda54a7e4ade752fd041708f84bdc6d7) | Name of the timer to use for polling.
`protected void `[`OnPollFinished`](#structFRH__AutoPoller_1a0e60630e2ac42b73e55687419b92250f)`(bool bSuccess,bool bResetTimer)` | Called when a poll finishes.
`protected void `[`RestartTimer`](#structFRH__AutoPoller_1ab9fc9e5170f2206fe71209e4f8ed776e)`()` | 
`protected void `[`Register`](#structFRH__AutoPoller_1aa2c0d3621f9e073cb84b7d06b516e6aa)`()` | Registers with poll control (does not start timer).
`protected void `[`Unregister`](#structFRH__AutoPoller_1ae6af4c99cfef6203d6d754f481af8ca3)`()` | Unregisters with poll control.

### Members

#### `public friend `[`FRH_PollControl`](#structFRH__AutoPoller_1a54996f25797ab347a029ec1247ff4819) <a id="structFRH__AutoPoller_1a54996f25797ab347a029ec1247ff4819"></a>

#### `public  `[`FRH_AutoPoller`](#structFRH__AutoPoller_1ace8f443c029e897ee9ca524476cccc3a)`()` <a id="structFRH__AutoPoller_1ace8f443c029e897ee9ca524476cccc3a"></a>

Exposed for the shared pointer interface, please use CreateAutoPoller for construction.

#### `public virtual  `[`~FRH_AutoPoller`](#structFRH__AutoPoller_1a00769b26af3c16c8dd0d1776782850ab)`()` <a id="structFRH__AutoPoller_1a00769b26af3c16c8dd0d1776782850ab"></a>

Default descrutor.

#### `public void `[`StartPoll`](#structFRH__AutoPoller_1a62e083464b64a21638917e4c432ae217)`(const FRH_PollFunc & InDelegate,const FName InTimerName,bool bImmediate,bool bCheckDisabledFlag)` <a id="structFRH__AutoPoller_1a62e083464b64a21638917e4c432ae217"></a>

Starts a poll, only stores timer name, restart will always query settings for that timer name.

#### Parameters
* `InDelegate` Delegate to call when the poll timer fires. 

* `InTimerName` Name of Timer to get interval from. 

* `bImmediate` If the poll should start immediately. 

* `bCheckDisabledFlag` If the poll should check the disabled flag before starting (in which case state will be set to inactive)

#### `public void `[`StopPoll`](#structFRH__AutoPoller_1a5068e2702f7f5995734ac17fa861db6b)`()` <a id="structFRH__AutoPoller_1a5068e2702f7f5995734ac17fa861db6b"></a>

Stops the poller.

#### `public void `[`DeferPollTimer`](#structFRH__AutoPoller_1a2ced322da767eaf7d6ac1ae9969e2ec2)`()` <a id="structFRH__AutoPoller_1a2ced322da767eaf7d6ac1ae9969e2ec2"></a>

Manually defer the poll timer (ex: out of band update). Safe to call at all times as it does not change state, only increments NextPollTime.

#### `public void `[`ExecutePoll`](#structFRH__AutoPoller_1addc2a7551be1a441f17dce3f463142bd)`()` <a id="structFRH__AutoPoller_1addc2a7551be1a441f17dce3f463142bd"></a>

Executes the poller.

#### `public inline FORCEINLINE bool `[`IsRegistered`](#structFRH__AutoPoller_1afc1f75ea4c14720ebacf8d03ed12f2c3)`() const` <a id="structFRH__AutoPoller_1afc1f75ea4c14720ebacf8d03ed12f2c3"></a>

Gets if the poller is registered with poll control.

#### `public inline FORCEINLINE bool `[`IsActive`](#structFRH__AutoPoller_1a06ec9400533eb366109f4f9e45e43e8c)`() const` <a id="structFRH__AutoPoller_1a06ec9400533eb366109f4f9e45e43e8c"></a>

Gets if the poller is active with poll control.

#### `public inline FORCEINLINE bool `[`IsWaiting`](#structFRH__AutoPoller_1a982bcbc2e6dff3515a0df4e72e965e3a)`() const` <a id="structFRH__AutoPoller_1a982bcbc2e6dff3515a0df4e72e965e3a"></a>

Gets if the poller is waiting with poll control.

#### `public inline FORCEINLINE bool `[`IsInactive`](#structFRH__AutoPoller_1af32eb09dfddca17516e4754e6d4837f2)`() const` <a id="structFRH__AutoPoller_1af32eb09dfddca17516e4754e6d4837f2"></a>

Gets if the poller is inactive with poll control.

#### `public inline FORCEINLINE bool `[`IsExecuting`](#structFRH__AutoPoller_1a114832c16a15985551fa3593ce5a2db1)`() const` <a id="structFRH__AutoPoller_1a114832c16a15985551fa3593ce5a2db1"></a>

Gets if the poller is executing with poll control.

#### `public inline FORCEINLINE const FDateTime & `[`GetNextPollTime`](#structFRH__AutoPoller_1a0169c89c621ccfed98114885dc681baf)`() const` <a id="structFRH__AutoPoller_1a0169c89c621ccfed98114885dc681baf"></a>

Gets the next poll time.

#### `public inline FORCEINLINE float `[`GetTimeRemaining`](#structFRH__AutoPoller_1ae592de2857f70bbaebb936a54d0ae11b)`()` <a id="structFRH__AutoPoller_1ae592de2857f70bbaebb936a54d0ae11b"></a>

Gets the poll time remaining in seconds. Returns -1.f if the poll is inactive or executing.

#### `protected FDateTime `[`NextPollTime`](#structFRH__AutoPoller_1aa1fe3300b55d50dcbf73e89f0ff22d4d) <a id="structFRH__AutoPoller_1aa1fe3300b55d50dcbf73e89f0ff22d4d"></a>

When the next poll should run.

#### `protected FRH_PollFunc `[`PollFunc`](#structFRH__AutoPoller_1acf0883c8af80dde4c365138ff19a14db) <a id="structFRH__AutoPoller_1acf0883c8af80dde4c365138ff19a14db"></a>

Call when the poll timer fires.

#### `protected FName `[`TimerName`](#structFRH__AutoPoller_1aeda54a7e4ade752fd041708f84bdc6d7) <a id="structFRH__AutoPoller_1aeda54a7e4ade752fd041708f84bdc6d7"></a>

Name of the timer to use for polling.

#### `protected void `[`OnPollFinished`](#structFRH__AutoPoller_1a0e60630e2ac42b73e55687419b92250f)`(bool bSuccess,bool bResetTimer)` <a id="structFRH__AutoPoller_1a0e60630e2ac42b73e55687419b92250f"></a>

Called when a poll finishes.

#### Parameters
* `bSuccess` If the poll was successful. 

* `bResetTimer` If the timer should be reset.

#### `protected void `[`RestartTimer`](#structFRH__AutoPoller_1ab9fc9e5170f2206fe71209e4f8ed776e)`()` <a id="structFRH__AutoPoller_1ab9fc9e5170f2206fe71209e4f8ed776e"></a>

#### `protected void `[`Register`](#structFRH__AutoPoller_1aa2c0d3621f9e073cb84b7d06b516e6aa)`()` <a id="structFRH__AutoPoller_1aa2c0d3621f9e073cb84b7d06b516e6aa"></a>

Registers with poll control (does not start timer).

#### `protected void `[`Unregister`](#structFRH__AutoPoller_1ae6af4c99cfef6203d6d754f481af8ca3)`()` <a id="structFRH__AutoPoller_1ae6af4c99cfef6203d6d754f481af8ca3"></a>

Unregisters with poll control.

