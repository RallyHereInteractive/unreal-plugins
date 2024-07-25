# group `RHAPI_PortalUseRulesets` <a id="group__RHAPI__PortalUseRulesets"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRulesets_1a3e6f877b7817b4288f5a320459cb3507)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1aa6e772a5cd14c4f8144a1793bba20d5b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1aa4c8f77c3bb4a60b17a8c353565cb1f5)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a13def29ddd8de70967e97c70074c3eca)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a761bc36a7c3e9e3ba3fff16c5ac34eb6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a95fda6a2a69041ccae346c5f99bd4289)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1ac628c960e7468ea9c4aca180650ced87)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a57931bcb9b7cb5c35875974461dab29d)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRulesets_1a59dd5d4353a894008768d3b2480dbf49)`() const` | Checks whether CustomData_Optional has been set.
`public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1ac9bc329a3a69f5bfd5425b54b91899ca)`()` | Gets the value of Rulesets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a47474570c3918ff316b5b8f890b30176)`() const` | Gets the value of Rulesets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a8415e287988645e5847d5a5cd3b9c4f5)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & DefaultValue) const` | Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & OutValue) const` | Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1ac6bdbdd4de02f2d5b2dc07946e6aaef4)`()` | Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1a5c64ced57ad9253ae395e75c5827cfb9)`() const` | Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1af271e4c3a0d0d93795a8548533883621)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & NewValue)` | Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.
`public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a23d0049f1ce78db2512e2b1a6d822b1e)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > && NewValue)` | Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics.
`public inline void `[`ClearRulesets`](#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)`()` | Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.
`public inline bool `[`IsRulesetsSet`](#structFRHAPI__PortalUseRulesets_1a42604938ba9d409e6c0d0f7e07bb4128)`() const` | Checks whether Rulesets_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a3d8649e4c211a2964ffd5c0874cef9b0)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a6aa8af7beb2ac3692df3fbfdf4bead95)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aa7354d6b4e5155281590fa2d412d7317)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1aabf44657d601219b6d75187b737cd0d6)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a4c9c254d38b3969abe02a1196a880610)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad56d1e2a624cf5e32d4a51ca74c85591)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ae46e18e954ce092073570ceeec348298)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PortalUseRulesets_1a60d1528545e09c16192bf626d68a5047)`() const` | Checks whether CacheInfo_Optional has been set.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRulesets_1a3e6f877b7817b4288f5a320459cb3507)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalUseRulesets_1a3e6f877b7817b4288f5a320459cb3507"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1aa6e772a5cd14c4f8144a1793bba20d5b)`()` <a id="structFRHAPI__PortalUseRulesets_1aa6e772a5cd14c4f8144a1793bba20d5b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1aa4c8f77c3bb4a60b17a8c353565cb1f5)`() const` <a id="structFRHAPI__PortalUseRulesets_1aa4c8f77c3bb4a60b17a8c353565cb1f5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a13def29ddd8de70967e97c70074c3eca)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1a13def29ddd8de70967e97c70074c3eca"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a761bc36a7c3e9e3ba3fff16c5ac34eb6)`()` <a id="structFRHAPI__PortalUseRulesets_1a761bc36a7c3e9e3ba3fff16c5ac34eb6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a95fda6a2a69041ccae346c5f99bd4289)`() const` <a id="structFRHAPI__PortalUseRulesets_1a95fda6a2a69041ccae346c5f99bd4289"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1ac628c960e7468ea9c4aca180650ced87)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1ac628c960e7468ea9c4aca180650ced87"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a57931bcb9b7cb5c35875974461dab29d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a57931bcb9b7cb5c35875974461dab29d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)`()` <a id="structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRulesets_1a59dd5d4353a894008768d3b2480dbf49)`() const` <a id="structFRHAPI__PortalUseRulesets_1a59dd5d4353a894008768d3b2480dbf49"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1ac9bc329a3a69f5bfd5425b54b91899ca)`()` <a id="structFRHAPI__PortalUseRulesets_1ac9bc329a3a69f5bfd5425b54b91899ca"></a>

Gets the value of Rulesets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a47474570c3918ff316b5b8f890b30176)`() const` <a id="structFRHAPI__PortalUseRulesets_1a47474570c3918ff316b5b8f890b30176"></a>

Gets the value of Rulesets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a8415e287988645e5847d5a5cd3b9c4f5)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1a8415e287988645e5847d5a5cd3b9c4f5"></a>

Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31"></a>

Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1ac6bdbdd4de02f2d5b2dc07946e6aaef4)`()` <a id="structFRHAPI__PortalUseRulesets_1ac6bdbdd4de02f2d5b2dc07946e6aaef4"></a>

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1a5c64ced57ad9253ae395e75c5827cfb9)`() const` <a id="structFRHAPI__PortalUseRulesets_1a5c64ced57ad9253ae395e75c5827cfb9"></a>

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1af271e4c3a0d0d93795a8548533883621)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1af271e4c3a0d0d93795a8548533883621"></a>

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.

#### `public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a23d0049f1ce78db2512e2b1a6d822b1e)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a23d0049f1ce78db2512e2b1a6d822b1e"></a>

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics.

#### `public inline void `[`ClearRulesets`](#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)`()` <a id="structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281"></a>

Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.

#### `public inline bool `[`IsRulesetsSet`](#structFRHAPI__PortalUseRulesets_1a42604938ba9d409e6c0d0f7e07bb4128)`() const` <a id="structFRHAPI__PortalUseRulesets_1a42604938ba9d409e6c0d0f7e07bb4128"></a>

Checks whether Rulesets_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a3d8649e4c211a2964ffd5c0874cef9b0)`()` <a id="structFRHAPI__PortalUseRulesets_1a3d8649e4c211a2964ffd5c0874cef9b0"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a6aa8af7beb2ac3692df3fbfdf4bead95)`() const` <a id="structFRHAPI__PortalUseRulesets_1a6aa8af7beb2ac3692df3fbfdf4bead95"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aa7354d6b4e5155281590fa2d412d7317)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1aa7354d6b4e5155281590fa2d412d7317"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1aabf44657d601219b6d75187b737cd0d6)`()` <a id="structFRHAPI__PortalUseRulesets_1aabf44657d601219b6d75187b737cd0d6"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a4c9c254d38b3969abe02a1196a880610)`() const` <a id="structFRHAPI__PortalUseRulesets_1a4c9c254d38b3969abe02a1196a880610"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad56d1e2a624cf5e32d4a51ca74c85591)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1ad56d1e2a624cf5e32d4a51ca74c85591"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ae46e18e954ce092073570ceeec348298)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1ae46e18e954ce092073570ceeec348298"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0)`()` <a id="structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PortalUseRulesets_1a60d1528545e09c16192bf626d68a5047)`() const` <a id="structFRHAPI__PortalUseRulesets_1a60d1528545e09c16192bf626d68a5047"></a>

Checks whether CacheInfo_Optional has been set.

