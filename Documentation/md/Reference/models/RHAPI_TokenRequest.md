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
`public inline ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a8d4bc408a75c48da99715d79847df745)`()` | Gets the value of GrantType.
`public inline const ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a039d97c9924474bdea2828d19153fb5d)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__TokenRequest_1a160962cad4802550db661b2c28f293da)`(const ERHAPI_OAuthGrantType & NewValue)` | Sets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__TokenRequest_1aca918140ff99e6cd97ac8b0abf9787a3)`(ERHAPI_OAuthGrantType && NewValue)` | Sets the value of GrantType using move semantics.

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

#### `public inline ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a8d4bc408a75c48da99715d79847df745)`()` <a id="structFRHAPI__TokenRequest_1a8d4bc408a75c48da99715d79847df745"></a>

Gets the value of GrantType.

#### `public inline const ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a039d97c9924474bdea2828d19153fb5d)`() const` <a id="structFRHAPI__TokenRequest_1a039d97c9924474bdea2828d19153fb5d"></a>

Gets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__TokenRequest_1a160962cad4802550db661b2c28f293da)`(const ERHAPI_OAuthGrantType & NewValue)` <a id="structFRHAPI__TokenRequest_1a160962cad4802550db661b2c28f293da"></a>

Sets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__TokenRequest_1aca918140ff99e6cd97ac8b0abf9787a3)`(ERHAPI_OAuthGrantType && NewValue)` <a id="structFRHAPI__TokenRequest_1aca918140ff99e6cd97ac8b0abf9787a3"></a>

Sets the value of GrantType using move semantics.

