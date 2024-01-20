---
title: FRH_PollControl Struct
---
Inherits from FTickableGameObject

Controller for the polling.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< FRH_AutoPollerWeakPtr >|[InactivePolls](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1ac825a703abab879befa89f425264f236)|Polls that are registered but not active.|
|TArray< FRH_AutoPollerWeakPtr >|[WaitingPolls](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1aeea32be27d6874c285eea09b2ef3968c)|Polls waiting on their timer to complete, checked each tick.|
|TArray< FRH_AutoPollerWeakPtr >|[ExecutingPolls](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a88809408a6d07d676787104f3b011ccb)|Polls with their poll function executing.|
|TArray< [FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting) >|[PollingIntervalOverrides](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a8d9206a531b9addcea6fc1fb85e6e786)|Array of all polling timers (overrides PollingIntervals).|
|[FRH_PollControl](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl) *|[Singleton](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1ab7d3cf2120974f395fde93657710c50f)|Singleton for the poll controller.|
|void|[SortWaitingPolls](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1adf3e88c4d6c1ce6f7759c4f62eb7e98f)()|Sorts the waiting pollers for by their next poll time.|
||[FRH_PollControl](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1ace8a8fbca0f6d5b799036fd5a65a95c4)()|Default controller.|
|void|[Register](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1aaaeb3d76d8bafe7d23059af858798632)(FRH_AutoPollerPtr Ptr)|Register an auto poller with the Poll Controller.|
|void|[Unregister](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1ac47947b128200e98630b3d184cdfb403)(FRH_AutoPollerPtr Ptr)|Unregister an auto poller with the Poll Controller.|
|void|[Unregister](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a9b9cb3bac0ea0e982102e4375787f1ce)(const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) * Ptr)|Used as a final unregister in the destructor, which cannot use a shared pointer.|
|FORCEINLINE bool|[IsRegistered](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1aa7a8cd333c5e3c5eb5bf76b2be820a24)(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)|Gets if a given auto poller is registered.|
|FORCEINLINE bool|[IsActive](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a6322356ef325c1d82eeeac8b6c7b37b5)(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)|Gets if a given auto poller is active.|
|FORCEINLINE bool|[IsWaiting](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a8120897727ca87ba2fef7142d4039ce6)(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)|Gets if a given auto poller is waiting.|
|FORCEINLINE bool|[IsInactive](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a6cac1746ec5e52277abbefd704eea168)(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)|Gets if a given auto poller is inactive.|
|FORCEINLINE bool|[IsExecuting](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a4a52dea0b012a88b9c3bf7c799e32278)(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)|Gets if a given auto poller is executing.|
|void|[SetPollInactive](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1af1e3f1c75acdd2e90eece47b52611c68)(FRH_AutoPollerPtr Ptr)|Sets an auto poller to inactive.|
|void|[SetPollWaiting](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a53dc02b3fe3d57841e938790a0f2400f)(FRH_AutoPollerPtr Ptr)|Sets an auto poller to waiting.|
|void|[SetPollExecuting](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a51f089a2442cc1252a84e44421092b44)(FRH_AutoPollerPtr Ptr)|Sets an auto poller to executing.|
|void|[Tick](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1aefcc577ccceea4652127dc303c2cf221)(float DeltaTime)|Scan Waiting list to determine if any need to be kicked off.|
|bool|[IsTickable](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a24ecbe464cec40d46aca8b3635457883)()|Poll controller is always tickable.|
|TStatId|[GetStatId](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a94251dff895305e3df471335a2e8048b)()||
|void|[SetPollingIntervalOverride](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1aff2bd0c3387cd5f52abc05b6bd29c0d1)(const [FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting) & TimerSetting)|Sets a polling interval override by name.|
|void|[ClearPollingIntervalOverride](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a3795267e9d083d413473dd2115dac496)(const FName & TimerName)|Clears a polling interval override by name.|
|const [FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting) &|[GetPollTimerSetting](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a929c79f134c154715085186a6aac04f3)(const FName & TimerName)|Gets the polling interval setting (including overrides) by timer name.|
|float|[GetPollingInterval](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a8fcdf87d451f938fb4aa157167cf6123)(const FName & TimerName)|Gets a polling interval by name, or falls back to default if not found.|
|float|[GetPollingIntervalWithJitter](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a26db354c7e3ad5c6623032ab8a7991f0)(const FName & TimerName, bool bInitial)|Gets a polling interval by name, or falls back to default if not found. Adds configured jitter.|
|void|[Initialize](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a853bf8f17aeed7433c129d4ad20893b9)()|Initalize the poll controller singleton.|
|void|[Uninitialize](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a962194614b8cca261b6b7b1ebdef67ab)()|Uninitalize the poll controller singleton.|
|[FRH_PollControl](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl) *|[Get](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1aee60d168e2c7d7dec9fc09d404c11210)()|Get the poll controller singleton.|
|TSharedRef< [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) >|[CreateAutoPoller](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl_1a08d67fcaedeb90cbe83352f33c928fac)()|Create an auto poller and return it.|
## Protected Attributes



### `InactivePolls` <a id="structFRH__PollControl_1ac825a703abab879befa89f425264f236"></a>

`TArray<FRH_AutoPollerWeakPtr> FRH_PollControl::InactivePolls`

Polls that are registered but not active.




### `WaitingPolls` <a id="structFRH__PollControl_1aeea32be27d6874c285eea09b2ef3968c"></a>

`TArray<FRH_AutoPollerWeakPtr> FRH_PollControl::WaitingPolls`

Polls waiting on their timer to complete, checked each tick.




### `ExecutingPolls` <a id="structFRH__PollControl_1a88809408a6d07d676787104f3b011ccb"></a>

`TArray<FRH_AutoPollerWeakPtr> FRH_PollControl::ExecutingPolls`

Polls with their poll function executing.




### `PollingIntervalOverrides` <a id="structFRH__PollControl_1a8d9206a531b9addcea6fc1fb85e6e786"></a>

`TArray<FRH_PollTimerSetting> FRH_PollControl::PollingIntervalOverrides`

Array of all polling timers (overrides PollingIntervals).





## Protected Static Attributes



### `Singleton` <a id="structFRH__PollControl_1ab7d3cf2120974f395fde93657710c50f"></a>

`FRH_PollControl* FRH_PollControl::Singleton`

Singleton for the poll controller.





## Protected Functions



### `SortWaitingPolls` <a id="structFRH__PollControl_1adf3e88c4d6c1ce6f7759c4f62eb7e98f"></a>

void SortWaitingPolls()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sorts the waiting pollers for by their next poll time.





## Public Functions



### `FRH_PollControl` <a id="structFRH__PollControl_1ace8a8fbca0f6d5b799036fd5a65a95c4"></a>

 FRH_PollControl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default controller.




### `Register` <a id="structFRH__PollControl_1aaaeb3d76d8bafe7d23059af858798632"></a>

void Register(FRH_AutoPollerPtr Ptr)

#### Parameters

| Type | Name |
|------|------|
|FRH_AutoPollerPtr|Ptr|

#### Description

Register an auto poller with the Poll Controller.


#### Parameters

Ptr
: Auto poller to register. 



### `Unregister` <a id="structFRH__PollControl_1ac47947b128200e98630b3d184cdfb403"></a>

void Unregister(FRH_AutoPollerPtr Ptr)

#### Parameters

| Type | Name |
|------|------|
|FRH_AutoPollerPtr|Ptr|

#### Description

Unregister an auto poller with the Poll Controller.


#### Parameters

Ptr
: Auto poller to unregister. 



### `Unregister` <a id="structFRH__PollControl_1a9b9cb3bac0ea0e982102e4375787f1ce"></a>

void Unregister(const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) * Ptr)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) *|Ptr|

#### Description

Used as a final unregister in the destructor, which cannot use a shared pointer.


#### Parameters

Ptr
: Auto poller to unregister. 



### `IsRegistered` <a id="structFRH__PollControl_1aa7a8cd333c5e3c5eb5bf76b2be820a24"></a>

FORCEINLINE bool IsRegistered(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > &|Ptr|

#### Description

Gets if a given auto poller is registered.


#### Parameters

Ptr
: Auto poller to check. 



### `IsActive` <a id="structFRH__PollControl_1a6322356ef325c1d82eeeac8b6c7b37b5"></a>

FORCEINLINE bool IsActive(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > &|Ptr|

#### Description

Gets if a given auto poller is active.


#### Parameters

Ptr
: Auto poller to check. 



### `IsWaiting` <a id="structFRH__PollControl_1a8120897727ca87ba2fef7142d4039ce6"></a>

FORCEINLINE bool IsWaiting(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > &|Ptr|

#### Description

Gets if a given auto poller is waiting.


#### Parameters

Ptr
: Auto poller to check. 



### `IsInactive` <a id="structFRH__PollControl_1a6cac1746ec5e52277abbefd704eea168"></a>

FORCEINLINE bool IsInactive(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > &|Ptr|

#### Description

Gets if a given auto poller is inactive.


#### Parameters

Ptr
: Auto poller to check. 



### `IsExecuting` <a id="structFRH__PollControl_1a4a52dea0b012a88b9c3bf7c799e32278"></a>

FORCEINLINE bool IsExecuting(const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > & Ptr)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< const [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > &|Ptr|

#### Description

Gets if a given auto poller is executing.


#### Parameters

Ptr
: Auto poller to check. 



### `SetPollInactive` <a id="structFRH__PollControl_1af1e3f1c75acdd2e90eece47b52611c68"></a>

void SetPollInactive(FRH_AutoPollerPtr Ptr)

#### Parameters

| Type | Name |
|------|------|
|FRH_AutoPollerPtr|Ptr|

#### Description

Sets an auto poller to inactive.


#### Parameters

Ptr
: Auto poller to update. 



### `SetPollWaiting` <a id="structFRH__PollControl_1a53dc02b3fe3d57841e938790a0f2400f"></a>

void SetPollWaiting(FRH_AutoPollerPtr Ptr)

#### Parameters

| Type | Name |
|------|------|
|FRH_AutoPollerPtr|Ptr|

#### Description

Sets an auto poller to waiting.


#### Parameters

Ptr
: Auto poller to update. 



### `SetPollExecuting` <a id="structFRH__PollControl_1a51f089a2442cc1252a84e44421092b44"></a>

void SetPollExecuting(FRH_AutoPollerPtr Ptr)

#### Parameters

| Type | Name |
|------|------|
|FRH_AutoPollerPtr|Ptr|

#### Description

Sets an auto poller to executing.


#### Parameters

Ptr
: Auto poller to update. 



### `Tick` <a id="structFRH__PollControl_1aefcc577ccceea4652127dc303c2cf221"></a>

void Tick(float DeltaTime)

#### Parameters

| Type | Name |
|------|------|
|float|DeltaTime|

#### Description

Scan Waiting list to determine if any need to be kicked off.




### `IsTickable` <a id="structFRH__PollControl_1a24ecbe464cec40d46aca8b3635457883"></a>

bool IsTickable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Poll controller is always tickable.




### `GetStatId` <a id="structFRH__PollControl_1a94251dff895305e3df471335a2e8048b"></a>

TStatId GetStatId()

#### Parameters

| Type | Name |
|------|------|

#### Description



Gets the poll controller stat Id. 



### `SetPollingIntervalOverride` <a id="structFRH__PollControl_1aff2bd0c3387cd5f52abc05b6bd29c0d1"></a>

void SetPollingIntervalOverride(const [FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting) & TimerSetting)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting) &|TimerSetting|

#### Description

Sets a polling interval override by name.


#### Parameters

TimerName
: Name of Timer to set interval for. 
Interval
: Override Duration 



### `ClearPollingIntervalOverride` <a id="structFRH__PollControl_1a3795267e9d083d413473dd2115dac496"></a>

void ClearPollingIntervalOverride(const FName & TimerName)

#### Parameters

| Type | Name |
|------|------|
|const FName &|TimerName|

#### Description

Clears a polling interval override by name.


#### Parameters

TimerName
: Name of Timer to set interval for. 



### `GetPollTimerSetting` <a id="structFRH__PollControl_1a929c79f134c154715085186a6aac04f3"></a>

const [FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting) & GetPollTimerSetting(const FName & TimerName)

#### Parameters

| Type | Name |
|------|------|
|const FName &|TimerName|

#### Description

Gets the polling interval setting (including overrides) by timer name.


#### Parameters

TimerName
: Name of Timer to set interval for. 

#### Returns
Polling interval setting 



### `GetPollingInterval` <a id="structFRH__PollControl_1a8fcdf87d451f938fb4aa157167cf6123"></a>

float GetPollingInterval(const FName & TimerName)

#### Parameters

| Type | Name |
|------|------|
|const FName &|TimerName|

#### Description

Gets a polling interval by name, or falls back to default if not found.


#### Parameters

TimerName
: Name of Timer to get interval for. 

#### Returns
Value of the polling interval 



### `GetPollingIntervalWithJitter` <a id="structFRH__PollControl_1a26db354c7e3ad5c6623032ab8a7991f0"></a>

float GetPollingIntervalWithJitter(const FName & TimerName, bool bInitial)

#### Parameters

| Type | Name |
|------|------|
|const FName &|TimerName|
|bool|bInitial|

#### Description

Gets a polling interval by name, or falls back to default if not found. Adds configured jitter.


#### Parameters

TimerName
: Name of Timer to get interval for. 




## Public Static Functions



### `Initialize` <a id="structFRH__PollControl_1a853bf8f17aeed7433c129d4ad20893b9"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initalize the poll controller singleton.




### `Uninitialize` <a id="structFRH__PollControl_1a962194614b8cca261b6b7b1ebdef67ab"></a>

void Uninitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Uninitalize the poll controller singleton.




### `Get` <a id="structFRH__PollControl_1aee60d168e2c7d7dec9fc09d404c11210"></a>

[FRH_PollControl](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl) * Get()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the poll controller singleton.




### `CreateAutoPoller` <a id="structFRH__PollControl_1a08d67fcaedeb90cbe83352f33c928fac"></a>

TSharedRef< [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > CreateAutoPoller()

#### Parameters

| Type | Name |
|------|------|

#### Description

Create an auto poller and return it.





