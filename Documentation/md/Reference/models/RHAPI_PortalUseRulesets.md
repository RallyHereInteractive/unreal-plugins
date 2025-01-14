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
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRulesets_1a62d6e1de58449e156003bf07c2138e1f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRulesets_1afeb6ecbd38a8ef7418b4afc8472c125e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a370768c0d74e1d10c1bb79e201b8d7c8)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1ad7dc5af7046a8ed79ec80a227f93100b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a07ac01993da5f8a045a5bc81782bd79e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a7d24b09d68896a2137c203101c0e5828)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a9be0f1c222855deeff552751602b1848)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1ac628c960e7468ea9c4aca180650ced87)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a57931bcb9b7cb5c35875974461dab29d)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRulesets_1a59dd5d4353a894008768d3b2480dbf49)`() const` | Checks whether CustomData_Optional has been set.
`public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1ae06cb03d081aac21b1f767fb09fbd974)`()` | Gets the value of Rulesets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a151af84be161af6873cd30f048348724)`() const` | Gets the value of Rulesets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1ac0d9473e3dbe8ae4cdfbeaa461b73233)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & DefaultValue) const` | Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & OutValue) const` | Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1aec4b29edcc9000bb80793af69684a88f)`()` | Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1a1ae221699c4d7296aa68f5e16a8c32dd)`() const` | Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1af271e4c3a0d0d93795a8548533883621)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & NewValue)` | Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.
`public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a23d0049f1ce78db2512e2b1a6d822b1e)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > && NewValue)` | Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics.
`public inline void `[`ClearRulesets`](#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)`()` | Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.
`public inline bool `[`IsRulesetsSet`](#structFRHAPI__PortalUseRulesets_1a42604938ba9d409e6c0d0f7e07bb4128)`() const` | Checks whether Rulesets_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aa85e9afa2b30c0b8eac22e626f454596)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a88fb5994488d477fabf06e81826eca1d)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a1f12b82aefa835e8c507bc88b660b3cb)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a4eb22cadfb4e8134a60129c6914fd7bc)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a2251e562942bea6e4e414e908a1054d4)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRulesets_1afeb6ecbd38a8ef7418b4afc8472c125e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalUseRulesets_1afeb6ecbd38a8ef7418b4afc8472c125e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a370768c0d74e1d10c1bb79e201b8d7c8)`()` <a id="structFRHAPI__PortalUseRulesets_1a370768c0d74e1d10c1bb79e201b8d7c8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1ad7dc5af7046a8ed79ec80a227f93100b)`() const` <a id="structFRHAPI__PortalUseRulesets_1ad7dc5af7046a8ed79ec80a227f93100b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a07ac01993da5f8a045a5bc81782bd79e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1a07ac01993da5f8a045a5bc81782bd79e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a7d24b09d68896a2137c203101c0e5828)`()` <a id="structFRHAPI__PortalUseRulesets_1a7d24b09d68896a2137c203101c0e5828"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRulesets_1a9be0f1c222855deeff552751602b1848)`() const` <a id="structFRHAPI__PortalUseRulesets_1a9be0f1c222855deeff552751602b1848"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1ac628c960e7468ea9c4aca180650ced87)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1ac628c960e7468ea9c4aca180650ced87"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRulesets_1a57931bcb9b7cb5c35875974461dab29d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a57931bcb9b7cb5c35875974461dab29d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)`()` <a id="structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRulesets_1a59dd5d4353a894008768d3b2480dbf49)`() const` <a id="structFRHAPI__PortalUseRulesets_1a59dd5d4353a894008768d3b2480dbf49"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1ae06cb03d081aac21b1f767fb09fbd974)`()` <a id="structFRHAPI__PortalUseRulesets_1ae06cb03d081aac21b1f767fb09fbd974"></a>

Gets the value of Rulesets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a151af84be161af6873cd30f048348724)`() const` <a id="structFRHAPI__PortalUseRulesets_1a151af84be161af6873cd30f048348724"></a>

Gets the value of Rulesets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1ac0d9473e3dbe8ae4cdfbeaa461b73233)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1ac0d9473e3dbe8ae4cdfbeaa461b73233"></a>

Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRulesets`](#structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31"></a>

Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1aec4b29edcc9000bb80793af69684a88f)`()` <a id="structFRHAPI__PortalUseRulesets_1aec4b29edcc9000bb80793af69684a88f"></a>

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > * `[`GetRulesetsOrNull`](#structFRHAPI__PortalUseRulesets_1a1ae221699c4d7296aa68f5e16a8c32dd)`() const` <a id="structFRHAPI__PortalUseRulesets_1a1ae221699c4d7296aa68f5e16a8c32dd"></a>

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1af271e4c3a0d0d93795a8548533883621)`(const TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1af271e4c3a0d0d93795a8548533883621"></a>

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.

#### `public inline void `[`SetRulesets`](#structFRHAPI__PortalUseRulesets_1a23d0049f1ce78db2512e2b1a6d822b1e)`(TMap< FString, `[`FRHAPI_PortalUseRuleset`](RHAPI_PortalUseRuleset.md#structFRHAPI__PortalUseRuleset)` > && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1a23d0049f1ce78db2512e2b1a6d822b1e"></a>

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics.

#### `public inline void `[`ClearRulesets`](#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)`()` <a id="structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281"></a>

Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.

#### `public inline bool `[`IsRulesetsSet`](#structFRHAPI__PortalUseRulesets_1a42604938ba9d409e6c0d0f7e07bb4128)`() const` <a id="structFRHAPI__PortalUseRulesets_1a42604938ba9d409e6c0d0f7e07bb4128"></a>

Checks whether Rulesets_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1aa85e9afa2b30c0b8eac22e626f454596)`()` <a id="structFRHAPI__PortalUseRulesets_1aa85e9afa2b30c0b8eac22e626f454596"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a88fb5994488d477fabf06e81826eca1d)`() const` <a id="structFRHAPI__PortalUseRulesets_1a88fb5994488d477fabf06e81826eca1d"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a1f12b82aefa835e8c507bc88b660b3cb)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRulesets_1a1f12b82aefa835e8c507bc88b660b3cb"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a4eb22cadfb4e8134a60129c6914fd7bc)`()` <a id="structFRHAPI__PortalUseRulesets_1a4eb22cadfb4e8134a60129c6914fd7bc"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRulesets_1a2251e562942bea6e4e414e908a1054d4)`() const` <a id="structFRHAPI__PortalUseRulesets_1a2251e562942bea6e4e414e908a1054d4"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad56d1e2a624cf5e32d4a51ca74c85591)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PortalUseRulesets_1ad56d1e2a624cf5e32d4a51ca74c85591"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRulesets_1ae46e18e954ce092073570ceeec348298)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PortalUseRulesets_1ae46e18e954ce092073570ceeec348298"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0)`()` <a id="structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PortalUseRulesets_1a60d1528545e09c16192bf626d68a5047)`() const` <a id="structFRHAPI__PortalUseRulesets_1a60d1528545e09c16192bf626d68a5047"></a>

Checks whether CacheInfo_Optional has been set.

