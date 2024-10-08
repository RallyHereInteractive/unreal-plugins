---
title: Common
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)`            | Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory)`            | Helper function to convert an [FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory) into a hash value.
`class `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper) | Base helper class for asynchronous RallyHere tasks.
`struct `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId) | Common structure for identifying players on any known platform.
`struct `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory) | A tuple specifying the directory of a file in the remote file storage.

## Members

#### `public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)` <a id="group__Common_1ga51b3d76527de2fccacb53501f14c7991"></a>

Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.

#### Parameters
* `PlatformId` The platform id to generate a hash for 

#### Returns
Semi-unique hash value for the given platform id

#### `public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory)` <a id="group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947"></a>

Helper function to convert an [FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory) into a hash value.

#### Parameters
* `Directory` The directory to generate a hash for 

#### Returns
Semi-unique hash value for the given directory

## class `FRH_AsyncTaskHelper` <a id="classFRH__AsyncTaskHelper"></a>

```
class FRH_AsyncTaskHelper
  : public TSharedFromThis< FRH_AsyncTaskHelper >
```

Base helper class for asynchronous RallyHere tasks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline FORCEINLINE bool `[`IsRunning`](#classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193)`() const` | Returns whether or not the task is currently executing.
`public FString `[`GetName`](#classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af)`() const` | Abstract function for fetching the name of the asynchronous task.
`public inline FORCEINLINE int32 `[`GetTaskPriority`](#classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4)`() const` | Gets the TaskPriority.
`public inline FORCEINLINE FTimespan `[`GetDuration`](#classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7)`() const` | Gets the Duration the task has been running for.
`protected int32 `[`TaskPriority`](#classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2) | 
`protected FDateTime `[`StartedTime`](#classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde) | 
`protected FDateTime `[`EndedTime`](#classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024) | 
`protected inline  `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b)`()` | Default constructor.
`protected inline  `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34)`(int32 InPriority)` | Constructor with a priority for the task helper.
`protected virtual  `[`~FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345)`() = default` | Default destructor.
`protected void `[`ExecuteCallback`](#classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6)`(bool bSuccess) const` | Abstract function called when the asynchronous tasks completes regardless of success or failure.
`protected inline virtual void `[`Cleanup`](#classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c)`()` | Function called to do cleanup when the asynchronous tasks is about to be deleted.
`protected inline void `[`Started`](#classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa)`()` | Function called when the asynchronous task has started.
`protected inline void `[`Failed`](#classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7)`(const FString & FailureReason)` | Function called in the event that the asynchronous task has failed.
`protected inline virtual void `[`Cancel`](#classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b)`(const FString & CancelReason)` | Cancels the asynchronous task by failing it out.
`protected inline void `[`Completed`](#classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784)`(bool bSuccess)` | Called when the asynchronous task has completed.

### Members

#### `public inline FORCEINLINE bool `[`IsRunning`](#classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193)`() const` <a id="classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193"></a>

Returns whether or not the task is currently executing.

#### `public FString `[`GetName`](#classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af)`() const` <a id="classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af"></a>

Abstract function for fetching the name of the asynchronous task.

#### `public inline FORCEINLINE int32 `[`GetTaskPriority`](#classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4)`() const` <a id="classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4"></a>

Gets the TaskPriority.

#### `public inline FORCEINLINE FTimespan `[`GetDuration`](#classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7)`() const` <a id="classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7"></a>

Gets the Duration the task has been running for.

#### `protected int32 `[`TaskPriority`](#classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2) <a id="classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2"></a>

#### `protected FDateTime `[`StartedTime`](#classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde) <a id="classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde"></a>

#### `protected FDateTime `[`EndedTime`](#classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024) <a id="classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024"></a>

#### `protected inline  `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b)`()` <a id="classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b"></a>

Default constructor.

#### `protected inline  `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34)`(int32 InPriority)` <a id="classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34"></a>

Constructor with a priority for the task helper.

#### `protected virtual  `[`~FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345)`() = default` <a id="classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345"></a>

Default destructor.

#### `protected void `[`ExecuteCallback`](#classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6)`(bool bSuccess) const` <a id="classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6"></a>

Abstract function called when the asynchronous tasks completes regardless of success or failure.

#### `protected inline virtual void `[`Cleanup`](#classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c)`()` <a id="classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c"></a>

Function called to do cleanup when the asynchronous tasks is about to be deleted.

#### `protected inline void `[`Started`](#classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa)`()` <a id="classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa"></a>

Function called when the asynchronous task has started.

#### `protected inline void `[`Failed`](#classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7)`(const FString & FailureReason)` <a id="classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7"></a>

Function called in the event that the asynchronous task has failed.

#### `protected inline virtual void `[`Cancel`](#classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b)`(const FString & CancelReason)` <a id="classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b"></a>

Cancels the asynchronous task by failing it out.

#### Parameters
* `CancelReason` Tracking string pushed to log for debugging purposes. 

This is intended to be called from external code, not from within the task itself. It will just immediately fail, but this is virtual in case any locking etc needs to be done for safety.

#### `protected inline void `[`Completed`](#classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784)`(bool bSuccess)` <a id="classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784"></a>

Called when the asynchronous task has completed.

#### Parameters
* `bSuccess` Whether or not the task completed successfully.

## struct `FRH_PlayerPlatformId` <a id="structFRH__PlayerPlatformId"></a>

Common structure for identifying players on any known platform.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`UserId`](#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3) | Player identifier for the given platform type.
`public ERHAPI_Platform `[`PlatformType`](#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab) | Platform type of this identifier.
`public inline FORCEINLINE bool `[`IsValid`](#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)`() const` | Returns whether or not this player platform ID has been filled with sensible data.
`public inline bool `[`operator==`](#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)`(const `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId)` & Other) const` | Returns whether or not this player platform ID exactly matches the given player platform ID.
`public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)`()` | Default constructor that leaves the user ID empty and sets the platform type to "unknown".
`public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)`(const FString & InUserId,ERHAPI_Platform InPlatformType)` | Constructor for specifying user ID and platform type.

### Members

#### `public FString `[`UserId`](#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3) <a id="structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3"></a>

Player identifier for the given platform type.

#### `public ERHAPI_Platform `[`PlatformType`](#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab) <a id="structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab"></a>

Platform type of this identifier.

#### `public inline FORCEINLINE bool `[`IsValid`](#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)`() const` <a id="structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e"></a>

Returns whether or not this player platform ID has been filled with sensible data.

#### `public inline bool `[`operator==`](#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)`(const `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId)` & Other) const` <a id="structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa"></a>

Returns whether or not this player platform ID exactly matches the given player platform ID.

#### `public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)`()` <a id="structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41"></a>

Default constructor that leaves the user ID empty and sets the platform type to "unknown".

#### `public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)`(const FString & InUserId,ERHAPI_Platform InPlatformType)` <a id="structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc"></a>

Constructor for specifying user ID and platform type.

## struct `FRH_RemoteFileApiDirectory` <a id="structFRH__RemoteFileApiDirectory"></a>

A tuple specifying the directory of a file in the remote file storage.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_FileType `[`FileType`](#structFRH__RemoteFileApiDirectory_1a1986a05bf105acf8d7cb3ccb245c4b67) | The type of file to upload/download
`public ERHAPI_EntityType `[`EntityType`](#structFRH__RemoteFileApiDirectory_1ac1fbbf236dd5683c0189b58ace4c546b) | The type of entity the file is associated with
`public FString `[`EntityId`](#structFRH__RemoteFileApiDirectory_1a4065838f5ba174048afd65330a29409d) | The id of the entity the file is associated with
`public  `[`GENERATED_USTRUCT_BODY`](#structFRH__RemoteFileApiDirectory_1acd97265b9b2a315fbe5eb2aa63c5e67d)`()` | 
`public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a56911df486ef89c7096aed2c11cbf837)`()` | 
`public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a2098f9e4b8b8b88060886f87d8e394d2)`(ERHAPI_FileType InFileType,ERHAPI_EntityType InEntityType,const FString & InEntityId)` | 
`public inline bool `[`operator==`](#structFRH__RemoteFileApiDirectory_1a96fe3372945cbf4ffef30c1519bd1432)`(const `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory)` & Other) const` | Comparison operator.
`public inline bool `[`IsValid`](#structFRH__RemoteFileApiDirectory_1aaae4e108ecd39fb74c4ce279e20304a3)`() const` | 
`public inline FString `[`ToDescriptionString`](#structFRH__RemoteFileApiDirectory_1a2b39ae30546135d8802a1663893948bc)`() const` | Get a string representation of the directory.

### Members

#### `public ERHAPI_FileType `[`FileType`](#structFRH__RemoteFileApiDirectory_1a1986a05bf105acf8d7cb3ccb245c4b67) <a id="structFRH__RemoteFileApiDirectory_1a1986a05bf105acf8d7cb3ccb245c4b67"></a>

The type of file to upload/download

#### `public ERHAPI_EntityType `[`EntityType`](#structFRH__RemoteFileApiDirectory_1ac1fbbf236dd5683c0189b58ace4c546b) <a id="structFRH__RemoteFileApiDirectory_1ac1fbbf236dd5683c0189b58ace4c546b"></a>

The type of entity the file is associated with

#### `public FString `[`EntityId`](#structFRH__RemoteFileApiDirectory_1a4065838f5ba174048afd65330a29409d) <a id="structFRH__RemoteFileApiDirectory_1a4065838f5ba174048afd65330a29409d"></a>

The id of the entity the file is associated with

#### `public  `[`GENERATED_USTRUCT_BODY`](#structFRH__RemoteFileApiDirectory_1acd97265b9b2a315fbe5eb2aa63c5e67d)`()` <a id="structFRH__RemoteFileApiDirectory_1acd97265b9b2a315fbe5eb2aa63c5e67d"></a>

#### `public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a56911df486ef89c7096aed2c11cbf837)`()` <a id="structFRH__RemoteFileApiDirectory_1a56911df486ef89c7096aed2c11cbf837"></a>

#### `public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a2098f9e4b8b8b88060886f87d8e394d2)`(ERHAPI_FileType InFileType,ERHAPI_EntityType InEntityType,const FString & InEntityId)` <a id="structFRH__RemoteFileApiDirectory_1a2098f9e4b8b8b88060886f87d8e394d2"></a>

#### `public inline bool `[`operator==`](#structFRH__RemoteFileApiDirectory_1a96fe3372945cbf4ffef30c1519bd1432)`(const `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory)` & Other) const` <a id="structFRH__RemoteFileApiDirectory_1a96fe3372945cbf4ffef30c1519bd1432"></a>

Comparison operator.

#### `public inline bool `[`IsValid`](#structFRH__RemoteFileApiDirectory_1aaae4e108ecd39fb74c4ce279e20304a3)`() const` <a id="structFRH__RemoteFileApiDirectory_1aaae4e108ecd39fb74c4ce279e20304a3"></a>

#### `public inline FString `[`ToDescriptionString`](#structFRH__RemoteFileApiDirectory_1a2b39ae30546135d8802a1663893948bc)`() const` <a id="structFRH__RemoteFileApiDirectory_1a2b39ae30546135d8802a1663893948bc"></a>

Get a string representation of the directory.

#### Returns
A string representation of the directory

