---
title: FRHAPI_RankConfig Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Configuration about a specific rank type.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[RankId](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a39272f875949d434f53f6f1a36e3b476)|ID for this rank type.|
|float|[DefaultRank](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a570d0708073bb8b7fc260b31e6393e7e)|The default rank value for this rank id. Will be used when players do not have any rank history.|
|float|[DefaultVariance](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a23015f77bd5ebf13d8b619352123a154)|The default skill variance for this rank id. Will be used when players do not have any rank history.|
|float|[MaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ae69b0a3c5e8e2bf082bdbecbd627bfd4)|The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.|
|float|[MinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a3066610bbe1a9a01a69b3c60a7f51310)|The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.|
|float|[MinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a156b1b648f115b8912bbfe0a407bf6f3)|The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.|
|float|[TrueskillBeta_Optional](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a7b6cfd4661aace1eb22d9beec999ae3d)|The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.|
|bool|[TrueskillBeta_IsSet](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a17627a7b7e79c031163c3ef6d94eef75)|true if TrueskillBeta_Optional has been set to a value|
|float|[TrueskillTau_Optional](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a11bbf87c3c2a3f05c5cd68151567e76c)|Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)|
|bool|[TrueskillTau_IsSet](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ab39e312a255d2c70350b92375f4373fa)|true if TrueskillTau_Optional has been set to a value|
|float|[TrueskillDrawProbability_Optional](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a3bde7cd20fd2247786c36c72a917b8d5)|The percent probability of a draw occuring in the game. Must be in [0, 1)|
|bool|[TrueskillDrawProbability_IsSet](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ad6aa6ffcec6b52b755056c3f504f0cf0)|true if TrueskillDrawProbability_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a5eeb6337adc9e525f4fe923e3793e857)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a618a68dc968bb1b200eb61be35e658f2)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetRankId](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a66e760b397c5bcc2f500183878595b95)()|Gets the value of RankId.|
|const int32 &|[GetRankId](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a0bed9ba67407f4dd48f60e07ba3925fb)()|Gets the value of RankId.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ad6bac2166b6c3d19da237641f25006fa)(int32 NewValue)|Sets the value of RankId.|
|bool|[IsRankIdDefaultValue](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a04f0f5bcfe8d4f777e205c55b8c3ad47)()|Returns true if RankId matches the default value.|
|void|[SetRankIdToDefault](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ace9a1488b2bcd56f0c3cd45e2dd72ff2)()|Sets the value of RankId to its default|
|float &|[GetDefaultRank](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a86c054035bff432932963d8227713085)()|Gets the value of DefaultRank.|
|const float &|[GetDefaultRank](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a311cedcad58f159894c700ac467b945a)()|Gets the value of DefaultRank.|
|void|[SetDefaultRank](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ac69b90e6bf04aabe53e7cf7bd5f026d9)(float NewValue)|Sets the value of DefaultRank.|
|float &|[GetDefaultVariance](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a882245963eacb486430fb09b5503d69d)()|Gets the value of DefaultVariance.|
|const float &|[GetDefaultVariance](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a754957559a43ec153109c7a020f69087)()|Gets the value of DefaultVariance.|
|void|[SetDefaultVariance](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a65019b60abe5b9ce0dacbd271c9ec3c7)(float NewValue)|Sets the value of DefaultVariance.|
|float &|[GetMaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a1264fa134be1f8cbc215da9718204438)()|Gets the value of MaxRankAllowed.|
|const float &|[GetMaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a16820416c6f8e0604fd8a9567b34db5a)()|Gets the value of MaxRankAllowed.|
|void|[SetMaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ad2168d447fc145c0a4d08e47f8872639)(float NewValue)|Sets the value of MaxRankAllowed.|
|float &|[GetMinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a9b6f753f632176c52ed3db6d46671ab5)()|Gets the value of MinRankAllowed.|
|const float &|[GetMinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ae1f1add3f01d8be97eacb6162eadba9f)()|Gets the value of MinRankAllowed.|
|void|[SetMinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1adc06ad883b89d55b6f8c63f1149e5715)(float NewValue)|Sets the value of MinRankAllowed.|
|float &|[GetMinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a7913ae4db4909f1a4135aaa77d8d9633)()|Gets the value of MinVarianceAllowed.|
|const float &|[GetMinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a9f633c1a6701c7abe5e10a85f0cfa817)()|Gets the value of MinVarianceAllowed.|
|void|[SetMinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a64dc67c01187c98b55f22853e1278d0a)(float NewValue)|Sets the value of MinVarianceAllowed.|
|float &|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1aac940d1331ba26a27087ff346d019778)()|Gets the value of TrueskillBeta_Optional, regardless of it having been set.|
|const float &|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a206201e611011abbb7e10c92d2ee5e75)()|Gets the value of TrueskillBeta_Optional, regardless of it having been set.|
|const float &|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a8e3e29243afbcc3e1587e989109ecd20)(const float & DefaultValue)|Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1abc9f4944067e7afa709dc6d5663ef46f)(float & OutValue)|Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetTrueskillBetaOrNull](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a2b06b632cf54dc91074261ce9e442329)()|Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetTrueskillBetaOrNull](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a00a65a31426e840a8a6972dd5ff95e4d)()|Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ab213f91e60f32e0e0cf0503369a20607)(float NewValue)|Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.|
|void|[ClearTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a86aed2aa40decb5799ef1cea0e97d97e)()|Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.|
|float &|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1aad4e25d66e0327976c7c73e89ad7fbb6)()|Gets the value of TrueskillTau_Optional, regardless of it having been set.|
|const float &|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ae8908e798445bda96b3a555d45d4d917)()|Gets the value of TrueskillTau_Optional, regardless of it having been set.|
|const float &|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1af01cef0e2bedde08ecc7ee5a066602f1)(const float & DefaultValue)|Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a2faa7b28e35485fdf4699353a286d19f)(float & OutValue)|Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetTrueskillTauOrNull](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1aee4494bb073de7b602a28a8a96c0fce2)()|Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetTrueskillTauOrNull](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a48d498dfe565ee706ddff0780b864379)()|Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a68331340f65e2bd48eaae0323c0080a7)(float NewValue)|Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.|
|void|[ClearTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a1f6df6686b9aaf54d31134ef41378608)()|Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.|
|float &|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1aae31464fb1721cd2c8589e79afc6e468)()|Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.|
|const float &|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a06f2bc044267a960724c9a25fceb3af1)()|Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.|
|const float &|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a62717e36d73d555848220c9cd29a0aa9)(const float & DefaultValue)|Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a44f49ebf6c944e3ec499678ceb1ffa9d)(float & OutValue)|Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetTrueskillDrawProbabilityOrNull](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a25c456e48c6f3550849bcd1b346567d7)()|Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetTrueskillDrawProbabilityOrNull](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1ae5d71272c4dca53e97cf1da0a9b5819b)()|Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1a1f1b8bc3ecb7fbc1afb3ea2de43beadc)(float NewValue)|Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.|
|void|[ClearTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig_1af25247567c675b7e7b00750864fe6f52)()|Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.|
## Public Attributes



### `RankId` <a id="structFRHAPI__RankConfig_1a39272f875949d434f53f6f1a36e3b476"></a>

`int32 FRHAPI_RankConfig::RankId`

ID for this rank type.




### `DefaultRank` <a id="structFRHAPI__RankConfig_1a570d0708073bb8b7fc260b31e6393e7e"></a>

`float FRHAPI_RankConfig::DefaultRank`

The default rank value for this rank id. Will be used when players do not have any rank history.




### `DefaultVariance` <a id="structFRHAPI__RankConfig_1a23015f77bd5ebf13d8b619352123a154"></a>

`float FRHAPI_RankConfig::DefaultVariance`

The default skill variance for this rank id. Will be used when players do not have any rank history.




### `MaxRankAllowed` <a id="structFRHAPI__RankConfig_1ae69b0a3c5e8e2bf082bdbecbd627bfd4"></a>

`float FRHAPI_RankConfig::MaxRankAllowed`

The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.




### `MinRankAllowed` <a id="structFRHAPI__RankConfig_1a3066610bbe1a9a01a69b3c60a7f51310"></a>

`float FRHAPI_RankConfig::MinRankAllowed`

The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.




### `MinVarianceAllowed` <a id="structFRHAPI__RankConfig_1a156b1b648f115b8912bbfe0a407bf6f3"></a>

`float FRHAPI_RankConfig::MinVarianceAllowed`

The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.




### `TrueskillBeta_Optional` <a id="structFRHAPI__RankConfig_1a7b6cfd4661aace1eb22d9beec999ae3d"></a>

`float FRHAPI_RankConfig::TrueskillBeta_Optional`

The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.




### `TrueskillBeta_IsSet` <a id="structFRHAPI__RankConfig_1a17627a7b7e79c031163c3ef6d94eef75"></a>

`bool FRHAPI_RankConfig::TrueskillBeta_IsSet`

true if TrueskillBeta_Optional has been set to a value




### `TrueskillTau_Optional` <a id="structFRHAPI__RankConfig_1a11bbf87c3c2a3f05c5cd68151567e76c"></a>

`float FRHAPI_RankConfig::TrueskillTau_Optional`

Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)




### `TrueskillTau_IsSet` <a id="structFRHAPI__RankConfig_1ab39e312a255d2c70350b92375f4373fa"></a>

`bool FRHAPI_RankConfig::TrueskillTau_IsSet`

true if TrueskillTau_Optional has been set to a value




### `TrueskillDrawProbability_Optional` <a id="structFRHAPI__RankConfig_1a3bde7cd20fd2247786c36c72a917b8d5"></a>

`float FRHAPI_RankConfig::TrueskillDrawProbability_Optional`

The percent probability of a draw occuring in the game. Must be in [0, 1)




### `TrueskillDrawProbability_IsSet` <a id="structFRHAPI__RankConfig_1ad6aa6ffcec6b52b755056c3f504f0cf0"></a>

`bool FRHAPI_RankConfig::TrueskillDrawProbability_IsSet`

true if TrueskillDrawProbability_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__RankConfig_1a5eeb6337adc9e525f4fe923e3793e857"></a>

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



### `WriteJson` <a id="structFRHAPI__RankConfig_1a618a68dc968bb1b200eb61be35e658f2"></a>

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



### `GetRankId` <a id="structFRHAPI__RankConfig_1a66e760b397c5bcc2f500183878595b95"></a>

int32 & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `GetRankId` <a id="structFRHAPI__RankConfig_1a0bed9ba67407f4dd48f60e07ba3925fb"></a>

const int32 & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `SetRankId` <a id="structFRHAPI__RankConfig_1ad6bac2166b6c3d19da237641f25006fa"></a>

void SetRankId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RankId.




### `IsRankIdDefaultValue` <a id="structFRHAPI__RankConfig_1a04f0f5bcfe8d4f777e205c55b8c3ad47"></a>

bool IsRankIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RankId matches the default value.




### `SetRankIdToDefault` <a id="structFRHAPI__RankConfig_1ace9a1488b2bcd56f0c3cd45e2dd72ff2"></a>

void SetRankIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RankId to its default




### `GetDefaultRank` <a id="structFRHAPI__RankConfig_1a86c054035bff432932963d8227713085"></a>

float & GetDefaultRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultRank.




### `GetDefaultRank` <a id="structFRHAPI__RankConfig_1a311cedcad58f159894c700ac467b945a"></a>

const float & GetDefaultRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultRank.




### `SetDefaultRank` <a id="structFRHAPI__RankConfig_1ac69b90e6bf04aabe53e7cf7bd5f026d9"></a>

void SetDefaultRank(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of DefaultRank.




### `GetDefaultVariance` <a id="structFRHAPI__RankConfig_1a882245963eacb486430fb09b5503d69d"></a>

float & GetDefaultVariance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultVariance.




### `GetDefaultVariance` <a id="structFRHAPI__RankConfig_1a754957559a43ec153109c7a020f69087"></a>

const float & GetDefaultVariance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultVariance.




### `SetDefaultVariance` <a id="structFRHAPI__RankConfig_1a65019b60abe5b9ce0dacbd271c9ec3c7"></a>

void SetDefaultVariance(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of DefaultVariance.




### `GetMaxRankAllowed` <a id="structFRHAPI__RankConfig_1a1264fa134be1f8cbc215da9718204438"></a>

float & GetMaxRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxRankAllowed.




### `GetMaxRankAllowed` <a id="structFRHAPI__RankConfig_1a16820416c6f8e0604fd8a9567b34db5a"></a>

const float & GetMaxRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxRankAllowed.




### `SetMaxRankAllowed` <a id="structFRHAPI__RankConfig_1ad2168d447fc145c0a4d08e47f8872639"></a>

void SetMaxRankAllowed(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MaxRankAllowed.




### `GetMinRankAllowed` <a id="structFRHAPI__RankConfig_1a9b6f753f632176c52ed3db6d46671ab5"></a>

float & GetMinRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinRankAllowed.




### `GetMinRankAllowed` <a id="structFRHAPI__RankConfig_1ae1f1add3f01d8be97eacb6162eadba9f"></a>

const float & GetMinRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinRankAllowed.




### `SetMinRankAllowed` <a id="structFRHAPI__RankConfig_1adc06ad883b89d55b6f8c63f1149e5715"></a>

void SetMinRankAllowed(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MinRankAllowed.




### `GetMinVarianceAllowed` <a id="structFRHAPI__RankConfig_1a7913ae4db4909f1a4135aaa77d8d9633"></a>

float & GetMinVarianceAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinVarianceAllowed.




### `GetMinVarianceAllowed` <a id="structFRHAPI__RankConfig_1a9f633c1a6701c7abe5e10a85f0cfa817"></a>

const float & GetMinVarianceAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinVarianceAllowed.




### `SetMinVarianceAllowed` <a id="structFRHAPI__RankConfig_1a64dc67c01187c98b55f22853e1278d0a"></a>

void SetMinVarianceAllowed(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MinVarianceAllowed.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfig_1aac940d1331ba26a27087ff346d019778"></a>

float & GetTrueskillBeta()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillBeta_Optional, regardless of it having been set.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfig_1a206201e611011abbb7e10c92d2ee5e75"></a>

const float & GetTrueskillBeta()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillBeta_Optional, regardless of it having been set.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfig_1a8e3e29243afbcc3e1587e989109ecd20"></a>

const float & GetTrueskillBeta(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfig_1abc9f4944067e7afa709dc6d5663ef46f"></a>

bool GetTrueskillBeta(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.




### `GetTrueskillBetaOrNull` <a id="structFRHAPI__RankConfig_1a2b06b632cf54dc91074261ce9e442329"></a>

float * GetTrueskillBetaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.




### `GetTrueskillBetaOrNull` <a id="structFRHAPI__RankConfig_1a00a65a31426e840a8a6972dd5ff95e4d"></a>

const float * GetTrueskillBetaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.




### `SetTrueskillBeta` <a id="structFRHAPI__RankConfig_1ab213f91e60f32e0e0cf0503369a20607"></a>

void SetTrueskillBeta(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.




### `ClearTrueskillBeta` <a id="structFRHAPI__RankConfig_1a86aed2aa40decb5799ef1cea0e97d97e"></a>

void ClearTrueskillBeta()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfig_1aad4e25d66e0327976c7c73e89ad7fbb6"></a>

float & GetTrueskillTau()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillTau_Optional, regardless of it having been set.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfig_1ae8908e798445bda96b3a555d45d4d917"></a>

const float & GetTrueskillTau()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillTau_Optional, regardless of it having been set.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfig_1af01cef0e2bedde08ecc7ee5a066602f1"></a>

const float & GetTrueskillTau(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfig_1a2faa7b28e35485fdf4699353a286d19f"></a>

bool GetTrueskillTau(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.




### `GetTrueskillTauOrNull` <a id="structFRHAPI__RankConfig_1aee4494bb073de7b602a28a8a96c0fce2"></a>

float * GetTrueskillTauOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.




### `GetTrueskillTauOrNull` <a id="structFRHAPI__RankConfig_1a48d498dfe565ee706ddff0780b864379"></a>

const float * GetTrueskillTauOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.




### `SetTrueskillTau` <a id="structFRHAPI__RankConfig_1a68331340f65e2bd48eaae0323c0080a7"></a>

void SetTrueskillTau(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.




### `ClearTrueskillTau` <a id="structFRHAPI__RankConfig_1a1f6df6686b9aaf54d31134ef41378608"></a>

void ClearTrueskillTau()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfig_1aae31464fb1721cd2c8589e79afc6e468"></a>

float & GetTrueskillDrawProbability()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfig_1a06f2bc044267a960724c9a25fceb3af1"></a>

const float & GetTrueskillDrawProbability()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfig_1a62717e36d73d555848220c9cd29a0aa9"></a>

const float & GetTrueskillDrawProbability(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfig_1a44f49ebf6c944e3ec499678ceb1ffa9d"></a>

bool GetTrueskillDrawProbability(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.




### `GetTrueskillDrawProbabilityOrNull` <a id="structFRHAPI__RankConfig_1a25c456e48c6f3550849bcd1b346567d7"></a>

float * GetTrueskillDrawProbabilityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.




### `GetTrueskillDrawProbabilityOrNull` <a id="structFRHAPI__RankConfig_1ae5d71272c4dca53e97cf1da0a9b5819b"></a>

const float * GetTrueskillDrawProbabilityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.




### `SetTrueskillDrawProbability` <a id="structFRHAPI__RankConfig_1a1f1b8bc3ecb7fbc1afb3ea2de43beadc"></a>

void SetTrueskillDrawProbability(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.




### `ClearTrueskillDrawProbability` <a id="structFRHAPI__RankConfig_1af25247567c675b7e7b00750864fe6f52"></a>

void ClearTrueskillDrawProbability()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.





