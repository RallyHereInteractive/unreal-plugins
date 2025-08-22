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
`public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1afcf1a5c2f43b2fd489c16e64db63b045)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1ac985fc108c8a71a1dbb7d0dfac0866fc)`()` | Gets the value of EventUuid.
`public inline FORCEINLINE const FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1a777fa7df4951dcf3cc7e861b8c7994cf)`() const` | Gets the value of EventUuid.
`public inline FORCEINLINE void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1aef43d3be00c3c5433ee5dd6c56c26ae6)`(const FGuid & NewValue)` | Sets the value of EventUuid.
`public inline FORCEINLINE void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a714fa5d8632b629b2c33997dcf0fc6e4)`(FGuid && NewValue)` | Sets the value of EventUuid using move semantics.
`public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1ac0753e01efeb015ed3a541c26f78a1aa)`()` | Gets the value of EventName.
`public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a3faf78bdb4d273139be1cb2dd4cb0e29)`() const` | Gets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1ae1b695af4ed3f297a9f8daa84a611242)`(const FString & NewValue)` | Sets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a9a36ab87e02b58a958c371965a0b4803)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a1fdf54d715703b8d1df9ce946b0ef6f7)`()` | Gets the value of EventTimestamp.
`public inline FORCEINLINE const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5c91d1d987e1d5562f094529a9362adc)`() const` | Gets the value of EventTimestamp.
`public inline FORCEINLINE void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a90adc7797599dfc39336b6ff94a8b84e)`(const FDateTime & NewValue)` | Sets the value of EventTimestamp.
`public inline FORCEINLINE void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ade6e5dc2dc22779012edfc7197876b36)`(FDateTime && NewValue)` | Sets the value of EventTimestamp using move semantics.
`public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a63c2e3bf69e8bfa9828b3d7135050ba6)`()` | Gets the value of EventParams.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1aacbe595f9a1be9bc0b0d4dc61e1e8afa)`() const` | Gets the value of EventParams.
`public inline FORCEINLINE void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a2ada50c0140b6aa5913c5ee00c251002)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of EventParams.
`public inline FORCEINLINE void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1afd35ed14f64c5fcbc5c4f0a906b38a87)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of EventParams using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a41eb60f6405c5a60f9811dd7fc1f92c5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a357c6d0df2df6f31a8dff72f4e998a4a)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1ac259a6abd9e6fb69178bc076c26f8f71)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a65a558a234ac9d91759364cc572d99fe)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1a7d1b6d884dabcc4519adbc902572a3df)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ae37f3160233e79f1839ec459584d34e3)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a7e3292824511285d6052f3d38ffa415f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1afc4b49d24efbab554c5b7fda7229b1bd)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a42d7f3aa66672cb17b1799cb9daeb466)`()` | Gets the value of UserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a99a4953218b356c9d3816af26b3ed9e2)`() const` | Gets the value of UserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a2a694045f49ec8e963d532ed69517c3d)`(const FString & DefaultValue) const` | Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUserId`](#structFRHAPI__RallyHereEvent_1ab8326a3c48a4c5695c01559770cc868d)`(FString & OutValue) const` | Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a61d3c815ba397d9748a4af69642d708b)`()` | Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a9562517c7806967e9e4fc3517c00451b)`() const` | Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1a21a1f26ad8610ac109ec617d7cdc593d)`(const FString & NewValue)` | Sets the value of UserId_Optional and also sets UserId_IsSet to true.
`public inline FORCEINLINE void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1af9faeb8e21e291f8ddf9aab9fe77e796)`(FString && NewValue)` | Sets the value of UserId_Optional and also sets UserId_IsSet to true using move semantics.
`public inline void `[`ClearUserId`](#structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b)`()` | Clears the value of UserId_Optional and sets UserId_IsSet to false.
`public inline FORCEINLINE void `[`SetUserIdToNull`](#structFRHAPI__RallyHereEvent_1abcd0c57322c0624e94e39589a10c72ce)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsUserIdNull`](#structFRHAPI__RallyHereEvent_1a2bac5b272c5e872011d346128ae253a8)`() const` | Checks whether UserId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1aa3887ab1a43a413760d98582c8399ad4)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1ade5d434e27787345ddff25ac17570cc2)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1ac475b3f7ab25380bccb39bb4a3c4c6be)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a9df75b3b7ddfa9c975aa132e03e1c2ad)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1acd583d93a6501307ee6921c87dd9eef9)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1ad491c23991a67c9b6a46fc683fd3170e)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1a85a31b2dc9445e56976b754c80b08043)`(const FString & NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1aaf8c256d865f057b1df1d76d529bf0be)`(FString && NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.
`public inline void `[`ClearSessionId`](#structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline FORCEINLINE void `[`SetSessionIdToNull`](#structFRHAPI__RallyHereEvent_1acb060cf4820e1c2fff6005eb2df1434a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSessionIdNull`](#structFRHAPI__RallyHereEvent_1a241e66da00df808ea5e4c467fb81613d)`() const` | Checks whether SessionId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a13b02d841e50911af320ece595fb1810)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a3dfccc39d20b90378896b3d9f1e209eb)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ac066906f9d08bcbe5e531578f3f5d8af)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a49dc9fdcc6e5a1912743e9d9e3f8d595)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a3d98f23fa33bcaeec69f5adc98fde6e5)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a4f0cd15322319daa4cdc8924a8cdc06b)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a005a89b843e91a558fbb5222a1822cd4)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1aa3ababd3885c3e3f3c6c856ed44d6b0f)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__RallyHereEvent_1aa87379e3df46f302877fc2fcdecc5641)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__RallyHereEvent_1a226d5d9bdba1a4f6c2258e4d632b813e)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1adafec9fa29a37e4cbfdf259c44336751)`()` | Gets the value of ClientIp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1a2278c9e71697c0ef3c9e694b383fb4b7)`() const` | Gets the value of ClientIp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1aea8f1a30f2118425aca1788a08fa19e8)`(const FString & DefaultValue) const` | Gets the value of ClientIp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1afb62f6b4f3fdd9770c019b36dc533b28)`(FString & OutValue) const` | Fills OutValue with the value of ClientIp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1a25c0460ce4d0f1a374905d4919755f89)`()` | Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1a86f45b83416147727d71558bcb29e3d3)`() const` | Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1abee2000b7000a2b4738133fd4873a2f7)`(const FString & NewValue)` | Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true.
`public inline FORCEINLINE void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1aaa03397269ba9336094554ae39b5b65f)`(FString && NewValue)` | Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true using move semantics.
`public inline void `[`ClearClientIp`](#structFRHAPI__RallyHereEvent_1ae43d7fc176c0915100c8b39747953477)`()` | Clears the value of ClientIp_Optional and sets ClientIp_IsSet to false.
`public inline FORCEINLINE void `[`SetClientIpToNull`](#structFRHAPI__RallyHereEvent_1aa602321e7a451d77ce55aacfcdc59199)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientIpNull`](#structFRHAPI__RallyHereEvent_1af3a6cdae5d2863a8c083594cfe046472)`() const` | Checks whether ClientIp_Optional is set to null.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__RallyHereEvent_1afcf1a5c2f43b2fd489c16e64db63b045)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RallyHereEvent_1afcf1a5c2f43b2fd489c16e64db63b045"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1ac985fc108c8a71a1dbb7d0dfac0866fc)`()` <a id="structFRHAPI__RallyHereEvent_1ac985fc108c8a71a1dbb7d0dfac0866fc"></a>

Gets the value of EventUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetEventUuid`](#structFRHAPI__RallyHereEvent_1a777fa7df4951dcf3cc7e861b8c7994cf)`() const` <a id="structFRHAPI__RallyHereEvent_1a777fa7df4951dcf3cc7e861b8c7994cf"></a>

Gets the value of EventUuid.

#### `public inline FORCEINLINE void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1aef43d3be00c3c5433ee5dd6c56c26ae6)`(const FGuid & NewValue)` <a id="structFRHAPI__RallyHereEvent_1aef43d3be00c3c5433ee5dd6c56c26ae6"></a>

Sets the value of EventUuid.

#### `public inline FORCEINLINE void `[`SetEventUuid`](#structFRHAPI__RallyHereEvent_1a714fa5d8632b629b2c33997dcf0fc6e4)`(FGuid && NewValue)` <a id="structFRHAPI__RallyHereEvent_1a714fa5d8632b629b2c33997dcf0fc6e4"></a>

Sets the value of EventUuid using move semantics.

#### `public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1ac0753e01efeb015ed3a541c26f78a1aa)`()` <a id="structFRHAPI__RallyHereEvent_1ac0753e01efeb015ed3a541c26f78a1aa"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__RallyHereEvent_1a3faf78bdb4d273139be1cb2dd4cb0e29)`() const` <a id="structFRHAPI__RallyHereEvent_1a3faf78bdb4d273139be1cb2dd4cb0e29"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1ae1b695af4ed3f297a9f8daa84a611242)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1ae1b695af4ed3f297a9f8daa84a611242"></a>

Sets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__RallyHereEvent_1a9a36ab87e02b58a958c371965a0b4803)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1a9a36ab87e02b58a958c371965a0b4803"></a>

Sets the value of EventName using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a1fdf54d715703b8d1df9ce946b0ef6f7)`()` <a id="structFRHAPI__RallyHereEvent_1a1fdf54d715703b8d1df9ce946b0ef6f7"></a>

Gets the value of EventTimestamp.

#### `public inline FORCEINLINE const FDateTime & `[`GetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a5c91d1d987e1d5562f094529a9362adc)`() const` <a id="structFRHAPI__RallyHereEvent_1a5c91d1d987e1d5562f094529a9362adc"></a>

Gets the value of EventTimestamp.

#### `public inline FORCEINLINE void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1a90adc7797599dfc39336b6ff94a8b84e)`(const FDateTime & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a90adc7797599dfc39336b6ff94a8b84e"></a>

Sets the value of EventTimestamp.

#### `public inline FORCEINLINE void `[`SetEventTimestamp`](#structFRHAPI__RallyHereEvent_1ade6e5dc2dc22779012edfc7197876b36)`(FDateTime && NewValue)` <a id="structFRHAPI__RallyHereEvent_1ade6e5dc2dc22779012edfc7197876b36"></a>

Sets the value of EventTimestamp using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1a63c2e3bf69e8bfa9828b3d7135050ba6)`()` <a id="structFRHAPI__RallyHereEvent_1a63c2e3bf69e8bfa9828b3d7135050ba6"></a>

Gets the value of EventParams.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParams`](#structFRHAPI__RallyHereEvent_1aacbe595f9a1be9bc0b0d4dc61e1e8afa)`() const` <a id="structFRHAPI__RallyHereEvent_1aacbe595f9a1be9bc0b0d4dc61e1e8afa"></a>

Gets the value of EventParams.

#### `public inline FORCEINLINE void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1a2ada50c0140b6aa5913c5ee00c251002)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a2ada50c0140b6aa5913c5ee00c251002"></a>

Sets the value of EventParams.

#### `public inline FORCEINLINE void `[`SetEventParams`](#structFRHAPI__RallyHereEvent_1afd35ed14f64c5fcbc5c4f0a906b38a87)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__RallyHereEvent_1afd35ed14f64c5fcbc5c4f0a906b38a87"></a>

Sets the value of EventParams using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a41eb60f6405c5a60f9811dd7fc1f92c5)`()` <a id="structFRHAPI__RallyHereEvent_1a41eb60f6405c5a60f9811dd7fc1f92c5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a357c6d0df2df6f31a8dff72f4e998a4a)`() const` <a id="structFRHAPI__RallyHereEvent_1a357c6d0df2df6f31a8dff72f4e998a4a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1ac259a6abd9e6fb69178bc076c26f8f71)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1ac259a6abd9e6fb69178bc076c26f8f71"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__RallyHereEvent_1a65a558a234ac9d91759364cc572d99fe)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a65a558a234ac9d91759364cc572d99fe"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1a7d1b6d884dabcc4519adbc902572a3df)`()` <a id="structFRHAPI__RallyHereEvent_1a7d1b6d884dabcc4519adbc902572a3df"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RallyHereEvent_1ae37f3160233e79f1839ec459584d34e3)`() const` <a id="structFRHAPI__RallyHereEvent_1ae37f3160233e79f1839ec459584d34e3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1a7e3292824511285d6052f3d38ffa415f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a7e3292824511285d6052f3d38ffa415f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RallyHereEvent_1afc4b49d24efbab554c5b7fda7229b1bd)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RallyHereEvent_1afc4b49d24efbab554c5b7fda7229b1bd"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)`()` <a id="structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a42d7f3aa66672cb17b1799cb9daeb466)`()` <a id="structFRHAPI__RallyHereEvent_1a42d7f3aa66672cb17b1799cb9daeb466"></a>

Gets the value of UserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a99a4953218b356c9d3816af26b3ed9e2)`() const` <a id="structFRHAPI__RallyHereEvent_1a99a4953218b356c9d3816af26b3ed9e2"></a>

Gets the value of UserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetUserId`](#structFRHAPI__RallyHereEvent_1a2a694045f49ec8e963d532ed69517c3d)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1a2a694045f49ec8e963d532ed69517c3d"></a>

Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUserId`](#structFRHAPI__RallyHereEvent_1ab8326a3c48a4c5695c01559770cc868d)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1ab8326a3c48a4c5695c01559770cc868d"></a>

Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a61d3c815ba397d9748a4af69642d708b)`()` <a id="structFRHAPI__RallyHereEvent_1a61d3c815ba397d9748a4af69642d708b"></a>

Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetUserIdOrNull`](#structFRHAPI__RallyHereEvent_1a9562517c7806967e9e4fc3517c00451b)`() const` <a id="structFRHAPI__RallyHereEvent_1a9562517c7806967e9e4fc3517c00451b"></a>

Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1a21a1f26ad8610ac109ec617d7cdc593d)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a21a1f26ad8610ac109ec617d7cdc593d"></a>

Sets the value of UserId_Optional and also sets UserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUserId`](#structFRHAPI__RallyHereEvent_1af9faeb8e21e291f8ddf9aab9fe77e796)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1af9faeb8e21e291f8ddf9aab9fe77e796"></a>

Sets the value of UserId_Optional and also sets UserId_IsSet to true using move semantics.

#### `public inline void `[`ClearUserId`](#structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b)`()` <a id="structFRHAPI__RallyHereEvent_1ab495ffdc4fcda047ecbd42e18bcfe97b"></a>

Clears the value of UserId_Optional and sets UserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetUserIdToNull`](#structFRHAPI__RallyHereEvent_1abcd0c57322c0624e94e39589a10c72ce)`()` <a id="structFRHAPI__RallyHereEvent_1abcd0c57322c0624e94e39589a10c72ce"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsUserIdNull`](#structFRHAPI__RallyHereEvent_1a2bac5b272c5e872011d346128ae253a8)`() const` <a id="structFRHAPI__RallyHereEvent_1a2bac5b272c5e872011d346128ae253a8"></a>

Checks whether UserId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1aa3887ab1a43a413760d98582c8399ad4)`()` <a id="structFRHAPI__RallyHereEvent_1aa3887ab1a43a413760d98582c8399ad4"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1ade5d434e27787345ddff25ac17570cc2)`() const` <a id="structFRHAPI__RallyHereEvent_1ade5d434e27787345ddff25ac17570cc2"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1ac475b3f7ab25380bccb39bb4a3c4c6be)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1ac475b3f7ab25380bccb39bb4a3c4c6be"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionId`](#structFRHAPI__RallyHereEvent_1a9df75b3b7ddfa9c975aa132e03e1c2ad)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a9df75b3b7ddfa9c975aa132e03e1c2ad"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1acd583d93a6501307ee6921c87dd9eef9)`()` <a id="structFRHAPI__RallyHereEvent_1acd583d93a6501307ee6921c87dd9eef9"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSessionIdOrNull`](#structFRHAPI__RallyHereEvent_1ad491c23991a67c9b6a46fc683fd3170e)`() const` <a id="structFRHAPI__RallyHereEvent_1ad491c23991a67c9b6a46fc683fd3170e"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1a85a31b2dc9445e56976b754c80b08043)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a85a31b2dc9445e56976b754c80b08043"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__RallyHereEvent_1aaf8c256d865f057b1df1d76d529bf0be)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1aaf8c256d865f057b1df1d76d529bf0be"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionId`](#structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d)`()` <a id="structFRHAPI__RallyHereEvent_1a2fad37a84ed8eb2cbaac71c605d07e0d"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSessionIdToNull`](#structFRHAPI__RallyHereEvent_1acb060cf4820e1c2fff6005eb2df1434a)`()` <a id="structFRHAPI__RallyHereEvent_1acb060cf4820e1c2fff6005eb2df1434a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSessionIdNull`](#structFRHAPI__RallyHereEvent_1a241e66da00df808ea5e4c467fb81613d)`() const` <a id="structFRHAPI__RallyHereEvent_1a241e66da00df808ea5e4c467fb81613d"></a>

Checks whether SessionId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a13b02d841e50911af320ece595fb1810)`()` <a id="structFRHAPI__RallyHereEvent_1a13b02d841e50911af320ece595fb1810"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a3dfccc39d20b90378896b3d9f1e209eb)`() const` <a id="structFRHAPI__RallyHereEvent_1a3dfccc39d20b90378896b3d9f1e209eb"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1ac066906f9d08bcbe5e531578f3f5d8af)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1ac066906f9d08bcbe5e531578f3f5d8af"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__RallyHereEvent_1a49dc9fdcc6e5a1912743e9d9e3f8d595)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1a49dc9fdcc6e5a1912743e9d9e3f8d595"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a3d98f23fa33bcaeec69f5adc98fde6e5)`()` <a id="structFRHAPI__RallyHereEvent_1a3d98f23fa33bcaeec69f5adc98fde6e5"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__RallyHereEvent_1a4f0cd15322319daa4cdc8924a8cdc06b)`() const` <a id="structFRHAPI__RallyHereEvent_1a4f0cd15322319daa4cdc8924a8cdc06b"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1a005a89b843e91a558fbb5222a1822cd4)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1a005a89b843e91a558fbb5222a1822cd4"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__RallyHereEvent_1aa3ababd3885c3e3f3c6c856ed44d6b0f)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1aa3ababd3885c3e3f3c6c856ed44d6b0f"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a)`()` <a id="structFRHAPI__RallyHereEvent_1a68b08b6136ad6f5fd85300d15478de1a"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__RallyHereEvent_1aa87379e3df46f302877fc2fcdecc5641)`()` <a id="structFRHAPI__RallyHereEvent_1aa87379e3df46f302877fc2fcdecc5641"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__RallyHereEvent_1a226d5d9bdba1a4f6c2258e4d632b813e)`() const` <a id="structFRHAPI__RallyHereEvent_1a226d5d9bdba1a4f6c2258e4d632b813e"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1adafec9fa29a37e4cbfdf259c44336751)`()` <a id="structFRHAPI__RallyHereEvent_1adafec9fa29a37e4cbfdf259c44336751"></a>

Gets the value of ClientIp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1a2278c9e71697c0ef3c9e694b383fb4b7)`() const` <a id="structFRHAPI__RallyHereEvent_1a2278c9e71697c0ef3c9e694b383fb4b7"></a>

Gets the value of ClientIp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1aea8f1a30f2118425aca1788a08fa19e8)`(const FString & DefaultValue) const` <a id="structFRHAPI__RallyHereEvent_1aea8f1a30f2118425aca1788a08fa19e8"></a>

Gets the value of ClientIp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientIp`](#structFRHAPI__RallyHereEvent_1afb62f6b4f3fdd9770c019b36dc533b28)`(FString & OutValue) const` <a id="structFRHAPI__RallyHereEvent_1afb62f6b4f3fdd9770c019b36dc533b28"></a>

Fills OutValue with the value of ClientIp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1a25c0460ce4d0f1a374905d4919755f89)`()` <a id="structFRHAPI__RallyHereEvent_1a25c0460ce4d0f1a374905d4919755f89"></a>

Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetClientIpOrNull`](#structFRHAPI__RallyHereEvent_1a86f45b83416147727d71558bcb29e3d3)`() const` <a id="structFRHAPI__RallyHereEvent_1a86f45b83416147727d71558bcb29e3d3"></a>

Returns a pointer to ClientIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1abee2000b7000a2b4738133fd4873a2f7)`(const FString & NewValue)` <a id="structFRHAPI__RallyHereEvent_1abee2000b7000a2b4738133fd4873a2f7"></a>

Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientIp`](#structFRHAPI__RallyHereEvent_1aaa03397269ba9336094554ae39b5b65f)`(FString && NewValue)` <a id="structFRHAPI__RallyHereEvent_1aaa03397269ba9336094554ae39b5b65f"></a>

Sets the value of ClientIp_Optional and also sets ClientIp_IsSet to true using move semantics.

#### `public inline void `[`ClearClientIp`](#structFRHAPI__RallyHereEvent_1ae43d7fc176c0915100c8b39747953477)`()` <a id="structFRHAPI__RallyHereEvent_1ae43d7fc176c0915100c8b39747953477"></a>

Clears the value of ClientIp_Optional and sets ClientIp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientIpToNull`](#structFRHAPI__RallyHereEvent_1aa602321e7a451d77ce55aacfcdc59199)`()` <a id="structFRHAPI__RallyHereEvent_1aa602321e7a451d77ce55aacfcdc59199"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientIpNull`](#structFRHAPI__RallyHereEvent_1af3a6cdae5d2863a8c083594cfe046472)`() const` <a id="structFRHAPI__RallyHereEvent_1af3a6cdae5d2863a8c083594cfe046472"></a>

Checks whether ClientIp_Optional is set to null.

