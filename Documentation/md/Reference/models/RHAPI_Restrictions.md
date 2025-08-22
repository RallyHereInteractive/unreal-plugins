---
title: RHAPI_Restrictions
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Restrictions`](#structFRHAPI__Restrictions) | List of restrictions applied to a user.

## struct `FRHAPI_Restrictions` <a id="structFRHAPI__Restrictions"></a>

```
struct FRHAPI_Restrictions
  : public FRHAPI_Model
```

List of restrictions applied to a user.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__Restrictions_1a8789684883d8f49f2e3e43eef49e5045) | List of restrictions applied to a user.
`public bool `[`Restrictions_IsSet`](#structFRHAPI__Restrictions_1a790beb1b7e4eaf07c8f521b9377855a7) | true if Restrictions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Restrictions_1a92f6521e916fe3b109d38ee4b0808682)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Restrictions_1a2dafd9869a4e34b5cf8c42028d17d5ee)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1aa16feda2516cfaa5dbc40d127b761ceb)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1af51e3e880bc2c72260f90ba61c4cb106)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a1628dd72bbc4ac77a70f57d5f5872bbb)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__Restrictions_1a4dbf499c7e5d49df9f35d1d7195d48e0)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1af088bb9ea15ae6230e0db2e022a698a4)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a2c924dc5f1018d3ee2ae7fd89cb9c17d)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a4f9acc622923714b427a51772acc1631)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a42a25e37dce1eae5f90437c46bb751e1)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__Restrictions_1a8789684883d8f49f2e3e43eef49e5045) <a id="structFRHAPI__Restrictions_1a8789684883d8f49f2e3e43eef49e5045"></a>

List of restrictions applied to a user.

#### `public bool `[`Restrictions_IsSet`](#structFRHAPI__Restrictions_1a790beb1b7e4eaf07c8f521b9377855a7) <a id="structFRHAPI__Restrictions_1a790beb1b7e4eaf07c8f521b9377855a7"></a>

true if Restrictions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Restrictions_1a92f6521e916fe3b109d38ee4b0808682)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Restrictions_1a92f6521e916fe3b109d38ee4b0808682"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Restrictions_1a2dafd9869a4e34b5cf8c42028d17d5ee)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Restrictions_1a2dafd9869a4e34b5cf8c42028d17d5ee"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1aa16feda2516cfaa5dbc40d127b761ceb)`()` <a id="structFRHAPI__Restrictions_1aa16feda2516cfaa5dbc40d127b761ceb"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1af51e3e880bc2c72260f90ba61c4cb106)`() const` <a id="structFRHAPI__Restrictions_1af51e3e880bc2c72260f90ba61c4cb106"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a1628dd72bbc4ac77a70f57d5f5872bbb)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__Restrictions_1a1628dd72bbc4ac77a70f57d5f5872bbb"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__Restrictions_1a4dbf499c7e5d49df9f35d1d7195d48e0)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__Restrictions_1a4dbf499c7e5d49df9f35d1d7195d48e0"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1af088bb9ea15ae6230e0db2e022a698a4)`()` <a id="structFRHAPI__Restrictions_1af088bb9ea15ae6230e0db2e022a698a4"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a2c924dc5f1018d3ee2ae7fd89cb9c17d)`() const` <a id="structFRHAPI__Restrictions_1a2c924dc5f1018d3ee2ae7fd89cb9c17d"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a4f9acc622923714b427a51772acc1631)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__Restrictions_1a4f9acc622923714b427a51772acc1631"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a42a25e37dce1eae5f90437c46bb751e1)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__Restrictions_1a42a25e37dce1eae5f90437c46bb751e1"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc)`()` <a id="structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

