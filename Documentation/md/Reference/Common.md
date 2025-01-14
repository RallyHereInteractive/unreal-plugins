---
title: Common
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`define `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd)            | Helper for declaring [FRH_DelegateBlock](Common.md#structFRH__DelegateBlock) types.
`public  `[`DECLARE_DYNAMIC_DELEGATE_OneParam`](#group__Common_1gaf762e5da533f56e4052da1ceead76038)`(FRH_GenericSuccessDynamicDelegate,bool,bSuccess)`            | Generic blueprint friendly delegate used to report success or failure.
`public  `[`DECLARE_DELEGATE_OneParam`](#group__Common_1ga4f9a9dad692ff89dfce417fb9d5be258)`(FRH_GenericSuccessDelegate,bool)`            | Generic native-only delegate used to report success or failure.
`public  `[`DECLARE_DYNAMIC_DELEGATE_TwoParams`](#group__Common_1gac075c01ed93280f69479e554a3d9871b)`(FRH_GenericSuccessWithErrorDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | Generic blueprint friendly delegate used to report success or failure with error info.
`public  `[`DECLARE_DELEGATE_TwoParams`](#group__Common_1ga00a137fb95acdc4001c1f7ce8151a2b9)`(FRH_GenericSuccessWithErrorDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | Generic native-only delegate used to report success or failure.
`public FORCEINLINE FRH_GenericSuccessWithErrorBlock `[`RH_ConvertGenericSucessDelegateBlock`](#group__Common_1ga1334d6dc0c562398f47369cb2dda495d)`(const FRH_GenericSuccessBlock & InDelegate)`            | Generic blueprint and native delegate used to report success or failure.
`public  `[`DECLARE_DYNAMIC_DELEGATE_OneParam`](#group__Common_1ga66c37330911c8fe234a7074cef68dd80)`(FRH_CustomEndpointDynamicDelegate,const `[`FRH_CustomEndpointResponseWrapper`](Common.md#structFRH__CustomEndpointResponseWrapper)` &,CustomResponseWrapper)`            | Dynamic delegate used for custom endpoint calls.
`public  `[`DECLARE_DELEGATE_OneParam`](#group__Common_1ga5bba8beab7e3653c4bfa887eaec48a87)`(FRH_CustomEndpointDelegate,const `[`FRH_CustomEndpointResponseWrapper`](Common.md#structFRH__CustomEndpointResponseWrapper)` &)`            | Native delegate used for custom endpoint calls.
`public static bool `[`RH_BreakApartURL`](#group__Common_1ga98aea8d69558cf3580e89e65d73256dd)`(const FString & URL,const FString & BaseURL,FString & APIName,TArray< FString > & APIParams)`            | Generic blueprint and native delegate used to report success or failure.
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)`            | Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory)`            | Helper function to convert an [FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory) into a hash value.
`class `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper) | Base helper class for asynchronous RallyHere tasks.
`class `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper) | Templated helper class for asynchronously executing basic RallyHere API queries.
`class `[`FRH_HttpResponseSerializable`](#classFRH__HttpResponseSerializable) | 
`struct `[`FRH_DelegateBlock`](#structFRH__DelegateBlock) | Templated helper class defining a native and blueprint friendly delegate as a single object.
`struct `[`FRH_ErrorInfo`](#structFRH__ErrorInfo) | Generic blueprint and native delegate used to report success or failure.
`struct `[`FRH_CustomEndpointRequestWrapper`](#structFRH__CustomEndpointRequestWrapper) | Wrapper calls for custom endpoint requests.
`struct `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper) | Wrapper calls for custom endpoint responses.
`struct `[`FRH_ObjectVersionCheck`](#structFRH__ObjectVersionCheck) | An helper object that will take in an desired version check behavior and apply it to a request.
`struct `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId) | Common structure for identifying players on any known platform.
`struct `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory) | A tuple specifying the directory of a file in the remote file storage.

## Members

#### `define `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd) <a id="group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd"></a>

Helper for declaring [FRH_DelegateBlock](Common.md#structFRH__DelegateBlock) types.

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_OneParam`](#group__Common_1gaf762e5da533f56e4052da1ceead76038)`(FRH_GenericSuccessDynamicDelegate,bool,bSuccess)` <a id="group__Common_1gaf762e5da533f56e4052da1ceead76038"></a>

Generic blueprint friendly delegate used to report success or failure.

#### `public  `[`DECLARE_DELEGATE_OneParam`](#group__Common_1ga4f9a9dad692ff89dfce417fb9d5be258)`(FRH_GenericSuccessDelegate,bool)` <a id="group__Common_1ga4f9a9dad692ff89dfce417fb9d5be258"></a>

Generic native-only delegate used to report success or failure.

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_TwoParams`](#group__Common_1gac075c01ed93280f69479e554a3d9871b)`(FRH_GenericSuccessWithErrorDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)` <a id="group__Common_1gac075c01ed93280f69479e554a3d9871b"></a>

Generic blueprint friendly delegate used to report success or failure with error info.

#### `public  `[`DECLARE_DELEGATE_TwoParams`](#group__Common_1ga00a137fb95acdc4001c1f7ce8151a2b9)`(FRH_GenericSuccessWithErrorDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Common_1ga00a137fb95acdc4001c1f7ce8151a2b9"></a>

Generic native-only delegate used to report success or failure.

#### `public FORCEINLINE FRH_GenericSuccessWithErrorBlock `[`RH_ConvertGenericSucessDelegateBlock`](#group__Common_1ga1334d6dc0c562398f47369cb2dda495d)`(const FRH_GenericSuccessBlock & InDelegate)` <a id="group__Common_1ga1334d6dc0c562398f47369cb2dda495d"></a>

Generic blueprint and native delegate used to report success or failure.

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_OneParam`](#group__Common_1ga66c37330911c8fe234a7074cef68dd80)`(FRH_CustomEndpointDynamicDelegate,const `[`FRH_CustomEndpointResponseWrapper`](Common.md#structFRH__CustomEndpointResponseWrapper)` &,CustomResponseWrapper)` <a id="group__Common_1ga66c37330911c8fe234a7074cef68dd80"></a>

Dynamic delegate used for custom endpoint calls.

#### `public  `[`DECLARE_DELEGATE_OneParam`](#group__Common_1ga5bba8beab7e3653c4bfa887eaec48a87)`(FRH_CustomEndpointDelegate,const `[`FRH_CustomEndpointResponseWrapper`](Common.md#structFRH__CustomEndpointResponseWrapper)` &)` <a id="group__Common_1ga5bba8beab7e3653c4bfa887eaec48a87"></a>

Native delegate used for custom endpoint calls.

#### `public static bool `[`RH_BreakApartURL`](#group__Common_1ga98aea8d69558cf3580e89e65d73256dd)`(const FString & URL,const FString & BaseURL,FString & APIName,TArray< FString > & APIParams)` <a id="group__Common_1ga98aea8d69558cf3580e89e65d73256dd"></a>

Generic blueprint and native delegate used to report success or failure.

Helper function to break a fully qualified URL into a base URL, API name, and an array of API parameters 
#### Parameters
* `URL` The fully qualified URL that we want to break apart 

* `BaseURL` The base URL of the specified fully qualified URL 

* `APIName` The name of the API the URL is hitting 

* `APIParams` The array of API parameters from the URL 

#### Returns
Semi-unique hash value for the given platform id

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

## class `FRH_SimpleQueryHelper` <a id="classFRH__SimpleQueryHelper"></a>

```
class FRH_SimpleQueryHelper
  : public FRH_AsyncTaskHelper
```

Templated helper class for asynchronously executing basic RallyHere API queries.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessWithErrorBlock & InCompleteDelegate,int32 InPriority)` | Constructor allowing for the specification of callback delegates.
`public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessBlock & InCompleteDelegate,int32 InPriority)` | Constructor allowing for the specification of callback delegates.
`public inline virtual void `[`Start`](#classFRH__SimpleQueryHelper_1a503dfcc4b3226e4e8d2d7dc7b34b8eb8)`(TSharedRef< typename BaseType::API > API,const typename BaseType::Request & Request)` | Begins the task of asynchronously querying the API.
`public inline void `[`OnQueryComplete`](#classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8)`(const typename BaseType::Response & Resp)` | Called once the asynchronous query has returned a response.
`public inline virtual FString `[`GetName`](#classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec)`() const` | Gets the templated name for this object.
`public inline virtual void `[`ExecuteCallback`](#classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331)`(bool bSuccess) const` | Executes the generic delegate associated with this asynchronous task forwarding bSuccess.
`protected BaseType::Delegate `[`UpdateDelegate`](#classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be) | Templated delegate to call with the API's response if query successfully completes.
`protected FRH_GenericSuccessWithErrorBlock `[`Delegate`](#classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54) | Generic completion delegate called regardless of success or failure.
`protected FHttpRequestPtr `[`HttpRequest`](#classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494) | The HTTP request object used to query the API.
`protected `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`ErrorInfo`](#classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f) | Error Information

### Members

#### `public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessWithErrorBlock & InCompleteDelegate,int32 InPriority)` <a id="classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835"></a>

Constructor allowing for the specification of callback delegates.

#### Parameters
* `InUpdateDelegate` Templated delegate to call with the API's response if query successfully completes 

* `InCompleteDelegate` Generic completion delegate called regardless of success or failure

#### `public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessBlock & InCompleteDelegate,int32 InPriority)` <a id="classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f"></a>

Constructor allowing for the specification of callback delegates.

#### Parameters
* `InUpdateDelegate` Templated delegate to call with the API's response if query successfully completes 

* `InCompleteDelegate` Generic completion delegate called regardless of success or failure

#### `public inline virtual void `[`Start`](#classFRH__SimpleQueryHelper_1a503dfcc4b3226e4e8d2d7dc7b34b8eb8)`(TSharedRef< typename BaseType::API > API,const typename BaseType::Request & Request)` <a id="classFRH__SimpleQueryHelper_1a503dfcc4b3226e4e8d2d7dc7b34b8eb8"></a>

Begins the task of asynchronously querying the API.

#### Parameters
* `API` API target for the query (i.e. User, Session, Inventory, etc.) 

* `Request` Templated request data for the query 

* `Priority` The Priority of the call, lower is higher priority

#### `public inline void `[`OnQueryComplete`](#classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8)`(const typename BaseType::Response & Resp)` <a id="classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8"></a>

Called once the asynchronous query has returned a response.

#### Parameters
* `Resp` Templated response data for the query

#### `public inline virtual FString `[`GetName`](#classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec)`() const` <a id="classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec"></a>

Gets the templated name for this object.

#### `public inline virtual void `[`ExecuteCallback`](#classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331)`(bool bSuccess) const` <a id="classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331"></a>

Executes the generic delegate associated with this asynchronous task forwarding bSuccess.

#### `protected BaseType::Delegate `[`UpdateDelegate`](#classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be) <a id="classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be"></a>

Templated delegate to call with the API's response if query successfully completes.

#### `protected FRH_GenericSuccessWithErrorBlock `[`Delegate`](#classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54) <a id="classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54"></a>

Generic completion delegate called regardless of success or failure.

#### `protected FHttpRequestPtr `[`HttpRequest`](#classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494) <a id="classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494"></a>

The HTTP request object used to query the API.

#### `protected `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`ErrorInfo`](#classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f) <a id="classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f"></a>

Error Information

## class `FRH_HttpResponseSerializable` <a id="classFRH__HttpResponseSerializable"></a>

```
class FRH_HttpResponseSerializable
  : public IHttpResponse
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`FRH_HttpResponseSerializable`](#classFRH__HttpResponseSerializable_1a3e3fdeb6daa9393df1522ce131aa3b44)`()` | Default constructor.
`public inline  `[`FRH_HttpResponseSerializable`](#classFRH__HttpResponseSerializable_1a43e36325c864bb823cb171f005578351)`(const FHttpResponsePtr & InHttpResponse)` | Constructor that takes a response pointer to serialize.
`public virtual bool `[`ExportToFile`](#classFRH__HttpResponseSerializable_1aec8b537514cd0a2b9117a29c830971b4)`(const FString & FilePath,bool bCanCompress) const` | Exports the contents of the response to a file.
`public virtual bool `[`ImportFromFile`](#classFRH__HttpResponseSerializable_1a761fe72cbace3f161d69c9ef86bf41d2)`(const FString & FilePath)` | Imports the contents of the response from a file.
`public inline virtual int32 `[`GetResponseCode`](#classFRH__HttpResponseSerializable_1ad0c48c1e60b06e4c7693730a92c7f403)`() const` | Gets the response code returned by the requested server. See EHttpResponseCodes for known response codes.
`public inline virtual FString `[`GetContentAsString`](#classFRH__HttpResponseSerializable_1aec46f5e9c742c58e9168b5e45c082414)`() const` | Returns the payload as a string, assuming the payload is UTF8.
`public inline virtual FString `[`GetURL`](#classFRH__HttpResponseSerializable_1a8bbd59b07e2418ff8491ff9fec4db46c)`() const` | Get the URL used to send the request.
`public inline virtual FString `[`GetURLParameter`](#classFRH__HttpResponseSerializable_1a85c1cea844dcefbfcd4b1c7fff2d423a)`(const FString & ParameterName) const` | Gets an URL parameter. expected format is ?Key=Value&Key=Value... If that format is not used, this function will not work.
`public inline virtual FString `[`GetHeader`](#classFRH__HttpResponseSerializable_1aa76e506d231aa42097c34d2e03dbc8ea)`(const FString & HeaderName) const` | Gets the value of a header, or empty string if not found.
`public inline virtual TArray< FString > `[`GetAllHeaders`](#classFRH__HttpResponseSerializable_1a341b62cdae3a6277b9d4cd8856c48d9e)`() const` | Return all headers in an array in "Name: Value" format.
`public inline virtual FString `[`GetContentType`](#classFRH__HttpResponseSerializable_1a069d0192e6ed8cd119f51bcfa399e140)`() const` | Shortcut to get the Content-Type header value (if available)
`public inline virtual uint64 `[`GetContentLength`](#classFRH__HttpResponseSerializable_1a87eb6b183a194faa8575eb96b242807f)`() const` | Shortcut to get the Content-Length header value. Will not always return non-zero. If you want the real length of the payload, get the payload and check it's length.
`public inline virtual const TArray< uint8 > & `[`GetContent`](#classFRH__HttpResponseSerializable_1a5096f19c497a4caa34ba2cdeded77747)`() const` | Get the content payload of the request or response.
`protected int32 `[`ResponseCode`](#classFRH__HttpResponseSerializable_1a683c80f16031c7964a8dc727a320ffa4) | The http response code.
`protected FString `[`URL`](#classFRH__HttpResponseSerializable_1ab2971457cd7442e9a5b05a9f8d69b381) | The URL used to send the request.
`protected TMap< FString, FString > `[`URLParameters`](#classFRH__HttpResponseSerializable_1ab1253ad3493ed1b0b5d9e8af87085668) | The URL parameters for the request.
`protected int64 `[`ContentLength`](#classFRH__HttpResponseSerializable_1a19c15a4c6da5e26be64608fdf594c3e5) | The content length of the response.
`protected FString `[`ContentType`](#classFRH__HttpResponseSerializable_1a93d88eeacc43e895425418dd06bbef67) | The content type of the response.
`protected TArray< FString > `[`Headers`](#classFRH__HttpResponseSerializable_1a574dbca13e18d4064212f20e4aa94859) | The headers of the response.
`protected TArray< uint8 > `[`Content`](#classFRH__HttpResponseSerializable_1a799cf2b14aebbc109c6aaf6248b81e8a) | The content of the response.

### Members

#### `public inline  `[`FRH_HttpResponseSerializable`](#classFRH__HttpResponseSerializable_1a3e3fdeb6daa9393df1522ce131aa3b44)`()` <a id="classFRH__HttpResponseSerializable_1a3e3fdeb6daa9393df1522ce131aa3b44"></a>

Default constructor.

#### `public inline  `[`FRH_HttpResponseSerializable`](#classFRH__HttpResponseSerializable_1a43e36325c864bb823cb171f005578351)`(const FHttpResponsePtr & InHttpResponse)` <a id="classFRH__HttpResponseSerializable_1a43e36325c864bb823cb171f005578351"></a>

Constructor that takes a response pointer to serialize.

#### Parameters
* `InHttpResponse` The response pointer to use.

#### `public virtual bool `[`ExportToFile`](#classFRH__HttpResponseSerializable_1aec8b537514cd0a2b9117a29c830971b4)`(const FString & FilePath,bool bCanCompress) const` <a id="classFRH__HttpResponseSerializable_1aec8b537514cd0a2b9117a29c830971b4"></a>

Exports the contents of the response to a file.

#### Parameters
* `FilePath` The file path to export the response to. 

* `bCanCompress` Whether the content can be compressed. 

#### Returns
Whether the export was successful.

#### `public virtual bool `[`ImportFromFile`](#classFRH__HttpResponseSerializable_1a761fe72cbace3f161d69c9ef86bf41d2)`(const FString & FilePath)` <a id="classFRH__HttpResponseSerializable_1a761fe72cbace3f161d69c9ef86bf41d2"></a>

Imports the contents of the response from a file.

#### Parameters
* `FilePath` The file path to import the response from. 

#### Returns
Whether the import was successful.

#### `public inline virtual int32 `[`GetResponseCode`](#classFRH__HttpResponseSerializable_1ad0c48c1e60b06e4c7693730a92c7f403)`() const` <a id="classFRH__HttpResponseSerializable_1ad0c48c1e60b06e4c7693730a92c7f403"></a>

Gets the response code returned by the requested server. See EHttpResponseCodes for known response codes.

#### Returns
the response code.

#### `public inline virtual FString `[`GetContentAsString`](#classFRH__HttpResponseSerializable_1aec46f5e9c742c58e9168b5e45c082414)`() const` <a id="classFRH__HttpResponseSerializable_1aec46f5e9c742c58e9168b5e45c082414"></a>

Returns the payload as a string, assuming the payload is UTF8.

#### Returns
the payload as a string.

#### `public inline virtual FString `[`GetURL`](#classFRH__HttpResponseSerializable_1a8bbd59b07e2418ff8491ff9fec4db46c)`() const` <a id="classFRH__HttpResponseSerializable_1a8bbd59b07e2418ff8491ff9fec4db46c"></a>

Get the URL used to send the request.

#### Returns
the URL string.

#### `public inline virtual FString `[`GetURLParameter`](#classFRH__HttpResponseSerializable_1a85c1cea844dcefbfcd4b1c7fff2d423a)`(const FString & ParameterName) const` <a id="classFRH__HttpResponseSerializable_1a85c1cea844dcefbfcd4b1c7fff2d423a"></a>

Gets an URL parameter. expected format is ?Key=Value&Key=Value... If that format is not used, this function will not work.

#### Parameters
* `ParameterName` - the parameter to request. 

#### Returns
the parameter value string.

#### `public inline virtual FString `[`GetHeader`](#classFRH__HttpResponseSerializable_1aa76e506d231aa42097c34d2e03dbc8ea)`(const FString & HeaderName) const` <a id="classFRH__HttpResponseSerializable_1aa76e506d231aa42097c34d2e03dbc8ea"></a>

Gets the value of a header, or empty string if not found.

#### Parameters
* `HeaderName` - name of the header to set.

#### `public inline virtual TArray< FString > `[`GetAllHeaders`](#classFRH__HttpResponseSerializable_1a341b62cdae3a6277b9d4cd8856c48d9e)`() const` <a id="classFRH__HttpResponseSerializable_1a341b62cdae3a6277b9d4cd8856c48d9e"></a>

Return all headers in an array in "Name: Value" format.

#### Returns
the header array of strings

#### `public inline virtual FString `[`GetContentType`](#classFRH__HttpResponseSerializable_1a069d0192e6ed8cd119f51bcfa399e140)`() const` <a id="classFRH__HttpResponseSerializable_1a069d0192e6ed8cd119f51bcfa399e140"></a>

Shortcut to get the Content-Type header value (if available)

#### Returns
the content type.

#### `public inline virtual uint64 `[`GetContentLength`](#classFRH__HttpResponseSerializable_1a87eb6b183a194faa8575eb96b242807f)`() const` <a id="classFRH__HttpResponseSerializable_1a87eb6b183a194faa8575eb96b242807f"></a>

Shortcut to get the Content-Length header value. Will not always return non-zero. If you want the real length of the payload, get the payload and check it's length.

#### Returns
the content length (if available)

#### `public inline virtual const TArray< uint8 > & `[`GetContent`](#classFRH__HttpResponseSerializable_1a5096f19c497a4caa34ba2cdeded77747)`() const` <a id="classFRH__HttpResponseSerializable_1a5096f19c497a4caa34ba2cdeded77747"></a>

Get the content payload of the request or response.

#### `protected int32 `[`ResponseCode`](#classFRH__HttpResponseSerializable_1a683c80f16031c7964a8dc727a320ffa4) <a id="classFRH__HttpResponseSerializable_1a683c80f16031c7964a8dc727a320ffa4"></a>

The http response code.

#### `protected FString `[`URL`](#classFRH__HttpResponseSerializable_1ab2971457cd7442e9a5b05a9f8d69b381) <a id="classFRH__HttpResponseSerializable_1ab2971457cd7442e9a5b05a9f8d69b381"></a>

The URL used to send the request.

#### `protected TMap< FString, FString > `[`URLParameters`](#classFRH__HttpResponseSerializable_1ab1253ad3493ed1b0b5d9e8af87085668) <a id="classFRH__HttpResponseSerializable_1ab1253ad3493ed1b0b5d9e8af87085668"></a>

The URL parameters for the request.

#### `protected int64 `[`ContentLength`](#classFRH__HttpResponseSerializable_1a19c15a4c6da5e26be64608fdf594c3e5) <a id="classFRH__HttpResponseSerializable_1a19c15a4c6da5e26be64608fdf594c3e5"></a>

The content length of the response.

#### `protected FString `[`ContentType`](#classFRH__HttpResponseSerializable_1a93d88eeacc43e895425418dd06bbef67) <a id="classFRH__HttpResponseSerializable_1a93d88eeacc43e895425418dd06bbef67"></a>

The content type of the response.

#### `protected TArray< FString > `[`Headers`](#classFRH__HttpResponseSerializable_1a574dbca13e18d4064212f20e4aa94859) <a id="classFRH__HttpResponseSerializable_1a574dbca13e18d4064212f20e4aa94859"></a>

The headers of the response.

#### `protected TArray< uint8 > `[`Content`](#classFRH__HttpResponseSerializable_1a799cf2b14aebbc109c6aaf6248b81e8a) <a id="classFRH__HttpResponseSerializable_1a799cf2b14aebbc109c6aaf6248b81e8a"></a>

The content of the response.

## struct `FRH_DelegateBlock` <a id="structFRH__DelegateBlock"></a>

Templated helper class defining a native and blueprint friendly delegate as a single object.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public DelegateType `[`Delegate`](#structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae) | Native-only version of the delegate.
`public DynamicDelegateType `[`DynDelegate`](#structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc) | Blueprint friendly version of the delegate.
`public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638)`()` | Default constructor leaving both delegates unbound.
`public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9)`(const DelegateType & InDelegate)` | Constructor for binding just the native-only version of the delegate.
`public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df)`(const DynamicDelegateType & InDynDelegate)` | Constructor for binding just the blueprint friendly version of the delegate.
`public inline void `[`ExecuteIfBound`](#structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364)`(ParamList... params) const` | Executes both the native-only and blueprint friendly versions of the delegate, if they're bound.
`public inline bool `[`IsBound`](#structFRH__DelegateBlock_1a648274dc80bd38cf4619abdcf90f0018)`() const` | 
`public inline bool `[`IsBoundToObject`](#structFRH__DelegateBlock_1a0a618d127583f1e21937af6196062c76)`(const void * Object) const` | 

### Members

#### `public DelegateType `[`Delegate`](#structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae) <a id="structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae"></a>

Native-only version of the delegate.

#### `public DynamicDelegateType `[`DynDelegate`](#structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc) <a id="structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc"></a>

Blueprint friendly version of the delegate.

#### `public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638)`()` <a id="structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638"></a>

Default constructor leaving both delegates unbound.

#### `public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9)`(const DelegateType & InDelegate)` <a id="structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9"></a>

Constructor for binding just the native-only version of the delegate.

#### `public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df)`(const DynamicDelegateType & InDynDelegate)` <a id="structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df"></a>

Constructor for binding just the blueprint friendly version of the delegate.

#### `public inline void `[`ExecuteIfBound`](#structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364)`(ParamList... params) const` <a id="structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364"></a>

Executes both the native-only and blueprint friendly versions of the delegate, if they're bound.

#### `public inline bool `[`IsBound`](#structFRH__DelegateBlock_1a648274dc80bd38cf4619abdcf90f0018)`() const` <a id="structFRH__DelegateBlock_1a648274dc80bd38cf4619abdcf90f0018"></a>

#### `public inline bool `[`IsBoundToObject`](#structFRH__DelegateBlock_1a0a618d127583f1e21937af6196062c76)`(const void * Object) const` <a id="structFRH__DelegateBlock_1a0a618d127583f1e21937af6196062c76"></a>

## struct `FRH_ErrorInfo` <a id="structFRH__ErrorInfo"></a>

Generic blueprint and native delegate used to report success or failure.

Generic handler for HTTP request errors.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FHttpResponsePtr `[`HttpResponse`](#structFRH__ErrorInfo_1aa84821f9c571e65c9268eece099bc7de) | The raw http response.
`public int32 `[`ResponseCode`](#structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439) | The Error Code of the HTTP request.
`public FString `[`ResponseContent`](#structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330) | Content of the HTTP request response.
`public bool `[`bIsRHCommonError`](#structFRH__ErrorInfo_1a3dc04003818b7b61b32a1afcec580cf4) | Whether the response is a RallyHere common error.
`public `[`FRHAPI_HzApiErrorModel`](RHAPI_HzApiErrorModel.md#structFRHAPI__HzApiErrorModel)` `[`RHCommonError`](#structFRH__ErrorInfo_1ae3439276423c4db34a8178f0382c4f27) | The response as a RallyHere common error.
`public bool `[`bIsRHValidationError`](#structFRH__ErrorInfo_1a8c5a433b1d62e3562a010bda5376521a) | Whether the response is a RallyHere validation error.
`public `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` `[`RHValidationError`](#structFRH__ErrorInfo_1a5d714aa9f92485faeca2e6985de7363d) | The response as a RallyHere validation error.
`public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1a73f5665c8b3d1e58d64e035d6dc0d141)`()` | Default constructor.
`public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12)`(const RallyHereAPI::FResponse * Response)` | Construct from Response Ptr.
`public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516)`(const RallyHereAPI::FResponse & Response)` | Construct from Response Ref.
`public virtual  `[`~FRH_ErrorInfo`](#structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf)`() = default` | Default destructor.
`public inline void `[`ImportErrorInfo`](#structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d)`(const RallyHereAPI::FResponse & Response)` | Parses The HTTP response into the error info.

### Members

#### `public FHttpResponsePtr `[`HttpResponse`](#structFRH__ErrorInfo_1aa84821f9c571e65c9268eece099bc7de) <a id="structFRH__ErrorInfo_1aa84821f9c571e65c9268eece099bc7de"></a>

The raw http response.

#### `public int32 `[`ResponseCode`](#structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439) <a id="structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439"></a>

The Error Code of the HTTP request.

#### `public FString `[`ResponseContent`](#structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330) <a id="structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330"></a>

Content of the HTTP request response.

#### `public bool `[`bIsRHCommonError`](#structFRH__ErrorInfo_1a3dc04003818b7b61b32a1afcec580cf4) <a id="structFRH__ErrorInfo_1a3dc04003818b7b61b32a1afcec580cf4"></a>

Whether the response is a RallyHere common error.

#### `public `[`FRHAPI_HzApiErrorModel`](RHAPI_HzApiErrorModel.md#structFRHAPI__HzApiErrorModel)` `[`RHCommonError`](#structFRH__ErrorInfo_1ae3439276423c4db34a8178f0382c4f27) <a id="structFRH__ErrorInfo_1ae3439276423c4db34a8178f0382c4f27"></a>

The response as a RallyHere common error.

#### `public bool `[`bIsRHValidationError`](#structFRH__ErrorInfo_1a8c5a433b1d62e3562a010bda5376521a) <a id="structFRH__ErrorInfo_1a8c5a433b1d62e3562a010bda5376521a"></a>

Whether the response is a RallyHere validation error.

#### `public `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` `[`RHValidationError`](#structFRH__ErrorInfo_1a5d714aa9f92485faeca2e6985de7363d) <a id="structFRH__ErrorInfo_1a5d714aa9f92485faeca2e6985de7363d"></a>

The response as a RallyHere validation error.

#### `public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1a73f5665c8b3d1e58d64e035d6dc0d141)`()` <a id="structFRH__ErrorInfo_1a73f5665c8b3d1e58d64e035d6dc0d141"></a>

Default constructor.

#### `public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12)`(const RallyHereAPI::FResponse * Response)` <a id="structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12"></a>

Construct from Response Ptr.

#### `public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516)`(const RallyHereAPI::FResponse & Response)` <a id="structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516"></a>

Construct from Response Ref.

#### `public virtual  `[`~FRH_ErrorInfo`](#structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf)`() = default` <a id="structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf"></a>

Default destructor.

#### `public inline void `[`ImportErrorInfo`](#structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d)`(const RallyHereAPI::FResponse & Response)` <a id="structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d"></a>

Parses The HTTP response into the error info.

#### Parameters
* `Response` The response to parse.

## struct `FRH_CustomEndpointRequestWrapper` <a id="structFRH__CustomEndpointRequestWrapper"></a>

Wrapper calls for custom endpoint requests.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EndpointId`](#structFRH__CustomEndpointRequestWrapper_1ad1250992238eb10948193a97597ac65b) | Http Endpoint ID that is mapped to a URL
`public int32 `[`Priority`](#structFRH__CustomEndpointRequestWrapper_1a6b6460e53c2672f18efe9fea5cd36b2b) | Call Priority
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Body`](#structFRH__CustomEndpointRequestWrapper_1ad733b4395528d978c61320f1d06d23db) | Http Body as Json
`public FString `[`ContentType`](#structFRH__CustomEndpointRequestWrapper_1a0c5a56270404d556c0d65ba873cdaef3) | Http Content Type
`public inline  `[`FRH_CustomEndpointRequestWrapper`](#structFRH__CustomEndpointRequestWrapper_1a6334b30e571cdb5577794ea5ee1c9cb4)`()` | 

### Members

#### `public FString `[`EndpointId`](#structFRH__CustomEndpointRequestWrapper_1ad1250992238eb10948193a97597ac65b) <a id="structFRH__CustomEndpointRequestWrapper_1ad1250992238eb10948193a97597ac65b"></a>

Http Endpoint ID that is mapped to a URL

#### `public int32 `[`Priority`](#structFRH__CustomEndpointRequestWrapper_1a6b6460e53c2672f18efe9fea5cd36b2b) <a id="structFRH__CustomEndpointRequestWrapper_1a6b6460e53c2672f18efe9fea5cd36b2b"></a>

Call Priority

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Body`](#structFRH__CustomEndpointRequestWrapper_1ad733b4395528d978c61320f1d06d23db) <a id="structFRH__CustomEndpointRequestWrapper_1ad733b4395528d978c61320f1d06d23db"></a>

Http Body as Json

#### `public FString `[`ContentType`](#structFRH__CustomEndpointRequestWrapper_1a0c5a56270404d556c0d65ba873cdaef3) <a id="structFRH__CustomEndpointRequestWrapper_1a0c5a56270404d556c0d65ba873cdaef3"></a>

Http Content Type

#### `public inline  `[`FRH_CustomEndpointRequestWrapper`](#structFRH__CustomEndpointRequestWrapper_1a6334b30e571cdb5577794ea5ee1c9cb4)`()` <a id="structFRH__CustomEndpointRequestWrapper_1a6334b30e571cdb5577794ea5ee1c9cb4"></a>

## struct `FRH_CustomEndpointResponseWrapper` <a id="structFRH__CustomEndpointResponseWrapper"></a>

Wrapper calls for custom endpoint responses.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`HttpResponseCode`](#structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819) | Http Response Code
`public TArray< FString > `[`HttpHeaders`](#structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a) | Http Headers
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`HttpBody`](#structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045) | Http Body as Json
`public `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`RHErrorInfo`](#structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd) | Parsed RallyHere error
`public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0)`()` | 
`public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556)`(const RallyHereAPI::FResponse_CustomEndpointSend & Resp)` | 

### Members

#### `public int32 `[`HttpResponseCode`](#structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819) <a id="structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819"></a>

Http Response Code

#### `public TArray< FString > `[`HttpHeaders`](#structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a) <a id="structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a"></a>

Http Headers

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`HttpBody`](#structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045) <a id="structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045"></a>

Http Body as Json

#### `public `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`RHErrorInfo`](#structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd) <a id="structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd"></a>

Parsed RallyHere error

#### `public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0)`()` <a id="structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0"></a>

#### `public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556)`(const RallyHereAPI::FResponse_CustomEndpointSend & Resp)` <a id="structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556"></a>

## struct `FRH_ObjectVersionCheck` <a id="structFRH__ObjectVersionCheck"></a>

An helper object that will take in an desired version check behavior and apply it to a request.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`IfMatch`](#structFRH__ObjectVersionCheck_1a23f36f3c677cb0164e1b899e7dcae7eb) | The value to be passed in the IfMatch header
`public FString `[`IfNoneMatch`](#structFRH__ObjectVersionCheck_1a3fcf08f52d066f1073b309e0d6aa1cb3) | The value to be passed in the IfNoneMatch header
`public FString `[`IfModifiedSince`](#structFRH__ObjectVersionCheck_1ad1a70184d4fc5f715174813cac82c574) | The value to be passed in the IfModifiedSince header, must be in HttpDate format (see FDateTime::ToHttpDate())
`public FString `[`IfNotModifiedSince`](#structFRH__ObjectVersionCheck_1a7066325910c5f7e1fe330acbf9388032) | The value to be passed in the IfUnmodifiedSince header, must be in HttpDate format (see FDateTime::ToHttpDate())
`public  `[`GENERATED_USTRUCT_BODY`](#structFRH__ObjectVersionCheck_1a9740569803d27f650d530a56da72f8f7)`()` | 
`public inline  `[`FRH_ObjectVersionCheck`](#structFRH__ObjectVersionCheck_1a70ed07e58712c37d8c69200339326c85)`(const FString & InIfMatch,const FString & InIfNoneMatch,const FString & InIfModifiedSince,const FString & InIfNotModifiedSince)` | 
`public template<>`  <br/>`inline void `[`ApplyToRequest`](#structFRH__ObjectVersionCheck_1a42af1dc8f3569b4ea5b56224ce7c8df2)`(T & InRequest) const` | Apply the version check behavior to a request.

### Members

#### `public FString `[`IfMatch`](#structFRH__ObjectVersionCheck_1a23f36f3c677cb0164e1b899e7dcae7eb) <a id="structFRH__ObjectVersionCheck_1a23f36f3c677cb0164e1b899e7dcae7eb"></a>

The value to be passed in the IfMatch header

#### `public FString `[`IfNoneMatch`](#structFRH__ObjectVersionCheck_1a3fcf08f52d066f1073b309e0d6aa1cb3) <a id="structFRH__ObjectVersionCheck_1a3fcf08f52d066f1073b309e0d6aa1cb3"></a>

The value to be passed in the IfNoneMatch header

#### `public FString `[`IfModifiedSince`](#structFRH__ObjectVersionCheck_1ad1a70184d4fc5f715174813cac82c574) <a id="structFRH__ObjectVersionCheck_1ad1a70184d4fc5f715174813cac82c574"></a>

The value to be passed in the IfModifiedSince header, must be in HttpDate format (see FDateTime::ToHttpDate())

#### `public FString `[`IfNotModifiedSince`](#structFRH__ObjectVersionCheck_1a7066325910c5f7e1fe330acbf9388032) <a id="structFRH__ObjectVersionCheck_1a7066325910c5f7e1fe330acbf9388032"></a>

The value to be passed in the IfUnmodifiedSince header, must be in HttpDate format (see FDateTime::ToHttpDate())

#### `public  `[`GENERATED_USTRUCT_BODY`](#structFRH__ObjectVersionCheck_1a9740569803d27f650d530a56da72f8f7)`()` <a id="structFRH__ObjectVersionCheck_1a9740569803d27f650d530a56da72f8f7"></a>

#### `public inline  `[`FRH_ObjectVersionCheck`](#structFRH__ObjectVersionCheck_1a70ed07e58712c37d8c69200339326c85)`(const FString & InIfMatch,const FString & InIfNoneMatch,const FString & InIfModifiedSince,const FString & InIfNotModifiedSince)` <a id="structFRH__ObjectVersionCheck_1a70ed07e58712c37d8c69200339326c85"></a>

#### `public template<>`  <br/>`inline void `[`ApplyToRequest`](#structFRH__ObjectVersionCheck_1a42af1dc8f3569b4ea5b56224ce7c8df2)`(T & InRequest) const` <a id="structFRH__ObjectVersionCheck_1a42af1dc8f3569b4ea5b56224ce7c8df2"></a>

Apply the version check behavior to a request.

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

