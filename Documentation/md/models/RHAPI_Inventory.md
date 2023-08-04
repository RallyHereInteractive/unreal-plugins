# RHAPI_Inventory <a id="group__RHAPI__Inventory"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > `[`Items_Optional`](#structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093) | Item Inventories for this Inventory.
`public bool `[`Items_IsSet`](#structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3) | true if Items_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Inventory_1a35bf77bfd0fde32367ba5c8feb84199c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Inventory_1a635d13e6100f81bd9dc2414e8d30edfd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1afc9090bd51c9a195ca55723ce666333e)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a55ded393e907eb38cafe88fedd4a4fcc)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1af5861fb4f0dd089728a30cd50cfb34d9)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItems`](#structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a1f64ef3c5b2344981576fea06b0492b8)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1ab35d617ca4fce1557035421c948cfd17)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItems`](#structFRHAPI__Inventory_1a75595aec37c0627c04dceb340e2f766d)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline void `[`ClearItems`](#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a00c3bce14622af56577d44bf37b463f4)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1ae918a58e47026c48014d700e1d30c7bf)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a6ec90da1a67248445521191b9839a048)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1aa0e9296dc8dca59a8e45ae258b10035b)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a4b79d280988af02ab874400706f7406c)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a10ebebd28eab0dffa3aea1d0a3c18dd2)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > `[`Items_Optional`](#structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093) <a id="structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093"></a>

Item Inventories for this Inventory.

<br>
#### `public bool `[`Items_IsSet`](#structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3) <a id="structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3"></a>

true if Items_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23) <a id="structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589) <a id="structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Inventory_1a35bf77bfd0fde32367ba5c8feb84199c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Inventory_1a35bf77bfd0fde32367ba5c8feb84199c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Inventory_1a635d13e6100f81bd9dc2414e8d30edfd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Inventory_1a635d13e6100f81bd9dc2414e8d30edfd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1afc9090bd51c9a195ca55723ce666333e)`()` <a id="structFRHAPI__Inventory_1afc9090bd51c9a195ca55723ce666333e"></a>

Gets the value of Items_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1a55ded393e907eb38cafe88fedd4a4fcc)`() const` <a id="structFRHAPI__Inventory_1a55ded393e907eb38cafe88fedd4a4fcc"></a>

Gets the value of Items_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & `[`GetItems`](#structFRHAPI__Inventory_1af5861fb4f0dd089728a30cd50cfb34d9)`(const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & DefaultValue) const` <a id="structFRHAPI__Inventory_1af5861fb4f0dd089728a30cd50cfb34d9"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetItems`](#structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > & OutValue) const` <a id="structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1a1f64ef3c5b2344981576fea06b0492b8)`()` <a id="structFRHAPI__Inventory_1a1f64ef3c5b2344981576fea06b0492b8"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > * `[`GetItemsOrNull`](#structFRHAPI__Inventory_1ab35d617ca4fce1557035421c948cfd17)`() const` <a id="structFRHAPI__Inventory_1ab35d617ca4fce1557035421c948cfd17"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetItems`](#structFRHAPI__Inventory_1a75595aec37c0627c04dceb340e2f766d)`(TMap< FString, `[`FRHAPI_ItemInventory`](RHAPI_ItemInventory.md#structFRHAPI__ItemInventory)` > NewValue)` <a id="structFRHAPI__Inventory_1a75595aec37c0627c04dceb340e2f766d"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

<br>
#### `public inline void `[`ClearItems`](#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)`()` <a id="structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a00c3bce14622af56577d44bf37b463f4)`()` <a id="structFRHAPI__Inventory_1a00c3bce14622af56577d44bf37b463f4"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1ae918a58e47026c48014d700e1d30c7bf)`() const` <a id="structFRHAPI__Inventory_1ae918a58e47026c48014d700e1d30c7bf"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Inventory_1a6ec90da1a67248445521191b9839a048)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Inventory_1a6ec90da1a67248445521191b9839a048"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1aa0e9296dc8dca59a8e45ae258b10035b)`()` <a id="structFRHAPI__Inventory_1aa0e9296dc8dca59a8e45ae258b10035b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Inventory_1a4b79d280988af02ab874400706f7406c)`() const` <a id="structFRHAPI__Inventory_1a4b79d280988af02ab874400706f7406c"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Inventory_1a10ebebd28eab0dffa3aea1d0a3c18dd2)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__Inventory_1a10ebebd28eab0dffa3aea1d0a3c18dd2"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)`()` <a id="structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
