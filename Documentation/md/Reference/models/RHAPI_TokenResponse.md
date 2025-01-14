---
title: RHAPI_TokenResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TokenResponse`](#structFRHAPI__TokenResponse) | OAuth2 Token Response.

## struct `FRHAPI_TokenResponse` <a id="structFRHAPI__TokenResponse"></a>

```
struct FRHAPI_TokenResponse
  : public FRHAPI_Model
```

OAuth2 Token Response.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AccessToken`](#structFRHAPI__TokenResponse_1ae69b45cbeec5ccbc80e3ea2374d5397c) | Result access token.
`public FString `[`TokenType`](#structFRHAPI__TokenResponse_1acd10a81c1610bcddf359e92696b63489) | Result token type.
`public FString `[`RefreshToken_Optional`](#structFRHAPI__TokenResponse_1ac68a5e1154530c8e88fb8ac2f508ab72) | Result refresh token that can be used to get new access tokens.
`public bool `[`RefreshToken_IsSet`](#structFRHAPI__TokenResponse_1af8d74d0749fb2de5acdf4acfe60272f3) | true if RefreshToken_Optional has been set to a value
`public int32 `[`ExpiresIn`](#structFRHAPI__TokenResponse_1a86483ede9759e7f6e91e8699982e7d2e) | Result access token expiration time in seconds.
`public virtual bool `[`FromJson`](#structFRHAPI__TokenResponse_1a51d04bfd1988cc71eb7d202a6261f8b7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TokenResponse_1a1709925f8f8a803e82435ab685e8bc61)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1a20ca142a1f4766822dcb2d4cb7ef6423)`()` | Gets the value of AccessToken.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1a407d1ccd0cff9f23411ecb8917a1db20)`() const` | Gets the value of AccessToken.
`public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a5c77cea4ccdffd1795a07441390ce271)`(const FString & NewValue)` | Sets the value of AccessToken.
`public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a0f0e6334d81133e882c66a44be9260d4)`(FString && NewValue)` | Sets the value of AccessToken using move semantics.
`public inline FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1af7bdddb375da96bc46b73b9c2f70ebd1)`()` | Gets the value of TokenType.
`public inline const FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1ad742a74b18a38f5470f05d957e9d3bd4)`() const` | Gets the value of TokenType.
`public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1addd90c244d575f3690fbdb625a81dcc0)`(const FString & NewValue)` | Sets the value of TokenType.
`public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1ab8212eff759c0a23c4e4551769dbf172)`(FString && NewValue)` | Sets the value of TokenType using move semantics.
`public inline FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1acba19731a89589703cb6e01ca82333d9)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a777b5c513b0a4cea565c19849cf417d9)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a8f1ce6fa1b9629ad379e2681527bf6f6)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a02109c334eb9600b35545851763b471a)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1aeb2eb7b9f1c31e244f92e1216edc78be)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a8f82d55b9c6af0d3c05ff883caa71632)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a3f50259541f620e7be54d14f8ba6cfab)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline bool `[`IsRefreshTokenSet`](#structFRHAPI__TokenResponse_1a16030adf3bc9232e15d18c7302ae084e)`() const` | Checks whether RefreshToken_Optional has been set.
`public inline int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a82e947645b5bd5587f52eb9f2a04abd5)`()` | Gets the value of ExpiresIn.
`public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a91b25bb1a7e09fbc9c21de527f2dcd13)`() const` | Gets the value of ExpiresIn.
`public inline void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a2aac788ac3241e8e2ff90f7074213fd4)`(const int32 & NewValue)` | Sets the value of ExpiresIn.
`public inline void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a77111e5ac8eb8b26fb436a5f6ece61f7)`(int32 && NewValue)` | Sets the value of ExpiresIn using move semantics.
`public inline bool `[`IsExpiresInDefaultValue`](#structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414)`() const` | Returns true if ExpiresIn matches the default value.
`public inline void `[`SetExpiresInToDefault`](#structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae)`()` | Sets the value of ExpiresIn to its default

### Members

#### `public FString `[`AccessToken`](#structFRHAPI__TokenResponse_1ae69b45cbeec5ccbc80e3ea2374d5397c) <a id="structFRHAPI__TokenResponse_1ae69b45cbeec5ccbc80e3ea2374d5397c"></a>

Result access token.

#### `public FString `[`TokenType`](#structFRHAPI__TokenResponse_1acd10a81c1610bcddf359e92696b63489) <a id="structFRHAPI__TokenResponse_1acd10a81c1610bcddf359e92696b63489"></a>

Result token type.

#### `public FString `[`RefreshToken_Optional`](#structFRHAPI__TokenResponse_1ac68a5e1154530c8e88fb8ac2f508ab72) <a id="structFRHAPI__TokenResponse_1ac68a5e1154530c8e88fb8ac2f508ab72"></a>

Result refresh token that can be used to get new access tokens.

#### `public bool `[`RefreshToken_IsSet`](#structFRHAPI__TokenResponse_1af8d74d0749fb2de5acdf4acfe60272f3) <a id="structFRHAPI__TokenResponse_1af8d74d0749fb2de5acdf4acfe60272f3"></a>

true if RefreshToken_Optional has been set to a value

#### `public int32 `[`ExpiresIn`](#structFRHAPI__TokenResponse_1a86483ede9759e7f6e91e8699982e7d2e) <a id="structFRHAPI__TokenResponse_1a86483ede9759e7f6e91e8699982e7d2e"></a>

Result access token expiration time in seconds.

#### `public virtual bool `[`FromJson`](#structFRHAPI__TokenResponse_1a51d04bfd1988cc71eb7d202a6261f8b7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TokenResponse_1a51d04bfd1988cc71eb7d202a6261f8b7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TokenResponse_1a1709925f8f8a803e82435ab685e8bc61)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__TokenResponse_1a1709925f8f8a803e82435ab685e8bc61"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1a20ca142a1f4766822dcb2d4cb7ef6423)`()` <a id="structFRHAPI__TokenResponse_1a20ca142a1f4766822dcb2d4cb7ef6423"></a>

Gets the value of AccessToken.

#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1a407d1ccd0cff9f23411ecb8917a1db20)`() const` <a id="structFRHAPI__TokenResponse_1a407d1ccd0cff9f23411ecb8917a1db20"></a>

Gets the value of AccessToken.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a5c77cea4ccdffd1795a07441390ce271)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a5c77cea4ccdffd1795a07441390ce271"></a>

Sets the value of AccessToken.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a0f0e6334d81133e882c66a44be9260d4)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1a0f0e6334d81133e882c66a44be9260d4"></a>

Sets the value of AccessToken using move semantics.

#### `public inline FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1af7bdddb375da96bc46b73b9c2f70ebd1)`()` <a id="structFRHAPI__TokenResponse_1af7bdddb375da96bc46b73b9c2f70ebd1"></a>

Gets the value of TokenType.

#### `public inline const FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1ad742a74b18a38f5470f05d957e9d3bd4)`() const` <a id="structFRHAPI__TokenResponse_1ad742a74b18a38f5470f05d957e9d3bd4"></a>

Gets the value of TokenType.

#### `public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1addd90c244d575f3690fbdb625a81dcc0)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1addd90c244d575f3690fbdb625a81dcc0"></a>

Sets the value of TokenType.

#### `public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1ab8212eff759c0a23c4e4551769dbf172)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1ab8212eff759c0a23c4e4551769dbf172"></a>

Sets the value of TokenType using move semantics.

#### `public inline FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1acba19731a89589703cb6e01ca82333d9)`()` <a id="structFRHAPI__TokenResponse_1acba19731a89589703cb6e01ca82333d9"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a777b5c513b0a4cea565c19849cf417d9)`() const` <a id="structFRHAPI__TokenResponse_1a777b5c513b0a4cea565c19849cf417d9"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a8f1ce6fa1b9629ad379e2681527bf6f6)`(const FString & DefaultValue) const` <a id="structFRHAPI__TokenResponse_1a8f1ce6fa1b9629ad379e2681527bf6f6"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa)`(FString & OutValue) const` <a id="structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a02109c334eb9600b35545851763b471a)`()` <a id="structFRHAPI__TokenResponse_1a02109c334eb9600b35545851763b471a"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1aeb2eb7b9f1c31e244f92e1216edc78be)`() const` <a id="structFRHAPI__TokenResponse_1aeb2eb7b9f1c31e244f92e1216edc78be"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a8f82d55b9c6af0d3c05ff883caa71632)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a8f82d55b9c6af0d3c05ff883caa71632"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a3f50259541f620e7be54d14f8ba6cfab)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1a3f50259541f620e7be54d14f8ba6cfab"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)`()` <a id="structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline bool `[`IsRefreshTokenSet`](#structFRHAPI__TokenResponse_1a16030adf3bc9232e15d18c7302ae084e)`() const` <a id="structFRHAPI__TokenResponse_1a16030adf3bc9232e15d18c7302ae084e"></a>

Checks whether RefreshToken_Optional has been set.

#### `public inline int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a82e947645b5bd5587f52eb9f2a04abd5)`()` <a id="structFRHAPI__TokenResponse_1a82e947645b5bd5587f52eb9f2a04abd5"></a>

Gets the value of ExpiresIn.

#### `public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a91b25bb1a7e09fbc9c21de527f2dcd13)`() const` <a id="structFRHAPI__TokenResponse_1a91b25bb1a7e09fbc9c21de527f2dcd13"></a>

Gets the value of ExpiresIn.

#### `public inline void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a2aac788ac3241e8e2ff90f7074213fd4)`(const int32 & NewValue)` <a id="structFRHAPI__TokenResponse_1a2aac788ac3241e8e2ff90f7074213fd4"></a>

Sets the value of ExpiresIn.

#### `public inline void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a77111e5ac8eb8b26fb436a5f6ece61f7)`(int32 && NewValue)` <a id="structFRHAPI__TokenResponse_1a77111e5ac8eb8b26fb436a5f6ece61f7"></a>

Sets the value of ExpiresIn using move semantics.

#### `public inline bool `[`IsExpiresInDefaultValue`](#structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414)`() const` <a id="structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414"></a>

Returns true if ExpiresIn matches the default value.

#### `public inline void `[`SetExpiresInToDefault`](#structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae)`()` <a id="structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae"></a>

Sets the value of ExpiresIn to its default

