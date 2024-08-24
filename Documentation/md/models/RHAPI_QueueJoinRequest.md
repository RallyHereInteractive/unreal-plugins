# group `RHAPI_QueueJoinRequest` <a id="group__RHAPI__QueueJoinRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueJoinRequest`](#structFRHAPI__QueueJoinRequest) | A request body to enter into a matchmaking queue.

---
title: FRHAPI_QueueJoinRequest
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinRequest_1a6519129d9d4b8d5e7d6aaa29e22f4bcc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080)`()` | Gets the value of QueueId.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99)`() const` | Gets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a35e4c5e0c6b6ec8b0e3c25ec3e2cb99e)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a5ff8df643c3cd053c22b1bb2bcaf0446)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a8224ad8036dc3c2ea4380ed0bff43857)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a9dd338c0a602c11f37fb3c550cd1235e)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline bool `[`IsAdditionalJoinParamsSet`](#structFRHAPI__QueueJoinRequest_1af36ca1389e2cb3c3d64ebfb1b1d3db36)`() const` | Checks whether AdditionalJoinParams_Optional has been set.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a462ab879ddfec3e9f608e48b215d9b69)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1ae8267806a4f94fd0ca521c3b45ce4a53)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__QueueJoinRequest_1a9f0022cd60ae361adc31828021202f56)`() const` | Checks whether MapPreferences_Optional has been set.
`public inline int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a9cb4fc3f6f53e900955772d16d6b1d5c)`()` | Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1aff8288f5356471ba5476cbd2439cc7bf)`() const` | Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1aafab1ea2cc8e94d03415d6db93433e9d)`(const int32 & DefaultValue) const` | Gets the value of PassedQueueTimeSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a39d515d67df16a74fa1d400a7df9d446)`(int32 & OutValue) const` | Fills OutValue with the value of PassedQueueTimeSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1aa228bfe285e79f0efb5a9afa35437c81)`()` | Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1a05b99929ded7a9d31ba41dfcccbe5405)`() const` | Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1afc2f57f3ee152b919ed518b7a9bc674e)`(const int32 & NewValue)` | Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true.
`public inline void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a23802eb5d9047b2e32a3daded2ab0007)`(int32 && NewValue)` | Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true using move semantics.
`public inline void `[`ClearPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a13a9875da64c2dfa43dd1eb2b1630a7b)`()` | Clears the value of PassedQueueTimeSeconds_Optional and sets PassedQueueTimeSeconds_IsSet to false.
`public inline bool `[`IsPassedQueueTimeSecondsSet`](#structFRHAPI__QueueJoinRequest_1a57b72935be08b55e4b0019345beb16ac)`() const` | Checks whether PassedQueueTimeSeconds_Optional has been set.
`public inline bool `[`IsPassedQueueTimeSecondsDefaultValue`](#structFRHAPI__QueueJoinRequest_1a8951906c63014e2baee29653f59d962d)`() const` | Returns true if PassedQueueTimeSeconds_Optional is set and matches the default value.
`public inline void `[`SetPassedQueueTimeSecondsToDefault`](#structFRHAPI__QueueJoinRequest_1a834dc11fc4fff692404341aa96c0f613)`()` | Sets the value of PassedQueueTimeSeconds_Optional to its default and also sets PassedQueueTimeSeconds_IsSet to true.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinRequest_1a6519129d9d4b8d5e7d6aaa29e22f4bcc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueueJoinRequest_1a6519129d9d4b8d5e7d6aaa29e22f4bcc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080)`()` <a id="structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080"></a>

Gets the value of QueueId.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99)`() const` <a id="structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99"></a>

Gets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a35e4c5e0c6b6ec8b0e3c25ec3e2cb99e)`(const FString & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a35e4c5e0c6b6ec8b0e3c25ec3e2cb99e"></a>

Sets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a5ff8df643c3cd053c22b1bb2bcaf0446)`(FString && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a5ff8df643c3cd053c22b1bb2bcaf0446"></a>

Sets the value of QueueId using move semantics.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832)`()` <a id="structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f)`() const` <a id="structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19)`()` <a id="structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1)`() const` <a id="structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a8224ad8036dc3c2ea4380ed0bff43857)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a8224ad8036dc3c2ea4380ed0bff43857"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a9dd338c0a602c11f37fb3c550cd1235e)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a9dd338c0a602c11f37fb3c550cd1235e"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)`()` <a id="structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

#### `public inline bool `[`IsAdditionalJoinParamsSet`](#structFRHAPI__QueueJoinRequest_1af36ca1389e2cb3c3d64ebfb1b1d3db36)`() const` <a id="structFRHAPI__QueueJoinRequest_1af36ca1389e2cb3c3d64ebfb1b1d3db36"></a>

Checks whether AdditionalJoinParams_Optional has been set.

#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402)`()` <a id="structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f)`() const` <a id="structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee)`()` <a id="structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3)`() const` <a id="structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a462ab879ddfec3e9f608e48b215d9b69)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a462ab879ddfec3e9f608e48b215d9b69"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1ae8267806a4f94fd0ca521c3b45ce4a53)`(TArray< FString > && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1ae8267806a4f94fd0ca521c3b45ce4a53"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)`()` <a id="structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__QueueJoinRequest_1a9f0022cd60ae361adc31828021202f56)`() const` <a id="structFRHAPI__QueueJoinRequest_1a9f0022cd60ae361adc31828021202f56"></a>

Checks whether MapPreferences_Optional has been set.

#### `public inline int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a9cb4fc3f6f53e900955772d16d6b1d5c)`()` <a id="structFRHAPI__QueueJoinRequest_1a9cb4fc3f6f53e900955772d16d6b1d5c"></a>

Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1aff8288f5356471ba5476cbd2439cc7bf)`() const` <a id="structFRHAPI__QueueJoinRequest_1aff8288f5356471ba5476cbd2439cc7bf"></a>

Gets the value of PassedQueueTimeSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1aafab1ea2cc8e94d03415d6db93433e9d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1aafab1ea2cc8e94d03415d6db93433e9d"></a>

Gets the value of PassedQueueTimeSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a39d515d67df16a74fa1d400a7df9d446)`(int32 & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a39d515d67df16a74fa1d400a7df9d446"></a>

Fills OutValue with the value of PassedQueueTimeSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1aa228bfe285e79f0efb5a9afa35437c81)`()` <a id="structFRHAPI__QueueJoinRequest_1aa228bfe285e79f0efb5a9afa35437c81"></a>

Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPassedQueueTimeSecondsOrNull`](#structFRHAPI__QueueJoinRequest_1a05b99929ded7a9d31ba41dfcccbe5405)`() const` <a id="structFRHAPI__QueueJoinRequest_1a05b99929ded7a9d31ba41dfcccbe5405"></a>

Returns a pointer to PassedQueueTimeSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1afc2f57f3ee152b919ed518b7a9bc674e)`(const int32 & NewValue)` <a id="structFRHAPI__QueueJoinRequest_1afc2f57f3ee152b919ed518b7a9bc674e"></a>

Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true.

#### `public inline void `[`SetPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a23802eb5d9047b2e32a3daded2ab0007)`(int32 && NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a23802eb5d9047b2e32a3daded2ab0007"></a>

Sets the value of PassedQueueTimeSeconds_Optional and also sets PassedQueueTimeSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearPassedQueueTimeSeconds`](#structFRHAPI__QueueJoinRequest_1a13a9875da64c2dfa43dd1eb2b1630a7b)`()` <a id="structFRHAPI__QueueJoinRequest_1a13a9875da64c2dfa43dd1eb2b1630a7b"></a>

Clears the value of PassedQueueTimeSeconds_Optional and sets PassedQueueTimeSeconds_IsSet to false.

#### `public inline bool `[`IsPassedQueueTimeSecondsSet`](#structFRHAPI__QueueJoinRequest_1a57b72935be08b55e4b0019345beb16ac)`() const` <a id="structFRHAPI__QueueJoinRequest_1a57b72935be08b55e4b0019345beb16ac"></a>

Checks whether PassedQueueTimeSeconds_Optional has been set.

#### `public inline bool `[`IsPassedQueueTimeSecondsDefaultValue`](#structFRHAPI__QueueJoinRequest_1a8951906c63014e2baee29653f59d962d)`() const` <a id="structFRHAPI__QueueJoinRequest_1a8951906c63014e2baee29653f59d962d"></a>

Returns true if PassedQueueTimeSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetPassedQueueTimeSecondsToDefault`](#structFRHAPI__QueueJoinRequest_1a834dc11fc4fff692404341aa96c0f613)`()` <a id="structFRHAPI__QueueJoinRequest_1a834dc11fc4fff692404341aa96c0f613"></a>

Sets the value of PassedQueueTimeSeconds_Optional to its default and also sets PassedQueueTimeSeconds_IsSet to true.

