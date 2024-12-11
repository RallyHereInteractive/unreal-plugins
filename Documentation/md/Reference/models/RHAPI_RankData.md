---
title: RHAPI_RankData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankData`](#structFRHAPI__RankData) | 

## struct `FRHAPI_RankData` <a id="structFRHAPI__RankData"></a>

```
struct FRHAPI_RankData
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RankUuid`](#structFRHAPI__RankData_1a8d09af1152f364444edd923be8421d3c) | UUID for this rank.
`public float `[`Mu_Optional`](#structFRHAPI__RankData_1a54397f20f625c6ca02bc47a2555db9c1) | Ticket's group mu for this rank.
`public bool `[`Mu_IsSet`](#structFRHAPI__RankData_1a843bafa776e358513524b3f61ebbd7e4) | true if Mu_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RankData_1a288a24945bcfc53d5478789ffce8ed6e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankData_1ae59e34fa7c58841ee86e2bdedbccc52e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRankUuid`](#structFRHAPI__RankData_1a3f3bfa68d7e7e50dbdec91b269c4252b)`()` | Gets the value of RankUuid.
`public inline const FString & `[`GetRankUuid`](#structFRHAPI__RankData_1a72a952496eb47b6b6ad144b22da07656)`() const` | Gets the value of RankUuid.
`public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a96ba647ffeb1aa6d5015bfc2b5f2e097)`(const FString & NewValue)` | Sets the value of RankUuid.
`public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a2468dbccc718453a4d10e6e6a0b7d97a)`(FString && NewValue)` | Sets the value of RankUuid using move semantics.
`public inline float & `[`GetMu`](#structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a)`()` | Gets the value of Mu_Optional, regardless of it having been set.
`public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9)`() const` | Gets the value of Mu_Optional, regardless of it having been set.
`public inline const float & `[`GetMu`](#structFRHAPI__RankData_1ab01193f3a3566cfdc231929067f95f54)`(const float & DefaultValue) const` | Gets the value of Mu_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMu`](#structFRHAPI__RankData_1a5bf9009af307bef28648306059545ac5)`(float & OutValue) const` | Fills OutValue with the value of Mu_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a4fa1a38f698ad475c09c3d19e33119b0)`()` | Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a933280984a85b89f280ccfd115c36eb9)`() const` | Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMu`](#structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9)`(const float & NewValue)` | Sets the value of Mu_Optional and also sets Mu_IsSet to true.
`public inline void `[`SetMu`](#structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482)`(float && NewValue)` | Sets the value of Mu_Optional and also sets Mu_IsSet to true using move semantics.
`public inline void `[`ClearMu`](#structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d)`()` | Clears the value of Mu_Optional and sets Mu_IsSet to false.
`public inline bool `[`IsMuSet`](#structFRHAPI__RankData_1a8ee4d67ff24ffaeeb8c9ba3649918a9b)`() const` | Checks whether Mu_Optional has been set.

### Members

#### `public FString `[`RankUuid`](#structFRHAPI__RankData_1a8d09af1152f364444edd923be8421d3c) <a id="structFRHAPI__RankData_1a8d09af1152f364444edd923be8421d3c"></a>

UUID for this rank.

#### `public float `[`Mu_Optional`](#structFRHAPI__RankData_1a54397f20f625c6ca02bc47a2555db9c1) <a id="structFRHAPI__RankData_1a54397f20f625c6ca02bc47a2555db9c1"></a>

Ticket's group mu for this rank.

#### `public bool `[`Mu_IsSet`](#structFRHAPI__RankData_1a843bafa776e358513524b3f61ebbd7e4) <a id="structFRHAPI__RankData_1a843bafa776e358513524b3f61ebbd7e4"></a>

true if Mu_Optional has been set to a value

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

#### `public inline FString & `[`GetRankUuid`](#structFRHAPI__RankData_1a3f3bfa68d7e7e50dbdec91b269c4252b)`()` <a id="structFRHAPI__RankData_1a3f3bfa68d7e7e50dbdec91b269c4252b"></a>

Gets the value of RankUuid.

#### `public inline const FString & `[`GetRankUuid`](#structFRHAPI__RankData_1a72a952496eb47b6b6ad144b22da07656)`() const` <a id="structFRHAPI__RankData_1a72a952496eb47b6b6ad144b22da07656"></a>

Gets the value of RankUuid.

#### `public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a96ba647ffeb1aa6d5015bfc2b5f2e097)`(const FString & NewValue)` <a id="structFRHAPI__RankData_1a96ba647ffeb1aa6d5015bfc2b5f2e097"></a>

Sets the value of RankUuid.

#### `public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a2468dbccc718453a4d10e6e6a0b7d97a)`(FString && NewValue)` <a id="structFRHAPI__RankData_1a2468dbccc718453a4d10e6e6a0b7d97a"></a>

Sets the value of RankUuid using move semantics.

#### `public inline float & `[`GetMu`](#structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a)`()` <a id="structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a"></a>

Gets the value of Mu_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9)`() const` <a id="structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9"></a>

Gets the value of Mu_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankData_1ab01193f3a3566cfdc231929067f95f54)`(const float & DefaultValue) const` <a id="structFRHAPI__RankData_1ab01193f3a3566cfdc231929067f95f54"></a>

Gets the value of Mu_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMu`](#structFRHAPI__RankData_1a5bf9009af307bef28648306059545ac5)`(float & OutValue) const` <a id="structFRHAPI__RankData_1a5bf9009af307bef28648306059545ac5"></a>

Fills OutValue with the value of Mu_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a4fa1a38f698ad475c09c3d19e33119b0)`()` <a id="structFRHAPI__RankData_1a4fa1a38f698ad475c09c3d19e33119b0"></a>

Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a933280984a85b89f280ccfd115c36eb9)`() const` <a id="structFRHAPI__RankData_1a933280984a85b89f280ccfd115c36eb9"></a>

Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMu`](#structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9)`(const float & NewValue)` <a id="structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9"></a>

Sets the value of Mu_Optional and also sets Mu_IsSet to true.

#### `public inline void `[`SetMu`](#structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482)`(float && NewValue)` <a id="structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482"></a>

Sets the value of Mu_Optional and also sets Mu_IsSet to true using move semantics.

#### `public inline void `[`ClearMu`](#structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d)`()` <a id="structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d"></a>

Clears the value of Mu_Optional and sets Mu_IsSet to false.

#### `public inline bool `[`IsMuSet`](#structFRHAPI__RankData_1a8ee4d67ff24ffaeeb8c9ba3649918a9b)`() const` <a id="structFRHAPI__RankData_1a8ee4d67ff24ffaeeb8c9ba3649918a9b"></a>

Checks whether Mu_Optional has been set.

