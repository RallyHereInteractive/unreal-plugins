# group `RHAPI_HTTPAuthorizationCredentials` <a id="group__RHAPI__HTTPAuthorizationCredentials"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HTTPAuthorizationCredentials`](#structFRHAPI__HTTPAuthorizationCredentials) | The HTTP authorization credentials in the result of using &#x60;HTTPBearer&#x60; or &#x60;HTTPDigest&#x60; in a dependency. The HTTP authorization header value is split by the first space. The first part is the &#x60;scheme&#x60;, the second part is the &#x60;credentials&#x60;. For example, in an HTTP Bearer token scheme, the client will send a header like: &#x60;&#x60;&#x60; Authorization: Bearer deadbeef12346 &#x60;&#x60;&#x60; In this case: * &#x60;scheme&#x60; will have the value &#x60;&quot;Bearer&quot;&#x60; * &#x60;credentials&#x60; will have the value &#x60;&quot;deadbeef12346&quot;&#x60;.

## struct `FRHAPI_HTTPAuthorizationCredentials` <a id="structFRHAPI__HTTPAuthorizationCredentials"></a>

```
struct FRHAPI_HTTPAuthorizationCredentials
  : public FRHAPI_Model
```

The HTTP authorization credentials in the result of using &#x60;HTTPBearer&#x60; or &#x60;HTTPDigest&#x60; in a dependency. The HTTP authorization header value is split by the first space. The first part is the &#x60;scheme&#x60;, the second part is the &#x60;credentials&#x60;. For example, in an HTTP Bearer token scheme, the client will send a header like: &#x60;&#x60;&#x60; Authorization: Bearer deadbeef12346 &#x60;&#x60;&#x60; In this case: * &#x60;scheme&#x60; will have the value &#x60;&quot;Bearer&quot;&#x60; * &#x60;credentials&#x60; will have the value &#x60;&quot;deadbeef12346&quot;&#x60;.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Scheme`](#structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5) | 
`public FString `[`Credentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5) | 
`public virtual bool `[`FromJson`](#structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df)`()` | Gets the value of Scheme.
`public inline const FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0)`() const` | Gets the value of Scheme.
`public inline void `[`SetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a8c0a3d04be10db5da86367505bbbf970)`(const FString & NewValue)` | Sets the value of Scheme.
`public inline void `[`SetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1aba105b2bf51e54d7899d6edf1b2853fe)`(FString && NewValue)` | Sets the value of Scheme using move semantics.
`public inline FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e)`()` | Gets the value of Credentials.
`public inline const FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6)`() const` | Gets the value of Credentials.
`public inline void `[`SetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1afa5fd09822635a0021a9ab7337fb6c48)`(const FString & NewValue)` | Sets the value of Credentials.
`public inline void `[`SetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a51d2ea86d51baa1bead42a657c927f25)`(FString && NewValue)` | Sets the value of Credentials using move semantics.

### Members

#### `public FString `[`Scheme`](#structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5) <a id="structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5"></a>

#### `public FString `[`Credentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5) <a id="structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df)`()` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df"></a>

Gets the value of Scheme.

#### `public inline const FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0)`() const` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0"></a>

Gets the value of Scheme.

#### `public inline void `[`SetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a8c0a3d04be10db5da86367505bbbf970)`(const FString & NewValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a8c0a3d04be10db5da86367505bbbf970"></a>

Sets the value of Scheme.

#### `public inline void `[`SetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1aba105b2bf51e54d7899d6edf1b2853fe)`(FString && NewValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1aba105b2bf51e54d7899d6edf1b2853fe"></a>

Sets the value of Scheme using move semantics.

#### `public inline FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e)`()` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e"></a>

Gets the value of Credentials.

#### `public inline const FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6)`() const` <a id="structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6"></a>

Gets the value of Credentials.

#### `public inline void `[`SetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1afa5fd09822635a0021a9ab7337fb6c48)`(const FString & NewValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1afa5fd09822635a0021a9ab7337fb6c48"></a>

Sets the value of Credentials.

#### `public inline void `[`SetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a51d2ea86d51baa1bead42a657c927f25)`(FString && NewValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a51d2ea86d51baa1bead42a657c927f25"></a>

Sets the value of Credentials using move semantics.

