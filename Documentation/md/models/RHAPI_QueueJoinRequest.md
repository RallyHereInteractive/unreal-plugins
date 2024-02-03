# RHAPI_QueueJoinRequest <a id="group__RHAPI__QueueJoinRequest"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da) | ID of the queue to join.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4) | Additional fields put on the matchmaking ticket for open match to search with (see [https://openmatch.dev/site/docs/reference/api/#searchfields](https://openmatch.dev/site/docs/reference/api/#searchfields))
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9) | List of map preferences in order from most desired, to least desired.
`public bool `[`MapPreferences_IsSet`](#structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd) | true if MapPreferences_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinRequest_1aca836ceeca7c09ce5239c1e3769baee6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinRequest_1a97acb248466e63b7798eafa5ce7ebcc8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080)`()` | Gets the value of QueueId.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99)`() const` | Gets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a773383670395fcd0af3caca9097b942a)`(FString NewValue)` | Sets the value of QueueId.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a5b3c1314212338247edf3bbfc50e23c1)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a473a1e40872aa37c1c2bb1e05589d673)`(TArray< FString > NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da) <a id="structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da"></a>

ID of the queue to join.

<br>
#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4) <a id="structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4"></a>

Additional fields put on the matchmaking ticket for open match to search with (see [https://openmatch.dev/site/docs/reference/api/#searchfields](https://openmatch.dev/site/docs/reference/api/#searchfields))

<br>
#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd) <a id="structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd"></a>

true if AdditionalJoinParams_Optional has been set to a value

<br>
#### `public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9) <a id="structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9"></a>

List of map preferences in order from most desired, to least desired.

<br>
#### `public bool `[`MapPreferences_IsSet`](#structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd) <a id="structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd"></a>

true if MapPreferences_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinRequest_1aca836ceeca7c09ce5239c1e3769baee6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueJoinRequest_1aca836ceeca7c09ce5239c1e3769baee6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinRequest_1a97acb248466e63b7798eafa5ce7ebcc8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueueJoinRequest_1a97acb248466e63b7798eafa5ce7ebcc8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080)`()` <a id="structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080"></a>

Gets the value of QueueId.

<br>
#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99)`() const` <a id="structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99"></a>

Gets the value of QueueId.

<br>
#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueJoinRequest_1a773383670395fcd0af3caca9097b942a)`(FString NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a773383670395fcd0af3caca9097b942a"></a>

Sets the value of QueueId.

<br>
#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832)`()` <a id="structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f)`() const` <a id="structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19)`()` <a id="structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1)`() const` <a id="structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a5b3c1314212338247edf3bbfc50e23c1)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a5b3c1314212338247edf3bbfc50e23c1"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

<br>
#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)`()` <a id="structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

<br>
#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402)`()` <a id="structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f)`() const` <a id="structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee)`()` <a id="structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3)`() const` <a id="structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a473a1e40872aa37c1c2bb1e05589d673)`(TArray< FString > NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a473a1e40872aa37c1c2bb1e05589d673"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

<br>
#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)`()` <a id="structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

<br>
