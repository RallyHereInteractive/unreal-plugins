# RHAPI_PlayerInventoryChange <a id="group__RHAPI__PlayerInventoryChange"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`BeforeItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d) | The Item ID of the Item before the change.
`public bool `[`BeforeItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec) | true if BeforeItemId_Optional has been set to a value
`public int32 `[`AfterItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f) | The Item ID of the Item after the change.
`public bool `[`AfterItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983) | true if AfterItemId_Optional has been set to a value
`public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`Before_Optional`](#structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7) | 
`public bool `[`Before_IsSet`](#structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298) | true if Before_Optional has been set to a value
`public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`After_Optional`](#structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269) | 
`public bool `[`After_IsSet`](#structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e) | true if After_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerInventoryChange_1a420c59fa00f220dcf8a9d37e49b16bbe)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerInventoryChange_1a275bc792850cfcc0802d385e99e1924f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1aff06181d46709cbd96633f9702171c3a)`()` | Gets the value of BeforeItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a247720da5a0383bddbc7dbbf336bc34e)`() const` | Gets the value of BeforeItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a66af782728924ca5fa9185ff1112b171)`(const int32 & DefaultValue) const` | Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82)`(int32 & OutValue) const` | Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a2cdb97d2549cb2c59d7ce1a5cba038fc)`()` | Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1aeed5bb600ca6056614ea4e2d061c0ba2)`() const` | Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a1f9a76130fa65889ff4b0e30ecfcb88a)`(int32 NewValue)` | Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.
`public inline void `[`ClearBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)`()` | Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.
`public inline bool `[`IsBeforeItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a)`() const` | Returns true if BeforeItemId_Optional is set and matches the default value.
`public inline void `[`SetBeforeItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4)`()` | Sets the value of BeforeItemId_Optional to its default and also sets BeforeItemId_IsSet to true.
`public inline int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1ae80c29566122a2d53a57d696eac7baf8)`()` | Gets the value of AfterItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a0487329713b8c3190065db3b51eaf858)`() const` | Gets the value of AfterItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a892ab658572edbf813cf4d550be64573)`(const int32 & DefaultValue) const` | Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c)`(int32 & OutValue) const` | Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a694649c5ea96129450d5356a469443fa)`()` | Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1aac199f6e29d9632045cb4035a22bc914)`() const` | Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1af2fb22253cd9543dc214cf2b9cb95239)`(int32 NewValue)` | Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.
`public inline void `[`ClearAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)`()` | Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.
`public inline bool `[`IsAfterItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1)`() const` | Returns true if AfterItemId_Optional is set and matches the default value.
`public inline void `[`SetAfterItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d)`()` | Sets the value of AfterItemId_Optional to its default and also sets AfterItemId_IsSet to true.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a797f4714a657aeb266a7d907547772d5)`()` | Gets the value of Before_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ae88e7a8cf23b0087e863a72f600a532d)`() const` | Gets the value of Before_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ab8f85c4123cc9b1430c9e3026551792f)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` | Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` | Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1afc6dcc539499d547ec68e5b3e441c402)`()` | Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1ac1777bcf700b94db7b0b44b35cf79769)`() const` | Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1a9db525e976342f27f6c2232bc4f5d5ab)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` NewValue)` | Sets the value of Before_Optional and also sets Before_IsSet to true.
`public inline void `[`ClearBefore`](#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)`()` | Clears the value of Before_Optional and sets Before_IsSet to false.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a328d895347a97c41be4780aeeb25a194)`()` | Gets the value of After_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a71268bb7097956f42795dc267fd34e2f)`() const` | Gets the value of After_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1ac44ce6d7d25b6b414c70962918353165)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` | Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` | Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1abdaf58dea3e967035331a844c83b6534)`()` | Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a81cb6f5182816722ac5c68039071a084)`() const` | Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a2b8f321a74ce91e14b5ff9a2fdfac4ca)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` NewValue)` | Sets the value of After_Optional and also sets After_IsSet to true.
`public inline void `[`ClearAfter`](#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)`()` | Clears the value of After_Optional and sets After_IsSet to false.

#### Members

#### `public int32 `[`BeforeItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d) <a id="structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d"></a>

The Item ID of the Item before the change.

<br>
#### `public bool `[`BeforeItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec) <a id="structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec"></a>

true if BeforeItemId_Optional has been set to a value

<br>
#### `public int32 `[`AfterItemId_Optional`](#structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f) <a id="structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f"></a>

The Item ID of the Item after the change.

<br>
#### `public bool `[`AfterItemId_IsSet`](#structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983) <a id="structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983"></a>

true if AfterItemId_Optional has been set to a value

<br>
#### `public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`Before_Optional`](#structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7) <a id="structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7"></a>

<br>
#### `public bool `[`Before_IsSet`](#structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298) <a id="structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298"></a>

true if Before_Optional has been set to a value

<br>
#### `public `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` `[`After_Optional`](#structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269) <a id="structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269"></a>

<br>
#### `public bool `[`After_IsSet`](#structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e) <a id="structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e"></a>

true if After_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerInventoryChange_1a420c59fa00f220dcf8a9d37e49b16bbe)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerInventoryChange_1a420c59fa00f220dcf8a9d37e49b16bbe"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerInventoryChange_1a275bc792850cfcc0802d385e99e1924f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerInventoryChange_1a275bc792850cfcc0802d385e99e1924f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1aff06181d46709cbd96633f9702171c3a)`()` <a id="structFRHAPI__PlayerInventoryChange_1aff06181d46709cbd96633f9702171c3a"></a>

Gets the value of BeforeItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a247720da5a0383bddbc7dbbf336bc34e)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a247720da5a0383bddbc7dbbf336bc34e"></a>

Gets the value of BeforeItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a66af782728924ca5fa9185ff1112b171)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a66af782728924ca5fa9185ff1112b171"></a>

Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82"></a>

Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a2cdb97d2549cb2c59d7ce1a5cba038fc)`()` <a id="structFRHAPI__PlayerInventoryChange_1a2cdb97d2549cb2c59d7ce1a5cba038fc"></a>

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetBeforeItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1aeed5bb600ca6056614ea4e2d061c0ba2)`() const` <a id="structFRHAPI__PlayerInventoryChange_1aeed5bb600ca6056614ea4e2d061c0ba2"></a>

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1a1f9a76130fa65889ff4b0e30ecfcb88a)`(int32 NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a1f9a76130fa65889ff4b0e30ecfcb88a"></a>

Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.

<br>
#### `public inline void `[`ClearBeforeItemId`](#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)`()` <a id="structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552"></a>

Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.

<br>
#### `public inline bool `[`IsBeforeItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a"></a>

Returns true if BeforeItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetBeforeItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4)`()` <a id="structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4"></a>

Sets the value of BeforeItemId_Optional to its default and also sets BeforeItemId_IsSet to true.

<br>
#### `public inline int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1ae80c29566122a2d53a57d696eac7baf8)`()` <a id="structFRHAPI__PlayerInventoryChange_1ae80c29566122a2d53a57d696eac7baf8"></a>

Gets the value of AfterItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a0487329713b8c3190065db3b51eaf858)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a0487329713b8c3190065db3b51eaf858"></a>

Gets the value of AfterItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a892ab658572edbf813cf4d550be64573)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a892ab658572edbf813cf4d550be64573"></a>

Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c"></a>

Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1a694649c5ea96129450d5356a469443fa)`()` <a id="structFRHAPI__PlayerInventoryChange_1a694649c5ea96129450d5356a469443fa"></a>

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetAfterItemIdOrNull`](#structFRHAPI__PlayerInventoryChange_1aac199f6e29d9632045cb4035a22bc914)`() const` <a id="structFRHAPI__PlayerInventoryChange_1aac199f6e29d9632045cb4035a22bc914"></a>

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAfterItemId`](#structFRHAPI__PlayerInventoryChange_1af2fb22253cd9543dc214cf2b9cb95239)`(int32 NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1af2fb22253cd9543dc214cf2b9cb95239"></a>

Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.

<br>
#### `public inline void `[`ClearAfterItemId`](#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)`()` <a id="structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5"></a>

Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.

<br>
#### `public inline bool `[`IsAfterItemIdDefaultValue`](#structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1"></a>

Returns true if AfterItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetAfterItemIdToDefault`](#structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d)`()` <a id="structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d"></a>

Sets the value of AfterItemId_Optional to its default and also sets AfterItemId_IsSet to true.

<br>
#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a797f4714a657aeb266a7d907547772d5)`()` <a id="structFRHAPI__PlayerInventoryChange_1a797f4714a657aeb266a7d907547772d5"></a>

Gets the value of Before_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ae88e7a8cf23b0087e863a72f600a532d)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ae88e7a8cf23b0087e863a72f600a532d"></a>

Gets the value of Before_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1ab8f85c4123cc9b1430c9e3026551792f)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1ab8f85c4123cc9b1430c9e3026551792f"></a>

Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetBefore`](#structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37"></a>

Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1afc6dcc539499d547ec68e5b3e441c402)`()` <a id="structFRHAPI__PlayerInventoryChange_1afc6dcc539499d547ec68e5b3e441c402"></a>

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetBeforeOrNull`](#structFRHAPI__PlayerInventoryChange_1ac1777bcf700b94db7b0b44b35cf79769)`() const` <a id="structFRHAPI__PlayerInventoryChange_1ac1777bcf700b94db7b0b44b35cf79769"></a>

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetBefore`](#structFRHAPI__PlayerInventoryChange_1a9db525e976342f27f6c2232bc4f5d5ab)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a9db525e976342f27f6c2232bc4f5d5ab"></a>

Sets the value of Before_Optional and also sets Before_IsSet to true.

<br>
#### `public inline void `[`ClearBefore`](#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)`()` <a id="structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504"></a>

Clears the value of Before_Optional and sets Before_IsSet to false.

<br>
#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a328d895347a97c41be4780aeeb25a194)`()` <a id="structFRHAPI__PlayerInventoryChange_1a328d895347a97c41be4780aeeb25a194"></a>

Gets the value of After_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a71268bb7097956f42795dc267fd34e2f)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a71268bb7097956f42795dc267fd34e2f"></a>

Gets the value of After_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1ac44ce6d7d25b6b414c70962918353165)`(const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & DefaultValue) const` <a id="structFRHAPI__PlayerInventoryChange_1ac44ce6d7d25b6b414c70962918353165"></a>

Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAfter`](#structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & OutValue) const` <a id="structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732"></a>

Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1abdaf58dea3e967035331a844c83b6534)`()` <a id="structFRHAPI__PlayerInventoryChange_1abdaf58dea3e967035331a844c83b6534"></a>

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` * `[`GetAfterOrNull`](#structFRHAPI__PlayerInventoryChange_1a81cb6f5182816722ac5c68039071a084)`() const` <a id="structFRHAPI__PlayerInventoryChange_1a81cb6f5182816722ac5c68039071a084"></a>

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAfter`](#structFRHAPI__PlayerInventoryChange_1a2b8f321a74ce91e14b5ff9a2fdfac4ca)`(`[`FRHAPI_InventoryRecord`](RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` NewValue)` <a id="structFRHAPI__PlayerInventoryChange_1a2b8f321a74ce91e14b5ff9a2fdfac4ca"></a>

Sets the value of After_Optional and also sets After_IsSet to true.

<br>
#### `public inline void `[`ClearAfter`](#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)`()` <a id="structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3"></a>

Clears the value of After_Optional and sets After_IsSet to false.

<br>
