# group `RHAPI_OAuthTokenExchange` <a id="group__RHAPI__OAuthTokenExchange"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenExchange_1a8da27e302bc6b29df2bddd9995545ddf)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1a6ee282c5eb8adbcf0eb170ea3e22f0ba)`()` | Gets the value of GrantType.
`public inline const ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1a7ab8a47a8a149e23f9ae553e431dc30c)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1a36b23851bb1928b74e9b068ad53d1eb6)`(const ERHAPI_OAuthTokenEchangeGrantType & NewValue)` | Sets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1a557340523e284d665b521ddfd8726c48)`(ERHAPI_OAuthTokenEchangeGrantType && NewValue)` | Sets the value of GrantType using move semantics.
`public inline FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1a7707ebe9a7dfd2198cb60e45ead0e690)`()` | Gets the value of Code.
`public inline const FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1afe1983a19229cf6ef62dfc9a3dd7c3e4)`() const` | Gets the value of Code.
`public inline void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a251224d73434a1ee1313180dc0a3b99f)`(const FString & NewValue)` | Sets the value of Code.
`public inline void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a7dd025e297c5ab46a47b0d952a0b6ee4)`(FString && NewValue)` | Sets the value of Code using move semantics.
`public inline bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a53e63f94e1ba7917e516ef25db57fcfc)`()` | Gets the value of AcceptedEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a692e97abf1cdc995ce7c76f196a7d1ca)`() const` | Gets the value of AcceptedEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1abd50a52ef98f635de9a04df437067740)`(const bool & DefaultValue) const` | Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a7d340fd12598c6d04539bf0d162ee2df)`(bool & OutValue) const` | Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1a3edab593b1fdabfa63fa482a138fb0f1)`()` | Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1a20b0762917a318d20a4ea774b9fd1530)`() const` | Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a179fd71ff9b581d3804f232dc5a2c7cf)`(const bool & NewValue)` | Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true.
`public inline void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1af7feca6bf184b6bfcdd7264af0b36b8c)`(bool && NewValue)` | Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true using move semantics.
`public inline void `[`ClearAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba)`()` | Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false.
`public inline bool `[`IsAcceptedEulaSet`](#structFRHAPI__OAuthTokenExchange_1a1175ffb181bd3d493fac9de194cd20bc)`() const` | Checks whether AcceptedEula_Optional has been set.
`public inline bool `[`IsAcceptedEulaDefaultValue`](#structFRHAPI__OAuthTokenExchange_1a528451ab043b5a886b59f59ca182ca11)`() const` | Returns true if AcceptedEula_Optional is set and matches the default value.
`public inline void `[`SetAcceptedEulaToDefault`](#structFRHAPI__OAuthTokenExchange_1a2a068a9b1646965e8fa03cc111077f24)`()` | Sets the value of AcceptedEula_Optional to its default and also sets AcceptedEula_IsSet to true.
`public inline bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1af219f6740a560a7800f340287beee74e)`()` | Gets the value of AcceptedTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a8981df5a6d59fdca6662c950f60cc19a)`() const` | Gets the value of AcceptedTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a654a6e7c98264f9930d55085e2e5be36)`(const bool & DefaultValue) const` | Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ac5d3bbf8c2acee2f761f6d94e08b3b6b)`(bool & OutValue) const` | Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1a5e312f6b64edca36be865672b7acd25f)`()` | Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1a3de7095338a328bca1212886826bf5fa)`() const` | Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a3c509a4b8ad3112b57e56f39bb77b1fd)`(const bool & NewValue)` | Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true.
`public inline void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ae3230daeb9781a70ad35740e21b8fffd)`(bool && NewValue)` | Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true using move semantics.
`public inline void `[`ClearAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536)`()` | Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false.
`public inline bool `[`IsAcceptedTosSet`](#structFRHAPI__OAuthTokenExchange_1abab9a827d05ea22dc581a26322187d5e)`() const` | Checks whether AcceptedTos_Optional has been set.
`public inline bool `[`IsAcceptedTosDefaultValue`](#structFRHAPI__OAuthTokenExchange_1a54fb5e2dda724b25ab73be0c252e90d1)`() const` | Returns true if AcceptedTos_Optional is set and matches the default value.
`public inline void `[`SetAcceptedTosToDefault`](#structFRHAPI__OAuthTokenExchange_1a5c57ff1fe72114cf8238824dfee5077c)`()` | Sets the value of AcceptedTos_Optional to its default and also sets AcceptedTos_IsSet to true.
`public inline bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1afe6a55ea73d5c8c3d965dabb878b52b1)`()` | Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a14bac8f5a42d15b7df7346b3390779df)`() const` | Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a3a6f3d2d96711be00550cc526f090d23)`(const bool & DefaultValue) const` | Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a9c1f3cb03a83630263e44703279ded2a)`(bool & OutValue) const` | Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1a0f3928a29c7bd8af1e0be1cd74d461b6)`()` | Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1aedbb09ac04f49d018def2382887d0d8d)`() const` | Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1afc6d343bfc865c4079b288621307cbc2)`(const bool & NewValue)` | Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true.
`public inline void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a9a3e12eac78b8295b4da499e8154f42c)`(bool && NewValue)` | Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1)`()` | Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false.
`public inline bool `[`IsAcceptedPrivacyPolicySet`](#structFRHAPI__OAuthTokenExchange_1ae888673d027ce6a836b183049fd5405d)`() const` | Checks whether AcceptedPrivacyPolicy_Optional has been set.
`public inline bool `[`IsAcceptedPrivacyPolicyDefaultValue`](#structFRHAPI__OAuthTokenExchange_1ae5beea9b982bdfe51052d2b1ed011776)`() const` | Returns true if AcceptedPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetAcceptedPrivacyPolicyToDefault`](#structFRHAPI__OAuthTokenExchange_1a3523911676aa77a4facdfba9699a4355)`()` | Sets the value of AcceptedPrivacyPolicy_Optional to its default and also sets AcceptedPrivacyPolicy_IsSet to true.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenExchange_1a8da27e302bc6b29df2bddd9995545ddf)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__OAuthTokenExchange_1a8da27e302bc6b29df2bddd9995545ddf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1a6ee282c5eb8adbcf0eb170ea3e22f0ba)`()` <a id="structFRHAPI__OAuthTokenExchange_1a6ee282c5eb8adbcf0eb170ea3e22f0ba"></a>

Gets the value of GrantType.

#### `public inline const ERHAPI_OAuthTokenEchangeGrantType & `[`GetGrantType`](#structFRHAPI__OAuthTokenExchange_1a7ab8a47a8a149e23f9ae553e431dc30c)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a7ab8a47a8a149e23f9ae553e431dc30c"></a>

Gets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1a36b23851bb1928b74e9b068ad53d1eb6)`(const ERHAPI_OAuthTokenEchangeGrantType & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a36b23851bb1928b74e9b068ad53d1eb6"></a>

Sets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__OAuthTokenExchange_1a557340523e284d665b521ddfd8726c48)`(ERHAPI_OAuthTokenEchangeGrantType && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a557340523e284d665b521ddfd8726c48"></a>

Sets the value of GrantType using move semantics.

#### `public inline FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1a7707ebe9a7dfd2198cb60e45ead0e690)`()` <a id="structFRHAPI__OAuthTokenExchange_1a7707ebe9a7dfd2198cb60e45ead0e690"></a>

Gets the value of Code.

#### `public inline const FString & `[`GetCode`](#structFRHAPI__OAuthTokenExchange_1afe1983a19229cf6ef62dfc9a3dd7c3e4)`() const` <a id="structFRHAPI__OAuthTokenExchange_1afe1983a19229cf6ef62dfc9a3dd7c3e4"></a>

Gets the value of Code.

#### `public inline void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a251224d73434a1ee1313180dc0a3b99f)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a251224d73434a1ee1313180dc0a3b99f"></a>

Sets the value of Code.

#### `public inline void `[`SetCode`](#structFRHAPI__OAuthTokenExchange_1a7dd025e297c5ab46a47b0d952a0b6ee4)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a7dd025e297c5ab46a47b0d952a0b6ee4"></a>

Sets the value of Code using move semantics.

#### `public inline bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a53e63f94e1ba7917e516ef25db57fcfc)`()` <a id="structFRHAPI__OAuthTokenExchange_1a53e63f94e1ba7917e516ef25db57fcfc"></a>

Gets the value of AcceptedEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a692e97abf1cdc995ce7c76f196a7d1ca)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a692e97abf1cdc995ce7c76f196a7d1ca"></a>

Gets the value of AcceptedEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1abd50a52ef98f635de9a04df437067740)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenExchange_1abd50a52ef98f635de9a04df437067740"></a>

Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a7d340fd12598c6d04539bf0d162ee2df)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a7d340fd12598c6d04539bf0d162ee2df"></a>

Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1a3edab593b1fdabfa63fa482a138fb0f1)`()` <a id="structFRHAPI__OAuthTokenExchange_1a3edab593b1fdabfa63fa482a138fb0f1"></a>

Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptedEulaOrNull`](#structFRHAPI__OAuthTokenExchange_1a20b0762917a318d20a4ea774b9fd1530)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a20b0762917a318d20a4ea774b9fd1530"></a>

Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a179fd71ff9b581d3804f232dc5a2c7cf)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a179fd71ff9b581d3804f232dc5a2c7cf"></a>

Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true.

#### `public inline void `[`SetAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1af7feca6bf184b6bfcdd7264af0b36b8c)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1af7feca6bf184b6bfcdd7264af0b36b8c"></a>

Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptedEula`](#structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba)`()` <a id="structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba"></a>

Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false.

#### `public inline bool `[`IsAcceptedEulaSet`](#structFRHAPI__OAuthTokenExchange_1a1175ffb181bd3d493fac9de194cd20bc)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a1175ffb181bd3d493fac9de194cd20bc"></a>

Checks whether AcceptedEula_Optional has been set.

#### `public inline bool `[`IsAcceptedEulaDefaultValue`](#structFRHAPI__OAuthTokenExchange_1a528451ab043b5a886b59f59ca182ca11)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a528451ab043b5a886b59f59ca182ca11"></a>

Returns true if AcceptedEula_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptedEulaToDefault`](#structFRHAPI__OAuthTokenExchange_1a2a068a9b1646965e8fa03cc111077f24)`()` <a id="structFRHAPI__OAuthTokenExchange_1a2a068a9b1646965e8fa03cc111077f24"></a>

Sets the value of AcceptedEula_Optional to its default and also sets AcceptedEula_IsSet to true.

#### `public inline bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1af219f6740a560a7800f340287beee74e)`()` <a id="structFRHAPI__OAuthTokenExchange_1af219f6740a560a7800f340287beee74e"></a>

Gets the value of AcceptedTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a8981df5a6d59fdca6662c950f60cc19a)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a8981df5a6d59fdca6662c950f60cc19a"></a>

Gets the value of AcceptedTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a654a6e7c98264f9930d55085e2e5be36)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a654a6e7c98264f9930d55085e2e5be36"></a>

Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ac5d3bbf8c2acee2f761f6d94e08b3b6b)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenExchange_1ac5d3bbf8c2acee2f761f6d94e08b3b6b"></a>

Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1a5e312f6b64edca36be865672b7acd25f)`()` <a id="structFRHAPI__OAuthTokenExchange_1a5e312f6b64edca36be865672b7acd25f"></a>

Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptedTosOrNull`](#structFRHAPI__OAuthTokenExchange_1a3de7095338a328bca1212886826bf5fa)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a3de7095338a328bca1212886826bf5fa"></a>

Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1a3c509a4b8ad3112b57e56f39bb77b1fd)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a3c509a4b8ad3112b57e56f39bb77b1fd"></a>

Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true.

#### `public inline void `[`SetAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1ae3230daeb9781a70ad35740e21b8fffd)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1ae3230daeb9781a70ad35740e21b8fffd"></a>

Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptedTos`](#structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536)`()` <a id="structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536"></a>

Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false.

#### `public inline bool `[`IsAcceptedTosSet`](#structFRHAPI__OAuthTokenExchange_1abab9a827d05ea22dc581a26322187d5e)`() const` <a id="structFRHAPI__OAuthTokenExchange_1abab9a827d05ea22dc581a26322187d5e"></a>

Checks whether AcceptedTos_Optional has been set.

#### `public inline bool `[`IsAcceptedTosDefaultValue`](#structFRHAPI__OAuthTokenExchange_1a54fb5e2dda724b25ab73be0c252e90d1)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a54fb5e2dda724b25ab73be0c252e90d1"></a>

Returns true if AcceptedTos_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptedTosToDefault`](#structFRHAPI__OAuthTokenExchange_1a5c57ff1fe72114cf8238824dfee5077c)`()` <a id="structFRHAPI__OAuthTokenExchange_1a5c57ff1fe72114cf8238824dfee5077c"></a>

Sets the value of AcceptedTos_Optional to its default and also sets AcceptedTos_IsSet to true.

#### `public inline bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1afe6a55ea73d5c8c3d965dabb878b52b1)`()` <a id="structFRHAPI__OAuthTokenExchange_1afe6a55ea73d5c8c3d965dabb878b52b1"></a>

Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a14bac8f5a42d15b7df7346b3390779df)`() const` <a id="structFRHAPI__OAuthTokenExchange_1a14bac8f5a42d15b7df7346b3390779df"></a>

Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a3a6f3d2d96711be00550cc526f090d23)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a3a6f3d2d96711be00550cc526f090d23"></a>

Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a9c1f3cb03a83630263e44703279ded2a)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenExchange_1a9c1f3cb03a83630263e44703279ded2a"></a>

Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1a0f3928a29c7bd8af1e0be1cd74d461b6)`()` <a id="structFRHAPI__OAuthTokenExchange_1a0f3928a29c7bd8af1e0be1cd74d461b6"></a>

Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptedPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenExchange_1aedbb09ac04f49d018def2382887d0d8d)`() const` <a id="structFRHAPI__OAuthTokenExchange_1aedbb09ac04f49d018def2382887d0d8d"></a>

Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1afc6d343bfc865c4079b288621307cbc2)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1afc6d343bfc865c4079b288621307cbc2"></a>

Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true.

#### `public inline void `[`SetAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1a9a3e12eac78b8295b4da499e8154f42c)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenExchange_1a9a3e12eac78b8295b4da499e8154f42c"></a>

Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptedPrivacyPolicy`](#structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1)`()` <a id="structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1"></a>

Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsAcceptedPrivacyPolicySet`](#structFRHAPI__OAuthTokenExchange_1ae888673d027ce6a836b183049fd5405d)`() const` <a id="structFRHAPI__OAuthTokenExchange_1ae888673d027ce6a836b183049fd5405d"></a>

Checks whether AcceptedPrivacyPolicy_Optional has been set.

#### `public inline bool `[`IsAcceptedPrivacyPolicyDefaultValue`](#structFRHAPI__OAuthTokenExchange_1ae5beea9b982bdfe51052d2b1ed011776)`() const` <a id="structFRHAPI__OAuthTokenExchange_1ae5beea9b982bdfe51052d2b1ed011776"></a>

Returns true if AcceptedPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptedPrivacyPolicyToDefault`](#structFRHAPI__OAuthTokenExchange_1a3523911676aa77a4facdfba9699a4355)`()` <a id="structFRHAPI__OAuthTokenExchange_1a3523911676aa77a4facdfba9699a4355"></a>

Sets the value of AcceptedPrivacyPolicy_Optional to its default and also sets AcceptedPrivacyPolicy_IsSet to true.

