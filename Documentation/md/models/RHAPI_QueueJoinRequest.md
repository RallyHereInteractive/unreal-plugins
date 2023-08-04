# RHAPI_QueueJoinRequest <a id="group__RHAPI__QueueJoinRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueJoinRequest`](#structFRHAPI__QueueJoinRequest) | 

## struct `FRHAPI_QueueJoinRequest` <a id="structFRHAPI__QueueJoinRequest"></a>

```
struct FRHAPI_QueueJoinRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da) | ID of the queue to join.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4) | 
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< int32 > `[`MapPreferences`](#structFRHAPI__QueueJoinRequest_1a9ddb64a6ca7468490abce4d5f76a2419) | List of map preferences in order from most desired, to least desired.
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
`public inline TArray< int32 > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a95b4df91fd21554698d1b657b57f1671)`()` | Gets the value of MapPreferences.
`public inline const TArray< int32 > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a207f0a481f9f9885a5dfd9099c14d590)`() const` | Gets the value of MapPreferences.
`public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a54d16ee14d2ee53a8b97207a21d5518f)`(TArray< int32 > NewValue)` | Sets the value of MapPreferences.

#### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da) <a id="structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da"></a>

ID of the queue to join.

<br>
#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4) <a id="structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4"></a>

<br>
#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd) <a id="structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd"></a>

true if AdditionalJoinParams_Optional has been set to a value

<br>
#### `public TArray< int32 > `[`MapPreferences`](#structFRHAPI__QueueJoinRequest_1a9ddb64a6ca7468490abce4d5f76a2419) <a id="structFRHAPI__QueueJoinRequest_1a9ddb64a6ca7468490abce4d5f76a2419"></a>

List of map preferences in order from most desired, to least desired.

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
#### `public inline TArray< int32 > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a95b4df91fd21554698d1b657b57f1671)`()` <a id="structFRHAPI__QueueJoinRequest_1a95b4df91fd21554698d1b657b57f1671"></a>

Gets the value of MapPreferences.

<br>
#### `public inline const TArray< int32 > & `[`GetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a207f0a481f9f9885a5dfd9099c14d590)`() const` <a id="structFRHAPI__QueueJoinRequest_1a207f0a481f9f9885a5dfd9099c14d590"></a>

Gets the value of MapPreferences.

<br>
#### `public inline void `[`SetMapPreferences`](#structFRHAPI__QueueJoinRequest_1a54d16ee14d2ee53a8b97207a21d5518f)`(TArray< int32 > NewValue)` <a id="structFRHAPI__QueueJoinRequest_1a54d16ee14d2ee53a8b97207a21d5518f"></a>

Sets the value of MapPreferences.

<br>
