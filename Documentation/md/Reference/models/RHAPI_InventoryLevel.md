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
`public int32 `[`ItemId_Optional`](#structFRHAPI__InventoryLevel_1a032ab73c9af91959835aa6cd48351381) | Item ID for this Inventory Level.
`public bool `[`ItemId_IsSet`](#structFRHAPI__InventoryLevel_1a1ddf1bbffd0aee35ba8c17a54573463e) | true if ItemId_Optional has been set to a value
`public int32 `[`Level`](#structFRHAPI__InventoryLevel_1a03437c0bcebbcd26ef132ab25357ef3d) | Current Level.
`public int32 `[`Count`](#structFRHAPI__InventoryLevel_1a4643b03ef0f1fbd190d941f01088fdcb) | Current quantity.
`public int32 `[`CountForNextLevel`](#structFRHAPI__InventoryLevel_1ad81eff4d836fc895fa7ab105d966848a) | Quantity required for the next level.
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryLevel_1a9fd00215d353c46c23d9162d0bfd028d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevel_1a66e98c0bf1c8c03c49916689279f8a59)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1a058e7f12ac9289c1649e29b75d5ee644)`()` | Gets the value of ItemUuid.
`public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1a5faeaf5b6d25fc8bd46db0aacde8d017)`() const` | Gets the value of ItemUuid.
`public inline void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1afa5c4cf6a2ff7e1c1572b20bd34c92a3)`(const FGuid & NewValue)` | Sets the value of ItemUuid.
`public inline void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1aa1c19c9a755d92711c707e4de7162187)`(FGuid && NewValue)` | Sets the value of ItemUuid using move semantics.
`public inline int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a47d16cef6b0b4069d168eec06ad52adc)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a7a2c03a7fbe5bbcea6ad19c8fcebd914)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1aa81719136d1f894452c0235fa42f9433)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__InventoryLevel_1ad1125a8a1ee28b499afb44e65ac4a94a)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a6e64e241ac5d88478276660c437543b7)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a2c65b1eb9f0d1f698f9e5070f470e38d)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__InventoryLevel_1a31402f6405a381fca7ec8e8f1c81df8e)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__InventoryLevel_1ab8e20195e76ff42d3f4a8f43fb7bbfb8)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__InventoryLevel_1a23e1f5914e9b3b6544a15b50cfd57002)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__InventoryLevel_1abacd2f218c4c155a34c3a490ec8936fc)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__InventoryLevel_1af3926ae11337314929e934d92661573c)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__InventoryLevel_1a82349b5435ca6231ba9ecc6d3b4d58c4)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1a65bb4122bc6364952d85d4e1c77d1a0e)`()` | Gets the value of Level.
`public inline const int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1a032d18379b8c9f3f4c6f7d497367cb4d)`() const` | Gets the value of Level.
`public inline void `[`SetLevel`](#structFRHAPI__InventoryLevel_1ac61dc72dea5118abfd008a1e6ba72224)`(const int32 & NewValue)` | Sets the value of Level.
`public inline void `[`SetLevel`](#structFRHAPI__InventoryLevel_1aab984feba8ef05c3f43076189eba4f1e)`(int32 && NewValue)` | Sets the value of Level using move semantics.
`public inline bool `[`IsLevelDefaultValue`](#structFRHAPI__InventoryLevel_1aea060cd9661c3282180c4591f7e9bda1)`() const` | Returns true if Level matches the default value.
`public inline void `[`SetLevelToDefault`](#structFRHAPI__InventoryLevel_1ade903272bff91f6418625ec9127698f6)`()` | Sets the value of Level to its default
`public inline int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1a824a663d7c1b7e21e044f52cbe9b0b71)`()` | Gets the value of Count.
`public inline const int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1a8b8ed69a1178015129b9684dbfdefae0)`() const` | Gets the value of Count.
`public inline void `[`SetCount`](#structFRHAPI__InventoryLevel_1a0c9ea526f1f579a455297ddcc40c6a2e)`(const int32 & NewValue)` | Sets the value of Count.
`public inline void `[`SetCount`](#structFRHAPI__InventoryLevel_1a469c6c07b8d0b66fed1b5d84a5dc4480)`(int32 && NewValue)` | Sets the value of Count using move semantics.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__InventoryLevel_1a886cbae6a89e530330bb558c07660a10)`() const` | Returns true if Count matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__InventoryLevel_1a16800bade4db5a661e6b7f0afbf70a8f)`()` | Sets the value of Count to its default
`public inline int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a31bb4b53483c36f575d1832fa4b5e3ea)`()` | Gets the value of CountForNextLevel.
`public inline const int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1ae2922efc1c683e8285ee03c5814f8086)`() const` | Gets the value of CountForNextLevel.
`public inline void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a67d6317a8ce6dba7033839d15d9bdc32)`(const int32 & NewValue)` | Sets the value of CountForNextLevel.
`public inline void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a79d636d2cbeddffa160e0b324c6f683a)`(int32 && NewValue)` | Sets the value of CountForNextLevel using move semantics.
`public inline bool `[`IsCountForNextLevelDefaultValue`](#structFRHAPI__InventoryLevel_1ab258eaf6084cb35445498fd250bee39d)`() const` | Returns true if CountForNextLevel matches the default value.
`public inline void `[`SetCountForNextLevelToDefault`](#structFRHAPI__InventoryLevel_1a52d1669eb7060c7f72ce1df564f1065e)`()` | Sets the value of CountForNextLevel to its default

### Members

#### `public FGuid `[`ItemUuid`](#structFRHAPI__InventoryLevel_1a25e5ac67b415e1c3d564c4b271a8027c) <a id="structFRHAPI__InventoryLevel_1a25e5ac67b415e1c3d564c4b271a8027c"></a>

Item UUID for this Inventory Level.

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__InventoryLevel_1a032ab73c9af91959835aa6cd48351381) <a id="structFRHAPI__InventoryLevel_1a032ab73c9af91959835aa6cd48351381"></a>

Item ID for this Inventory Level.

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__InventoryLevel_1a1ddf1bbffd0aee35ba8c17a54573463e) <a id="structFRHAPI__InventoryLevel_1a1ddf1bbffd0aee35ba8c17a54573463e"></a>

true if ItemId_Optional has been set to a value

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

#### `public inline FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1a058e7f12ac9289c1649e29b75d5ee644)`()` <a id="structFRHAPI__InventoryLevel_1a058e7f12ac9289c1649e29b75d5ee644"></a>

Gets the value of ItemUuid.

#### `public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__InventoryLevel_1a5faeaf5b6d25fc8bd46db0aacde8d017)`() const` <a id="structFRHAPI__InventoryLevel_1a5faeaf5b6d25fc8bd46db0aacde8d017"></a>

Gets the value of ItemUuid.

#### `public inline void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1afa5c4cf6a2ff7e1c1572b20bd34c92a3)`(const FGuid & NewValue)` <a id="structFRHAPI__InventoryLevel_1afa5c4cf6a2ff7e1c1572b20bd34c92a3"></a>

Sets the value of ItemUuid.

#### `public inline void `[`SetItemUuid`](#structFRHAPI__InventoryLevel_1aa1c19c9a755d92711c707e4de7162187)`(FGuid && NewValue)` <a id="structFRHAPI__InventoryLevel_1aa1c19c9a755d92711c707e4de7162187"></a>

Sets the value of ItemUuid using move semantics.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a47d16cef6b0b4069d168eec06ad52adc)`()` <a id="structFRHAPI__InventoryLevel_1a47d16cef6b0b4069d168eec06ad52adc"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1a7a2c03a7fbe5bbcea6ad19c8fcebd914)`() const` <a id="structFRHAPI__InventoryLevel_1a7a2c03a7fbe5bbcea6ad19c8fcebd914"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__InventoryLevel_1aa81719136d1f894452c0235fa42f9433)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InventoryLevel_1aa81719136d1f894452c0235fa42f9433"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__InventoryLevel_1ad1125a8a1ee28b499afb44e65ac4a94a)`(int32 & OutValue) const` <a id="structFRHAPI__InventoryLevel_1ad1125a8a1ee28b499afb44e65ac4a94a"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a6e64e241ac5d88478276660c437543b7)`()` <a id="structFRHAPI__InventoryLevel_1a6e64e241ac5d88478276660c437543b7"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__InventoryLevel_1a2c65b1eb9f0d1f698f9e5070f470e38d)`() const` <a id="structFRHAPI__InventoryLevel_1a2c65b1eb9f0d1f698f9e5070f470e38d"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__InventoryLevel_1a31402f6405a381fca7ec8e8f1c81df8e)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1a31402f6405a381fca7ec8e8f1c81df8e"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__InventoryLevel_1ab8e20195e76ff42d3f4a8f43fb7bbfb8)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1ab8e20195e76ff42d3f4a8f43fb7bbfb8"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__InventoryLevel_1a23e1f5914e9b3b6544a15b50cfd57002)`()` <a id="structFRHAPI__InventoryLevel_1a23e1f5914e9b3b6544a15b50cfd57002"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__InventoryLevel_1abacd2f218c4c155a34c3a490ec8936fc)`() const` <a id="structFRHAPI__InventoryLevel_1abacd2f218c4c155a34c3a490ec8936fc"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__InventoryLevel_1af3926ae11337314929e934d92661573c)`() const` <a id="structFRHAPI__InventoryLevel_1af3926ae11337314929e934d92661573c"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__InventoryLevel_1a82349b5435ca6231ba9ecc6d3b4d58c4)`()` <a id="structFRHAPI__InventoryLevel_1a82349b5435ca6231ba9ecc6d3b4d58c4"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1a65bb4122bc6364952d85d4e1c77d1a0e)`()` <a id="structFRHAPI__InventoryLevel_1a65bb4122bc6364952d85d4e1c77d1a0e"></a>

Gets the value of Level.

#### `public inline const int32 & `[`GetLevel`](#structFRHAPI__InventoryLevel_1a032d18379b8c9f3f4c6f7d497367cb4d)`() const` <a id="structFRHAPI__InventoryLevel_1a032d18379b8c9f3f4c6f7d497367cb4d"></a>

Gets the value of Level.

#### `public inline void `[`SetLevel`](#structFRHAPI__InventoryLevel_1ac61dc72dea5118abfd008a1e6ba72224)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1ac61dc72dea5118abfd008a1e6ba72224"></a>

Sets the value of Level.

#### `public inline void `[`SetLevel`](#structFRHAPI__InventoryLevel_1aab984feba8ef05c3f43076189eba4f1e)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1aab984feba8ef05c3f43076189eba4f1e"></a>

Sets the value of Level using move semantics.

#### `public inline bool `[`IsLevelDefaultValue`](#structFRHAPI__InventoryLevel_1aea060cd9661c3282180c4591f7e9bda1)`() const` <a id="structFRHAPI__InventoryLevel_1aea060cd9661c3282180c4591f7e9bda1"></a>

Returns true if Level matches the default value.

#### `public inline void `[`SetLevelToDefault`](#structFRHAPI__InventoryLevel_1ade903272bff91f6418625ec9127698f6)`()` <a id="structFRHAPI__InventoryLevel_1ade903272bff91f6418625ec9127698f6"></a>

Sets the value of Level to its default

#### `public inline int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1a824a663d7c1b7e21e044f52cbe9b0b71)`()` <a id="structFRHAPI__InventoryLevel_1a824a663d7c1b7e21e044f52cbe9b0b71"></a>

Gets the value of Count.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__InventoryLevel_1a8b8ed69a1178015129b9684dbfdefae0)`() const` <a id="structFRHAPI__InventoryLevel_1a8b8ed69a1178015129b9684dbfdefae0"></a>

Gets the value of Count.

#### `public inline void `[`SetCount`](#structFRHAPI__InventoryLevel_1a0c9ea526f1f579a455297ddcc40c6a2e)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1a0c9ea526f1f579a455297ddcc40c6a2e"></a>

Sets the value of Count.

#### `public inline void `[`SetCount`](#structFRHAPI__InventoryLevel_1a469c6c07b8d0b66fed1b5d84a5dc4480)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1a469c6c07b8d0b66fed1b5d84a5dc4480"></a>

Sets the value of Count using move semantics.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__InventoryLevel_1a886cbae6a89e530330bb558c07660a10)`() const` <a id="structFRHAPI__InventoryLevel_1a886cbae6a89e530330bb558c07660a10"></a>

Returns true if Count matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__InventoryLevel_1a16800bade4db5a661e6b7f0afbf70a8f)`()` <a id="structFRHAPI__InventoryLevel_1a16800bade4db5a661e6b7f0afbf70a8f"></a>

Sets the value of Count to its default

#### `public inline int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a31bb4b53483c36f575d1832fa4b5e3ea)`()` <a id="structFRHAPI__InventoryLevel_1a31bb4b53483c36f575d1832fa4b5e3ea"></a>

Gets the value of CountForNextLevel.

#### `public inline const int32 & `[`GetCountForNextLevel`](#structFRHAPI__InventoryLevel_1ae2922efc1c683e8285ee03c5814f8086)`() const` <a id="structFRHAPI__InventoryLevel_1ae2922efc1c683e8285ee03c5814f8086"></a>

Gets the value of CountForNextLevel.

#### `public inline void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a67d6317a8ce6dba7033839d15d9bdc32)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryLevel_1a67d6317a8ce6dba7033839d15d9bdc32"></a>

Sets the value of CountForNextLevel.

#### `public inline void `[`SetCountForNextLevel`](#structFRHAPI__InventoryLevel_1a79d636d2cbeddffa160e0b324c6f683a)`(int32 && NewValue)` <a id="structFRHAPI__InventoryLevel_1a79d636d2cbeddffa160e0b324c6f683a"></a>

Sets the value of CountForNextLevel using move semantics.

#### `public inline bool `[`IsCountForNextLevelDefaultValue`](#structFRHAPI__InventoryLevel_1ab258eaf6084cb35445498fd250bee39d)`() const` <a id="structFRHAPI__InventoryLevel_1ab258eaf6084cb35445498fd250bee39d"></a>

Returns true if CountForNextLevel matches the default value.

#### `public inline void `[`SetCountForNextLevelToDefault`](#structFRHAPI__InventoryLevel_1a52d1669eb7060c7f72ce1df564f1065e)`()` <a id="structFRHAPI__InventoryLevel_1a52d1669eb7060c7f72ce1df564f1065e"></a>

Sets the value of CountForNextLevel to its default

