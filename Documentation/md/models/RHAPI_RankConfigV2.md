# RHAPI_RankConfigV2 <a id="group__RHAPI__RankConfigV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfigV2`](#structFRHAPI__RankConfigV2) | Configuration about a specific rank type.

## struct `FRHAPI_RankConfigV2` <a id="structFRHAPI__RankConfigV2"></a>

```
struct FRHAPI_RankConfigV2
  : public FRHAPI_Model
```

Configuration about a specific rank type.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RankId`](#structFRHAPI__RankConfigV2_1a0307fdf5ca2bb48de8f16a89131ef79e) | ID for this rank type.
`public float `[`DefaultRank`](#structFRHAPI__RankConfigV2_1a0b46a92acd910e67c16844ebb3739eea) | The default rank value for this rank id. Will be used when players do not have any rank history.
`public float `[`DefaultVariance`](#structFRHAPI__RankConfigV2_1a92431cb7c6dd64c47977e47129dd888b) | The default skill variance for this rank id. Will be used when players do not have any rank history.
`public float `[`MaxRankAllowed`](#structFRHAPI__RankConfigV2_1a317963ec41e157bccf19a10b53bb0fe3) | The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.
`public float `[`MinRankAllowed`](#structFRHAPI__RankConfigV2_1a084fe0977522d57d645f1953a6b329f6) | The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.
`public float `[`MinVarianceAllowed`](#structFRHAPI__RankConfigV2_1a4acdddfe0030461d225fb33cc3c75805) | The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.
`public float `[`TrueskillBeta_Optional`](#structFRHAPI__RankConfigV2_1a6a88c111c767914cba346af07cbbc2a6) | The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.
`public bool `[`TrueskillBeta_IsSet`](#structFRHAPI__RankConfigV2_1a5a8735e6cedeeb6d6a59c16d1e0201b0) | true if TrueskillBeta_Optional has been set to a value
`public float `[`TrueskillTau_Optional`](#structFRHAPI__RankConfigV2_1a472d3e504a70acff2d6830c992203b43) | Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)
`public bool `[`TrueskillTau_IsSet`](#structFRHAPI__RankConfigV2_1a97e973921e1ab68f4e039f5918d5e89b) | true if TrueskillTau_Optional has been set to a value
`public float `[`TrueskillDrawProbability_Optional`](#structFRHAPI__RankConfigV2_1ad34752f209b18ad8976ede9d4667a13a) | The percent probability of a draw occuring in the game. Must be in [0, 1)
`public bool `[`TrueskillDrawProbability_IsSet`](#structFRHAPI__RankConfigV2_1aa8b93d2edc0479abe43fbedee6f701f0) | true if TrueskillDrawProbability_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigV2_1af66648241349616b12f96b0d3d5e994b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigV2_1ad183cc4417a5b84ddabdf1fde7de6210)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRankId`](#structFRHAPI__RankConfigV2_1a2f2912ca22958a1e364e79ad71d39393)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__RankConfigV2_1af7e27c93ad735283b4be8fa256992901)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankConfigV2_1ab534d3f3109cfb5f28beeb30c85bd759)`(FString NewValue)` | Sets the value of RankId.
`public inline float & `[`GetDefaultRank`](#structFRHAPI__RankConfigV2_1ad1bbecc52b5dcbcaea9b31bf41d268f4)`()` | Gets the value of DefaultRank.
`public inline const float & `[`GetDefaultRank`](#structFRHAPI__RankConfigV2_1a92e4ad0ee40f5b9652098797f23a0150)`() const` | Gets the value of DefaultRank.
`public inline void `[`SetDefaultRank`](#structFRHAPI__RankConfigV2_1a3a86503d05dad4e72f3b5f5f86e251e6)`(float NewValue)` | Sets the value of DefaultRank.
`public inline float & `[`GetDefaultVariance`](#structFRHAPI__RankConfigV2_1a9bf8bed7019f4a033ffe42dee713536f)`()` | Gets the value of DefaultVariance.
`public inline const float & `[`GetDefaultVariance`](#structFRHAPI__RankConfigV2_1a449809481f0feba823ab3a662363dd05)`() const` | Gets the value of DefaultVariance.
`public inline void `[`SetDefaultVariance`](#structFRHAPI__RankConfigV2_1af5bd7d3fe318de717ca01cdee002c25a)`(float NewValue)` | Sets the value of DefaultVariance.
`public inline float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfigV2_1ac74436ec4ef5cfe27294e77e56ad2017)`()` | Gets the value of MaxRankAllowed.
`public inline const float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfigV2_1aa1ec0e87cb18e1582754cb7d238bfd26)`() const` | Gets the value of MaxRankAllowed.
`public inline void `[`SetMaxRankAllowed`](#structFRHAPI__RankConfigV2_1abd90e3f08efb7867b704c4088e5b798b)`(float NewValue)` | Sets the value of MaxRankAllowed.
`public inline float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfigV2_1a94f6d5aa026f3044ba87f4dd38ffc6d1)`()` | Gets the value of MinRankAllowed.
`public inline const float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfigV2_1a22c1a0811c208d0403e29aed961c4845)`() const` | Gets the value of MinRankAllowed.
`public inline void `[`SetMinRankAllowed`](#structFRHAPI__RankConfigV2_1ac64c47e9a2a4a7cac8106092797d80e2)`(float NewValue)` | Sets the value of MinRankAllowed.
`public inline float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfigV2_1a0d0d3ba64b7788cca6f0c95f9bbb4ffc)`()` | Gets the value of MinVarianceAllowed.
`public inline const float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfigV2_1af381af7a32a4670954e3c233118b74b8)`() const` | Gets the value of MinVarianceAllowed.
`public inline void `[`SetMinVarianceAllowed`](#structFRHAPI__RankConfigV2_1a38b882565ad4e701907a9fdc349a7bc1)`(float NewValue)` | Sets the value of MinVarianceAllowed.
`public inline float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1a5867b672c7c6b9d4b000a0c515b7b910)`()` | Gets the value of TrueskillBeta_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1a9a1068c5e8c4e2bf0f3ee8f3a3c818f3)`() const` | Gets the value of TrueskillBeta_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1a3ff080d727fb16a87039a12f29b1df34)`(const float & DefaultValue) const` | Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1ab075da2f6ce335a3eb6846b641707dfa)`(float & OutValue) const` | Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfigV2_1a1f0e0185f88cff5e4a42038853c2071a)`()` | Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfigV2_1a3f6e72f5309f4970c50d47f9783375af)`() const` | Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTrueskillBeta`](#structFRHAPI__RankConfigV2_1ab9d326c4617b22659a07d9d8e19c5b49)`(float NewValue)` | Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.
`public inline void `[`ClearTrueskillBeta`](#structFRHAPI__RankConfigV2_1adbbc2e9485ee59c9212e0ab5b1790a85)`()` | Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.
`public inline float & `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1aac3539692a2cd7aab7446ff5bd6581bd)`()` | Gets the value of TrueskillTau_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1ac6809502f19487a84745955c6d9b5e26)`() const` | Gets the value of TrueskillTau_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1a2094b9b7324fc9fc16044bd1a16818df)`(const float & DefaultValue) const` | Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1a1d7c207c8dde42c1266ce1610a78444b)`(float & OutValue) const` | Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfigV2_1a40e7c70d027f4691d5c9332e1555120b)`()` | Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfigV2_1a9e889ab035f16ddf8498ec74e1c3b3f7)`() const` | Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTrueskillTau`](#structFRHAPI__RankConfigV2_1aab5fb62f89011a75bc5576bda5899c93)`(float NewValue)` | Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.
`public inline void `[`ClearTrueskillTau`](#structFRHAPI__RankConfigV2_1a13dc32d67f76adca5d37e7f83839ee75)`()` | Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.
`public inline float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a90fc2b0893f9b30b1e536a4c7677361e)`()` | Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a4b96c3897d064aff3552108cd40381c7)`() const` | Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a3b1024f75fc56390510f6d52303cef41)`(const float & DefaultValue) const` | Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1aae7ab3a26b757a5ed3ed99b6ea6ba161)`(float & OutValue) const` | Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfigV2_1aa77e6c41a9c61a0d7965757a805bcd00)`()` | Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfigV2_1a8b12d0563181b616d0642ea5240aa4a7)`() const` | Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a9edcf5d25b995093c7aceac404af3289)`(float NewValue)` | Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.
`public inline void `[`ClearTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1af4e7b4ce5dfe0bc52b2f11db6db50c5b)`()` | Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.

#### Members

#### `public FString `[`RankId`](#structFRHAPI__RankConfigV2_1a0307fdf5ca2bb48de8f16a89131ef79e) <a id="structFRHAPI__RankConfigV2_1a0307fdf5ca2bb48de8f16a89131ef79e"></a>

ID for this rank type.

<br>
#### `public float `[`DefaultRank`](#structFRHAPI__RankConfigV2_1a0b46a92acd910e67c16844ebb3739eea) <a id="structFRHAPI__RankConfigV2_1a0b46a92acd910e67c16844ebb3739eea"></a>

The default rank value for this rank id. Will be used when players do not have any rank history.

<br>
#### `public float `[`DefaultVariance`](#structFRHAPI__RankConfigV2_1a92431cb7c6dd64c47977e47129dd888b) <a id="structFRHAPI__RankConfigV2_1a92431cb7c6dd64c47977e47129dd888b"></a>

The default skill variance for this rank id. Will be used when players do not have any rank history.

<br>
#### `public float `[`MaxRankAllowed`](#structFRHAPI__RankConfigV2_1a317963ec41e157bccf19a10b53bb0fe3) <a id="structFRHAPI__RankConfigV2_1a317963ec41e157bccf19a10b53bb0fe3"></a>

The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.

<br>
#### `public float `[`MinRankAllowed`](#structFRHAPI__RankConfigV2_1a084fe0977522d57d645f1953a6b329f6) <a id="structFRHAPI__RankConfigV2_1a084fe0977522d57d645f1953a6b329f6"></a>

The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.

<br>
#### `public float `[`MinVarianceAllowed`](#structFRHAPI__RankConfigV2_1a4acdddfe0030461d225fb33cc3c75805) <a id="structFRHAPI__RankConfigV2_1a4acdddfe0030461d225fb33cc3c75805"></a>

The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.

<br>
#### `public float `[`TrueskillBeta_Optional`](#structFRHAPI__RankConfigV2_1a6a88c111c767914cba346af07cbbc2a6) <a id="structFRHAPI__RankConfigV2_1a6a88c111c767914cba346af07cbbc2a6"></a>

The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.

<br>
#### `public bool `[`TrueskillBeta_IsSet`](#structFRHAPI__RankConfigV2_1a5a8735e6cedeeb6d6a59c16d1e0201b0) <a id="structFRHAPI__RankConfigV2_1a5a8735e6cedeeb6d6a59c16d1e0201b0"></a>

true if TrueskillBeta_Optional has been set to a value

<br>
#### `public float `[`TrueskillTau_Optional`](#structFRHAPI__RankConfigV2_1a472d3e504a70acff2d6830c992203b43) <a id="structFRHAPI__RankConfigV2_1a472d3e504a70acff2d6830c992203b43"></a>

Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)

<br>
#### `public bool `[`TrueskillTau_IsSet`](#structFRHAPI__RankConfigV2_1a97e973921e1ab68f4e039f5918d5e89b) <a id="structFRHAPI__RankConfigV2_1a97e973921e1ab68f4e039f5918d5e89b"></a>

true if TrueskillTau_Optional has been set to a value

<br>
#### `public float `[`TrueskillDrawProbability_Optional`](#structFRHAPI__RankConfigV2_1ad34752f209b18ad8976ede9d4667a13a) <a id="structFRHAPI__RankConfigV2_1ad34752f209b18ad8976ede9d4667a13a"></a>

The percent probability of a draw occuring in the game. Must be in [0, 1)

<br>
#### `public bool `[`TrueskillDrawProbability_IsSet`](#structFRHAPI__RankConfigV2_1aa8b93d2edc0479abe43fbedee6f701f0) <a id="structFRHAPI__RankConfigV2_1aa8b93d2edc0479abe43fbedee6f701f0"></a>

true if TrueskillDrawProbability_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigV2_1af66648241349616b12f96b0d3d5e994b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigV2_1af66648241349616b12f96b0d3d5e994b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigV2_1ad183cc4417a5b84ddabdf1fde7de6210)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfigV2_1ad183cc4417a5b84ddabdf1fde7de6210"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetRankId`](#structFRHAPI__RankConfigV2_1a2f2912ca22958a1e364e79ad71d39393)`()` <a id="structFRHAPI__RankConfigV2_1a2f2912ca22958a1e364e79ad71d39393"></a>

Gets the value of RankId.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__RankConfigV2_1af7e27c93ad735283b4be8fa256992901)`() const` <a id="structFRHAPI__RankConfigV2_1af7e27c93ad735283b4be8fa256992901"></a>

Gets the value of RankId.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__RankConfigV2_1ab534d3f3109cfb5f28beeb30c85bd759)`(FString NewValue)` <a id="structFRHAPI__RankConfigV2_1ab534d3f3109cfb5f28beeb30c85bd759"></a>

Sets the value of RankId.

<br>
#### `public inline float & `[`GetDefaultRank`](#structFRHAPI__RankConfigV2_1ad1bbecc52b5dcbcaea9b31bf41d268f4)`()` <a id="structFRHAPI__RankConfigV2_1ad1bbecc52b5dcbcaea9b31bf41d268f4"></a>

Gets the value of DefaultRank.

<br>
#### `public inline const float & `[`GetDefaultRank`](#structFRHAPI__RankConfigV2_1a92e4ad0ee40f5b9652098797f23a0150)`() const` <a id="structFRHAPI__RankConfigV2_1a92e4ad0ee40f5b9652098797f23a0150"></a>

Gets the value of DefaultRank.

<br>
#### `public inline void `[`SetDefaultRank`](#structFRHAPI__RankConfigV2_1a3a86503d05dad4e72f3b5f5f86e251e6)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1a3a86503d05dad4e72f3b5f5f86e251e6"></a>

Sets the value of DefaultRank.

<br>
#### `public inline float & `[`GetDefaultVariance`](#structFRHAPI__RankConfigV2_1a9bf8bed7019f4a033ffe42dee713536f)`()` <a id="structFRHAPI__RankConfigV2_1a9bf8bed7019f4a033ffe42dee713536f"></a>

Gets the value of DefaultVariance.

<br>
#### `public inline const float & `[`GetDefaultVariance`](#structFRHAPI__RankConfigV2_1a449809481f0feba823ab3a662363dd05)`() const` <a id="structFRHAPI__RankConfigV2_1a449809481f0feba823ab3a662363dd05"></a>

Gets the value of DefaultVariance.

<br>
#### `public inline void `[`SetDefaultVariance`](#structFRHAPI__RankConfigV2_1af5bd7d3fe318de717ca01cdee002c25a)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1af5bd7d3fe318de717ca01cdee002c25a"></a>

Sets the value of DefaultVariance.

<br>
#### `public inline float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfigV2_1ac74436ec4ef5cfe27294e77e56ad2017)`()` <a id="structFRHAPI__RankConfigV2_1ac74436ec4ef5cfe27294e77e56ad2017"></a>

Gets the value of MaxRankAllowed.

<br>
#### `public inline const float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfigV2_1aa1ec0e87cb18e1582754cb7d238bfd26)`() const` <a id="structFRHAPI__RankConfigV2_1aa1ec0e87cb18e1582754cb7d238bfd26"></a>

Gets the value of MaxRankAllowed.

<br>
#### `public inline void `[`SetMaxRankAllowed`](#structFRHAPI__RankConfigV2_1abd90e3f08efb7867b704c4088e5b798b)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1abd90e3f08efb7867b704c4088e5b798b"></a>

Sets the value of MaxRankAllowed.

<br>
#### `public inline float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfigV2_1a94f6d5aa026f3044ba87f4dd38ffc6d1)`()` <a id="structFRHAPI__RankConfigV2_1a94f6d5aa026f3044ba87f4dd38ffc6d1"></a>

Gets the value of MinRankAllowed.

<br>
#### `public inline const float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfigV2_1a22c1a0811c208d0403e29aed961c4845)`() const` <a id="structFRHAPI__RankConfigV2_1a22c1a0811c208d0403e29aed961c4845"></a>

Gets the value of MinRankAllowed.

<br>
#### `public inline void `[`SetMinRankAllowed`](#structFRHAPI__RankConfigV2_1ac64c47e9a2a4a7cac8106092797d80e2)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1ac64c47e9a2a4a7cac8106092797d80e2"></a>

Sets the value of MinRankAllowed.

<br>
#### `public inline float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfigV2_1a0d0d3ba64b7788cca6f0c95f9bbb4ffc)`()` <a id="structFRHAPI__RankConfigV2_1a0d0d3ba64b7788cca6f0c95f9bbb4ffc"></a>

Gets the value of MinVarianceAllowed.

<br>
#### `public inline const float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfigV2_1af381af7a32a4670954e3c233118b74b8)`() const` <a id="structFRHAPI__RankConfigV2_1af381af7a32a4670954e3c233118b74b8"></a>

Gets the value of MinVarianceAllowed.

<br>
#### `public inline void `[`SetMinVarianceAllowed`](#structFRHAPI__RankConfigV2_1a38b882565ad4e701907a9fdc349a7bc1)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1a38b882565ad4e701907a9fdc349a7bc1"></a>

Sets the value of MinVarianceAllowed.

<br>
#### `public inline float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1a5867b672c7c6b9d4b000a0c515b7b910)`()` <a id="structFRHAPI__RankConfigV2_1a5867b672c7c6b9d4b000a0c515b7b910"></a>

Gets the value of TrueskillBeta_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1a9a1068c5e8c4e2bf0f3ee8f3a3c818f3)`() const` <a id="structFRHAPI__RankConfigV2_1a9a1068c5e8c4e2bf0f3ee8f3a3c818f3"></a>

Gets the value of TrueskillBeta_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1a3ff080d727fb16a87039a12f29b1df34)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV2_1a3ff080d727fb16a87039a12f29b1df34"></a>

Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTrueskillBeta`](#structFRHAPI__RankConfigV2_1ab075da2f6ce335a3eb6846b641707dfa)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV2_1ab075da2f6ce335a3eb6846b641707dfa"></a>

Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfigV2_1a1f0e0185f88cff5e4a42038853c2071a)`()` <a id="structFRHAPI__RankConfigV2_1a1f0e0185f88cff5e4a42038853c2071a"></a>

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfigV2_1a3f6e72f5309f4970c50d47f9783375af)`() const` <a id="structFRHAPI__RankConfigV2_1a3f6e72f5309f4970c50d47f9783375af"></a>

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTrueskillBeta`](#structFRHAPI__RankConfigV2_1ab9d326c4617b22659a07d9d8e19c5b49)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1ab9d326c4617b22659a07d9d8e19c5b49"></a>

Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.

<br>
#### `public inline void `[`ClearTrueskillBeta`](#structFRHAPI__RankConfigV2_1adbbc2e9485ee59c9212e0ab5b1790a85)`()` <a id="structFRHAPI__RankConfigV2_1adbbc2e9485ee59c9212e0ab5b1790a85"></a>

Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.

<br>
#### `public inline float & `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1aac3539692a2cd7aab7446ff5bd6581bd)`()` <a id="structFRHAPI__RankConfigV2_1aac3539692a2cd7aab7446ff5bd6581bd"></a>

Gets the value of TrueskillTau_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1ac6809502f19487a84745955c6d9b5e26)`() const` <a id="structFRHAPI__RankConfigV2_1ac6809502f19487a84745955c6d9b5e26"></a>

Gets the value of TrueskillTau_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1a2094b9b7324fc9fc16044bd1a16818df)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV2_1a2094b9b7324fc9fc16044bd1a16818df"></a>

Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTrueskillTau`](#structFRHAPI__RankConfigV2_1a1d7c207c8dde42c1266ce1610a78444b)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV2_1a1d7c207c8dde42c1266ce1610a78444b"></a>

Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfigV2_1a40e7c70d027f4691d5c9332e1555120b)`()` <a id="structFRHAPI__RankConfigV2_1a40e7c70d027f4691d5c9332e1555120b"></a>

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfigV2_1a9e889ab035f16ddf8498ec74e1c3b3f7)`() const` <a id="structFRHAPI__RankConfigV2_1a9e889ab035f16ddf8498ec74e1c3b3f7"></a>

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTrueskillTau`](#structFRHAPI__RankConfigV2_1aab5fb62f89011a75bc5576bda5899c93)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1aab5fb62f89011a75bc5576bda5899c93"></a>

Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.

<br>
#### `public inline void `[`ClearTrueskillTau`](#structFRHAPI__RankConfigV2_1a13dc32d67f76adca5d37e7f83839ee75)`()` <a id="structFRHAPI__RankConfigV2_1a13dc32d67f76adca5d37e7f83839ee75"></a>

Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.

<br>
#### `public inline float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a90fc2b0893f9b30b1e536a4c7677361e)`()` <a id="structFRHAPI__RankConfigV2_1a90fc2b0893f9b30b1e536a4c7677361e"></a>

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a4b96c3897d064aff3552108cd40381c7)`() const` <a id="structFRHAPI__RankConfigV2_1a4b96c3897d064aff3552108cd40381c7"></a>

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a3b1024f75fc56390510f6d52303cef41)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV2_1a3b1024f75fc56390510f6d52303cef41"></a>

Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1aae7ab3a26b757a5ed3ed99b6ea6ba161)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV2_1aae7ab3a26b757a5ed3ed99b6ea6ba161"></a>

Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfigV2_1aa77e6c41a9c61a0d7965757a805bcd00)`()` <a id="structFRHAPI__RankConfigV2_1aa77e6c41a9c61a0d7965757a805bcd00"></a>

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfigV2_1a8b12d0563181b616d0642ea5240aa4a7)`() const` <a id="structFRHAPI__RankConfigV2_1a8b12d0563181b616d0642ea5240aa4a7"></a>

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1a9edcf5d25b995093c7aceac404af3289)`(float NewValue)` <a id="structFRHAPI__RankConfigV2_1a9edcf5d25b995093c7aceac404af3289"></a>

Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.

<br>
#### `public inline void `[`ClearTrueskillDrawProbability`](#structFRHAPI__RankConfigV2_1af4e7b4ce5dfe0bc52b2f11db6db50c5b)`()` <a id="structFRHAPI__RankConfigV2_1af4e7b4ce5dfe0bc52b2f11db6db50c5b"></a>

Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.

<br>
