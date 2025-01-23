---
title: RHAPI_PlayerInventoryChange
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerInventoryChange`](#structFRHAPI__PlayerInventoryChange) | Represents the change that occurred to an entry in the Player&#39;s Inventory. The before fields contain the state before the change, after fields contain the state after the change.

## struct `FRHAPI_PlayerInventoryChange` <a id="structFRHAPI__PlayerInventoryChange"></a>

```
struct FRHAPI_PlayerInventoryChange
  : public FRHAPI_Model
```

Represents the change that occurred to an entry in the Player&#39;s Inventory. The before fields contain the state before the change, after fields contain the state after the change.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`BeforeItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d) | 
`public bool `[`BeforeItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec) | true if BeforeItemId_Optional has been set to a value
`public bool `[`BeforeItemId_IsNull`](#structFRHAPI__PlayerInventoryChange_1a75c2892c78f3e72ca5af43cb340258b6) | true if BeforeItemId_Optional has been explicitly set to null
`public int32 `[`AfterItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f) | 
`public bool `[`AfterItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983) | true if AfterItemId_Optional has been set to a value
`public bool `[`AfterItemId_IsNull`](#structFRHAPI__PlayerInventoryChange_1aa7aac8a154529e7dd2528bb9b59c0d64) | true if AfterItemId_Optional has been explicitly set to null
`public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`Before_Optional`](#structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7) | 
`public bool `[`Before_IsSet`](#structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298) | true if Before_Optional has been set to a value
`public bool `[`Before_IsNull`](#structFRHAPI__PlayerInventoryChange_1ab65f89b176db3af816f723b4d70b7023) | true if Before_Optional has been explicitly set to null
`public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`After_Optional`](#structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269) | 
`public bool `[`After_IsSet`](#structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e) | true if After_Optional has been set to a value
`public bool `[`After_IsNull`](#structFRHAPI__PlayerInventoryChange_1aa159ec599e02c670b149adbd34bc5ce4) | true if After_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerInventoryChange_1a7cb4c43508f2a9a43a5ccb3f8a855607)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerInventoryChange_1aa9af7366c88cf285fc713a6b2fede038)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac72b42fb5d11c3012606ceab03c8c297)`()` | Gets the value of BeforeItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1aae66b8b36cbf7e67099bcf6c6c0e695e)`() const` | Gets the value of BeforeItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a3f24c7f3f9a8e8d296f8678a010fdef7)`(const int32 & DefaultValue) const` | Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82)`(int32 & OutValue) const` | Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a1c9ef37b3be36659b71f18a89da7bc46)`()` | Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a1cd2e3d016dd79c02d920bf22572fe09)`() const` | Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a1f048991fc1cf1a9f2d1f6defdb10e81)`(const int32 & NewValue)` | Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.
`public inline void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac9c033da53a88ddfff679e6c54e16fa7)`(int32 && NewValue)` | Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true using move semantics.
`public inline void `[`ClearBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)`()` | Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.
`public inline bool `[`IsBeforeItemIdSet`](#structFRHAPI__PlayerInventoryChange_1a23df0890c6627f0e7e26efa6c476e6e4)`() const` | Checks whether BeforeItemId_Optional has been set.
`public inline bool `[`IsBeforeItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a)`() const` | Returns true if BeforeItemId_Optional is set and matches the default value.
`public inline void `[`SetBeforeItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4)`()` | Sets the value of BeforeItemId_Optional to its default and also sets BeforeItemId_IsSet to true.
`public inline void `[`SetBeforeItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1a86f6626a2cc074b18eea1b73201f71fb)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsBeforeItemIdNull`](#structFRHAPI__PlayerInventoryChange_1af54a8ef88787b4e73c1d33cdc64e1d25)`() const` | Checks whether BeforeItemId_Optional is set to null.
`public inline int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a3f85bcb3806b7533ab260c83976ad851)`()` | Gets the value of AfterItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1af46251b15129118ee465d19899a4abd8)`() const` | Gets the value of AfterItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa4e1f2f5d13860a382e7151829e10219)`(const int32 & DefaultValue) const` | Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c)`(int32 & OutValue) const` | Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a0e48cedacc8ea10ffd8112b3140aedba)`()` | Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a547f97ae81bbcee34bd2675d9261c13d)`() const` | Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a9f7012f6eed18006836147ac8c4e64cb)`(const int32 & NewValue)` | Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.
`public inline void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a0f0e51d5ddeb4c7069a96d3b19751c82)`(int32 && NewValue)` | Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true using move semantics.
`public inline void `[`ClearAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)`()` | Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.
`public inline bool `[`IsAfterItemIdSet`](#structFRHAPI__PlayerInventoryChange_1a1b25ab04e34f4d81333c1f7493ab3703)`() const` | Checks whether AfterItemId_Optional has been set.
`public inline bool `[`IsAfterItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1)`() const` | Returns true if AfterItemId_Optional is set and matches the default value.
`public inline void `[`SetAfterItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d)`()` | Sets the value of AfterItemId_Optional to its default and also sets AfterItemId_IsSet to true.
`public inline void `[`SetAfterItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1afde9453cd1dd7bdafb5d4c59bbd5deef)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsAfterItemIdNull`](#structFRHAPI__PlayerInventoryChange_1a7fa3567569ef900700520753cccd8b58)`() const` | Checks whether AfterItemId_Optional is set to null.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a9de9820af4e249af6a2fd9f202390346)`()` | Gets the value of Before_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a3c70754963d044c5ee69ef1db2231327)`() const` | Gets the value of Before_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ab8354d206ec0ee4accb0eccb744e2a2a)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` | Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` | Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1af06f4def4b9d9231449ec3601ad2a08c)`()` | Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1ac9282d0f6fb1dd212d2e88dda78a4e72)`() const` | Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1a19971ab78f8c4fb2fbf537cb8bbc4f2a)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` | Sets the value of Before_Optional and also sets Before_IsSet to true.
`public inline void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1aba6149b3079259eed6c1d3df47729ae9)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` | Sets the value of Before_Optional and also sets Before_IsSet to true using move semantics.
`public inline void `[`ClearBefore`](#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)`()` | Clears the value of Before_Optional and sets Before_IsSet to false.
`public inline bool `[`IsBeforeSet`](#structFRHAPI__PlayerInventoryChange_1ad202754fc150de6c58563656426004da)`() const` | Checks whether Before_Optional has been set.
`public inline void `[`SetBeforeToNull`](#structFRHAPI__PlayerInventoryChange_1a6bc292813b73acc36da86bd9b27311a1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsBeforeNull`](#structFRHAPI__PlayerInventoryChange_1a1427945c24fd096e1bc38bcca39a5c71)`() const` | Checks whether Before_Optional is set to null.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1adae9433d9cb34ba78522057a81670788)`()` | Gets the value of After_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a4d5cc9ef2ba58436c948b58807d0d4e2)`() const` | Gets the value of After_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a36b665bacb94e555781f373dc195c5de)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` | Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` | Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a86e079c067f42fbf764ea8acbcfad1e3)`()` | Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a711cc5fbb2c67e08fb26de22877493f0)`() const` | Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1af15986dd0abcee4e96b085bc72986af1)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` | Sets the value of After_Optional and also sets After_IsSet to true.
`public inline void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a339ca083c78aee987de2bdc53afd92f0)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` | Sets the value of After_Optional and also sets After_IsSet to true using move semantics.
`public inline void `[`ClearAfter`](#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)`()` | Clears the value of After_Optional and sets After_IsSet to false.
`public inline bool `[`IsAfterSet`](#structFRHAPI__PlayerInventoryChange_1acfc2bc8b6a21aa4c53aadfb29086a591)`() const` | Checks whether After_Optional has been set.
`public inline void `[`SetAfterToNull`](#structFRHAPI__PlayerInventoryChange_1acba34814e2a357db37f6129d1c5fef7e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsAfterNull`](#structFRHAPI__PlayerInventoryChange_1ad1c3e9dc39022591239fb469b95c00ed)`() const` | Checks whether After_Optional is set to null.

### Members

#### `public int32 `[`BeforeItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d) <a id="structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d"></a>

#### `public bool `[`BeforeItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec) <a id="structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec"></a>

true if BeforeItemId_Optional has been set to a value

#### `public bool `[`BeforeItemId_IsNull`](#structFRHAPI__PlayerInventoryChange_1a75c2892c78f3e72ca5af43cb340258b6) <a id="structFRHAPI__PlayerInventoryChange_1a75c2892c78f3e72ca5af43cb340258b6"></a>

true if BeforeItemId_Optional has been explicitly set to null

#### `public int32 `[`AfterItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f) <a id="structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f"></a>

#### `public bool `[`AfterItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983) <a id="structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983"></a>

true if AfterItemId_Optional has been set to a value

#### `public bool `[`AfterItemId_IsNull`](#structFRHAPI__PlayerInventoryChange_1aa7aac8a154529e7dd2528bb9b59c0d64) <a id="structFRHAPI__PlayerInventoryChange_1aa7aac8a154529e7dd2528bb9b59c0d64"></a>

true if AfterItemId_Optional has been explicitly set to null

#### `public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`Before_Optional`](#structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7) <a id="structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7"></a>

#### `public bool `[`Before_IsSet`](#structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298) <a id="structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298"></a>

true if Before_Optional has been set to a value

#### `public bool `[`Before_IsNull`](#structFRHAPI__PlayerInventoryChange_1ab65f89b176db3af816f723b4d70b7023) <a id="structFRHAPI__PlayerInventoryChange_1ab65f89b176db3af816f723b4d70b7023"></a>

true if Before_Optional has been explicitly set to null

#### `public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`After_Optional`](#structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269) <a id="structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269"></a>

#### `public bool `[`After_IsSet`](#structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e) <a id="structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e"></a>

true if After_Optional has been set to a value

#### `public bool `[`After_IsNull`](#structFRHAPI__PlayerInventoryChange_1aa159ec599e02c670b149adbd34bc5ce4) <a id="structFRHAPI__PlayerInventoryChange_1aa159ec599e02c670b149adbd34bc5ce4"></a>

true if After_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerInventoryChange_1a7cb4c43508f2a9a43a5ccb3f8a855607)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerInventoryChange_1a7cb4c43508f2a9a43a5ccb3f8a855607"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerInventoryChange_1aa9af7366c88cf285fc713a6b2fede038)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerInventoryChange_1aa9af7366c88cf285fc713a6b2fede038"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac72b42fb5d11c3012606ceab03c8c297)`()` <a id="structFRHAPI__PlayerInventoryChange_1ac72b42fb5d11c3012606ceab03c8c297"></a>

Gets the value of BeforeItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1aae66b8b36cbf7e67099bcf6c6c0e695e)`() const` <a id="structFRHAPI__PlayerInventoryChange_1aae66b8b36cbf7e67099bcf6c6c0e695e"></a>

Gets the value of BeforeItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a3f24c7f3f9a8e8d296f8678a010fdef7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a3f24c7f3f9a8e8d296f8678a010fdef7"></a>

Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82"></a>

Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a1c9ef37b3be36659b71f18a89da7bc46)`()` <a id="structFRHAPI__PlayerInventoryChange_1a1c9ef37b3be36659b71f18a89da7bc46"></a>

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a1cd2e3d016dd79c02d920bf22572fe09)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a1cd2e3d016dd79c02d920bf22572fe09"></a>

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a1f048991fc1cf1a9f2d1f6defdb10e81)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a1f048991fc1cf1a9f2d1f6defdb10e81"></a>

Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.

#### `public inline void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac9c033da53a88ddfff679e6c54e16fa7)`(int32 && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1ac9c033da53a88ddfff679e6c54e16fa7"></a>

Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)`()` <a id="structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552"></a>

Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.

#### `public inline bool `[`IsBeforeItemIdSet`](#structFRHAPI__PlayerInventoryChange_1a23df0890c6627f0e7e26efa6c476e6e4)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a23df0890c6627f0e7e26efa6c476e6e4"></a>

Checks whether BeforeItemId_Optional has been set.

#### `public inline bool `[`IsBeforeItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a"></a>

Returns true if BeforeItemId_Optional is set and matches the default value.

#### `public inline void `[`SetBeforeItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4)`()` <a id="structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4"></a>

Sets the value of BeforeItemId_Optional to its default and also sets BeforeItemId_IsSet to true.

#### `public inline void `[`SetBeforeItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1a86f6626a2cc074b18eea1b73201f71fb)`()` <a id="structFRHAPI__PlayerInventoryChange_1a86f6626a2cc074b18eea1b73201f71fb"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsBeforeItemIdNull`](#structFRHAPI__PlayerInventoryChange_1af54a8ef88787b4e73c1d33cdc64e1d25)`() const` <a id="structFRHAPI__PlayerInventoryChange_1af54a8ef88787b4e73c1d33cdc64e1d25"></a>

Checks whether BeforeItemId_Optional is set to null.

#### `public inline int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a3f85bcb3806b7533ab260c83976ad851)`()` <a id="structFRHAPI__PlayerInventoryChange_1a3f85bcb3806b7533ab260c83976ad851"></a>

Gets the value of AfterItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1af46251b15129118ee465d19899a4abd8)`() const` <a id="structFRHAPI__PlayerInventoryChange_1af46251b15129118ee465d19899a4abd8"></a>

Gets the value of AfterItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa4e1f2f5d13860a382e7151829e10219)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1aa4e1f2f5d13860a382e7151829e10219"></a>

Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c"></a>

Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a0e48cedacc8ea10ffd8112b3140aedba)`()` <a id="structFRHAPI__PlayerInventoryChange_1a0e48cedacc8ea10ffd8112b3140aedba"></a>

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a547f97ae81bbcee34bd2675d9261c13d)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a547f97ae81bbcee34bd2675d9261c13d"></a>

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a9f7012f6eed18006836147ac8c4e64cb)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a9f7012f6eed18006836147ac8c4e64cb"></a>

Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.

#### `public inline void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a0f0e51d5ddeb4c7069a96d3b19751c82)`(int32 && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a0f0e51d5ddeb4c7069a96d3b19751c82"></a>

Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)`()` <a id="structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5"></a>

Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.

#### `public inline bool `[`IsAfterItemIdSet`](#structFRHAPI__PlayerInventoryChange_1a1b25ab04e34f4d81333c1f7493ab3703)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a1b25ab04e34f4d81333c1f7493ab3703"></a>

Checks whether AfterItemId_Optional has been set.

#### `public inline bool `[`IsAfterItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1"></a>

Returns true if AfterItemId_Optional is set and matches the default value.

#### `public inline void `[`SetAfterItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d)`()` <a id="structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d"></a>

Sets the value of AfterItemId_Optional to its default and also sets AfterItemId_IsSet to true.

#### `public inline void `[`SetAfterItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1afde9453cd1dd7bdafb5d4c59bbd5deef)`()` <a id="structFRHAPI__PlayerInventoryChange_1afde9453cd1dd7bdafb5d4c59bbd5deef"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsAfterItemIdNull`](#structFRHAPI__PlayerInventoryChange_1a7fa3567569ef900700520753cccd8b58)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a7fa3567569ef900700520753cccd8b58"></a>

Checks whether AfterItemId_Optional is set to null.

#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a9de9820af4e249af6a2fd9f202390346)`()` <a id="structFRHAPI__PlayerInventoryChange_1a9de9820af4e249af6a2fd9f202390346"></a>

Gets the value of Before_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a3c70754963d044c5ee69ef1db2231327)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a3c70754963d044c5ee69ef1db2231327"></a>

Gets the value of Before_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ab8354d206ec0ee4accb0eccb744e2a2a)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1ab8354d206ec0ee4accb0eccb744e2a2a"></a>

Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37"></a>

Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1af06f4def4b9d9231449ec3601ad2a08c)`()` <a id="structFRHAPI__PlayerInventoryChange_1af06f4def4b9d9231449ec3601ad2a08c"></a>

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1ac9282d0f6fb1dd212d2e88dda78a4e72)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ac9282d0f6fb1dd212d2e88dda78a4e72"></a>

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1a19971ab78f8c4fb2fbf537cb8bbc4f2a)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a19971ab78f8c4fb2fbf537cb8bbc4f2a"></a>

Sets the value of Before_Optional and also sets Before_IsSet to true.

#### `public inline void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1aba6149b3079259eed6c1d3df47729ae9)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1aba6149b3079259eed6c1d3df47729ae9"></a>

Sets the value of Before_Optional and also sets Before_IsSet to true using move semantics.

#### `public inline void `[`ClearBefore`](#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)`()` <a id="structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504"></a>

Clears the value of Before_Optional and sets Before_IsSet to false.

#### `public inline bool `[`IsBeforeSet`](#structFRHAPI__PlayerInventoryChange_1ad202754fc150de6c58563656426004da)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ad202754fc150de6c58563656426004da"></a>

Checks whether Before_Optional has been set.

#### `public inline void `[`SetBeforeToNull`](#structFRHAPI__PlayerInventoryChange_1a6bc292813b73acc36da86bd9b27311a1)`()` <a id="structFRHAPI__PlayerInventoryChange_1a6bc292813b73acc36da86bd9b27311a1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsBeforeNull`](#structFRHAPI__PlayerInventoryChange_1a1427945c24fd096e1bc38bcca39a5c71)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a1427945c24fd096e1bc38bcca39a5c71"></a>

Checks whether Before_Optional is set to null.

#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1adae9433d9cb34ba78522057a81670788)`()` <a id="structFRHAPI__PlayerInventoryChange_1adae9433d9cb34ba78522057a81670788"></a>

Gets the value of After_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a4d5cc9ef2ba58436c948b58807d0d4e2)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a4d5cc9ef2ba58436c948b58807d0d4e2"></a>

Gets the value of After_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a36b665bacb94e555781f373dc195c5de)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a36b665bacb94e555781f373dc195c5de"></a>

Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732"></a>

Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a86e079c067f42fbf764ea8acbcfad1e3)`()` <a id="structFRHAPI__PlayerInventoryChange_1a86e079c067f42fbf764ea8acbcfad1e3"></a>

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a711cc5fbb2c67e08fb26de22877493f0)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a711cc5fbb2c67e08fb26de22877493f0"></a>

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1af15986dd0abcee4e96b085bc72986af1)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1af15986dd0abcee4e96b085bc72986af1"></a>

Sets the value of After_Optional and also sets After_IsSet to true.

#### `public inline void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a339ca083c78aee987de2bdc53afd92f0)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a339ca083c78aee987de2bdc53afd92f0"></a>

Sets the value of After_Optional and also sets After_IsSet to true using move semantics.

#### `public inline void `[`ClearAfter`](#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)`()` <a id="structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3"></a>

Clears the value of After_Optional and sets After_IsSet to false.

#### `public inline bool `[`IsAfterSet`](#structFRHAPI__PlayerInventoryChange_1acfc2bc8b6a21aa4c53aadfb29086a591)`() const` <a id="structFRHAPI__PlayerInventoryChange_1acfc2bc8b6a21aa4c53aadfb29086a591"></a>

Checks whether After_Optional has been set.

#### `public inline void `[`SetAfterToNull`](#structFRHAPI__PlayerInventoryChange_1acba34814e2a357db37f6129d1c5fef7e)`()` <a id="structFRHAPI__PlayerInventoryChange_1acba34814e2a357db37f6129d1c5fef7e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsAfterNull`](#structFRHAPI__PlayerInventoryChange_1ad1c3e9dc39022591239fb469b95c00ed)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ad1c3e9dc39022591239fb469b95c00ed"></a>

Checks whether After_Optional is set to null.

