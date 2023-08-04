# WebRequest <a id="group__WebRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_WebRequests`](#classURH__WebRequests) | Class to handle executing and tracking Web Requests.
`struct `[`FRH_WebResponse`](#structFRH__WebResponse) | Web call response data.
`struct `[`FRH_WebRequest`](#structFRH__WebRequest) | Web call request data.

## class `URH_WebRequests` <a id="classURH__WebRequests"></a>

```
class URH_WebRequests
  : public UObject
```

Class to handle executing and tracking Web Requests.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`Initialize`](#classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e)`(RallyHereAPI::FRallyHereAPIAll * InAPIs)` | Initialize the Web Request system.
`public void `[`Uninitialize`](#classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef)`()` | Safely tears down the Web Request system.
`public const TArray< TSharedPtr< `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` > > `[`GetTrackedRequests`](#classURH__WebRequests_1a7223213985f6ced8eb2989b7ec48bbae)`() const` | Gets all of the requests that have been tracked.
`public const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` * `[`GetTrackedRequestById`](#classURH__WebRequests_1a5cd05003d99c79ae6b551cfa35a26dda)`(FGuid id) const` | Gets a specific request that has been tracked.
`public inline void `[`ClearTrackedRequests`](#classURH__WebRequests_1a5b244dbdc062a2ccc6215120568081ef)`()` | Clears all tracked requests out.
`public const TArray< FString > `[`GetAPINames`](#classURH__WebRequests_1abb04548405410dd9ef37b8634f1f0ac7)`() const` | Gets the list of all APIs able to be tracked.
`public bool `[`GetLogAllWebRequests`](#classURH__WebRequests_1a0b7bd41f05fbd01363e4246418fcb2c0)`() const` | Gets if we are currently logging web requests from all APIs.
`public void `[`SetLogAllWebRequests`](#classURH__WebRequests_1a896febe3fa4643357764c2822ce77ff4)`(bool bValue)` | Sets logging web requests for all APIs.
`public bool `[`GetTrackAllWebRequests`](#classURH__WebRequests_1a014eabaa80a2652c534af6847c2f112b)`() const` | Gets if we are currently tracking web requests from all APIs.
`public void `[`SetTrackAllWebRequests`](#classURH__WebRequests_1ab70b8dd8911e4bdb0b4f79597560c1db)`(bool bValue)` | Sets tracking web requests for all APIs.
`public FString `[`FormatWebRequestToJsonBlob`](#classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186)`(const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` & request) const` | Converts a Web Request to a string in JSON format.
`public FString `[`LogTrackedWebRequestsToFile`](#classURH__WebRequests_1a78228e1519b4f9b1701d64b66513a9ca)`(const FString & Filename) const` | Logs all tracked request to a specified file.
`public inline FORCEINLINE bool `[`GetLogWebRequests`](#classURH__WebRequests_1a95686d987f1ae503a3b1f90018c475c7)`(const FString & APIName) const` | Gets if a specific API is being logged currently.
`public inline FORCEINLINE void `[`SetLogWebRequests`](#classURH__WebRequests_1a4d48cda3d43c9e860fa0207c44d24bf6)`(const FString & APIName,bool bValue)` | Sets logging for a specific API.
`public inline FORCEINLINE bool `[`GetTrackWebRequests`](#classURH__WebRequests_1a5d0506265a7ff79887ba251dea3fd04e)`(const FString & APIName) const` | Gets if a specific API is being tracked currently.
`public inline FORCEINLINE void `[`SetTrackWebRequests`](#classURH__WebRequests_1ab24ffe52bc06254007d895b28008a9d3)`(const FString & APIName,bool bValue)` | Sets tracking for a specific API.

#### Members

#### `public void `[`Initialize`](#classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e)`(RallyHereAPI::FRallyHereAPIAll * InAPIs)` <a id="classURH__WebRequests_1a886700f37a477d596e3c9045efecaa5e"></a>

Initialize the Web Request system.

#### Parameters
* `InAPIs` The APIs the web request system tracks requests from.

<br>
#### `public void `[`Uninitialize`](#classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef)`()` <a id="classURH__WebRequests_1a0fe605b98c24740235f2d192f73b83ef"></a>

Safely tears down the Web Request system.

<br>
#### `public const TArray< TSharedPtr< `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` > > `[`GetTrackedRequests`](#classURH__WebRequests_1a7223213985f6ced8eb2989b7ec48bbae)`() const` <a id="classURH__WebRequests_1a7223213985f6ced8eb2989b7ec48bbae"></a>

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
#### `public const TArray< FString > `[`GetAPINames`](#classURH__WebRequests_1abb04548405410dd9ef37b8634f1f0ac7)`() const` <a id="classURH__WebRequests_1abb04548405410dd9ef37b8634f1f0ac7"></a>

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
#### `public bool `[`GetTrackAllWebRequests`](#classURH__WebRequests_1a014eabaa80a2652c534af6847c2f112b)`() const` <a id="classURH__WebRequests_1a014eabaa80a2652c534af6847c2f112b"></a>

Gets if we are currently tracking web requests from all APIs.

<br>
#### `public void `[`SetTrackAllWebRequests`](#classURH__WebRequests_1ab70b8dd8911e4bdb0b4f79597560c1db)`(bool bValue)` <a id="classURH__WebRequests_1ab70b8dd8911e4bdb0b4f79597560c1db"></a>

Sets tracking web requests for all APIs.

#### Parameters
* `bValue` If true, turn on tracking for all APIs, else turn off.

<br>
#### `public FString `[`FormatWebRequestToJsonBlob`](#classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186)`(const `[`FRH_WebRequest`](WebRequest.md#structFRH__WebRequest)` & request) const` <a id="classURH__WebRequests_1ab0fcffa02db11aabcbe1e571f809e186"></a>

Converts a Web Request to a string in JSON format.

#### Parameters
* `request` The request to format to JSON 

#### Returns
String of the request in JSON format.

<br>
#### `public FString `[`LogTrackedWebRequestsToFile`](#classURH__WebRequests_1a78228e1519b4f9b1701d64b66513a9ca)`(const FString & Filename) const` <a id="classURH__WebRequests_1a78228e1519b4f9b1701d64b66513a9ca"></a>

Logs all tracked request to a specified file.

#### Parameters
* `Filename` The filename to save the requests to. 

#### Returns
the full path of the file that was written

<br>
#### `public inline FORCEINLINE bool `[`GetLogWebRequests`](#classURH__WebRequests_1a95686d987f1ae503a3b1f90018c475c7)`(const FString & APIName) const` <a id="classURH__WebRequests_1a95686d987f1ae503a3b1f90018c475c7"></a>

Gets if a specific API is being logged currently.

#### Parameters
* `APIName` API name to check.

<br>
#### `public inline FORCEINLINE void `[`SetLogWebRequests`](#classURH__WebRequests_1a4d48cda3d43c9e860fa0207c44d24bf6)`(const FString & APIName,bool bValue)` <a id="classURH__WebRequests_1a4d48cda3d43c9e860fa0207c44d24bf6"></a>

Sets logging for a specific API.

#### Parameters
* `APIName` API to change logging state of. 

* `bValue` if true, turn on logging for the API, else turn off.

<br>
#### `public inline FORCEINLINE bool `[`GetTrackWebRequests`](#classURH__WebRequests_1a5d0506265a7ff79887ba251dea3fd04e)`(const FString & APIName) const` <a id="classURH__WebRequests_1a5d0506265a7ff79887ba251dea3fd04e"></a>

Gets if a specific API is being tracked currently.

#### Parameters
* `APIName` API name to check.

<br>
#### `public inline FORCEINLINE void `[`SetTrackWebRequests`](#classURH__WebRequests_1ab24ffe52bc06254007d895b28008a9d3)`(const FString & APIName,bool bValue)` <a id="classURH__WebRequests_1ab24ffe52bc06254007d895b28008a9d3"></a>

Sets tracking for a specific API.

#### Parameters
* `APIName` API to change tracking state of. 

* `bValue` if true, turn on tracking for the API, else turn off.

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
`public FString `[`Verb`](#structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40) | Verb for the action type of the Web Request.
`public FString `[`URL`](#structFRH__WebRequest_1a4729623950d6991d5817089262ac791c) | URL for the Web Request.
`public TMap< FString, FString > `[`Headers`](#structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3) | Headers for the Web Request.
`public FString `[`Content`](#structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20) | Content for the Web Request.
`public TArray< `[`FRH_WebResponse`](WebRequest.md#structFRH__WebResponse)` > `[`Responses`](#structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed) | Response for the Web Request. Can contain multiple if the request had to be retried.

#### Members

#### `public RallyHereAPI::FRequestMetadata `[`Metadata`](#structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd) <a id="structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd"></a>

Metadata for the Web Request.

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
