---
title: FRH_AutoPoller Struct
---
Inherits from TSharedFromThis< FRH_AutoPoller >

Auto Poller to poll at a given interval for updates.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FDateTime|[NextPollTime](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1aa1fe3300b55d50dcbf73e89f0ff22d4d)|When the next poll should run.|
|FRH_PollFunc|[PollFunc](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1acf0883c8af80dde4c365138ff19a14db)|Call when the poll timer fires.|
|FName|[TimerName](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1aeda54a7e4ade752fd041708f84bdc6d7)|Name of the timer to use for polling.|
|friend|[FRH_PollControl](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a54996f25797ab347a029ec1247ff4819)||
|void|[OnPollFinished](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a0e60630e2ac42b73e55687419b92250f)(bool bSuccess, bool bResetTimer)|Called when a poll finishes.|
|void|[RestartTimer](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1ab9fc9e5170f2206fe71209e4f8ed776e)()||
|void|[Register](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1aa2c0d3621f9e073cb84b7d06b516e6aa)()|Registers with poll control (does not start timer).|
|void|[Unregister](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1ae6af4c99cfef6203d6d754f481af8ca3)()|Unregisters with poll control.|
||[FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1ace8f443c029e897ee9ca524476cccc3a)()|Exposed for the shared pointer interface, please use CreateAutoPoller for construction.|
||[~FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a00769b26af3c16c8dd0d1776782850ab)()|Default descrutor.|
|void|[StartPoll](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a7d958ab58d062ff6e8ff55b2cbbccbf3)(const FRH_PollFunc & InDelegate, const FName InTimerName, bool bImmediate)|Starts a poll, only stores timer name, restart will always query settings for that timer name.|
|void|[StopPoll](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a5068e2702f7f5995734ac17fa861db6b)()|Stops the poller.|
|void|[DeferPollTimer](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a2ced322da767eaf7d6ac1ae9969e2ec2)()|Manually defer the poll timer (ex: out of band update). Safe to call at all times as it does not change state, only increments NextPollTime.|
|void|[ExecutePoll](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1addc2a7551be1a441f17dce3f463142bd)()|Executes the poller.|
|FORCEINLINE bool|[IsRegistered](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1afc1f75ea4c14720ebacf8d03ed12f2c3)()|Gets if the poller is registered with poll control.|
|FORCEINLINE bool|[IsActive](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a06ec9400533eb366109f4f9e45e43e8c)()|Gets if the poller is active with poll control.|
|FORCEINLINE bool|[IsWaiting](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a982bcbc2e6dff3515a0df4e72e965e3a)()|Gets if the poller is waiting with poll control.|
|FORCEINLINE bool|[IsInactive](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1af32eb09dfddca17516e4754e6d4837f2)()|Gets if the poller is inactive with poll control.|
|FORCEINLINE bool|[IsExecuting](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a114832c16a15985551fa3593ce5a2db1)()|Gets if the poller is executing with poll control.|
|FORCEINLINE const FDateTime &|[GetNextPollTime](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1a0169c89c621ccfed98114885dc681baf)()|Gets the next poll time.|
|FORCEINLINE float|[GetTimeRemaining](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller_1ae592de2857f70bbaebb936a54d0ae11b)()|Gets the poll time remaining in seconds. Returns -1.f if the poll is inactive or executing.|
## Protected Attributes



### `NextPollTime` <a id="structFRH__AutoPoller_1aa1fe3300b55d50dcbf73e89f0ff22d4d"></a>

`FDateTime FRH_AutoPoller::NextPollTime`

When the next poll should run.




### `PollFunc` <a id="structFRH__AutoPoller_1acf0883c8af80dde4c365138ff19a14db"></a>

`FRH_PollFunc FRH_AutoPoller::PollFunc`

Call when the poll timer fires.




### `TimerName` <a id="structFRH__AutoPoller_1aeda54a7e4ade752fd041708f84bdc6d7"></a>

`FName FRH_AutoPoller::TimerName`

Name of the timer to use for polling.





## Public Attributes



### `FRH_PollControl` <a id="structFRH__AutoPoller_1a54996f25797ab347a029ec1247ff4819"></a>

`friend FRH_AutoPoller::FRH_PollControl`







## Protected Functions



### `OnPollFinished` <a id="structFRH__AutoPoller_1a0e60630e2ac42b73e55687419b92250f"></a>

void OnPollFinished(bool bSuccess, bool bResetTimer)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|bool|bResetTimer|

#### Description

Called when a poll finishes.


#### Parameters

bSuccess
: If the poll was successful. 
bResetTimer
: If the timer should be reset. 



### `RestartTimer` <a id="structFRH__AutoPoller_1ab9fc9e5170f2206fe71209e4f8ed776e"></a>

void RestartTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Register` <a id="structFRH__AutoPoller_1aa2c0d3621f9e073cb84b7d06b516e6aa"></a>

void Register()

#### Parameters

| Type | Name |
|------|------|

#### Description

Registers with poll control (does not start timer).




### `Unregister` <a id="structFRH__AutoPoller_1ae6af4c99cfef6203d6d754f481af8ca3"></a>

void Unregister()

#### Parameters

| Type | Name |
|------|------|

#### Description

Unregisters with poll control.





## Public Functions



### `FRH_AutoPoller` <a id="structFRH__AutoPoller_1ace8f443c029e897ee9ca524476cccc3a"></a>

 FRH_AutoPoller()

#### Parameters

| Type | Name |
|------|------|

#### Description

Exposed for the shared pointer interface, please use CreateAutoPoller for construction.




### `~FRH_AutoPoller` <a id="structFRH__AutoPoller_1a00769b26af3c16c8dd0d1776782850ab"></a>

 ~FRH_AutoPoller()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default descrutor.




### `StartPoll` <a id="structFRH__AutoPoller_1a7d958ab58d062ff6e8ff55b2cbbccbf3"></a>

void StartPoll(const FRH_PollFunc & InDelegate, const FName InTimerName, bool bImmediate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollFunc &|InDelegate|
|const FName|InTimerName|
|bool|bImmediate|

#### Description

Starts a poll, only stores timer name, restart will always query settings for that timer name.


#### Parameters

InDelegate
: Delegate to call when the poll timer fires. 
InTimerName
: Name of Timer to get interval from. 
bImmediate
: If the poll should start immediately. 



### `StopPoll` <a id="structFRH__AutoPoller_1a5068e2702f7f5995734ac17fa861db6b"></a>

void StopPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stops the poller.




### `DeferPollTimer` <a id="structFRH__AutoPoller_1a2ced322da767eaf7d6ac1ae9969e2ec2"></a>

void DeferPollTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Manually defer the poll timer (ex: out of band update). Safe to call at all times as it does not change state, only increments NextPollTime.




### `ExecutePoll` <a id="structFRH__AutoPoller_1addc2a7551be1a441f17dce3f463142bd"></a>

void ExecutePoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Executes the poller.




### `IsRegistered` <a id="structFRH__AutoPoller_1afc1f75ea4c14720ebacf8d03ed12f2c3"></a>

FORCEINLINE bool IsRegistered()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller is registered with poll control.




### `IsActive` <a id="structFRH__AutoPoller_1a06ec9400533eb366109f4f9e45e43e8c"></a>

FORCEINLINE bool IsActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller is active with poll control.




### `IsWaiting` <a id="structFRH__AutoPoller_1a982bcbc2e6dff3515a0df4e72e965e3a"></a>

FORCEINLINE bool IsWaiting()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller is waiting with poll control.




### `IsInactive` <a id="structFRH__AutoPoller_1af32eb09dfddca17516e4754e6d4837f2"></a>

FORCEINLINE bool IsInactive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller is inactive with poll control.




### `IsExecuting` <a id="structFRH__AutoPoller_1a114832c16a15985551fa3593ce5a2db1"></a>

FORCEINLINE bool IsExecuting()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller is executing with poll control.




### `GetNextPollTime` <a id="structFRH__AutoPoller_1a0169c89c621ccfed98114885dc681baf"></a>

FORCEINLINE const FDateTime & GetNextPollTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the next poll time.




### `GetTimeRemaining` <a id="structFRH__AutoPoller_1ae592de2857f70bbaebb936a54d0ae11b"></a>

FORCEINLINE float GetTimeRemaining()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the poll time remaining in seconds. Returns -1.f if the poll is inactive or executing.





