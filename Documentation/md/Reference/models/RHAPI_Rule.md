---
title: RHAPI_Rule
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Rule`](#structFRHAPI__Rule) | A rule to determine which MatchMakingTemplate should be used on a session entering matchmaking.

## struct `FRHAPI_Rule` <a id="structFRHAPI__Rule"></a>

```
struct FRHAPI_Rule
  : public FRHAPI_Model
```

A rule to determine which MatchMakingTemplate should be used on a session entering matchmaking.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_RuleType `[`RuleType`](#structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5) | What type of rule this is.
`public ERHAPI_Operation `[`ComparisonOperation`](#structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470) | Comparison operation to be performed.
`public int32 `[`ComparisonValue_Optional`](#structFRHAPI__Rule_1ae48e088fee00e8bcf0bd8108ad182ea8) | Integer Value to compare to.
`public bool `[`ComparisonValue_IsSet`](#structFRHAPI__Rule_1a555cfcdd78d7191ceeffba460f395c60) | true if ComparisonValue_Optional has been set to a value
`public TSet< FString > `[`ComparisonValueSet_Optional`](#structFRHAPI__Rule_1a934c3acb7f1dad1f386c16e334791f34) | Set of string values to compare to.
`public bool `[`ComparisonValueSet_IsSet`](#structFRHAPI__Rule_1a1e944a236af868d56f6bf9cb01f2a981) | true if ComparisonValueSet_Optional has been set to a value
`public int32 `[`ItemId_Optional`](#structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a) | Id of the item we are comparing if this is an inventory rule.
`public bool `[`ItemId_IsSet`](#structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b) | true if ItemId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Rule_1adb7009c567f49d09752f29653c6b8ed9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Rule_1afbd014e5551ae3b06d22bfe9b05be2a2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46)`()` | Gets the value of RuleType.
`public inline const ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2)`() const` | Gets the value of RuleType.
`public inline void `[`SetRuleType`](#structFRHAPI__Rule_1a552f079c16b03b9624f30f209df630ac)`(const ERHAPI_RuleType & NewValue)` | Sets the value of RuleType.
`public inline void `[`SetRuleType`](#structFRHAPI__Rule_1aea945a7ea40655263a50e62dea4f05e7)`(ERHAPI_RuleType && NewValue)` | Sets the value of RuleType using move semantics.
`public inline ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d)`()` | Gets the value of ComparisonOperation.
`public inline const ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af)`() const` | Gets the value of ComparisonOperation.
`public inline void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ab2aeec410c88da70a99ac7920685deec)`(const ERHAPI_Operation & NewValue)` | Sets the value of ComparisonOperation.
`public inline void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ae89880458c268dafbe2d9c1a3a19b0db)`(ERHAPI_Operation && NewValue)` | Sets the value of ComparisonOperation using move semantics.
`public inline int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84)`()` | Gets the value of ComparisonValue_Optional, regardless of it having been set.
`public inline const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894)`() const` | Gets the value of ComparisonValue_Optional, regardless of it having been set.
`public inline const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1ade8566512febee1966e16dce653d8e11)`(const int32 & DefaultValue) const` | Gets the value of ComparisonValue_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetComparisonValue`](#structFRHAPI__Rule_1a8e8cb89f1ff854156fd70cef80fe0c1a)`(int32 & OutValue) const` | Fills OutValue with the value of ComparisonValue_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1ab940db9cf0935bda1b90cce9e98377b5)`()` | Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1a43402d5544a467e4c26238844ff9a666)`() const` | Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetComparisonValue`](#structFRHAPI__Rule_1a01704b2306ed3aecf10834dd95510a45)`(const int32 & NewValue)` | Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true.
`public inline void `[`SetComparisonValue`](#structFRHAPI__Rule_1a71ca9ffd374fc8f52e4bf7ec5d3bb369)`(int32 && NewValue)` | Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true using move semantics.
`public inline void `[`ClearComparisonValue`](#structFRHAPI__Rule_1a63a8c9c34facac2de8e965b0c9cdc157)`()` | Clears the value of ComparisonValue_Optional and sets ComparisonValue_IsSet to false.
`public inline bool `[`IsComparisonValueSet`](#structFRHAPI__Rule_1aeb5ada550f9036b383dc4f91096c0ee6)`() const` | Checks whether ComparisonValue_Optional has been set.
`public inline bool `[`IsComparisonValueDefaultValue`](#structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85)`() const` | Returns true if ComparisonValue_Optional is set and matches the default value.
`public inline void `[`SetComparisonValueToDefault`](#structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1)`()` | Sets the value of ComparisonValue_Optional to its default and also sets ComparisonValue_IsSet to true.
`public inline TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ae95d4172b9957d2a7c92460f8a741db0)`()` | Gets the value of ComparisonValueSet_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ae8aee087fdbc85ead831298077f53f07)`() const` | Gets the value of ComparisonValueSet_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1abfcac08ef92a129d5776e7b4526c2f7d)`(const TSet< FString > & DefaultValue) const` | Gets the value of ComparisonValueSet_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ace53974c3a7fee05bc5a1fc7074be07b)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of ComparisonValueSet_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1a948079d641bc84d81e8726ef541aef8f)`()` | Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1a271a02729d7f8bdfea9d9f6ca8d1b4e1)`() const` | Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1a2ae394e455232f6fdd0247e59117775a)`(const TSet< FString > & NewValue)` | Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true.
`public inline void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1a6c5a7a1f9441f69c51ebc16a7f7e6ee1)`(TSet< FString > && NewValue)` | Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true using move semantics.
`public inline void `[`ClearComparisonValueSet`](#structFRHAPI__Rule_1aff5d67d0260deed0651a1c44a59e3fc8)`()` | Clears the value of ComparisonValueSet_Optional and sets ComparisonValueSet_IsSet to false.
`public inline bool `[`IsComparisonValueSetSet`](#structFRHAPI__Rule_1a7551b4db23cc657f4810b787fae5d6a0)`() const` | Checks whether ComparisonValueSet_Optional has been set.
`public inline int32 & `[`GetItemId`](#structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__Rule_1a7db4da485fa38e7efcb0a2a3cdf0714e)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__Rule_1aa31058748baa9e54e06d436374391033)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__Rule_1abf0ef14b579af6c77806404d057cee46)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

### Members

#### `public ERHAPI_RuleType `[`RuleType`](#structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5) <a id="structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5"></a>

What type of rule this is.

#### `public ERHAPI_Operation `[`ComparisonOperation`](#structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470) <a id="structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470"></a>

Comparison operation to be performed.

#### `public int32 `[`ComparisonValue_Optional`](#structFRHAPI__Rule_1ae48e088fee00e8bcf0bd8108ad182ea8) <a id="structFRHAPI__Rule_1ae48e088fee00e8bcf0bd8108ad182ea8"></a>

Integer Value to compare to.

#### `public bool `[`ComparisonValue_IsSet`](#structFRHAPI__Rule_1a555cfcdd78d7191ceeffba460f395c60) <a id="structFRHAPI__Rule_1a555cfcdd78d7191ceeffba460f395c60"></a>

true if ComparisonValue_Optional has been set to a value

#### `public TSet< FString > `[`ComparisonValueSet_Optional`](#structFRHAPI__Rule_1a934c3acb7f1dad1f386c16e334791f34) <a id="structFRHAPI__Rule_1a934c3acb7f1dad1f386c16e334791f34"></a>

Set of string values to compare to.

#### `public bool `[`ComparisonValueSet_IsSet`](#structFRHAPI__Rule_1a1e944a236af868d56f6bf9cb01f2a981) <a id="structFRHAPI__Rule_1a1e944a236af868d56f6bf9cb01f2a981"></a>

true if ComparisonValueSet_Optional has been set to a value

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a) <a id="structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a"></a>

Id of the item we are comparing if this is an inventory rule.

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b) <a id="structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b"></a>

true if ItemId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Rule_1adb7009c567f49d09752f29653c6b8ed9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Rule_1adb7009c567f49d09752f29653c6b8ed9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Rule_1afbd014e5551ae3b06d22bfe9b05be2a2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Rule_1afbd014e5551ae3b06d22bfe9b05be2a2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46)`()` <a id="structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46"></a>

Gets the value of RuleType.

#### `public inline const ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2)`() const` <a id="structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2"></a>

Gets the value of RuleType.

#### `public inline void `[`SetRuleType`](#structFRHAPI__Rule_1a552f079c16b03b9624f30f209df630ac)`(const ERHAPI_RuleType & NewValue)` <a id="structFRHAPI__Rule_1a552f079c16b03b9624f30f209df630ac"></a>

Sets the value of RuleType.

#### `public inline void `[`SetRuleType`](#structFRHAPI__Rule_1aea945a7ea40655263a50e62dea4f05e7)`(ERHAPI_RuleType && NewValue)` <a id="structFRHAPI__Rule_1aea945a7ea40655263a50e62dea4f05e7"></a>

Sets the value of RuleType using move semantics.

#### `public inline ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d)`()` <a id="structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d"></a>

Gets the value of ComparisonOperation.

#### `public inline const ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af)`() const` <a id="structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af"></a>

Gets the value of ComparisonOperation.

#### `public inline void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ab2aeec410c88da70a99ac7920685deec)`(const ERHAPI_Operation & NewValue)` <a id="structFRHAPI__Rule_1ab2aeec410c88da70a99ac7920685deec"></a>

Sets the value of ComparisonOperation.

#### `public inline void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ae89880458c268dafbe2d9c1a3a19b0db)`(ERHAPI_Operation && NewValue)` <a id="structFRHAPI__Rule_1ae89880458c268dafbe2d9c1a3a19b0db"></a>

Sets the value of ComparisonOperation using move semantics.

#### `public inline int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84)`()` <a id="structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84"></a>

Gets the value of ComparisonValue_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894)`() const` <a id="structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894"></a>

Gets the value of ComparisonValue_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1ade8566512febee1966e16dce653d8e11)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Rule_1ade8566512febee1966e16dce653d8e11"></a>

Gets the value of ComparisonValue_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetComparisonValue`](#structFRHAPI__Rule_1a8e8cb89f1ff854156fd70cef80fe0c1a)`(int32 & OutValue) const` <a id="structFRHAPI__Rule_1a8e8cb89f1ff854156fd70cef80fe0c1a"></a>

Fills OutValue with the value of ComparisonValue_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1ab940db9cf0935bda1b90cce9e98377b5)`()` <a id="structFRHAPI__Rule_1ab940db9cf0935bda1b90cce9e98377b5"></a>

Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1a43402d5544a467e4c26238844ff9a666)`() const` <a id="structFRHAPI__Rule_1a43402d5544a467e4c26238844ff9a666"></a>

Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetComparisonValue`](#structFRHAPI__Rule_1a01704b2306ed3aecf10834dd95510a45)`(const int32 & NewValue)` <a id="structFRHAPI__Rule_1a01704b2306ed3aecf10834dd95510a45"></a>

Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true.

#### `public inline void `[`SetComparisonValue`](#structFRHAPI__Rule_1a71ca9ffd374fc8f52e4bf7ec5d3bb369)`(int32 && NewValue)` <a id="structFRHAPI__Rule_1a71ca9ffd374fc8f52e4bf7ec5d3bb369"></a>

Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true using move semantics.

#### `public inline void `[`ClearComparisonValue`](#structFRHAPI__Rule_1a63a8c9c34facac2de8e965b0c9cdc157)`()` <a id="structFRHAPI__Rule_1a63a8c9c34facac2de8e965b0c9cdc157"></a>

Clears the value of ComparisonValue_Optional and sets ComparisonValue_IsSet to false.

#### `public inline bool `[`IsComparisonValueSet`](#structFRHAPI__Rule_1aeb5ada550f9036b383dc4f91096c0ee6)`() const` <a id="structFRHAPI__Rule_1aeb5ada550f9036b383dc4f91096c0ee6"></a>

Checks whether ComparisonValue_Optional has been set.

#### `public inline bool `[`IsComparisonValueDefaultValue`](#structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85)`() const` <a id="structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85"></a>

Returns true if ComparisonValue_Optional is set and matches the default value.

#### `public inline void `[`SetComparisonValueToDefault`](#structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1)`()` <a id="structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1"></a>

Sets the value of ComparisonValue_Optional to its default and also sets ComparisonValue_IsSet to true.

#### `public inline TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ae95d4172b9957d2a7c92460f8a741db0)`()` <a id="structFRHAPI__Rule_1ae95d4172b9957d2a7c92460f8a741db0"></a>

Gets the value of ComparisonValueSet_Optional, regardless of it having been set.

#### `public inline const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ae8aee087fdbc85ead831298077f53f07)`() const` <a id="structFRHAPI__Rule_1ae8aee087fdbc85ead831298077f53f07"></a>

Gets the value of ComparisonValueSet_Optional, regardless of it having been set.

#### `public inline const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1abfcac08ef92a129d5776e7b4526c2f7d)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__Rule_1abfcac08ef92a129d5776e7b4526c2f7d"></a>

Gets the value of ComparisonValueSet_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ace53974c3a7fee05bc5a1fc7074be07b)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__Rule_1ace53974c3a7fee05bc5a1fc7074be07b"></a>

Fills OutValue with the value of ComparisonValueSet_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1a948079d641bc84d81e8726ef541aef8f)`()` <a id="structFRHAPI__Rule_1a948079d641bc84d81e8726ef541aef8f"></a>

Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1a271a02729d7f8bdfea9d9f6ca8d1b4e1)`() const` <a id="structFRHAPI__Rule_1a271a02729d7f8bdfea9d9f6ca8d1b4e1"></a>

Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1a2ae394e455232f6fdd0247e59117775a)`(const TSet< FString > & NewValue)` <a id="structFRHAPI__Rule_1a2ae394e455232f6fdd0247e59117775a"></a>

Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true.

#### `public inline void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1a6c5a7a1f9441f69c51ebc16a7f7e6ee1)`(TSet< FString > && NewValue)` <a id="structFRHAPI__Rule_1a6c5a7a1f9441f69c51ebc16a7f7e6ee1"></a>

Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true using move semantics.

#### `public inline void `[`ClearComparisonValueSet`](#structFRHAPI__Rule_1aff5d67d0260deed0651a1c44a59e3fc8)`()` <a id="structFRHAPI__Rule_1aff5d67d0260deed0651a1c44a59e3fc8"></a>

Clears the value of ComparisonValueSet_Optional and sets ComparisonValueSet_IsSet to false.

#### `public inline bool `[`IsComparisonValueSetSet`](#structFRHAPI__Rule_1a7551b4db23cc657f4810b787fae5d6a0)`() const` <a id="structFRHAPI__Rule_1a7551b4db23cc657f4810b787fae5d6a0"></a>

Checks whether ComparisonValueSet_Optional has been set.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca)`()` <a id="structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae)`() const` <a id="structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5)`(int32 & OutValue) const` <a id="structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a)`()` <a id="structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356)`() const` <a id="structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__Rule_1a7db4da485fa38e7efcb0a2a3cdf0714e)`(const int32 & NewValue)` <a id="structFRHAPI__Rule_1a7db4da485fa38e7efcb0a2a3cdf0714e"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__Rule_1aa31058748baa9e54e06d436374391033)`(int32 && NewValue)` <a id="structFRHAPI__Rule_1aa31058748baa9e54e06d436374391033"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)`()` <a id="structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__Rule_1abf0ef14b579af6c77806404d057cee46)`() const` <a id="structFRHAPI__Rule_1abf0ef14b579af6c77806404d057cee46"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7)`() const` <a id="structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3)`()` <a id="structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
