---
title: RHAPI_OAuthTokenExchange
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_OAuthTokenExchange`](#structFRHAPI__OAuthTokenExchange) | OAuth token exchange request.

## struct `FRHAPI_OAuthTokenExchange` <a id="structFRHAPI__OAuthTokenExchange"></a>

```
struct FRHAPI_OAuthTokenExchange
  : public FRHAPI_Model
```

OAuth token exchange request.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OAuthTokenEchangeGrantType `[`GrantType`](#structFRHAPI__OAuthTokenExchange_1aa86abe58af5adeae744bdd18e4913983) | Grant type for the OAuth exchange.
`public FString `[`Code`](#structFRHAPI__OAuthTokenExchange_1adecfe63121e8082daec11dc10e364895) | authorization_code for the OAuth exchange.
`public bool `[`AcceptedEula_Optional`](#structFRHAPI__OAuthTokenExchange_1a57e46947e4feea5f172cd27605afbb43) | If true, the user has accepted the EULA.
`public bool `[`AcceptedEula_IsSet`](#structFRHAPI__OAuthTokenExchange_1a8751a1f91d24c1eadbcbfb504368186e) | true if AcceptedEula_Optional has been set to a value
`public bool `[`AcceptedTos_Optional`](#structFRHAPI__OAuthTokenExchange_1a9418a567dcee1ac7d57e44d954b35ee0) | If true, the user has accepted the TOS.
`public bool `[`AcceptedTos_IsSet`](#structFRHAPI__OAuthTokenExchange_1aae1fe88f23dccedfab5821827648f8d5) | true if AcceptedTos_Optional has been set to a value
`public bool `[`AcceptedPrivacyPolicy_Optional`](#structFRHAPI__OAuthTokenExchange_1aae6ed503678834c1860823dd81e1443b) | If true, the user has accepted the Privacy Policy.
`public bool `[`AcceptedPrivacyPolicy_IsSet`](#structFRHAPI__OAuthTokenExchange_1a17e4775567e864d1707a3fd165f27f18) | true if AcceptedPrivacyPolicy_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__OAuthTokenExchange_1afe430415050eb47e3c782e9c12260995)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenExchange_1aba8fc8f3ea66d3656ec6cdef0d7b1c20)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1a9db1aa07a5de56b4078723a44f0f8a58)`()` | Gets the value of GrantType.
`public inline FORCEINLINE const ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1abc5bdc387013850e40ffc27a567615b3)`() const` | Gets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1af78a073e3062249c4a457621906f8d00)`(const ERHAPI_OAuthTokenEchangeGrantType & NewValue)` | Sets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1a157ac823d6ee33cbff4f09ee63101d53)`(ERHAPI_OAuthTokenEchangeGrantType && NewValue)` | Sets the value of GrantType using move semantics.
`public inline FORCEINLINE FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1a3f40266c9b694a2511c51be8e9c792ac)`()` | Gets the value of Code.
`public inline FORCEINLINE const FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1aa6cfed1671f20fc7e29b2beecaa11aeb)`() const` | Gets the value of Code.
`public inline FORCEINLINE void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a1777323d22fa038c516b2dd72a272903)`(const FString & NewValue)` | Sets the value of Code.
`public inline FORCEINLINE void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a16241d2d6633bde5f13b78f1b749fb81)`(FString && NewValue)` | Sets the value of Code using move semantics.
`public inline FORCEINLINE bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a64f2a06ff3cf8289e25fb0bc31798410)`()` | Gets the value of AcceptedEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1af27cc677ee2e70403b638746c0225aa1)`() const` | Gets the value of AcceptedEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a351541be36f0628d0546d374e0660bde)`(const bool & DefaultValue) const` | Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a309ce4bdd23c78f23ccdf03c4aa60bbb)`(bool & OutValue) const` | Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1a9186104198c152855c553dd197e69db6)`()` | Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1ac963b63b6cb2f14e552afc1527abe619)`() const` | Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a8c79aa720b1749421726297a215a11c0)`(const bool & NewValue)` | Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true.
`public inline FORCEINLINE void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a3e5281ac8d69d9398e7607026f3e4099)`(bool && NewValue)` | Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true using move semantics.
`public inline void `[`ClearAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba)`()` | Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a12c8ee0d6941c7089e13dbaa02f15959)`()` | Returns the default value of AcceptedEula.
`public inline FORCEINLINE bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ac7ed778b5239be8bed00f9772f995fcd)`()` | Gets the value of AcceptedTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a30a179bc7c0f2264d178b1bbeacc6b72)`() const` | Gets the value of AcceptedTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1af0dbd5796f8338e4b84958e9d314bf93)`(const bool & DefaultValue) const` | Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1adaa972318b7eaf3a2d31ae4a8956006d)`(bool & OutValue) const` | Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1ad75b67882ac28fa9c0f66d857853b6ca)`()` | Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1ab056f66349bf3de81607249ee20f233d)`() const` | Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a9a085180e0a7c639b17ec0495bc2fa8b)`(const bool & NewValue)` | Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true.
`public inline FORCEINLINE void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a3e18a8779eab180d7567c1f7a1f66826)`(bool && NewValue)` | Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true using move semantics.
`public inline void `[`ClearAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536)`()` | Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ab28fdad8109f643eb2f776b3d1127066)`()` | Returns the default value of AcceptedTos.
`public inline FORCEINLINE bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1afe115d547805ab0b61a4899a46dac822)`()` | Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1aed579d9abdcd11efcbdb09aa180a5364)`() const` | Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a9174c1c2232bec7093264e9d11b43ef8)`(const bool & DefaultValue) const` | Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a53a2d8deb6a69d05e3f867c4a4f5a5c9)`(bool & OutValue) const` | Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1a773a90ca628750cef339c92936ed9b4c)`()` | Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1a418c391d713ed1c885e9b55877c8b5c1)`() const` | Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a689b29a0aab154057bbaa9a5cbba5636)`(const bool & NewValue)` | Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true.
`public inline FORCEINLINE void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a21547059853652aafc3aa716f4251465)`(bool && NewValue)` | Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1)`()` | Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a29580653ec9853982346e650608f01f7)`()` | Returns the default value of AcceptedPrivacyPolicy.

### Members

#### `public ERHAPI_OAuthTokenEchangeGrantType `[`GrantType`](#structFRHAPI__OAuthTokenExchange_1aa86abe58af5adeae744bdd18e4913983) <a id="structFRHAPI__OAuthTokenExchange_1aa86abe58af5adeae744bdd18e4913983"></a>

Grant type for the OAuth exchange.

#### `public FString `[`Code`](#structFRHAPI__OAuthTokenExchange_1adecfe63121e8082daec11dc10e364895) <a id="structFRHAPI__OAuthTokenExchange_1adecfe63121e8082daec11dc10e364895"></a>

authorization_code for the OAuth exchange.

#### `public bool `[`AcceptedEula_Optional`](#structFRHAPI__OAuthTokenExchange_1a57e46947e4feea5f172cd27605afbb43) <a id="structFRHAPI__OAuthTokenExchange_1a57e46947e4feea5f172cd27605afbb43"></a>

If true, the user has accepted the EULA.

#### `public bool `[`AcceptedEula_IsSet`](#structFRHAPI__OAuthTokenExchange_1a8751a1f91d24c1eadbcbfb504368186e) <a id="structFRHAPI__OAuthTokenExchange_1a8751a1f91d24c1eadbcbfb504368186e"></a>

true if AcceptedEula_Optional has been set to a value

#### `public bool `[`AcceptedTos_Optional`](#structFRHAPI__OAuthTokenExchange_1a9418a567dcee1ac7d57e44d954b35ee0) <a id="structFRHAPI__OAuthTokenExchange_1a9418a567dcee1ac7d57e44d954b35ee0"></a>

If true, the user has accepted the TOS.

#### `public bool `[`AcceptedTos_IsSet`](#structFRHAPI__OAuthTokenExchange_1aae1fe88f23dccedfab5821827648f8d5) <a id="structFRHAPI__OAuthTokenExchange_1aae1fe88f23dccedfab5821827648f8d5"></a>

true if AcceptedTos_Optional has been set to a value

#### `public bool `[`AcceptedPrivacyPolicy_Optional`](#structFRHAPI__OAuthTokenExchange_1aae6ed503678834c1860823dd81e1443b) <a id="structFRHAPI__OAuthTokenExchange_1aae6ed503678834c1860823dd81e1443b"></a>

If true, the user has accepted the Privacy Policy.

#### `public bool `[`AcceptedPrivacyPolicy_IsSet`](#structFRHAPI__OAuthTokenExchange_1a17e4775567e864d1707a3fd165f27f18) <a id="structFRHAPI__OAuthTokenExchange_1a17e4775567e864d1707a3fd165f27f18"></a>

true if AcceptedPrivacyPolicy_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__OAuthTokenExchange_1afe430415050eb47e3c782e9c12260995)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__OAuthTokenExchange_1afe430415050eb47e3c782e9c12260995"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenExchange_1aba8fc8f3ea66d3656ec6cdef0d7b1c20)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__OAuthTokenExchange_1aba8fc8f3ea66d3656ec6cdef0d7b1c20"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1a9db1aa07a5de56b4078723a44f0f8a58)`()` <a id="structFRHAPI__OAuthTokenExchange_1a9db1aa07a5de56b4078723a44f0f8a58"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE const ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1abc5bdc387013850e40ffc27a567615b3)`() const` <a id="structFRHAPI__OAuthTokenExchange_1abc5bdc387013850e40ffc27a567615b3"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1af78a073e3062249c4a457621906f8d00)`(const ERHAPI_OAuthTokenEchangeGrantType & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1af78a073e3062249c4a457621906f8d00"></a>

Sets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1a157ac823d6ee33cbff4f09ee63101d53)`(ERHAPI_OAuthTokenEchangeGrantType && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a157ac823d6ee33cbff4f09ee63101d53"></a>

Sets the value of GrantType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1a3f40266c9b694a2511c51be8e9c792ac)`()` <a id="structFRHAPI__OAuthTokenExchange_1a3f40266c9b694a2511c51be8e9c792ac"></a>

Gets the value of Code.

#### `public inline FORCEINLINE const FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1aa6cfed1671f20fc7e29b2beecaa11aeb)`() const` <a id="structFRHAPI__OAuthTokenExchange_1aa6cfed1671f20fc7e29b2beecaa11aeb"></a>

Gets the value of Code.

#### `public inline FORCEINLINE void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a1777323d22fa038c516b2dd72a272903)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a1777323d22fa038c516b2dd72a272903"></a>

Sets the value of Code.

#### `public inline FORCEINLINE void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a16241d2d6633bde5f13b78f1b749fb81)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a16241d2d6633bde5f13b78f1b749fb81"></a>

Sets the value of Code using move semantics.

#### `public inline FORCEINLINE bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a64f2a06ff3cf8289e25fb0bc31798410)`()` <a id="structFRHAPI__OAuthTokenExchange_1a64f2a06ff3cf8289e25fb0bc31798410"></a>

Gets the value of AcceptedEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1af27cc677ee2e70403b638746c0225aa1)`() const` <a id="structFRHAPI__OAuthTokenExchange_1af27cc677ee2e70403b638746c0225aa1"></a>

Gets the value of AcceptedEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a351541be36f0628d0546d374e0660bde)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a351541be36f0628d0546d374e0660bde"></a>

Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a309ce4bdd23c78f23ccdf03c4aa60bbb)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a309ce4bdd23c78f23ccdf03c4aa60bbb"></a>

Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1a9186104198c152855c553dd197e69db6)`()` <a id="structFRHAPI__OAuthTokenExchange_1a9186104198c152855c553dd197e69db6"></a>

Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1ac963b63b6cb2f14e552afc1527abe619)`() const` <a id="structFRHAPI__OAuthTokenExchange_1ac963b63b6cb2f14e552afc1527abe619"></a>

Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a8c79aa720b1749421726297a215a11c0)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a8c79aa720b1749421726297a215a11c0"></a>

Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a3e5281ac8d69d9398e7607026f3e4099)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a3e5281ac8d69d9398e7607026f3e4099"></a>

Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba)`()` <a id="structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba"></a>

Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a12c8ee0d6941c7089e13dbaa02f15959)`()` <a id="structFRHAPI__OAuthTokenExchange_1a12c8ee0d6941c7089e13dbaa02f15959"></a>

Returns the default value of AcceptedEula.

#### `public inline FORCEINLINE bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ac7ed778b5239be8bed00f9772f995fcd)`()` <a id="structFRHAPI__OAuthTokenExchange_1ac7ed778b5239be8bed00f9772f995fcd"></a>

Gets the value of AcceptedTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a30a179bc7c0f2264d178b1bbeacc6b72)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a30a179bc7c0f2264d178b1bbeacc6b72"></a>

Gets the value of AcceptedTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1af0dbd5796f8338e4b84958e9d314bf93)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenExchange_1af0dbd5796f8338e4b84958e9d314bf93"></a>

Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1adaa972318b7eaf3a2d31ae4a8956006d)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenExchange_1adaa972318b7eaf3a2d31ae4a8956006d"></a>

Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1ad75b67882ac28fa9c0f66d857853b6ca)`()` <a id="structFRHAPI__OAuthTokenExchange_1ad75b67882ac28fa9c0f66d857853b6ca"></a>

Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1ab056f66349bf3de81607249ee20f233d)`() const` <a id="structFRHAPI__OAuthTokenExchange_1ab056f66349bf3de81607249ee20f233d"></a>

Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a9a085180e0a7c639b17ec0495bc2fa8b)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a9a085180e0a7c639b17ec0495bc2fa8b"></a>

Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a3e18a8779eab180d7567c1f7a1f66826)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a3e18a8779eab180d7567c1f7a1f66826"></a>

Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536)`()` <a id="structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536"></a>

Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ab28fdad8109f643eb2f776b3d1127066)`()` <a id="structFRHAPI__OAuthTokenExchange_1ab28fdad8109f643eb2f776b3d1127066"></a>

Returns the default value of AcceptedTos.

#### `public inline FORCEINLINE bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1afe115d547805ab0b61a4899a46dac822)`()` <a id="structFRHAPI__OAuthTokenExchange_1afe115d547805ab0b61a4899a46dac822"></a>

Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1aed579d9abdcd11efcbdb09aa180a5364)`() const` <a id="structFRHAPI__OAuthTokenExchange_1aed579d9abdcd11efcbdb09aa180a5364"></a>

Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a9174c1c2232bec7093264e9d11b43ef8)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a9174c1c2232bec7093264e9d11b43ef8"></a>

Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a53a2d8deb6a69d05e3f867c4a4f5a5c9)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a53a2d8deb6a69d05e3f867c4a4f5a5c9"></a>

Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1a773a90ca628750cef339c92936ed9b4c)`()` <a id="structFRHAPI__OAuthTokenExchange_1a773a90ca628750cef339c92936ed9b4c"></a>

Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1a418c391d713ed1c885e9b55877c8b5c1)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a418c391d713ed1c885e9b55877c8b5c1"></a>

Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a689b29a0aab154057bbaa9a5cbba5636)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a689b29a0aab154057bbaa9a5cbba5636"></a>

Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a21547059853652aafc3aa716f4251465)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a21547059853652aafc3aa716f4251465"></a>

Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1)`()` <a id="structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1"></a>

Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a29580653ec9853982346e650608f01f7)`()` <a id="structFRHAPI__OAuthTokenExchange_1a29580653ec9853982346e650608f01f7"></a>

Returns the default value of AcceptedPrivacyPolicy.

