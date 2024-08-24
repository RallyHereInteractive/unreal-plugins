# group `RHAPI_PortalUseRuleset` <a id="group__RHAPI__PortalUseRuleset"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUseRuleset`](#structFRHAPI__PortalUseRuleset) | A collection of Portal Use Rules.

---
title: FRHAPI_PortalUseRuleset
---

```
struct FRHAPI_PortalUseRuleset
  : public FRHAPI_Model
```

A collection of Portal Use Rules.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PortalUseRuleset_1a6adcf1faeab36224d7427c77ee7fb53b) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PortalUseRuleset_1a9e434691c833dbf6415957cb7dc083a2) | true if CustomData_Optional has been set to a value
`public TMap< FString, TArray< ERHAPI_Portal > > `[`Rules_Optional`](#structFRHAPI__PortalUseRuleset_1a7200c3625c738dc8c7ab7ebc473332b6) | 
`public bool `[`Rules_IsSet`](#structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf) | true if Rules_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRuleset_1a14092b1a9ddf68c75f3aadb4e0de9189)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1af5756bcd0371cf011411c6f2c2149038)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a01a9fcf5353c6eef969894dd35f9c254)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a40009a1a966a268ad234894f655668e2)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a315ccfdf0a394c8af1c33484efe7a69e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a1eaacc7180f1b8c2e0783e4498ee1bb3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a6916d73cee5a641a1e30b2b0543dcf59)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1ab4b2bce5c1fe1b1c537f72bb41b5b35d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a210678dd881919762954d9b0be2f5f1d)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRuleset_1a548949fe5e3d59a4f1858a9c69037540)`() const` | Checks whether CustomData_Optional has been set.
`public inline TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1aa8fc4d305977b2209386c2d9a48e86c7)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a4189d99701bd4c0f4f94d865b82cfd2c)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a1dd3daa01cc3500b640e5bbb8644cee3)`(const TMap< FString, TArray< ERHAPI_Portal >> & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a48db5c7623fd3023afd9d722c47d495f)`(TMap< FString, TArray< ERHAPI_Portal >> & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a1d7ccc8cefda25573a8cfdaa2555bdfb)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1acaa6cc07f5fdeb506840fcf1a6511c3a)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a7957a27a9b60ac71f73fed68ffe3e1aa)`(const TMap< FString, TArray< ERHAPI_Portal >> & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1afaf361147c0125ed507afd78094ef3e5)`(TMap< FString, TArray< ERHAPI_Portal >> && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline bool `[`IsRulesSet`](#structFRHAPI__PortalUseRuleset_1a0cde3f9e00b70f51f27f98ab4a6fb988)`() const` | Checks whether Rules_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a874afc2e8f5ad043183ec105c51cea9d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a7c8d9d60473d74648e07095acbb1ddb8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PortalUseRuleset_1a8ca097b1b6d1b73d0034db97e7310ac6)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PortalUseRuleset_1a6adcf1faeab36224d7427c77ee7fb53b) <a id="structFRHAPI__PortalUseRuleset_1a6adcf1faeab36224d7427c77ee7fb53b"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PortalUseRuleset_1a9e434691c833dbf6415957cb7dc083a2) <a id="structFRHAPI__PortalUseRuleset_1a9e434691c833dbf6415957cb7dc083a2"></a>

true if CustomData_Optional has been set to a value

#### `public TMap< FString, TArray< ERHAPI_Portal > > `[`Rules_Optional`](#structFRHAPI__PortalUseRuleset_1a7200c3625c738dc8c7ab7ebc473332b6) <a id="structFRHAPI__PortalUseRuleset_1a7200c3625c738dc8c7ab7ebc473332b6"></a>

#### `public bool `[`Rules_IsSet`](#structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf) <a id="structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf"></a>

true if Rules_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91) <a id="structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6) <a id="structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRuleset_1a14092b1a9ddf68c75f3aadb4e0de9189)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUseRuleset_1a14092b1a9ddf68c75f3aadb4e0de9189"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1af5756bcd0371cf011411c6f2c2149038)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalUseRuleset_1af5756bcd0371cf011411c6f2c2149038"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a01a9fcf5353c6eef969894dd35f9c254)`()` <a id="structFRHAPI__PortalUseRuleset_1a01a9fcf5353c6eef969894dd35f9c254"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a40009a1a966a268ad234894f655668e2)`() const` <a id="structFRHAPI__PortalUseRuleset_1a40009a1a966a268ad234894f655668e2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a315ccfdf0a394c8af1c33484efe7a69e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a315ccfdf0a394c8af1c33484efe7a69e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a1eaacc7180f1b8c2e0783e4498ee1bb3)`()` <a id="structFRHAPI__PortalUseRuleset_1a1eaacc7180f1b8c2e0783e4498ee1bb3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a6916d73cee5a641a1e30b2b0543dcf59)`() const` <a id="structFRHAPI__PortalUseRuleset_1a6916d73cee5a641a1e30b2b0543dcf59"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1ab4b2bce5c1fe1b1c537f72bb41b5b35d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1ab4b2bce5c1fe1b1c537f72bb41b5b35d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a210678dd881919762954d9b0be2f5f1d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a210678dd881919762954d9b0be2f5f1d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)`()` <a id="structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRuleset_1a548949fe5e3d59a4f1858a9c69037540)`() const` <a id="structFRHAPI__PortalUseRuleset_1a548949fe5e3d59a4f1858a9c69037540"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1aa8fc4d305977b2209386c2d9a48e86c7)`()` <a id="structFRHAPI__PortalUseRuleset_1aa8fc4d305977b2209386c2d9a48e86c7"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a4189d99701bd4c0f4f94d865b82cfd2c)`() const` <a id="structFRHAPI__PortalUseRuleset_1a4189d99701bd4c0f4f94d865b82cfd2c"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a1dd3daa01cc3500b640e5bbb8644cee3)`(const TMap< FString, TArray< ERHAPI_Portal >> & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a1dd3daa01cc3500b640e5bbb8644cee3"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a48db5c7623fd3023afd9d722c47d495f)`(TMap< FString, TArray< ERHAPI_Portal >> & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1a48db5c7623fd3023afd9d722c47d495f"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a1d7ccc8cefda25573a8cfdaa2555bdfb)`()` <a id="structFRHAPI__PortalUseRuleset_1a1d7ccc8cefda25573a8cfdaa2555bdfb"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1acaa6cc07f5fdeb506840fcf1a6511c3a)`() const` <a id="structFRHAPI__PortalUseRuleset_1acaa6cc07f5fdeb506840fcf1a6511c3a"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a7957a27a9b60ac71f73fed68ffe3e1aa)`(const TMap< FString, TArray< ERHAPI_Portal >> & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a7957a27a9b60ac71f73fed68ffe3e1aa"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1afaf361147c0125ed507afd78094ef3e5)`(TMap< FString, TArray< ERHAPI_Portal >> && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1afaf361147c0125ed507afd78094ef3e5"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` <a id="structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline bool `[`IsRulesSet`](#structFRHAPI__PortalUseRuleset_1a0cde3f9e00b70f51f27f98ab4a6fb988)`() const` <a id="structFRHAPI__PortalUseRuleset_1a0cde3f9e00b70f51f27f98ab4a6fb988"></a>

Checks whether Rules_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca)`()` <a id="structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50)`() const` <a id="structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b)`()` <a id="structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf)`() const` <a id="structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a874afc2e8f5ad043183ec105c51cea9d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a874afc2e8f5ad043183ec105c51cea9d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a7c8d9d60473d74648e07095acbb1ddb8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a7c8d9d60473d74648e07095acbb1ddb8"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` <a id="structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PortalUseRuleset_1a8ca097b1b6d1b73d0034db97e7310ac6)`() const` <a id="structFRHAPI__PortalUseRuleset_1a8ca097b1b6d1b73d0034db97e7310ac6"></a>

Checks whether CacheInfo_Optional has been set.

