---
title: URH_WebRequests Class
---Inherits from UObject

Class to handle executing and tracking low-level Http Web Requests.

## Summary
| Kind | View | Description |
|------|------|-------------|
|RallyHereAPI::FRallyHereAPIAll *|[APIs](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a2b25ac5084d96214d1ae40d6efb8b018)||
|TArray< FName >|[LoggedAPIs](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a556b3e4c67912513a41cce24f3b4cd27)||
|int|[TrackedRequestsCountLimit](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a32bf90de9c0c7965fd9b1a3bff61b057)||
|bool|[bRetainWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1acc8865dae2b8b8b7349880d76529d493)||
|TDoubleLinkedList< TSharedPtr< [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) > >|[TrackedRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1aba98347cea87fb0d7287e709b4811aa5)||
|TMap< FGuid, TSharedPtr< [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) > >|[TrackedRequestsById](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a73f85f90c158ca98fa114ac0bd04cd24)||
|TMap< FName, int32 >|[APINameToCallCountMap](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a0a2eca8089e14569c7c7413d3e8e7ce4)||
|TMap< FName, int32 >|[SimplifiedPathToCallCountMap](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a96d30e07f39719909dad644f94e4657f)||
|int32|[BurstCountThreshold](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ac46e510d6934711301d66fd30b34aceb)||
|int32|[BurstTimeThresholdInSeconds](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a7f9465ce2063962a525a85a08519058c)||
|void|[Initialize](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e)(RallyHereAPI::FRallyHereAPIAll * InAPIs)|Initialize the Web Request system.|
|void|[Uninitialize](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef)()|Safely tears down the Web Request system.|
|const TDoubleLinkedList< TSharedPtr< [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) > > &|[GetTrackedRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ae509b51d596a857b604d52ebe268b196)()|Gets all of the requests that have been tracked.|
|const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) *|[GetTrackedRequestById](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a5eaf4f440b4e90f8a96e280cc0bc781f)(const FGuid & id)|Gets a specific request that has been tracked.|
|void|[ClearTrackedRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a5b244dbdc062a2ccc6215120568081ef)()|Clears all tracked requests out.|
|const TArray< FName >|[GetAPINames](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ac70288b2112bf750dcf1e10bceb0e58b)()|Gets the list of all APIs able to be tracked.|
|bool|[GetLogAllWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a0b7bd41f05fbd01363e4246418fcb2c0)()|Gets if we are currently logging web requests from all APIs.|
|void|[SetLogAllWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a896febe3fa4643357764c2822ce77ff4)(bool bValue)|Sets logging web requests for all APIs.|
|FString|[FormatWebRequestToJsonBlob](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186)(const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) & request)|Converts a Web Request to a string in JSON format.|
|TSharedPtr< FJsonObject >|[LogTrackedWebRequestsToJSON](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1aaf261d2509ba4e48a59613d53fd0b024)()|Logs all tracked request to a specified file.|
|FORCEINLINE bool|[GetLogWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a2e0e846ba66a95e7680a51d42edb6706)(const FName & APIName)|Gets if a specific API is being logged currently.|
|FORCEINLINE void|[SetLogWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a2a07322b447aac227feb43192aaf3372)(const FName & APIName, bool bValue)|Sets logging for a specific API.|
|FORCEINLINE bool|[GetIsRetainingWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a9248d832ca7d43f05d7e528703cf5df1)()|Get whether web requests should be cached indefinitely or cleared after reaching the cache limit.|
|FORCEINLINE void|[SetIsRetainingWebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ac640bcc4171398824dbca3fff9bcebfd)(bool bValue)|Set whether web requests should be cached indefinitely or cleared after reaching the cache limit.|
|const TMap< FName, int32 >|[GetAPINameToCallCountMap](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a018f06e0cf588740d42b80af334dd238)()|Get the map that tracks all-time call count for each API.|
|const TMap< FName, int32 >|[GetSimplifiedPathToCallCountMap](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ac940579b57d7c6ad400fda8fc4a42e2e)()|Get the map that tracks all-time call count for each generic URL.|
|void|[GetRecentCallCountMaps](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1af8e59e4e179be1054a8783f6c56daca8)(TMap< FName, int32 > * OutAPIRecentCallCountMap, TMap< FName, int32 > * OutURLRecentCallCountMap)|Get the maps that track call counts in the last 60s.|
|void|[DetectRecentBursts](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a96cc4bf85561ff86c5444563e5d4fe40)(TMap< FName, TTuple< int32, int32 >> * OutBurstMapByAPIName, TMap< FName, TTuple< int32, int32 >> * OutBurstMapByURL)|Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold.|
|void|[OnWebRequestStarted](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1aa0d71ba37d212251e5e8ca147cca0b8f)(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)||
|void|[OnWebRequestCompleted](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1af6ad4b430e949dd0724e45c2cec3ca93)(const RallyHereAPI::FResponse & Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI * API)||
|void|[OnWebRequestStarted_Track](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a26a247bbd003cd8e60ed771f562cd92f)(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)||
|void|[OnWebRequestCompleted_Track](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a39e863612c81b22f1ada2ee928b2d0a1)(const RallyHereAPI::FResponse & Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI * API)||
|void|[OnWebRequestStarted_Log](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1aa578de50fe2fef23d0aeaf26affd89a3)(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)||
|void|[OnWebRequestCompleted_Log](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1a48042e675c2f053313cb1f6ed813e67a)(const RallyHereAPI::FResponse & Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI * API)||
|void|[OnWebRequestStarted_RecordTimestamp](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1ac5925357d9588eb10b727c37708d4e1f)(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)||
|TSharedPtr< FJsonObject >|[CreateJsonObjectFromWebRequest](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests_1abcfb892df59c6eb0763b23a534c83de4)(const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) & request)||
## Private Attributes



### `APIs` <a id="classURH__WebRequests_1a2b25ac5084d96214d1ae40d6efb8b018"></a>

`RallyHereAPI::FRallyHereAPIAll* URH_WebRequests::APIs`






### `LoggedAPIs` <a id="classURH__WebRequests_1a556b3e4c67912513a41cce24f3b4cd27"></a>

`TArray<FName> URH_WebRequests::LoggedAPIs`






### `TrackedRequestsCountLimit` <a id="classURH__WebRequests_1a32bf90de9c0c7965fd9b1a3bff61b057"></a>

`int URH_WebRequests::TrackedRequestsCountLimit`






### `bRetainWebRequests` <a id="classURH__WebRequests_1acc8865dae2b8b8b7349880d76529d493"></a>

`bool URH_WebRequests::bRetainWebRequests`






### `TrackedRequests` <a id="classURH__WebRequests_1aba98347cea87fb0d7287e709b4811aa5"></a>

`TDoubleLinkedList<TSharedPtr<FRH_WebRequest> > URH_WebRequests::TrackedRequests`






### `TrackedRequestsById` <a id="classURH__WebRequests_1a73f85f90c158ca98fa114ac0bd04cd24"></a>

`TMap<FGuid, TSharedPtr<FRH_WebRequest> > URH_WebRequests::TrackedRequestsById`






### `APINameToCallCountMap` <a id="classURH__WebRequests_1a0a2eca8089e14569c7c7413d3e8e7ce4"></a>

`TMap<FName, int32> URH_WebRequests::APINameToCallCountMap`






### `SimplifiedPathToCallCountMap` <a id="classURH__WebRequests_1a96d30e07f39719909dad644f94e4657f"></a>

`TMap<FName, int32> URH_WebRequests::SimplifiedPathToCallCountMap`






### `BurstCountThreshold` <a id="classURH__WebRequests_1ac46e510d6934711301d66fd30b34aceb"></a>

`int32 URH_WebRequests::BurstCountThreshold`






### `BurstTimeThresholdInSeconds` <a id="classURH__WebRequests_1a7f9465ce2063962a525a85a08519058c"></a>

`int32 URH_WebRequests::BurstTimeThresholdInSeconds`







## Public Functions



### `Initialize` <a id="classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e"></a>

void Initialize(RallyHereAPI::FRallyHereAPIAll * InAPIs)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRallyHereAPIAll *|InAPIs|

#### Description

Initialize the Web Request system.


#### Parameters

InAPIs
: The APIs the web request system tracks requests from. 



### `Uninitialize` <a id="classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef"></a>

void Uninitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the Web Request system.




### `GetTrackedRequests` <a id="classURH__WebRequests_1ae509b51d596a857b604d52ebe268b196"></a>

const TDoubleLinkedList< TSharedPtr< [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) > > & GetTrackedRequests()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all of the requests that have been tracked.




### `GetTrackedRequestById` <a id="classURH__WebRequests_1a5eaf4f440b4e90f8a96e280cc0bc781f"></a>

const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) * GetTrackedRequestById(const FGuid & id)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|id|

#### Description

Gets a specific request that has been tracked.


#### Parameters

id
: The id of the request to get. 



### `ClearTrackedRequests` <a id="classURH__WebRequests_1a5b244dbdc062a2ccc6215120568081ef"></a>

void ClearTrackedRequests()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears all tracked requests out.




### `GetAPINames` <a id="classURH__WebRequests_1ac70288b2112bf750dcf1e10bceb0e58b"></a>

const TArray< FName > GetAPINames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the list of all APIs able to be tracked.




### `GetLogAllWebRequests` <a id="classURH__WebRequests_1a0b7bd41f05fbd01363e4246418fcb2c0"></a>

bool GetLogAllWebRequests()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if we are currently logging web requests from all APIs.




### `SetLogAllWebRequests` <a id="classURH__WebRequests_1a896febe3fa4643357764c2822ce77ff4"></a>

void SetLogAllWebRequests(bool bValue)

#### Parameters

| Type | Name |
|------|------|
|bool|bValue|

#### Description

Sets logging web requests for all APIs.


#### Parameters

bValue
: If true, turn on logging for all APIs, else turn off. 



### `FormatWebRequestToJsonBlob` <a id="classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186"></a>

FString FormatWebRequestToJsonBlob(const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) & request)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) &|request|

#### Description

Converts a Web Request to a string in JSON format.


#### Parameters

request
: The request to format to JSON 

#### Returns
String of the request in JSON format. 



### `LogTrackedWebRequestsToJSON` <a id="classURH__WebRequests_1aaf261d2509ba4e48a59613d53fd0b024"></a>

TSharedPtr< FJsonObject > LogTrackedWebRequestsToJSON()

#### Parameters

| Type | Name |
|------|------|

#### Description

Logs all tracked request to a specified file.


#### Parameters

World
: The context world object. 

#### Returns
the full path of the file that was written 



### `GetLogWebRequests` <a id="classURH__WebRequests_1a2e0e846ba66a95e7680a51d42edb6706"></a>

FORCEINLINE bool GetLogWebRequests(const FName & APIName)

#### Parameters

| Type | Name |
|------|------|
|const FName &|APIName|

#### Description

Gets if a specific API is being logged currently.


#### Parameters

APIName
: API name to check. 



### `SetLogWebRequests` <a id="classURH__WebRequests_1a2a07322b447aac227feb43192aaf3372"></a>

FORCEINLINE void SetLogWebRequests(const FName & APIName, bool bValue)

#### Parameters

| Type | Name |
|------|------|
|const FName &|APIName|
|bool|bValue|

#### Description

Sets logging for a specific API.


#### Parameters

APIName
: API to change logging state of. 
bValue
: if true, turn on logging for the API, else turn off. 



### `GetIsRetainingWebRequests` <a id="classURH__WebRequests_1a9248d832ca7d43f05d7e528703cf5df1"></a>

FORCEINLINE bool GetIsRetainingWebRequests()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get whether web requests should be cached indefinitely or cleared after reaching the cache limit.




### `SetIsRetainingWebRequests` <a id="classURH__WebRequests_1ac640bcc4171398824dbca3fff9bcebfd"></a>

FORCEINLINE void SetIsRetainingWebRequests(bool bValue)

#### Parameters

| Type | Name |
|------|------|
|bool|bValue|

#### Description

Set whether web requests should be cached indefinitely or cleared after reaching the cache limit.


#### Parameters

bValue
: if true, requests are retained, if not, they are cleared upon reaching the cache limit. 



### `GetAPINameToCallCountMap` <a id="classURH__WebRequests_1a018f06e0cf588740d42b80af334dd238"></a>

const TMap< FName, int32 > GetAPINameToCallCountMap()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the map that tracks all-time call count for each API.




### `GetSimplifiedPathToCallCountMap` <a id="classURH__WebRequests_1ac940579b57d7c6ad400fda8fc4a42e2e"></a>

const TMap< FName, int32 > GetSimplifiedPathToCallCountMap()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the map that tracks all-time call count for each generic URL.




### `GetRecentCallCountMaps` <a id="classURH__WebRequests_1af8e59e4e179be1054a8783f6c56daca8"></a>

void GetRecentCallCountMaps(TMap< FName, int32 > * OutAPIRecentCallCountMap, TMap< FName, int32 > * OutURLRecentCallCountMap)

#### Parameters

| Type | Name |
|------|------|
|TMap< FName, int32 > *|OutAPIRecentCallCountMap|
|TMap< FName, int32 > *|OutURLRecentCallCountMap|

#### Description

Get the maps that track call counts in the last 60s.


#### Parameters

OutAPIRecentCallCountMap
: Pointer to output call count map by API names 
OutURLRecentCallCountMap
: Pointer to output call count map by Simplified Paths 



### `DetectRecentBursts` <a id="classURH__WebRequests_1a96cc4bf85561ff86c5444563e5d4fe40"></a>

void DetectRecentBursts(TMap< FName, TTuple< int32, int32 >> * OutBurstMapByAPIName, TMap< FName, TTuple< int32, int32 >> * OutBurstMapByURL)

#### Parameters

| Type | Name |
|------|------|
|TMap< FName, TTuple< int32, int32 >> *|OutBurstMapByAPIName|
|TMap< FName, TTuple< int32, int32 >> *|OutBurstMapByURL|

#### Description

Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold.


#### Parameters

OutBurstMapByAPIName
: Pointer to output burst map by API name (API Name -> <Number of bursts, Largest burst>) 
OutBurstMapByURL
: Pointer to output burst map by Simplified Path (Simplified Path -> <Number of bursts, Largest burst>) 




## Private Functions



### `OnWebRequestStarted` <a id="classURH__WebRequests_1aa0d71ba37d212251e5e8ca147cca0b8f"></a>

void OnWebRequestStarted(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FRequestMetadata &|RequestMetadata|
|FHttpRequestRef|HttpRequest|
|RallyHereAPI::FAPI *|API|

#### Description






### `OnWebRequestCompleted` <a id="classURH__WebRequests_1af6ad4b430e949dd0724e45c2cec3ca93"></a>

void OnWebRequestCompleted(const RallyHereAPI::FResponse & Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse &|Response|
|FHttpRequestPtr|HttpRequest|
|FHttpResponsePtr|HttpResponse|
|bool|bSuccess|
|bool|bWillRetryWithAuth|
|RallyHereAPI::FAPI *|API|

#### Description






### `OnWebRequestStarted_Track` <a id="classURH__WebRequests_1a26a247bbd003cd8e60ed771f562cd92f"></a>

void OnWebRequestStarted_Track(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FRequestMetadata &|RequestMetadata|
|FHttpRequestRef|HttpRequest|
|RallyHereAPI::FAPI *|API|

#### Description






### `OnWebRequestCompleted_Track` <a id="classURH__WebRequests_1a39e863612c81b22f1ada2ee928b2d0a1"></a>

void OnWebRequestCompleted_Track(const RallyHereAPI::FResponse & Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse &|Response|
|FHttpRequestPtr|HttpRequest|
|FHttpResponsePtr|HttpResponse|
|bool|bSuccess|
|bool|bWillRetryWithAuth|
|RallyHereAPI::FAPI *|API|

#### Description






### `OnWebRequestStarted_Log` <a id="classURH__WebRequests_1aa578de50fe2fef23d0aeaf26affd89a3"></a>

void OnWebRequestStarted_Log(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FRequestMetadata &|RequestMetadata|
|FHttpRequestRef|HttpRequest|
|RallyHereAPI::FAPI *|API|

#### Description






### `OnWebRequestCompleted_Log` <a id="classURH__WebRequests_1a48042e675c2f053313cb1f6ed813e67a"></a>

void OnWebRequestCompleted_Log(const RallyHereAPI::FResponse & Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse &|Response|
|FHttpRequestPtr|HttpRequest|
|FHttpResponsePtr|HttpResponse|
|bool|bSuccess|
|bool|bWillRetryWithAuth|
|RallyHereAPI::FAPI *|API|

#### Description






### `OnWebRequestStarted_RecordTimestamp` <a id="classURH__WebRequests_1ac5925357d9588eb10b727c37708d4e1f"></a>

void OnWebRequestStarted_RecordTimestamp(const RallyHereAPI::FRequestMetadata & RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI * API)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FRequestMetadata &|RequestMetadata|
|FHttpRequestRef|HttpRequest|
|RallyHereAPI::FAPI *|API|

#### Description






### `CreateJsonObjectFromWebRequest` <a id="classURH__WebRequests_1abcfb892df59c6eb0763b23a534c83de4"></a>

TSharedPtr< FJsonObject > CreateJsonObjectFromWebRequest(const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) & request)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest) &|request|

#### Description







