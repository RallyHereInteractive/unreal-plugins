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
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__ItemInventory_1a1489c45009d3d6b42475de33259eaf91) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__ItemInventory_1a8f6befec16b8f4e21d395a8fd1e2db4a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ItemInventory_1ab0ff966fd6f2d0d59d0ef926ccb69e16)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1ad4058a181db49cc4610ead12eda468af)`()` | Gets the value of Records_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1ab33f6fe981d9e5b78c81a00ade0bd868)`() const` | Gets the value of Records_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a668252118754cda86ebf034b9de97221)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & DefaultValue) const` | Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRecords`](#structFRHAPI__ItemInventory_1a974278267dce35187bc70bac8efd8811)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & OutValue) const` | Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a557dc9da02c84403aba9d52b9bd131ac)`()` | Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1ac2ea808a603a8e1027845aeda75decfd)`() const` | Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRecords`](#structFRHAPI__ItemInventory_1ab8dea41fe1676ba9a8f126047ab32e47)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & NewValue)` | Sets the value of Records_Optional and also sets Records_IsSet to true.
`public inline FORCEINLINE void `[`SetRecords`](#structFRHAPI__ItemInventory_1aa9c0594fc3f2f5b2415d166f207d0b9b)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > && NewValue)` | Sets the value of Records_Optional and also sets Records_IsSet to true using move semantics.
`public inline void `[`ClearRecords`](#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)`()` | Clears the value of Records_Optional and sets Records_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a118322d9c02ce3737eed6a88f47850c2)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1aabcf53f2be93ece9f6d4d582351ef191)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a007a77b3c8edf1f09bb0a6ed9c573b2d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1abccc9e90039d6ac62a86f75cefb5bfdd)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a3edc0c9a67f5c90bddabd187c9f68191)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a0ca59aba8b9889c8565685ced21b80e7)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1a70dbf306e0390730c48bf6a008c81dfe)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1abcdcaf5207ad1a30c1552dc99bc2c1ee)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__ItemInventory_1a3f6c819965232ca9bbc4009141d354dc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__ItemInventory_1a82eea0791aed8c877fbc3fd3daa4b812)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > `[`Records_Optional`](#structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e) <a id="structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e"></a>

Inventory Records for this Item Inventory.

#### `public bool `[`Records_IsSet`](#structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50) <a id="structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50"></a>

true if Records_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4) <a id="structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86) <a id="structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__ItemInventory_1a1489c45009d3d6b42475de33259eaf91) <a id="structFRHAPI__ItemInventory_1a1489c45009d3d6b42475de33259eaf91"></a>

true if CacheInfo_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1ad4058a181db49cc4610ead12eda468af)`()` <a id="structFRHAPI__ItemInventory_1ad4058a181db49cc4610ead12eda468af"></a>

Gets the value of Records_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1ab33f6fe981d9e5b78c81a00ade0bd868)`() const` <a id="structFRHAPI__ItemInventory_1ab33f6fe981d9e5b78c81a00ade0bd868"></a>

Gets the value of Records_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & `[`GetRecords`](#structFRHAPI__ItemInventory_1a668252118754cda86ebf034b9de97221)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & DefaultValue) const` <a id="structFRHAPI__ItemInventory_1a668252118754cda86ebf034b9de97221"></a>

Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRecords`](#structFRHAPI__ItemInventory_1a974278267dce35187bc70bac8efd8811)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & OutValue) const` <a id="structFRHAPI__ItemInventory_1a974278267dce35187bc70bac8efd8811"></a>

Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1a557dc9da02c84403aba9d52b9bd131ac)`()` <a id="structFRHAPI__ItemInventory_1a557dc9da02c84403aba9d52b9bd131ac"></a>

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > * `[`GetRecordsOrNull`](#structFRHAPI__ItemInventory_1ac2ea808a603a8e1027845aeda75decfd)`() const` <a id="structFRHAPI__ItemInventory_1ac2ea808a603a8e1027845aeda75decfd"></a>

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRecords`](#structFRHAPI__ItemInventory_1ab8dea41fe1676ba9a8f126047ab32e47)`(const TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > & NewValue)` <a id="structFRHAPI__ItemInventory_1ab8dea41fe1676ba9a8f126047ab32e47"></a>

Sets the value of Records_Optional and also sets Records_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRecords`](#structFRHAPI__ItemInventory_1aa9c0594fc3f2f5b2415d166f207d0b9b)`(TMap< FString, `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` > && NewValue)` <a id="structFRHAPI__ItemInventory_1aa9c0594fc3f2f5b2415d166f207d0b9b"></a>

Sets the value of Records_Optional and also sets Records_IsSet to true using move semantics.

#### `public inline void `[`ClearRecords`](#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)`()` <a id="structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581"></a>

Clears the value of Records_Optional and sets Records_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a118322d9c02ce3737eed6a88f47850c2)`()` <a id="structFRHAPI__ItemInventory_1a118322d9c02ce3737eed6a88f47850c2"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1aabcf53f2be93ece9f6d4d582351ef191)`() const` <a id="structFRHAPI__ItemInventory_1aabcf53f2be93ece9f6d4d582351ef191"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1a007a77b3c8edf1f09bb0a6ed9c573b2d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__ItemInventory_1a007a77b3c8edf1f09bb0a6ed9c573b2d"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__ItemInventory_1abccc9e90039d6ac62a86f75cefb5bfdd)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__ItemInventory_1abccc9e90039d6ac62a86f75cefb5bfdd"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a3edc0c9a67f5c90bddabd187c9f68191)`()` <a id="structFRHAPI__ItemInventory_1a3edc0c9a67f5c90bddabd187c9f68191"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__ItemInventory_1a0ca59aba8b9889c8565685ced21b80e7)`() const` <a id="structFRHAPI__ItemInventory_1a0ca59aba8b9889c8565685ced21b80e7"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1a70dbf306e0390730c48bf6a008c81dfe)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__ItemInventory_1a70dbf306e0390730c48bf6a008c81dfe"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__ItemInventory_1abcdcaf5207ad1a30c1552dc99bc2c1ee)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__ItemInventory_1abcdcaf5207ad1a30c1552dc99bc2c1ee"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)`()` <a id="structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__ItemInventory_1a3f6c819965232ca9bbc4009141d354dc)`()` <a id="structFRHAPI__ItemInventory_1a3f6c819965232ca9bbc4009141d354dc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__ItemInventory_1a82eea0791aed8c877fbc3fd3daa4b812)`() const` <a id="structFRHAPI__ItemInventory_1a82eea0791aed8c877fbc3fd3daa4b812"></a>

Checks whether CacheInfo_Optional is set to null.

