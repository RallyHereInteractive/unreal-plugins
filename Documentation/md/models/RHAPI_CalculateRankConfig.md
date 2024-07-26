# group `RHAPI_CalculateRankConfig` <a id="group__RHAPI__CalculateRankConfig"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankConfig_1aecf7bcc9f044e58e48bbd69beb4d605e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1a01e875b1c5405db4eeaee1d10969c20c)`()` | Gets the value of MaxMu.
`public inline const float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1a5efbdbd92e3310b2c0d065658a96aee9)`() const` | Gets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1acd0691d3a265c65bdbc4ed53ee5c95a1)`(const float & NewValue)` | Sets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1ada8c10cc90d831b0d7d26fd12e863e8d)`(float && NewValue)` | Sets the value of MaxMu using move semantics.
`public inline float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a8c9850cef1c6597c2cc917bddf6a5c6d)`()` | Gets the value of MinMu.
`public inline const float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a659b162c3fc3b1dcbdff282763a933a6)`() const` | Gets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a03956277dd5186108c4877dc3a4c8457)`(const float & NewValue)` | Sets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1acfb9a9b85efc2bf24044959b742a11f0)`(float && NewValue)` | Sets the value of MinMu using move semantics.
`public inline float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1aa240cd5c9a58931a4f0bcbe2ff25ca)`()` | Gets the value of MinSigma.
`public inline const float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a454aad420aaf2c0a3edeb3d0bca9c3f7)`() const` | Gets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1db92d5410ab324006d7de2f79c67e54)`(const float & NewValue)` | Sets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1af325299b95a11b9cde86c724e682de78)`(float && NewValue)` | Sets the value of MinSigma using move semantics.
`public inline float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ab25c58e9f029e763adb363131977ddb2)`()` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a85b2fd03e49f10387d0462703a7e30a8)`() const` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ada72e80893b51a8d7edcb9d0e94c1562)`(const float & DefaultValue) const` | Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ae6b6e02bda307e46b1c93581ba06c082)`(float & OutValue) const` | Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a821fb89ebc2f76ef371b5cbb6bd4f20e)`()` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1ae48a028714c2e879087bf9f5fdb582d6)`() const` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a546a5075fb30f1f950780e5f92024e98)`(const float & NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true.
`public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a69eeb4efad2250cd07fc6ebea211bcfe)`(float && NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.
`public inline void `[`ClearBeta`](#structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f)`()` | Clears the value of Beta_Optional and sets Beta_IsSet to false.
`public inline bool `[`IsBetaSet`](#structFRHAPI__CalculateRankConfig_1aed263880d46483ed1dcd32a2cb9e0510)`() const` | Checks whether Beta_Optional has been set.
`public inline float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1aa5a30319843e114131387ef7185db60c)`()` | Gets the value of DefaultMu.
`public inline const float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a1250ed1a4960e9d415d4075463f212a2)`() const` | Gets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a70ec9ace8236f3ed7e94ec480b77d5a8)`(const float & NewValue)` | Sets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a8a6253e0ba7e4eb2b8dd02522e59ff89)`(float && NewValue)` | Sets the value of DefaultMu using move semantics.
`public inline float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a7c566cc0bca70428de2b938a20cbd773)`()` | Gets the value of DefaultSigma.
`public inline const float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1abbfc77b78927a98447ee545c2ded5f24)`() const` | Gets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1ab6a4a98e27ceef0508a076284292dc1c)`(const float & NewValue)` | Sets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1adc57901e38d777ce6a1b41a2de28d792)`(float && NewValue)` | Sets the value of DefaultSigma using move semantics.
`public inline float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a5781e5234e3ee2cbc899af9ad8cdf07b)`()` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1af2dad9338e825f62644345e6c93e38c3)`() const` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1af3d042adb4c5dbb6f9ac1a68ae396a96)`(const float & DefaultValue) const` | Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a8690278991530648b7799ce96259573e)`(float & OutValue) const` | Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1a4e4cd6eac7a100fdab05da09d51f1895)`()` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1a4bdcd8bab67320d187ee806bbb1e149b)`() const` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a390ec04720a84a62117eee8806cf02cf)`(const float & NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.
`public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1aa264dc773d707204165a1c2183f7f854)`(float && NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.
`public inline void `[`ClearDrawProbability`](#structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc)`()` | Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.
`public inline bool `[`IsDrawProbabilitySet`](#structFRHAPI__CalculateRankConfig_1ac25ef5d7af027fd9cf4e98e407b63ec0)`() const` | Checks whether DrawProbability_Optional has been set.
`public inline float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a73d471dd5f6edf8b62fe214765bc98c1)`()` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a58fa867c66313b36ba8e36cc02dc36df)`() const` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a582668d0443556a37c17a70e82f43d4c)`(const float & DefaultValue) const` | Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a3fa138cd2eed6f48fbeb36dc8adc3f01)`(float & OutValue) const` | Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1a0d5fb8cebe1f3358259cbbd2cf271de4)`()` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1aa8747b7cf394eb31ea8f7e7898ff2dc2)`() const` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankConfig_1aecf7bcc9f044e58e48bbd69beb4d605e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CalculateRankConfig_1aecf7bcc9f044e58e48bbd69beb4d605e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1a01e875b1c5405db4eeaee1d10969c20c)`()` <a id="structFRHAPI__CalculateRankConfig_1a01e875b1c5405db4eeaee1d10969c20c"></a>

Gets the value of MaxMu.

#### `public inline const float & `[`GetMaxMu`](#structFRHAPI__CalculateRankConfig_1a5efbdbd92e3310b2c0d065658a96aee9)`() const` <a id="structFRHAPI__CalculateRankConfig_1a5efbdbd92e3310b2c0d065658a96aee9"></a>

Gets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1acd0691d3a265c65bdbc4ed53ee5c95a1)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1acd0691d3a265c65bdbc4ed53ee5c95a1"></a>

Sets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__CalculateRankConfig_1ada8c10cc90d831b0d7d26fd12e863e8d)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1ada8c10cc90d831b0d7d26fd12e863e8d"></a>

Sets the value of MaxMu using move semantics.

#### `public inline float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a8c9850cef1c6597c2cc917bddf6a5c6d)`()` <a id="structFRHAPI__CalculateRankConfig_1a8c9850cef1c6597c2cc917bddf6a5c6d"></a>

Gets the value of MinMu.

#### `public inline const float & `[`GetMinMu`](#structFRHAPI__CalculateRankConfig_1a659b162c3fc3b1dcbdff282763a933a6)`() const` <a id="structFRHAPI__CalculateRankConfig_1a659b162c3fc3b1dcbdff282763a933a6"></a>

Gets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1a03956277dd5186108c4877dc3a4c8457)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a03956277dd5186108c4877dc3a4c8457"></a>

Sets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__CalculateRankConfig_1acfb9a9b85efc2bf24044959b742a11f0)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1acfb9a9b85efc2bf24044959b742a11f0"></a>

Sets the value of MinMu using move semantics.

#### `public inline float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1aa240cd5c9a58931a4f0bcbe2ff25ca)`()` <a id="structFRHAPI__CalculateRankConfig_1a1aa240cd5c9a58931a4f0bcbe2ff25ca"></a>

Gets the value of MinSigma.

#### `public inline const float & `[`GetMinSigma`](#structFRHAPI__CalculateRankConfig_1a454aad420aaf2c0a3edeb3d0bca9c3f7)`() const` <a id="structFRHAPI__CalculateRankConfig_1a454aad420aaf2c0a3edeb3d0bca9c3f7"></a>

Gets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1a1db92d5410ab324006d7de2f79c67e54)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a1db92d5410ab324006d7de2f79c67e54"></a>

Sets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__CalculateRankConfig_1af325299b95a11b9cde86c724e682de78)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1af325299b95a11b9cde86c724e682de78"></a>

Sets the value of MinSigma using move semantics.

#### `public inline float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ab25c58e9f029e763adb363131977ddb2)`()` <a id="structFRHAPI__CalculateRankConfig_1ab25c58e9f029e763adb363131977ddb2"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1a85b2fd03e49f10387d0462703a7e30a8)`() const` <a id="structFRHAPI__CalculateRankConfig_1a85b2fd03e49f10387d0462703a7e30a8"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ada72e80893b51a8d7edcb9d0e94c1562)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1ada72e80893b51a8d7edcb9d0e94c1562"></a>

Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBeta`](#structFRHAPI__CalculateRankConfig_1ae6b6e02bda307e46b1c93581ba06c082)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1ae6b6e02bda307e46b1c93581ba06c082"></a>

Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1a821fb89ebc2f76ef371b5cbb6bd4f20e)`()` <a id="structFRHAPI__CalculateRankConfig_1a821fb89ebc2f76ef371b5cbb6bd4f20e"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetBetaOrNull`](#structFRHAPI__CalculateRankConfig_1ae48a028714c2e879087bf9f5fdb582d6)`() const` <a id="structFRHAPI__CalculateRankConfig_1ae48a028714c2e879087bf9f5fdb582d6"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a546a5075fb30f1f950780e5f92024e98)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a546a5075fb30f1f950780e5f92024e98"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true.

#### `public inline void `[`SetBeta`](#structFRHAPI__CalculateRankConfig_1a69eeb4efad2250cd07fc6ebea211bcfe)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a69eeb4efad2250cd07fc6ebea211bcfe"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.

#### `public inline void `[`ClearBeta`](#structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f)`()` <a id="structFRHAPI__CalculateRankConfig_1a5495d0a7983f7f4ed73429427a9ba94f"></a>

Clears the value of Beta_Optional and sets Beta_IsSet to false.

#### `public inline bool `[`IsBetaSet`](#structFRHAPI__CalculateRankConfig_1aed263880d46483ed1dcd32a2cb9e0510)`() const` <a id="structFRHAPI__CalculateRankConfig_1aed263880d46483ed1dcd32a2cb9e0510"></a>

Checks whether Beta_Optional has been set.

#### `public inline float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1aa5a30319843e114131387ef7185db60c)`()` <a id="structFRHAPI__CalculateRankConfig_1aa5a30319843e114131387ef7185db60c"></a>

Gets the value of DefaultMu.

#### `public inline const float & `[`GetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a1250ed1a4960e9d415d4075463f212a2)`() const` <a id="structFRHAPI__CalculateRankConfig_1a1250ed1a4960e9d415d4075463f212a2"></a>

Gets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a70ec9ace8236f3ed7e94ec480b77d5a8)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a70ec9ace8236f3ed7e94ec480b77d5a8"></a>

Sets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__CalculateRankConfig_1a8a6253e0ba7e4eb2b8dd02522e59ff89)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a8a6253e0ba7e4eb2b8dd02522e59ff89"></a>

Sets the value of DefaultMu using move semantics.

#### `public inline float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1a7c566cc0bca70428de2b938a20cbd773)`()` <a id="structFRHAPI__CalculateRankConfig_1a7c566cc0bca70428de2b938a20cbd773"></a>

Gets the value of DefaultSigma.

#### `public inline const float & `[`GetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1abbfc77b78927a98447ee545c2ded5f24)`() const` <a id="structFRHAPI__CalculateRankConfig_1abbfc77b78927a98447ee545c2ded5f24"></a>

Gets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1ab6a4a98e27ceef0508a076284292dc1c)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1ab6a4a98e27ceef0508a076284292dc1c"></a>

Sets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__CalculateRankConfig_1adc57901e38d777ce6a1b41a2de28d792)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1adc57901e38d777ce6a1b41a2de28d792"></a>

Sets the value of DefaultSigma using move semantics.

#### `public inline float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a5781e5234e3ee2cbc899af9ad8cdf07b)`()` <a id="structFRHAPI__CalculateRankConfig_1a5781e5234e3ee2cbc899af9ad8cdf07b"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1af2dad9338e825f62644345e6c93e38c3)`() const` <a id="structFRHAPI__CalculateRankConfig_1af2dad9338e825f62644345e6c93e38c3"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1af3d042adb4c5dbb6f9ac1a68ae396a96)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1af3d042adb4c5dbb6f9ac1a68ae396a96"></a>

Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a8690278991530648b7799ce96259573e)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1a8690278991530648b7799ce96259573e"></a>

Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1a4e4cd6eac7a100fdab05da09d51f1895)`()` <a id="structFRHAPI__CalculateRankConfig_1a4e4cd6eac7a100fdab05da09d51f1895"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__CalculateRankConfig_1a4bdcd8bab67320d187ee806bbb1e149b)`() const` <a id="structFRHAPI__CalculateRankConfig_1a4bdcd8bab67320d187ee806bbb1e149b"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1a390ec04720a84a62117eee8806cf02cf)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1a390ec04720a84a62117eee8806cf02cf"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__CalculateRankConfig_1aa264dc773d707204165a1c2183f7f854)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aa264dc773d707204165a1c2183f7f854"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.

#### `public inline void `[`ClearDrawProbability`](#structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc)`()` <a id="structFRHAPI__CalculateRankConfig_1a986a6d4c10fd5c3a5b5c6b63f44837bc"></a>

Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.

#### `public inline bool `[`IsDrawProbabilitySet`](#structFRHAPI__CalculateRankConfig_1ac25ef5d7af027fd9cf4e98e407b63ec0)`() const` <a id="structFRHAPI__CalculateRankConfig_1ac25ef5d7af027fd9cf4e98e407b63ec0"></a>

Checks whether DrawProbability_Optional has been set.

#### `public inline float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a73d471dd5f6edf8b62fe214765bc98c1)`()` <a id="structFRHAPI__CalculateRankConfig_1a73d471dd5f6edf8b62fe214765bc98c1"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a58fa867c66313b36ba8e36cc02dc36df)`() const` <a id="structFRHAPI__CalculateRankConfig_1a58fa867c66313b36ba8e36cc02dc36df"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a582668d0443556a37c17a70e82f43d4c)`(const float & DefaultValue) const` <a id="structFRHAPI__CalculateRankConfig_1a582668d0443556a37c17a70e82f43d4c"></a>

Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTau`](#structFRHAPI__CalculateRankConfig_1a3fa138cd2eed6f48fbeb36dc8adc3f01)`(float & OutValue) const` <a id="structFRHAPI__CalculateRankConfig_1a3fa138cd2eed6f48fbeb36dc8adc3f01"></a>

Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1a0d5fb8cebe1f3358259cbbd2cf271de4)`()` <a id="structFRHAPI__CalculateRankConfig_1a0d5fb8cebe1f3358259cbbd2cf271de4"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetTauOrNull`](#structFRHAPI__CalculateRankConfig_1aa8747b7cf394eb31ea8f7e7898ff2dc2)`() const` <a id="structFRHAPI__CalculateRankConfig_1aa8747b7cf394eb31ea8f7e7898ff2dc2"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1aa626c0274e3b64de482cf49451bc5269)`(const float & NewValue)` <a id="structFRHAPI__CalculateRankConfig_1aa626c0274e3b64de482cf49451bc5269"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true.

#### `public inline void `[`SetTau`](#structFRHAPI__CalculateRankConfig_1ae55c3d98ea367092635b7fe8431c2d39)`(float && NewValue)` <a id="structFRHAPI__CalculateRankConfig_1ae55c3d98ea367092635b7fe8431c2d39"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.

#### `public inline void `[`ClearTau`](#structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32)`()` <a id="structFRHAPI__CalculateRankConfig_1a31d8369cc30a32d57dfde8ff2b296c32"></a>

Clears the value of Tau_Optional and sets Tau_IsSet to false.

#### `public inline bool `[`IsTauSet`](#structFRHAPI__CalculateRankConfig_1a3a2da481c54a7edd7e87504342c54233)`() const` <a id="structFRHAPI__CalculateRankConfig_1a3a2da481c54a7edd7e87504342c54233"></a>

Checks whether Tau_Optional has been set.

