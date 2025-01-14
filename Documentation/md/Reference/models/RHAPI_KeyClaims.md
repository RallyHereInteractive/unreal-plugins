---
title: RHAPI_KeyClaims
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KeyClaims`](#structFRHAPI__KeyClaims) | List of Key Claims available to the player.

## struct `FRHAPI_KeyClaims` <a id="structFRHAPI__KeyClaims"></a>

```
struct FRHAPI_KeyClaims
  : public FRHAPI_Model
```

List of Key Claims available to the player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > `[`Claims`](#structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263) | List of Key Claims available to the Player.
`public virtual bool `[`FromJson`](#structFRHAPI__KeyClaims_1a415bb77e5a63d0522e4ba3f75228c21f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyClaims_1a4e625726fc987776b1d794298584d390)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1ab94468b95f59454e40bb8eb78a65bf7e)`()` | Gets the value of Claims.
`public inline const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1abaee8dce32e5f083b7c01b52927df71b)`() const` | Gets the value of Claims.
`public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a650a9f6b6c55d1374be035fff8c71a08)`(const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & NewValue)` | Sets the value of Claims.
`public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a344b62ed098251c4036b106236a0c273)`(TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > && NewValue)` | Sets the value of Claims using move semantics.

### Members

#### `public TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > `[`Claims`](#structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263) <a id="structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263"></a>

List of Key Claims available to the Player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__KeyClaims_1a415bb77e5a63d0522e4ba3f75228c21f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KeyClaims_1a415bb77e5a63d0522e4ba3f75228c21f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KeyClaims_1a4e625726fc987776b1d794298584d390)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__KeyClaims_1a4e625726fc987776b1d794298584d390"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1ab94468b95f59454e40bb8eb78a65bf7e)`()` <a id="structFRHAPI__KeyClaims_1ab94468b95f59454e40bb8eb78a65bf7e"></a>

Gets the value of Claims.

#### `public inline const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1abaee8dce32e5f083b7c01b52927df71b)`() const` <a id="structFRHAPI__KeyClaims_1abaee8dce32e5f083b7c01b52927df71b"></a>

Gets the value of Claims.

#### `public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a650a9f6b6c55d1374be035fff8c71a08)`(const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & NewValue)` <a id="structFRHAPI__KeyClaims_1a650a9f6b6c55d1374be035fff8c71a08"></a>

Sets the value of Claims.

#### `public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a344b62ed098251c4036b106236a0c273)`(TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > && NewValue)` <a id="structFRHAPI__KeyClaims_1a344b62ed098251c4036b106236a0c273"></a>

Sets the value of Claims using move semantics.

