---
title: FRHAPI_RankConfigV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Configuration about a specific rank type.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[RankId](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a0307fdf5ca2bb48de8f16a89131ef79e)|ID for this rank type.|
|float|[DefaultRank](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a0b46a92acd910e67c16844ebb3739eea)|The default rank value for this rank id. Will be used when players do not have any rank history.|
|float|[DefaultVariance](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a92431cb7c6dd64c47977e47129dd888b)|The default skill variance for this rank id. Will be used when players do not have any rank history.|
|float|[MaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a317963ec41e157bccf19a10b53bb0fe3)|The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.|
|float|[MinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a084fe0977522d57d645f1953a6b329f6)|The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.|
|float|[MinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a4acdddfe0030461d225fb33cc3c75805)|The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.|
|float|[TrueskillBeta_Optional](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a6a88c111c767914cba346af07cbbc2a6)|The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.|
|bool|[TrueskillBeta_IsSet](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a5a8735e6cedeeb6d6a59c16d1e0201b0)|true if TrueskillBeta_Optional has been set to a value|
|float|[TrueskillTau_Optional](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a472d3e504a70acff2d6830c992203b43)|Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)|
|bool|[TrueskillTau_IsSet](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a97e973921e1ab68f4e039f5918d5e89b)|true if TrueskillTau_Optional has been set to a value|
|float|[TrueskillDrawProbability_Optional](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ad34752f209b18ad8976ede9d4667a13a)|The percent probability of a draw occuring in the game. Must be in [0, 1)|
|bool|[TrueskillDrawProbability_IsSet](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1aa8b93d2edc0479abe43fbedee6f701f0)|true if TrueskillDrawProbability_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1af66648241349616b12f96b0d3d5e994b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ad183cc4417a5b84ddabdf1fde7de6210)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetRankId](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a2f2912ca22958a1e364e79ad71d39393)()|Gets the value of RankId.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1af7e27c93ad735283b4be8fa256992901)()|Gets the value of RankId.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ab534d3f3109cfb5f28beeb30c85bd759)(FString NewValue)|Sets the value of RankId.|
|float &|[GetDefaultRank](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ad1bbecc52b5dcbcaea9b31bf41d268f4)()|Gets the value of DefaultRank.|
|const float &|[GetDefaultRank](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a92e4ad0ee40f5b9652098797f23a0150)()|Gets the value of DefaultRank.|
|void|[SetDefaultRank](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a3a86503d05dad4e72f3b5f5f86e251e6)(float NewValue)|Sets the value of DefaultRank.|
|float &|[GetDefaultVariance](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a9bf8bed7019f4a033ffe42dee713536f)()|Gets the value of DefaultVariance.|
|const float &|[GetDefaultVariance](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a449809481f0feba823ab3a662363dd05)()|Gets the value of DefaultVariance.|
|void|[SetDefaultVariance](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1af5bd7d3fe318de717ca01cdee002c25a)(float NewValue)|Sets the value of DefaultVariance.|
|float &|[GetMaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ac74436ec4ef5cfe27294e77e56ad2017)()|Gets the value of MaxRankAllowed.|
|const float &|[GetMaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1aa1ec0e87cb18e1582754cb7d238bfd26)()|Gets the value of MaxRankAllowed.|
|void|[SetMaxRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1abd90e3f08efb7867b704c4088e5b798b)(float NewValue)|Sets the value of MaxRankAllowed.|
|float &|[GetMinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a94f6d5aa026f3044ba87f4dd38ffc6d1)()|Gets the value of MinRankAllowed.|
|const float &|[GetMinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a22c1a0811c208d0403e29aed961c4845)()|Gets the value of MinRankAllowed.|
|void|[SetMinRankAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ac64c47e9a2a4a7cac8106092797d80e2)(float NewValue)|Sets the value of MinRankAllowed.|
|float &|[GetMinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a0d0d3ba64b7788cca6f0c95f9bbb4ffc)()|Gets the value of MinVarianceAllowed.|
|const float &|[GetMinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1af381af7a32a4670954e3c233118b74b8)()|Gets the value of MinVarianceAllowed.|
|void|[SetMinVarianceAllowed](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a38b882565ad4e701907a9fdc349a7bc1)(float NewValue)|Sets the value of MinVarianceAllowed.|
|float &|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a5867b672c7c6b9d4b000a0c515b7b910)()|Gets the value of TrueskillBeta_Optional, regardless of it having been set.|
|const float &|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a9a1068c5e8c4e2bf0f3ee8f3a3c818f3)()|Gets the value of TrueskillBeta_Optional, regardless of it having been set.|
|const float &|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a3ff080d727fb16a87039a12f29b1df34)(const float & DefaultValue)|Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ab075da2f6ce335a3eb6846b641707dfa)(float & OutValue)|Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetTrueskillBetaOrNull](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a1f0e0185f88cff5e4a42038853c2071a)()|Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetTrueskillBetaOrNull](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a3f6e72f5309f4970c50d47f9783375af)()|Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ab9d326c4617b22659a07d9d8e19c5b49)(float NewValue)|Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.|
|void|[ClearTrueskillBeta](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1adbbc2e9485ee59c9212e0ab5b1790a85)()|Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.|
|float &|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1aac3539692a2cd7aab7446ff5bd6581bd)()|Gets the value of TrueskillTau_Optional, regardless of it having been set.|
|const float &|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1ac6809502f19487a84745955c6d9b5e26)()|Gets the value of TrueskillTau_Optional, regardless of it having been set.|
|const float &|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a2094b9b7324fc9fc16044bd1a16818df)(const float & DefaultValue)|Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a1d7c207c8dde42c1266ce1610a78444b)(float & OutValue)|Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetTrueskillTauOrNull](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a40e7c70d027f4691d5c9332e1555120b)()|Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetTrueskillTauOrNull](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a9e889ab035f16ddf8498ec74e1c3b3f7)()|Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1aab5fb62f89011a75bc5576bda5899c93)(float NewValue)|Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.|
|void|[ClearTrueskillTau](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a13dc32d67f76adca5d37e7f83839ee75)()|Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.|
|float &|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a90fc2b0893f9b30b1e536a4c7677361e)()|Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.|
|const float &|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a4b96c3897d064aff3552108cd40381c7)()|Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.|
|const float &|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a3b1024f75fc56390510f6d52303cef41)(const float & DefaultValue)|Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1aae7ab3a26b757a5ed3ed99b6ea6ba161)(float & OutValue)|Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetTrueskillDrawProbabilityOrNull](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1aa77e6c41a9c61a0d7965757a805bcd00)()|Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetTrueskillDrawProbabilityOrNull](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a8b12d0563181b616d0642ea5240aa4a7)()|Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1a9edcf5d25b995093c7aceac404af3289)(float NewValue)|Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.|
|void|[ClearTrueskillDrawProbability](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2_1af4e7b4ce5dfe0bc52b2f11db6db50c5b)()|Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.|
## Public Attributes



### `RankId` <a id="structFRHAPI__RankConfigV2_1a0307fdf5ca2bb48de8f16a89131ef79e"></a>

`FString FRHAPI_RankConfigV2::RankId`

ID for this rank type.




### `DefaultRank` <a id="structFRHAPI__RankConfigV2_1a0b46a92acd910e67c16844ebb3739eea"></a>

`float FRHAPI_RankConfigV2::DefaultRank`

The default rank value for this rank id. Will be used when players do not have any rank history.




### `DefaultVariance` <a id="structFRHAPI__RankConfigV2_1a92431cb7c6dd64c47977e47129dd888b"></a>

`float FRHAPI_RankConfigV2::DefaultVariance`

The default skill variance for this rank id. Will be used when players do not have any rank history.




### `MaxRankAllowed` <a id="structFRHAPI__RankConfigV2_1a317963ec41e157bccf19a10b53bb0fe3"></a>

`float FRHAPI_RankConfigV2::MaxRankAllowed`

The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.




### `MinRankAllowed` <a id="structFRHAPI__RankConfigV2_1a084fe0977522d57d645f1953a6b329f6"></a>

`float FRHAPI_RankConfigV2::MinRankAllowed`

The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.




### `MinVarianceAllowed` <a id="structFRHAPI__RankConfigV2_1a4acdddfe0030461d225fb33cc3c75805"></a>

`float FRHAPI_RankConfigV2::MinVarianceAllowed`

The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.




### `TrueskillBeta_Optional` <a id="structFRHAPI__RankConfigV2_1a6a88c111c767914cba346af07cbbc2a6"></a>

`float FRHAPI_RankConfigV2::TrueskillBeta_Optional`

The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.




### `TrueskillBeta_IsSet` <a id="structFRHAPI__RankConfigV2_1a5a8735e6cedeeb6d6a59c16d1e0201b0"></a>

`bool FRHAPI_RankConfigV2::TrueskillBeta_IsSet`

true if TrueskillBeta_Optional has been set to a value




### `TrueskillTau_Optional` <a id="structFRHAPI__RankConfigV2_1a472d3e504a70acff2d6830c992203b43"></a>

`float FRHAPI_RankConfigV2::TrueskillTau_Optional`

Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)




### `TrueskillTau_IsSet` <a id="structFRHAPI__RankConfigV2_1a97e973921e1ab68f4e039f5918d5e89b"></a>

`bool FRHAPI_RankConfigV2::TrueskillTau_IsSet`

true if TrueskillTau_Optional has been set to a value




### `TrueskillDrawProbability_Optional` <a id="structFRHAPI__RankConfigV2_1ad34752f209b18ad8976ede9d4667a13a"></a>

`float FRHAPI_RankConfigV2::TrueskillDrawProbability_Optional`

The percent probability of a draw occuring in the game. Must be in [0, 1)




### `TrueskillDrawProbability_IsSet` <a id="structFRHAPI__RankConfigV2_1aa8b93d2edc0479abe43fbedee6f701f0"></a>

`bool FRHAPI_RankConfigV2::TrueskillDrawProbability_IsSet`

true if TrueskillDrawProbability_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__RankConfigV2_1af66648241349616b12f96b0d3d5e994b"></a>

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



### `WriteJson` <a id="structFRHAPI__RankConfigV2_1ad183cc4417a5b84ddabdf1fde7de6210"></a>

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



### `GetRankId` <a id="structFRHAPI__RankConfigV2_1a2f2912ca22958a1e364e79ad71d39393"></a>

FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `GetRankId` <a id="structFRHAPI__RankConfigV2_1af7e27c93ad735283b4be8fa256992901"></a>

const FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `SetRankId` <a id="structFRHAPI__RankConfigV2_1ab534d3f3109cfb5f28beeb30c85bd759"></a>

void SetRankId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RankId.




### `GetDefaultRank` <a id="structFRHAPI__RankConfigV2_1ad1bbecc52b5dcbcaea9b31bf41d268f4"></a>

float & GetDefaultRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultRank.




### `GetDefaultRank` <a id="structFRHAPI__RankConfigV2_1a92e4ad0ee40f5b9652098797f23a0150"></a>

const float & GetDefaultRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultRank.




### `SetDefaultRank` <a id="structFRHAPI__RankConfigV2_1a3a86503d05dad4e72f3b5f5f86e251e6"></a>

void SetDefaultRank(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of DefaultRank.




### `GetDefaultVariance` <a id="structFRHAPI__RankConfigV2_1a9bf8bed7019f4a033ffe42dee713536f"></a>

float & GetDefaultVariance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultVariance.




### `GetDefaultVariance` <a id="structFRHAPI__RankConfigV2_1a449809481f0feba823ab3a662363dd05"></a>

const float & GetDefaultVariance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultVariance.




### `SetDefaultVariance` <a id="structFRHAPI__RankConfigV2_1af5bd7d3fe318de717ca01cdee002c25a"></a>

void SetDefaultVariance(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of DefaultVariance.




### `GetMaxRankAllowed` <a id="structFRHAPI__RankConfigV2_1ac74436ec4ef5cfe27294e77e56ad2017"></a>

float & GetMaxRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxRankAllowed.




### `GetMaxRankAllowed` <a id="structFRHAPI__RankConfigV2_1aa1ec0e87cb18e1582754cb7d238bfd26"></a>

const float & GetMaxRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxRankAllowed.




### `SetMaxRankAllowed` <a id="structFRHAPI__RankConfigV2_1abd90e3f08efb7867b704c4088e5b798b"></a>

void SetMaxRankAllowed(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MaxRankAllowed.




### `GetMinRankAllowed` <a id="structFRHAPI__RankConfigV2_1a94f6d5aa026f3044ba87f4dd38ffc6d1"></a>

float & GetMinRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinRankAllowed.




### `GetMinRankAllowed` <a id="structFRHAPI__RankConfigV2_1a22c1a0811c208d0403e29aed961c4845"></a>

const float & GetMinRankAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinRankAllowed.




### `SetMinRankAllowed` <a id="structFRHAPI__RankConfigV2_1ac64c47e9a2a4a7cac8106092797d80e2"></a>

void SetMinRankAllowed(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MinRankAllowed.




### `GetMinVarianceAllowed` <a id="structFRHAPI__RankConfigV2_1a0d0d3ba64b7788cca6f0c95f9bbb4ffc"></a>

float & GetMinVarianceAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinVarianceAllowed.




### `GetMinVarianceAllowed` <a id="structFRHAPI__RankConfigV2_1af381af7a32a4670954e3c233118b74b8"></a>

const float & GetMinVarianceAllowed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinVarianceAllowed.




### `SetMinVarianceAllowed` <a id="structFRHAPI__RankConfigV2_1a38b882565ad4e701907a9fdc349a7bc1"></a>

void SetMinVarianceAllowed(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MinVarianceAllowed.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfigV2_1a5867b672c7c6b9d4b000a0c515b7b910"></a>

float & GetTrueskillBeta()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillBeta_Optional, regardless of it having been set.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfigV2_1a9a1068c5e8c4e2bf0f3ee8f3a3c818f3"></a>

const float & GetTrueskillBeta()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillBeta_Optional, regardless of it having been set.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfigV2_1a3ff080d727fb16a87039a12f29b1df34"></a>

const float & GetTrueskillBeta(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTrueskillBeta` <a id="structFRHAPI__RankConfigV2_1ab075da2f6ce335a3eb6846b641707dfa"></a>

bool GetTrueskillBeta(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.




### `GetTrueskillBetaOrNull` <a id="structFRHAPI__RankConfigV2_1a1f0e0185f88cff5e4a42038853c2071a"></a>

float * GetTrueskillBetaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.




### `GetTrueskillBetaOrNull` <a id="structFRHAPI__RankConfigV2_1a3f6e72f5309f4970c50d47f9783375af"></a>

const float * GetTrueskillBetaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.




### `SetTrueskillBeta` <a id="structFRHAPI__RankConfigV2_1ab9d326c4617b22659a07d9d8e19c5b49"></a>

void SetTrueskillBeta(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.




### `ClearTrueskillBeta` <a id="structFRHAPI__RankConfigV2_1adbbc2e9485ee59c9212e0ab5b1790a85"></a>

void ClearTrueskillBeta()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfigV2_1aac3539692a2cd7aab7446ff5bd6581bd"></a>

float & GetTrueskillTau()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillTau_Optional, regardless of it having been set.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfigV2_1ac6809502f19487a84745955c6d9b5e26"></a>

const float & GetTrueskillTau()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillTau_Optional, regardless of it having been set.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfigV2_1a2094b9b7324fc9fc16044bd1a16818df"></a>

const float & GetTrueskillTau(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTrueskillTau` <a id="structFRHAPI__RankConfigV2_1a1d7c207c8dde42c1266ce1610a78444b"></a>

bool GetTrueskillTau(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.




### `GetTrueskillTauOrNull` <a id="structFRHAPI__RankConfigV2_1a40e7c70d027f4691d5c9332e1555120b"></a>

float * GetTrueskillTauOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.




### `GetTrueskillTauOrNull` <a id="structFRHAPI__RankConfigV2_1a9e889ab035f16ddf8498ec74e1c3b3f7"></a>

const float * GetTrueskillTauOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.




### `SetTrueskillTau` <a id="structFRHAPI__RankConfigV2_1aab5fb62f89011a75bc5576bda5899c93"></a>

void SetTrueskillTau(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.




### `ClearTrueskillTau` <a id="structFRHAPI__RankConfigV2_1a13dc32d67f76adca5d37e7f83839ee75"></a>

void ClearTrueskillTau()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfigV2_1a90fc2b0893f9b30b1e536a4c7677361e"></a>

float & GetTrueskillDrawProbability()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfigV2_1a4b96c3897d064aff3552108cd40381c7"></a>

const float & GetTrueskillDrawProbability()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfigV2_1a3b1024f75fc56390510f6d52303cef41"></a>

const float & GetTrueskillDrawProbability(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTrueskillDrawProbability` <a id="structFRHAPI__RankConfigV2_1aae7ab3a26b757a5ed3ed99b6ea6ba161"></a>

bool GetTrueskillDrawProbability(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.




### `GetTrueskillDrawProbabilityOrNull` <a id="structFRHAPI__RankConfigV2_1aa77e6c41a9c61a0d7965757a805bcd00"></a>

float * GetTrueskillDrawProbabilityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.




### `GetTrueskillDrawProbabilityOrNull` <a id="structFRHAPI__RankConfigV2_1a8b12d0563181b616d0642ea5240aa4a7"></a>

const float * GetTrueskillDrawProbabilityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.




### `SetTrueskillDrawProbability` <a id="structFRHAPI__RankConfigV2_1a9edcf5d25b995093c7aceac404af3289"></a>

void SetTrueskillDrawProbability(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.




### `ClearTrueskillDrawProbability` <a id="structFRHAPI__RankConfigV2_1af4e7b4ce5dfe0bc52b2f11db6db50c5b"></a>

void ClearTrueskillDrawProbability()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.





