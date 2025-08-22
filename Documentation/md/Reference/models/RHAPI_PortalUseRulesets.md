---
title: RHAPI_PortalUseRulesets
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUseRulesets`](#structFRHAPI__PortalUseRulesets) | A collection of Portal Use Rulesets. A ruleset determine how item can be used across portals.

## struct `FRHAPI_PortalUseRulesets` <a id="structFRHAPI__PortalUseRulesets"></a>

```
struct FRHAPI_PortalUseRulesets
  : public FRHAPI_Model
```

A collection of Portal Use Rulesets. A ruleset determine how item can be used across portals.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PortalUseRulesets_1a1f7145c8d4fd517a4ee77a4f6df60133) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PortalUseRulesets_1a567286e3bdcf1a54045c854c8b05f441) | true if CustomData_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > `[`Rulesets_Optional`](#structFRHAPI__PortalUseRulesets_1a234f43d1c6098ae830db577a35eb4305) | 
`public bool `[`Rulesets_IsSet`](#structFRHAPI__PortalUseRulesets_1af1dfbf7c2f5dfaaa75cc60303089785d) | true if Rulesets_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PortalUseRulesets_1a33b35b8dba94fb6b57b83917906066df) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PortalUseRulesets_1abaf07d962636ced608504fcfb23756a6) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__PortalUseRulesets_1a488cdf78e20ebf9219ea734c8ad60a44) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRulesets_1afeb6ecbd38a8ef7418b4afc8472c125e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a94d54be947c4bcf0208ced50c60fca5a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a61b2c6c1cb791f60e392ca44cced20fd)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1aea64555b80b192948f6424a5bc6a6b95)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a582db556ef0af4413457fe8f92b94c19)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1acc990cc38b47719557022fe4112bcef7)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1ab90cae9f605a410a572d1169ae8dea39)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a7020b68054361a6a130c8647f1a7fee3)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a857f3979c28e0437319b9aa59b638964)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1aa875bced6cf10ae20762e6825d9dbbd2)`()` | Gets the value of Rulesets_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a25dfd62147e17160e9db9f1ec8ad309d)`() const` | Gets the value of Rulesets_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1aa2978dc7c5e4fdf4610583f09436042d)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & DefaultValue) const` | Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a3390d959e3f1fddabed2a5b8700a15c7)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & OutValue) const` | Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1afa013b7856de989ffebde5ec8ed5dd8b)`()` | Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1acefe8af8f4f6b075fec265901a904e3f)`() const` | Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a99de091dba95c1f6a0e328255a3e29c9)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & NewValue)` | Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.
`public inline FORCEINLINE void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a8d4fff4e8a455fe2a28ac4a8cd5b8e63)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > && NewValue)` | Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics.
`public inline void `[`ClearRulesets`](#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)`()` | Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a90b523a4d12a8022f32fa906b67c7898)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aca974b9f6170fc14c97beddcf8e941e3)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aee95ebdd70dfe81a65ab308c43424b7e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ae48c25890f2ddf5e9a49048d2f2cca58)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1afcff53fedc4d8b08cb8ff8e425e7839f)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a6905318b23ac5fad8733e982c74ce7ae)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a7096ac8216db8a6ca4e44a01e25a48aa)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a5034143ca166c4b1e89c0a0341c1e2f9)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PortalUseRulesets_1ac73a3c3b708902e990304bad6c41d89b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PortalUseRulesets_1a5289ee26a3b1b54e15110b12b3c305c1)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PortalUseRulesets_1a1f7145c8d4fd517a4ee77a4f6df60133) <a id="structFRHAPI__PortalUseRulesets_1a1f7145c8d4fd517a4ee77a4f6df60133"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PortalUseRulesets_1a567286e3bdcf1a54045c854c8b05f441) <a id="structFRHAPI__PortalUseRulesets_1a567286e3bdcf1a54045c854c8b05f441"></a>

true if CustomData_Optional has been set to a value

#### `public TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > `[`Rulesets_Optional`](#structFRHAPI__PortalUseRulesets_1a234f43d1c6098ae830db577a35eb4305) <a id="structFRHAPI__PortalUseRulesets_1a234f43d1c6098ae830db577a35eb4305"></a>

#### `public bool `[`Rulesets_IsSet`](#structFRHAPI__PortalUseRulesets_1af1dfbf7c2f5dfaaa75cc60303089785d) <a id="structFRHAPI__PortalUseRulesets_1af1dfbf7c2f5dfaaa75cc60303089785d"></a>

true if Rulesets_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PortalUseRulesets_1a33b35b8dba94fb6b57b83917906066df) <a id="structFRHAPI__PortalUseRulesets_1a33b35b8dba94fb6b57b83917906066df"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PortalUseRulesets_1abaf07d962636ced608504fcfb23756a6) <a id="structFRHAPI__PortalUseRulesets_1abaf07d962636ced608504fcfb23756a6"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__PortalUseRulesets_1a488cdf78e20ebf9219ea734c8ad60a44) <a id="structFRHAPI__PortalUseRulesets_1a488cdf78e20ebf9219ea734c8ad60a44"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRulesets_1afeb6ecbd38a8ef7418b4afc8472c125e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalUseRulesets_1afeb6ecbd38a8ef7418b4afc8472c125e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a94d54be947c4bcf0208ced50c60fca5a)`()` <a id="structFRHAPI__PortalUseRulesets_1a94d54be947c4bcf0208ced50c60fca5a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a61b2c6c1cb791f60e392ca44cced20fd)`() const` <a id="structFRHAPI__PortalUseRulesets_1a61b2c6c1cb791f60e392ca44cced20fd"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1aea64555b80b192948f6424a5bc6a6b95)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1aea64555b80b192948f6424a5bc6a6b95"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a582db556ef0af4413457fe8f92b94c19)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a582db556ef0af4413457fe8f92b94c19"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1acc990cc38b47719557022fe4112bcef7)`()` <a id="structFRHAPI__PortalUseRulesets_1acc990cc38b47719557022fe4112bcef7"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1ab90cae9f605a410a572d1169ae8dea39)`() const` <a id="structFRHAPI__PortalUseRulesets_1ab90cae9f605a410a572d1169ae8dea39"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a7020b68054361a6a130c8647f1a7fee3)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a7020b68054361a6a130c8647f1a7fee3"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a857f3979c28e0437319b9aa59b638964)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a857f3979c28e0437319b9aa59b638964"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)`()` <a id="structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1aa875bced6cf10ae20762e6825d9dbbd2)`()` <a id="structFRHAPI__PortalUseRulesets_1aa875bced6cf10ae20762e6825d9dbbd2"></a>

Gets the value of Rulesets_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a25dfd62147e17160e9db9f1ec8ad309d)`() const` <a id="structFRHAPI__PortalUseRulesets_1a25dfd62147e17160e9db9f1ec8ad309d"></a>

Gets the value of Rulesets_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1aa2978dc7c5e4fdf4610583f09436042d)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1aa2978dc7c5e4fdf4610583f09436042d"></a>

Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a3390d959e3f1fddabed2a5b8700a15c7)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a3390d959e3f1fddabed2a5b8700a15c7"></a>

Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1afa013b7856de989ffebde5ec8ed5dd8b)`()` <a id="structFRHAPI__PortalUseRulesets_1afa013b7856de989ffebde5ec8ed5dd8b"></a>

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1acefe8af8f4f6b075fec265901a904e3f)`() const` <a id="structFRHAPI__PortalUseRulesets_1acefe8af8f4f6b075fec265901a904e3f"></a>

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a99de091dba95c1f6a0e328255a3e29c9)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a99de091dba95c1f6a0e328255a3e29c9"></a>

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a8d4fff4e8a455fe2a28ac4a8cd5b8e63)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a8d4fff4e8a455fe2a28ac4a8cd5b8e63"></a>

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics.

#### `public inline void `[`ClearRulesets`](#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)`()` <a id="structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281"></a>

Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a90b523a4d12a8022f32fa906b67c7898)`()` <a id="structFRHAPI__PortalUseRulesets_1a90b523a4d12a8022f32fa906b67c7898"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aca974b9f6170fc14c97beddcf8e941e3)`() const` <a id="structFRHAPI__PortalUseRulesets_1aca974b9f6170fc14c97beddcf8e941e3"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aee95ebdd70dfe81a65ab308c43424b7e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1aee95ebdd70dfe81a65ab308c43424b7e"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ae48c25890f2ddf5e9a49048d2f2cca58)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1ae48c25890f2ddf5e9a49048d2f2cca58"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1afcff53fedc4d8b08cb8ff8e425e7839f)`()` <a id="structFRHAPI__PortalUseRulesets_1afcff53fedc4d8b08cb8ff8e425e7839f"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a6905318b23ac5fad8733e982c74ce7ae)`() const` <a id="structFRHAPI__PortalUseRulesets_1a6905318b23ac5fad8733e982c74ce7ae"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a7096ac8216db8a6ca4e44a01e25a48aa)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a7096ac8216db8a6ca4e44a01e25a48aa"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a5034143ca166c4b1e89c0a0341c1e2f9)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a5034143ca166c4b1e89c0a0341c1e2f9"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0)`()` <a id="structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PortalUseRulesets_1ac73a3c3b708902e990304bad6c41d89b)`()` <a id="structFRHAPI__PortalUseRulesets_1ac73a3c3b708902e990304bad6c41d89b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PortalUseRulesets_1a5289ee26a3b1b54e15110b12b3c305c1)`() const` <a id="structFRHAPI__PortalUseRulesets_1a5289ee26a3b1b54e15110b12b3c305c1"></a>

Checks whether CacheInfo_Optional is set to null.

