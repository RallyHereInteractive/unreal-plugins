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
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__PortalUseRuleset_1a134b1d018a03b763bd14756da2e3547d) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRuleset_1a14092b1a9ddf68c75f3aadb4e0de9189)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1ae3363a895d0eb0b36c43900b9217a415)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a7fe3a6cebc9105070866fb1b90adf022)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a3bc2407be86425dc44f9d80c6a4c7930)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a250b0cbfa48b82807184624180ba4914)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1abc15f4461885f60b40876ff8a7272c2a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a4a9ae7aa5b15acb8b733ea89c167cdbc)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1ab60b248177850b250f8bab5ae8c20f5b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a3b24a4a0212499bd89059bc04903e8d6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a4411ab3981b0d517283892da8fbefbdc)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a5a6dc6fe3f174813e063357b9e942666)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a7d9bfd64ac804f0de2daf0edd7e45906)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1ada1200ee9cc03b0c54985d97262e9f63)`(const TMap< FString, TArray< ERHAPI_Portal > > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1ae5713bb2010a0b99836a315ecd779176)`(TMap< FString, TArray< ERHAPI_Portal > > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a4cff0986872ab481c08f50f415fbb8da)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a7f72a49910a9f36cff5bcb73e15e6c3d)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a3c745886fcdfc324a3e002f506e4400c)`(const TMap< FString, TArray< ERHAPI_Portal > > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1aa1c48621ec6622ebc3412b4fe5a5ef7b)`(TMap< FString, TArray< ERHAPI_Portal > > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a1cea90d78de2e58982a4d0dde9289225)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ad0b916410e984d14e8e0386c0a62635b)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a3d69499892f2fae1d0144398bef6720c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a2d5a86d668ccce6a80646e0a1235d87c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a6b5dea25535228ecc3b508126c25f9d4)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a5bfe0a5f73e528b5b920acf6476f27d7)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a90d4f8ff52152b764a464a0c1c3ba42c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ae620437aa24a06790124a5c3783b31ce)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PortalUseRuleset_1a965d47fc19a815a27890ee338af019e0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PortalUseRuleset_1a0502f3bb55fe188146b0c26489b20ad6)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__PortalUseRuleset_1a134b1d018a03b763bd14756da2e3547d) <a id="structFRHAPI__PortalUseRuleset_1a134b1d018a03b763bd14756da2e3547d"></a>

true if CacheInfo_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a7fe3a6cebc9105070866fb1b90adf022)`()` <a id="structFRHAPI__PortalUseRuleset_1a7fe3a6cebc9105070866fb1b90adf022"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a3bc2407be86425dc44f9d80c6a4c7930)`() const` <a id="structFRHAPI__PortalUseRuleset_1a3bc2407be86425dc44f9d80c6a4c7930"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1a250b0cbfa48b82807184624180ba4914)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a250b0cbfa48b82807184624180ba4914"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PortalUseRuleset_1abc15f4461885f60b40876ff8a7272c2a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1abc15f4461885f60b40876ff8a7272c2a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1a4a9ae7aa5b15acb8b733ea89c167cdbc)`()` <a id="structFRHAPI__PortalUseRuleset_1a4a9ae7aa5b15acb8b733ea89c167cdbc"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PortalUseRuleset_1ab60b248177850b250f8bab5ae8c20f5b)`() const` <a id="structFRHAPI__PortalUseRuleset_1ab60b248177850b250f8bab5ae8c20f5b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a3b24a4a0212499bd89059bc04903e8d6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a3b24a4a0212499bd89059bc04903e8d6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PortalUseRuleset_1a4411ab3981b0d517283892da8fbefbdc)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a4411ab3981b0d517283892da8fbefbdc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)`()` <a id="structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a5a6dc6fe3f174813e063357b9e942666)`()` <a id="structFRHAPI__PortalUseRuleset_1a5a6dc6fe3f174813e063357b9e942666"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a7d9bfd64ac804f0de2daf0edd7e45906)`() const` <a id="structFRHAPI__PortalUseRuleset_1a7d9bfd64ac804f0de2daf0edd7e45906"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_Portal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1ada1200ee9cc03b0c54985d97262e9f63)`(const TMap< FString, TArray< ERHAPI_Portal > > & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1ada1200ee9cc03b0c54985d97262e9f63"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1ae5713bb2010a0b99836a315ecd779176)`(TMap< FString, TArray< ERHAPI_Portal > > & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1ae5713bb2010a0b99836a315ecd779176"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a4cff0986872ab481c08f50f415fbb8da)`()` <a id="structFRHAPI__PortalUseRuleset_1a4cff0986872ab481c08f50f415fbb8da"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_Portal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a7f72a49910a9f36cff5bcb73e15e6c3d)`() const` <a id="structFRHAPI__PortalUseRuleset_1a7f72a49910a9f36cff5bcb73e15e6c3d"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a3c745886fcdfc324a3e002f506e4400c)`(const TMap< FString, TArray< ERHAPI_Portal > > & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a3c745886fcdfc324a3e002f506e4400c"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1aa1c48621ec6622ebc3412b4fe5a5ef7b)`(TMap< FString, TArray< ERHAPI_Portal > > && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1aa1c48621ec6622ebc3412b4fe5a5ef7b"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` <a id="structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a1cea90d78de2e58982a4d0dde9289225)`()` <a id="structFRHAPI__PortalUseRuleset_1a1cea90d78de2e58982a4d0dde9289225"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ad0b916410e984d14e8e0386c0a62635b)`() const` <a id="structFRHAPI__PortalUseRuleset_1ad0b916410e984d14e8e0386c0a62635b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a3d69499892f2fae1d0144398bef6720c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a3d69499892f2fae1d0144398bef6720c"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a2d5a86d668ccce6a80646e0a1235d87c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1a2d5a86d668ccce6a80646e0a1235d87c"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a6b5dea25535228ecc3b508126c25f9d4)`()` <a id="structFRHAPI__PortalUseRuleset_1a6b5dea25535228ecc3b508126c25f9d4"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a5bfe0a5f73e528b5b920acf6476f27d7)`() const` <a id="structFRHAPI__PortalUseRuleset_1a5bfe0a5f73e528b5b920acf6476f27d7"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a90d4f8ff52152b764a464a0c1c3ba42c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a90d4f8ff52152b764a464a0c1c3ba42c"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ae620437aa24a06790124a5c3783b31ce)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PortalUseRuleset_1ae620437aa24a06790124a5c3783b31ce"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` <a id="structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PortalUseRuleset_1a965d47fc19a815a27890ee338af019e0)`()` <a id="structFRHAPI__PortalUseRuleset_1a965d47fc19a815a27890ee338af019e0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PortalUseRuleset_1a0502f3bb55fe188146b0c26489b20ad6)`() const` <a id="structFRHAPI__PortalUseRuleset_1a0502f3bb55fe188146b0c26489b20ad6"></a>

Checks whether CacheInfo_Optional is set to null.

