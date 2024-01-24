# Common <a id="group__Common"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`define `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd)            | Helper for declaring [FRH_DelegateBlock](Common.md#structFRH__DelegateBlock) types.
`enum `[`ERHAPI_PlatformTypes_DEPRECATED`](#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)            | Generic blueprint and native delegate used to report success or failure.
`public  `[`DECLARE_DYNAMIC_DELEGATE_OneParam`](#group__Common_1gaf762e5da533f56e4052da1ceead76038)`(FRH_GenericSuccessDynamicDelegate,bool,bSuccess)`            | Generic blueprint friendly delegate used to report success or failure.
`public  `[`DECLARE_DELEGATE_OneParam`](#group__Common_1ga4f9a9dad692ff89dfce417fb9d5be258)`(FRH_GenericSuccessDelegate,bool)`            | Generic native-only delegate used to report success or failure.
`public  `[`DECLARE_DYNAMIC_DELEGATE_TwoParams`](#group__Common_1gac075c01ed93280f69479e554a3d9871b)`(FRH_GenericSuccessWithErrorDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | Generic blueprint friendly delegate used to report success or failure with error info.
`public  `[`DECLARE_DELEGATE_TwoParams`](#group__Common_1ga00a137fb95acdc4001c1f7ce8151a2b9)`(FRH_GenericSuccessWithErrorDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | Generic native-only delegate used to report success or failure.
`public FORCEINLINE FRH_GenericSuccessWithErrorBlock `[`RH_ConvertGenericSucessDelegateBlock`](#group__Common_1ga1334d6dc0c562398f47369cb2dda495d)`(const FRH_GenericSuccessBlock & InDelegate)`            | Generic blueprint and native delegate used to report success or failure.
`public  `[`DECLARE_DYNAMIC_DELEGATE_OneParam`](#group__Common_1ga66c37330911c8fe234a7074cef68dd80)`(FRH_CustomEndpointDynamicDelegate,const `[`FRH_CustomEndpointResponseWrapper`](Common.md#structFRH__CustomEndpointResponseWrapper)` &,CustomResponseWrapper)`            | Dynamic delegate used for custom endpoint calls.
`public  `[`DECLARE_DELEGATE_OneParam`](#group__Common_1ga5bba8beab7e3653c4bfa887eaec48a87)`(FRH_CustomEndpointDelegate,const `[`FRH_CustomEndpointResponseWrapper`](Common.md#structFRH__CustomEndpointResponseWrapper)` &)`            | Native delegate used for custom endpoint calls.
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)`            | Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.
`public static bool `[`RH_BreakApartURL`](#group__Common_1ga98aea8d69558cf3580e89e65d73256dd)`(const FString & URL,const FString & BaseURL,FString & APIName,TArray< FString > & APIParams)`            | Helper function to break a fully qualified URL into a base URL, API name, and an array of API parameters.
`class `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper) | Base helper class for asynchronous RallyHere tasks.
`class `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper) | Templated helper class for asynchronously executing basic RallyHere API queries.
`struct `[`FRH_DelegateBlock`](#structFRH__DelegateBlock) | Templated helper class defining a native and blueprint friendly delegate as a single object.
`struct `[`FRH_ErrorInfo`](#structFRH__ErrorInfo) | Generic blueprint and native delegate used to report success or failure.
`struct `[`FRH_CustomEndpointRequestWrapper`](#structFRH__CustomEndpointRequestWrapper) | Wrapper calls for custom endpoint requests.
`struct `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper) | Wrapper calls for custom endpoint responses.
`struct `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId) | Common structure for identifying players on any known platform.

## Members

#### `define `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd) <a id="group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd"></a>

Helper for declaring [FRH_DelegateBlock](Common.md#structFRH__DelegateBlock) types.

#### `enum `[`ERHAPI_PlatformTypes_DEPRECATED`](#group__Common_1ga8d2aa1d87e398a5548531751e8cea759) <a id="group__Common_1ga8d2aa1d87e398a5548531751e8cea759"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
PT_UNKNOWN            | Platform not specified
PT_UNUSED_1            | Unused platform [DEPRECATED]
PT_ANON            | RallyHere "anonymous" account platform
PT_UNUSED_3            | Unused platform [DEPRECATED]
PT_AMAZON            | Amazon Prime
PT_STEAM            | Steam
PT_UNUSED_6            | Unused platform [DEPRECATED]
PT_UNUSED_7            | Unused platform [DEPRECATED]
PT_UNUSED_8            | Unused platform [DEPRECATED]
PT_PSN            | Sony PlayStation
PT_XBOX_LIVE            | Microsoft Xbox
PT_BASIC            | Username and Password login
PT_FACEBOOK            | Facebook
PT_GOOGLE            | Google (not Google Play)
PT_UNUSED_14            | Unused platform [DEPRECATED]
PT_UNUSED_15            | Unused platform [DEPRECATED]
PT_TWITCH            | Twitch
PT_UNUSED_17            | Unused platform [DEPRECATED]
PT_UNUSED_18            | Unused platform [DEPRECATED]
PT_UNUSED_19            | Unused platform [DEPRECATED]
PT_UNUSED_20            | Unused platform [DEPRECATED]
PT_UNUSED_21            | Unused platform [DEPRECATED]
PT_NINTENDO_SWITCH            | Nintendo Service Account ID (NSAID)
PT_UNUSED_23            | Unused platform [DEPRECATED]
PT_APPLE            | Apple
PT_DISCORD            | Discord
PT_NINTENDO            | Nintendo Legacy Account ID (NAID)
PT_UNUSED_27            | Unused platform [DEPRECATED]
PT_EPIC            | Epic Online Services
PT_UNUSED_29            | Unused platform [DEPRECATED]
PT_SIMULMEDIA            | Simulmedia Ad System
PT_UNUSED_31            | Unused platform [DEPRECATED]
PT_GOOGLE_PLAY            | Google Play
PT_NINTENDO_PPID            | Nintendo Pairwise Pseudonymous ID (PPID)
PT_MAX_COUNT            | Total number of support platforms

Generic blueprint and native delegate used to report success or failure.

All known platforms (some no longer supported), deprecated

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

#### `public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)` <a id="group__Common_1ga51b3d76527de2fccacb53501f14c7991"></a>

Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.

#### Parameters
* `PlatformId` The platform id to generate a hash for 

#### Returns
Semi-unique hash value for the given platform id

#### `public static bool `[`RH_BreakApartURL`](#group__Common_1ga98aea8d69558cf3580e89e65d73256dd)`(const FString & URL,const FString & BaseURL,FString & APIName,TArray< FString > & APIParams)` <a id="group__Common_1ga98aea8d69558cf3580e89e65d73256dd"></a>

Helper function to break a fully qualified URL into a base URL, API name, and an array of API parameters.

#### Parameters
* `URL` The fully qualified URL that we want to break apart 

* `BaseURL` The base URL of the specified fully qualified URL 

* `APIName` The name of the API the URL is hitting 

* `APIParams` The array of API parameters from the URL 

#### Returns
Semi-unique hash value for the given platform id

## class `FRH_AsyncTaskHelper` <a id="classFRH__AsyncTaskHelper"></a>

```
class FRH_AsyncTaskHelper
  : public TSharedFromThis< FRH_AsyncTaskHelper >
```

Base helper class for asynchronous RallyHere tasks.

#### Summary

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

#### Members

#### `public inline FORCEINLINE bool `[`IsRunning`](#classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193)`() const` <a id="classFRH__AsyncTaskHelper_1a4b4801b088f55346b372073749d2c193"></a>

Returns whether or not the task is currently executing.

<br>
#### `public FString `[`GetName`](#classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af)`() const` <a id="classFRH__AsyncTaskHelper_1a80428a85b9e421342c26cfc89d9999af"></a>

Abstract function for fetching the name of the asynchronous task.

<br>
#### `public inline FORCEINLINE int32 `[`GetTaskPriority`](#classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4)`() const` <a id="classFRH__AsyncTaskHelper_1a8ba7451dcebfaafd9baa86269e5731b4"></a>

Gets the TaskPriority.

<br>
#### `public inline FORCEINLINE FTimespan `[`GetDuration`](#classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7)`() const` <a id="classFRH__AsyncTaskHelper_1a5254f3c8ff8b85769fb7e236fd0911e7"></a>

Gets the Duration the task has been running for.

<br>
#### `protected int32 `[`TaskPriority`](#classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2) <a id="classFRH__AsyncTaskHelper_1a3cd0f6d0bc966c1d11babe6c0e55c3a2"></a>

<br>
#### `protected FDateTime `[`StartedTime`](#classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde) <a id="classFRH__AsyncTaskHelper_1a03029966e286906faf052d41f377dfde"></a>

<br>
#### `protected FDateTime `[`EndedTime`](#classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024) <a id="classFRH__AsyncTaskHelper_1adbb5e6fbcb188eaa3b73a810fe2ad024"></a>

<br>
#### `protected inline  `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b)`()` <a id="classFRH__AsyncTaskHelper_1ac536499bcb1447a61c1532d52f79712b"></a>

Default constructor.

<br>
#### `protected inline  `[`FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34)`(int32 InPriority)` <a id="classFRH__AsyncTaskHelper_1a5301b60fab1a7a9c0cb2753390a4bd34"></a>

Constructor with a priority for the task helper.

<br>
#### `protected virtual  `[`~FRH_AsyncTaskHelper`](#classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345)`() = default` <a id="classFRH__AsyncTaskHelper_1af13727ce18a5652f71d9bc7aaf1c8345"></a>

Default destructor.

<br>
#### `protected void `[`ExecuteCallback`](#classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6)`(bool bSuccess) const` <a id="classFRH__AsyncTaskHelper_1ad697e43c14f4bb6d7a490e790cb9c1a6"></a>

Abstract function called when the asynchronous tasks completes regardless of success or failure.

<br>
#### `protected inline virtual void `[`Cleanup`](#classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c)`()` <a id="classFRH__AsyncTaskHelper_1a4b440306f400ffe304aa77d48fb9d57c"></a>

Function called to do cleanup when the asynchronous tasks is about to be deleted.

<br>
#### `protected inline void `[`Started`](#classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa)`()` <a id="classFRH__AsyncTaskHelper_1a08f17e94ab3f155d4834ce5f6f2e18aa"></a>

Function called when the asynchronous task has started.

<br>
#### `protected inline void `[`Failed`](#classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7)`(const FString & FailureReason)` <a id="classFRH__AsyncTaskHelper_1a0715db32b4969b9ade04459ae80df8a7"></a>

Function called in the event that the asynchronous task has failed.

<br>
#### `protected inline virtual void `[`Cancel`](#classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b)`(const FString & CancelReason)` <a id="classFRH__AsyncTaskHelper_1aaf29b289af9c82871e3814205d566e0b"></a>

Cancels the asynchronous task by failing it out.

#### Parameters
* `CancelReason` Tracking string pushed to log for debugging purposes. 

This is intended to be called from external code, not from within the task itself. It will just immediately fail, but this is virtual in case any locking etc needs to be done for safety.

<br>
#### `protected inline void `[`Completed`](#classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784)`(bool bSuccess)` <a id="classFRH__AsyncTaskHelper_1a6abf59b65bbdf0dbeaa526e96dac5784"></a>

Called when the asynchronous task has completed.

#### Parameters
* `bSuccess` Whether or not the task completed successfully.

<br>
## class `FRH_SimpleQueryHelper` <a id="classFRH__SimpleQueryHelper"></a>

```
class FRH_SimpleQueryHelper
  : public FRH_AsyncTaskHelper
```

Templated helper class for asynchronously executing basic RallyHere API queries.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessWithErrorBlock & InCompleteDelegate,int32 InPriority)` | Constructor allowing for the specification of callback delegates.
`public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessBlock & InCompleteDelegate,int32 InPriority)` | Constructor allowing for the specification of callback delegates.
`public inline virtual void `[`Start`](#classFRH__SimpleQueryHelper_1adf977f6c0dd9bd070de048fedcd12a5c)`(typename BaseType::API & API,const typename BaseType::Request & Request)` | Begins the task of asynchronously querying the API.
`public inline void `[`OnQueryComplete`](#classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8)`(const typename BaseType::Response & Resp)` | Called once the asynchronous query has returned a response.
`public inline virtual FString `[`GetName`](#classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec)`() const` | Gets the templated name for this object.
`public inline virtual void `[`ExecuteCallback`](#classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331)`(bool bSuccess) const` | Executes the generic delegate associated with this asynchronous task forwarding bSuccess.
`protected BaseType::Delegate `[`UpdateDelegate`](#classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be) | Templated delegate to call with the API's response if query successfully completes.
`protected FRH_GenericSuccessWithErrorBlock `[`Delegate`](#classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54) | Generic completion delegate called regardless of success or failure.
`protected FHttpRequestPtr `[`HttpRequest`](#classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494) | The HTTP request object used to query the API.
`protected `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`ErrorInfo`](#classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f) | Error Information

#### Members

#### `public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessWithErrorBlock & InCompleteDelegate,int32 InPriority)` <a id="classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835"></a>

Constructor allowing for the specification of callback delegates.

#### Parameters
* `InUpdateDelegate` Templated delegate to call with the API's response if query successfully completes 

* `InCompleteDelegate` Generic completion delegate called regardless of success or failure

<br>
#### `public inline  `[`FRH_SimpleQueryHelper`](#classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f)`(const typename BaseType::Delegate & InUpdateDelegate,const FRH_GenericSuccessBlock & InCompleteDelegate,int32 InPriority)` <a id="classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f"></a>

Constructor allowing for the specification of callback delegates.

#### Parameters
* `InUpdateDelegate` Templated delegate to call with the API's response if query successfully completes 

* `InCompleteDelegate` Generic completion delegate called regardless of success or failure

<br>
#### `public inline virtual void `[`Start`](#classFRH__SimpleQueryHelper_1adf977f6c0dd9bd070de048fedcd12a5c)`(typename BaseType::API & API,const typename BaseType::Request & Request)` <a id="classFRH__SimpleQueryHelper_1adf977f6c0dd9bd070de048fedcd12a5c"></a>

Begins the task of asynchronously querying the API.

#### Parameters
* `API` API target for the query (i.e. User, Session, Inventory, etc.) 

* `Request` Templated request data for the query 

* `Priority` The Priority of the call, lower is higher priority

<br>
#### `public inline void `[`OnQueryComplete`](#classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8)`(const typename BaseType::Response & Resp)` <a id="classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8"></a>

Called once the asynchronous query has returned a response.

#### Parameters
* `Resp` Templated response data for the query

<br>
#### `public inline virtual FString `[`GetName`](#classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec)`() const` <a id="classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec"></a>

Gets the templated name for this object.

<br>
#### `public inline virtual void `[`ExecuteCallback`](#classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331)`(bool bSuccess) const` <a id="classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331"></a>

Executes the generic delegate associated with this asynchronous task forwarding bSuccess.

<br>
#### `protected BaseType::Delegate `[`UpdateDelegate`](#classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be) <a id="classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be"></a>

Templated delegate to call with the API's response if query successfully completes.

<br>
#### `protected FRH_GenericSuccessWithErrorBlock `[`Delegate`](#classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54) <a id="classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54"></a>

Generic completion delegate called regardless of success or failure.

<br>
#### `protected FHttpRequestPtr `[`HttpRequest`](#classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494) <a id="classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494"></a>

The HTTP request object used to query the API.

<br>
#### `protected `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`ErrorInfo`](#classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f) <a id="classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f"></a>

Error Information

<br>
## struct `FRH_DelegateBlock` <a id="structFRH__DelegateBlock"></a>

Templated helper class defining a native and blueprint friendly delegate as a single object.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public DelegateType `[`Delegate`](#structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae) | Native-only version of the delegate.
`public DynamicDelegateType `[`DynDelegate`](#structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc) | Blueprint friendly version of the delegate.
`public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638)`()` | Default constructor leaving both delegates unbound.
`public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9)`(const DelegateType & InDelegate)` | Constructor for binding just the native-only version of the delegate.
`public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df)`(const DynamicDelegateType & InDynDelegate)` | Constructor for binding just the blueprint friendly version of the delegate.
`public inline void `[`ExecuteIfBound`](#structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364)`(ParamList... params) const` | Executes both the native-only and blueprint friendly versions of the delegate, if they're bound.

#### Members

#### `public DelegateType `[`Delegate`](#structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae) <a id="structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae"></a>

Native-only version of the delegate.

<br>
#### `public DynamicDelegateType `[`DynDelegate`](#structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc) <a id="structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc"></a>

Blueprint friendly version of the delegate.

<br>
#### `public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638)`()` <a id="structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638"></a>

Default constructor leaving both delegates unbound.

<br>
#### `public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9)`(const DelegateType & InDelegate)` <a id="structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9"></a>

Constructor for binding just the native-only version of the delegate.

<br>
#### `public inline  `[`FRH_DelegateBlock`](#structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df)`(const DynamicDelegateType & InDynDelegate)` <a id="structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df"></a>

Constructor for binding just the blueprint friendly version of the delegate.

<br>
#### `public inline void `[`ExecuteIfBound`](#structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364)`(ParamList... params) const` <a id="structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364"></a>

Executes both the native-only and blueprint friendly versions of the delegate, if they're bound.

<br>
## struct `FRH_ErrorInfo` <a id="structFRH__ErrorInfo"></a>

Generic blueprint and native delegate used to report success or failure.

Generic handler for HTTP request errors.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`ResponseCode`](#structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439) | The Error Code of the HTTP request.
`public FString `[`ResponseContent`](#structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330) | Content of the HTTP request response.
`public  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1ac686c671d6b2e7bd7e13899fe82cecb8)`() = default` | Default constructor.
`public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12)`(const RallyHereAPI::FResponse * Response)` | Construct from Response Ptr.
`public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516)`(const RallyHereAPI::FResponse & Response)` | Construct from Response Ref.
`public virtual  `[`~FRH_ErrorInfo`](#structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf)`() = default` | Default destructor.
`public inline void `[`ImportErrorInfo`](#structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d)`(const RallyHereAPI::FResponse & Response)` | Parses The HTTP response into the error info.

#### Members

#### `public int32 `[`ResponseCode`](#structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439) <a id="structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439"></a>

The Error Code of the HTTP request.

<br>
#### `public FString `[`ResponseContent`](#structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330) <a id="structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330"></a>

Content of the HTTP request response.

<br>
#### `public  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1ac686c671d6b2e7bd7e13899fe82cecb8)`() = default` <a id="structFRH__ErrorInfo_1ac686c671d6b2e7bd7e13899fe82cecb8"></a>

Default constructor.

<br>
#### `public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12)`(const RallyHereAPI::FResponse * Response)` <a id="structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12"></a>

Construct from Response Ptr.

<br>
#### `public inline  `[`FRH_ErrorInfo`](#structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516)`(const RallyHereAPI::FResponse & Response)` <a id="structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516"></a>

Construct from Response Ref.

<br>
#### `public virtual  `[`~FRH_ErrorInfo`](#structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf)`() = default` <a id="structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf"></a>

Default destructor.

<br>
#### `public inline void `[`ImportErrorInfo`](#structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d)`(const RallyHereAPI::FResponse & Response)` <a id="structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d"></a>

Parses The HTTP response into the error info.

#### Parameters
* `Response` The response to parse.

<br>
## struct `FRH_CustomEndpointRequestWrapper` <a id="structFRH__CustomEndpointRequestWrapper"></a>

Wrapper calls for custom endpoint requests.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EndpointId`](#structFRH__CustomEndpointRequestWrapper_1ad1250992238eb10948193a97597ac65b) | Http Endpoint ID that is mapped to a URL
`public int32 `[`Priority`](#structFRH__CustomEndpointRequestWrapper_1a6b6460e53c2672f18efe9fea5cd36b2b) | Call Priority
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Body`](#structFRH__CustomEndpointRequestWrapper_1ad733b4395528d978c61320f1d06d23db) | Http Body as Json
`public FString `[`ContentType`](#structFRH__CustomEndpointRequestWrapper_1a0c5a56270404d556c0d65ba873cdaef3) | Http Content Type
`public inline  `[`FRH_CustomEndpointRequestWrapper`](#structFRH__CustomEndpointRequestWrapper_1a6334b30e571cdb5577794ea5ee1c9cb4)`()` | 

#### Members

#### `public FString `[`EndpointId`](#structFRH__CustomEndpointRequestWrapper_1ad1250992238eb10948193a97597ac65b) <a id="structFRH__CustomEndpointRequestWrapper_1ad1250992238eb10948193a97597ac65b"></a>

Http Endpoint ID that is mapped to a URL

<br>
#### `public int32 `[`Priority`](#structFRH__CustomEndpointRequestWrapper_1a6b6460e53c2672f18efe9fea5cd36b2b) <a id="structFRH__CustomEndpointRequestWrapper_1a6b6460e53c2672f18efe9fea5cd36b2b"></a>

Call Priority

<br>
#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Body`](#structFRH__CustomEndpointRequestWrapper_1ad733b4395528d978c61320f1d06d23db) <a id="structFRH__CustomEndpointRequestWrapper_1ad733b4395528d978c61320f1d06d23db"></a>

Http Body as Json

<br>
#### `public FString `[`ContentType`](#structFRH__CustomEndpointRequestWrapper_1a0c5a56270404d556c0d65ba873cdaef3) <a id="structFRH__CustomEndpointRequestWrapper_1a0c5a56270404d556c0d65ba873cdaef3"></a>

Http Content Type

<br>
#### `public inline  `[`FRH_CustomEndpointRequestWrapper`](#structFRH__CustomEndpointRequestWrapper_1a6334b30e571cdb5577794ea5ee1c9cb4)`()` <a id="structFRH__CustomEndpointRequestWrapper_1a6334b30e571cdb5577794ea5ee1c9cb4"></a>

<br>
## struct `FRH_CustomEndpointResponseWrapper` <a id="structFRH__CustomEndpointResponseWrapper"></a>

Wrapper calls for custom endpoint responses.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`HttpResponseCode`](#structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819) | Http Response Code
`public TArray< FString > `[`HttpHeaders`](#structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a) | Http Headers
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`HttpBody`](#structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045) | Http Body as Json
`public `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`RHErrorInfo`](#structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd) | Parsed RallyHere error
`public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0)`()` | 
`public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556)`(const RallyHereAPI::FResponse_CustomEndpointSend & Resp)` | 

#### Members

#### `public int32 `[`HttpResponseCode`](#structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819) <a id="structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819"></a>

Http Response Code

<br>
#### `public TArray< FString > `[`HttpHeaders`](#structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a) <a id="structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a"></a>

Http Headers

<br>
#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`HttpBody`](#structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045) <a id="structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045"></a>

Http Body as Json

<br>
#### `public `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` `[`RHErrorInfo`](#structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd) <a id="structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd"></a>

Parsed RallyHere error

<br>
#### `public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0)`()` <a id="structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0"></a>

<br>
#### `public inline  `[`FRH_CustomEndpointResponseWrapper`](#structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556)`(const RallyHereAPI::FResponse_CustomEndpointSend & Resp)` <a id="structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556"></a>

<br>
## struct `FRH_PlayerPlatformId` <a id="structFRH__PlayerPlatformId"></a>

Common structure for identifying players on any known platform.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`UserId`](#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3) | Player identifier for the given platform type.
`public ERHAPI_Platform `[`PlatformType`](#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab) | Platform type of this identifier.
`public inline FORCEINLINE bool `[`IsValid`](#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)`() const` | Returns whether or not this player platform ID has been filled with sensible data.
`public inline bool `[`operator==`](#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)`(const `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId)` & Other) const` | Returns whether or not this player platform ID exactly matches the given player platform ID.
`public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)`()` | Default constructor that leaves the user ID empty and sets the platform type to "unknown".
`public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)`(const FString & InUserId,ERHAPI_Platform InPlatformType)` | Constructor for specifying user ID and platform type.

#### Members

#### `public FString `[`UserId`](#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3) <a id="structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3"></a>

Player identifier for the given platform type.

<br>
#### `public ERHAPI_Platform `[`PlatformType`](#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab) <a id="structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab"></a>

Platform type of this identifier.

<br>
#### `public inline FORCEINLINE bool `[`IsValid`](#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)`() const` <a id="structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e"></a>

Returns whether or not this player platform ID has been filled with sensible data.

<br>
#### `public inline bool `[`operator==`](#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)`(const `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId)` & Other) const` <a id="structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa"></a>

Returns whether or not this player platform ID exactly matches the given player platform ID.

<br>
#### `public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)`()` <a id="structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41"></a>

Default constructor that leaves the user ID empty and sets the platform type to "unknown".

<br>
#### `public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)`(const FString & InUserId,ERHAPI_Platform InPlatformType)` <a id="structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc"></a>

Constructor for specifying user ID and platform type.

<br>
