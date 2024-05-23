# group `RHAPI_TokenResponse` <a id="group__RHAPI__TokenResponse"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__TokenResponse_1aa9593a8aca941473bdec4de63517e340)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TokenResponse_1a667fb38cc9a4612f7b20de637d509c56)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1ae02bb6e092058e18ccf61352b24820b5)`()` | Gets the value of AccessToken.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1ad604cb33c5feaf308d4c76460ec5bb41)`() const` | Gets the value of AccessToken.
`public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a5c77cea4ccdffd1795a07441390ce271)`(const FString & NewValue)` | Sets the value of AccessToken.
`public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a0f0e6334d81133e882c66a44be9260d4)`(FString && NewValue)` | Sets the value of AccessToken using move semantics.
`public inline FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1a5676d4c5ee5f92f90d90372734b0d073)`()` | Gets the value of TokenType.
`public inline const FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1a5247437cd4681320b756bf9974ab5e86)`() const` | Gets the value of TokenType.
`public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1addd90c244d575f3690fbdb625a81dcc0)`(const FString & NewValue)` | Sets the value of TokenType.
`public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1ab8212eff759c0a23c4e4551769dbf172)`(FString && NewValue)` | Sets the value of TokenType using move semantics.
`public inline FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1aeb7b6f2350eefadc8ad42799b2d937ef)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1aa39c5af160236c69e2f47f0ea4d440c9)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1af2e4a443449b46145042457026d9a90a)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a8361fb23129ce5754854ec8df8a37caf)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a24388acb3504f05e34ae5418c123c4c4)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a8f82d55b9c6af0d3c05ff883caa71632)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a3f50259541f620e7be54d14f8ba6cfab)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a6756fc1ebbcd784b9a872ad5262fe371)`()` | Gets the value of ExpiresIn.
`public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a190123e7780c4e2e63fe2dee23ab5bc8)`() const` | Gets the value of ExpiresIn.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__TokenResponse_1aa9593a8aca941473bdec4de63517e340)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TokenResponse_1aa9593a8aca941473bdec4de63517e340"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TokenResponse_1a667fb38cc9a4612f7b20de637d509c56)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TokenResponse_1a667fb38cc9a4612f7b20de637d509c56"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1ae02bb6e092058e18ccf61352b24820b5)`()` <a id="structFRHAPI__TokenResponse_1ae02bb6e092058e18ccf61352b24820b5"></a>

Gets the value of AccessToken.

#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1ad604cb33c5feaf308d4c76460ec5bb41)`() const` <a id="structFRHAPI__TokenResponse_1ad604cb33c5feaf308d4c76460ec5bb41"></a>

Gets the value of AccessToken.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a5c77cea4ccdffd1795a07441390ce271)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a5c77cea4ccdffd1795a07441390ce271"></a>

Sets the value of AccessToken.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a0f0e6334d81133e882c66a44be9260d4)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1a0f0e6334d81133e882c66a44be9260d4"></a>

Sets the value of AccessToken using move semantics.

#### `public inline FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1a5676d4c5ee5f92f90d90372734b0d073)`()` <a id="structFRHAPI__TokenResponse_1a5676d4c5ee5f92f90d90372734b0d073"></a>

Gets the value of TokenType.

#### `public inline const FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1a5247437cd4681320b756bf9974ab5e86)`() const` <a id="structFRHAPI__TokenResponse_1a5247437cd4681320b756bf9974ab5e86"></a>

Gets the value of TokenType.

#### `public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1addd90c244d575f3690fbdb625a81dcc0)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1addd90c244d575f3690fbdb625a81dcc0"></a>

Sets the value of TokenType.

#### `public inline void `[`SetTokenType`](#structFRHAPI__TokenResponse_1ab8212eff759c0a23c4e4551769dbf172)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1ab8212eff759c0a23c4e4551769dbf172"></a>

Sets the value of TokenType using move semantics.

#### `public inline FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1aeb7b6f2350eefadc8ad42799b2d937ef)`()` <a id="structFRHAPI__TokenResponse_1aeb7b6f2350eefadc8ad42799b2d937ef"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1aa39c5af160236c69e2f47f0ea4d440c9)`() const` <a id="structFRHAPI__TokenResponse_1aa39c5af160236c69e2f47f0ea4d440c9"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1af2e4a443449b46145042457026d9a90a)`(const FString & DefaultValue) const` <a id="structFRHAPI__TokenResponse_1af2e4a443449b46145042457026d9a90a"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa)`(FString & OutValue) const` <a id="structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a8361fb23129ce5754854ec8df8a37caf)`()` <a id="structFRHAPI__TokenResponse_1a8361fb23129ce5754854ec8df8a37caf"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a24388acb3504f05e34ae5418c123c4c4)`() const` <a id="structFRHAPI__TokenResponse_1a24388acb3504f05e34ae5418c123c4c4"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a8f82d55b9c6af0d3c05ff883caa71632)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a8f82d55b9c6af0d3c05ff883caa71632"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a3f50259541f620e7be54d14f8ba6cfab)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1a3f50259541f620e7be54d14f8ba6cfab"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)`()` <a id="structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a6756fc1ebbcd784b9a872ad5262fe371)`()` <a id="structFRHAPI__TokenResponse_1a6756fc1ebbcd784b9a872ad5262fe371"></a>

Gets the value of ExpiresIn.

#### `public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a190123e7780c4e2e63fe2dee23ab5bc8)`() const` <a id="structFRHAPI__TokenResponse_1a190123e7780c4e2e63fe2dee23ab5bc8"></a>

Gets the value of ExpiresIn.

#### `public inline void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a2aac788ac3241e8e2ff90f7074213fd4)`(const int32 & NewValue)` <a id="structFRHAPI__TokenResponse_1a2aac788ac3241e8e2ff90f7074213fd4"></a>

Sets the value of ExpiresIn.

#### `public inline void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a77111e5ac8eb8b26fb436a5f6ece61f7)`(int32 && NewValue)` <a id="structFRHAPI__TokenResponse_1a77111e5ac8eb8b26fb436a5f6ece61f7"></a>

Sets the value of ExpiresIn using move semantics.

#### `public inline bool `[`IsExpiresInDefaultValue`](#structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414)`() const` <a id="structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414"></a>

Returns true if ExpiresIn matches the default value.

#### `public inline void `[`SetExpiresInToDefault`](#structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae)`()` <a id="structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae"></a>

Sets the value of ExpiresIn to its default

