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
`public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a4a10dd00d92186318ccfb7b7d9254322)`()` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a9248b731172ee16a8bb10417c5bbadad)`() const` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1aead2359aab62e584a62af3961c561f0c)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` | Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoot`](#structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` | Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a365b2bc94bcad8f7b69b9c3e710c50c7)`()` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a654d1e931bdf149c9ea4aeeb842f3361)`() const` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLoot`](#structFRHAPI__Loots_1a347cd569d3c27eabc079273336ed49ea)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true.
`public inline void `[`SetLoot`](#structFRHAPI__Loots_1a2dccb22032cf05f244071ba8e5971772)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > && NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics.
`public inline void `[`ClearLoot`](#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)`()` | Clears the value of Loot_Optional and sets Loot_IsSet to false.
`public inline bool `[`IsLootSet`](#structFRHAPI__Loots_1ab8f7912b1db91ccaa46c1b32514da9a8)`() const` | Checks whether Loot_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a8f486caae88188283317fc444f9d1d96)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1ac43178fe80f5afd35f9049237a9050e6)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1ab4231dbdec9732375a32eab0f7e3609e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1acc35f566c7428e470fe44ee8ff20908c)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1a53a823f4fc344434013c3589f5aeb092)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Loots_1aaebf02a37645c8ecb54498fe03709903)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Loots_1ab8d2bf1fce096833f34b121301166b48)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Loots_1ad839bbaf202df749e589a61bcbe1f895)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__Loots_1abe8040ea760dee6131343a35634fd1ee)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__Loots_1a1ccb173745e1cc99209c598b05eea796)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a4a10dd00d92186318ccfb7b7d9254322)`()` <a id="structFRHAPI__Loots_1a4a10dd00d92186318ccfb7b7d9254322"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a9248b731172ee16a8bb10417c5bbadad)`() const` <a id="structFRHAPI__Loots_1a9248b731172ee16a8bb10417c5bbadad"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1aead2359aab62e584a62af3961c561f0c)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` <a id="structFRHAPI__Loots_1aead2359aab62e584a62af3961c561f0c"></a>

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLoot`](#structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` <a id="structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136"></a>

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a365b2bc94bcad8f7b69b9c3e710c50c7)`()` <a id="structFRHAPI__Loots_1a365b2bc94bcad8f7b69b9c3e710c50c7"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a654d1e931bdf149c9ea4aeeb842f3361)`() const` <a id="structFRHAPI__Loots_1a654d1e931bdf149c9ea4aeeb842f3361"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLoot`](#structFRHAPI__Loots_1a347cd569d3c27eabc079273336ed49ea)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & NewValue)` <a id="structFRHAPI__Loots_1a347cd569d3c27eabc079273336ed49ea"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true.

#### `public inline void `[`SetLoot`](#structFRHAPI__Loots_1a2dccb22032cf05f244071ba8e5971772)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > && NewValue)` <a id="structFRHAPI__Loots_1a2dccb22032cf05f244071ba8e5971772"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics.

#### `public inline void `[`ClearLoot`](#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)`()` <a id="structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163"></a>

Clears the value of Loot_Optional and sets Loot_IsSet to false.

#### `public inline bool `[`IsLootSet`](#structFRHAPI__Loots_1ab8f7912b1db91ccaa46c1b32514da9a8)`() const` <a id="structFRHAPI__Loots_1ab8f7912b1db91ccaa46c1b32514da9a8"></a>

Checks whether Loot_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a8f486caae88188283317fc444f9d1d96)`()` <a id="structFRHAPI__Loots_1a8f486caae88188283317fc444f9d1d96"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1ac43178fe80f5afd35f9049237a9050e6)`() const` <a id="structFRHAPI__Loots_1ac43178fe80f5afd35f9049237a9050e6"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1ab4231dbdec9732375a32eab0f7e3609e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Loots_1ab4231dbdec9732375a32eab0f7e3609e"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1acc35f566c7428e470fe44ee8ff20908c)`()` <a id="structFRHAPI__Loots_1acc35f566c7428e470fe44ee8ff20908c"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1a53a823f4fc344434013c3589f5aeb092)`() const` <a id="structFRHAPI__Loots_1a53a823f4fc344434013c3589f5aeb092"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Loots_1aaebf02a37645c8ecb54498fe03709903)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Loots_1aaebf02a37645c8ecb54498fe03709903"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Loots_1ab8d2bf1fce096833f34b121301166b48)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Loots_1ab8d2bf1fce096833f34b121301166b48"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)`()` <a id="structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Loots_1ad839bbaf202df749e589a61bcbe1f895)`() const` <a id="structFRHAPI__Loots_1ad839bbaf202df749e589a61bcbe1f895"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__Loots_1abe8040ea760dee6131343a35634fd1ee)`()` <a id="structFRHAPI__Loots_1abe8040ea760dee6131343a35634fd1ee"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__Loots_1a1ccb173745e1cc99209c598b05eea796)`() const` <a id="structFRHAPI__Loots_1a1ccb173745e1cc99209c598b05eea796"></a>

Checks whether CacheInfo_Optional is set to null.

