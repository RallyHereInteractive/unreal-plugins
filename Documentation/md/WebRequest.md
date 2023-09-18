# WebRequest <a id="group__WebRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_WebRequests`](#classURH__WebRequests) | Class to handle executing and tracking low-level Http Web Requests.
`struct `[`FRH_WebResponse`](#structFRH__WebResponse) | Web call response data.
`struct `[`FRH_WebRequest`](#structFRH__WebRequest) | Web call request data.

## class `URH_WebRequests` <a id="classURH__WebRequests"></a>

```
class URH_WebRequests
  : public UObject
```

Class to handle executing and tracking low-level Http Web Requests.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`Initialize`](#classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e)`(RallyHereAPI::FRallyHereAPIAll * InAPIs)` | Initialize the Web Request system.
`public void `[`Uninitialize`](#classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef)`()` | Safely tears down the Web Request system.
`public const TDoubleLinkedList< TSharedPtr< `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` > > & `[`GetTrackedRequests`](#classURH__WebRequests_1ae509b51d596a857b604d52ebe268b196)`() const` | Gets all of the requests that have been tracked.
`public const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` * `[`GetTrackedRequestById`](#classURH__WebRequests_1a5cd05003d99c79ae6b551cfa35a26dda)`(FGuid id) const` | Gets a specific request that has been tracked.
`public inline void `[`ClearTrackedRequests`](#classURH__WebRequests_1a5b244dbdc062a2ccc6215120568081ef)`()` | Clears all tracked requests out.
`public const TArray< FName > `[`GetAPINames`](#classURH__WebRequests_1ac70288b2112bf750dcf1e10bceb0e58b)`() const` | Gets the list of all APIs able to be tracked.
`public bool `[`GetLogAllWebRequests`](#classURH__WebRequests_1a0b7bd41f05fbd01363e4246418fcb2c0)`() const` | Gets if we are currently logging web requests from all APIs.
`public void `[`SetLogAllWebRequests`](#classURH__WebRequests_1a896febe3fa4643357764c2822ce77ff4)`(bool bValue)` | Sets logging web requests for all APIs.
`public FString `[`FormatWebRequestToJsonBlob`](#classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186)`(const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` & request) const` | Converts a Web Request to a string in JSON format.
`public TSharedPtr< FJsonObject > `[`LogTrackedWebRequestsToJSON`](#classURH__WebRequests_1aaf261d2509ba4e48a59613d53fd0b024)`() const` | Logs all tracked request to a specified file.
`public inline FORCEINLINE bool `[`GetLogWebRequests`](#classURH__WebRequests_1a2e0e846ba66a95e7680a51d42edb6706)`(const FName & APIName) const` | Gets if a specific API is being logged currently.
`public inline FORCEINLINE void `[`SetLogWebRequests`](#classURH__WebRequests_1a2a07322b447aac227feb43192aaf3372)`(const FName & APIName,bool bValue)` | Sets logging for a specific API.
`public inline FORCEINLINE bool `[`GetIsRetainingWebRequests`](#classURH__WebRequests_1a9248d832ca7d43f05d7e528703cf5df1)`() const` | Get whether web requests should be cached indefinitely or cleared after reaching the cache limit.
`public inline FORCEINLINE void `[`SetIsRetainingWebRequests`](#classURH__WebRequests_1ac640bcc4171398824dbca3fff9bcebfd)`(bool bValue)` | Set whether web requests should be cached indefinitely or cleared after reaching the cache limit.
`public inline const TMap< FName, int32 > `[`GetAPINameToCallCountMap`](#classURH__WebRequests_1a018f06e0cf588740d42b80af334dd238)`() const` | Get the map that tracks all-time call count for each API.
`public inline const TMap< FName, int32 > `[`GetSimplifiedPathToCallCountMap`](#classURH__WebRequests_1ac940579b57d7c6ad400fda8fc4a42e2e)`() const` | Get the map that tracks all-time call count for each generic URL.
`public void `[`GetRecentCallCountMaps`](#classURH__WebRequests_1af8e59e4e179be1054a8783f6c56daca8)`(TMap< FName, int32 > * OutAPIRecentCallCountMap,TMap< FName, int32 > * OutURLRecentCallCountMap) const` | Get the maps that track call counts in the last 60s.
`public void `[`DetectRecentBursts`](#classURH__WebRequests_1a96cc4bf85561ff86c5444563e5d4fe40)`(TMap< FName, TTuple< int32, int32 >> * OutBurstMapByAPIName,TMap< FName, TTuple< int32, int32 >> * OutBurstMapByURL) const` | Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold.

#### Members

#### `public void `[`Initialize`](#classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e)`(RallyHereAPI::FRallyHereAPIAll * InAPIs)` <a id="classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e"></a>

Initialize the Web Request system.

#### Parameters
* `InAPIs` The APIs the web request system tracks requests from.

<br>
#### `public void `[`Uninitialize`](#classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef)`()` <a id="classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef"></a>

Safely tears down the Web Request system.

<br>
#### `public const TDoubleLinkedList< TSharedPtr< `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` > > & `[`GetTrackedRequests`](#classURH__WebRequests_1ae509b51d596a857b604d52ebe268b196)`() const` <a id="classURH__WebRequests_1ae509b51d596a857b604d52ebe268b196"></a>

Gets all of the requests that have been tracked.

<br>
#### `public const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` * `[`GetTrackedRequestById`](#classURH__WebRequests_1a5cd05003d99c79ae6b551cfa35a26dda)`(FGuid id) const` <a id="classURH__WebRequests_1a5cd05003d99c79ae6b551cfa35a26dda"></a>

Gets a specific request that has been tracked.

#### Parameters
* `id` The id of the request to get.

<br>
#### `public inline void `[`ClearTrackedRequests`](#classURH__WebRequests_1a5b244dbdc062a2ccc6215120568081ef)`()` <a id="classURH__WebRequests_1a5b244dbdc062a2ccc6215120568081ef"></a>

Clears all tracked requests out.

<br>
#### `public const TArray< FName > `[`GetAPINames`](#classURH__WebRequests_1ac70288b2112bf750dcf1e10bceb0e58b)`() const` <a id="classURH__WebRequests_1ac70288b2112bf750dcf1e10bceb0e58b"></a>

Gets the list of all APIs able to be tracked.

<br>
#### `public bool `[`GetLogAllWebRequests`](#classURH__WebRequests_1a0b7bd41f05fbd01363e4246418fcb2c0)`() const` <a id="classURH__WebRequests_1a0b7bd41f05fbd01363e4246418fcb2c0"></a>

Gets if we are currently logging web requests from all APIs.

<br>
#### `public void `[`SetLogAllWebRequests`](#classURH__WebRequests_1a896febe3fa4643357764c2822ce77ff4)`(bool bValue)` <a id="classURH__WebRequests_1a896febe3fa4643357764c2822ce77ff4"></a>

Sets logging web requests for all APIs.

#### Parameters
* `bValue` If true, turn on logging for all APIs, else turn off.

<br>
#### `public FString `[`FormatWebRequestToJsonBlob`](#classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186)`(const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` & request) const` <a id="classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186"></a>

Converts a Web Request to a string in JSON format.

#### Parameters
* `request` The request to format to JSON 

#### Returns
String of the request in JSON format.

<br>
#### `public TSharedPtr< FJsonObject > `[`LogTrackedWebRequestsToJSON`](#classURH__WebRequests_1aaf261d2509ba4e48a59613d53fd0b024)`() const` <a id="classURH__WebRequests_1aaf261d2509ba4e48a59613d53fd0b024"></a>

Logs all tracked request to a specified file.

#### Parameters
* `World` The context world object. 

#### Returns
the full path of the file that was written

<br>
#### `public inline FORCEINLINE bool `[`GetLogWebRequests`](#classURH__WebRequests_1a2e0e846ba66a95e7680a51d42edb6706)`(const FName & APIName) const` <a id="classURH__WebRequests_1a2e0e846ba66a95e7680a51d42edb6706"></a>

Gets if a specific API is being logged currently.

#### Parameters
* `APIName` API name to check.

<br>
#### `public inline FORCEINLINE void `[`SetLogWebRequests`](#classURH__WebRequests_1a2a07322b447aac227feb43192aaf3372)`(const FName & APIName,bool bValue)` <a id="classURH__WebRequests_1a2a07322b447aac227feb43192aaf3372"></a>

Sets logging for a specific API.

#### Parameters
* `APIName` API to change logging state of. 

* `bValue` if true, turn on logging for the API, else turn off.

<br>
#### `public inline FORCEINLINE bool `[`GetIsRetainingWebRequests`](#classURH__WebRequests_1a9248d832ca7d43f05d7e528703cf5df1)`() const` <a id="classURH__WebRequests_1a9248d832ca7d43f05d7e528703cf5df1"></a>

Get whether web requests should be cached indefinitely or cleared after reaching the cache limit.

<br>
#### `public inline FORCEINLINE void `[`SetIsRetainingWebRequests`](#classURH__WebRequests_1ac640bcc4171398824dbca3fff9bcebfd)`(bool bValue)` <a id="classURH__WebRequests_1ac640bcc4171398824dbca3fff9bcebfd"></a>

Set whether web requests should be cached indefinitely or cleared after reaching the cache limit.

#### Parameters
* `bValue` if true, requests are retained, if not, they are cleared upon reaching the cache limit.

<br>
#### `public inline const TMap< FName, int32 > `[`GetAPINameToCallCountMap`](#classURH__WebRequests_1a018f06e0cf588740d42b80af334dd238)`() const` <a id="classURH__WebRequests_1a018f06e0cf588740d42b80af334dd238"></a>

Get the map that tracks all-time call count for each API.

<br>
#### `public inline const TMap< FName, int32 > `[`GetSimplifiedPathToCallCountMap`](#classURH__WebRequests_1ac940579b57d7c6ad400fda8fc4a42e2e)`() const` <a id="classURH__WebRequests_1ac940579b57d7c6ad400fda8fc4a42e2e"></a>

Get the map that tracks all-time call count for each generic URL.

<br>
#### `public void `[`GetRecentCallCountMaps`](#classURH__WebRequests_1af8e59e4e179be1054a8783f6c56daca8)`(TMap< FName, int32 > * OutAPIRecentCallCountMap,TMap< FName, int32 > * OutURLRecentCallCountMap) const` <a id="classURH__WebRequests_1af8e59e4e179be1054a8783f6c56daca8"></a>

Get the maps that track call counts in the last 60s.

#### Parameters
* `OutAPIRecentCallCountMap` Pointer to output call count map by API names 

* `OutURLRecentCallCountMap` Pointer to output call count map by Simplified Paths

<br>
#### `public void `[`DetectRecentBursts`](#classURH__WebRequests_1a96cc4bf85561ff86c5444563e5d4fe40)`(TMap< FName, TTuple< int32, int32 >> * OutBurstMapByAPIName,TMap< FName, TTuple< int32, int32 >> * OutBurstMapByURL) const` <a id="classURH__WebRequests_1a96cc4bf85561ff86c5444563e5d4fe40"></a>

Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold.

#### Parameters
* `OutBurstMapByAPIName` Pointer to output burst map by API name (API Name -> <Number of bursts, Largest burst>) 

* `OutBurstMapByURL` Pointer to output burst map by Simplified Path (Simplified Path -> <Number of bursts, Largest burst>)

<br>
## struct `FRH_WebResponse` <a id="structFRH__WebResponse"></a>

Web call response data.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`Headers`](#structFRH__WebResponse_1afea93fe8697cc30dabe0e63dcf9f7579) | Headers of the Web Response.
`public FString `[`Content`](#structFRH__WebResponse_1a0ff460b3df9d25c4fca881a055d73544) | Content of the Web Response.
`public int32 `[`ResponseCode`](#structFRH__WebResponse_1a9b587fa8f496832745973bcecb4c5733) | Resonse Code of the Web Response.
`public bool `[`ResponseSuccess`](#structFRH__WebResponse_1af845fefbaee0203c50d552ef8a152f73) | Was the response successful from a client perspective.

#### Members

#### `public TMap< FString, FString > `[`Headers`](#structFRH__WebResponse_1afea93fe8697cc30dabe0e63dcf9f7579) <a id="structFRH__WebResponse_1afea93fe8697cc30dabe0e63dcf9f7579"></a>

Headers of the Web Response.

<br>
#### `public FString `[`Content`](#structFRH__WebResponse_1a0ff460b3df9d25c4fca881a055d73544) <a id="structFRH__WebResponse_1a0ff460b3df9d25c4fca881a055d73544"></a>

Content of the Web Response.

<br>
#### `public int32 `[`ResponseCode`](#structFRH__WebResponse_1a9b587fa8f496832745973bcecb4c5733) <a id="structFRH__WebResponse_1a9b587fa8f496832745973bcecb4c5733"></a>

Resonse Code of the Web Response.

<br>
#### `public bool `[`ResponseSuccess`](#structFRH__WebResponse_1af845fefbaee0203c50d552ef8a152f73) <a id="structFRH__WebResponse_1af845fefbaee0203c50d552ef8a152f73"></a>

Was the response successful from a client perspective.

<br>
## struct `FRH_WebRequest` <a id="structFRH__WebRequest"></a>

Web call request data.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public RallyHereAPI::FRequestMetadata `[`Metadata`](#structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd) | Metadata for the Web Request.
`public FName `[`APIName`](#structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494) | The API name of the Web Request.
`public FDateTime `[`Timestamp`](#structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2) | The local timestamp when the request was made.
`public FString `[`Verb`](#structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40) | Verb for the action type of the Web Request.
`public FString `[`URL`](#structFRH__WebRequest_1a4729623950d6991d5817089262ac791c) | URL for the Web Request.
`public TMap< FString, FString > `[`Headers`](#structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3) | Headers for the Web Request.
`public FString `[`Content`](#structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20) | Content for the Web Request.
`public TArray< `[`FRH_WebResponse`](WebRequest.md#structFRH__WebResponse)` > `[`Responses`](#structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed) | Response for the Web Request. Can contain multiple if the request had to be retried.

#### Members

#### `public RallyHereAPI::FRequestMetadata `[`Metadata`](#structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd) <a id="structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd"></a>

Metadata for the Web Request.

<br>
#### `public FName `[`APIName`](#structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494) <a id="structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494"></a>

The API name of the Web Request.

<br>
#### `public FDateTime `[`Timestamp`](#structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2) <a id="structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2"></a>

The local timestamp when the request was made.

<br>
#### `public FString `[`Verb`](#structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40) <a id="structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40"></a>

Verb for the action type of the Web Request.

<br>
#### `public FString `[`URL`](#structFRH__WebRequest_1a4729623950d6991d5817089262ac791c) <a id="structFRH__WebRequest_1a4729623950d6991d5817089262ac791c"></a>

URL for the Web Request.

<br>
#### `public TMap< FString, FString > `[`Headers`](#structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3) <a id="structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3"></a>

Headers for the Web Request.

<br>
#### `public FString `[`Content`](#structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20) <a id="structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20"></a>

Content for the Web Request.

<br>
#### `public TArray< `[`FRH_WebResponse`](WebRequest.md#structFRH__WebResponse)` > `[`Responses`](#structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed) <a id="structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed"></a>

Response for the Web Request. Can contain multiple if the request had to be retried.

<br>
