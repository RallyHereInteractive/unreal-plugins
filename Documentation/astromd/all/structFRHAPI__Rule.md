---
title: FRHAPI_Rule Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A rule to determine which MatchMakingTemplate should be used on a session entering matchmaking.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_RuleType|[RuleType](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5)|What type of rule this is.|
|int32|[ItemId_Optional](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a)|Id of the item we are comparing if this is an inventory rule.|
|bool|[ItemId_IsSet](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b)|true if ItemId_Optional has been set to a value|
|ERHAPI_Operation|[ComparisonOperation](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470)|Comparison operation to be performed.|
|int32|[ComparisonValue](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1abd981c2162078fa95f3a39a67a48894a)|Value to compare to.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_RuleType &|[GetRuleType](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46)()|Gets the value of RuleType.|
|const ERHAPI_RuleType &|[GetRuleType](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2)()|Gets the value of RuleType.|
|void|[SetRuleType](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1aa89374381f6bac0fbecdd3cb1023e0ce)(ERHAPI_RuleType NewValue)|Sets the value of RuleType.|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129)(const int32 & DefaultValue)|Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemId](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5)(int32 & OutValue)|Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ad79ddb2d21e94f635aff806443ea8894)(int32 NewValue)|Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.|
|void|[ClearItemId](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4)()|Clears the value of ItemId_Optional and sets ItemId_IsSet to false.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7)()|Returns true if ItemId_Optional is set and matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3)()|Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.|
|ERHAPI_Operation &|[GetComparisonOperation](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d)()|Gets the value of ComparisonOperation.|
|const ERHAPI_Operation &|[GetComparisonOperation](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af)()|Gets the value of ComparisonOperation.|
|void|[SetComparisonOperation](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a728a9bdb6bfd2853f834b5b8470c5fd6)(ERHAPI_Operation NewValue)|Sets the value of ComparisonOperation.|
|int32 &|[GetComparisonValue](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84)()|Gets the value of ComparisonValue.|
|const int32 &|[GetComparisonValue](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894)()|Gets the value of ComparisonValue.|
|void|[SetComparisonValue](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1aa1b090a92050cec83df98eb8fba6e75c)(int32 NewValue)|Sets the value of ComparisonValue.|
|bool|[IsComparisonValueDefaultValue](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85)()|Returns true if ComparisonValue matches the default value.|
|void|[SetComparisonValueToDefault](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1)()|Sets the value of ComparisonValue to its default|
## Public Attributes



### `RuleType` <a id="structFRHAPI__Rule_1a4a2e3de3c2a5b24506ee6fbb049a47e5"></a>

`ERHAPI_RuleType FRHAPI_Rule::RuleType`

What type of rule this is.




### `ItemId_Optional` <a id="structFRHAPI__Rule_1a634acbd47d35906178ea7d4a8715d76a"></a>

`int32 FRHAPI_Rule::ItemId_Optional`

Id of the item we are comparing if this is an inventory rule.




### `ItemId_IsSet` <a id="structFRHAPI__Rule_1ab446ced603f1d0503dbf7e9aa52dd24b"></a>

`bool FRHAPI_Rule::ItemId_IsSet`

true if ItemId_Optional has been set to a value




### `ComparisonOperation` <a id="structFRHAPI__Rule_1a9737a27e7a06796f094f4c9f25417470"></a>

`ERHAPI_Operation FRHAPI_Rule::ComparisonOperation`

Comparison operation to be performed.




### `ComparisonValue` <a id="structFRHAPI__Rule_1abd981c2162078fa95f3a39a67a48894a"></a>

`int32 FRHAPI_Rule::ComparisonValue`

Value to compare to.





## Public Functions



### `FromJson` <a id="structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetRuleType` <a id="structFRHAPI__Rule_1a168823c366a662e77b21d5b9088fba46"></a>

ERHAPI_RuleType & GetRuleType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RuleType.




### `GetRuleType` <a id="structFRHAPI__Rule_1a150e40e4ab6bcd93172ef04b9e0f86b2"></a>

const ERHAPI_RuleType & GetRuleType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RuleType.




### `SetRuleType` <a id="structFRHAPI__Rule_1aa89374381f6bac0fbecdd3cb1023e0ce"></a>

void SetRuleType(ERHAPI_RuleType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_RuleType|NewValue|

#### Description

Sets the value of RuleType.




### `GetItemId` <a id="structFRHAPI__Rule_1adf8484bb1fa4b6e4ad2ba7da80595fca"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__Rule_1a4ddd51579408c8ebc46f959f6210a3ae"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__Rule_1a89a9ac8648b33bafc2c132684bc45129"></a>

const int32 & GetItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemId` <a id="structFRHAPI__Rule_1a35b43b7d3677449c8f08b25670c849e5"></a>

bool GetItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemIdOrNull` <a id="structFRHAPI__Rule_1a08cf14e62c8ed6cb0ac067bff4d38d9a"></a>

int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemIdOrNull` <a id="structFRHAPI__Rule_1a4921ac159f6742a23a1a189644c56356"></a>

const int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemId` <a id="structFRHAPI__Rule_1ad79ddb2d21e94f635aff806443ea8894"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.




### `ClearItemId` <a id="structFRHAPI__Rule_1ac8c0859244d0e1917c0fe3fb1f434db4"></a>

void ClearItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.




### `IsItemIdDefaultValue` <a id="structFRHAPI__Rule_1a13a1315b408ae91ba8c92347a354c9c7"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId_Optional is set and matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__Rule_1aaa71f1bf82e9fbe43ddb42d75cfff9d3"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.




### `GetComparisonOperation` <a id="structFRHAPI__Rule_1ad12c2f73831d1a133e47369553050d1d"></a>

ERHAPI_Operation & GetComparisonOperation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ComparisonOperation.




### `GetComparisonOperation` <a id="structFRHAPI__Rule_1a31d32f066eeceffb8c09f7d6b5a725af"></a>

const ERHAPI_Operation & GetComparisonOperation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ComparisonOperation.




### `SetComparisonOperation` <a id="structFRHAPI__Rule_1a728a9bdb6bfd2853f834b5b8470c5fd6"></a>

void SetComparisonOperation(ERHAPI_Operation NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Operation|NewValue|

#### Description

Sets the value of ComparisonOperation.




### `GetComparisonValue` <a id="structFRHAPI__Rule_1ab061802aab952c3c6667b9c1253a6b84"></a>

int32 & GetComparisonValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ComparisonValue.




### `GetComparisonValue` <a id="structFRHAPI__Rule_1afc069ccf52cd3dfe9ba215cdd3ae3894"></a>

const int32 & GetComparisonValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ComparisonValue.




### `SetComparisonValue` <a id="structFRHAPI__Rule_1aa1b090a92050cec83df98eb8fba6e75c"></a>

void SetComparisonValue(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ComparisonValue.




### `IsComparisonValueDefaultValue` <a id="structFRHAPI__Rule_1a043867ba71593f9cb656628b79aa9e85"></a>

bool IsComparisonValueDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ComparisonValue matches the default value.




### `SetComparisonValueToDefault` <a id="structFRHAPI__Rule_1a7c172dda8feca246cf9050e08a565be1"></a>

void SetComparisonValueToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ComparisonValue to its default





