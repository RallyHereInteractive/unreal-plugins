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
`public virtual void `[`WriteJson`](#structFRHAPI__Restrictions_1a8d7447aaba446eb87d5cbe77c96bcc50)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a261e8a6eba9c6bf602ff117f68b6c97e)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1ad6f4d9a4eafbdff6f2b856ae0e613160)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a3725d8b7e011fe08aad923e228dd21f2)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRestrictions`](#structFRHAPI__Restrictions_1a70e4073b7b250613b5dfa6cfea3cb2a1)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a389a61b539f5ae3df4452ceb90dc12e4)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1ad7369873904c2c7ea3c3069a6afa8a6d)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__Restrictions_1a8d7447aaba446eb87d5cbe77c96bcc50)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Restrictions_1a8d7447aaba446eb87d5cbe77c96bcc50"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a261e8a6eba9c6bf602ff117f68b6c97e)`()` <a id="structFRHAPI__Restrictions_1a261e8a6eba9c6bf602ff117f68b6c97e"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1ad6f4d9a4eafbdff6f2b856ae0e613160)`() const` <a id="structFRHAPI__Restrictions_1ad6f4d9a4eafbdff6f2b856ae0e613160"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__Restrictions_1a3725d8b7e011fe08aad923e228dd21f2)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__Restrictions_1a3725d8b7e011fe08aad923e228dd21f2"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRestrictions`](#structFRHAPI__Restrictions_1a70e4073b7b250613b5dfa6cfea3cb2a1)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__Restrictions_1a70e4073b7b250613b5dfa6cfea3cb2a1"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1a389a61b539f5ae3df4452ceb90dc12e4)`()` <a id="structFRHAPI__Restrictions_1a389a61b539f5ae3df4452ceb90dc12e4"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__Restrictions_1ad7369873904c2c7ea3c3069a6afa8a6d)`() const` <a id="structFRHAPI__Restrictions_1ad7369873904c2c7ea3c3069a6afa8a6d"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__Restrictions_1af529b76191fc696c91701de301dbab74)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__Restrictions_1af529b76191fc696c91701de301dbab74"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__Restrictions_1a7f3b4c6bdc05c4cca0efc971f74a8f33)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__Restrictions_1a7f3b4c6bdc05c4cca0efc971f74a8f33"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc)`()` <a id="structFRHAPI__Restrictions_1a2ca136fa0326ea5f86a6653fae98b2cc"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

#### `public inline bool `[`IsRestrictionsSet`](#structFRHAPI__Restrictions_1ac7a99896c2de7f371c256a2b2dadd263)`() const` <a id="structFRHAPI__Restrictions_1ac7a99896c2de7f371c256a2b2dadd263"></a>

Checks whether Restrictions_Optional has been set.

