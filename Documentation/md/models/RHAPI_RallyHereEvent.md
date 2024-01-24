# RHAPI_RallyHereEvent <a id="group__RHAPI__RallyHereEvent"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RallyHereEvent`](#structFRHAPI__RallyHereEvent) | 

## struct `FRHAPI_RallyHereEvent` <a id="structFRHAPI__RallyHereEvent"></a>

```
struct FRHAPI_RallyHereEvent
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`EventUUID`](#structFRHAPI__RallyHereEvent_1a17cc424daeab709e9956d13998d41577) | Unique Event ID for this instance of the event.
`public FString `[`EventName`](#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595) | Type of event to process this as.
`public FDateTime `[`EventTimestamp`](#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f) | Time the event was triggered.
`public TMap< FString, FString > `[`EventParams`](#structFRHAPI__RallyHereEvent_1a3c389602c5b095ae1eb16f2dcb90198b) | Event specific parameters.
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__RallyHereEvent_1a597a285379f9219c1dde137bd86c07cd) | Event custom data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8) | true if CustomData_Optional has been set to a value
`public FString `[`UserID_Optional`](#structFRHAPI__RallyHereEvent_1a9d8f7a27032977911472882f63f80235) | User who submitted the event.
`public bool `[`UserID_IsSet`](#structFRHAPI__RallyHereEvent_1ac7b987781945f3d4637fc8c008ca6c11) | true if UserID_Optional has been set to a value
`public FString `[`SessionID_Optional`](#structFRHAPI__RallyHereEvent_1aeb41043d2df419b698f2c9157e69d5ec) | Session ID to associate the event with.
`public bool `[`SessionID_IsSet`](#structFRHAPI__RallyHereEvent_1ab5334d234c8b0dfb65d3816f4024faa0) | true if SessionID_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RallyHereEvent_1a274e63cdf9ce91a751d12e9d5b0072d1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1a78aca75728bbab8942e70e3320d26f66)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetEventUUID`](#structFRHAPI__RallyHereEvent_1aedf4fc36cde18b6a5bfda6e76ebd37c4)`()` | Gets the value of EventUUID.
`public inline const FGuid & `[`GetEventUUID`](#structFRHAPI__RallyHereEvent_1af510594195a9f807f8839921029d7379)`() const` | Gets the value of EventUUID.
`public inline void `[`SetEventUUID`](#structFRHAPI__RallyHereEvent_1a98762d10dbd98271a403fe898082f2cb)`(FGuid NewValue)` | Sets the value of EventUUID.
`public inline FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a9e8c56e17ec3cc31ad3631304f49d044)`(FString NewValue)` | Sets the value of EventName.
`public inline FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7)`()` | Gets the value of EventTimestamp.
`public inline const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8)`() const` | Gets the value of EventTimestamp.
`public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ad478284f0400f058a9d0400fac9ff822)`(FDateTime NewValue)` | Sets the value of EventTimestamp.
`public inline TMap< FString, FString > & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a775a23133aa9c8077906ff8aea74f7e8)`()` | Gets the value of EventParams.
`public inline const TMap< FString, FString > & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a0be8c28670c31de4b5f4de130ded2ff7)`() const` | Gets the value of EventParams.
`public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a8ec6d72db70dedcd8e7aa3a12e4e95e0)`(TMap< FString, FString > NewValue)` | Sets the value of EventParams.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1acb77d7c51fa1543b451db82cd9230e90)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a7bae198c95d7bbb7b7e2455e701a9c9f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a9c39df555fb3a70e26e6002123fe0913)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a5d52bb1c648c8b9db7408edc21a82d19)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ae906a40c0127305e7eed02b2713c9090)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1a4b6a83fa449f49e96628f2519d1389ae)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a3dd12474a1a6edef3fd913b8d14bfac0)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetUserID`](#structFRHAPI__RallyHereEvent_1aabebb43614f85ed9a65d17d00ccb7a38)`()` | Gets the value of UserID_Optional, regardless of it having been set.
`public inline const FString & `[`GetUserID`](#structFRHAPI__RallyHereEvent_1add05d2a19609299568515c4f780e4037)`() const` | Gets the value of UserID_Optional, regardless of it having been set.
`public inline const FString & `[`GetUserID`](#structFRHAPI__RallyHereEvent_1a0d77d2a891a6c3c43d1c6977ef9952f8)`(const FString & DefaultValue) const` | Gets the value of UserID_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUserID`](#structFRHAPI__RallyHereEvent_1a0f6ba09a6d558da4b9ac958c877735b3)`(FString & OutValue) const` | Fills OutValue with the value of UserID_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetUserIDOrNull`](#structFRHAPI__RallyHereEvent_1a9f55bfb24698507fac3c876bfdbcb1c3)`()` | Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetUserIDOrNull`](#structFRHAPI__RallyHereEvent_1ae54c2ed20e0f98ece0f5d2c99ec5d91f)`() const` | Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUserID`](#structFRHAPI__RallyHereEvent_1a5fbb5ae83d3265a4354fde43af3e873e)`(FString NewValue)` | Sets the value of UserID_Optional and also sets UserID_IsSet to true.
`public inline void `[`ClearUserID`](#structFRHAPI__RallyHereEvent_1a2a0d022aec78e8503646348efc63e2dc)`()` | Clears the value of UserID_Optional and sets UserID_IsSet to false.
`public inline FString & `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1a25f5bbb6ebe03c0a397a66a0445cbc6a)`()` | Gets the value of SessionID_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1a74c4856b88efc0c5cf8bc41a662e9e97)`() const` | Gets the value of SessionID_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1ab63bacad1fcd95ff5994cb7c69e83adf)`(const FString & DefaultValue) const` | Gets the value of SessionID_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1ae9a8982e27b8028f4ae0ff0728cb843d)`(FString & OutValue) const` | Fills OutValue with the value of SessionID_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionIDOrNull`](#structFRHAPI__RallyHereEvent_1a86f6c85e9d57c983d50063d21b28c7af)`()` | Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionIDOrNull`](#structFRHAPI__RallyHereEvent_1a7240018ccde931badc3907070aef478c)`() const` | Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionID`](#structFRHAPI__RallyHereEvent_1a2d652dc32bccd4710d2068cea90b3c26)`(FString NewValue)` | Sets the value of SessionID_Optional and also sets SessionID_IsSet to true.
`public inline void `[`ClearSessionID`](#structFRHAPI__RallyHereEvent_1ac600f84f7eb4945fe80cf5165968541e)`()` | Clears the value of SessionID_Optional and sets SessionID_IsSet to false.

#### Members

#### `public FGuid `[`EventUUID`](#structFRHAPI__RallyHereEvent_1a17cc424daeab709e9956d13998d41577) <a id="structFRHAPI__RallyHereEvent_1a17cc424daeab709e9956d13998d41577"></a>

Unique Event ID for this instance of the event.

<br>
#### `public FString `[`EventName`](#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595) <a id="structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595"></a>

Type of event to process this as.

<br>
#### `public FDateTime `[`EventTimestamp`](#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f) <a id="structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f"></a>

Time the event was triggered.

<br>
#### `public TMap< FString, FString > `[`EventParams`](#structFRHAPI__RallyHereEvent_1a3c389602c5b095ae1eb16f2dcb90198b) <a id="structFRHAPI__RallyHereEvent_1a3c389602c5b095ae1eb16f2dcb90198b"></a>

Event specific parameters.

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__RallyHereEvent_1a597a285379f9219c1dde137bd86c07cd) <a id="structFRHAPI__RallyHereEvent_1a597a285379f9219c1dde137bd86c07cd"></a>

Event custom data.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8) <a id="structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`UserID_Optional`](#structFRHAPI__RallyHereEvent_1a9d8f7a27032977911472882f63f80235) <a id="structFRHAPI__RallyHereEvent_1a9d8f7a27032977911472882f63f80235"></a>

User who submitted the event.

<br>
#### `public bool `[`UserID_IsSet`](#structFRHAPI__RallyHereEvent_1ac7b987781945f3d4637fc8c008ca6c11) <a id="structFRHAPI__RallyHereEvent_1ac7b987781945f3d4637fc8c008ca6c11"></a>

true if UserID_Optional has been set to a value

<br>
#### `public FString `[`SessionID_Optional`](#structFRHAPI__RallyHereEvent_1aeb41043d2df419b698f2c9157e69d5ec) <a id="structFRHAPI__RallyHereEvent_1aeb41043d2df419b698f2c9157e69d5ec"></a>

Session ID to associate the event with.

<br>
#### `public bool `[`SessionID_IsSet`](#structFRHAPI__RallyHereEvent_1ab5334d234c8b0dfb65d3816f4024faa0) <a id="structFRHAPI__RallyHereEvent_1ab5334d234c8b0dfb65d3816f4024faa0"></a>

true if SessionID_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RallyHereEvent_1a274e63cdf9ce91a751d12e9d5b0072d1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RallyHereEvent_1a274e63cdf9ce91a751d12e9d5b0072d1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1a78aca75728bbab8942e70e3320d26f66)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RallyHereEvent_1a78aca75728bbab8942e70e3320d26f66"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetEventUUID`](#structFRHAPI__RallyHereEvent_1aedf4fc36cde18b6a5bfda6e76ebd37c4)`()` <a id="structFRHAPI__RallyHereEvent_1aedf4fc36cde18b6a5bfda6e76ebd37c4"></a>

Gets the value of EventUUID.

<br>
#### `public inline const FGuid & `[`GetEventUUID`](#structFRHAPI__RallyHereEvent_1af510594195a9f807f8839921029d7379)`() const` <a id="structFRHAPI__RallyHereEvent_1af510594195a9f807f8839921029d7379"></a>

Gets the value of EventUUID.

<br>
#### `public inline void `[`SetEventUUID`](#structFRHAPI__RallyHereEvent_1a98762d10dbd98271a403fe898082f2cb)`(FGuid NewValue)` <a id="structFRHAPI__RallyHereEvent_1a98762d10dbd98271a403fe898082f2cb"></a>

Sets the value of EventUUID.

<br>
#### `public inline FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec)`()` <a id="structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec"></a>

Gets the value of EventName.

<br>
#### `public inline const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038)`() const` <a id="structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038"></a>

Gets the value of EventName.

<br>
#### `public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a9e8c56e17ec3cc31ad3631304f49d044)`(FString NewValue)` <a id="structFRHAPI__RallyHereEvent_1a9e8c56e17ec3cc31ad3631304f49d044"></a>

Sets the value of EventName.

<br>
#### `public inline FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7)`()` <a id="structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7"></a>

Gets the value of EventTimestamp.

<br>
#### `public inline const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8)`() const` <a id="structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8"></a>

Gets the value of EventTimestamp.

<br>
#### `public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ad478284f0400f058a9d0400fac9ff822)`(FDateTime NewValue)` <a id="structFRHAPI__RallyHereEvent_1ad478284f0400f058a9d0400fac9ff822"></a>

Sets the value of EventTimestamp.

<br>
#### `public inline TMap< FString, FString > & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a775a23133aa9c8077906ff8aea74f7e8)`()` <a id="structFRHAPI__RallyHereEvent_1a775a23133aa9c8077906ff8aea74f7e8"></a>

Gets the value of EventParams.

<br>
#### `public inline const TMap< FString, FString > & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a0be8c28670c31de4b5f4de130ded2ff7)`() const` <a id="structFRHAPI__RallyHereEvent_1a0be8c28670c31de4b5f4de130ded2ff7"></a>

Gets the value of EventParams.

<br>
#### `public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a8ec6d72db70dedcd8e7aa3a12e4e95e0)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__RallyHereEvent_1a8ec6d72db70dedcd8e7aa3a12e4e95e0"></a>

Sets the value of EventParams.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1acb77d7c51fa1543b451db82cd9230e90)`()` <a id="structFRHAPI__RallyHereEvent_1acb77d7c51fa1543b451db82cd9230e90"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a7bae198c95d7bbb7b7e2455e701a9c9f)`() const` <a id="structFRHAPI__RallyHereEvent_1a7bae198c95d7bbb7b7e2455e701a9c9f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a9c39df555fb3a70e26e6002123fe0913)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a9c39df555fb3a70e26e6002123fe0913"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a5d52bb1c648c8b9db7408edc21a82d19)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a5d52bb1c648c8b9db7408edc21a82d19"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ae906a40c0127305e7eed02b2713c9090)`()` <a id="structFRHAPI__RallyHereEvent_1ae906a40c0127305e7eed02b2713c9090"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1a4b6a83fa449f49e96628f2519d1389ae)`() const` <a id="structFRHAPI__RallyHereEvent_1a4b6a83fa449f49e96628f2519d1389ae"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a3dd12474a1a6edef3fd913b8d14bfac0)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__RallyHereEvent_1a3dd12474a1a6edef3fd913b8d14bfac0"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` <a id="structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetUserID`](#structFRHAPI__RallyHereEvent_1aabebb43614f85ed9a65d17d00ccb7a38)`()` <a id="structFRHAPI__RallyHereEvent_1aabebb43614f85ed9a65d17d00ccb7a38"></a>

Gets the value of UserID_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetUserID`](#structFRHAPI__RallyHereEvent_1add05d2a19609299568515c4f780e4037)`() const` <a id="structFRHAPI__RallyHereEvent_1add05d2a19609299568515c4f780e4037"></a>

Gets the value of UserID_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetUserID`](#structFRHAPI__RallyHereEvent_1a0d77d2a891a6c3c43d1c6977ef9952f8)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a0d77d2a891a6c3c43d1c6977ef9952f8"></a>

Gets the value of UserID_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUserID`](#structFRHAPI__RallyHereEvent_1a0f6ba09a6d558da4b9ac958c877735b3)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a0f6ba09a6d558da4b9ac958c877735b3"></a>

Fills OutValue with the value of UserID_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetUserIDOrNull`](#structFRHAPI__RallyHereEvent_1a9f55bfb24698507fac3c876bfdbcb1c3)`()` <a id="structFRHAPI__RallyHereEvent_1a9f55bfb24698507fac3c876bfdbcb1c3"></a>

Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetUserIDOrNull`](#structFRHAPI__RallyHereEvent_1ae54c2ed20e0f98ece0f5d2c99ec5d91f)`() const` <a id="structFRHAPI__RallyHereEvent_1ae54c2ed20e0f98ece0f5d2c99ec5d91f"></a>

Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUserID`](#structFRHAPI__RallyHereEvent_1a5fbb5ae83d3265a4354fde43af3e873e)`(FString NewValue)` <a id="structFRHAPI__RallyHereEvent_1a5fbb5ae83d3265a4354fde43af3e873e"></a>

Sets the value of UserID_Optional and also sets UserID_IsSet to true.

<br>
#### `public inline void `[`ClearUserID`](#structFRHAPI__RallyHereEvent_1a2a0d022aec78e8503646348efc63e2dc)`()` <a id="structFRHAPI__RallyHereEvent_1a2a0d022aec78e8503646348efc63e2dc"></a>

Clears the value of UserID_Optional and sets UserID_IsSet to false.

<br>
#### `public inline FString & `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1a25f5bbb6ebe03c0a397a66a0445cbc6a)`()` <a id="structFRHAPI__RallyHereEvent_1a25f5bbb6ebe03c0a397a66a0445cbc6a"></a>

Gets the value of SessionID_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1a74c4856b88efc0c5cf8bc41a662e9e97)`() const` <a id="structFRHAPI__RallyHereEvent_1a74c4856b88efc0c5cf8bc41a662e9e97"></a>

Gets the value of SessionID_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1ab63bacad1fcd95ff5994cb7c69e83adf)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1ab63bacad1fcd95ff5994cb7c69e83adf"></a>

Gets the value of SessionID_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionID`](#structFRHAPI__RallyHereEvent_1ae9a8982e27b8028f4ae0ff0728cb843d)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1ae9a8982e27b8028f4ae0ff0728cb843d"></a>

Fills OutValue with the value of SessionID_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetSessionIDOrNull`](#structFRHAPI__RallyHereEvent_1a86f6c85e9d57c983d50063d21b28c7af)`()` <a id="structFRHAPI__RallyHereEvent_1a86f6c85e9d57c983d50063d21b28c7af"></a>

Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetSessionIDOrNull`](#structFRHAPI__RallyHereEvent_1a7240018ccde931badc3907070aef478c)`() const` <a id="structFRHAPI__RallyHereEvent_1a7240018ccde931badc3907070aef478c"></a>

Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionID`](#structFRHAPI__RallyHereEvent_1a2d652dc32bccd4710d2068cea90b3c26)`(FString NewValue)` <a id="structFRHAPI__RallyHereEvent_1a2d652dc32bccd4710d2068cea90b3c26"></a>

Sets the value of SessionID_Optional and also sets SessionID_IsSet to true.

<br>
#### `public inline void `[`ClearSessionID`](#structFRHAPI__RallyHereEvent_1ac600f84f7eb4945fe80cf5165968541e)`()` <a id="structFRHAPI__RallyHereEvent_1ac600f84f7eb4945fe80cf5165968541e"></a>

Clears the value of SessionID_Optional and sets SessionID_IsSet to false.

<br>
