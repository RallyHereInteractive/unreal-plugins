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
`public virtual void `[`WriteJson`](#structFRHAPI__RankData_1af02331b004cc34f139c0485f98e11603)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetRankUuid`](#structFRHAPI__RankData_1adc1d8fd3b076d7673abd0c83b7cbaa60)`()` | Gets the value of RankUuid.
`public inline FORCEINLINE const FString & `[`GetRankUuid`](#structFRHAPI__RankData_1aef1fc9387c815495ac2f4e048d6e0f93)`() const` | Gets the value of RankUuid.
`public inline FORCEINLINE void `[`SetRankUuid`](#structFRHAPI__RankData_1a5d1f443ea880066ef1cdc6e558fac5f4)`(const FString & NewValue)` | Sets the value of RankUuid.
`public inline FORCEINLINE void `[`SetRankUuid`](#structFRHAPI__RankData_1aced8285e1e5fc91a121ecb1931657a0a)`(FString && NewValue)` | Sets the value of RankUuid using move semantics.
`public inline FORCEINLINE float & `[`GetMu`](#structFRHAPI__RankData_1a854bfcb0fc2caee4a1cb192144b01f9b)`()` | Gets the value of Mu_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMu`](#structFRHAPI__RankData_1afed88a21c6b27796457198065423a72b)`() const` | Gets the value of Mu_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMu`](#structFRHAPI__RankData_1a392b0eb76371467177d5df39e6602361)`(const float & DefaultValue) const` | Gets the value of Mu_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMu`](#structFRHAPI__RankData_1aa96e0cdd20c45024a84ef15f7cb61640)`(float & OutValue) const` | Fills OutValue with the value of Mu_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a584eaa5e32c8f974243a6bb814c4f8df)`()` | Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMuOrNull`](#structFRHAPI__RankData_1ae68915a8f4e24e36ccdf87cb4b62897c)`() const` | Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankData_1a22c6f32b30578228b24e93784bac78d1)`(const float & NewValue)` | Sets the value of Mu_Optional and also sets Mu_IsSet to true.
`public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankData_1a7b6498dcba4d8d73938195fe3834be1e)`(float && NewValue)` | Sets the value of Mu_Optional and also sets Mu_IsSet to true using move semantics.
`public inline void `[`ClearMu`](#structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d)`()` | Clears the value of Mu_Optional and sets Mu_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankData_1af02331b004cc34f139c0485f98e11603)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankData_1af02331b004cc34f139c0485f98e11603"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetRankUuid`](#structFRHAPI__RankData_1adc1d8fd3b076d7673abd0c83b7cbaa60)`()` <a id="structFRHAPI__RankData_1adc1d8fd3b076d7673abd0c83b7cbaa60"></a>

Gets the value of RankUuid.

#### `public inline FORCEINLINE const FString & `[`GetRankUuid`](#structFRHAPI__RankData_1aef1fc9387c815495ac2f4e048d6e0f93)`() const` <a id="structFRHAPI__RankData_1aef1fc9387c815495ac2f4e048d6e0f93"></a>

Gets the value of RankUuid.

#### `public inline FORCEINLINE void `[`SetRankUuid`](#structFRHAPI__RankData_1a5d1f443ea880066ef1cdc6e558fac5f4)`(const FString & NewValue)` <a id="structFRHAPI__RankData_1a5d1f443ea880066ef1cdc6e558fac5f4"></a>

Sets the value of RankUuid.

#### `public inline FORCEINLINE void `[`SetRankUuid`](#structFRHAPI__RankData_1aced8285e1e5fc91a121ecb1931657a0a)`(FString && NewValue)` <a id="structFRHAPI__RankData_1aced8285e1e5fc91a121ecb1931657a0a"></a>

Sets the value of RankUuid using move semantics.

#### `public inline FORCEINLINE float & `[`GetMu`](#structFRHAPI__RankData_1a854bfcb0fc2caee4a1cb192144b01f9b)`()` <a id="structFRHAPI__RankData_1a854bfcb0fc2caee4a1cb192144b01f9b"></a>

Gets the value of Mu_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMu`](#structFRHAPI__RankData_1afed88a21c6b27796457198065423a72b)`() const` <a id="structFRHAPI__RankData_1afed88a21c6b27796457198065423a72b"></a>

Gets the value of Mu_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMu`](#structFRHAPI__RankData_1a392b0eb76371467177d5df39e6602361)`(const float & DefaultValue) const` <a id="structFRHAPI__RankData_1a392b0eb76371467177d5df39e6602361"></a>

Gets the value of Mu_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMu`](#structFRHAPI__RankData_1aa96e0cdd20c45024a84ef15f7cb61640)`(float & OutValue) const` <a id="structFRHAPI__RankData_1aa96e0cdd20c45024a84ef15f7cb61640"></a>

Fills OutValue with the value of Mu_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a584eaa5e32c8f974243a6bb814c4f8df)`()` <a id="structFRHAPI__RankData_1a584eaa5e32c8f974243a6bb814c4f8df"></a>

Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMuOrNull`](#structFRHAPI__RankData_1ae68915a8f4e24e36ccdf87cb4b62897c)`() const` <a id="structFRHAPI__RankData_1ae68915a8f4e24e36ccdf87cb4b62897c"></a>

Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankData_1a22c6f32b30578228b24e93784bac78d1)`(const float & NewValue)` <a id="structFRHAPI__RankData_1a22c6f32b30578228b24e93784bac78d1"></a>

Sets the value of Mu_Optional and also sets Mu_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankData_1a7b6498dcba4d8d73938195fe3834be1e)`(float && NewValue)` <a id="structFRHAPI__RankData_1a7b6498dcba4d8d73938195fe3834be1e"></a>

Sets the value of Mu_Optional and also sets Mu_IsSet to true using move semantics.

#### `public inline void `[`ClearMu`](#structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d)`()` <a id="structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d"></a>

Clears the value of Mu_Optional and sets Mu_IsSet to false.

