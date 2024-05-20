# RHAPI_ItemInventory <a id="group__RHAPI__ItemInventory"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ItemInventory`](#structFRHAPI__ItemInventory) | Inventory of a particular Item for a Player organized by Inventory ID.

## struct `FRHAPI_ItemInventory` <a id="structFRHAPI__ItemInventory"></a>

```
struct FRHAPI_ItemInventory
  : public FRHAPI_Model
```

Inventory of a particular Item for a Player organized by Inventory ID.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > `[`Records_Optional`](#structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e) | Inventory Records for this Item Inventory.
`public bool `[`Records_IsSet`](#structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50) | true if Records_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4) | Cache Info for this Item Inventory.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ItemInventory_1a57f0ce1f90bfb155a9a2f15989354b6b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ItemInventory_1ae72770dfc343e4c5b2eb93cf7eb00e32)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a7cf14d6c8fb483adbba10a2897f900db)`()` | Gets the value of Records_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1ad58a34aa61717760665e566f1a2caa3e)`() const` | Gets the value of Records_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1afd84003f0fda38c94404b9252fc08877)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & DefaultValue) const` | Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRecords`](#structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & OutValue) const` | Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a398c52115e15bc2c290d60976880ab83)`()` | Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a600248af852a9f306f3fbb742cb340c9)`() const` | Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRecords`](#structFRHAPI__ItemInventory_1a7a369c1e32e2d53256e25ab26c8a7ebb)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > NewValue)` | Sets the value of Records_Optional and also sets Records_IsSet to true.
`public inline void `[`ClearRecords`](#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)`()` | Clears the value of Records_Optional and sets Records_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a72aadbd597531eb731f5614608be8dcb)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a7c9365536a66e61fa26f630aace028cd)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a98698a867e6c6be16ef78dc3301a04ba)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a4d82f7a96b004e873077c9ba37077308)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a3e28604c7e0536176bfd57b25589469a)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1aa4236321b4102d43964a36d984236e79)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > `[`Records_Optional`](#structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e) <a id="structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e"></a>

Inventory Records for this Item Inventory.

#### `public bool `[`Records_IsSet`](#structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50) <a id="structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50"></a>

true if Records_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4) <a id="structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4"></a>

Cache Info for this Item Inventory.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86) <a id="structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ItemInventory_1a57f0ce1f90bfb155a9a2f15989354b6b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ItemInventory_1a57f0ce1f90bfb155a9a2f15989354b6b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ItemInventory_1ae72770dfc343e4c5b2eb93cf7eb00e32)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__ItemInventory_1ae72770dfc343e4c5b2eb93cf7eb00e32"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a7cf14d6c8fb483adbba10a2897f900db)`()` <a id="structFRHAPI__ItemInventory_1a7cf14d6c8fb483adbba10a2897f900db"></a>

Gets the value of Records_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1ad58a34aa61717760665e566f1a2caa3e)`() const` <a id="structFRHAPI__ItemInventory_1ad58a34aa61717760665e566f1a2caa3e"></a>

Gets the value of Records_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1afd84003f0fda38c94404b9252fc08877)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & DefaultValue) const` <a id="structFRHAPI__ItemInventory_1afd84003f0fda38c94404b9252fc08877"></a>

Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRecords`](#structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & OutValue) const` <a id="structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9"></a>

Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a398c52115e15bc2c290d60976880ab83)`()` <a id="structFRHAPI__ItemInventory_1a398c52115e15bc2c290d60976880ab83"></a>

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a600248af852a9f306f3fbb742cb340c9)`() const` <a id="structFRHAPI__ItemInventory_1a600248af852a9f306f3fbb742cb340c9"></a>

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRecords`](#structFRHAPI__ItemInventory_1a7a369c1e32e2d53256e25ab26c8a7ebb)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > NewValue)` <a id="structFRHAPI__ItemInventory_1a7a369c1e32e2d53256e25ab26c8a7ebb"></a>

Sets the value of Records_Optional and also sets Records_IsSet to true.

#### `public inline void `[`ClearRecords`](#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)`()` <a id="structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581"></a>

Clears the value of Records_Optional and sets Records_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a72aadbd597531eb731f5614608be8dcb)`()` <a id="structFRHAPI__ItemInventory_1a72aadbd597531eb731f5614608be8dcb"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a7c9365536a66e61fa26f630aace028cd)`() const` <a id="structFRHAPI__ItemInventory_1a7c9365536a66e61fa26f630aace028cd"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a98698a867e6c6be16ef78dc3301a04ba)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__ItemInventory_1a98698a867e6c6be16ef78dc3301a04ba"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a4d82f7a96b004e873077c9ba37077308)`()` <a id="structFRHAPI__ItemInventory_1a4d82f7a96b004e873077c9ba37077308"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a3e28604c7e0536176bfd57b25589469a)`() const` <a id="structFRHAPI__ItemInventory_1a3e28604c7e0536176bfd57b25589469a"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1aa4236321b4102d43964a36d984236e79)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__ItemInventory_1aa4236321b4102d43964a36d984236e79"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)`()` <a id="structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

