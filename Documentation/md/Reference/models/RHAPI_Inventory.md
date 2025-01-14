---
title: RHAPI_Inventory
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Inventory`](#structFRHAPI__Inventory) | Inventory for a Player organized by Item ID.

## struct `FRHAPI_Inventory` <a id="structFRHAPI__Inventory"></a>

```
struct FRHAPI_Inventory
  : public FRHAPI_Model
```

Inventory for a Player organized by Item ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > `[`Items_Optional`](#structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093) | Item Inventories for this Inventory.
`public bool `[`Items_IsSet`](#structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3) | true if Items_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23) | Cache Info for this Inventory.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Inventory_1a2a7628fdc77358d0c8396db7360e4963)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Inventory_1ab3f84aaaed98c18ed92984bc2cae46eb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1aad844d47a4993ef05ea5db76106806d5)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1ada3e3b11550faf8ba75855ea6fca055d)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1aab045d4002b0852f5859ccfbac9993e3)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItems`](#structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a565de6b121477f12d01b27fbc556cab9)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a873bfd1add2ac89cead576d228c163e1)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItems`](#structFRHAPI__Inventory_1a7e5863746c76ca8a5f78ab493e8dd301)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline void `[`SetItems`](#structFRHAPI__Inventory_1a95791402e476e2acbadd8411ff482b5a)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > && NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.
`public inline void `[`ClearItems`](#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline bool `[`IsItemsSet`](#structFRHAPI__Inventory_1a68938304f96bb5bc033a2a58c4e85328)`() const` | Checks whether Items_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1abf29059159341eca06c0cd69dfde0623)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1ab673902f106e435af29c06695c88711c)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a2e9cb7185352ce1b60f35ed6f5357bf5)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a01a67136b2952277664adf697f48eedc)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a00bb67dfa13d249cf4e9b5d55a24d353)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a06e6f371deaabb83e239d53f9b8a8719)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a9b33c0616493d9737f508fd7ef861d8f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Inventory_1a417324bfed85f713c529b465d2c60d61)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > `[`Items_Optional`](#structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093) <a id="structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093"></a>

Item Inventories for this Inventory.

#### `public bool `[`Items_IsSet`](#structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3) <a id="structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3"></a>

true if Items_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23) <a id="structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23"></a>

Cache Info for this Inventory.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589) <a id="structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Inventory_1a2a7628fdc77358d0c8396db7360e4963)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Inventory_1a2a7628fdc77358d0c8396db7360e4963"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Inventory_1ab3f84aaaed98c18ed92984bc2cae46eb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Inventory_1ab3f84aaaed98c18ed92984bc2cae46eb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1aad844d47a4993ef05ea5db76106806d5)`()` <a id="structFRHAPI__Inventory_1aad844d47a4993ef05ea5db76106806d5"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1ada3e3b11550faf8ba75855ea6fca055d)`() const` <a id="structFRHAPI__Inventory_1ada3e3b11550faf8ba75855ea6fca055d"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1aab045d4002b0852f5859ccfbac9993e3)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & DefaultValue) const` <a id="structFRHAPI__Inventory_1aab045d4002b0852f5859ccfbac9993e3"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItems`](#structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & OutValue) const` <a id="structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a565de6b121477f12d01b27fbc556cab9)`()` <a id="structFRHAPI__Inventory_1a565de6b121477f12d01b27fbc556cab9"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a873bfd1add2ac89cead576d228c163e1)`() const` <a id="structFRHAPI__Inventory_1a873bfd1add2ac89cead576d228c163e1"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItems`](#structFRHAPI__Inventory_1a7e5863746c76ca8a5f78ab493e8dd301)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & NewValue)` <a id="structFRHAPI__Inventory_1a7e5863746c76ca8a5f78ab493e8dd301"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

#### `public inline void `[`SetItems`](#structFRHAPI__Inventory_1a95791402e476e2acbadd8411ff482b5a)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > && NewValue)` <a id="structFRHAPI__Inventory_1a95791402e476e2acbadd8411ff482b5a"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.

#### `public inline void `[`ClearItems`](#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)`()` <a id="structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

#### `public inline bool `[`IsItemsSet`](#structFRHAPI__Inventory_1a68938304f96bb5bc033a2a58c4e85328)`() const` <a id="structFRHAPI__Inventory_1a68938304f96bb5bc033a2a58c4e85328"></a>

Checks whether Items_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1abf29059159341eca06c0cd69dfde0623)`()` <a id="structFRHAPI__Inventory_1abf29059159341eca06c0cd69dfde0623"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1ab673902f106e435af29c06695c88711c)`() const` <a id="structFRHAPI__Inventory_1ab673902f106e435af29c06695c88711c"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a2e9cb7185352ce1b60f35ed6f5357bf5)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Inventory_1a2e9cb7185352ce1b60f35ed6f5357bf5"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a01a67136b2952277664adf697f48eedc)`()` <a id="structFRHAPI__Inventory_1a01a67136b2952277664adf697f48eedc"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a00bb67dfa13d249cf4e9b5d55a24d353)`() const` <a id="structFRHAPI__Inventory_1a00bb67dfa13d249cf4e9b5d55a24d353"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a06e6f371deaabb83e239d53f9b8a8719)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Inventory_1a06e6f371deaabb83e239d53f9b8a8719"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a9b33c0616493d9737f508fd7ef861d8f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Inventory_1a9b33c0616493d9737f508fd7ef861d8f"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)`()` <a id="structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Inventory_1a417324bfed85f713c529b465d2c60d61)`() const` <a id="structFRHAPI__Inventory_1a417324bfed85f713c529b465d2c60d61"></a>

Checks whether CacheInfo_Optional has been set.

