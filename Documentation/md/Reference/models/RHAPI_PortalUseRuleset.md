---
title: RHAPI_PortalUseRuleset
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUseRuleset`](#structFRHAPI__PortalUseRuleset) | A collection of Portal Use Rules.

## struct `FRHAPI_PortalUseRuleset` <a id="structFRHAPI__PortalUseRuleset"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1ae3363a895d0eb0b36c43900b9217a415)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a6f732b771b11ded038071af552d1f443)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1aa059f67aeebc294caf046ffc56653de8)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a2efe4769b64f39e6186a0659dd993503)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1ac8c6d3eb3233a8a7cb5510fe403bdc93)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a717cb7acccf1d333b2dc27effeb9bbf8)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1ab4b2bce5c1fe1b1c537f72bb41b5b35d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a210678dd881919762954d9b0be2f5f1d)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRuleset_1a548949fe5e3d59a4f1858a9c69037540)`() const` | Checks whether CustomData_Optional has been set.
`public inline TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1af747922414f7834620141e3097a0beb5)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a19333554844ab8fb6915592a80f8ae73)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a35ae0010f51c3e04391ecfd1abc0ec15)`(const TMap< FString, TArray< ERHAPI_Portal > > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a0154cce1d19fa441909c5847d7a56f63)`(TMap< FString, TArray< ERHAPI_Portal > > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1ad6de82f112d6921d2c657bf72692a4d2)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a2b7fc82c797110faf896c73cddeef956)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a4f6c5350becea38e581f5974d62ef930)`(const TMap< FString, TArray< ERHAPI_Portal > > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a1572fe55fd864e264f319a81c8065f92)`(TMap< FString, TArray< ERHAPI_Portal > > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline bool `[`IsRulesSet`](#structFRHAPI__PortalUseRuleset_1a0cde3f9e00b70f51f27f98ab4a6fb988)`() const` | Checks whether Rules_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a1468593ce8833ace92119558660cce11)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a54776d3810e9afbd2ac36c9c8db60509)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a2e604559afcd329b836ec9f7beed3cfc)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1aa3a24d5b5eac8a0630a3cf8c6e5c52d2)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a80035b574d38e110ae1c198b3e4fd294)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1ae3363a895d0eb0b36c43900b9217a415)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalUseRuleset_1ae3363a895d0eb0b36c43900b9217a415"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a6f732b771b11ded038071af552d1f443)`()` <a id="structFRHAPI__PortalUseRuleset_1a6f732b771b11ded038071af552d1f443"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1aa059f67aeebc294caf046ffc56653de8)`() const` <a id="structFRHAPI__PortalUseRuleset_1aa059f67aeebc294caf046ffc56653de8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a2efe4769b64f39e6186a0659dd993503)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a2efe4769b64f39e6186a0659dd993503"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1ac8c6d3eb3233a8a7cb5510fe403bdc93)`()` <a id="structFRHAPI__PortalUseRuleset_1ac8c6d3eb3233a8a7cb5510fe403bdc93"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a717cb7acccf1d333b2dc27effeb9bbf8)`() const` <a id="structFRHAPI__PortalUseRuleset_1a717cb7acccf1d333b2dc27effeb9bbf8"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1ab4b2bce5c1fe1b1c537f72bb41b5b35d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1ab4b2bce5c1fe1b1c537f72bb41b5b35d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a210678dd881919762954d9b0be2f5f1d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a210678dd881919762954d9b0be2f5f1d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)`()` <a id="structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PortalUseRuleset_1a548949fe5e3d59a4f1858a9c69037540)`() const` <a id="structFRHAPI__PortalUseRuleset_1a548949fe5e3d59a4f1858a9c69037540"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1af747922414f7834620141e3097a0beb5)`()` <a id="structFRHAPI__PortalUseRuleset_1af747922414f7834620141e3097a0beb5"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a19333554844ab8fb6915592a80f8ae73)`() const` <a id="structFRHAPI__PortalUseRuleset_1a19333554844ab8fb6915592a80f8ae73"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a35ae0010f51c3e04391ecfd1abc0ec15)`(const TMap< FString, TArray< ERHAPI_Portal > > & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a35ae0010f51c3e04391ecfd1abc0ec15"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a0154cce1d19fa441909c5847d7a56f63)`(TMap< FString, TArray< ERHAPI_Portal > > & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1a0154cce1d19fa441909c5847d7a56f63"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1ad6de82f112d6921d2c657bf72692a4d2)`()` <a id="structFRHAPI__PortalUseRuleset_1ad6de82f112d6921d2c657bf72692a4d2"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a2b7fc82c797110faf896c73cddeef956)`() const` <a id="structFRHAPI__PortalUseRuleset_1a2b7fc82c797110faf896c73cddeef956"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a4f6c5350becea38e581f5974d62ef930)`(const TMap< FString, TArray< ERHAPI_Portal > > & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a4f6c5350becea38e581f5974d62ef930"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a1572fe55fd864e264f319a81c8065f92)`(TMap< FString, TArray< ERHAPI_Portal > > && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a1572fe55fd864e264f319a81c8065f92"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` <a id="structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline bool `[`IsRulesSet`](#structFRHAPI__PortalUseRuleset_1a0cde3f9e00b70f51f27f98ab4a6fb988)`() const` <a id="structFRHAPI__PortalUseRuleset_1a0cde3f9e00b70f51f27f98ab4a6fb988"></a>

Checks whether Rules_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a1468593ce8833ace92119558660cce11)`()` <a id="structFRHAPI__PortalUseRuleset_1a1468593ce8833ace92119558660cce11"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a54776d3810e9afbd2ac36c9c8db60509)`() const` <a id="structFRHAPI__PortalUseRuleset_1a54776d3810e9afbd2ac36c9c8db60509"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a2e604559afcd329b836ec9f7beed3cfc)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a2e604559afcd329b836ec9f7beed3cfc"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1aa3a24d5b5eac8a0630a3cf8c6e5c52d2)`()` <a id="structFRHAPI__PortalUseRuleset_1aa3a24d5b5eac8a0630a3cf8c6e5c52d2"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a80035b574d38e110ae1c198b3e4fd294)`() const` <a id="structFRHAPI__PortalUseRuleset_1a80035b574d38e110ae1c198b3e4fd294"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a874afc2e8f5ad043183ec105c51cea9d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a874afc2e8f5ad043183ec105c51cea9d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a7c8d9d60473d74648e07095acbb1ddb8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a7c8d9d60473d74648e07095acbb1ddb8"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` <a id="structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PortalUseRuleset_1a8ca097b1b6d1b73d0034db97e7310ac6)`() const` <a id="structFRHAPI__PortalUseRuleset_1a8ca097b1b6d1b73d0034db97e7310ac6"></a>

Checks whether CacheInfo_Optional has been set.

