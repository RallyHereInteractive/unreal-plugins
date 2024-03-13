---
title: FRH_AsyncTaskHelper Class
---Inherits from TSharedFromThis< FRH_AsyncTaskHelper >

Base helper class for asynchronous RallyHere tasks.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< TSharedRef< [FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper) > >|[OngoingRequests](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1ac9c747aada67e24f6a4178b4e1c46605)||
|bool|[bInitialized](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1ad7520dc89b4af4efc2cdf135941690a3)||
|int32|[TaskPriority](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2)||
|FDateTime|[StartedTime](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde)||
|FDateTime|[EndedTime](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024)||
|friend|[FRallyHereIntegrationModule](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1ae58e3cc087882041087270d15d69f60e)||
||[FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b)()|Default constructor.|
||[FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34)(int32 InPriority)|Constructor with a priority for the task helper.|
||[~FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345)()|Default destructor.|
|void|[ExecuteCallback](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6)(bool bSuccess)|Abstract function called when the asynchronous tasks completes regardless of success or failure.|
|void|[Cleanup](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c)()|Function called to do cleanup when the asynchronous tasks is about to be deleted.|
|void|[Started](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa)()|Function called when the asynchronous task has started.|
|void|[Failed](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7)(const FString & FailureReason)|Function called in the event that the asynchronous task has failed.|
|void|[Cancel](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b)(const FString & CancelReason)|Cancels the asynchronous task by failing it out.|
|void|[Completed](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784)(bool bSuccess)|Called when the asynchronous task has completed.|
|FORCEINLINE bool|[IsRunning](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193)()|Returns whether or not the task is currently executing.|
|FString|[GetName](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af)()|Abstract function for fetching the name of the asynchronous task.|
|FORCEINLINE int32|[GetTaskPriority](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4)()|Gets the TaskPriority.|
|FORCEINLINE FTimespan|[GetDuration](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7)()|Gets the Duration the task has been running for.|
|const TArray< TSharedRef< [FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper) > > &|[GetOngoingRequests](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1af15d9154ebb07ab74357aa4b57f927f5)()||
|void|[Initialize](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1a7627ac28ddd25b71d85acc66b708e956)()||
|void|[Uninitialize](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper_1afc208abe13fb928c52569b6a51334504)()||
## Protected Static Attributes



### `OngoingRequests` <a id="classFRH__AsyncTaskHelper_1ac9c747aada67e24f6a4178b4e1c46605"></a>

`TArray<TSharedRef<FRH_AsyncTaskHelper> > FRH_AsyncTaskHelper::OngoingRequests`






### `bInitialized` <a id="classFRH__AsyncTaskHelper_1ad7520dc89b4af4efc2cdf135941690a3"></a>

`bool FRH_AsyncTaskHelper::bInitialized`







## Protected Attributes



### `TaskPriority` <a id="classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2"></a>

`int32 FRH_AsyncTaskHelper::TaskPriority`






### `StartedTime` <a id="classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde"></a>

`FDateTime FRH_AsyncTaskHelper::StartedTime`






### `EndedTime` <a id="classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024"></a>

`FDateTime FRH_AsyncTaskHelper::EndedTime`







## Friends



### `FRallyHereIntegrationModule` <a id="classFRH__AsyncTaskHelper_1ae58e3cc087882041087270d15d69f60e"></a>

`friend class FRallyHereIntegrationModule`

#### Parameters

| Type | Name |
|------|------|
|[FRallyHereIntegrationModule](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule)||

#### Description







## Protected Functions



### `FRH_AsyncTaskHelper` <a id="classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b"></a>

 FRH_AsyncTaskHelper()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `FRH_AsyncTaskHelper` <a id="classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34"></a>

 FRH_AsyncTaskHelper(int32 InPriority)

#### Parameters

| Type | Name |
|------|------|
|int32|InPriority|

#### Description

Constructor with a priority for the task helper.




### `~FRH_AsyncTaskHelper` <a id="classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345"></a>

 ~FRH_AsyncTaskHelper()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default destructor.




### `ExecuteCallback` <a id="classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6"></a>

void ExecuteCallback(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Abstract function called when the asynchronous tasks completes regardless of success or failure.




### `Cleanup` <a id="classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c"></a>

void Cleanup()

#### Parameters

| Type | Name |
|------|------|

#### Description

Function called to do cleanup when the asynchronous tasks is about to be deleted.




### `Started` <a id="classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa"></a>

void Started()

#### Parameters

| Type | Name |
|------|------|

#### Description

Function called when the asynchronous task has started.




### `Failed` <a id="classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7"></a>

void Failed(const FString & FailureReason)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FailureReason|

#### Description

Function called in the event that the asynchronous task has failed.




### `Cancel` <a id="classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b"></a>

void Cancel(const FString & CancelReason)

#### Parameters

| Type | Name |
|------|------|
|const FString &|CancelReason|

#### Description

Cancels the asynchronous task by failing it out.


#### Parameters

CancelReason
: Tracking string pushed to log for debugging purposes. 

#### note
This is intended to be called from external code, not from within the task itself. It will just immediately fail, but this is virtual in case any locking etc needs to be done for safety. 



### `Completed` <a id="classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784"></a>

void Completed(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Called when the asynchronous task has completed.


#### Parameters

bSuccess
: Whether or not the task completed successfully. 




## Public Functions



### `IsRunning` <a id="classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193"></a>

FORCEINLINE bool IsRunning()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns whether or not the task is currently executing.




### `GetName` <a id="classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af"></a>

FString GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Abstract function for fetching the name of the asynchronous task.




### `GetTaskPriority` <a id="classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4"></a>

FORCEINLINE int32 GetTaskPriority()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the TaskPriority.




### `GetDuration` <a id="classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7"></a>

FORCEINLINE FTimespan GetDuration()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Duration the task has been running for.





## Public Static Functions



### `GetOngoingRequests` <a id="classFRH__AsyncTaskHelper_1af15d9154ebb07ab74357aa4b57f927f5"></a>

const TArray< TSharedRef< [FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper) > > & GetOngoingRequests()

#### Parameters

| Type | Name |
|------|------|

#### Description







## Protected Static Functions



### `Initialize` <a id="classFRH__AsyncTaskHelper_1a7627ac28ddd25b71d85acc66b708e956"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Uninitialize` <a id="classFRH__AsyncTaskHelper_1afc208abe13fb928c52569b6a51334504"></a>

void Uninitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description







