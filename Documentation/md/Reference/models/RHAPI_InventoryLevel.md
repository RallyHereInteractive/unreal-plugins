---
title: RHAPI_InventoryLevel
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryLevel`](#structFRHAPI__InventoryLevel) | 

## struct `FRHAPI_InventoryLevel` <a id="structFRHAPI__InventoryLevel"></a>

```
struct FRHAPI_InventoryLevel
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`ItemUuid`](#structFRHAPI__InventoryLevel_1a25e5ac67b415e1c3d564c4b271a8027c) | Item UUID for this Inventory Level.
`public int32 `[`ItemId_Optional`](#structFRHAPI__InventoryLevel_1a032ab73c9af91959835aa6cd48351381) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__InventoryLevel_1a1ddf1bbffd0aee35ba8c17a54573463e) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__InventoryLevel_1aa4b9543ddfbe2c26012a006b13a47c00) | true if ItemId_Optional has been explicitly set to null
`public int32 `[`Level`](#structFRHAPI__InventoryLevel_1a03437c0bcebbcd26ef132ab25357ef3d) | Current Level.
`public int32 `[`Count`](#structFRHAPI__InventoryLevel_1a4643b03ef0f1fbd190d941f01088fdcb) | Current quantity.
`public int32 `[`CountForNextLevel`](#structFRHAPI__InventoryLevel_1ad81eff4d836fc895fa7ab105d966848a) | Quantity required for the next level.
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryLevel_1a9fd00215d353c46c23d9162d0bfd028d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevel_1a66e98c0bf1c8c03c49916689279f8a59)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1a3f1d3bd6b1aeab555f8bc824fbf434b0)`()` | Gets the value of ItemUuid.
`public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1afb75ebea332863f2000539182204b590)`() const` | Gets the value of ItemUuid.
`public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1a38a9ab6e71579c9fc83346f7bdb85006)`(const FGuid & NewValue)` | Sets the value of ItemUuid.
`public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1a8749b12d6986f79773b4ccd76d9b93c6)`(FGuid && NewValue)` | Sets the value of ItemUuid using move semantics.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1af162d6912c8e5ea6156029ed0fd3cb81)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a385276714ecdcbc7f8e18036b56adad1)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a1c627123bcdb05acb4c6d3918e25dea8)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__InventoryLevel_1a6afd36e34e8cf0684c7c28ec00b6c628)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a2aecd85488d780609dcdee1a7ebf1c25)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a78686c2859160744d540f4db3ec27012)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__InventoryLevel_1a027de5b789d25f5591ae5ea04cfc92b0)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__InventoryLevel_1a8c161f3779de7b8416e0c23fa361e3ea)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__InventoryLevel_1a23e1f5914e9b3b6544a15b50cfd57002)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__InventoryLevel_1aab3448ba71d8a97dcb42f94622396225)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__InventoryLevel_1a64beee5081565bb00ce3654e2b03c69c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__InventoryLevel_1acfa0f321e184fbe4f9b7c2938182879b)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1ac6d9645176d6fc089b7188cec40d78db)`()` | Gets the value of Level.
`public inline FORCEINLINE const int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1aa83916e31b4a4dbaa2dc459e33fcc8de)`() const` | Gets the value of Level.
`public inline FORCEINLINE void `[`SetLevel`](#structFRHAPI__InventoryLevel_1a04e570e61e32d1acdd48b839dbdf3a52)`(const int32 & NewValue)` | Sets the value of Level.
`public inline FORCEINLINE void `[`SetLevel`](#structFRHAPI__InventoryLevel_1ac1ceb240da9617ccc9d4f08d48491393)`(int32 && NewValue)` | Sets the value of Level using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Level`](#structFRHAPI__InventoryLevel_1a50497eb94ea2f4b4cfd0e3df10cc0c9d)`()` | Returns the default value of Level.
`public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1ae4be204898009fbdc5835bfed6200856)`()` | Gets the value of Count.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1a25393bb5db63c3241bca719446f0ac22)`() const` | Gets the value of Count.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryLevel_1ad1361dc599c180a2c75d209764cc0522)`(const int32 & NewValue)` | Sets the value of Count.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryLevel_1a6b7aa4c2d114f4834118cf94b0bb52d7)`(int32 && NewValue)` | Sets the value of Count using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__InventoryLevel_1add59e4f01ee5e13d685bd4cf818d71ce)`()` | Returns the default value of Count.
`public inline FORCEINLINE int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1aba5149b34fb2e18078766dc08ceb9a33)`()` | Gets the value of CountForNextLevel.
`public inline FORCEINLINE const int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a794e54a242ac11baea9f05657d7665dc)`() const` | Gets the value of CountForNextLevel.
`public inline FORCEINLINE void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a114d2d0c1d3dd19bd5c75d2dfb493685)`(const int32 & NewValue)` | Sets the value of CountForNextLevel.
`public inline FORCEINLINE void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a89e0c98e3dcddb6394a37671ce1b81b2)`(int32 && NewValue)` | Sets the value of CountForNextLevel using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_CountForNextLevel`](#structFRHAPI__InventoryLevel_1a83f040f636997bb6c4f7c0a65b4408b5)`()` | Returns the default value of CountForNextLevel.

### Members

#### `public FGuid `[`ItemUuid`](#structFRHAPI__InventoryLevel_1a25e5ac67b415e1c3d564c4b271a8027c) <a id="structFRHAPI__InventoryLevel_1a25e5ac67b415e1c3d564c4b271a8027c"></a>

Item UUID for this Inventory Level.

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__InventoryLevel_1a032ab73c9af91959835aa6cd48351381) <a id="structFRHAPI__InventoryLevel_1a032ab73c9af91959835aa6cd48351381"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__InventoryLevel_1a1ddf1bbffd0aee35ba8c17a54573463e) <a id="structFRHAPI__InventoryLevel_1a1ddf1bbffd0aee35ba8c17a54573463e"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__InventoryLevel_1aa4b9543ddfbe2c26012a006b13a47c00) <a id="structFRHAPI__InventoryLevel_1aa4b9543ddfbe2c26012a006b13a47c00"></a>

true if ItemId_Optional has been explicitly set to null

#### `public int32 `[`Level`](#structFRHAPI__InventoryLevel_1a03437c0bcebbcd26ef132ab25357ef3d) <a id="structFRHAPI__InventoryLevel_1a03437c0bcebbcd26ef132ab25357ef3d"></a>

Current Level.

#### `public int32 `[`Count`](#structFRHAPI__InventoryLevel_1a4643b03ef0f1fbd190d941f01088fdcb) <a id="structFRHAPI__InventoryLevel_1a4643b03ef0f1fbd190d941f01088fdcb"></a>

Current quantity.

#### `public int32 `[`CountForNextLevel`](#structFRHAPI__InventoryLevel_1ad81eff4d836fc895fa7ab105d966848a) <a id="structFRHAPI__InventoryLevel_1ad81eff4d836fc895fa7ab105d966848a"></a>

Quantity required for the next level.

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryLevel_1a9fd00215d353c46c23d9162d0bfd028d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryLevel_1a9fd00215d353c46c23d9162d0bfd028d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevel_1a66e98c0bf1c8c03c49916689279f8a59)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryLevel_1a66e98c0bf1c8c03c49916689279f8a59"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1a3f1d3bd6b1aeab555f8bc824fbf434b0)`()` <a id="structFRHAPI__InventoryLevel_1a3f1d3bd6b1aeab555f8bc824fbf434b0"></a>

Gets the value of ItemUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1afb75ebea332863f2000539182204b590)`() const` <a id="structFRHAPI__InventoryLevel_1afb75ebea332863f2000539182204b590"></a>

Gets the value of ItemUuid.

#### `public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1a38a9ab6e71579c9fc83346f7bdb85006)`(const FGuid & NewValue)` <a id="structFRHAPI__InventoryLevel_1a38a9ab6e71579c9fc83346f7bdb85006"></a>

Sets the value of ItemUuid.

#### `public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1a8749b12d6986f79773b4ccd76d9b93c6)`(FGuid && NewValue)` <a id="structFRHAPI__InventoryLevel_1a8749b12d6986f79773b4ccd76d9b93c6"></a>

Sets the value of ItemUuid using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1af162d6912c8e5ea6156029ed0fd3cb81)`()` <a id="structFRHAPI__InventoryLevel_1af162d6912c8e5ea6156029ed0fd3cb81"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a385276714ecdcbc7f8e18036b56adad1)`() const` <a id="structFRHAPI__InventoryLevel_1a385276714ecdcbc7f8e18036b56adad1"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a1c627123bcdb05acb4c6d3918e25dea8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InventoryLevel_1a1c627123bcdb05acb4c6d3918e25dea8"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__InventoryLevel_1a6afd36e34e8cf0684c7c28ec00b6c628)`(int32 & OutValue) const` <a id="structFRHAPI__InventoryLevel_1a6afd36e34e8cf0684c7c28ec00b6c628"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a2aecd85488d780609dcdee1a7ebf1c25)`()` <a id="structFRHAPI__InventoryLevel_1a2aecd85488d780609dcdee1a7ebf1c25"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a78686c2859160744d540f4db3ec27012)`() const` <a id="structFRHAPI__InventoryLevel_1a78686c2859160744d540f4db3ec27012"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__InventoryLevel_1a027de5b789d25f5591ae5ea04cfc92b0)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1a027de5b789d25f5591ae5ea04cfc92b0"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__InventoryLevel_1a8c161f3779de7b8416e0c23fa361e3ea)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1a8c161f3779de7b8416e0c23fa361e3ea"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__InventoryLevel_1a23e1f5914e9b3b6544a15b50cfd57002)`()` <a id="structFRHAPI__InventoryLevel_1a23e1f5914e9b3b6544a15b50cfd57002"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__InventoryLevel_1aab3448ba71d8a97dcb42f94622396225)`()` <a id="structFRHAPI__InventoryLevel_1aab3448ba71d8a97dcb42f94622396225"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__InventoryLevel_1a64beee5081565bb00ce3654e2b03c69c)`()` <a id="structFRHAPI__InventoryLevel_1a64beee5081565bb00ce3654e2b03c69c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__InventoryLevel_1acfa0f321e184fbe4f9b7c2938182879b)`() const` <a id="structFRHAPI__InventoryLevel_1acfa0f321e184fbe4f9b7c2938182879b"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1ac6d9645176d6fc089b7188cec40d78db)`()` <a id="structFRHAPI__InventoryLevel_1ac6d9645176d6fc089b7188cec40d78db"></a>

Gets the value of Level.

#### `public inline FORCEINLINE const int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1aa83916e31b4a4dbaa2dc459e33fcc8de)`() const` <a id="structFRHAPI__InventoryLevel_1aa83916e31b4a4dbaa2dc459e33fcc8de"></a>

Gets the value of Level.

#### `public inline FORCEINLINE void `[`SetLevel`](#structFRHAPI__InventoryLevel_1a04e570e61e32d1acdd48b839dbdf3a52)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1a04e570e61e32d1acdd48b839dbdf3a52"></a>

Sets the value of Level.

#### `public inline FORCEINLINE void `[`SetLevel`](#structFRHAPI__InventoryLevel_1ac1ceb240da9617ccc9d4f08d48491393)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1ac1ceb240da9617ccc9d4f08d48491393"></a>

Sets the value of Level using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Level`](#structFRHAPI__InventoryLevel_1a50497eb94ea2f4b4cfd0e3df10cc0c9d)`()` <a id="structFRHAPI__InventoryLevel_1a50497eb94ea2f4b4cfd0e3df10cc0c9d"></a>

Returns the default value of Level.

#### `public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1ae4be204898009fbdc5835bfed6200856)`()` <a id="structFRHAPI__InventoryLevel_1ae4be204898009fbdc5835bfed6200856"></a>

Gets the value of Count.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1a25393bb5db63c3241bca719446f0ac22)`() const` <a id="structFRHAPI__InventoryLevel_1a25393bb5db63c3241bca719446f0ac22"></a>

Gets the value of Count.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryLevel_1ad1361dc599c180a2c75d209764cc0522)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1ad1361dc599c180a2c75d209764cc0522"></a>

Sets the value of Count.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryLevel_1a6b7aa4c2d114f4834118cf94b0bb52d7)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1a6b7aa4c2d114f4834118cf94b0bb52d7"></a>

Sets the value of Count using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__InventoryLevel_1add59e4f01ee5e13d685bd4cf818d71ce)`()` <a id="structFRHAPI__InventoryLevel_1add59e4f01ee5e13d685bd4cf818d71ce"></a>

Returns the default value of Count.

#### `public inline FORCEINLINE int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1aba5149b34fb2e18078766dc08ceb9a33)`()` <a id="structFRHAPI__InventoryLevel_1aba5149b34fb2e18078766dc08ceb9a33"></a>

Gets the value of CountForNextLevel.

#### `public inline FORCEINLINE const int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a794e54a242ac11baea9f05657d7665dc)`() const` <a id="structFRHAPI__InventoryLevel_1a794e54a242ac11baea9f05657d7665dc"></a>

Gets the value of CountForNextLevel.

#### `public inline FORCEINLINE void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a114d2d0c1d3dd19bd5c75d2dfb493685)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1a114d2d0c1d3dd19bd5c75d2dfb493685"></a>

Sets the value of CountForNextLevel.

#### `public inline FORCEINLINE void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a89e0c98e3dcddb6394a37671ce1b81b2)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1a89e0c98e3dcddb6394a37671ce1b81b2"></a>

Sets the value of CountForNextLevel using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_CountForNextLevel`](#structFRHAPI__InventoryLevel_1a83f040f636997bb6c4f7c0a65b4408b5)`()` <a id="structFRHAPI__InventoryLevel_1a83f040f636997bb6c4f7c0a65b4408b5"></a>

Returns the default value of CountForNextLevel.

