# RHAPI_RankConfig <a id="group__RHAPI__RankConfig"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfig`](#structFRHAPI__RankConfig) | Configuration about a specific rank type.

## struct `FRHAPI_RankConfig` <a id="structFRHAPI__RankConfig"></a>

```
struct FRHAPI_RankConfig
  : public FRHAPI_Model
```

Configuration about a specific rank type.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`RankId`](#structFRHAPI__RankConfig_1a39272f875949d434f53f6f1a36e3b476) | ID for this rank type.
`public float `[`DefaultRank`](#structFRHAPI__RankConfig_1a570d0708073bb8b7fc260b31e6393e7e) | The default rank value for this rank id. Will be used when players do not have any rank history.
`public float `[`DefaultVariance`](#structFRHAPI__RankConfig_1a23015f77bd5ebf13d8b619352123a154) | The default skill variance for this rank id. Will be used when players do not have any rank history.
`public float `[`MaxRankAllowed`](#structFRHAPI__RankConfig_1ae69b0a3c5e8e2bf082bdbecbd627bfd4) | The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.
`public float `[`MinRankAllowed`](#structFRHAPI__RankConfig_1a3066610bbe1a9a01a69b3c60a7f51310) | The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.
`public float `[`MinVarianceAllowed`](#structFRHAPI__RankConfig_1a156b1b648f115b8912bbfe0a407bf6f3) | The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.
`public float `[`TrueskillBeta_Optional`](#structFRHAPI__RankConfig_1a7b6cfd4661aace1eb22d9beec999ae3d) | The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.
`public bool `[`TrueskillBeta_IsSet`](#structFRHAPI__RankConfig_1a17627a7b7e79c031163c3ef6d94eef75) | true if TrueskillBeta_Optional has been set to a value
`public float `[`TrueskillTau_Optional`](#structFRHAPI__RankConfig_1a11bbf87c3c2a3f05c5cd68151567e76c) | Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)
`public bool `[`TrueskillTau_IsSet`](#structFRHAPI__RankConfig_1ab39e312a255d2c70350b92375f4373fa) | true if TrueskillTau_Optional has been set to a value
`public float `[`TrueskillDrawProbability_Optional`](#structFRHAPI__RankConfig_1a3bde7cd20fd2247786c36c72a917b8d5) | The percent probability of a draw occuring in the game. Must be in [0, 1)
`public bool `[`TrueskillDrawProbability_IsSet`](#structFRHAPI__RankConfig_1ad6aa6ffcec6b52b755056c3f504f0cf0) | true if TrueskillDrawProbability_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfig_1a5eeb6337adc9e525f4fe923e3793e857)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfig_1a618a68dc968bb1b200eb61be35e658f2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetRankId`](#structFRHAPI__RankConfig_1a66e760b397c5bcc2f500183878595b95)`()` | Gets the value of RankId.
`public inline const int32 & `[`GetRankId`](#structFRHAPI__RankConfig_1a0bed9ba67407f4dd48f60e07ba3925fb)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankConfig_1ad6bac2166b6c3d19da237641f25006fa)`(int32 NewValue)` | Sets the value of RankId.
`public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__RankConfig_1a04f0f5bcfe8d4f777e205c55b8c3ad47)`() const` | Returns true if RankId matches the default value.
`public inline void `[`SetRankIdToDefault`](#structFRHAPI__RankConfig_1ace9a1488b2bcd56f0c3cd45e2dd72ff2)`()` | Sets the value of RankId to its default
`public inline float & `[`GetDefaultRank`](#structFRHAPI__RankConfig_1a86c054035bff432932963d8227713085)`()` | Gets the value of DefaultRank.
`public inline const float & `[`GetDefaultRank`](#structFRHAPI__RankConfig_1a311cedcad58f159894c700ac467b945a)`() const` | Gets the value of DefaultRank.
`public inline void `[`SetDefaultRank`](#structFRHAPI__RankConfig_1ac69b90e6bf04aabe53e7cf7bd5f026d9)`(float NewValue)` | Sets the value of DefaultRank.
`public inline float & `[`GetDefaultVariance`](#structFRHAPI__RankConfig_1a882245963eacb486430fb09b5503d69d)`()` | Gets the value of DefaultVariance.
`public inline const float & `[`GetDefaultVariance`](#structFRHAPI__RankConfig_1a754957559a43ec153109c7a020f69087)`() const` | Gets the value of DefaultVariance.
`public inline void `[`SetDefaultVariance`](#structFRHAPI__RankConfig_1a65019b60abe5b9ce0dacbd271c9ec3c7)`(float NewValue)` | Sets the value of DefaultVariance.
`public inline float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfig_1a1264fa134be1f8cbc215da9718204438)`()` | Gets the value of MaxRankAllowed.
`public inline const float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfig_1a16820416c6f8e0604fd8a9567b34db5a)`() const` | Gets the value of MaxRankAllowed.
`public inline void `[`SetMaxRankAllowed`](#structFRHAPI__RankConfig_1ad2168d447fc145c0a4d08e47f8872639)`(float NewValue)` | Sets the value of MaxRankAllowed.
`public inline float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfig_1a9b6f753f632176c52ed3db6d46671ab5)`()` | Gets the value of MinRankAllowed.
`public inline const float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfig_1ae1f1add3f01d8be97eacb6162eadba9f)`() const` | Gets the value of MinRankAllowed.
`public inline void `[`SetMinRankAllowed`](#structFRHAPI__RankConfig_1adc06ad883b89d55b6f8c63f1149e5715)`(float NewValue)` | Sets the value of MinRankAllowed.
`public inline float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfig_1a7913ae4db4909f1a4135aaa77d8d9633)`()` | Gets the value of MinVarianceAllowed.
`public inline const float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfig_1a9f633c1a6701c7abe5e10a85f0cfa817)`() const` | Gets the value of MinVarianceAllowed.
`public inline void `[`SetMinVarianceAllowed`](#structFRHAPI__RankConfig_1a64dc67c01187c98b55f22853e1278d0a)`(float NewValue)` | Sets the value of MinVarianceAllowed.
`public inline float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1aac940d1331ba26a27087ff346d019778)`()` | Gets the value of TrueskillBeta_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1a206201e611011abbb7e10c92d2ee5e75)`() const` | Gets the value of TrueskillBeta_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1a8e3e29243afbcc3e1587e989109ecd20)`(const float & DefaultValue) const` | Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1abc9f4944067e7afa709dc6d5663ef46f)`(float & OutValue) const` | Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfig_1a2b06b632cf54dc91074261ce9e442329)`()` | Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfig_1a00a65a31426e840a8a6972dd5ff95e4d)`() const` | Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTrueskillBeta`](#structFRHAPI__RankConfig_1ab213f91e60f32e0e0cf0503369a20607)`(float NewValue)` | Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.
`public inline void `[`ClearTrueskillBeta`](#structFRHAPI__RankConfig_1a86aed2aa40decb5799ef1cea0e97d97e)`()` | Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.
`public inline float & `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1aad4e25d66e0327976c7c73e89ad7fbb6)`()` | Gets the value of TrueskillTau_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1ae8908e798445bda96b3a555d45d4d917)`() const` | Gets the value of TrueskillTau_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1af01cef0e2bedde08ecc7ee5a066602f1)`(const float & DefaultValue) const` | Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1a2faa7b28e35485fdf4699353a286d19f)`(float & OutValue) const` | Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfig_1aee4494bb073de7b602a28a8a96c0fce2)`()` | Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfig_1a48d498dfe565ee706ddff0780b864379)`() const` | Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTrueskillTau`](#structFRHAPI__RankConfig_1a68331340f65e2bd48eaae0323c0080a7)`(float NewValue)` | Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.
`public inline void `[`ClearTrueskillTau`](#structFRHAPI__RankConfig_1a1f6df6686b9aaf54d31134ef41378608)`()` | Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.
`public inline float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1aae31464fb1721cd2c8589e79afc6e468)`()` | Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a06f2bc044267a960724c9a25fceb3af1)`() const` | Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a62717e36d73d555848220c9cd29a0aa9)`(const float & DefaultValue) const` | Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a44f49ebf6c944e3ec499678ceb1ffa9d)`(float & OutValue) const` | Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfig_1a25c456e48c6f3550849bcd1b346567d7)`()` | Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfig_1ae5d71272c4dca53e97cf1da0a9b5819b)`() const` | Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a1f1b8bc3ecb7fbc1afb3ea2de43beadc)`(float NewValue)` | Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.
`public inline void `[`ClearTrueskillDrawProbability`](#structFRHAPI__RankConfig_1af25247567c675b7e7b00750864fe6f52)`()` | Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.

#### Members

#### `public int32 `[`RankId`](#structFRHAPI__RankConfig_1a39272f875949d434f53f6f1a36e3b476) <a id="structFRHAPI__RankConfig_1a39272f875949d434f53f6f1a36e3b476"></a>

ID for this rank type.

<br>
#### `public float `[`DefaultRank`](#structFRHAPI__RankConfig_1a570d0708073bb8b7fc260b31e6393e7e) <a id="structFRHAPI__RankConfig_1a570d0708073bb8b7fc260b31e6393e7e"></a>

The default rank value for this rank id. Will be used when players do not have any rank history.

<br>
#### `public float `[`DefaultVariance`](#structFRHAPI__RankConfig_1a23015f77bd5ebf13d8b619352123a154) <a id="structFRHAPI__RankConfig_1a23015f77bd5ebf13d8b619352123a154"></a>

The default skill variance for this rank id. Will be used when players do not have any rank history.

<br>
#### `public float `[`MaxRankAllowed`](#structFRHAPI__RankConfig_1ae69b0a3c5e8e2bf082bdbecbd627bfd4) <a id="structFRHAPI__RankConfig_1ae69b0a3c5e8e2bf082bdbecbd627bfd4"></a>

The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.

<br>
#### `public float `[`MinRankAllowed`](#structFRHAPI__RankConfig_1a3066610bbe1a9a01a69b3c60a7f51310) <a id="structFRHAPI__RankConfig_1a3066610bbe1a9a01a69b3c60a7f51310"></a>

The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.

<br>
#### `public float `[`MinVarianceAllowed`](#structFRHAPI__RankConfig_1a156b1b648f115b8912bbfe0a407bf6f3) <a id="structFRHAPI__RankConfig_1a156b1b648f115b8912bbfe0a407bf6f3"></a>

The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum.

<br>
#### `public float `[`TrueskillBeta_Optional`](#structFRHAPI__RankConfig_1a7b6cfd4661aace1eb22d9beec999ae3d) <a id="structFRHAPI__RankConfig_1a7b6cfd4661aace1eb22d9beec999ae3d"></a>

The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance.

<br>
#### `public bool `[`TrueskillBeta_IsSet`](#structFRHAPI__RankConfig_1a17627a7b7e79c031163c3ef6d94eef75) <a id="structFRHAPI__RankConfig_1a17627a7b7e79c031163c3ef6d94eef75"></a>

true if TrueskillBeta_Optional has been set to a value

<br>
#### `public float `[`TrueskillTau_Optional`](#structFRHAPI__RankConfig_1a11bbf87c3c2a3f05c5cd68151567e76c) <a id="structFRHAPI__RankConfig_1a11bbf87c3c2a3f05c5cd68151567e76c"></a>

Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01)

<br>
#### `public bool `[`TrueskillTau_IsSet`](#structFRHAPI__RankConfig_1ab39e312a255d2c70350b92375f4373fa) <a id="structFRHAPI__RankConfig_1ab39e312a255d2c70350b92375f4373fa"></a>

true if TrueskillTau_Optional has been set to a value

<br>
#### `public float `[`TrueskillDrawProbability_Optional`](#structFRHAPI__RankConfig_1a3bde7cd20fd2247786c36c72a917b8d5) <a id="structFRHAPI__RankConfig_1a3bde7cd20fd2247786c36c72a917b8d5"></a>

The percent probability of a draw occuring in the game. Must be in [0, 1)

<br>
#### `public bool `[`TrueskillDrawProbability_IsSet`](#structFRHAPI__RankConfig_1ad6aa6ffcec6b52b755056c3f504f0cf0) <a id="structFRHAPI__RankConfig_1ad6aa6ffcec6b52b755056c3f504f0cf0"></a>

true if TrueskillDrawProbability_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfig_1a5eeb6337adc9e525f4fe923e3793e857)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfig_1a5eeb6337adc9e525f4fe923e3793e857"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfig_1a618a68dc968bb1b200eb61be35e658f2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfig_1a618a68dc968bb1b200eb61be35e658f2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetRankId`](#structFRHAPI__RankConfig_1a66e760b397c5bcc2f500183878595b95)`()` <a id="structFRHAPI__RankConfig_1a66e760b397c5bcc2f500183878595b95"></a>

Gets the value of RankId.

<br>
#### `public inline const int32 & `[`GetRankId`](#structFRHAPI__RankConfig_1a0bed9ba67407f4dd48f60e07ba3925fb)`() const` <a id="structFRHAPI__RankConfig_1a0bed9ba67407f4dd48f60e07ba3925fb"></a>

Gets the value of RankId.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__RankConfig_1ad6bac2166b6c3d19da237641f25006fa)`(int32 NewValue)` <a id="structFRHAPI__RankConfig_1ad6bac2166b6c3d19da237641f25006fa"></a>

Sets the value of RankId.

<br>
#### `public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__RankConfig_1a04f0f5bcfe8d4f777e205c55b8c3ad47)`() const` <a id="structFRHAPI__RankConfig_1a04f0f5bcfe8d4f777e205c55b8c3ad47"></a>

Returns true if RankId matches the default value.

<br>
#### `public inline void `[`SetRankIdToDefault`](#structFRHAPI__RankConfig_1ace9a1488b2bcd56f0c3cd45e2dd72ff2)`()` <a id="structFRHAPI__RankConfig_1ace9a1488b2bcd56f0c3cd45e2dd72ff2"></a>

Sets the value of RankId to its default

<br>
#### `public inline float & `[`GetDefaultRank`](#structFRHAPI__RankConfig_1a86c054035bff432932963d8227713085)`()` <a id="structFRHAPI__RankConfig_1a86c054035bff432932963d8227713085"></a>

Gets the value of DefaultRank.

<br>
#### `public inline const float & `[`GetDefaultRank`](#structFRHAPI__RankConfig_1a311cedcad58f159894c700ac467b945a)`() const` <a id="structFRHAPI__RankConfig_1a311cedcad58f159894c700ac467b945a"></a>

Gets the value of DefaultRank.

<br>
#### `public inline void `[`SetDefaultRank`](#structFRHAPI__RankConfig_1ac69b90e6bf04aabe53e7cf7bd5f026d9)`(float NewValue)` <a id="structFRHAPI__RankConfig_1ac69b90e6bf04aabe53e7cf7bd5f026d9"></a>

Sets the value of DefaultRank.

<br>
#### `public inline float & `[`GetDefaultVariance`](#structFRHAPI__RankConfig_1a882245963eacb486430fb09b5503d69d)`()` <a id="structFRHAPI__RankConfig_1a882245963eacb486430fb09b5503d69d"></a>

Gets the value of DefaultVariance.

<br>
#### `public inline const float & `[`GetDefaultVariance`](#structFRHAPI__RankConfig_1a754957559a43ec153109c7a020f69087)`() const` <a id="structFRHAPI__RankConfig_1a754957559a43ec153109c7a020f69087"></a>

Gets the value of DefaultVariance.

<br>
#### `public inline void `[`SetDefaultVariance`](#structFRHAPI__RankConfig_1a65019b60abe5b9ce0dacbd271c9ec3c7)`(float NewValue)` <a id="structFRHAPI__RankConfig_1a65019b60abe5b9ce0dacbd271c9ec3c7"></a>

Sets the value of DefaultVariance.

<br>
#### `public inline float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfig_1a1264fa134be1f8cbc215da9718204438)`()` <a id="structFRHAPI__RankConfig_1a1264fa134be1f8cbc215da9718204438"></a>

Gets the value of MaxRankAllowed.

<br>
#### `public inline const float & `[`GetMaxRankAllowed`](#structFRHAPI__RankConfig_1a16820416c6f8e0604fd8a9567b34db5a)`() const` <a id="structFRHAPI__RankConfig_1a16820416c6f8e0604fd8a9567b34db5a"></a>

Gets the value of MaxRankAllowed.

<br>
#### `public inline void `[`SetMaxRankAllowed`](#structFRHAPI__RankConfig_1ad2168d447fc145c0a4d08e47f8872639)`(float NewValue)` <a id="structFRHAPI__RankConfig_1ad2168d447fc145c0a4d08e47f8872639"></a>

Sets the value of MaxRankAllowed.

<br>
#### `public inline float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfig_1a9b6f753f632176c52ed3db6d46671ab5)`()` <a id="structFRHAPI__RankConfig_1a9b6f753f632176c52ed3db6d46671ab5"></a>

Gets the value of MinRankAllowed.

<br>
#### `public inline const float & `[`GetMinRankAllowed`](#structFRHAPI__RankConfig_1ae1f1add3f01d8be97eacb6162eadba9f)`() const` <a id="structFRHAPI__RankConfig_1ae1f1add3f01d8be97eacb6162eadba9f"></a>

Gets the value of MinRankAllowed.

<br>
#### `public inline void `[`SetMinRankAllowed`](#structFRHAPI__RankConfig_1adc06ad883b89d55b6f8c63f1149e5715)`(float NewValue)` <a id="structFRHAPI__RankConfig_1adc06ad883b89d55b6f8c63f1149e5715"></a>

Sets the value of MinRankAllowed.

<br>
#### `public inline float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfig_1a7913ae4db4909f1a4135aaa77d8d9633)`()` <a id="structFRHAPI__RankConfig_1a7913ae4db4909f1a4135aaa77d8d9633"></a>

Gets the value of MinVarianceAllowed.

<br>
#### `public inline const float & `[`GetMinVarianceAllowed`](#structFRHAPI__RankConfig_1a9f633c1a6701c7abe5e10a85f0cfa817)`() const` <a id="structFRHAPI__RankConfig_1a9f633c1a6701c7abe5e10a85f0cfa817"></a>

Gets the value of MinVarianceAllowed.

<br>
#### `public inline void `[`SetMinVarianceAllowed`](#structFRHAPI__RankConfig_1a64dc67c01187c98b55f22853e1278d0a)`(float NewValue)` <a id="structFRHAPI__RankConfig_1a64dc67c01187c98b55f22853e1278d0a"></a>

Sets the value of MinVarianceAllowed.

<br>
#### `public inline float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1aac940d1331ba26a27087ff346d019778)`()` <a id="structFRHAPI__RankConfig_1aac940d1331ba26a27087ff346d019778"></a>

Gets the value of TrueskillBeta_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1a206201e611011abbb7e10c92d2ee5e75)`() const` <a id="structFRHAPI__RankConfig_1a206201e611011abbb7e10c92d2ee5e75"></a>

Gets the value of TrueskillBeta_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1a8e3e29243afbcc3e1587e989109ecd20)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfig_1a8e3e29243afbcc3e1587e989109ecd20"></a>

Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTrueskillBeta`](#structFRHAPI__RankConfig_1abc9f4944067e7afa709dc6d5663ef46f)`(float & OutValue) const` <a id="structFRHAPI__RankConfig_1abc9f4944067e7afa709dc6d5663ef46f"></a>

Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfig_1a2b06b632cf54dc91074261ce9e442329)`()` <a id="structFRHAPI__RankConfig_1a2b06b632cf54dc91074261ce9e442329"></a>

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetTrueskillBetaOrNull`](#structFRHAPI__RankConfig_1a00a65a31426e840a8a6972dd5ff95e4d)`() const` <a id="structFRHAPI__RankConfig_1a00a65a31426e840a8a6972dd5ff95e4d"></a>

Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTrueskillBeta`](#structFRHAPI__RankConfig_1ab213f91e60f32e0e0cf0503369a20607)`(float NewValue)` <a id="structFRHAPI__RankConfig_1ab213f91e60f32e0e0cf0503369a20607"></a>

Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true.

<br>
#### `public inline void `[`ClearTrueskillBeta`](#structFRHAPI__RankConfig_1a86aed2aa40decb5799ef1cea0e97d97e)`()` <a id="structFRHAPI__RankConfig_1a86aed2aa40decb5799ef1cea0e97d97e"></a>

Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false.

<br>
#### `public inline float & `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1aad4e25d66e0327976c7c73e89ad7fbb6)`()` <a id="structFRHAPI__RankConfig_1aad4e25d66e0327976c7c73e89ad7fbb6"></a>

Gets the value of TrueskillTau_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1ae8908e798445bda96b3a555d45d4d917)`() const` <a id="structFRHAPI__RankConfig_1ae8908e798445bda96b3a555d45d4d917"></a>

Gets the value of TrueskillTau_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1af01cef0e2bedde08ecc7ee5a066602f1)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfig_1af01cef0e2bedde08ecc7ee5a066602f1"></a>

Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTrueskillTau`](#structFRHAPI__RankConfig_1a2faa7b28e35485fdf4699353a286d19f)`(float & OutValue) const` <a id="structFRHAPI__RankConfig_1a2faa7b28e35485fdf4699353a286d19f"></a>

Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfig_1aee4494bb073de7b602a28a8a96c0fce2)`()` <a id="structFRHAPI__RankConfig_1aee4494bb073de7b602a28a8a96c0fce2"></a>

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetTrueskillTauOrNull`](#structFRHAPI__RankConfig_1a48d498dfe565ee706ddff0780b864379)`() const` <a id="structFRHAPI__RankConfig_1a48d498dfe565ee706ddff0780b864379"></a>

Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTrueskillTau`](#structFRHAPI__RankConfig_1a68331340f65e2bd48eaae0323c0080a7)`(float NewValue)` <a id="structFRHAPI__RankConfig_1a68331340f65e2bd48eaae0323c0080a7"></a>

Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true.

<br>
#### `public inline void `[`ClearTrueskillTau`](#structFRHAPI__RankConfig_1a1f6df6686b9aaf54d31134ef41378608)`()` <a id="structFRHAPI__RankConfig_1a1f6df6686b9aaf54d31134ef41378608"></a>

Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false.

<br>
#### `public inline float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1aae31464fb1721cd2c8589e79afc6e468)`()` <a id="structFRHAPI__RankConfig_1aae31464fb1721cd2c8589e79afc6e468"></a>

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a06f2bc044267a960724c9a25fceb3af1)`() const` <a id="structFRHAPI__RankConfig_1a06f2bc044267a960724c9a25fceb3af1"></a>

Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a62717e36d73d555848220c9cd29a0aa9)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfig_1a62717e36d73d555848220c9cd29a0aa9"></a>

Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a44f49ebf6c944e3ec499678ceb1ffa9d)`(float & OutValue) const` <a id="structFRHAPI__RankConfig_1a44f49ebf6c944e3ec499678ceb1ffa9d"></a>

Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfig_1a25c456e48c6f3550849bcd1b346567d7)`()` <a id="structFRHAPI__RankConfig_1a25c456e48c6f3550849bcd1b346567d7"></a>

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetTrueskillDrawProbabilityOrNull`](#structFRHAPI__RankConfig_1ae5d71272c4dca53e97cf1da0a9b5819b)`() const` <a id="structFRHAPI__RankConfig_1ae5d71272c4dca53e97cf1da0a9b5819b"></a>

Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTrueskillDrawProbability`](#structFRHAPI__RankConfig_1a1f1b8bc3ecb7fbc1afb3ea2de43beadc)`(float NewValue)` <a id="structFRHAPI__RankConfig_1a1f1b8bc3ecb7fbc1afb3ea2de43beadc"></a>

Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true.

<br>
#### `public inline void `[`ClearTrueskillDrawProbability`](#structFRHAPI__RankConfig_1af25247567c675b7e7b00750864fe6f52)`()` <a id="structFRHAPI__RankConfig_1af25247567c675b7e7b00750864fe6f52"></a>

Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false.

<br>
