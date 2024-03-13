---
title: FRH_SimpleQueryHelper Class
---Inherits from [FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper)

Templated helper class for asynchronously executing basic RallyHere API queries.

## Summary
| Kind | View | Description |
|------|------|-------------|
|BaseType::Delegate|[UpdateDelegate](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be)|Templated delegate to call with the API's response if query successfully completes.|
|FRH_GenericSuccessWithErrorBlock|[Delegate](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54)|Generic completion delegate called regardless of success or failure.|
|FHttpRequestPtr|[HttpRequest](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494)|The HTTP request object used to query the API.|
|[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo)|[ErrorInfo](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f)||
||[FRH_SimpleQueryHelper](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835)(const typename BaseType::Delegate & InUpdateDelegate, const FRH_GenericSuccessWithErrorBlock & InCompleteDelegate, int32 InPriority)|Constructor allowing for the specification of callback delegates.|
||[FRH_SimpleQueryHelper](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f)(const typename BaseType::Delegate & InUpdateDelegate, const FRH_GenericSuccessBlock & InCompleteDelegate, int32 InPriority)|Constructor allowing for the specification of callback delegates.|
|void|[Start](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1adf977f6c0dd9bd070de048fedcd12a5c)(typename BaseType::API & API, const typename BaseType::Request & Request)|Begins the task of asynchronously querying the API.|
|void|[OnQueryComplete](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8)(const typename BaseType::Response & Resp)|Called once the asynchronous query has returned a response.|
|FString|[GetName](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec)()|Gets the templated name for this object.|
|void|[ExecuteCallback](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331)(bool bSuccess)|Executes the generic delegate associated with this asynchronous task forwarding bSuccess.|
## Protected Attributes



### `UpdateDelegate` <a id="classFRH__SimpleQueryHelper_1a8a472b78bd02d5b7f009fd03d66985be"></a>

`BaseType::Delegate FRH_SimpleQueryHelper< BaseType >::UpdateDelegate`

Templated delegate to call with the API's response if query successfully completes.




### `Delegate` <a id="classFRH__SimpleQueryHelper_1abcfae661faa10bc182cc4882a8446b54"></a>

`FRH_GenericSuccessWithErrorBlock FRH_SimpleQueryHelper< BaseType >::Delegate`

Generic completion delegate called regardless of success or failure.




### `HttpRequest` <a id="classFRH__SimpleQueryHelper_1a9dec6a0aee9304e3f6e0a310afe97494"></a>

`FHttpRequestPtr FRH_SimpleQueryHelper< BaseType >::HttpRequest`

The HTTP request object used to query the API.




### `ErrorInfo` <a id="classFRH__SimpleQueryHelper_1a33843e0102515af8f9576f1115d6911f"></a>

`FRH_ErrorInfo FRH_SimpleQueryHelper< BaseType >::ErrorInfo`



Error Information 




## Public Functions



### `FRH_SimpleQueryHelper` <a id="classFRH__SimpleQueryHelper_1a6d5816682112de01ec950d228924d835"></a>

 FRH_SimpleQueryHelper(const typename BaseType::Delegate & InUpdateDelegate, const FRH_GenericSuccessWithErrorBlock & InCompleteDelegate, int32 InPriority)

#### Parameters

| Type | Name |
|------|------|
|const typename BaseType::Delegate &|InUpdateDelegate|
|const FRH_GenericSuccessWithErrorBlock &|InCompleteDelegate|
|int32|InPriority|

#### Description

Constructor allowing for the specification of callback delegates.


#### Parameters

InUpdateDelegate
: Templated delegate to call with the API's response if query successfully completes 
InCompleteDelegate
: Generic completion delegate called regardless of success or failure 



### `FRH_SimpleQueryHelper` <a id="classFRH__SimpleQueryHelper_1af6c2dbc3abf92fc2972831a9b8edcd7f"></a>

 FRH_SimpleQueryHelper(const typename BaseType::Delegate & InUpdateDelegate, const FRH_GenericSuccessBlock & InCompleteDelegate, int32 InPriority)

#### Parameters

| Type | Name |
|------|------|
|const typename BaseType::Delegate &|InUpdateDelegate|
|const FRH_GenericSuccessBlock &|InCompleteDelegate|
|int32|InPriority|

#### Description

Constructor allowing for the specification of callback delegates.


#### Parameters

InUpdateDelegate
: Templated delegate to call with the API's response if query successfully completes 
InCompleteDelegate
: Generic completion delegate called regardless of success or failure 



### `Start` <a id="classFRH__SimpleQueryHelper_1adf977f6c0dd9bd070de048fedcd12a5c"></a>

void Start(typename BaseType::API & API, const typename BaseType::Request & Request)

#### Parameters

| Type | Name |
|------|------|
|typename BaseType::API &|API|
|const typename BaseType::Request &|Request|

#### Description

Begins the task of asynchronously querying the API.


#### Parameters

API
: API target for the query (i.e. User, Session, Inventory, etc.) 
Request
: Templated request data for the query 
Priority
: The Priority of the call, lower is higher priority 



### `OnQueryComplete` <a id="classFRH__SimpleQueryHelper_1aa31bbdb22654a1396b93497dcd2ae1e8"></a>

void OnQueryComplete(const typename BaseType::Response & Resp)

#### Parameters

| Type | Name |
|------|------|
|const typename BaseType::Response &|Resp|

#### Description

Called once the asynchronous query has returned a response.


#### Parameters

Resp
: Templated response data for the query 



### `GetName` <a id="classFRH__SimpleQueryHelper_1a6084b0d198a8ebd51d3ca5d8699fb7ec"></a>

FString GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the templated name for this object.




### `ExecuteCallback` <a id="classFRH__SimpleQueryHelper_1abd7b0c6ff2ee89e535370844cbd30331"></a>

void ExecuteCallback(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Executes the generic delegate associated with this asynchronous task forwarding bSuccess.





