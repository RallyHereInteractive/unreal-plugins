---
title: RHAPI_CalculateRankConfig
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CalculateRankConfig`](#structFRHAPI__CalculateRankConfig) | Config about how to recalculate ranks.

## struct `FRHAPI_CalculateRankConfig` <a id="structFRHAPI__CalculateRankConfig"></a>

```
struct FRHAPI_CalculateRankConfig
  : public FRHAPI_Model
```

Config about how to recalculate ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`MaxMu`](#structFRHAPI__CalculateRankConfig_1a10b8234c2a2c9e7a1b16cf3f16b8c83c) | The maximum mu value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.
`public float `[`MinMu`](#structFRHAPI__CalculateRankConfig_1a16bdc3b3129fced77daa1230505403f0) | The minimum mu value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.
`public float `[`MinSigma`](#structFRHAPI__CalculateRankConfig_1ac03e51c45cb7b863ef29155329129197) | The minimum sigma allowed. Any attempts to update sigma to be lower than this get clamped to the minimum.
`public float `[`Beta_Optional`](#structFRHAPI__CalculateRankConfig_1a0dff0ed9e7fd0ffc76ae2f86bead1d46) | The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default sigma.
`public bool `[`Beta_IsSet`](#structFRHAPI__CalculateRankConfig_1ae9b625eda408e331d28ae1c898e7497e) | true if Beta_Optional has been set to a value
`public float `[`DefaultMu`](#structFRHAPI__CalculateRankConfig_1a946488b42d8e416dfe930383ad3192b7) | The default mu value for this rank id. Will be used when players do not have any rank history.
`public float `[`DefaultSigma`](#structFRHAPI__CalculateRankConfig_1a5d0fda657e6f1069112f897414b62cda) | The default sigma for this rank id. Will be used when players do not have any rank history.
`public float `[`DrawProbability_Optional`](#structFRHAPI__CalculateRankConfig_1aa9e82734106f9708d702cb74c2a55d3d) | The percent probability of a draw occuring in the game. Must be in [0, 1)
`public bool `[`DrawProbability_IsSet`](#structFRHAPI__CalculateRankConfig_1ab9bbc720ec57dc213e57387836d11331) | true if DrawProbability_Optional has been set to a value
`public float `[`Tau_Optional`](#structFRHAPI__CalculateRankConfig_1ad0320266fe4644fa05494fb8a8348f88) | Factor that determines how quickly a player's sigma is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_sigma * .01)
`public bool `[`Tau_IsSet`](#structFRHAPI__CalculateRankConfig_1a49fbdfba770543a4e59044bcff730caa) | true if Tau_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankConfig_1abe90ce86f518a05fe9f7a1faffe2cb5f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankConfig_1af7a1cd50cc7c5992afa769a376f3d376)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1a89845dce2297dd006ea1aad36af70db4)`()` | Gets the value of MaxMu.
`public inline const float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1afda0fa8000d4ec1d9fe918e509a29071)`() const` | Gets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1acd0691d3a265c65bdbc4ed53ee5c95a1)`(const float & NewValue)` | Sets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1ada8c10cc90d831b0d7d26fd12e863e8d)`(float && NewValue)` | Sets the value of MaxMu using move semantics.
`public inline float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a07c1e91f987ef72440b7b0e875738fc1)`()` | Gets the value of MinMu.
`public inline const float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1ac810606a223bd5a01dd75baf9184ba01)`() const` | Gets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a03956277dd5186108c4877dc3a4c8457)`(const float & NewValue)` | Sets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1acfb9a9b85efc2bf24044959b742a11f0)`(float && NewValue)` | Sets the value of MinMu using move semantics.
`public inline float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1c925d81cb275e8a96cba8c3573d0a86)`()` | Gets the value of MinSigma.
`public inline const float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1ab47c849f71308c3af23751daf96f3fca)`() const` | Gets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1db92d5410ab324006d7de2f79c67e54)`(const float & NewValue)` | Sets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1af325299b95a11b9cde86c724e682de78)`(float && NewValue)` | Sets the value of MinSigma using move semantics.
`public inline float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a7f73b98edf57dc8bd1eeca8d47150505)`()` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a00f3c4a4c66066aed58dd38cedce45f1)`() const` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a7d26032843d8772adf944fbda3d5462d)`(const float & DefaultValue) const` | Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ae6b6e02bda307e46b1c93581ba06c082)`(float & OutValue) const` | Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a47284cd06182d102e82bb1fc65ce78cc)`()` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a62c2aeec4f25620e5290463c29a0bcdb)`() const` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a546a5075fb30f1f950780e5f92024e98)`(const float & NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true.
`public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a69eeb4efad2250cd07fc6ebea211bcfe)`(float && NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.
`public inline void `[`ClearBeta`](#structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f)`()` | Clears the value of Beta_Optional and sets Beta_IsSet to false.
`public inline bool `[`IsBetaSet`](#structFRHAPI__CalculateRankConfig_1aed263880d46483ed1dcd32a2cb9e0510)`() const` | Checks whether Beta_Optional has been set.
`public inline float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1aa498348a1163551c987027ca48d156f3)`()` | Gets the value of DefaultMu.
`public inline const float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1af02c12b8bd2f81162b943783e60d74ea)`() const` | Gets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a70ec9ace8236f3ed7e94ec480b77d5a8)`(const float & NewValue)` | Sets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a8a6253e0ba7e4eb2b8dd02522e59ff89)`(float && NewValue)` | Sets the value of DefaultMu using move semantics.
`public inline float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1aad0910c7af56991ab158c668fb48d19b)`()` | Gets the value of DefaultSigma.
`public inline const float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a5da52349db1e3f4413d0274e67c31835)`() const` | Gets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1ab6a4a98e27ceef0508a076284292dc1c)`(const float & NewValue)` | Sets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1adc57901e38d777ce6a1b41a2de28d792)`(float && NewValue)` | Sets the value of DefaultSigma using move semantics.
`public inline float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ab4db5d38958890273e346c3ab573abe7)`()` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ae34758676f6f1de19859ad8a53b30565)`() const` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1aba505899d22f8fc17a0e8c36121c8a91)`(const float & DefaultValue) const` | Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a8690278991530648b7799ce96259573e)`(float & OutValue) const` | Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1a5b5c7f567764e73d08d9249afd0c8ef6)`()` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1aa1d5c26ecb52db9623aba34ecb07206e)`() const` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a390ec04720a84a62117eee8806cf02cf)`(const float & NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.
`public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1aa264dc773d707204165a1c2183f7f854)`(float && NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.
`public inline void `[`ClearDrawProbability`](#structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc)`()` | Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.
`public inline bool `[`IsDrawProbabilitySet`](#structFRHAPI__CalculateRankConfig_1ac25ef5d7af027fd9cf4e98e407b63ec0)`() const` | Checks whether DrawProbability_Optional has been set.
`public inline float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1ab9d7cead553d3204c42975483ec6b659)`()` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1ac339e82b28f02dbc2462e4c7de968d88)`() const` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1af2a8ce844fcf6c52b5881593aa20ec8b)`(const float & DefaultValue) const` | Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a3fa138cd2eed6f48fbeb36dc8adc3f01)`(float & OutValue) const` | Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1ab25567f2880b782f58cd29c7b2e59074)`()` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1af3062dc8b8875a4855250f150d6dd782)`() const` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1aa626c0274e3b64de482cf49451bc5269)`(const float & NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true.
`public inline void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1ae55c3d98ea367092635b7fe8431c2d39)`(float && NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.
`public inline void `[`ClearTau`](#structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32)`()` | Clears the value of Tau_Optional and sets Tau_IsSet to false.
`public inline bool `[`IsTauSet`](#structFRHAPI__CalculateRankConfig_1a3a2da481c54a7edd7e87504342c54233)`() const` | Checks whether Tau_Optional has been set.

### Members

#### `public float `[`MaxMu`](#structFRHAPI__CalculateRankConfig_1a10b8234c2a2c9e7a1b16cf3f16b8c83c) <a id="structFRHAPI__CalculateRankConfig_1a10b8234c2a2c9e7a1b16cf3f16b8c83c"></a>

The maximum mu value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.

#### `public float `[`MinMu`](#structFRHAPI__CalculateRankConfig_1a16bdc3b3129fced77daa1230505403f0) <a id="structFRHAPI__CalculateRankConfig_1a16bdc3b3129fced77daa1230505403f0"></a>

The minimum mu value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.

#### `public float `[`MinSigma`](#structFRHAPI__CalculateRankConfig_1ac03e51c45cb7b863ef29155329129197) <a id="structFRHAPI__CalculateRankConfig_1ac03e51c45cb7b863ef29155329129197"></a>

The minimum sigma allowed. Any attempts to update sigma to be lower than this get clamped to the minimum.

#### `public float `[`Beta_Optional`](#structFRHAPI__CalculateRankConfig_1a0dff0ed9e7fd0ffc76ae2f86bead1d46) <a id="structFRHAPI__CalculateRankConfig_1a0dff0ed9e7fd0ffc76ae2f86bead1d46"></a>

The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default sigma.

#### `public bool `[`Beta_IsSet`](#structFRHAPI__CalculateRankConfig_1ae9b625eda408e331d28ae1c898e7497e) <a id="structFRHAPI__CalculateRankConfig_1ae9b625eda408e331d28ae1c898e7497e"></a>

true if Beta_Optional has been set to a value

#### `public float `[`DefaultMu`](#structFRHAPI__CalculateRankConfig_1a946488b42d8e416dfe930383ad3192b7) <a id="structFRHAPI__CalculateRankConfig_1a946488b42d8e416dfe930383ad3192b7"></a>

The default mu value for this rank id. Will be used when players do not have any rank history.

#### `public float `[`DefaultSigma`](#structFRHAPI__CalculateRankConfig_1a5d0fda657e6f1069112f897414b62cda) <a id="structFRHAPI__CalculateRankConfig_1a5d0fda657e6f1069112f897414b62cda"></a>

The default sigma for this rank id. Will be used when players do not have any rank history.

#### `public float `[`DrawProbability_Optional`](#structFRHAPI__CalculateRankConfig_1aa9e82734106f9708d702cb74c2a55d3d) <a id="structFRHAPI__CalculateRankConfig_1aa9e82734106f9708d702cb74c2a55d3d"></a>

The percent probability of a draw occuring in the game. Must be in [0, 1)

#### `public bool `[`DrawProbability_IsSet`](#structFRHAPI__CalculateRankConfig_1ab9bbc720ec57dc213e57387836d11331) <a id="structFRHAPI__CalculateRankConfig_1ab9bbc720ec57dc213e57387836d11331"></a>

true if DrawProbability_Optional has been set to a value

#### `public float `[`Tau_Optional`](#structFRHAPI__CalculateRankConfig_1ad0320266fe4644fa05494fb8a8348f88) <a id="structFRHAPI__CalculateRankConfig_1ad0320266fe4644fa05494fb8a8348f88"></a>

Factor that determines how quickly a player's sigma is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_sigma * .01)

#### `public bool `[`Tau_IsSet`](#structFRHAPI__CalculateRankConfig_1a49fbdfba770543a4e59044bcff730caa) <a id="structFRHAPI__CalculateRankConfig_1a49fbdfba770543a4e59044bcff730caa"></a>

true if Tau_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankConfig_1abe90ce86f518a05fe9f7a1faffe2cb5f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CalculateRankConfig_1abe90ce86f518a05fe9f7a1faffe2cb5f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankConfig_1af7a1cd50cc7c5992afa769a376f3d376)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CalculateRankConfig_1af7a1cd50cc7c5992afa769a376f3d376"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1a89845dce2297dd006ea1aad36af70db4)`()` <a id="structFRHAPI__CalculateRankConfig_1a89845dce2297dd006ea1aad36af70db4"></a>

Gets the value of MaxMu.

#### `public inline const float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1afda0fa8000d4ec1d9fe918e509a29071)`() const` <a id="structFRHAPI__CalculateRankConfig_1afda0fa8000d4ec1d9fe918e509a29071"></a>

Gets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1acd0691d3a265c65bdbc4ed53ee5c95a1)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1acd0691d3a265c65bdbc4ed53ee5c95a1"></a>

Sets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1ada8c10cc90d831b0d7d26fd12e863e8d)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1ada8c10cc90d831b0d7d26fd12e863e8d"></a>

Sets the value of MaxMu using move semantics.

#### `public inline float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a07c1e91f987ef72440b7b0e875738fc1)`()` <a id="structFRHAPI__CalculateRankConfig_1a07c1e91f987ef72440b7b0e875738fc1"></a>

Gets the value of MinMu.

#### `public inline const float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1ac810606a223bd5a01dd75baf9184ba01)`() const` <a id="structFRHAPI__CalculateRankConfig_1ac810606a223bd5a01dd75baf9184ba01"></a>

Gets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a03956277dd5186108c4877dc3a4c8457)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a03956277dd5186108c4877dc3a4c8457"></a>

Sets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1acfb9a9b85efc2bf24044959b742a11f0)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1acfb9a9b85efc2bf24044959b742a11f0"></a>

Sets the value of MinMu using move semantics.

#### `public inline float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1c925d81cb275e8a96cba8c3573d0a86)`()` <a id="structFRHAPI__CalculateRankConfig_1a1c925d81cb275e8a96cba8c3573d0a86"></a>

Gets the value of MinSigma.

#### `public inline const float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1ab47c849f71308c3af23751daf96f3fca)`() const` <a id="structFRHAPI__CalculateRankConfig_1ab47c849f71308c3af23751daf96f3fca"></a>

Gets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1db92d5410ab324006d7de2f79c67e54)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a1db92d5410ab324006d7de2f79c67e54"></a>

Sets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1af325299b95a11b9cde86c724e682de78)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1af325299b95a11b9cde86c724e682de78"></a>

Sets the value of MinSigma using move semantics.

#### `public inline float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a7f73b98edf57dc8bd1eeca8d47150505)`()` <a id="structFRHAPI__CalculateRankConfig_1a7f73b98edf57dc8bd1eeca8d47150505"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a00f3c4a4c66066aed58dd38cedce45f1)`() const` <a id="structFRHAPI__CalculateRankConfig_1a00f3c4a4c66066aed58dd38cedce45f1"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a7d26032843d8772adf944fbda3d5462d)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1a7d26032843d8772adf944fbda3d5462d"></a>

Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ae6b6e02bda307e46b1c93581ba06c082)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1ae6b6e02bda307e46b1c93581ba06c082"></a>

Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a47284cd06182d102e82bb1fc65ce78cc)`()` <a id="structFRHAPI__CalculateRankConfig_1a47284cd06182d102e82bb1fc65ce78cc"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a62c2aeec4f25620e5290463c29a0bcdb)`() const` <a id="structFRHAPI__CalculateRankConfig_1a62c2aeec4f25620e5290463c29a0bcdb"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a546a5075fb30f1f950780e5f92024e98)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a546a5075fb30f1f950780e5f92024e98"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true.

#### `public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a69eeb4efad2250cd07fc6ebea211bcfe)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a69eeb4efad2250cd07fc6ebea211bcfe"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.

#### `public inline void `[`ClearBeta`](#structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f)`()` <a id="structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f"></a>

Clears the value of Beta_Optional and sets Beta_IsSet to false.

#### `public inline bool `[`IsBetaSet`](#structFRHAPI__CalculateRankConfig_1aed263880d46483ed1dcd32a2cb9e0510)`() const` <a id="structFRHAPI__CalculateRankConfig_1aed263880d46483ed1dcd32a2cb9e0510"></a>

Checks whether Beta_Optional has been set.

#### `public inline float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1aa498348a1163551c987027ca48d156f3)`()` <a id="structFRHAPI__CalculateRankConfig_1aa498348a1163551c987027ca48d156f3"></a>

Gets the value of DefaultMu.

#### `public inline const float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1af02c12b8bd2f81162b943783e60d74ea)`() const` <a id="structFRHAPI__CalculateRankConfig_1af02c12b8bd2f81162b943783e60d74ea"></a>

Gets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a70ec9ace8236f3ed7e94ec480b77d5a8)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a70ec9ace8236f3ed7e94ec480b77d5a8"></a>

Sets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a8a6253e0ba7e4eb2b8dd02522e59ff89)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a8a6253e0ba7e4eb2b8dd02522e59ff89"></a>

Sets the value of DefaultMu using move semantics.

#### `public inline float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1aad0910c7af56991ab158c668fb48d19b)`()` <a id="structFRHAPI__CalculateRankConfig_1aad0910c7af56991ab158c668fb48d19b"></a>

Gets the value of DefaultSigma.

#### `public inline const float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a5da52349db1e3f4413d0274e67c31835)`() const` <a id="structFRHAPI__CalculateRankConfig_1a5da52349db1e3f4413d0274e67c31835"></a>

Gets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1ab6a4a98e27ceef0508a076284292dc1c)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1ab6a4a98e27ceef0508a076284292dc1c"></a>

Sets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1adc57901e38d777ce6a1b41a2de28d792)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1adc57901e38d777ce6a1b41a2de28d792"></a>

Sets the value of DefaultSigma using move semantics.

#### `public inline float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ab4db5d38958890273e346c3ab573abe7)`()` <a id="structFRHAPI__CalculateRankConfig_1ab4db5d38958890273e346c3ab573abe7"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ae34758676f6f1de19859ad8a53b30565)`() const` <a id="structFRHAPI__CalculateRankConfig_1ae34758676f6f1de19859ad8a53b30565"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1aba505899d22f8fc17a0e8c36121c8a91)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1aba505899d22f8fc17a0e8c36121c8a91"></a>

Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a8690278991530648b7799ce96259573e)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1a8690278991530648b7799ce96259573e"></a>

Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1a5b5c7f567764e73d08d9249afd0c8ef6)`()` <a id="structFRHAPI__CalculateRankConfig_1a5b5c7f567764e73d08d9249afd0c8ef6"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1aa1d5c26ecb52db9623aba34ecb07206e)`() const` <a id="structFRHAPI__CalculateRankConfig_1aa1d5c26ecb52db9623aba34ecb07206e"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a390ec04720a84a62117eee8806cf02cf)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a390ec04720a84a62117eee8806cf02cf"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1aa264dc773d707204165a1c2183f7f854)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aa264dc773d707204165a1c2183f7f854"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.

#### `public inline void `[`ClearDrawProbability`](#structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc)`()` <a id="structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc"></a>

Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.

#### `public inline bool `[`IsDrawProbabilitySet`](#structFRHAPI__CalculateRankConfig_1ac25ef5d7af027fd9cf4e98e407b63ec0)`() const` <a id="structFRHAPI__CalculateRankConfig_1ac25ef5d7af027fd9cf4e98e407b63ec0"></a>

Checks whether DrawProbability_Optional has been set.

#### `public inline float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1ab9d7cead553d3204c42975483ec6b659)`()` <a id="structFRHAPI__CalculateRankConfig_1ab9d7cead553d3204c42975483ec6b659"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1ac339e82b28f02dbc2462e4c7de968d88)`() const` <a id="structFRHAPI__CalculateRankConfig_1ac339e82b28f02dbc2462e4c7de968d88"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1af2a8ce844fcf6c52b5881593aa20ec8b)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1af2a8ce844fcf6c52b5881593aa20ec8b"></a>

Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a3fa138cd2eed6f48fbeb36dc8adc3f01)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1a3fa138cd2eed6f48fbeb36dc8adc3f01"></a>

Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1ab25567f2880b782f58cd29c7b2e59074)`()` <a id="structFRHAPI__CalculateRankConfig_1ab25567f2880b782f58cd29c7b2e59074"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1af3062dc8b8875a4855250f150d6dd782)`() const` <a id="structFRHAPI__CalculateRankConfig_1af3062dc8b8875a4855250f150d6dd782"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1aa626c0274e3b64de482cf49451bc5269)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aa626c0274e3b64de482cf49451bc5269"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true.

#### `public inline void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1ae55c3d98ea367092635b7fe8431c2d39)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1ae55c3d98ea367092635b7fe8431c2d39"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.

#### `public inline void `[`ClearTau`](#structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32)`()` <a id="structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32"></a>

Clears the value of Tau_Optional and sets Tau_IsSet to false.

#### `public inline bool `[`IsTauSet`](#structFRHAPI__CalculateRankConfig_1a3a2da481c54a7edd7e87504342c54233)`() const` <a id="structFRHAPI__CalculateRankConfig_1a3a2da481c54a7edd7e87504342c54233"></a>

Checks whether Tau_Optional has been set.

