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
`public inline FORCEINLINE FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1a61e2d389761731fbeb60acfed5a28c4a)`()` | Gets the value of AccessToken.
`public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1ae7d1d5a0caaf684585dcef23aba30fe4)`() const` | Gets the value of AccessToken.
`public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a74912d9d8b05b51465ff0823ca96c183)`(const FString & NewValue)` | Sets the value of AccessToken.
`public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a953f0104bb8cc3a2fdbf5e8a7669e7df)`(FString && NewValue)` | Sets the value of AccessToken using move semantics.
`public inline FORCEINLINE FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1a4cf6bfde385f714cce83b264056c32e7)`()` | Gets the value of TokenType.
`public inline FORCEINLINE const FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1af6d2cc607d825e1ba51ae80af3cec39d)`() const` | Gets the value of TokenType.
`public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__TokenResponse_1a7dff2a06bf1fdedccf9bfcf983c1c2ac)`(const FString & NewValue)` | Sets the value of TokenType.
`public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__TokenResponse_1a7a5795f949fa6858f4b559cd9bfe2945)`(FString && NewValue)` | Sets the value of TokenType using move semantics.
`public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a5846f8f22f3ddd9089119825ab8a1256)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a257c4a250abfae699397528c3902c10f)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a279d897ee9e30ef35959107bc2ada051)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1ae9ae6a83b16c2b7f17b92716caaa837e)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1afb38d77775efee3c69e5cb272d85cd77)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a7b6b4e277d0a1e3aaef92af10deef509)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a7394f719cf733f4f7aba1c7d2fe941fe)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1ab2b3f8712255f0f9affd5327e3e05cd3)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a4b5dd88f7f1abf47cc8bf97dd81c0d55)`()` | Gets the value of ExpiresIn.
`public inline FORCEINLINE const int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1af43ca80989750deff5290d6ad3fb18cb)`() const` | Gets the value of ExpiresIn.
`public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a62f9c73582942d5c4003564be958eab9)`(const int32 & NewValue)` | Sets the value of ExpiresIn.
`public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a0ce52431d7660a69be6299e141ff2b60)`(int32 && NewValue)` | Sets the value of ExpiresIn using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ExpiresIn`](#structFRHAPI__TokenResponse_1a6e7bacdfdda63d57cefb68ca0a0e7a5c)`()` | Returns the default value of ExpiresIn.

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

#### `public inline FORCEINLINE FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1a61e2d389761731fbeb60acfed5a28c4a)`()` <a id="structFRHAPI__TokenResponse_1a61e2d389761731fbeb60acfed5a28c4a"></a>

Gets the value of AccessToken.

#### `public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__TokenResponse_1ae7d1d5a0caaf684585dcef23aba30fe4)`() const` <a id="structFRHAPI__TokenResponse_1ae7d1d5a0caaf684585dcef23aba30fe4"></a>

Gets the value of AccessToken.

#### `public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a74912d9d8b05b51465ff0823ca96c183)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a74912d9d8b05b51465ff0823ca96c183"></a>

Sets the value of AccessToken.

#### `public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__TokenResponse_1a953f0104bb8cc3a2fdbf5e8a7669e7df)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1a953f0104bb8cc3a2fdbf5e8a7669e7df"></a>

Sets the value of AccessToken using move semantics.

#### `public inline FORCEINLINE FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1a4cf6bfde385f714cce83b264056c32e7)`()` <a id="structFRHAPI__TokenResponse_1a4cf6bfde385f714cce83b264056c32e7"></a>

Gets the value of TokenType.

#### `public inline FORCEINLINE const FString & `[`GetTokenType`](#structFRHAPI__TokenResponse_1af6d2cc607d825e1ba51ae80af3cec39d)`() const` <a id="structFRHAPI__TokenResponse_1af6d2cc607d825e1ba51ae80af3cec39d"></a>

Gets the value of TokenType.

#### `public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__TokenResponse_1a7dff2a06bf1fdedccf9bfcf983c1c2ac)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a7dff2a06bf1fdedccf9bfcf983c1c2ac"></a>

Sets the value of TokenType.

#### `public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__TokenResponse_1a7a5795f949fa6858f4b559cd9bfe2945)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1a7a5795f949fa6858f4b559cd9bfe2945"></a>

Sets the value of TokenType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a5846f8f22f3ddd9089119825ab8a1256)`()` <a id="structFRHAPI__TokenResponse_1a5846f8f22f3ddd9089119825ab8a1256"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a257c4a250abfae699397528c3902c10f)`() const` <a id="structFRHAPI__TokenResponse_1a257c4a250abfae699397528c3902c10f"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1a279d897ee9e30ef35959107bc2ada051)`(const FString & DefaultValue) const` <a id="structFRHAPI__TokenResponse_1a279d897ee9e30ef35959107bc2ada051"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRefreshToken`](#structFRHAPI__TokenResponse_1ae9ae6a83b16c2b7f17b92716caaa837e)`(FString & OutValue) const` <a id="structFRHAPI__TokenResponse_1ae9ae6a83b16c2b7f17b92716caaa837e"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1afb38d77775efee3c69e5cb272d85cd77)`()` <a id="structFRHAPI__TokenResponse_1afb38d77775efee3c69e5cb272d85cd77"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__TokenResponse_1a7b6b4e277d0a1e3aaef92af10deef509)`() const` <a id="structFRHAPI__TokenResponse_1a7b6b4e277d0a1e3aaef92af10deef509"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1a7394f719cf733f4f7aba1c7d2fe941fe)`(const FString & NewValue)` <a id="structFRHAPI__TokenResponse_1a7394f719cf733f4f7aba1c7d2fe941fe"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__TokenResponse_1ab2b3f8712255f0f9affd5327e3e05cd3)`(FString && NewValue)` <a id="structFRHAPI__TokenResponse_1ab2b3f8712255f0f9affd5327e3e05cd3"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)`()` <a id="structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1a4b5dd88f7f1abf47cc8bf97dd81c0d55)`()` <a id="structFRHAPI__TokenResponse_1a4b5dd88f7f1abf47cc8bf97dd81c0d55"></a>

Gets the value of ExpiresIn.

#### `public inline FORCEINLINE const int32 & `[`GetExpiresIn`](#structFRHAPI__TokenResponse_1af43ca80989750deff5290d6ad3fb18cb)`() const` <a id="structFRHAPI__TokenResponse_1af43ca80989750deff5290d6ad3fb18cb"></a>

Gets the value of ExpiresIn.

#### `public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a62f9c73582942d5c4003564be958eab9)`(const int32 & NewValue)` <a id="structFRHAPI__TokenResponse_1a62f9c73582942d5c4003564be958eab9"></a>

Sets the value of ExpiresIn.

#### `public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__TokenResponse_1a0ce52431d7660a69be6299e141ff2b60)`(int32 && NewValue)` <a id="structFRHAPI__TokenResponse_1a0ce52431d7660a69be6299e141ff2b60"></a>

Sets the value of ExpiresIn using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ExpiresIn`](#structFRHAPI__TokenResponse_1a6e7bacdfdda63d57cefb68ca0a0e7a5c)`()` <a id="structFRHAPI__TokenResponse_1a6e7bacdfdda63d57cefb68ca0a0e7a5c"></a>

Returns the default value of ExpiresIn.

