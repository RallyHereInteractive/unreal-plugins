# group `RHAPI_TokenRequest` <a id="group__RHAPI__TokenRequest"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__TokenRequest_1a16926f69d0289f119a3f8afa46462780)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TokenRequest_1ac6a1c593c454eca89fbab0bfeb2b3ab8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1af877a2666bfbcc00776b4cabb10be0c1)`()` | Gets the value of GrantType.
`public inline const ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a42354cce6c75b41d7a086d04e271e4b3)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__TokenRequest_1afa21d677b63a9882f3ec72522fcbee5e)`(ERHAPI_OAuthGrantType NewValue)` | Sets the value of GrantType.

### Members

#### `public ERHAPI_OAuthGrantType `[`GrantType`](#structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde) <a id="structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde"></a>

OAuth2 grant type.

#### `public virtual bool `[`FromJson`](#structFRHAPI__TokenRequest_1a16926f69d0289f119a3f8afa46462780)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TokenRequest_1a16926f69d0289f119a3f8afa46462780"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TokenRequest_1ac6a1c593c454eca89fbab0bfeb2b3ab8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TokenRequest_1ac6a1c593c454eca89fbab0bfeb2b3ab8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1af877a2666bfbcc00776b4cabb10be0c1)`()` <a id="structFRHAPI__TokenRequest_1af877a2666bfbcc00776b4cabb10be0c1"></a>

Gets the value of GrantType.

#### `public inline const ERHAPI_OAuthGrantType & `[`GetGrantType`](#structFRHAPI__TokenRequest_1a42354cce6c75b41d7a086d04e271e4b3)`() const` <a id="structFRHAPI__TokenRequest_1a42354cce6c75b41d7a086d04e271e4b3"></a>

Gets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__TokenRequest_1afa21d677b63a9882f3ec72522fcbee5e)`(ERHAPI_OAuthGrantType NewValue)` <a id="structFRHAPI__TokenRequest_1afa21d677b63a9882f3ec72522fcbee5e"></a>

Sets the value of GrantType.

