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
`public FGuid `[`EventUuid`](#structFRHAPI__RallyHereEvent_1a54e4abe43d72d55ebce435082e4c667b) | Unique Event ID for this instance of the event.
`public FString `[`EventName`](#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595) | Type of event to process this as.
`public FDateTime `[`EventTimestamp`](#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f) | Time the event was triggered.
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParams`](#structFRHAPI__RallyHereEvent_1af3ed29c3eaa7aede666ede0907ea05d4) | Event specific parameters.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RallyHereEvent_1ae04c02282e0fe088075b3ec7726c0174) | Event custom data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8) | true if CustomData_Optional has been set to a value
`public `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` `[`UserId_Optional`](#structFRHAPI__RallyHereEvent_1ad6543d88df821e55d0a4569b06b41a7c) | 
`public bool `[`UserId_IsSet`](#structFRHAPI__RallyHereEvent_1adb88b950d0f6e108ebfc5b457dba79d4) | true if UserId_Optional has been set to a value
`public `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` `[`SessionId_Optional`](#structFRHAPI__RallyHereEvent_1a320666adc01d3c3fa45c1a4730bffdf2) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__RallyHereEvent_1a9e4c120b0e2e38bf8c2bb90f496d448a) | true if SessionId_Optional has been set to a value
`public `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` `[`CorrelationId_Optional`](#structFRHAPI__RallyHereEvent_1a16a423b1074f296caed445934a4c14c1) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__RallyHereEvent_1adbc7c013cc9349f1695bc00ecc4eeea4) | true if CorrelationId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RallyHereEvent_1a274e63cdf9ce91a751d12e9d5b0072d1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1a78aca75728bbab8942e70e3320d26f66)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1a5aed540af10d37a0ca89ffbb27772a6a)`()` | Gets the value of EventUuid.
`public inline const FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1ae1ddab7e54e8cf26e0e6e933b099cf43)`() const` | Gets the value of EventUuid.
`public inline void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a1ea00c36166d4c1408ce50e56360126f)`(FGuid NewValue)` | Sets the value of EventUuid.
`public inline FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a9e8c56e17ec3cc31ad3631304f49d044)`(FString NewValue)` | Sets the value of EventName.
`public inline FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7)`()` | Gets the value of EventTimestamp.
`public inline const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8)`() const` | Gets the value of EventTimestamp.
`public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ad478284f0400f058a9d0400fac9ff822)`(FDateTime NewValue)` | Sets the value of EventTimestamp.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a95c443fd41efaa6c87b03cdd0e000da8)`()` | Gets the value of EventParams.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a1e48980f6b66c8557163abd78c2d3b99)`() const` | Gets the value of EventParams.
`public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a1bb32203a0708dbe8d7d52b94e2c5299)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of EventParams.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a2a3c3cf7de240af041d8f1ba45d94e06)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a5f3b955cc1fb5cf52abaee4c9b6c4464)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a1bee5d71f945eef8cd33e173ba874183)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a198a15f8de8b6425e1e1da62e29034b4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1af38ea07540ec10ccb1900a2a08b77bf5)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ac370b544c9034ecb2bb43da39e79825f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a2622be87a9cb04b359faa4c96eb79c8a)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a91b846573918de314d6ff5af406ce019)`()` | Gets the value of UserId_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1afa5513e7eca70ce8dea6054f412e3b66)`() const` | Gets the value of UserId_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a4c9a8aa2d123fdc2512c93260b2cde25)`(const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & DefaultValue) const` | Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUserId`](#structFRHAPI__RallyHereEvent_1ac5874ec683a309095b26c36591622cf8)`(`[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & OutValue) const` | Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1aabf03dee6f166f2b17fc68a8e17ceb0e)`()` | Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a88095ab0bbb3639de4e4e119271156f6)`() const` | Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1a0460004ec91ba93a645d9035ce64a7d8)`(`[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` NewValue)` | Sets the value of UserId_Optional and also sets UserId_IsSet to true.
`public inline void `[`ClearUserId`](#structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b)`()` | Clears the value of UserId_Optional and sets UserId_IsSet to false.
`public inline `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1aa616da845c61d1225f55ea50b9c813d5)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a129224660544cc59a000c1931cc968c7)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a5506949ea450af87c0d79940b1ab576b)`(const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1acc25ac331eca5b35adbd483ffd12af7e)`(`[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1a8ee065e2f7360cf4d87971258d45ad13)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1a74228b5b40393c255e264a90d32a467c)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1ae4b604097deebc7568b5d625898ce0e1)`(`[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline void `[`ClearSessionId`](#structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a6352647150f0adb2d9ce623376187a50)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a4dc0bb3719cb189846ef6414ae79ecf6)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1aba99ab4d84642e1b43e0b23d6cc4be5d)`(const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a3a2f69760809834aa04e0fa1e3dfe52b)`(`[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1acd1390584c19bbffb864eedd1aae1b7e)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1af9bf00018fb0c423676fd38133d4615e)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a0fd6d1a56031ee7e5045be936cc0b9d0)`(`[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### Members

#### `public FGuid `[`EventUuid`](#structFRHAPI__RallyHereEvent_1a54e4abe43d72d55ebce435082e4c667b) <a id="structFRHAPI__RallyHereEvent_1a54e4abe43d72d55ebce435082e4c667b"></a>

Unique Event ID for this instance of the event.

<br>
#### `public FString `[`EventName`](#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595) <a id="structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595"></a>

Type of event to process this as.

<br>
#### `public FDateTime `[`EventTimestamp`](#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f) <a id="structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f"></a>

Time the event was triggered.

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParams`](#structFRHAPI__RallyHereEvent_1af3ed29c3eaa7aede666ede0907ea05d4) <a id="structFRHAPI__RallyHereEvent_1af3ed29c3eaa7aede666ede0907ea05d4"></a>

Event specific parameters.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RallyHereEvent_1ae04c02282e0fe088075b3ec7726c0174) <a id="structFRHAPI__RallyHereEvent_1ae04c02282e0fe088075b3ec7726c0174"></a>

Event custom data.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8) <a id="structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` `[`UserId_Optional`](#structFRHAPI__RallyHereEvent_1ad6543d88df821e55d0a4569b06b41a7c) <a id="structFRHAPI__RallyHereEvent_1ad6543d88df821e55d0a4569b06b41a7c"></a>

<br>
#### `public bool `[`UserId_IsSet`](#structFRHAPI__RallyHereEvent_1adb88b950d0f6e108ebfc5b457dba79d4) <a id="structFRHAPI__RallyHereEvent_1adb88b950d0f6e108ebfc5b457dba79d4"></a>

true if UserId_Optional has been set to a value

<br>
#### `public `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` `[`SessionId_Optional`](#structFRHAPI__RallyHereEvent_1a320666adc01d3c3fa45c1a4730bffdf2) <a id="structFRHAPI__RallyHereEvent_1a320666adc01d3c3fa45c1a4730bffdf2"></a>

<br>
#### `public bool `[`SessionId_IsSet`](#structFRHAPI__RallyHereEvent_1a9e4c120b0e2e38bf8c2bb90f496d448a) <a id="structFRHAPI__RallyHereEvent_1a9e4c120b0e2e38bf8c2bb90f496d448a"></a>

true if SessionId_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` `[`CorrelationId_Optional`](#structFRHAPI__RallyHereEvent_1a16a423b1074f296caed445934a4c14c1) <a id="structFRHAPI__RallyHereEvent_1a16a423b1074f296caed445934a4c14c1"></a>

<br>
#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__RallyHereEvent_1adbc7c013cc9349f1695bc00ecc4eeea4) <a id="structFRHAPI__RallyHereEvent_1adbc7c013cc9349f1695bc00ecc4eeea4"></a>

true if CorrelationId_Optional has been set to a value

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
#### `public inline FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1a5aed540af10d37a0ca89ffbb27772a6a)`()` <a id="structFRHAPI__RallyHereEvent_1a5aed540af10d37a0ca89ffbb27772a6a"></a>

Gets the value of EventUuid.

<br>
#### `public inline const FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1ae1ddab7e54e8cf26e0e6e933b099cf43)`() const` <a id="structFRHAPI__RallyHereEvent_1ae1ddab7e54e8cf26e0e6e933b099cf43"></a>

Gets the value of EventUuid.

<br>
#### `public inline void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a1ea00c36166d4c1408ce50e56360126f)`(FGuid NewValue)` <a id="structFRHAPI__RallyHereEvent_1a1ea00c36166d4c1408ce50e56360126f"></a>

Sets the value of EventUuid.

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
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a95c443fd41efaa6c87b03cdd0e000da8)`()` <a id="structFRHAPI__RallyHereEvent_1a95c443fd41efaa6c87b03cdd0e000da8"></a>

Gets the value of EventParams.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a1e48980f6b66c8557163abd78c2d3b99)`() const` <a id="structFRHAPI__RallyHereEvent_1a1e48980f6b66c8557163abd78c2d3b99"></a>

Gets the value of EventParams.

<br>
#### `public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a1bb32203a0708dbe8d7d52b94e2c5299)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__RallyHereEvent_1a1bb32203a0708dbe8d7d52b94e2c5299"></a>

Sets the value of EventParams.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a2a3c3cf7de240af041d8f1ba45d94e06)`()` <a id="structFRHAPI__RallyHereEvent_1a2a3c3cf7de240af041d8f1ba45d94e06"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a5f3b955cc1fb5cf52abaee4c9b6c4464)`() const` <a id="structFRHAPI__RallyHereEvent_1a5f3b955cc1fb5cf52abaee4c9b6c4464"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a1bee5d71f945eef8cd33e173ba874183)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a1bee5d71f945eef8cd33e173ba874183"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a198a15f8de8b6425e1e1da62e29034b4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a198a15f8de8b6425e1e1da62e29034b4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1af38ea07540ec10ccb1900a2a08b77bf5)`()` <a id="structFRHAPI__RallyHereEvent_1af38ea07540ec10ccb1900a2a08b77bf5"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ac370b544c9034ecb2bb43da39e79825f)`() const` <a id="structFRHAPI__RallyHereEvent_1ac370b544c9034ecb2bb43da39e79825f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a2622be87a9cb04b359faa4c96eb79c8a)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__RallyHereEvent_1a2622be87a9cb04b359faa4c96eb79c8a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` <a id="structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a91b846573918de314d6ff5af406ce019)`()` <a id="structFRHAPI__RallyHereEvent_1a91b846573918de314d6ff5af406ce019"></a>

Gets the value of UserId_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1afa5513e7eca70ce8dea6054f412e3b66)`() const` <a id="structFRHAPI__RallyHereEvent_1afa5513e7eca70ce8dea6054f412e3b66"></a>

Gets the value of UserId_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a4c9a8aa2d123fdc2512c93260b2cde25)`(const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a4c9a8aa2d123fdc2512c93260b2cde25"></a>

Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUserId`](#structFRHAPI__RallyHereEvent_1ac5874ec683a309095b26c36591622cf8)`(`[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1ac5874ec683a309095b26c36591622cf8"></a>

Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1aabf03dee6f166f2b17fc68a8e17ceb0e)`()` <a id="structFRHAPI__RallyHereEvent_1aabf03dee6f166f2b17fc68a8e17ceb0e"></a>

Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a88095ab0bbb3639de4e4e119271156f6)`() const` <a id="structFRHAPI__RallyHereEvent_1a88095ab0bbb3639de4e4e119271156f6"></a>

Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1a0460004ec91ba93a645d9035ce64a7d8)`(`[`FRHAPI_UserId`](RHAPI_UserId.md#structFRHAPI__UserId)` NewValue)` <a id="structFRHAPI__RallyHereEvent_1a0460004ec91ba93a645d9035ce64a7d8"></a>

Sets the value of UserId_Optional and also sets UserId_IsSet to true.

<br>
#### `public inline void `[`ClearUserId`](#structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b)`()` <a id="structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b"></a>

Clears the value of UserId_Optional and sets UserId_IsSet to false.

<br>
#### `public inline `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1aa616da845c61d1225f55ea50b9c813d5)`()` <a id="structFRHAPI__RallyHereEvent_1aa616da845c61d1225f55ea50b9c813d5"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a129224660544cc59a000c1931cc968c7)`() const` <a id="structFRHAPI__RallyHereEvent_1a129224660544cc59a000c1931cc968c7"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a5506949ea450af87c0d79940b1ab576b)`(const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a5506949ea450af87c0d79940b1ab576b"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1acc25ac331eca5b35adbd483ffd12af7e)`(`[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1acc25ac331eca5b35adbd483ffd12af7e"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1a8ee065e2f7360cf4d87971258d45ad13)`()` <a id="structFRHAPI__RallyHereEvent_1a8ee065e2f7360cf4d87971258d45ad13"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1a74228b5b40393c255e264a90d32a467c)`() const` <a id="structFRHAPI__RallyHereEvent_1a74228b5b40393c255e264a90d32a467c"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1ae4b604097deebc7568b5d625898ce0e1)`(`[`FRHAPI_SessionId`](RHAPI_SessionId.md#structFRHAPI__SessionId)` NewValue)` <a id="structFRHAPI__RallyHereEvent_1ae4b604097deebc7568b5d625898ce0e1"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

<br>
#### `public inline void `[`ClearSessionId`](#structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d)`()` <a id="structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a6352647150f0adb2d9ce623376187a50)`()` <a id="structFRHAPI__RallyHereEvent_1a6352647150f0adb2d9ce623376187a50"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a4dc0bb3719cb189846ef6414ae79ecf6)`() const` <a id="structFRHAPI__RallyHereEvent_1a4dc0bb3719cb189846ef6414ae79ecf6"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1aba99ab4d84642e1b43e0b23d6cc4be5d)`(const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1aba99ab4d84642e1b43e0b23d6cc4be5d"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a3a2f69760809834aa04e0fa1e3dfe52b)`(`[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a3a2f69760809834aa04e0fa1e3dfe52b"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1acd1390584c19bbffb864eedd1aae1b7e)`()` <a id="structFRHAPI__RallyHereEvent_1acd1390584c19bbffb864eedd1aae1b7e"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1af9bf00018fb0c423676fd38133d4615e)`() const` <a id="structFRHAPI__RallyHereEvent_1af9bf00018fb0c423676fd38133d4615e"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a0fd6d1a56031ee7e5045be936cc0b9d0)`(`[`FRHAPI_CorrelationId`](RHAPI_CorrelationId.md#structFRHAPI__CorrelationId)` NewValue)` <a id="structFRHAPI__RallyHereEvent_1a0fd6d1a56031ee7e5045be936cc0b9d0"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

<br>
#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a)`()` <a id="structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

<br>
