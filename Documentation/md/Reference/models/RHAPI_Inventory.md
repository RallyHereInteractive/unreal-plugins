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
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Inventory_1a5f5d9e49638c343694d615e641774e29) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Inventory_1a2a7628fdc77358d0c8396db7360e4963)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Inventory_1ab3f84aaaed98c18ed92984bc2cae46eb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a2dfece86e693893338fb67c4f0819a3f)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a4a1b6ef907d457ee4c64142f9c083c7a)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a7635ca760f9ad22d6278d3d5a01d953a)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItems`](#structFRHAPI__Inventory_1adc086c16158b920667b0360d1de9ba00)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a5ed4cf94bccbb8d994e83c70ee5add7a)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1aebc12e6429d2fa947fb77235b8a44ac0)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Inventory_1ae0953fdf7e1c170790b8de9c19419459)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Inventory_1ab42abe5d0158d349d4bae4be9addc712)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > && NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.
`public inline void `[`ClearItems`](#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a17632de599512f3608273a1f956b9df4)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a10cd0bfe4f1ff5291db666d73cb2f208)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a792cac6c9300479861e21c5f11cb9e61)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Inventory_1a0fa19eb28581a3e6a2c8224a35c5867b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1af51e5e1afe5f39c6250e1328614b9a2d)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a11cd2c9a57c7436df6c6e9098bf19aba)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a05ce594ba332c5daab6c11b3f776afe8)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a11d275b8e4c87f620e78769e3d51615c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Inventory_1af0b46dbf17f1a84237c56b34123dba3a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Inventory_1a8250d674c5cfa2c18255865c8d8c047b)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > `[`Items_Optional`](#structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093) <a id="structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093"></a>

Item Inventories for this Inventory.

#### `public bool `[`Items_IsSet`](#structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3) <a id="structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3"></a>

true if Items_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23) <a id="structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589) <a id="structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Inventory_1a5f5d9e49638c343694d615e641774e29) <a id="structFRHAPI__Inventory_1a5f5d9e49638c343694d615e641774e29"></a>

true if CacheInfo_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a2dfece86e693893338fb67c4f0819a3f)`()` <a id="structFRHAPI__Inventory_1a2dfece86e693893338fb67c4f0819a3f"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a4a1b6ef907d457ee4c64142f9c083c7a)`() const` <a id="structFRHAPI__Inventory_1a4a1b6ef907d457ee4c64142f9c083c7a"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a7635ca760f9ad22d6278d3d5a01d953a)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & DefaultValue) const` <a id="structFRHAPI__Inventory_1a7635ca760f9ad22d6278d3d5a01d953a"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItems`](#structFRHAPI__Inventory_1adc086c16158b920667b0360d1de9ba00)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & OutValue) const` <a id="structFRHAPI__Inventory_1adc086c16158b920667b0360d1de9ba00"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a5ed4cf94bccbb8d994e83c70ee5add7a)`()` <a id="structFRHAPI__Inventory_1a5ed4cf94bccbb8d994e83c70ee5add7a"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1aebc12e6429d2fa947fb77235b8a44ac0)`() const` <a id="structFRHAPI__Inventory_1aebc12e6429d2fa947fb77235b8a44ac0"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Inventory_1ae0953fdf7e1c170790b8de9c19419459)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & NewValue)` <a id="structFRHAPI__Inventory_1ae0953fdf7e1c170790b8de9c19419459"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Inventory_1ab42abe5d0158d349d4bae4be9addc712)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > && NewValue)` <a id="structFRHAPI__Inventory_1ab42abe5d0158d349d4bae4be9addc712"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.

#### `public inline void `[`ClearItems`](#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)`()` <a id="structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a17632de599512f3608273a1f956b9df4)`()` <a id="structFRHAPI__Inventory_1a17632de599512f3608273a1f956b9df4"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a10cd0bfe4f1ff5291db666d73cb2f208)`() const` <a id="structFRHAPI__Inventory_1a10cd0bfe4f1ff5291db666d73cb2f208"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a792cac6c9300479861e21c5f11cb9e61)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Inventory_1a792cac6c9300479861e21c5f11cb9e61"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Inventory_1a0fa19eb28581a3e6a2c8224a35c5867b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Inventory_1a0fa19eb28581a3e6a2c8224a35c5867b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1af51e5e1afe5f39c6250e1328614b9a2d)`()` <a id="structFRHAPI__Inventory_1af51e5e1afe5f39c6250e1328614b9a2d"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a11cd2c9a57c7436df6c6e9098bf19aba)`() const` <a id="structFRHAPI__Inventory_1a11cd2c9a57c7436df6c6e9098bf19aba"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a05ce594ba332c5daab6c11b3f776afe8)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Inventory_1a05ce594ba332c5daab6c11b3f776afe8"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a11d275b8e4c87f620e78769e3d51615c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Inventory_1a11d275b8e4c87f620e78769e3d51615c"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)`()` <a id="structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Inventory_1af0b46dbf17f1a84237c56b34123dba3a)`()` <a id="structFRHAPI__Inventory_1af0b46dbf17f1a84237c56b34123dba3a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Inventory_1a8250d674c5cfa2c18255865c8d8c047b)`() const` <a id="structFRHAPI__Inventory_1a8250d674c5cfa2c18255865c8d8c047b"></a>

Checks whether CacheInfo_Optional is set to null.

