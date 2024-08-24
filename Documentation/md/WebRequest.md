# group `WebRequest` <a id="group__WebRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`FRH_WebRequests`](#classFRH__WebRequests) | Class to handle executing and tracking low-level Http Web Requests.
`struct `[`FRH_WebResponse`](#structFRH__WebResponse) | Web call response data.
`struct `[`FRH_WebRequest`](#structFRH__WebRequest) | Web call request data.

## class `FRH_WebRequests` <a id="classFRH__WebRequests"></a>

```
class FRH_WebRequests
  : public TSharedFromThis< FRH_WebRequests >
```

Class to handle executing and tracking low-level Http Web Requests.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`FRH_WebRequests`](#classFRH__WebRequests_1a6bd3f313618ea335e953e4ae73f2451e)`()` | 
`public void `[`Initialize`](#classFRH__WebRequests_1aa8eac9764a88b64c29ccb7cb51c4d622)`(RallyHereAPI::FRallyHereAPIAll * InAPIs)` | Initialize the Web Request system.
`public void `[`Uninitialize`](#classFRH__WebRequests_1a382793a98b70e46a8c91d68e916eec79)`()` | Safely tears down the Web Request system.
`public const TDoubleLinkedList< TSharedPtr< `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` > > & `[`GetTrackedRequests`](#classFRH__WebRequests_1a1007d0f3a728a313542c0102429fa025)`() const` | Gets all of the requests that have been tracked.
`public const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` * `[`GetTrackedRequestById`](#classFRH__WebRequests_1a7e6cd0b2db53bb9a2f5ac674d024e18a)`(const FGuid & id) const` | Gets a specific request that has been tracked.
`public inline void `[`ClearTrackedRequests`](#classFRH__WebRequests_1a74effd6ec52cc0277dfbf74280d0b70e)`()` | Clears all tracked requests out.
`public const TArray< FName > `[`GetAPINames`](#classFRH__WebRequests_1a445f4f1da7eed1b0f83d72e01b6b19ff)`() const` | Gets the list of all APIs able to be tracked.
`public bool `[`GetLogAllWebRequests`](#classFRH__WebRequests_1ae17e6a97581a4e03b1342f792c5e90ed)`() const` | Gets if we are currently logging web requests from all APIs.
`public void `[`SetLogAllWebRequests`](#classFRH__WebRequests_1a938ee62e398c42ffab1b1bf02b809530)`(bool bValue)` | Sets logging web requests for all APIs.
`public FString `[`FormatWebRequestToJsonBlob`](#classFRH__WebRequests_1aa04c3d05ffaabb74d76bffe6ea96dac5)`(const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` & request) const` | Converts a Web Request to a string in JSON format.
`public TSharedPtr< FJsonObject > `[`LogTrackedWebRequestsToJSON`](#classFRH__WebRequests_1ab749e824dbdfe71df5263f06eac89967)`() const` | Logs all tracked request to a specified file.
`public inline FORCEINLINE bool `[`GetLogWebRequests`](#classFRH__WebRequests_1a4754abff6242738e32ed65763be2b104)`(const FName & APIName) const` | Gets if a specific API is being logged currently.
`public inline FORCEINLINE void `[`SetLogWebRequests`](#classFRH__WebRequests_1a400485994e0446ffdb240543cc829116)`(const FName & APIName,bool bValue)` | Sets logging for a specific API.
`public inline FORCEINLINE bool `[`GetIsRetainingWebRequests`](#classFRH__WebRequests_1a7f81dfc689eead12123790431fd76b34)`() const` | Get whether web requests should be cached indefinitely or cleared after reaching the cache limit.
`public inline FORCEINLINE void `[`SetIsRetainingWebRequests`](#classFRH__WebRequests_1af312673a93b7b16cf1661606237837ee)`(bool bValue)` | Set whether web requests should be cached indefinitely or cleared after reaching the cache limit.
`public inline const TMap< FName, int32 > `[`GetAPINameToCallCountMap`](#classFRH__WebRequests_1abcb430aac4da7a8b12fc4e3d4a4735fa)`() const` | Get the map that tracks all-time call count for each API.
`public inline const TMap< FName, int32 > `[`GetSimplifiedPathToCallCountMap`](#classFRH__WebRequests_1aed90013183d6a6ec2b05d621a2f3a9b3)`() const` | Get the map that tracks all-time call count for each generic URL.
`public void `[`GetRecentCallCountMaps`](#classFRH__WebRequests_1ab93ed7476bba71269269d3d364189f86)`(TMap< FName, int32 > * OutAPIRecentCallCountMap,TMap< FName, int32 > * OutURLRecentCallCountMap) const` | Get the maps that track call counts in the last 60s.
`public void `[`DetectRecentBursts`](#classFRH__WebRequests_1a64e8ecf52cf4760ab79f033ba0ef66e0)`(TMap< FName, TTuple< int32, int32 >> * OutBurstMapByAPIName,TMap< FName, TTuple< int32, int32 >> * OutBurstMapByURL) const` | Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold.

### Members

#### `public  `[`FRH_WebRequests`](#classFRH__WebRequests_1a6bd3f313618ea335e953e4ae73f2451e)`()` <a id="classFRH__WebRequests_1a6bd3f313618ea335e953e4ae73f2451e"></a>

#### `public void `[`Initialize`](#classFRH__WebRequests_1aa8eac9764a88b64c29ccb7cb51c4d622)`(RallyHereAPI::FRallyHereAPIAll * InAPIs)` <a id="classFRH__WebRequests_1aa8eac9764a88b64c29ccb7cb51c4d622"></a>

Initialize the Web Request system.

#### Parameters
* `InAPIs` The APIs the web request system tracks requests from.

#### `public void `[`Uninitialize`](#classFRH__WebRequests_1a382793a98b70e46a8c91d68e916eec79)`()` <a id="classFRH__WebRequests_1a382793a98b70e46a8c91d68e916eec79"></a>

Safely tears down the Web Request system.

#### `public const TDoubleLinkedList< TSharedPtr< `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` > > & `[`GetTrackedRequests`](#classFRH__WebRequests_1a1007d0f3a728a313542c0102429fa025)`() const` <a id="classFRH__WebRequests_1a1007d0f3a728a313542c0102429fa025"></a>

Gets all of the requests that have been tracked.

#### `public const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` * `[`GetTrackedRequestById`](#classFRH__WebRequests_1a7e6cd0b2db53bb9a2f5ac674d024e18a)`(const FGuid & id) const` <a id="classFRH__WebRequests_1a7e6cd0b2db53bb9a2f5ac674d024e18a"></a>

Gets a specific request that has been tracked.

#### Parameters
* `id` The id of the request to get.

#### `public inline void `[`ClearTrackedRequests`](#classFRH__WebRequests_1a74effd6ec52cc0277dfbf74280d0b70e)`()` <a id="classFRH__WebRequests_1a74effd6ec52cc0277dfbf74280d0b70e"></a>

Clears all tracked requests out.

#### `public const TArray< FName > `[`GetAPINames`](#classFRH__WebRequests_1a445f4f1da7eed1b0f83d72e01b6b19ff)`() const` <a id="classFRH__WebRequests_1a445f4f1da7eed1b0f83d72e01b6b19ff"></a>

Gets the list of all APIs able to be tracked.

#### `public bool `[`GetLogAllWebRequests`](#classFRH__WebRequests_1ae17e6a97581a4e03b1342f792c5e90ed)`() const` <a id="classFRH__WebRequests_1ae17e6a97581a4e03b1342f792c5e90ed"></a>

Gets if we are currently logging web requests from all APIs.

#### `public void `[`SetLogAllWebRequests`](#classFRH__WebRequests_1a938ee62e398c42ffab1b1bf02b809530)`(bool bValue)` <a id="classFRH__WebRequests_1a938ee62e398c42ffab1b1bf02b809530"></a>

Sets logging web requests for all APIs.

#### Parameters
* `bValue` If true, turn on logging for all APIs, else turn off.

#### `public FString `[`FormatWebRequestToJsonBlob`](#classFRH__WebRequests_1aa04c3d05ffaabb74d76bffe6ea96dac5)`(const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` & request) const` <a id="classFRH__WebRequests_1aa04c3d05ffaabb74d76bffe6ea96dac5"></a>

Converts a Web Request to a string in JSON format.

#### Parameters
* `request` The request to format to JSON 

#### Returns
String of the request in JSON format.

#### `public TSharedPtr< FJsonObject > `[`LogTrackedWebRequestsToJSON`](#classFRH__WebRequests_1ab749e824dbdfe71df5263f06eac89967)`() const` <a id="classFRH__WebRequests_1ab749e824dbdfe71df5263f06eac89967"></a>

Logs all tracked request to a specified file.

#### Parameters
* `World` The context world object. 

#### Returns
the full path of the file that was written

#### `public inline FORCEINLINE bool `[`GetLogWebRequests`](#classFRH__WebRequests_1a4754abff6242738e32ed65763be2b104)`(const FName & APIName) const` <a id="classFRH__WebRequests_1a4754abff6242738e32ed65763be2b104"></a>

Gets if a specific API is being logged currently.

#### Parameters
* `APIName` API name to check.

#### `public inline FORCEINLINE void `[`SetLogWebRequests`](#classFRH__WebRequests_1a400485994e0446ffdb240543cc829116)`(const FName & APIName,bool bValue)` <a id="classFRH__WebRequests_1a400485994e0446ffdb240543cc829116"></a>

Sets logging for a specific API.

#### Parameters
* `APIName` API to change logging state of. 

* `bValue` if true, turn on logging for the API, else turn off.

#### `public inline FORCEINLINE bool `[`GetIsRetainingWebRequests`](#classFRH__WebRequests_1a7f81dfc689eead12123790431fd76b34)`() const` <a id="classFRH__WebRequests_1a7f81dfc689eead12123790431fd76b34"></a>

Get whether web requests should be cached indefinitely or cleared after reaching the cache limit.

#### `public inline FORCEINLINE void `[`SetIsRetainingWebRequests`](#classFRH__WebRequests_1af312673a93b7b16cf1661606237837ee)`(bool bValue)` <a id="classFRH__WebRequests_1af312673a93b7b16cf1661606237837ee"></a>

Set whether web requests should be cached indefinitely or cleared after reaching the cache limit.

#### Parameters
* `bValue` if true, requests are retained, if not, they are cleared upon reaching the cache limit.

#### `public inline const TMap< FName, int32 > `[`GetAPINameToCallCountMap`](#classFRH__WebRequests_1abcb430aac4da7a8b12fc4e3d4a4735fa)`() const` <a id="classFRH__WebRequests_1abcb430aac4da7a8b12fc4e3d4a4735fa"></a>

Get the map that tracks all-time call count for each API.

#### `public inline const TMap< FName, int32 > `[`GetSimplifiedPathToCallCountMap`](#classFRH__WebRequests_1aed90013183d6a6ec2b05d621a2f3a9b3)`() const` <a id="classFRH__WebRequests_1aed90013183d6a6ec2b05d621a2f3a9b3"></a>

Get the map that tracks all-time call count for each generic URL.

#### `public void `[`GetRecentCallCountMaps`](#classFRH__WebRequests_1ab93ed7476bba71269269d3d364189f86)`(TMap< FName, int32 > * OutAPIRecentCallCountMap,TMap< FName, int32 > * OutURLRecentCallCountMap) const` <a id="classFRH__WebRequests_1ab93ed7476bba71269269d3d364189f86"></a>

Get the maps that track call counts in the last 60s.

#### Parameters
* `OutAPIRecentCallCountMap` Pointer to output call count map by API names 

* `OutURLRecentCallCountMap` Pointer to output call count map by Simplified Paths

#### `public void `[`DetectRecentBursts`](#classFRH__WebRequests_1a64e8ecf52cf4760ab79f033ba0ef66e0)`(TMap< FName, TTuple< int32, int32 >> * OutBurstMapByAPIName,TMap< FName, TTuple< int32, int32 >> * OutBurstMapByURL) const` <a id="classFRH__WebRequests_1a64e8ecf52cf4760ab79f033ba0ef66e0"></a>

Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold.

#### Parameters
* `OutBurstMapByAPIName` Pointer to output burst map by API name (API Name -> NUMBER_OF_BURSTS, LARGEST_BURST) 

* `OutBurstMapByURL` Pointer to output burst map by Simplified Path (Simplified Path -> NUMBER_OF_BURSTS, LARGEST_BURST)

## struct `FRH_WebResponse` <a id="structFRH__WebResponse"></a>

Web call response data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`Headers`](#structFRH__WebResponse_1afea93fe8697cc30dabe0e63dcf9f7579) | Headers of the Web Response.
`public FString `[`Content`](#structFRH__WebResponse_1a0ff460b3df9d25c4fca881a055d73544) | Content of the Web Response.
`public int32 `[`ResponseCode`](#structFRH__WebResponse_1a9b587fa8f496832745973bcecb4c5733) | Resonse Code of the Web Response.
`public bool `[`ResponseSuccess`](#structFRH__WebResponse_1af845fefbaee0203c50d552ef8a152f73) | Was the response successful from a client perspective.
`public FDateTime `[`ReceivedTime`](#structFRH__WebResponse_1ab1e2b9ccc96780f6fc2ab86ad5c631fa) | The tiem the response was received.
`public inline  `[`FRH_WebResponse`](#structFRH__WebResponse_1a330ebd43596c9c11d0acd83bbe3cc34f)`()` | 

### Members

#### `public TMap< FString, FString > `[`Headers`](#structFRH__WebResponse_1afea93fe8697cc30dabe0e63dcf9f7579) <a id="structFRH__WebResponse_1afea93fe8697cc30dabe0e63dcf9f7579"></a>

Headers of the Web Response.

#### `public FString `[`Content`](#structFRH__WebResponse_1a0ff460b3df9d25c4fca881a055d73544) <a id="structFRH__WebResponse_1a0ff460b3df9d25c4fca881a055d73544"></a>

Content of the Web Response.

#### `public int32 `[`ResponseCode`](#structFRH__WebResponse_1a9b587fa8f496832745973bcecb4c5733) <a id="structFRH__WebResponse_1a9b587fa8f496832745973bcecb4c5733"></a>

Resonse Code of the Web Response.

#### `public bool `[`ResponseSuccess`](#structFRH__WebResponse_1af845fefbaee0203c50d552ef8a152f73) <a id="structFRH__WebResponse_1af845fefbaee0203c50d552ef8a152f73"></a>

Was the response successful from a client perspective.

#### `public FDateTime `[`ReceivedTime`](#structFRH__WebResponse_1ab1e2b9ccc96780f6fc2ab86ad5c631fa) <a id="structFRH__WebResponse_1ab1e2b9ccc96780f6fc2ab86ad5c631fa"></a>

The tiem the response was received.

#### `public inline  `[`FRH_WebResponse`](#structFRH__WebResponse_1a330ebd43596c9c11d0acd83bbe3cc34f)`()` <a id="structFRH__WebResponse_1a330ebd43596c9c11d0acd83bbe3cc34f"></a>

## struct `FRH_WebRequest` <a id="structFRH__WebRequest"></a>

Web call request data.

### Summary

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
`public inline  `[`FRH_WebRequest`](#structFRH__WebRequest_1aded51ff8b75b1483c6ee3fa664c0a5ff)`()` | 

### Members

#### `public RallyHereAPI::FRequestMetadata `[`Metadata`](#structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd) <a id="structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd"></a>

Metadata for the Web Request.

#### `public FName `[`APIName`](#structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494) <a id="structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494"></a>

The API name of the Web Request.

#### `public FDateTime `[`Timestamp`](#structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2) <a id="structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2"></a>

The local timestamp when the request was made.

#### `public FString `[`Verb`](#structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40) <a id="structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40"></a>

Verb for the action type of the Web Request.

#### `public FString `[`URL`](#structFRH__WebRequest_1a4729623950d6991d5817089262ac791c) <a id="structFRH__WebRequest_1a4729623950d6991d5817089262ac791c"></a>

URL for the Web Request.

#### `public TMap< FString, FString > `[`Headers`](#structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3) <a id="structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3"></a>

Headers for the Web Request.

#### `public FString `[`Content`](#structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20) <a id="structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20"></a>

Content for the Web Request.

#### `public TArray< `[`FRH_WebResponse`](WebRequest.md#structFRH__WebResponse)` > `[`Responses`](#structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed) <a id="structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed"></a>

Response for the Web Request. Can contain multiple if the request had to be retried.

#### `public inline  `[`FRH_WebRequest`](#structFRH__WebRequest_1aded51ff8b75b1483c6ee3fa664c0a5ff)`()` <a id="structFRH__WebRequest_1aded51ff8b75b1483c6ee3fa664c0a5ff"></a>

