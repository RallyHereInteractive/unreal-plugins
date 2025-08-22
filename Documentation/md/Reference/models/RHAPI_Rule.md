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
`public virtual void `[`WriteJson`](#structFRHAPI__Rule_1a5a9b34690c73dbf5ebd6175d7b5dd9d5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1abeaabe880b406963a2c51b222a49a685)`()` | Gets the value of RuleType.
`public inline FORCEINLINE const ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a98549b295ba198a1e1256d58de95f9ca)`() const` | Gets the value of RuleType.
`public inline FORCEINLINE void `[`SetRuleType`](#structFRHAPI__Rule_1a151e965a4459ce0e926b2e394f757cfd)`(const ERHAPI_RuleType & NewValue)` | Sets the value of RuleType.
`public inline FORCEINLINE void `[`SetRuleType`](#structFRHAPI__Rule_1a50b5cb07b68155e3d09a3152895c4e64)`(ERHAPI_RuleType && NewValue)` | Sets the value of RuleType using move semantics.
`public inline FORCEINLINE ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a46279f9b3e8c5664c1e84b63faa60569)`()` | Gets the value of ComparisonOperation.
`public inline FORCEINLINE const ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a82dc4e4819a8a0e0d1fb77f831369d51)`() const` | Gets the value of ComparisonOperation.
`public inline FORCEINLINE void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ab0fd1c240698693c143e300c175115c6)`(const ERHAPI_Operation & NewValue)` | Sets the value of ComparisonOperation.
`public inline FORCEINLINE void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ac39f0302004dfd2e2ffb668f4560c93b)`(ERHAPI_Operation && NewValue)` | Sets the value of ComparisonOperation using move semantics.
`public inline FORCEINLINE int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1a3f01c7bb04bf8fb8ad9de6c4b9927a4f)`()` | Gets the value of ComparisonValue_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1aea75eb59e5931e41b05266b88db63623)`() const` | Gets the value of ComparisonValue_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1afb9bbb160eb4f806198bb3ae89f35949)`(const int32 & DefaultValue) const` | Gets the value of ComparisonValue_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetComparisonValue`](#structFRHAPI__Rule_1ab67f6090d00fa392bc3ff4538e583d40)`(int32 & OutValue) const` | Fills OutValue with the value of ComparisonValue_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1ac933449de76cb912b258725d4f1a2839)`()` | Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1af92115063b3a0bbd6d570320272a64a3)`() const` | Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetComparisonValue`](#structFRHAPI__Rule_1a848dac9288fefbaedc702c773a30699e)`(const int32 & NewValue)` | Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true.
`public inline FORCEINLINE void `[`SetComparisonValue`](#structFRHAPI__Rule_1afa621b75de65494ae7e9b0f79d7f24fd)`(int32 && NewValue)` | Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true using move semantics.
`public inline void `[`ClearComparisonValue`](#structFRHAPI__Rule_1a63a8c9c34facac2de8e965b0c9cdc157)`()` | Clears the value of ComparisonValue_Optional and sets ComparisonValue_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ComparisonValue`](#structFRHAPI__Rule_1a42c0b1cfe02c05d86b4c912e4705517e)`()` | Returns the default value of ComparisonValue.
`public inline FORCEINLINE TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1aecb1d31797c330209ef10c2ea7224f1a)`()` | Gets the value of ComparisonValueSet_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1a4b7f8c5ab17104c49c4786a5b1081762)`() const` | Gets the value of ComparisonValueSet_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1a563e806b0f8457d10c0f16e2b360ce5d)`(const TSet< FString > & DefaultValue) const` | Gets the value of ComparisonValueSet_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ada6fdc0868336343f220193f4fc9d2d2)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of ComparisonValueSet_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1aa699dc29f4089e03503978312c3ff4b7)`()` | Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1aaa4614f4e231854cc145c3b3d8a0f413)`() const` | Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1aab0827e4b9f0bcc878809a742df1ac51)`(const TSet< FString > & NewValue)` | Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true.
`public inline FORCEINLINE void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1a5dfe22f7bce19408aef80eb2f87bdd00)`(TSet< FString > && NewValue)` | Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true using move semantics.
`public inline void `[`ClearComparisonValueSet`](#structFRHAPI__Rule_1aff5d67d0260deed0651a1c44a59e3fc8)`()` | Clears the value of ComparisonValueSet_Optional and sets ComparisonValueSet_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__Rule_1a14764529170b753753ea199f62c447a2)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Rule_1ae9d395b7f9ed354ab48b4faf7d05a8f7)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a284cf83a6b9dae05d3e1c4b62c79a89a)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__Rule_1abf74ddd209b52dca84278f246d426a0f)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1adf5fe7aacf01b939d87bcf90a78f0ed1)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1ada097e2a30f11cf0d323d5382b2c6d76)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Rule_1ab1b40f26e0049f967366598998f9298a)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Rule_1ad3eb18ca2348bbdaefc28049bdc12138)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__Rule_1a1db90b15a77c6e9c2d369d4bd3339d4e)`()` | Returns the default value of ItemId.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__Rule_1a5a9b34690c73dbf5ebd6175d7b5dd9d5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Rule_1a5a9b34690c73dbf5ebd6175d7b5dd9d5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1abeaabe880b406963a2c51b222a49a685)`()` <a id="structFRHAPI__Rule_1abeaabe880b406963a2c51b222a49a685"></a>

Gets the value of RuleType.

#### `public inline FORCEINLINE const ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a98549b295ba198a1e1256d58de95f9ca)`() const` <a id="structFRHAPI__Rule_1a98549b295ba198a1e1256d58de95f9ca"></a>

Gets the value of RuleType.

#### `public inline FORCEINLINE void `[`SetRuleType`](#structFRHAPI__Rule_1a151e965a4459ce0e926b2e394f757cfd)`(const ERHAPI_RuleType & NewValue)` <a id="structFRHAPI__Rule_1a151e965a4459ce0e926b2e394f757cfd"></a>

Sets the value of RuleType.

#### `public inline FORCEINLINE void `[`SetRuleType`](#structFRHAPI__Rule_1a50b5cb07b68155e3d09a3152895c4e64)`(ERHAPI_RuleType && NewValue)` <a id="structFRHAPI__Rule_1a50b5cb07b68155e3d09a3152895c4e64"></a>

Sets the value of RuleType using move semantics.

#### `public inline FORCEINLINE ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a46279f9b3e8c5664c1e84b63faa60569)`()` <a id="structFRHAPI__Rule_1a46279f9b3e8c5664c1e84b63faa60569"></a>

Gets the value of ComparisonOperation.

#### `public inline FORCEINLINE const ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a82dc4e4819a8a0e0d1fb77f831369d51)`() const` <a id="structFRHAPI__Rule_1a82dc4e4819a8a0e0d1fb77f831369d51"></a>

Gets the value of ComparisonOperation.

#### `public inline FORCEINLINE void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ab0fd1c240698693c143e300c175115c6)`(const ERHAPI_Operation & NewValue)` <a id="structFRHAPI__Rule_1ab0fd1c240698693c143e300c175115c6"></a>

Sets the value of ComparisonOperation.

#### `public inline FORCEINLINE void `[`SetComparisonOperation`](#structFRHAPI__Rule_1ac39f0302004dfd2e2ffb668f4560c93b)`(ERHAPI_Operation && NewValue)` <a id="structFRHAPI__Rule_1ac39f0302004dfd2e2ffb668f4560c93b"></a>

Sets the value of ComparisonOperation using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1a3f01c7bb04bf8fb8ad9de6c4b9927a4f)`()` <a id="structFRHAPI__Rule_1a3f01c7bb04bf8fb8ad9de6c4b9927a4f"></a>

Gets the value of ComparisonValue_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1aea75eb59e5931e41b05266b88db63623)`() const` <a id="structFRHAPI__Rule_1aea75eb59e5931e41b05266b88db63623"></a>

Gets the value of ComparisonValue_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1afb9bbb160eb4f806198bb3ae89f35949)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Rule_1afb9bbb160eb4f806198bb3ae89f35949"></a>

Gets the value of ComparisonValue_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetComparisonValue`](#structFRHAPI__Rule_1ab67f6090d00fa392bc3ff4538e583d40)`(int32 & OutValue) const` <a id="structFRHAPI__Rule_1ab67f6090d00fa392bc3ff4538e583d40"></a>

Fills OutValue with the value of ComparisonValue_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1ac933449de76cb912b258725d4f1a2839)`()` <a id="structFRHAPI__Rule_1ac933449de76cb912b258725d4f1a2839"></a>

Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetComparisonValueOrNull`](#structFRHAPI__Rule_1af92115063b3a0bbd6d570320272a64a3)`() const` <a id="structFRHAPI__Rule_1af92115063b3a0bbd6d570320272a64a3"></a>

Returns a pointer to ComparisonValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetComparisonValue`](#structFRHAPI__Rule_1a848dac9288fefbaedc702c773a30699e)`(const int32 & NewValue)` <a id="structFRHAPI__Rule_1a848dac9288fefbaedc702c773a30699e"></a>

Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true.

#### `public inline FORCEINLINE void `[`SetComparisonValue`](#structFRHAPI__Rule_1afa621b75de65494ae7e9b0f79d7f24fd)`(int32 && NewValue)` <a id="structFRHAPI__Rule_1afa621b75de65494ae7e9b0f79d7f24fd"></a>

Sets the value of ComparisonValue_Optional and also sets ComparisonValue_IsSet to true using move semantics.

#### `public inline void `[`ClearComparisonValue`](#structFRHAPI__Rule_1a63a8c9c34facac2de8e965b0c9cdc157)`()` <a id="structFRHAPI__Rule_1a63a8c9c34facac2de8e965b0c9cdc157"></a>

Clears the value of ComparisonValue_Optional and sets ComparisonValue_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ComparisonValue`](#structFRHAPI__Rule_1a42c0b1cfe02c05d86b4c912e4705517e)`()` <a id="structFRHAPI__Rule_1a42c0b1cfe02c05d86b4c912e4705517e"></a>

Returns the default value of ComparisonValue.

#### `public inline FORCEINLINE TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1aecb1d31797c330209ef10c2ea7224f1a)`()` <a id="structFRHAPI__Rule_1aecb1d31797c330209ef10c2ea7224f1a"></a>

Gets the value of ComparisonValueSet_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1a4b7f8c5ab17104c49c4786a5b1081762)`() const` <a id="structFRHAPI__Rule_1a4b7f8c5ab17104c49c4786a5b1081762"></a>

Gets the value of ComparisonValueSet_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< FString > & `[`GetComparisonValueSet`](#structFRHAPI__Rule_1a563e806b0f8457d10c0f16e2b360ce5d)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__Rule_1a563e806b0f8457d10c0f16e2b360ce5d"></a>

Gets the value of ComparisonValueSet_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetComparisonValueSet`](#structFRHAPI__Rule_1ada6fdc0868336343f220193f4fc9d2d2)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__Rule_1ada6fdc0868336343f220193f4fc9d2d2"></a>

Fills OutValue with the value of ComparisonValueSet_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1aa699dc29f4089e03503978312c3ff4b7)`()` <a id="structFRHAPI__Rule_1aa699dc29f4089e03503978312c3ff4b7"></a>

Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< FString > * `[`GetComparisonValueSetOrNull`](#structFRHAPI__Rule_1aaa4614f4e231854cc145c3b3d8a0f413)`() const` <a id="structFRHAPI__Rule_1aaa4614f4e231854cc145c3b3d8a0f413"></a>

Returns a pointer to ComparisonValueSet_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1aab0827e4b9f0bcc878809a742df1ac51)`(const TSet< FString > & NewValue)` <a id="structFRHAPI__Rule_1aab0827e4b9f0bcc878809a742df1ac51"></a>

Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true.

#### `public inline FORCEINLINE void `[`SetComparisonValueSet`](#structFRHAPI__Rule_1a5dfe22f7bce19408aef80eb2f87bdd00)`(TSet< FString > && NewValue)` <a id="structFRHAPI__Rule_1a5dfe22f7bce19408aef80eb2f87bdd00"></a>

Sets the value of ComparisonValueSet_Optional and also sets ComparisonValueSet_IsSet to true using move semantics.

#### `public inline void `[`ClearComparisonValueSet`](#structFRHAPI__Rule_1aff5d67d0260deed0651a1c44a59e3fc8)`()` <a id="structFRHAPI__Rule_1aff5d67d0260deed0651a1c44a59e3fc8"></a>

Clears the value of ComparisonValueSet_Optional and sets ComparisonValueSet_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__Rule_1a14764529170b753753ea199f62c447a2)`()` <a id="structFRHAPI__Rule_1a14764529170b753753ea199f62c447a2"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Rule_1ae9d395b7f9ed354ab48b4faf7d05a8f7)`() const` <a id="structFRHAPI__Rule_1ae9d395b7f9ed354ab48b4faf7d05a8f7"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a284cf83a6b9dae05d3e1c4b62c79a89a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Rule_1a284cf83a6b9dae05d3e1c4b62c79a89a"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__Rule_1abf74ddd209b52dca84278f246d426a0f)`(int32 & OutValue) const` <a id="structFRHAPI__Rule_1abf74ddd209b52dca84278f246d426a0f"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1adf5fe7aacf01b939d87bcf90a78f0ed1)`()` <a id="structFRHAPI__Rule_1adf5fe7aacf01b939d87bcf90a78f0ed1"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1ada097e2a30f11cf0d323d5382b2c6d76)`() const` <a id="structFRHAPI__Rule_1ada097e2a30f11cf0d323d5382b2c6d76"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Rule_1ab1b40f26e0049f967366598998f9298a)`(const int32 & NewValue)` <a id="structFRHAPI__Rule_1ab1b40f26e0049f967366598998f9298a"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Rule_1ad3eb18ca2348bbdaefc28049bdc12138)`(int32 && NewValue)` <a id="structFRHAPI__Rule_1ad3eb18ca2348bbdaefc28049bdc12138"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)`()` <a id="structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__Rule_1a1db90b15a77c6e9c2d369d4bd3339d4e)`()` <a id="structFRHAPI__Rule_1a1db90b15a77c6e9c2d369d4bd3339d4e"></a>

Returns the default value of ItemId.

