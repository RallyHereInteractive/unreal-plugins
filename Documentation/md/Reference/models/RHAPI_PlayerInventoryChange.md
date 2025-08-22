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
`public inline FORCEINLINE int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a13052ae9d6ab86892c8b9f3b69a1b99e)`()` | Gets the value of BeforeItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a294a471b807c9f2a29c6492c334bbd3c)`() const` | Gets the value of BeforeItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a290c4dce9f14574a80926d19af357932)`(const int32 & DefaultValue) const` | Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a369d3833320c31bccb1e38e1b0e6928d)`(int32 & OutValue) const` | Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a998ac168e5074bcb87a107f17ca98d11)`()` | Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a9288e0feb151f94ea0befde72e14bd4d)`() const` | Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a21e26d70911ce679e0d7326396a3cdf3)`(const int32 & NewValue)` | Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a4f24dfbb9df772444c66f86f5d75af39)`(int32 && NewValue)` | Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true using move semantics.
`public inline void `[`ClearBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)`()` | Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_BeforeItemId`](#structFRHAPI__PlayerInventoryChange_1aaca02db48d733126961db1da8ec495a3)`()` | Returns the default value of BeforeItemId.
`public inline FORCEINLINE void `[`SetBeforeItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1a3ea56b91b6381b243980235f166f650a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsBeforeItemIdNull`](#structFRHAPI__PlayerInventoryChange_1aa34f632ed0435d803ed801f88376778f)`() const` | Checks whether BeforeItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a40115660de00d4dbcbf9a8b8f344b42e)`()` | Gets the value of AfterItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a79c6d48c3349d99db7abb2130f839986)`() const` | Gets the value of AfterItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a7afd91b96b9975f9acc8c6d8b85dbaa3)`(const int32 & DefaultValue) const` | Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a158b394311cbfd4a360e919992be4c5c)`(int32 & OutValue) const` | Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1acb69dd77b072aa5e48b8084f144e851e)`()` | Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1aa3157287b3e7227c753bfab68ae212e0)`() const` | Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a87b292ad8acfa9119e38d9ac95a7a10a)`(const int32 & NewValue)` | Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a63417bcec1cda39adfcb64c1a16276ad)`(int32 && NewValue)` | Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true using move semantics.
`public inline void `[`ClearAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)`()` | Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_AfterItemId`](#structFRHAPI__PlayerInventoryChange_1abe1bfb5d449bc2d524820b09139e080f)`()` | Returns the default value of AfterItemId.
`public inline FORCEINLINE void `[`SetAfterItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1a951c9e05f23e1befb9834a3ff2c7cdd4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsAfterItemIdNull`](#structFRHAPI__PlayerInventoryChange_1a0efd09c98284734208b60605f6c2b491)`() const` | Checks whether AfterItemId_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a608d1e3cefdf55791c667114ee99b34d)`()` | Gets the value of Before_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ac3b07b86c352b497785bc7f03ec3cc08)`() const` | Gets the value of Before_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1aa5962ec4ff379eb0ca8488fb7a02491d)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` | Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ac5e5ec614717d783d9d5ac1c231d6450)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` | Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1add7a3f9ddd08cb7c73e82ae6367a363a)`()` | Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1af0f4b3b37a48455e30a324672477f9e8)`() const` | Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1adfcc1e1eff8c60e99b4e38690275914a)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` | Sets the value of Before_Optional and also sets Before_IsSet to true.
`public inline FORCEINLINE void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1a1fe504e307edd568ba1b03d461ba06a1)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` | Sets the value of Before_Optional and also sets Before_IsSet to true using move semantics.
`public inline void `[`ClearBefore`](#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)`()` | Clears the value of Before_Optional and sets Before_IsSet to false.
`public inline FORCEINLINE void `[`SetBeforeToNull`](#structFRHAPI__PlayerInventoryChange_1a5f0ee088c5acbbb25e639121842ccdf0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsBeforeNull`](#structFRHAPI__PlayerInventoryChange_1a7a05b77eed5ecd5b5164aed125d3db4b)`() const` | Checks whether Before_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a740d2f25300d8074bdf11a3ee158b551)`()` | Gets the value of After_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1ae02ccd84371fe5fdd4daf14d8ddda4b4)`() const` | Gets the value of After_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a01ce1aba251e395ed53ce2bde79bbd8e)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` | Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a228c3e38e4415be9726af0c178e568a8)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` | Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a3da2b907ea4152282a0c8e107b1ce950)`()` | Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1afab9bed2942fc1c3bac213bd7b49d80c)`() const` | Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a7b2dfce611d890b93bd262c6e0cbd2bd)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` | Sets the value of After_Optional and also sets After_IsSet to true.
`public inline FORCEINLINE void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a1fc0a6a7a507a6ab33b62a22f4e525f5)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` | Sets the value of After_Optional and also sets After_IsSet to true using move semantics.
`public inline void `[`ClearAfter`](#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)`()` | Clears the value of After_Optional and sets After_IsSet to false.
`public inline FORCEINLINE void `[`SetAfterToNull`](#structFRHAPI__PlayerInventoryChange_1a790b12671c6143922c33e53fce58c9d4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsAfterNull`](#structFRHAPI__PlayerInventoryChange_1a743b129c2959a89ab0ebf746fc83cfa4)`() const` | Checks whether After_Optional is set to null.

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

#### `public inline FORCEINLINE int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a13052ae9d6ab86892c8b9f3b69a1b99e)`()` <a id="structFRHAPI__PlayerInventoryChange_1a13052ae9d6ab86892c8b9f3b69a1b99e"></a>

Gets the value of BeforeItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a294a471b807c9f2a29c6492c334bbd3c)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a294a471b807c9f2a29c6492c334bbd3c"></a>

Gets the value of BeforeItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a290c4dce9f14574a80926d19af357932)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a290c4dce9f14574a80926d19af357932"></a>

Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a369d3833320c31bccb1e38e1b0e6928d)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a369d3833320c31bccb1e38e1b0e6928d"></a>

Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a998ac168e5074bcb87a107f17ca98d11)`()` <a id="structFRHAPI__PlayerInventoryChange_1a998ac168e5074bcb87a107f17ca98d11"></a>

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a9288e0feb151f94ea0befde72e14bd4d)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a9288e0feb151f94ea0befde72e14bd4d"></a>

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a21e26d70911ce679e0d7326396a3cdf3)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a21e26d70911ce679e0d7326396a3cdf3"></a>

Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a4f24dfbb9df772444c66f86f5d75af39)`(int32 && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a4f24dfbb9df772444c66f86f5d75af39"></a>

Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)`()` <a id="structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552"></a>

Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_BeforeItemId`](#structFRHAPI__PlayerInventoryChange_1aaca02db48d733126961db1da8ec495a3)`()` <a id="structFRHAPI__PlayerInventoryChange_1aaca02db48d733126961db1da8ec495a3"></a>

Returns the default value of BeforeItemId.

#### `public inline FORCEINLINE void `[`SetBeforeItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1a3ea56b91b6381b243980235f166f650a)`()` <a id="structFRHAPI__PlayerInventoryChange_1a3ea56b91b6381b243980235f166f650a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsBeforeItemIdNull`](#structFRHAPI__PlayerInventoryChange_1aa34f632ed0435d803ed801f88376778f)`() const` <a id="structFRHAPI__PlayerInventoryChange_1aa34f632ed0435d803ed801f88376778f"></a>

Checks whether BeforeItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a40115660de00d4dbcbf9a8b8f344b42e)`()` <a id="structFRHAPI__PlayerInventoryChange_1a40115660de00d4dbcbf9a8b8f344b42e"></a>

Gets the value of AfterItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a79c6d48c3349d99db7abb2130f839986)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a79c6d48c3349d99db7abb2130f839986"></a>

Gets the value of AfterItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a7afd91b96b9975f9acc8c6d8b85dbaa3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a7afd91b96b9975f9acc8c6d8b85dbaa3"></a>

Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a158b394311cbfd4a360e919992be4c5c)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a158b394311cbfd4a360e919992be4c5c"></a>

Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1acb69dd77b072aa5e48b8084f144e851e)`()` <a id="structFRHAPI__PlayerInventoryChange_1acb69dd77b072aa5e48b8084f144e851e"></a>

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1aa3157287b3e7227c753bfab68ae212e0)`() const` <a id="structFRHAPI__PlayerInventoryChange_1aa3157287b3e7227c753bfab68ae212e0"></a>

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a87b292ad8acfa9119e38d9ac95a7a10a)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a87b292ad8acfa9119e38d9ac95a7a10a"></a>

Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a63417bcec1cda39adfcb64c1a16276ad)`(int32 && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a63417bcec1cda39adfcb64c1a16276ad"></a>

Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)`()` <a id="structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5"></a>

Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_AfterItemId`](#structFRHAPI__PlayerInventoryChange_1abe1bfb5d449bc2d524820b09139e080f)`()` <a id="structFRHAPI__PlayerInventoryChange_1abe1bfb5d449bc2d524820b09139e080f"></a>

Returns the default value of AfterItemId.

#### `public inline FORCEINLINE void `[`SetAfterItemIdToNull`](#structFRHAPI__PlayerInventoryChange_1a951c9e05f23e1befb9834a3ff2c7cdd4)`()` <a id="structFRHAPI__PlayerInventoryChange_1a951c9e05f23e1befb9834a3ff2c7cdd4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsAfterItemIdNull`](#structFRHAPI__PlayerInventoryChange_1a0efd09c98284734208b60605f6c2b491)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a0efd09c98284734208b60605f6c2b491"></a>

Checks whether AfterItemId_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a608d1e3cefdf55791c667114ee99b34d)`()` <a id="structFRHAPI__PlayerInventoryChange_1a608d1e3cefdf55791c667114ee99b34d"></a>

Gets the value of Before_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ac3b07b86c352b497785bc7f03ec3cc08)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ac3b07b86c352b497785bc7f03ec3cc08"></a>

Gets the value of Before_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1aa5962ec4ff379eb0ca8488fb7a02491d)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1aa5962ec4ff379eb0ca8488fb7a02491d"></a>

Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ac5e5ec614717d783d9d5ac1c231d6450)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1ac5e5ec614717d783d9d5ac1c231d6450"></a>

Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1add7a3f9ddd08cb7c73e82ae6367a363a)`()` <a id="structFRHAPI__PlayerInventoryChange_1add7a3f9ddd08cb7c73e82ae6367a363a"></a>

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1af0f4b3b37a48455e30a324672477f9e8)`() const` <a id="structFRHAPI__PlayerInventoryChange_1af0f4b3b37a48455e30a324672477f9e8"></a>

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1adfcc1e1eff8c60e99b4e38690275914a)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1adfcc1e1eff8c60e99b4e38690275914a"></a>

Sets the value of Before_Optional and also sets Before_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1a1fe504e307edd568ba1b03d461ba06a1)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a1fe504e307edd568ba1b03d461ba06a1"></a>

Sets the value of Before_Optional and also sets Before_IsSet to true using move semantics.

#### `public inline void `[`ClearBefore`](#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)`()` <a id="structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504"></a>

Clears the value of Before_Optional and sets Before_IsSet to false.

#### `public inline FORCEINLINE void `[`SetBeforeToNull`](#structFRHAPI__PlayerInventoryChange_1a5f0ee088c5acbbb25e639121842ccdf0)`()` <a id="structFRHAPI__PlayerInventoryChange_1a5f0ee088c5acbbb25e639121842ccdf0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsBeforeNull`](#structFRHAPI__PlayerInventoryChange_1a7a05b77eed5ecd5b5164aed125d3db4b)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a7a05b77eed5ecd5b5164aed125d3db4b"></a>

Checks whether Before_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a740d2f25300d8074bdf11a3ee158b551)`()` <a id="structFRHAPI__PlayerInventoryChange_1a740d2f25300d8074bdf11a3ee158b551"></a>

Gets the value of After_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1ae02ccd84371fe5fdd4daf14d8ddda4b4)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ae02ccd84371fe5fdd4daf14d8ddda4b4"></a>

Gets the value of After_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a01ce1aba251e395ed53ce2bde79bbd8e)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a01ce1aba251e395ed53ce2bde79bbd8e"></a>

Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a228c3e38e4415be9726af0c178e568a8)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a228c3e38e4415be9726af0c178e568a8"></a>

Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a3da2b907ea4152282a0c8e107b1ce950)`()` <a id="structFRHAPI__PlayerInventoryChange_1a3da2b907ea4152282a0c8e107b1ce950"></a>

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1afab9bed2942fc1c3bac213bd7b49d80c)`() const` <a id="structFRHAPI__PlayerInventoryChange_1afab9bed2942fc1c3bac213bd7b49d80c"></a>

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a7b2dfce611d890b93bd262c6e0cbd2bd)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a7b2dfce611d890b93bd262c6e0cbd2bd"></a>

Sets the value of After_Optional and also sets After_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a1fc0a6a7a507a6ab33b62a22f4e525f5)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` && NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a1fc0a6a7a507a6ab33b62a22f4e525f5"></a>

Sets the value of After_Optional and also sets After_IsSet to true using move semantics.

#### `public inline void `[`ClearAfter`](#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)`()` <a id="structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3"></a>

Clears the value of After_Optional and sets After_IsSet to false.

#### `public inline FORCEINLINE void `[`SetAfterToNull`](#structFRHAPI__PlayerInventoryChange_1a790b12671c6143922c33e53fce58c9d4)`()` <a id="structFRHAPI__PlayerInventoryChange_1a790b12671c6143922c33e53fce58c9d4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsAfterNull`](#structFRHAPI__PlayerInventoryChange_1a743b129c2959a89ab0ebf746fc83cfa4)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a743b129c2959a89ab0ebf746fc83cfa4"></a>

Checks whether After_Optional is set to null.

