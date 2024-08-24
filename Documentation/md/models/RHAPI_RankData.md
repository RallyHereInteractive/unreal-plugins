# group `RHAPI_RankData` <a id="group__RHAPI__RankData"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankData`](#structFRHAPI__RankData) | Ranked data about a player&#39;s skill and confidence levels.

---
title: FRHAPI_RankData
---

```
struct FRHAPI_RankData
  : public FRHAPI_Model
```

Ranked data about a player&#39;s skill and confidence levels.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Mu`](#structFRHAPI__RankData_1a93050be6e5e700a4df0ce7653e9b4661) | A measure of perceived skill in a player.
`public float `[`Sigma`](#structFRHAPI__RankData_1a45a6360cbb9002f253ce3481b84b2260) | A measure of how confident we are in the perceived skill (high sigma means low confidence)
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankData_1a6cc90e4d02ac3c6eb18ac7bbed74c9e6) | Custom key-value player rank data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RankData_1a1d6a997932948120bf350d5fd2b61ed1) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RankData_1a288a24945bcfc53d5478789ffce8ed6e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankData_1ae59e34fa7c58841ee86e2bdedbccc52e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetMu`](#structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a)`()` | Gets the value of Mu.
`public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9)`() const` | Gets the value of Mu.
`public inline void `[`SetMu`](#structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9)`(const float & NewValue)` | Sets the value of Mu.
`public inline void `[`SetMu`](#structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482)`(float && NewValue)` | Sets the value of Mu using move semantics.
`public inline float & `[`GetSigma`](#structFRHAPI__RankData_1a30e029ef16b031aff172f71e960dba16)`()` | Gets the value of Sigma.
`public inline const float & `[`GetSigma`](#structFRHAPI__RankData_1ac0fdf966a2fe9a58e82c5bdb7aa57bb9)`() const` | Gets the value of Sigma.
`public inline void `[`SetSigma`](#structFRHAPI__RankData_1ae2fc5606bfaa9067f0a6b4fad5b6379f)`(const float & NewValue)` | Sets the value of Sigma.
`public inline void `[`SetSigma`](#structFRHAPI__RankData_1a2b171e0cfe4d7ba58b83ff335c617468)`(float && NewValue)` | Sets the value of Sigma using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankData_1ae2a514ff74b15eedc063e0f162f687ee)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankData_1aeb70cd726f718f8dae11d3224f05c196)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankData_1ae0d5ca3e159251223c9f44a542676696)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RankData_1ac5e97b58e367645b7c86f4d75bb104a5)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankData_1ae83cac353d1116f8a0e0b8af55f11be1)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankData_1ac7be297a8ac380c575fd38cf3d95a1ab)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RankData_1a8b5a4b31e177d0994d16991bbfc540ba)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__RankData_1a2ad592ac3fee26b810cf6d4768f427f9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankData_1ae6fdd574b4aa03a955e0d73368021c63)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankData_1a90cbd2f415394a90f64ea69dd9ed8599)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public float `[`Mu`](#structFRHAPI__RankData_1a93050be6e5e700a4df0ce7653e9b4661) <a id="structFRHAPI__RankData_1a93050be6e5e700a4df0ce7653e9b4661"></a>

A measure of perceived skill in a player.

#### `public float `[`Sigma`](#structFRHAPI__RankData_1a45a6360cbb9002f253ce3481b84b2260) <a id="structFRHAPI__RankData_1a45a6360cbb9002f253ce3481b84b2260"></a>

A measure of how confident we are in the perceived skill (high sigma means low confidence)

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankData_1a6cc90e4d02ac3c6eb18ac7bbed74c9e6) <a id="structFRHAPI__RankData_1a6cc90e4d02ac3c6eb18ac7bbed74c9e6"></a>

Custom key-value player rank data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RankData_1a1d6a997932948120bf350d5fd2b61ed1) <a id="structFRHAPI__RankData_1a1d6a997932948120bf350d5fd2b61ed1"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankData_1a288a24945bcfc53d5478789ffce8ed6e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankData_1a288a24945bcfc53d5478789ffce8ed6e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankData_1ae59e34fa7c58841ee86e2bdedbccc52e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankData_1ae59e34fa7c58841ee86e2bdedbccc52e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetMu`](#structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a)`()` <a id="structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a"></a>

Gets the value of Mu.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9)`() const` <a id="structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9"></a>

Gets the value of Mu.

#### `public inline void `[`SetMu`](#structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9)`(const float & NewValue)` <a id="structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9"></a>

Sets the value of Mu.

#### `public inline void `[`SetMu`](#structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482)`(float && NewValue)` <a id="structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482"></a>

Sets the value of Mu using move semantics.

#### `public inline float & `[`GetSigma`](#structFRHAPI__RankData_1a30e029ef16b031aff172f71e960dba16)`()` <a id="structFRHAPI__RankData_1a30e029ef16b031aff172f71e960dba16"></a>

Gets the value of Sigma.

#### `public inline const float & `[`GetSigma`](#structFRHAPI__RankData_1ac0fdf966a2fe9a58e82c5bdb7aa57bb9)`() const` <a id="structFRHAPI__RankData_1ac0fdf966a2fe9a58e82c5bdb7aa57bb9"></a>

Gets the value of Sigma.

#### `public inline void `[`SetSigma`](#structFRHAPI__RankData_1ae2fc5606bfaa9067f0a6b4fad5b6379f)`(const float & NewValue)` <a id="structFRHAPI__RankData_1ae2fc5606bfaa9067f0a6b4fad5b6379f"></a>

Sets the value of Sigma.

#### `public inline void `[`SetSigma`](#structFRHAPI__RankData_1a2b171e0cfe4d7ba58b83ff335c617468)`(float && NewValue)` <a id="structFRHAPI__RankData_1a2b171e0cfe4d7ba58b83ff335c617468"></a>

Sets the value of Sigma using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankData_1ae2a514ff74b15eedc063e0f162f687ee)`()` <a id="structFRHAPI__RankData_1ae2a514ff74b15eedc063e0f162f687ee"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankData_1aeb70cd726f718f8dae11d3224f05c196)`() const` <a id="structFRHAPI__RankData_1aeb70cd726f718f8dae11d3224f05c196"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankData_1ae0d5ca3e159251223c9f44a542676696)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankData_1ae0d5ca3e159251223c9f44a542676696"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__RankData_1ac5e97b58e367645b7c86f4d75bb104a5)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankData_1ac5e97b58e367645b7c86f4d75bb104a5"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankData_1ae83cac353d1116f8a0e0b8af55f11be1)`()` <a id="structFRHAPI__RankData_1ae83cac353d1116f8a0e0b8af55f11be1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankData_1ac7be297a8ac380c575fd38cf3d95a1ab)`() const` <a id="structFRHAPI__RankData_1ac7be297a8ac380c575fd38cf3d95a1ab"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankData_1a8b5a4b31e177d0994d16991bbfc540ba)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankData_1a8b5a4b31e177d0994d16991bbfc540ba"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankData_1a2ad592ac3fee26b810cf6d4768f427f9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankData_1a2ad592ac3fee26b810cf6d4768f427f9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankData_1ae6fdd574b4aa03a955e0d73368021c63)`()` <a id="structFRHAPI__RankData_1ae6fdd574b4aa03a955e0d73368021c63"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankData_1a90cbd2f415394a90f64ea69dd9ed8599)`() const` <a id="structFRHAPI__RankData_1a90cbd2f415394a90f64ea69dd9ed8599"></a>

Checks whether CustomData_Optional has been set.

