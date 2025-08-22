---
title: RHAPI_QueueJoinRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueJoinRequest`](#structFRHAPI__QueueJoinRequest) | A request body to enter into a matchmaking queue.

## struct `FRHAPI_QueueJoinRequest` <a id="structFRHAPI__QueueJoinRequest"></a>

```
struct FRHAPI_QueueJoinRequest
  : public FRHAPI_Model
```

A request body to enter into a matchmaking queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da) | ID of the queue to join.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4) | Additional fields put on the matchmaking ticket for open match to search with (see [https://openmatch.dev/site/docs/reference/api/#searchfields](https://openmatch.dev/site/docs/reference/api/#searchfields))
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9) | List of map preferences in order from most desired, to least desired.
`public bool `[`MapPreferences_IsSet`](#structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd) | true if MapPreferences_Optional has been set to a value
`public int32 `[`PassedQueueTimeSeconds_Optional`](#structFRHAPI__QueueJoinRequest_1a2128baa54a7392d0a26a7e1eca1ec2a3) | Argument to artifcially add queue time to a ticket. Older tickets are considered for lower quaulity matches. This can be used to get faster matches at the expense of quality, or to restore a session's place in queue after a failure.
`public bool `[`PassedQueueTimeSeconds_IsSet`](#structFRHAPI__QueueJoinRequest_1abbc0d6a7b4bca49f2044e60fe98f60fa) | true if PassedQueueTimeSeconds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinRequest_1acac362a02bcb41ac8975d95980bced61)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinRequest_1a9d81d9472eb7021cf7a7d61f67381fad)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1a1f55d97a7dd5f32b75d9d317a6f49ef1)`()` | Gets the value of QueueId.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1ab998f21836c10d4b56b67131a67febea)`() const` | Gets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a54e35e9c7c904dda4653f5a63e025945)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a4d9678d101d4e9574f8892893e9f2392)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1aa9174b8ee62e25f24814358583210ac5)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1aa9da73463eda5296b223c3cc5ccc2092)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a4216468e56c3e9fde3a3c24167e73b7a)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a1cacb452e902fdae9624a49c9352cd0a)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a834c6395d3d6392852108e863459ebca)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1aea5791eaf8ff0195d5187a5db0f1e76d)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a47bc74ec1c3a0d7d33af26bf16878d20)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1ad1b659400fdc510da222cb8b486d72da)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a91f126c4b2f671f87888b415ec120a66)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1aab544fd30ee41431f97d8f76ab66d144)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1afd8057875dc51893e201ee5b69ef947f)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a360852aaec2921dff760ffaa4ff1005b)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a6b3b3623d41228f2977bc07386506582)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a6a789c9a62180d3af7242eae6fdfdf93)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1aba1c768259eb2bc7540a9426292a96e9)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a768df2b9cb9e40a82e1aaec1eccc11cc)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a598fe260c7ccea170bc8d485a4a85c7b)`()` | Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1ab080a3e6308e5f9e1f742502641046a1)`() const` | Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1af6223b2c7ddb4f3a77f4e972a0232a18)`(const int32 & DefaultValue) const` | Gets the value of PassedQueueTimeSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1ae578ec56bfcba0e520916943456f7435)`(int32 & OutValue) const` | Fills OutValue with the value of PassedQueueTimeSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1af51b6267ef038a54b9ec2033ed2f061b)`()` | Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1a4cb718881a6a6895d53fe9618c202f74)`() const` | Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a7d947221832da319bff5c9d1a812710b)`(const int32 & NewValue)` | Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a689c9941d10f9cbb06126deefb0e97fe)`(int32 && NewValue)` | Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true using move semantics.
`public inline void `[`ClearPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a13a9875da64c2dfa43dd1eb2b1630a7b)`()` | Clears the value of PassedQueueTimeSeconds_Optional and sets PassedQueueTimeSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a77d216ce78a27cc2fd0ced17331d195a)`()` | Returns the default value of PassedQueueTimeSeconds.

### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da) <a id="structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da"></a>

ID of the queue to join.

#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4) <a id="structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4"></a>

Additional fields put on the matchmaking ticket for open match to search with (see [https://openmatch.dev/site/docs/reference/api/#searchfields](https://openmatch.dev/site/docs/reference/api/#searchfields))

#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd) <a id="structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd"></a>

true if AdditionalJoinParams_Optional has been set to a value

#### `public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9) <a id="structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9"></a>

List of map preferences in order from most desired, to least desired.

#### `public bool `[`MapPreferences_IsSet`](#structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd) <a id="structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd"></a>

true if MapPreferences_Optional has been set to a value

#### `public int32 `[`PassedQueueTimeSeconds_Optional`](#structFRHAPI__QueueJoinRequest_1a2128baa54a7392d0a26a7e1eca1ec2a3) <a id="structFRHAPI__QueueJoinRequest_1a2128baa54a7392d0a26a7e1eca1ec2a3"></a>

Argument to artifcially add queue time to a ticket. Older tickets are considered for lower quaulity matches. This can be used to get faster matches at the expense of quality, or to restore a session's place in queue after a failure.

#### `public bool `[`PassedQueueTimeSeconds_IsSet`](#structFRHAPI__QueueJoinRequest_1abbc0d6a7b4bca49f2044e60fe98f60fa) <a id="structFRHAPI__QueueJoinRequest_1abbc0d6a7b4bca49f2044e60fe98f60fa"></a>

true if PassedQueueTimeSeconds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinRequest_1acac362a02bcb41ac8975d95980bced61)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueJoinRequest_1acac362a02bcb41ac8975d95980bced61"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinRequest_1a9d81d9472eb7021cf7a7d61f67381fad)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueueJoinRequest_1a9d81d9472eb7021cf7a7d61f67381fad"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1a1f55d97a7dd5f32b75d9d317a6f49ef1)`()` <a id="structFRHAPI__QueueJoinRequest_1a1f55d97a7dd5f32b75d9d317a6f49ef1"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1ab998f21836c10d4b56b67131a67febea)`() const` <a id="structFRHAPI__QueueJoinRequest_1ab998f21836c10d4b56b67131a67febea"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a54e35e9c7c904dda4653f5a63e025945)`(const FString & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a54e35e9c7c904dda4653f5a63e025945"></a>

Sets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a4d9678d101d4e9574f8892893e9f2392)`(FString && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a4d9678d101d4e9574f8892893e9f2392"></a>

Sets the value of QueueId using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1aa9174b8ee62e25f24814358583210ac5)`()` <a id="structFRHAPI__QueueJoinRequest_1aa9174b8ee62e25f24814358583210ac5"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1aa9da73463eda5296b223c3cc5ccc2092)`() const` <a id="structFRHAPI__QueueJoinRequest_1aa9da73463eda5296b223c3cc5ccc2092"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a4216468e56c3e9fde3a3c24167e73b7a)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1a4216468e56c3e9fde3a3c24167e73b7a"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a1cacb452e902fdae9624a49c9352cd0a)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a1cacb452e902fdae9624a49c9352cd0a"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a834c6395d3d6392852108e863459ebca)`()` <a id="structFRHAPI__QueueJoinRequest_1a834c6395d3d6392852108e863459ebca"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1aea5791eaf8ff0195d5187a5db0f1e76d)`() const` <a id="structFRHAPI__QueueJoinRequest_1aea5791eaf8ff0195d5187a5db0f1e76d"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a47bc74ec1c3a0d7d33af26bf16878d20)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a47bc74ec1c3a0d7d33af26bf16878d20"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1ad1b659400fdc510da222cb8b486d72da)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1ad1b659400fdc510da222cb8b486d72da"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)`()` <a id="structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a91f126c4b2f671f87888b415ec120a66)`()` <a id="structFRHAPI__QueueJoinRequest_1a91f126c4b2f671f87888b415ec120a66"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1aab544fd30ee41431f97d8f76ab66d144)`() const` <a id="structFRHAPI__QueueJoinRequest_1aab544fd30ee41431f97d8f76ab66d144"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1afd8057875dc51893e201ee5b69ef947f)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1afd8057875dc51893e201ee5b69ef947f"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a360852aaec2921dff760ffaa4ff1005b)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a360852aaec2921dff760ffaa4ff1005b"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a6b3b3623d41228f2977bc07386506582)`()` <a id="structFRHAPI__QueueJoinRequest_1a6b3b3623d41228f2977bc07386506582"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a6a789c9a62180d3af7242eae6fdfdf93)`() const` <a id="structFRHAPI__QueueJoinRequest_1a6a789c9a62180d3af7242eae6fdfdf93"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1aba1c768259eb2bc7540a9426292a96e9)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1aba1c768259eb2bc7540a9426292a96e9"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a768df2b9cb9e40a82e1aaec1eccc11cc)`(TArray< FString > && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a768df2b9cb9e40a82e1aaec1eccc11cc"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)`()` <a id="structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a598fe260c7ccea170bc8d485a4a85c7b)`()` <a id="structFRHAPI__QueueJoinRequest_1a598fe260c7ccea170bc8d485a4a85c7b"></a>

Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1ab080a3e6308e5f9e1f742502641046a1)`() const` <a id="structFRHAPI__QueueJoinRequest_1ab080a3e6308e5f9e1f742502641046a1"></a>

Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1af6223b2c7ddb4f3a77f4e972a0232a18)`(const int32 & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1af6223b2c7ddb4f3a77f4e972a0232a18"></a>

Gets the value of PassedQueueTimeSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1ae578ec56bfcba0e520916943456f7435)`(int32 & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1ae578ec56bfcba0e520916943456f7435"></a>

Fills OutValue with the value of PassedQueueTimeSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1af51b6267ef038a54b9ec2033ed2f061b)`()` <a id="structFRHAPI__QueueJoinRequest_1af51b6267ef038a54b9ec2033ed2f061b"></a>

Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1a4cb718881a6a6895d53fe9618c202f74)`() const` <a id="structFRHAPI__QueueJoinRequest_1a4cb718881a6a6895d53fe9618c202f74"></a>

Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a7d947221832da319bff5c9d1a812710b)`(const int32 & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a7d947221832da319bff5c9d1a812710b"></a>

Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a689c9941d10f9cbb06126deefb0e97fe)`(int32 && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a689c9941d10f9cbb06126deefb0e97fe"></a>

Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a13a9875da64c2dfa43dd1eb2b1630a7b)`()` <a id="structFRHAPI__QueueJoinRequest_1a13a9875da64c2dfa43dd1eb2b1630a7b"></a>

Clears the value of PassedQueueTimeSeconds_Optional and sets PassedQueueTimeSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a77d216ce78a27cc2fd0ced17331d195a)`()` <a id="structFRHAPI__QueueJoinRequest_1a77d216ce78a27cc2fd0ced17331d195a"></a>

Returns the default value of PassedQueueTimeSeconds.

