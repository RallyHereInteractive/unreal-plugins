---
title: RHAPI_RallyHereEvent
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RallyHereEvent`](#structFRHAPI__RallyHereEvent) | 

## struct `FRHAPI_RallyHereEvent` <a id="structFRHAPI__RallyHereEvent"></a>

```
struct FRHAPI_RallyHereEvent
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`EventUuid`](#structFRHAPI__RallyHereEvent_1a54e4abe43d72d55ebce435082e4c667b) | Unique Event ID for this instance of the event.
`public FString `[`EventName`](#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595) | Type of event to process this as.
`public FDateTime `[`EventTimestamp`](#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f) | Time the event was triggered.
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParams`](#structFRHAPI__RallyHereEvent_1af3ed29c3eaa7aede666ede0907ea05d4) | Event specific parameters.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RallyHereEvent_1ae04c02282e0fe088075b3ec7726c0174) | Event custom data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8) | true if CustomData_Optional has been set to a value
`public FString `[`UserId_Optional`](#structFRHAPI__RallyHereEvent_1adf25f2d9ce1ff401d1e4a295fcfa9926) | 
`public bool `[`UserId_IsSet`](#structFRHAPI__RallyHereEvent_1adb88b950d0f6e108ebfc5b457dba79d4) | true if UserId_Optional has been set to a value
`public bool `[`UserId_IsNull`](#structFRHAPI__RallyHereEvent_1a3a3651ea86051a7d2ddebab302c26cfe) | true if UserId_Optional has been explicitly set to null
`public FString `[`SessionId_Optional`](#structFRHAPI__RallyHereEvent_1a3fbc2d2ff96628339eef3b7bc09f06ab) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__RallyHereEvent_1a9e4c120b0e2e38bf8c2bb90f496d448a) | true if SessionId_Optional has been set to a value
`public bool `[`SessionId_IsNull`](#structFRHAPI__RallyHereEvent_1af917a9d1d9e15edeac9d88c50d1e8491) | true if SessionId_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__RallyHereEvent_1aa6fc132726228aa208b2cf3758dbcce3) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__RallyHereEvent_1adbc7c013cc9349f1695bc00ecc4eeea4) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__RallyHereEvent_1a0871d9dce43255044ff55f9e5ed05b75) | true if CorrelationId_Optional has been explicitly set to null
`public FString `[`ClientIp_Optional`](#structFRHAPI__RallyHereEvent_1a08d6185f310da2a8196ed0ade628dc55) | 
`public bool `[`ClientIp_IsSet`](#structFRHAPI__RallyHereEvent_1a56c3da0774a79d8919fc56bfcb305e08) | true if ClientIp_Optional has been set to a value
`public bool `[`ClientIp_IsNull`](#structFRHAPI__RallyHereEvent_1a1ddee9fd54f98d09813fbe9684689a54) | true if ClientIp_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__RallyHereEvent_1a765da0cc13e868c1d18fabf26f80a2e6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1a9c95a2faa708fbe1466a82082c00622f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1a5aed540af10d37a0ca89ffbb27772a6a)`()` | Gets the value of EventUuid.
`public inline const FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1ae1ddab7e54e8cf26e0e6e933b099cf43)`() const` | Gets the value of EventUuid.
`public inline void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a396709bc32cbc1a0f23456d84954c9c1)`(const FGuid & NewValue)` | Sets the value of EventUuid.
`public inline void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a5b4e1070286b2dfbae5fbb0401616ebe)`(FGuid && NewValue)` | Sets the value of EventUuid using move semantics.
`public inline FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a4536107b5501484f787e60c6d5a540a4)`(const FString & NewValue)` | Sets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1ae34d3fe9bdc9317b8c85a73ddc044643)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7)`()` | Gets the value of EventTimestamp.
`public inline const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8)`() const` | Gets the value of EventTimestamp.
`public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ad744e60e7db52226124144e2f80c11b2)`(const FDateTime & NewValue)` | Sets the value of EventTimestamp.
`public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1af789cce5b111cb47c4eb54a523c3eb06)`(FDateTime && NewValue)` | Sets the value of EventTimestamp using move semantics.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a95c443fd41efaa6c87b03cdd0e000da8)`()` | Gets the value of EventParams.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a1e48980f6b66c8557163abd78c2d3b99)`() const` | Gets the value of EventParams.
`public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a08c2e6d9dd626f97cb6c1737e103b6b5)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of EventParams.
`public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a4bc9564556a4713a3517fa8183fc3084)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of EventParams using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a2a3c3cf7de240af041d8f1ba45d94e06)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a5f3b955cc1fb5cf52abaee4c9b6c4464)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a1bee5d71f945eef8cd33e173ba874183)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a198a15f8de8b6425e1e1da62e29034b4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1af38ea07540ec10ccb1900a2a08b77bf5)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ac370b544c9034ecb2bb43da39e79825f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a99199458b10bc3a7eaa380b475342ff4)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a44e51f9e055801f9e88b85274241026c)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__RallyHereEvent_1ab67fdcd8b3b7f8ebf6e15a1eef16da80)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1adb44239472afd8b2a8039441094c05c1)`()` | Gets the value of UserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a1a27346dff8fd0948ebf422c50997026)`() const` | Gets the value of UserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a853454a8a4704e5de57d0a9e2da8c7ad)`(const FString & DefaultValue) const` | Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUserId`](#structFRHAPI__RallyHereEvent_1ac8218ee92acb2ca4d242f0f9caabd76b)`(FString & OutValue) const` | Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1afca2d0c7cc5d5e62c470d965be876374)`()` | Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a2cd6824c9639c46b50d68fdfc5442394)`() const` | Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1a2a9690b52b2b771917191ba9724c21e3)`(const FString & NewValue)` | Sets the value of UserId_Optional and also sets UserId_IsSet to true.
`public inline void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1abcb7d4fcfd6f2f3361d88d7271e67953)`(FString && NewValue)` | Sets the value of UserId_Optional and also sets UserId_IsSet to true using move semantics.
`public inline void `[`ClearUserId`](#structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b)`()` | Clears the value of UserId_Optional and sets UserId_IsSet to false.
`public inline bool `[`IsUserIdSet`](#structFRHAPI__RallyHereEvent_1a5078b43a1d557a02e15c9a282858d138)`() const` | Checks whether UserId_Optional has been set.
`public inline void `[`SetUserIdToNull`](#structFRHAPI__RallyHereEvent_1a0fa91033d6e78837546bdcf5438478f2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsUserIdNull`](#structFRHAPI__RallyHereEvent_1afbf7780f3139aa0ff54f7ac711d37624)`() const` | Checks whether UserId_Optional is set to null.
`public inline FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a203ffee4e765ade4f9a527bec51de331)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a1166b7897b1c281177efded34e2d1b78)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1aac2ff071abc4ac7bc0ee7ece61fdcba4)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a4dde5360e236ab34956e90fed1e7cd17)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1aeb2d94dc72c8112eb514c3ae53e7f3eb)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1ac3623f6e68b7dccc5034c90190601817)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1aa4b53c7b39e6fc9a94ae684dbaef5ebd)`(const FString & NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1ae51534e7cb56f9c2942cfa6f25c6f2d2)`(FString && NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.
`public inline void `[`ClearSessionId`](#structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline bool `[`IsSessionIdSet`](#structFRHAPI__RallyHereEvent_1ae9396c65b53db36abae0027cc0653f51)`() const` | Checks whether SessionId_Optional has been set.
`public inline void `[`SetSessionIdToNull`](#structFRHAPI__RallyHereEvent_1aaab49b1030221accac1e68312467adb0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSessionIdNull`](#structFRHAPI__RallyHereEvent_1a307c70003b519d8ce29ac8fd10e8b5c3)`() const` | Checks whether SessionId_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad3f3f6286d2b7e66942cccac82eab104)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad9ebd7493ac5b15a6f4a9da7f540b5f5)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad4cd64dc3c86723e95621a5ea120c2f2)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad678bb41eb6c48f528014ec9a06cb11c)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a9f50bdfdc544f13ee69c23e6867a75c4)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a28074f6106163ac7a791091fde1c270f)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a1d2243b20fb342fbe0f5b26d3ab40480)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a13688d257b71b89dd1307a3e01ed6855)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__RallyHereEvent_1a175d498d357284e7e2cb3c83c842c564)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__RallyHereEvent_1a9dae87001a2578ddf64e05b6954a17ed)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__RallyHereEvent_1a006272d7943c80e0cf9a0cb01c0e165d)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1ac092f2a6fe334c99c042bdce2b1f73dd)`()` | Gets the value of ClientIp_Optional, regardless of it having been set.
`public inline const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1ab507263c9320e21325d8a0e718cb5a3c)`() const` | Gets the value of ClientIp_Optional, regardless of it having been set.
`public inline const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1abbaafa7232b64ca1e2f63ca8e406dfe4)`(const FString & DefaultValue) const` | Gets the value of ClientIp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1a3ac76a980db707dbffed5ced7e7e861f)`(FString & OutValue) const` | Fills OutValue with the value of ClientIp_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1ac0994db43ac4773ffd423a363674d079)`()` | Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1a230028ef3a4f98e62042fea3a052bbb7)`() const` | Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1aaad8a4f0a0e033905c5a93ca91ce94fe)`(const FString & NewValue)` | Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true.
`public inline void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1afa179a3782f6f417f8e8b1d2e45c3fde)`(FString && NewValue)` | Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true using move semantics.
`public inline void `[`ClearClientIp`](#structFRHAPI__RallyHereEvent_1ae43d7fc176c0915100c8b39747953477)`()` | Clears the value of ClientIp_Optional and sets ClientIp_IsSet to false.
`public inline bool `[`IsClientIpSet`](#structFRHAPI__RallyHereEvent_1aaf30a1bfe95b31e2c14ed7809041ddcd)`() const` | Checks whether ClientIp_Optional has been set.
`public inline void `[`SetClientIpToNull`](#structFRHAPI__RallyHereEvent_1a2e083729b750963884b930eddc697fda)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsClientIpNull`](#structFRHAPI__RallyHereEvent_1afeea074a648c1f1c9647633ce01d47ba)`() const` | Checks whether ClientIp_Optional is set to null.

### Members

#### `public FGuid `[`EventUuid`](#structFRHAPI__RallyHereEvent_1a54e4abe43d72d55ebce435082e4c667b) <a id="structFRHAPI__RallyHereEvent_1a54e4abe43d72d55ebce435082e4c667b"></a>

Unique Event ID for this instance of the event.

#### `public FString `[`EventName`](#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595) <a id="structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595"></a>

Type of event to process this as.

#### `public FDateTime `[`EventTimestamp`](#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f) <a id="structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f"></a>

Time the event was triggered.

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParams`](#structFRHAPI__RallyHereEvent_1af3ed29c3eaa7aede666ede0907ea05d4) <a id="structFRHAPI__RallyHereEvent_1af3ed29c3eaa7aede666ede0907ea05d4"></a>

Event specific parameters.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RallyHereEvent_1ae04c02282e0fe088075b3ec7726c0174) <a id="structFRHAPI__RallyHereEvent_1ae04c02282e0fe088075b3ec7726c0174"></a>

Event custom data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8) <a id="structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`UserId_Optional`](#structFRHAPI__RallyHereEvent_1adf25f2d9ce1ff401d1e4a295fcfa9926) <a id="structFRHAPI__RallyHereEvent_1adf25f2d9ce1ff401d1e4a295fcfa9926"></a>

#### `public bool `[`UserId_IsSet`](#structFRHAPI__RallyHereEvent_1adb88b950d0f6e108ebfc5b457dba79d4) <a id="structFRHAPI__RallyHereEvent_1adb88b950d0f6e108ebfc5b457dba79d4"></a>

true if UserId_Optional has been set to a value

#### `public bool `[`UserId_IsNull`](#structFRHAPI__RallyHereEvent_1a3a3651ea86051a7d2ddebab302c26cfe) <a id="structFRHAPI__RallyHereEvent_1a3a3651ea86051a7d2ddebab302c26cfe"></a>

true if UserId_Optional has been explicitly set to null

#### `public FString `[`SessionId_Optional`](#structFRHAPI__RallyHereEvent_1a3fbc2d2ff96628339eef3b7bc09f06ab) <a id="structFRHAPI__RallyHereEvent_1a3fbc2d2ff96628339eef3b7bc09f06ab"></a>

#### `public bool `[`SessionId_IsSet`](#structFRHAPI__RallyHereEvent_1a9e4c120b0e2e38bf8c2bb90f496d448a) <a id="structFRHAPI__RallyHereEvent_1a9e4c120b0e2e38bf8c2bb90f496d448a"></a>

true if SessionId_Optional has been set to a value

#### `public bool `[`SessionId_IsNull`](#structFRHAPI__RallyHereEvent_1af917a9d1d9e15edeac9d88c50d1e8491) <a id="structFRHAPI__RallyHereEvent_1af917a9d1d9e15edeac9d88c50d1e8491"></a>

true if SessionId_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__RallyHereEvent_1aa6fc132726228aa208b2cf3758dbcce3) <a id="structFRHAPI__RallyHereEvent_1aa6fc132726228aa208b2cf3758dbcce3"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__RallyHereEvent_1adbc7c013cc9349f1695bc00ecc4eeea4) <a id="structFRHAPI__RallyHereEvent_1adbc7c013cc9349f1695bc00ecc4eeea4"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__RallyHereEvent_1a0871d9dce43255044ff55f9e5ed05b75) <a id="structFRHAPI__RallyHereEvent_1a0871d9dce43255044ff55f9e5ed05b75"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public FString `[`ClientIp_Optional`](#structFRHAPI__RallyHereEvent_1a08d6185f310da2a8196ed0ade628dc55) <a id="structFRHAPI__RallyHereEvent_1a08d6185f310da2a8196ed0ade628dc55"></a>

#### `public bool `[`ClientIp_IsSet`](#structFRHAPI__RallyHereEvent_1a56c3da0774a79d8919fc56bfcb305e08) <a id="structFRHAPI__RallyHereEvent_1a56c3da0774a79d8919fc56bfcb305e08"></a>

true if ClientIp_Optional has been set to a value

#### `public bool `[`ClientIp_IsNull`](#structFRHAPI__RallyHereEvent_1a1ddee9fd54f98d09813fbe9684689a54) <a id="structFRHAPI__RallyHereEvent_1a1ddee9fd54f98d09813fbe9684689a54"></a>

true if ClientIp_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__RallyHereEvent_1a765da0cc13e868c1d18fabf26f80a2e6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RallyHereEvent_1a765da0cc13e868c1d18fabf26f80a2e6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1a9c95a2faa708fbe1466a82082c00622f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RallyHereEvent_1a9c95a2faa708fbe1466a82082c00622f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1a5aed540af10d37a0ca89ffbb27772a6a)`()` <a id="structFRHAPI__RallyHereEvent_1a5aed540af10d37a0ca89ffbb27772a6a"></a>

Gets the value of EventUuid.

#### `public inline const FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1ae1ddab7e54e8cf26e0e6e933b099cf43)`() const` <a id="structFRHAPI__RallyHereEvent_1ae1ddab7e54e8cf26e0e6e933b099cf43"></a>

Gets the value of EventUuid.

#### `public inline void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a396709bc32cbc1a0f23456d84954c9c1)`(const FGuid & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a396709bc32cbc1a0f23456d84954c9c1"></a>

Sets the value of EventUuid.

#### `public inline void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a5b4e1070286b2dfbae5fbb0401616ebe)`(FGuid && NewValue)` <a id="structFRHAPI__RallyHereEvent_1a5b4e1070286b2dfbae5fbb0401616ebe"></a>

Sets the value of EventUuid using move semantics.

#### `public inline FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec)`()` <a id="structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec"></a>

Gets the value of EventName.

#### `public inline const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038)`() const` <a id="structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038"></a>

Gets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a4536107b5501484f787e60c6d5a540a4)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a4536107b5501484f787e60c6d5a540a4"></a>

Sets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1ae34d3fe9bdc9317b8c85a73ddc044643)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1ae34d3fe9bdc9317b8c85a73ddc044643"></a>

Sets the value of EventName using move semantics.

#### `public inline FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7)`()` <a id="structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7"></a>

Gets the value of EventTimestamp.

#### `public inline const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8)`() const` <a id="structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8"></a>

Gets the value of EventTimestamp.

#### `public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ad744e60e7db52226124144e2f80c11b2)`(const FDateTime & NewValue)` <a id="structFRHAPI__RallyHereEvent_1ad744e60e7db52226124144e2f80c11b2"></a>

Sets the value of EventTimestamp.

#### `public inline void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1af789cce5b111cb47c4eb54a523c3eb06)`(FDateTime && NewValue)` <a id="structFRHAPI__RallyHereEvent_1af789cce5b111cb47c4eb54a523c3eb06"></a>

Sets the value of EventTimestamp using move semantics.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a95c443fd41efaa6c87b03cdd0e000da8)`()` <a id="structFRHAPI__RallyHereEvent_1a95c443fd41efaa6c87b03cdd0e000da8"></a>

Gets the value of EventParams.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a1e48980f6b66c8557163abd78c2d3b99)`() const` <a id="structFRHAPI__RallyHereEvent_1a1e48980f6b66c8557163abd78c2d3b99"></a>

Gets the value of EventParams.

#### `public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a08c2e6d9dd626f97cb6c1737e103b6b5)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a08c2e6d9dd626f97cb6c1737e103b6b5"></a>

Sets the value of EventParams.

#### `public inline void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a4bc9564556a4713a3517fa8183fc3084)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__RallyHereEvent_1a4bc9564556a4713a3517fa8183fc3084"></a>

Sets the value of EventParams using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a2a3c3cf7de240af041d8f1ba45d94e06)`()` <a id="structFRHAPI__RallyHereEvent_1a2a3c3cf7de240af041d8f1ba45d94e06"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a5f3b955cc1fb5cf52abaee4c9b6c4464)`() const` <a id="structFRHAPI__RallyHereEvent_1a5f3b955cc1fb5cf52abaee4c9b6c4464"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a1bee5d71f945eef8cd33e173ba874183)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a1bee5d71f945eef8cd33e173ba874183"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a198a15f8de8b6425e1e1da62e29034b4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a198a15f8de8b6425e1e1da62e29034b4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1af38ea07540ec10ccb1900a2a08b77bf5)`()` <a id="structFRHAPI__RallyHereEvent_1af38ea07540ec10ccb1900a2a08b77bf5"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ac370b544c9034ecb2bb43da39e79825f)`() const` <a id="structFRHAPI__RallyHereEvent_1ac370b544c9034ecb2bb43da39e79825f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a99199458b10bc3a7eaa380b475342ff4)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a99199458b10bc3a7eaa380b475342ff4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a44e51f9e055801f9e88b85274241026c)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RallyHereEvent_1a44e51f9e055801f9e88b85274241026c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` <a id="structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__RallyHereEvent_1ab67fdcd8b3b7f8ebf6e15a1eef16da80)`() const` <a id="structFRHAPI__RallyHereEvent_1ab67fdcd8b3b7f8ebf6e15a1eef16da80"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1adb44239472afd8b2a8039441094c05c1)`()` <a id="structFRHAPI__RallyHereEvent_1adb44239472afd8b2a8039441094c05c1"></a>

Gets the value of UserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a1a27346dff8fd0948ebf422c50997026)`() const` <a id="structFRHAPI__RallyHereEvent_1a1a27346dff8fd0948ebf422c50997026"></a>

Gets the value of UserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a853454a8a4704e5de57d0a9e2da8c7ad)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a853454a8a4704e5de57d0a9e2da8c7ad"></a>

Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUserId`](#structFRHAPI__RallyHereEvent_1ac8218ee92acb2ca4d242f0f9caabd76b)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1ac8218ee92acb2ca4d242f0f9caabd76b"></a>

Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1afca2d0c7cc5d5e62c470d965be876374)`()` <a id="structFRHAPI__RallyHereEvent_1afca2d0c7cc5d5e62c470d965be876374"></a>

Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a2cd6824c9639c46b50d68fdfc5442394)`() const` <a id="structFRHAPI__RallyHereEvent_1a2cd6824c9639c46b50d68fdfc5442394"></a>

Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1a2a9690b52b2b771917191ba9724c21e3)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a2a9690b52b2b771917191ba9724c21e3"></a>

Sets the value of UserId_Optional and also sets UserId_IsSet to true.

#### `public inline void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1abcb7d4fcfd6f2f3361d88d7271e67953)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1abcb7d4fcfd6f2f3361d88d7271e67953"></a>

Sets the value of UserId_Optional and also sets UserId_IsSet to true using move semantics.

#### `public inline void `[`ClearUserId`](#structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b)`()` <a id="structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b"></a>

Clears the value of UserId_Optional and sets UserId_IsSet to false.

#### `public inline bool `[`IsUserIdSet`](#structFRHAPI__RallyHereEvent_1a5078b43a1d557a02e15c9a282858d138)`() const` <a id="structFRHAPI__RallyHereEvent_1a5078b43a1d557a02e15c9a282858d138"></a>

Checks whether UserId_Optional has been set.

#### `public inline void `[`SetUserIdToNull`](#structFRHAPI__RallyHereEvent_1a0fa91033d6e78837546bdcf5438478f2)`()` <a id="structFRHAPI__RallyHereEvent_1a0fa91033d6e78837546bdcf5438478f2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsUserIdNull`](#structFRHAPI__RallyHereEvent_1afbf7780f3139aa0ff54f7ac711d37624)`() const` <a id="structFRHAPI__RallyHereEvent_1afbf7780f3139aa0ff54f7ac711d37624"></a>

Checks whether UserId_Optional is set to null.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a203ffee4e765ade4f9a527bec51de331)`()` <a id="structFRHAPI__RallyHereEvent_1a203ffee4e765ade4f9a527bec51de331"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a1166b7897b1c281177efded34e2d1b78)`() const` <a id="structFRHAPI__RallyHereEvent_1a1166b7897b1c281177efded34e2d1b78"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1aac2ff071abc4ac7bc0ee7ece61fdcba4)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1aac2ff071abc4ac7bc0ee7ece61fdcba4"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a4dde5360e236ab34956e90fed1e7cd17)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a4dde5360e236ab34956e90fed1e7cd17"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1aeb2d94dc72c8112eb514c3ae53e7f3eb)`()` <a id="structFRHAPI__RallyHereEvent_1aeb2d94dc72c8112eb514c3ae53e7f3eb"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1ac3623f6e68b7dccc5034c90190601817)`() const` <a id="structFRHAPI__RallyHereEvent_1ac3623f6e68b7dccc5034c90190601817"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1aa4b53c7b39e6fc9a94ae684dbaef5ebd)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1aa4b53c7b39e6fc9a94ae684dbaef5ebd"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

#### `public inline void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1ae51534e7cb56f9c2942cfa6f25c6f2d2)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1ae51534e7cb56f9c2942cfa6f25c6f2d2"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionId`](#structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d)`()` <a id="structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

#### `public inline bool `[`IsSessionIdSet`](#structFRHAPI__RallyHereEvent_1ae9396c65b53db36abae0027cc0653f51)`() const` <a id="structFRHAPI__RallyHereEvent_1ae9396c65b53db36abae0027cc0653f51"></a>

Checks whether SessionId_Optional has been set.

#### `public inline void `[`SetSessionIdToNull`](#structFRHAPI__RallyHereEvent_1aaab49b1030221accac1e68312467adb0)`()` <a id="structFRHAPI__RallyHereEvent_1aaab49b1030221accac1e68312467adb0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSessionIdNull`](#structFRHAPI__RallyHereEvent_1a307c70003b519d8ce29ac8fd10e8b5c3)`() const` <a id="structFRHAPI__RallyHereEvent_1a307c70003b519d8ce29ac8fd10e8b5c3"></a>

Checks whether SessionId_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad3f3f6286d2b7e66942cccac82eab104)`()` <a id="structFRHAPI__RallyHereEvent_1ad3f3f6286d2b7e66942cccac82eab104"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad9ebd7493ac5b15a6f4a9da7f540b5f5)`() const` <a id="structFRHAPI__RallyHereEvent_1ad9ebd7493ac5b15a6f4a9da7f540b5f5"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad4cd64dc3c86723e95621a5ea120c2f2)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1ad4cd64dc3c86723e95621a5ea120c2f2"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ad678bb41eb6c48f528014ec9a06cb11c)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1ad678bb41eb6c48f528014ec9a06cb11c"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a9f50bdfdc544f13ee69c23e6867a75c4)`()` <a id="structFRHAPI__RallyHereEvent_1a9f50bdfdc544f13ee69c23e6867a75c4"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a28074f6106163ac7a791091fde1c270f)`() const` <a id="structFRHAPI__RallyHereEvent_1a28074f6106163ac7a791091fde1c270f"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a1d2243b20fb342fbe0f5b26d3ab40480)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a1d2243b20fb342fbe0f5b26d3ab40480"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a13688d257b71b89dd1307a3e01ed6855)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1a13688d257b71b89dd1307a3e01ed6855"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a)`()` <a id="structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__RallyHereEvent_1a175d498d357284e7e2cb3c83c842c564)`() const` <a id="structFRHAPI__RallyHereEvent_1a175d498d357284e7e2cb3c83c842c564"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__RallyHereEvent_1a9dae87001a2578ddf64e05b6954a17ed)`()` <a id="structFRHAPI__RallyHereEvent_1a9dae87001a2578ddf64e05b6954a17ed"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__RallyHereEvent_1a006272d7943c80e0cf9a0cb01c0e165d)`() const` <a id="structFRHAPI__RallyHereEvent_1a006272d7943c80e0cf9a0cb01c0e165d"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1ac092f2a6fe334c99c042bdce2b1f73dd)`()` <a id="structFRHAPI__RallyHereEvent_1ac092f2a6fe334c99c042bdce2b1f73dd"></a>

Gets the value of ClientIp_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1ab507263c9320e21325d8a0e718cb5a3c)`() const` <a id="structFRHAPI__RallyHereEvent_1ab507263c9320e21325d8a0e718cb5a3c"></a>

Gets the value of ClientIp_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1abbaafa7232b64ca1e2f63ca8e406dfe4)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1abbaafa7232b64ca1e2f63ca8e406dfe4"></a>

Gets the value of ClientIp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1a3ac76a980db707dbffed5ced7e7e861f)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a3ac76a980db707dbffed5ced7e7e861f"></a>

Fills OutValue with the value of ClientIp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1ac0994db43ac4773ffd423a363674d079)`()` <a id="structFRHAPI__RallyHereEvent_1ac0994db43ac4773ffd423a363674d079"></a>

Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1a230028ef3a4f98e62042fea3a052bbb7)`() const` <a id="structFRHAPI__RallyHereEvent_1a230028ef3a4f98e62042fea3a052bbb7"></a>

Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1aaad8a4f0a0e033905c5a93ca91ce94fe)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1aaad8a4f0a0e033905c5a93ca91ce94fe"></a>

Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true.

#### `public inline void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1afa179a3782f6f417f8e8b1d2e45c3fde)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1afa179a3782f6f417f8e8b1d2e45c3fde"></a>

Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true using move semantics.

#### `public inline void `[`ClearClientIp`](#structFRHAPI__RallyHereEvent_1ae43d7fc176c0915100c8b39747953477)`()` <a id="structFRHAPI__RallyHereEvent_1ae43d7fc176c0915100c8b39747953477"></a>

Clears the value of ClientIp_Optional and sets ClientIp_IsSet to false.

#### `public inline bool `[`IsClientIpSet`](#structFRHAPI__RallyHereEvent_1aaf30a1bfe95b31e2c14ed7809041ddcd)`() const` <a id="structFRHAPI__RallyHereEvent_1aaf30a1bfe95b31e2c14ed7809041ddcd"></a>

Checks whether ClientIp_Optional has been set.

#### `public inline void `[`SetClientIpToNull`](#structFRHAPI__RallyHereEvent_1a2e083729b750963884b930eddc697fda)`()` <a id="structFRHAPI__RallyHereEvent_1a2e083729b750963884b930eddc697fda"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsClientIpNull`](#structFRHAPI__RallyHereEvent_1afeea074a648c1f1c9647633ce01d47ba)`() const` <a id="structFRHAPI__RallyHereEvent_1afeea074a648c1f1c9647633ce01d47ba"></a>

Checks whether ClientIp_Optional is set to null.

