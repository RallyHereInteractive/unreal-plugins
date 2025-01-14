---
title: RHAPI_ItemInventory
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > `[`Records_Optional`](#structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e) | Inventory Records for this Item Inventory.
`public bool `[`Records_IsSet`](#structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50) | true if Records_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4) | Cache Info for this Item Inventory.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ItemInventory_1a8f6befec16b8f4e21d395a8fd1e2db4a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ItemInventory_1ab0ff966fd6f2d0d59d0ef926ccb69e16)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1abee56df0d996c6e4305f4ea8bd96ae1c)`()` | Gets the value of Records_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a30a8367d047be3d3cc042bd4efc972ee)`() const` | Gets the value of Records_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a7d7a5095b947b0bf152334e1494e2e53)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & DefaultValue) const` | Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRecords`](#structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & OutValue) const` | Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a002118437c7c831275c3c17a86fc9414)`()` | Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a3d630afbb046350441693711bd954b2e)`() const` | Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRecords`](#structFRHAPI__ItemInventory_1a3db7854cd5f943be9be776529e46f653)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & NewValue)` | Sets the value of Records_Optional and also sets Records_IsSet to true.
`public inline void `[`SetRecords`](#structFRHAPI__ItemInventory_1aa48004a0d3652c14ceae00886af2dfb0)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > && NewValue)` | Sets the value of Records_Optional and also sets Records_IsSet to true using move semantics.
`public inline void `[`ClearRecords`](#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)`()` | Clears the value of Records_Optional and sets Records_IsSet to false.
`public inline bool `[`IsRecordsSet`](#structFRHAPI__ItemInventory_1a855bc9c7a608b19848e20f73d3e58bfa)`() const` | Checks whether Records_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a01c2fe5e6ffc351f637cb574d8a5d5c9)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1ae6fc90c30d4725b05de0c4de7851d3e5)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a631d31677c72fb98d3ea00ebd651c834)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1aff69dba9aaecc0cea617ea314f6c9fe8)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a1d7fce414dc2e698885d24e847df7bf0)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1a99d7076f0cc1286aca41a5fbbdbc8c3c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1a9cea9b7fcb4bcf348efaf15fe2a40d2e)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__ItemInventory_1af664390e86c490f51516f3f7ca86b3e3)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > `[`Records_Optional`](#structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e) <a id="structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e"></a>

Inventory Records for this Item Inventory.

#### `public bool `[`Records_IsSet`](#structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50) <a id="structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50"></a>

true if Records_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4) <a id="structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4"></a>

Cache Info for this Item Inventory.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86) <a id="structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ItemInventory_1a8f6befec16b8f4e21d395a8fd1e2db4a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ItemInventory_1a8f6befec16b8f4e21d395a8fd1e2db4a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ItemInventory_1ab0ff966fd6f2d0d59d0ef926ccb69e16)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ItemInventory_1ab0ff966fd6f2d0d59d0ef926ccb69e16"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1abee56df0d996c6e4305f4ea8bd96ae1c)`()` <a id="structFRHAPI__ItemInventory_1abee56df0d996c6e4305f4ea8bd96ae1c"></a>

Gets the value of Records_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a30a8367d047be3d3cc042bd4efc972ee)`() const` <a id="structFRHAPI__ItemInventory_1a30a8367d047be3d3cc042bd4efc972ee"></a>

Gets the value of Records_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a7d7a5095b947b0bf152334e1494e2e53)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & DefaultValue) const` <a id="structFRHAPI__ItemInventory_1a7d7a5095b947b0bf152334e1494e2e53"></a>

Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRecords`](#structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & OutValue) const` <a id="structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9"></a>

Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a002118437c7c831275c3c17a86fc9414)`()` <a id="structFRHAPI__ItemInventory_1a002118437c7c831275c3c17a86fc9414"></a>

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a3d630afbb046350441693711bd954b2e)`() const` <a id="structFRHAPI__ItemInventory_1a3d630afbb046350441693711bd954b2e"></a>

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRecords`](#structFRHAPI__ItemInventory_1a3db7854cd5f943be9be776529e46f653)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & NewValue)` <a id="structFRHAPI__ItemInventory_1a3db7854cd5f943be9be776529e46f653"></a>

Sets the value of Records_Optional and also sets Records_IsSet to true.

#### `public inline void `[`SetRecords`](#structFRHAPI__ItemInventory_1aa48004a0d3652c14ceae00886af2dfb0)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > && NewValue)` <a id="structFRHAPI__ItemInventory_1aa48004a0d3652c14ceae00886af2dfb0"></a>

Sets the value of Records_Optional and also sets Records_IsSet to true using move semantics.

#### `public inline void `[`ClearRecords`](#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)`()` <a id="structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581"></a>

Clears the value of Records_Optional and sets Records_IsSet to false.

#### `public inline bool `[`IsRecordsSet`](#structFRHAPI__ItemInventory_1a855bc9c7a608b19848e20f73d3e58bfa)`() const` <a id="structFRHAPI__ItemInventory_1a855bc9c7a608b19848e20f73d3e58bfa"></a>

Checks whether Records_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a01c2fe5e6ffc351f637cb574d8a5d5c9)`()` <a id="structFRHAPI__ItemInventory_1a01c2fe5e6ffc351f637cb574d8a5d5c9"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1ae6fc90c30d4725b05de0c4de7851d3e5)`() const` <a id="structFRHAPI__ItemInventory_1ae6fc90c30d4725b05de0c4de7851d3e5"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a631d31677c72fb98d3ea00ebd651c834)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__ItemInventory_1a631d31677c72fb98d3ea00ebd651c834"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1aff69dba9aaecc0cea617ea314f6c9fe8)`()` <a id="structFRHAPI__ItemInventory_1aff69dba9aaecc0cea617ea314f6c9fe8"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a1d7fce414dc2e698885d24e847df7bf0)`() const` <a id="structFRHAPI__ItemInventory_1a1d7fce414dc2e698885d24e847df7bf0"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1a99d7076f0cc1286aca41a5fbbdbc8c3c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__ItemInventory_1a99d7076f0cc1286aca41a5fbbdbc8c3c"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1a9cea9b7fcb4bcf348efaf15fe2a40d2e)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__ItemInventory_1a9cea9b7fcb4bcf348efaf15fe2a40d2e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)`()` <a id="structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__ItemInventory_1af664390e86c490f51516f3f7ca86b3e3)`() const` <a id="structFRHAPI__ItemInventory_1af664390e86c490f51516f3f7ca86b3e3"></a>

Checks whether CacheInfo_Optional has been set.

