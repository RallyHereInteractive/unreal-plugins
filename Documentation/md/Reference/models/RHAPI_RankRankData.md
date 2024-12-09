---
title: RHAPI_RankRankData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankRankData`](#structFRHAPI__RankRankData) | Ranked data about a player&#39;s skill and confidence levels.

## struct `FRHAPI_RankRankData` <a id="structFRHAPI__RankRankData"></a>

```
struct FRHAPI_RankRankData
  : public FRHAPI_Model
```

Ranked data about a player&#39;s skill and confidence levels.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Mu`](#structFRHAPI__RankRankData_1a65657b053e2385f72a273f6da1ad0336) | A measure of perceived skill in a player.
`public float `[`Sigma`](#structFRHAPI__RankRankData_1a5a58728579185eec1dc6b2d68c70cc52) | A measure of how confident we are in the perceived skill (high sigma means low confidence)
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankRankData_1af743025e4e98a237501007181fe2baf3) | Custom key-value player rank data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RankRankData_1a836f74d8eeabc4b47bcbcb6f67e18a77) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RankRankData_1a1d74e64ab2a269bca24689628afe39d6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankRankData_1a2f3ec4b21189508011ffe66d4c26d38e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetMu`](#structFRHAPI__RankRankData_1a2eb61eecbd6a2984ecd13f6f02fb9b10)`()` | Gets the value of Mu.
`public inline const float & `[`GetMu`](#structFRHAPI__RankRankData_1a242c968f83da56a8fd5af93a417829a5)`() const` | Gets the value of Mu.
`public inline void `[`SetMu`](#structFRHAPI__RankRankData_1ab1db3987be4d19fd3c5b85237ed5be10)`(const float & NewValue)` | Sets the value of Mu.
`public inline void `[`SetMu`](#structFRHAPI__RankRankData_1a3f57235c80b05c65c2432401c300eb71)`(float && NewValue)` | Sets the value of Mu using move semantics.
`public inline float & `[`GetSigma`](#structFRHAPI__RankRankData_1a069294ccc367e9989864edb0e24150be)`()` | Gets the value of Sigma.
`public inline const float & `[`GetSigma`](#structFRHAPI__RankRankData_1a165f8bec7861e29802622824971b2465)`() const` | Gets the value of Sigma.
`public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1abb913e0d4c1dee4f60d6a997c06c8d23)`(const float & NewValue)` | Sets the value of Sigma.
`public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1a94faaf303b770f8e98501574efa857a2)`(float && NewValue)` | Sets the value of Sigma using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1aecbb05e756d7e4907c7d5f26d5136d3f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a62cc6cd3cd13010ceb7295bc235b4766)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a2a5c60f957ed8ee3ecb9a0ba296cc04e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RankRankData_1a6ef447fa6edfe03588a8492684ac7392)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a4c915224c1c10e3180289aa19586ebcb)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a21c3d605a56b81ea6397ff97803d5e82)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a28192b4c0fbd6a1bedc292ee4e3baaf4)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a2f9c6d0dcedc23236e0ec9321f5fb215)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankRankData_1abfc42bffa144324c93177659e8b13493)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public float `[`Mu`](#structFRHAPI__RankRankData_1a65657b053e2385f72a273f6da1ad0336) <a id="structFRHAPI__RankRankData_1a65657b053e2385f72a273f6da1ad0336"></a>

A measure of perceived skill in a player.

#### `public float `[`Sigma`](#structFRHAPI__RankRankData_1a5a58728579185eec1dc6b2d68c70cc52) <a id="structFRHAPI__RankRankData_1a5a58728579185eec1dc6b2d68c70cc52"></a>

A measure of how confident we are in the perceived skill (high sigma means low confidence)

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankRankData_1af743025e4e98a237501007181fe2baf3) <a id="structFRHAPI__RankRankData_1af743025e4e98a237501007181fe2baf3"></a>

Custom key-value player rank data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RankRankData_1a836f74d8eeabc4b47bcbcb6f67e18a77) <a id="structFRHAPI__RankRankData_1a836f74d8eeabc4b47bcbcb6f67e18a77"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankRankData_1a1d74e64ab2a269bca24689628afe39d6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankRankData_1a1d74e64ab2a269bca24689628afe39d6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankRankData_1a2f3ec4b21189508011ffe66d4c26d38e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankRankData_1a2f3ec4b21189508011ffe66d4c26d38e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetMu`](#structFRHAPI__RankRankData_1a2eb61eecbd6a2984ecd13f6f02fb9b10)`()` <a id="structFRHAPI__RankRankData_1a2eb61eecbd6a2984ecd13f6f02fb9b10"></a>

Gets the value of Mu.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankRankData_1a242c968f83da56a8fd5af93a417829a5)`() const` <a id="structFRHAPI__RankRankData_1a242c968f83da56a8fd5af93a417829a5"></a>

Gets the value of Mu.

#### `public inline void `[`SetMu`](#structFRHAPI__RankRankData_1ab1db3987be4d19fd3c5b85237ed5be10)`(const float & NewValue)` <a id="structFRHAPI__RankRankData_1ab1db3987be4d19fd3c5b85237ed5be10"></a>

Sets the value of Mu.

#### `public inline void `[`SetMu`](#structFRHAPI__RankRankData_1a3f57235c80b05c65c2432401c300eb71)`(float && NewValue)` <a id="structFRHAPI__RankRankData_1a3f57235c80b05c65c2432401c300eb71"></a>

Sets the value of Mu using move semantics.

#### `public inline float & `[`GetSigma`](#structFRHAPI__RankRankData_1a069294ccc367e9989864edb0e24150be)`()` <a id="structFRHAPI__RankRankData_1a069294ccc367e9989864edb0e24150be"></a>

Gets the value of Sigma.

#### `public inline const float & `[`GetSigma`](#structFRHAPI__RankRankData_1a165f8bec7861e29802622824971b2465)`() const` <a id="structFRHAPI__RankRankData_1a165f8bec7861e29802622824971b2465"></a>

Gets the value of Sigma.

#### `public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1abb913e0d4c1dee4f60d6a997c06c8d23)`(const float & NewValue)` <a id="structFRHAPI__RankRankData_1abb913e0d4c1dee4f60d6a997c06c8d23"></a>

Sets the value of Sigma.

#### `public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1a94faaf303b770f8e98501574efa857a2)`(float && NewValue)` <a id="structFRHAPI__RankRankData_1a94faaf303b770f8e98501574efa857a2"></a>

Sets the value of Sigma using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1aecbb05e756d7e4907c7d5f26d5136d3f)`()` <a id="structFRHAPI__RankRankData_1aecbb05e756d7e4907c7d5f26d5136d3f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a62cc6cd3cd13010ceb7295bc235b4766)`() const` <a id="structFRHAPI__RankRankData_1a62cc6cd3cd13010ceb7295bc235b4766"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a2a5c60f957ed8ee3ecb9a0ba296cc04e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankRankData_1a2a5c60f957ed8ee3ecb9a0ba296cc04e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__RankRankData_1a6ef447fa6edfe03588a8492684ac7392)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankRankData_1a6ef447fa6edfe03588a8492684ac7392"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a4c915224c1c10e3180289aa19586ebcb)`()` <a id="structFRHAPI__RankRankData_1a4c915224c1c10e3180289aa19586ebcb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a21c3d605a56b81ea6397ff97803d5e82)`() const` <a id="structFRHAPI__RankRankData_1a21c3d605a56b81ea6397ff97803d5e82"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a28192b4c0fbd6a1bedc292ee4e3baaf4)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankRankData_1a28192b4c0fbd6a1bedc292ee4e3baaf4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a2f9c6d0dcedc23236e0ec9321f5fb215)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankRankData_1a2f9c6d0dcedc23236e0ec9321f5fb215"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553)`()` <a id="structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankRankData_1abfc42bffa144324c93177659e8b13493)`() const` <a id="structFRHAPI__RankRankData_1abfc42bffa144324c93177659e8b13493"></a>

Checks whether CustomData_Optional has been set.

