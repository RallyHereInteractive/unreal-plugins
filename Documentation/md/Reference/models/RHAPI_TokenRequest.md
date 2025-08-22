---
title: RHAPI_TokenRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TokenRequest`](#structFRHAPI__TokenRequest) | OAuth2 Token Request.

## struct `FRHAPI_TokenRequest` <a id="structFRHAPI__TokenRequest"></a>

```
struct FRHAPI_TokenRequest
  : public FRHAPI_Model
```

OAuth2 Token Request.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OAuthGrantType `[`GrantType`](#structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde) | OAuth2 grant type.
`public virtual bool `[`FromJson`](#structFRHAPI__TokenRequest_1a66597c9a53777ca07e7ea4c371c08095)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TokenRequest_1ac66a65e930b772c04aab8a28aef55f95)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a815dc421de462aeac5db79c9c1a39f2b)`()` | Gets the value of GrantType.
`public inline FORCEINLINE const ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1ab4c690053f5cdc9c9a4666338ebb68dc)`() const` | Gets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__TokenRequest_1a597ba912c4bbadd0160ffbbfe18f6f28)`(const ERHAPI_OAuthGrantType & NewValue)` | Sets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__TokenRequest_1abb0bdf99a6df6418d79a20a11aa1bfd3)`(ERHAPI_OAuthGrantType && NewValue)` | Sets the value of GrantType using move semantics.

### Members

#### `public ERHAPI_OAuthGrantType `[`GrantType`](#structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde) <a id="structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde"></a>

OAuth2 grant type.

#### `public virtual bool `[`FromJson`](#structFRHAPI__TokenRequest_1a66597c9a53777ca07e7ea4c371c08095)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TokenRequest_1a66597c9a53777ca07e7ea4c371c08095"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TokenRequest_1ac66a65e930b772c04aab8a28aef55f95)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__TokenRequest_1ac66a65e930b772c04aab8a28aef55f95"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a815dc421de462aeac5db79c9c1a39f2b)`()` <a id="structFRHAPI__TokenRequest_1a815dc421de462aeac5db79c9c1a39f2b"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE const ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1ab4c690053f5cdc9c9a4666338ebb68dc)`() const` <a id="structFRHAPI__TokenRequest_1ab4c690053f5cdc9c9a4666338ebb68dc"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__TokenRequest_1a597ba912c4bbadd0160ffbbfe18f6f28)`(const ERHAPI_OAuthGrantType & NewValue)` <a id="structFRHAPI__TokenRequest_1a597ba912c4bbadd0160ffbbfe18f6f28"></a>

Sets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__TokenRequest_1abb0bdf99a6df6418d79a20a11aa1bfd3)`(ERHAPI_OAuthGrantType && NewValue)` <a id="structFRHAPI__TokenRequest_1abb0bdf99a6df6418d79a20a11aa1bfd3"></a>

Sets the value of GrantType using move semantics.

