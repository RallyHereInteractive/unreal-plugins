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
`public inline FORCEINLINE float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1aaa0551001c9d1ed7de661d8630402368)`()` | Gets the value of MaxMu.
`public inline FORCEINLINE const float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1ae4c92a96f6483a4b6f8a3db61fe3cde1)`() const` | Gets the value of MaxMu.
`public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1aaf2b38c2b2a091f9128878723a56863a)`(const float & NewValue)` | Sets the value of MaxMu.
`public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1a2ef7bc77ab0ebd966dd4eab042c69056)`(float && NewValue)` | Sets the value of MaxMu using move semantics.
`public inline FORCEINLINE float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a4aa4ea46e0993d14b7dc74513b17d9ce)`()` | Gets the value of MinMu.
`public inline FORCEINLINE const float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a9798c731ef8c9ab22f0cb23e509ab7d4)`() const` | Gets the value of MinMu.
`public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a93406928288ff4567c16e2d6f2015824)`(const float & NewValue)` | Sets the value of MinMu.
`public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a92d7ad7dcda75dc07031d96dbff35ba5)`(float && NewValue)` | Sets the value of MinMu using move semantics.
`public inline FORCEINLINE float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a5ca6a9711ab01222f2279baabe1eb38b)`()` | Gets the value of MinSigma.
`public inline FORCEINLINE const float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1ab2ad63a4012bb06de84edf7d0f95f4fd)`() const` | Gets the value of MinSigma.
`public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1aa2420e3a8fe991cbec2699f9e6c089b4)`(const float & NewValue)` | Sets the value of MinSigma.
`public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1a90578236fa89ee25ba48af09f7f8eeaa)`(float && NewValue)` | Sets the value of MinSigma using move semantics.
`public inline FORCEINLINE float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ae1186c5c4bb09b317d71e074afd56ffa)`()` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a446fb4a13ffe70b34dfde9e853fc1f61)`() const` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1af8f36afe28ffbb25c013aa9e1af59870)`(const float & DefaultValue) const` | Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a9be6c26e1b1e55da660f43e12ac6ad1d)`(float & OutValue) const` | Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1abaa583ae663e0036249e3de2e8a61d7c)`()` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a48ebdb9e5d07280a20b84ff0f3c6604c)`() const` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a91141498e75443a089b4766035e1bcdc)`(const float & NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true.
`public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1aab5a27346b1ab8724a4c7ce70ee2ba64)`(float && NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.
`public inline void `[`ClearBeta`](#structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f)`()` | Clears the value of Beta_Optional and sets Beta_IsSet to false.
`public inline FORCEINLINE float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1af2762795318bdba729c6972e6a5eb2f7)`()` | Gets the value of DefaultMu.
`public inline FORCEINLINE const float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a153caf1fecf807fc346a77e0ddee318f)`() const` | Gets the value of DefaultMu.
`public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a31f7427db49a98065b890205bdf76668)`(const float & NewValue)` | Sets the value of DefaultMu.
`public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1abd1d6bf8b6b75e40b18f3a360c18ccfc)`(float && NewValue)` | Sets the value of DefaultMu using move semantics.
`public inline FORCEINLINE float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a4a7c6bdc1c04d856b1f0180679c90882)`()` | Gets the value of DefaultSigma.
`public inline FORCEINLINE const float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a64cac85a1431c8c3baa90e4c4e2e2a12)`() const` | Gets the value of DefaultSigma.
`public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a6c259ebf6a8bc6f47466b89d6ab9466c)`(const float & NewValue)` | Sets the value of DefaultSigma.
`public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a6112bacf41f7cc073da32dd305107350)`(float && NewValue)` | Sets the value of DefaultSigma using move semantics.
`public inline FORCEINLINE float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a216ddf72261485b768281dbb0fc84d27)`()` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ac5ba0605dae4c4179a6cc1c080cb930f)`() const` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a32e29522b44dcc00545428bc51a0efae)`(const float & DefaultValue) const` | Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ae235f12978d089fd93a1be03595448b2)`(float & OutValue) const` | Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1aad25d27e48faa60f6a87ca63db384226)`()` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1ad6abaf7b07a62c8833b4e10b3819c354)`() const` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1adb7c6157796e8a530bfba0528e3adfa2)`(const float & NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.
`public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a6d4993c1b3c0f92b7484fcdec0fc03e5)`(float && NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.
`public inline void `[`ClearDrawProbability`](#structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc)`()` | Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.
`public inline FORCEINLINE float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a15f9efc433fef3358d4c3c9984eb7f39)`()` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a390a9f5314c187ab885b2efe6fcbd2ab)`() const` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a46de21683264a7494cf7598596fba7e9)`(const float & DefaultValue) const` | Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTau`](#structFRHAPI__CalculateRankConfig_1aaf7e2e20075435ab1e8077cb5717ab2e)`(float & OutValue) const` | Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1a02b7949a8c94a52f3147a737a6897e25)`()` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1a31c171df7a732202f1cbebc26c17305d)`() const` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1acb1a218a745d3bed834595389eba67da)`(const float & NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true.
`public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1aa1e9344ca509f92dec8e8781952222ca)`(float && NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.
`public inline void `[`ClearTau`](#structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32)`()` | Clears the value of Tau_Optional and sets Tau_IsSet to false.

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

#### `public inline FORCEINLINE float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1aaa0551001c9d1ed7de661d8630402368)`()` <a id="structFRHAPI__CalculateRankConfig_1aaa0551001c9d1ed7de661d8630402368"></a>

Gets the value of MaxMu.

#### `public inline FORCEINLINE const float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1ae4c92a96f6483a4b6f8a3db61fe3cde1)`() const` <a id="structFRHAPI__CalculateRankConfig_1ae4c92a96f6483a4b6f8a3db61fe3cde1"></a>

Gets the value of MaxMu.

#### `public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1aaf2b38c2b2a091f9128878723a56863a)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aaf2b38c2b2a091f9128878723a56863a"></a>

Sets the value of MaxMu.

#### `public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1a2ef7bc77ab0ebd966dd4eab042c69056)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a2ef7bc77ab0ebd966dd4eab042c69056"></a>

Sets the value of MaxMu using move semantics.

#### `public inline FORCEINLINE float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a4aa4ea46e0993d14b7dc74513b17d9ce)`()` <a id="structFRHAPI__CalculateRankConfig_1a4aa4ea46e0993d14b7dc74513b17d9ce"></a>

Gets the value of MinMu.

#### `public inline FORCEINLINE const float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a9798c731ef8c9ab22f0cb23e509ab7d4)`() const` <a id="structFRHAPI__CalculateRankConfig_1a9798c731ef8c9ab22f0cb23e509ab7d4"></a>

Gets the value of MinMu.

#### `public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a93406928288ff4567c16e2d6f2015824)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a93406928288ff4567c16e2d6f2015824"></a>

Sets the value of MinMu.

#### `public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a92d7ad7dcda75dc07031d96dbff35ba5)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a92d7ad7dcda75dc07031d96dbff35ba5"></a>

Sets the value of MinMu using move semantics.

#### `public inline FORCEINLINE float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a5ca6a9711ab01222f2279baabe1eb38b)`()` <a id="structFRHAPI__CalculateRankConfig_1a5ca6a9711ab01222f2279baabe1eb38b"></a>

Gets the value of MinSigma.

#### `public inline FORCEINLINE const float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1ab2ad63a4012bb06de84edf7d0f95f4fd)`() const` <a id="structFRHAPI__CalculateRankConfig_1ab2ad63a4012bb06de84edf7d0f95f4fd"></a>

Gets the value of MinSigma.

#### `public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1aa2420e3a8fe991cbec2699f9e6c089b4)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aa2420e3a8fe991cbec2699f9e6c089b4"></a>

Sets the value of MinSigma.

#### `public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1a90578236fa89ee25ba48af09f7f8eeaa)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a90578236fa89ee25ba48af09f7f8eeaa"></a>

Sets the value of MinSigma using move semantics.

#### `public inline FORCEINLINE float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ae1186c5c4bb09b317d71e074afd56ffa)`()` <a id="structFRHAPI__CalculateRankConfig_1ae1186c5c4bb09b317d71e074afd56ffa"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a446fb4a13ffe70b34dfde9e853fc1f61)`() const` <a id="structFRHAPI__CalculateRankConfig_1a446fb4a13ffe70b34dfde9e853fc1f61"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1af8f36afe28ffbb25c013aa9e1af59870)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1af8f36afe28ffbb25c013aa9e1af59870"></a>

Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a9be6c26e1b1e55da660f43e12ac6ad1d)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1a9be6c26e1b1e55da660f43e12ac6ad1d"></a>

Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1abaa583ae663e0036249e3de2e8a61d7c)`()` <a id="structFRHAPI__CalculateRankConfig_1abaa583ae663e0036249e3de2e8a61d7c"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a48ebdb9e5d07280a20b84ff0f3c6604c)`() const` <a id="structFRHAPI__CalculateRankConfig_1a48ebdb9e5d07280a20b84ff0f3c6604c"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a91141498e75443a089b4766035e1bcdc)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a91141498e75443a089b4766035e1bcdc"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1aab5a27346b1ab8724a4c7ce70ee2ba64)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aab5a27346b1ab8724a4c7ce70ee2ba64"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.

#### `public inline void `[`ClearBeta`](#structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f)`()` <a id="structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f"></a>

Clears the value of Beta_Optional and sets Beta_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1af2762795318bdba729c6972e6a5eb2f7)`()` <a id="structFRHAPI__CalculateRankConfig_1af2762795318bdba729c6972e6a5eb2f7"></a>

Gets the value of DefaultMu.

#### `public inline FORCEINLINE const float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a153caf1fecf807fc346a77e0ddee318f)`() const` <a id="structFRHAPI__CalculateRankConfig_1a153caf1fecf807fc346a77e0ddee318f"></a>

Gets the value of DefaultMu.

#### `public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a31f7427db49a98065b890205bdf76668)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a31f7427db49a98065b890205bdf76668"></a>

Sets the value of DefaultMu.

#### `public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1abd1d6bf8b6b75e40b18f3a360c18ccfc)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1abd1d6bf8b6b75e40b18f3a360c18ccfc"></a>

Sets the value of DefaultMu using move semantics.

#### `public inline FORCEINLINE float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a4a7c6bdc1c04d856b1f0180679c90882)`()` <a id="structFRHAPI__CalculateRankConfig_1a4a7c6bdc1c04d856b1f0180679c90882"></a>

Gets the value of DefaultSigma.

#### `public inline FORCEINLINE const float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a64cac85a1431c8c3baa90e4c4e2e2a12)`() const` <a id="structFRHAPI__CalculateRankConfig_1a64cac85a1431c8c3baa90e4c4e2e2a12"></a>

Gets the value of DefaultSigma.

#### `public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a6c259ebf6a8bc6f47466b89d6ab9466c)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a6c259ebf6a8bc6f47466b89d6ab9466c"></a>

Sets the value of DefaultSigma.

#### `public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a6112bacf41f7cc073da32dd305107350)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a6112bacf41f7cc073da32dd305107350"></a>

Sets the value of DefaultSigma using move semantics.

#### `public inline FORCEINLINE float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a216ddf72261485b768281dbb0fc84d27)`()` <a id="structFRHAPI__CalculateRankConfig_1a216ddf72261485b768281dbb0fc84d27"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ac5ba0605dae4c4179a6cc1c080cb930f)`() const` <a id="structFRHAPI__CalculateRankConfig_1ac5ba0605dae4c4179a6cc1c080cb930f"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a32e29522b44dcc00545428bc51a0efae)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1a32e29522b44dcc00545428bc51a0efae"></a>

Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1ae235f12978d089fd93a1be03595448b2)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1ae235f12978d089fd93a1be03595448b2"></a>

Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1aad25d27e48faa60f6a87ca63db384226)`()` <a id="structFRHAPI__CalculateRankConfig_1aad25d27e48faa60f6a87ca63db384226"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1ad6abaf7b07a62c8833b4e10b3819c354)`() const` <a id="structFRHAPI__CalculateRankConfig_1ad6abaf7b07a62c8833b4e10b3819c354"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1adb7c6157796e8a530bfba0528e3adfa2)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1adb7c6157796e8a530bfba0528e3adfa2"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a6d4993c1b3c0f92b7484fcdec0fc03e5)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a6d4993c1b3c0f92b7484fcdec0fc03e5"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.

#### `public inline void `[`ClearDrawProbability`](#structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc)`()` <a id="structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc"></a>

Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a15f9efc433fef3358d4c3c9984eb7f39)`()` <a id="structFRHAPI__CalculateRankConfig_1a15f9efc433fef3358d4c3c9984eb7f39"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a390a9f5314c187ab885b2efe6fcbd2ab)`() const` <a id="structFRHAPI__CalculateRankConfig_1a390a9f5314c187ab885b2efe6fcbd2ab"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a46de21683264a7494cf7598596fba7e9)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1a46de21683264a7494cf7598596fba7e9"></a>

Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTau`](#structFRHAPI__CalculateRankConfig_1aaf7e2e20075435ab1e8077cb5717ab2e)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1aaf7e2e20075435ab1e8077cb5717ab2e"></a>

Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1a02b7949a8c94a52f3147a737a6897e25)`()` <a id="structFRHAPI__CalculateRankConfig_1a02b7949a8c94a52f3147a737a6897e25"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1a31c171df7a732202f1cbebc26c17305d)`() const` <a id="structFRHAPI__CalculateRankConfig_1a31c171df7a732202f1cbebc26c17305d"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1acb1a218a745d3bed834595389eba67da)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1acb1a218a745d3bed834595389eba67da"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1aa1e9344ca509f92dec8e8781952222ca)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aa1e9344ca509f92dec8e8781952222ca"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.

#### `public inline void `[`ClearTau`](#structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32)`()` <a id="structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32"></a>

Clears the value of Tau_Optional and sets Tau_IsSet to false.

