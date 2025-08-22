---
title: RHAPI_Loots
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Loots`](#structFRHAPI__Loots) | A collection of Loot by Loot ID.

## struct `FRHAPI_Loots` <a id="structFRHAPI__Loots"></a>

```
struct FRHAPI_Loots
  : public FRHAPI_Model
```

A collection of Loot by Loot ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1) | 
`public bool `[`Loot_IsSet`](#structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1) | true if Loot_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Loots_1a07727ba89c62503567d165bc8f528983) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Loots_1a9ac2821309e9fcc06b800d1aa0009584)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Loots_1aceb6fd14d810831adae96bd7364fc5f6)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a4544402b44dbce837c096aac906118a0)`()` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a4676f5b93390cd2dcf3f4c00bb4dafa3)`() const` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1aff40b0a0372fc3a5e22d9de897374ae9)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` | Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLoot`](#structFRHAPI__Loots_1ad0da0aa176315a009c020bee50504418)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` | Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a58d58ad79cfb4f596580d6e03a5a674f)`()` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a49304068c18c58502a50d53c21690035)`() const` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Loots_1ab45e5e604fcfd2d8e774414b04912f09)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true.
`public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Loots_1abdae89cbe770f8a772902fa05573d76d)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > && NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics.
`public inline void `[`ClearLoot`](#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)`()` | Clears the value of Loot_Optional and sets Loot_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a2677a254f04dcb4f448696a401d70e60)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a75bbe6c70e90776e16acae06b9ff339b)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1ac9b974c695b9aecb7b3decc29c4714de)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Loots_1a9c728a6bc8419d270f9f15df23fadcad)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1a90a0ccb97945426f21f6167c4cd1e9d4)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1abe9ccfd821529ca2ce7e042211075c0e)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loots_1ab7393817fa57f9849ab2f45dd18dc60f)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loots_1af21bc8d272fff600ed362e1a8ea73f04)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Loots_1a39e3801292e42b594fd6c05090c0c9e7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Loots_1a7fdbbe33adea10b245ecd367f9896b13)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1) <a id="structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1"></a>

#### `public bool `[`Loot_IsSet`](#structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1) <a id="structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1"></a>

true if Loot_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3) <a id="structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c) <a id="structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Loots_1a07727ba89c62503567d165bc8f528983) <a id="structFRHAPI__Loots_1a07727ba89c62503567d165bc8f528983"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__Loots_1a9ac2821309e9fcc06b800d1aa0009584)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Loots_1a9ac2821309e9fcc06b800d1aa0009584"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Loots_1aceb6fd14d810831adae96bd7364fc5f6)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Loots_1aceb6fd14d810831adae96bd7364fc5f6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a4544402b44dbce837c096aac906118a0)`()` <a id="structFRHAPI__Loots_1a4544402b44dbce837c096aac906118a0"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a4676f5b93390cd2dcf3f4c00bb4dafa3)`() const` <a id="structFRHAPI__Loots_1a4676f5b93390cd2dcf3f4c00bb4dafa3"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1aff40b0a0372fc3a5e22d9de897374ae9)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` <a id="structFRHAPI__Loots_1aff40b0a0372fc3a5e22d9de897374ae9"></a>

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLoot`](#structFRHAPI__Loots_1ad0da0aa176315a009c020bee50504418)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` <a id="structFRHAPI__Loots_1ad0da0aa176315a009c020bee50504418"></a>

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a58d58ad79cfb4f596580d6e03a5a674f)`()` <a id="structFRHAPI__Loots_1a58d58ad79cfb4f596580d6e03a5a674f"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a49304068c18c58502a50d53c21690035)`() const` <a id="structFRHAPI__Loots_1a49304068c18c58502a50d53c21690035"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Loots_1ab45e5e604fcfd2d8e774414b04912f09)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & NewValue)` <a id="structFRHAPI__Loots_1ab45e5e604fcfd2d8e774414b04912f09"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Loots_1abdae89cbe770f8a772902fa05573d76d)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > && NewValue)` <a id="structFRHAPI__Loots_1abdae89cbe770f8a772902fa05573d76d"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics.

#### `public inline void `[`ClearLoot`](#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)`()` <a id="structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163"></a>

Clears the value of Loot_Optional and sets Loot_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a2677a254f04dcb4f448696a401d70e60)`()` <a id="structFRHAPI__Loots_1a2677a254f04dcb4f448696a401d70e60"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a75bbe6c70e90776e16acae06b9ff339b)`() const` <a id="structFRHAPI__Loots_1a75bbe6c70e90776e16acae06b9ff339b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1ac9b974c695b9aecb7b3decc29c4714de)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Loots_1ac9b974c695b9aecb7b3decc29c4714de"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Loots_1a9c728a6bc8419d270f9f15df23fadcad)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Loots_1a9c728a6bc8419d270f9f15df23fadcad"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1a90a0ccb97945426f21f6167c4cd1e9d4)`()` <a id="structFRHAPI__Loots_1a90a0ccb97945426f21f6167c4cd1e9d4"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1abe9ccfd821529ca2ce7e042211075c0e)`() const` <a id="structFRHAPI__Loots_1abe9ccfd821529ca2ce7e042211075c0e"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loots_1ab7393817fa57f9849ab2f45dd18dc60f)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Loots_1ab7393817fa57f9849ab2f45dd18dc60f"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loots_1af21bc8d272fff600ed362e1a8ea73f04)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Loots_1af21bc8d272fff600ed362e1a8ea73f04"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)`()` <a id="structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Loots_1a39e3801292e42b594fd6c05090c0c9e7)`()` <a id="structFRHAPI__Loots_1a39e3801292e42b594fd6c05090c0c9e7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Loots_1a7fdbbe33adea10b245ecd367f9896b13)`() const` <a id="structFRHAPI__Loots_1a7fdbbe33adea10b245ecd367f9896b13"></a>

Checks whether CacheInfo_Optional is set to null.

