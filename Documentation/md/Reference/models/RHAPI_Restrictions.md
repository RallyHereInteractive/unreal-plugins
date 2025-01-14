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
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a329e739a8b8f0f50940e8758b311954b)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1afed61d00d45b3660e81131b720c661bc)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a5d03fde778b3e172469111858d252c7e)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRestrictions`](#structFRHAPI__Restrictions_1a70e4073b7b250613b5dfa6cfea3cb2a1)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a419035b79738415f944f61d922e4214d)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a29ba39bc0f61afc6896bdba30f3cc997)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRestrictions`](#structFRHAPI__Restrictions_1af529b76191fc696c91701de301dbab74)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a7f3b4c6bdc05c4cca0efc971f74a8f33)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.
`public inline bool `[`IsRestrictionsSet`](#structFRHAPI__Restrictions_1ac7a99896c2de7f371c256a2b2dadd263)`() const` | Checks whether Restrictions_Optional has been set.

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

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a329e739a8b8f0f50940e8758b311954b)`()` <a id="structFRHAPI__Restrictions_1a329e739a8b8f0f50940e8758b311954b"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1afed61d00d45b3660e81131b720c661bc)`() const` <a id="structFRHAPI__Restrictions_1afed61d00d45b3660e81131b720c661bc"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a5d03fde778b3e172469111858d252c7e)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__Restrictions_1a5d03fde778b3e172469111858d252c7e"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRestrictions`](#structFRHAPI__Restrictions_1a70e4073b7b250613b5dfa6cfea3cb2a1)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__Restrictions_1a70e4073b7b250613b5dfa6cfea3cb2a1"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a419035b79738415f944f61d922e4214d)`()` <a id="structFRHAPI__Restrictions_1a419035b79738415f944f61d922e4214d"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a29ba39bc0f61afc6896bdba30f3cc997)`() const` <a id="structFRHAPI__Restrictions_1a29ba39bc0f61afc6896bdba30f3cc997"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__Restrictions_1af529b76191fc696c91701de301dbab74)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__Restrictions_1af529b76191fc696c91701de301dbab74"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a7f3b4c6bdc05c4cca0efc971f74a8f33)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__Restrictions_1a7f3b4c6bdc05c4cca0efc971f74a8f33"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc)`()` <a id="structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

#### `public inline bool `[`IsRestrictionsSet`](#structFRHAPI__Restrictions_1ac7a99896c2de7f371c256a2b2dadd263)`() const` <a id="structFRHAPI__Restrictions_1ac7a99896c2de7f371c256a2b2dadd263"></a>

Checks whether Restrictions_Optional has been set.

