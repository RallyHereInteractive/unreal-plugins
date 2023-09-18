# RHAPI_Rule <a id="group__RHAPI__Rule"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_RuleType `[`RuleType`](#structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5) | What type of rule this is.
`public int32 `[`ItemId_Optional`](#structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a) | Id of the item we are comparing if this is an inventory rule.
`public bool `[`ItemId_IsSet`](#structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b) | true if ItemId_Optional has been set to a value
`public ERHAPI_Operation `[`ComparisonOperation`](#structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470) | Comparison operation to be performed.
`public int32 `[`ComparisonValue`](#structFRHAPI__Rule_1abd981c2162078fa95f3a39a67a48894a) | Value to compare to.
`public virtual bool `[`FromJson`](#structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46)`()` | Gets the value of RuleType.
`public inline const ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2)`() const` | Gets the value of RuleType.
`public inline void `[`SetRuleType`](#structFRHAPI__Rule_1aa89374381f6bac0fbecdd3cb1023e0ce)`(ERHAPI_RuleType NewValue)` | Sets the value of RuleType.
`public inline int32 & `[`GetItemId`](#structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__Rule_1ad79ddb2d21e94f635aff806443ea8894)`(int32 NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`ClearItemId`](#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d)`()` | Gets the value of ComparisonOperation.
`public inline const ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af)`() const` | Gets the value of ComparisonOperation.
`public inline void `[`SetComparisonOperation`](#structFRHAPI__Rule_1a728a9bdb6bfd2853f834b5b8470c5fd6)`(ERHAPI_Operation NewValue)` | Sets the value of ComparisonOperation.
`public inline int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84)`()` | Gets the value of ComparisonValue.
`public inline const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894)`() const` | Gets the value of ComparisonValue.
`public inline void `[`SetComparisonValue`](#structFRHAPI__Rule_1aa1b090a92050cec83df98eb8fba6e75c)`(int32 NewValue)` | Sets the value of ComparisonValue.
`public inline bool `[`IsComparisonValueDefaultValue`](#structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85)`() const` | Returns true if ComparisonValue matches the default value.
`public inline void `[`SetComparisonValueToDefault`](#structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1)`()` | Sets the value of ComparisonValue to its default

#### Members

#### `public ERHAPI_RuleType `[`RuleType`](#structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5) <a id="structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5"></a>

What type of rule this is.

<br>
#### `public int32 `[`ItemId_Optional`](#structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a) <a id="structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a"></a>

Id of the item we are comparing if this is an inventory rule.

<br>
#### `public bool `[`ItemId_IsSet`](#structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b) <a id="structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b"></a>

true if ItemId_Optional has been set to a value

<br>
#### `public ERHAPI_Operation `[`ComparisonOperation`](#structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470) <a id="structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470"></a>

Comparison operation to be performed.

<br>
#### `public int32 `[`ComparisonValue`](#structFRHAPI__Rule_1abd981c2162078fa95f3a39a67a48894a) <a id="structFRHAPI__Rule_1abd981c2162078fa95f3a39a67a48894a"></a>

Value to compare to.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46)`()` <a id="structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46"></a>

Gets the value of RuleType.

<br>
#### `public inline const ERHAPI_RuleType & `[`GetRuleType`](#structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2)`() const` <a id="structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2"></a>

Gets the value of RuleType.

<br>
#### `public inline void `[`SetRuleType`](#structFRHAPI__Rule_1aa89374381f6bac0fbecdd3cb1023e0ce)`(ERHAPI_RuleType NewValue)` <a id="structFRHAPI__Rule_1aa89374381f6bac0fbecdd3cb1023e0ce"></a>

Sets the value of RuleType.

<br>
#### `public inline int32 & `[`GetItemId`](#structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca)`()` <a id="structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae)`() const` <a id="structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetItemId`](#structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5)`(int32 & OutValue) const` <a id="structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a)`()` <a id="structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356)`() const` <a id="structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetItemId`](#structFRHAPI__Rule_1ad79ddb2d21e94f635aff806443ea8894)`(int32 NewValue)` <a id="structFRHAPI__Rule_1ad79ddb2d21e94f635aff806443ea8894"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

<br>
#### `public inline void `[`ClearItemId`](#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)`()` <a id="structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

<br>
#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7)`() const` <a id="structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7"></a>

Returns true if ItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3)`()` <a id="structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

<br>
#### `public inline ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d)`()` <a id="structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d"></a>

Gets the value of ComparisonOperation.

<br>
#### `public inline const ERHAPI_Operation & `[`GetComparisonOperation`](#structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af)`() const` <a id="structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af"></a>

Gets the value of ComparisonOperation.

<br>
#### `public inline void `[`SetComparisonOperation`](#structFRHAPI__Rule_1a728a9bdb6bfd2853f834b5b8470c5fd6)`(ERHAPI_Operation NewValue)` <a id="structFRHAPI__Rule_1a728a9bdb6bfd2853f834b5b8470c5fd6"></a>

Sets the value of ComparisonOperation.

<br>
#### `public inline int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84)`()` <a id="structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84"></a>

Gets the value of ComparisonValue.

<br>
#### `public inline const int32 & `[`GetComparisonValue`](#structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894)`() const` <a id="structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894"></a>

Gets the value of ComparisonValue.

<br>
#### `public inline void `[`SetComparisonValue`](#structFRHAPI__Rule_1aa1b090a92050cec83df98eb8fba6e75c)`(int32 NewValue)` <a id="structFRHAPI__Rule_1aa1b090a92050cec83df98eb8fba6e75c"></a>

Sets the value of ComparisonValue.

<br>
#### `public inline bool `[`IsComparisonValueDefaultValue`](#structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85)`() const` <a id="structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85"></a>

Returns true if ComparisonValue matches the default value.

<br>
#### `public inline void `[`SetComparisonValueToDefault`](#structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1)`()` <a id="structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1"></a>

Sets the value of ComparisonValue to its default

<br>
