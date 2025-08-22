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
`public inline FORCEINLINE TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a44d96c25c13da008cef49bf8a100cd3a)`()` | Gets the value of Claims.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a8e077935728a66d90ac97dcd141a74c5)`() const` | Gets the value of Claims.
`public inline FORCEINLINE void `[`SetClaims`](#structFRHAPI__KeyClaims_1a8b90d6767e25e2081f63e2d35b113cb0)`(const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & NewValue)` | Sets the value of Claims.
`public inline FORCEINLINE void `[`SetClaims`](#structFRHAPI__KeyClaims_1ab3e7adac465258063a333e3b06fa36e7)`(TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > && NewValue)` | Sets the value of Claims using move semantics.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a44d96c25c13da008cef49bf8a100cd3a)`()` <a id="structFRHAPI__KeyClaims_1a44d96c25c13da008cef49bf8a100cd3a"></a>

Gets the value of Claims.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a8e077935728a66d90ac97dcd141a74c5)`() const` <a id="structFRHAPI__KeyClaims_1a8e077935728a66d90ac97dcd141a74c5"></a>

Gets the value of Claims.

#### `public inline FORCEINLINE void `[`SetClaims`](#structFRHAPI__KeyClaims_1a8b90d6767e25e2081f63e2d35b113cb0)`(const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & NewValue)` <a id="structFRHAPI__KeyClaims_1a8b90d6767e25e2081f63e2d35b113cb0"></a>

Sets the value of Claims.

#### `public inline FORCEINLINE void `[`SetClaims`](#structFRHAPI__KeyClaims_1ab3e7adac465258063a333e3b06fa36e7)`(TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > && NewValue)` <a id="structFRHAPI__KeyClaims_1ab3e7adac465258063a333e3b06fa36e7"></a>

Sets the value of Claims using move semantics.

