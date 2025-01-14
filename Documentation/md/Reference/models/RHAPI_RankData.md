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
`public inline FString & `[`GetRankUuid`](#structFRHAPI__RankData_1ad6f24a5ea46a31d9771dfede4e80f445)`()` | Gets the value of RankUuid.
`public inline const FString & `[`GetRankUuid`](#structFRHAPI__RankData_1a1d3c78e076f07931d8ba20d7f8229327)`() const` | Gets the value of RankUuid.
`public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a96ba647ffeb1aa6d5015bfc2b5f2e097)`(const FString & NewValue)` | Sets the value of RankUuid.
`public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a2468dbccc718453a4d10e6e6a0b7d97a)`(FString && NewValue)` | Sets the value of RankUuid using move semantics.
`public inline float & `[`GetMu`](#structFRHAPI__RankData_1ade5d0b3c9c23272658b728fa7b69b40b)`()` | Gets the value of Mu_Optional, regardless of it having been set.
`public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a84fb537a213cd7d413b67d3af18f7e2d)`() const` | Gets the value of Mu_Optional, regardless of it having been set.
`public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a8f487f061cede6d207b4b6cc6062b16c)`(const float & DefaultValue) const` | Gets the value of Mu_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMu`](#structFRHAPI__RankData_1a5bf9009af307bef28648306059545ac5)`(float & OutValue) const` | Fills OutValue with the value of Mu_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetMuOrNull`](#structFRHAPI__RankData_1adf23d0bc29137c7b6c9dffad55c13113)`()` | Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a5df6e6d0aff96eda3bffd2bd7869167e)`() const` | Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankData_1af02331b004cc34f139c0485f98e11603)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankData_1af02331b004cc34f139c0485f98e11603"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRankUuid`](#structFRHAPI__RankData_1ad6f24a5ea46a31d9771dfede4e80f445)`()` <a id="structFRHAPI__RankData_1ad6f24a5ea46a31d9771dfede4e80f445"></a>

Gets the value of RankUuid.

#### `public inline const FString & `[`GetRankUuid`](#structFRHAPI__RankData_1a1d3c78e076f07931d8ba20d7f8229327)`() const` <a id="structFRHAPI__RankData_1a1d3c78e076f07931d8ba20d7f8229327"></a>

Gets the value of RankUuid.

#### `public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a96ba647ffeb1aa6d5015bfc2b5f2e097)`(const FString & NewValue)` <a id="structFRHAPI__RankData_1a96ba647ffeb1aa6d5015bfc2b5f2e097"></a>

Sets the value of RankUuid.

#### `public inline void `[`SetRankUuid`](#structFRHAPI__RankData_1a2468dbccc718453a4d10e6e6a0b7d97a)`(FString && NewValue)` <a id="structFRHAPI__RankData_1a2468dbccc718453a4d10e6e6a0b7d97a"></a>

Sets the value of RankUuid using move semantics.

#### `public inline float & `[`GetMu`](#structFRHAPI__RankData_1ade5d0b3c9c23272658b728fa7b69b40b)`()` <a id="structFRHAPI__RankData_1ade5d0b3c9c23272658b728fa7b69b40b"></a>

Gets the value of Mu_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a84fb537a213cd7d413b67d3af18f7e2d)`() const` <a id="structFRHAPI__RankData_1a84fb537a213cd7d413b67d3af18f7e2d"></a>

Gets the value of Mu_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankData_1a8f487f061cede6d207b4b6cc6062b16c)`(const float & DefaultValue) const` <a id="structFRHAPI__RankData_1a8f487f061cede6d207b4b6cc6062b16c"></a>

Gets the value of Mu_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMu`](#structFRHAPI__RankData_1a5bf9009af307bef28648306059545ac5)`(float & OutValue) const` <a id="structFRHAPI__RankData_1a5bf9009af307bef28648306059545ac5"></a>

Fills OutValue with the value of Mu_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetMuOrNull`](#structFRHAPI__RankData_1adf23d0bc29137c7b6c9dffad55c13113)`()` <a id="structFRHAPI__RankData_1adf23d0bc29137c7b6c9dffad55c13113"></a>

Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetMuOrNull`](#structFRHAPI__RankData_1a5df6e6d0aff96eda3bffd2bd7869167e)`() const` <a id="structFRHAPI__RankData_1a5df6e6d0aff96eda3bffd2bd7869167e"></a>

Returns a pointer to Mu_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMu`](#structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9)`(const float & NewValue)` <a id="structFRHAPI__RankData_1a3a7a74b4c3ac6797e704a655e709fee9"></a>

Sets the value of Mu_Optional and also sets Mu_IsSet to true.

#### `public inline void `[`SetMu`](#structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482)`(float && NewValue)` <a id="structFRHAPI__RankData_1ac3a49ced1b0c2dc44473ccbf8628e482"></a>

Sets the value of Mu_Optional and also sets Mu_IsSet to true using move semantics.

#### `public inline void `[`ClearMu`](#structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d)`()` <a id="structFRHAPI__RankData_1aa4b9bec0398503d05220ad9b21b47c7d"></a>

Clears the value of Mu_Optional and sets Mu_IsSet to false.

#### `public inline bool `[`IsMuSet`](#structFRHAPI__RankData_1a8ee4d67ff24ffaeeb8c9ba3649918a9b)`() const` <a id="structFRHAPI__RankData_1a8ee4d67ff24ffaeeb8c9ba3649918a9b"></a>

Checks whether Mu_Optional has been set.

