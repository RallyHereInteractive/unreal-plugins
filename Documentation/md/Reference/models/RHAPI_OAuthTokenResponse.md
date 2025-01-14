---
title: RHAPI_OAuthTokenResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_OAuthTokenResponse`](#structFRHAPI__OAuthTokenResponse) | OAuth token exchange response. Successful response will contain an access_token and refresh_token. If the user has not accepted all required agreements, the response will contain the appropriate needs_* flags and a regenerated_code. The regenerated_code is an authorization_code that can be used after the user has accepted the required agreements.

## struct `FRHAPI_OAuthTokenResponse` <a id="structFRHAPI__OAuthTokenResponse"></a>

```
struct FRHAPI_OAuthTokenResponse
  : public FRHAPI_Model
```

OAuth token exchange response. Successful response will contain an access_token and refresh_token. If the user has not accepted all required agreements, the response will contain the appropriate needs_* flags and a regenerated_code. The regenerated_code is an authorization_code that can be used after the user has accepted the required agreements.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AccessToken_Optional`](#structFRHAPI__OAuthTokenResponse_1adde232680fa32875137ce7f9163f3aa0) | Access token for the user.
`public bool `[`AccessToken_IsSet`](#structFRHAPI__OAuthTokenResponse_1a8d0d73e83ffeda8b8480b48a47cd0063) | true if AccessToken_Optional has been set to a value
`public FString `[`RefreshToken_Optional`](#structFRHAPI__OAuthTokenResponse_1a45e0db2e2e612f481d60596e319fc315) | Refresh token for the user.
`public bool `[`RefreshToken_IsSet`](#structFRHAPI__OAuthTokenResponse_1aa13e74199c18b249c7efcef2bdb30bc0) | true if RefreshToken_Optional has been set to a value
`public bool `[`NeedsEula_Optional`](#structFRHAPI__OAuthTokenResponse_1abd3470ec6c8d75da2458816e9ac2fe10) | If true, the user must accept the EULA before a token can be generated.
`public bool `[`NeedsEula_IsSet`](#structFRHAPI__OAuthTokenResponse_1a2f874a50b9bb2d8a2eec842554be1a74) | true if NeedsEula_Optional has been set to a value
`public bool `[`NeedsTos_Optional`](#structFRHAPI__OAuthTokenResponse_1ad688d5ef40dc5bb29c2bd90aac26704d) | If true, the user must accept the TOS before a token can be generated.
`public bool `[`NeedsTos_IsSet`](#structFRHAPI__OAuthTokenResponse_1afa9d6772ee5ba956d10986d7f37fde88) | true if NeedsTos_Optional has been set to a value
`public bool `[`NeedsPrivacyPolicy_Optional`](#structFRHAPI__OAuthTokenResponse_1ac80818280535df6f40cc9421fb366c13) | If true, the user must accept the Privacy Policy before a token can be generated.
`public bool `[`NeedsPrivacyPolicy_IsSet`](#structFRHAPI__OAuthTokenResponse_1a64c8a1bacc3e8c0a48829eee030102b5) | true if NeedsPrivacyPolicy_Optional has been set to a value
`public FString `[`RegeneratedCode_Optional`](#structFRHAPI__OAuthTokenResponse_1af4575c8414a94d5f81f091f68b328f87) | If present, a new code was generated and can be used after the user accepts the required agreements.
`public bool `[`RegeneratedCode_IsSet`](#structFRHAPI__OAuthTokenResponse_1a9bf5217730fe63a400e1a973cb394d3d) | true if RegeneratedCode_Optional has been set to a value
`public FString `[`ErrorMessage_Optional`](#structFRHAPI__OAuthTokenResponse_1a77cf56edd8b3d7969c5501896adfae7a) | Error message if an error occurred.
`public bool `[`ErrorMessage_IsSet`](#structFRHAPI__OAuthTokenResponse_1af813608595c71277d1cd587063eeacba) | true if ErrorMessage_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__OAuthTokenResponse_1a568e0104dbb8bdeb652426c9a3b4958f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenResponse_1a4a3a575be8bc37b188be64634c62f830)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a92dabecb88e121e9ad8473ec4a87a266)`()` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a4544a199638ca5b4c8097d7531b883b7)`() const` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a8cb4d1c0b82b344019358c5f5c5f87ec)`(const FString & DefaultValue) const` | Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1acc34b8247dd59a47d80307d5ba16a403)`(FString & OutValue) const` | Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1ad150f2029f6dcec428cac455fe39c62c)`()` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a935f03321a0b85710cf6a48442920bf4)`() const` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a0b999fdad7a421a779fe675b544cd6bb)`(const FString & NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.
`public inline void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a2250495df42a88583c7a3282898c679d)`(FString && NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.
`public inline void `[`ClearAccessToken`](#structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01)`()` | Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.
`public inline bool `[`IsAccessTokenSet`](#structFRHAPI__OAuthTokenResponse_1a5713eecc8d96e10ec99bca32dc84f373)`() const` | Checks whether AccessToken_Optional has been set.
`public inline FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a7660fcd42f11960cccca2310f6c0c276)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a740a036412d72296183bc1ba0043cf2f)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a26a4cdbf705834681471b2c209d13ab5)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a81d6ea5e6c84fb138e1b432d4bc2b276)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a6f92240f4f70f0d84f1859f92d5ae56e)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1acff99888ba00a692e42025e057455127)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1aa05bdee824029d4969384d63b60d964b)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a16e532d1687d669de60cee763ce7d0bd)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline bool `[`IsRefreshTokenSet`](#structFRHAPI__OAuthTokenResponse_1a2a281b02337f03ca992b519e3856ee07)`() const` | Checks whether RefreshToken_Optional has been set.
`public inline bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a32ca5184652bb590f9b7ef9ad7d31059)`()` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a6deec3c1600ce0dd35518c52ff100d04)`() const` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1aa621a33d289d8ecdbefeaf0568b56630)`(const bool & DefaultValue) const` | Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a94c86f1b876bf3a628536c9240ba3079)`(bool & OutValue) const` | Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1ad9d88667f3ef549aaf98b8dd58a20c1a)`()` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1a146d468b19eb57b59f1908df82b3fd20)`() const` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a7e7a168b2a90f611d4e732f246d3a5e4)`(const bool & NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.
`public inline void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1aeae6aab16a5f128bc870e6da7f0ffa48)`(bool && NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.
`public inline void `[`ClearNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a)`()` | Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.
`public inline bool `[`IsNeedsEulaSet`](#structFRHAPI__OAuthTokenResponse_1aae90f2fafdd986e406e7492ee87eee24)`() const` | Checks whether NeedsEula_Optional has been set.
`public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__OAuthTokenResponse_1a3fe4cac97ef77737e6b180bef9d9292f)`() const` | Returns true if NeedsEula_Optional is set and matches the default value.
`public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__OAuthTokenResponse_1a15665d390c7aa07289adaecab4a3f54c)`()` | Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.
`public inline bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a2e6cf02411a4be38051e3106fcca9f23)`()` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a0045a6bd6e09ad317abbea00fdffcdee)`() const` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a6c4cc8d577d09e0205290c8e4b5e54cf)`(const bool & DefaultValue) const` | Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1ad43198bdc6ec608f736550210a773b05)`(bool & OutValue) const` | Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1a0b0a1ce8b99cecd764e6445c5d813311)`()` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1a0d0598df71fe512a0700b908ec992610)`() const` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a33ae9b8c805b67a66daf75cc36ad5be4)`(const bool & NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.
`public inline void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a7feeeaa560078036777c7142cb92b853)`(bool && NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.
`public inline void `[`ClearNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd)`()` | Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.
`public inline bool `[`IsNeedsTosSet`](#structFRHAPI__OAuthTokenResponse_1ad145bda6ad4cba61c3530706a13dda82)`() const` | Checks whether NeedsTos_Optional has been set.
`public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__OAuthTokenResponse_1a8a47b39f4e3957936a62f08f4bd8f65a)`() const` | Returns true if NeedsTos_Optional is set and matches the default value.
`public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__OAuthTokenResponse_1a015e8453a81e47c94d4a9cfbceb9cc5f)`()` | Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.
`public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a050abf784394fe849495b5bc5535cd23)`()` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ab85ea56478cc10db9110102e62f0d5a9)`() const` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a2733675ac7ca5bc2cd6025c4e05364ec)`(const bool & DefaultValue) const` | Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1aa4a3218db67d0728bfa123476c64b96e)`(bool & OutValue) const` | Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1a95ea472ba672cb61c31eb8687478e1c4)`()` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1a0da8d6abeed1c6b6a27225a54abd2a60)`() const` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a0f98fca320cab4f73fd6879ab3672d9a)`(const bool & NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a0f0b56970f2568f231390635cbca781e)`(bool && NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640)`()` | Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.
`public inline bool `[`IsNeedsPrivacyPolicySet`](#structFRHAPI__OAuthTokenResponse_1af8f21a661ba2f9d30e6ba6d719209cdf)`() const` | Checks whether NeedsPrivacyPolicy_Optional has been set.
`public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__OAuthTokenResponse_1a4ba25f0514ec678fae4446d9bf76a191)`() const` | Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__OAuthTokenResponse_1a7f1fa7a80ca6fe68497e004dbae793a0)`()` | Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1aa577ffab22524adbc2e5aaede48848b0)`()` | Gets the value of RegeneratedCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1ac34ca65261f372e2d3788c0a997ab92d)`() const` | Gets the value of RegeneratedCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a7d9cd1cd0def9108722ee69ccb57fb25)`(const FString & DefaultValue) const` | Gets the value of RegeneratedCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a673e44863aba6ff967ec429d24ce0464)`(FString & OutValue) const` | Fills OutValue with the value of RegeneratedCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1a5a510d339479c6639790cc940047a187)`()` | Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1adb3d96595aa90a852dbaca687939e26c)`() const` | Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a17afaac910db72e8e995361ca44d6225)`(const FString & NewValue)` | Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true.
`public inline void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1aee2a2870719d79b996220df2014c4b82)`(FString && NewValue)` | Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true using move semantics.
`public inline void `[`ClearRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c)`()` | Clears the value of RegeneratedCode_Optional and sets RegeneratedCode_IsSet to false.
`public inline bool `[`IsRegeneratedCodeSet`](#structFRHAPI__OAuthTokenResponse_1a0a54f1b2ed2f3c6d5b7920b0441e231f)`() const` | Checks whether RegeneratedCode_Optional has been set.
`public inline FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a85c1a151fd1f60bc41331b399204886e)`()` | Gets the value of ErrorMessage_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1aa8afba93c56df6c7462810dfee020b9d)`() const` | Gets the value of ErrorMessage_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a7895b04941e8cf97d1c4313778e14553)`(const FString & DefaultValue) const` | Gets the value of ErrorMessage_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a7157d20217a3594b651b42729d60059c)`(FString & OutValue) const` | Fills OutValue with the value of ErrorMessage_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a86c784557dc4ea4094987fb3df04ff6c)`()` | Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a73727606d42f6b9378434d512acf256d)`() const` | Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a1779086a426f6d906e925dd65fe150a7)`(const FString & NewValue)` | Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true.
`public inline void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1adc81862d1923731f3d4404d9d184c49c)`(FString && NewValue)` | Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true using move semantics.
`public inline void `[`ClearErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91)`()` | Clears the value of ErrorMessage_Optional and sets ErrorMessage_IsSet to false.
`public inline bool `[`IsErrorMessageSet`](#structFRHAPI__OAuthTokenResponse_1a4bd2721d8ddc393729cf2967697df088)`() const` | Checks whether ErrorMessage_Optional has been set.

### Members

#### `public FString `[`AccessToken_Optional`](#structFRHAPI__OAuthTokenResponse_1adde232680fa32875137ce7f9163f3aa0) <a id="structFRHAPI__OAuthTokenResponse_1adde232680fa32875137ce7f9163f3aa0"></a>

Access token for the user.

#### `public bool `[`AccessToken_IsSet`](#structFRHAPI__OAuthTokenResponse_1a8d0d73e83ffeda8b8480b48a47cd0063) <a id="structFRHAPI__OAuthTokenResponse_1a8d0d73e83ffeda8b8480b48a47cd0063"></a>

true if AccessToken_Optional has been set to a value

#### `public FString `[`RefreshToken_Optional`](#structFRHAPI__OAuthTokenResponse_1a45e0db2e2e612f481d60596e319fc315) <a id="structFRHAPI__OAuthTokenResponse_1a45e0db2e2e612f481d60596e319fc315"></a>

Refresh token for the user.

#### `public bool `[`RefreshToken_IsSet`](#structFRHAPI__OAuthTokenResponse_1aa13e74199c18b249c7efcef2bdb30bc0) <a id="structFRHAPI__OAuthTokenResponse_1aa13e74199c18b249c7efcef2bdb30bc0"></a>

true if RefreshToken_Optional has been set to a value

#### `public bool `[`NeedsEula_Optional`](#structFRHAPI__OAuthTokenResponse_1abd3470ec6c8d75da2458816e9ac2fe10) <a id="structFRHAPI__OAuthTokenResponse_1abd3470ec6c8d75da2458816e9ac2fe10"></a>

If true, the user must accept the EULA before a token can be generated.

#### `public bool `[`NeedsEula_IsSet`](#structFRHAPI__OAuthTokenResponse_1a2f874a50b9bb2d8a2eec842554be1a74) <a id="structFRHAPI__OAuthTokenResponse_1a2f874a50b9bb2d8a2eec842554be1a74"></a>

true if NeedsEula_Optional has been set to a value

#### `public bool `[`NeedsTos_Optional`](#structFRHAPI__OAuthTokenResponse_1ad688d5ef40dc5bb29c2bd90aac26704d) <a id="structFRHAPI__OAuthTokenResponse_1ad688d5ef40dc5bb29c2bd90aac26704d"></a>

If true, the user must accept the TOS before a token can be generated.

#### `public bool `[`NeedsTos_IsSet`](#structFRHAPI__OAuthTokenResponse_1afa9d6772ee5ba956d10986d7f37fde88) <a id="structFRHAPI__OAuthTokenResponse_1afa9d6772ee5ba956d10986d7f37fde88"></a>

true if NeedsTos_Optional has been set to a value

#### `public bool `[`NeedsPrivacyPolicy_Optional`](#structFRHAPI__OAuthTokenResponse_1ac80818280535df6f40cc9421fb366c13) <a id="structFRHAPI__OAuthTokenResponse_1ac80818280535df6f40cc9421fb366c13"></a>

If true, the user must accept the Privacy Policy before a token can be generated.

#### `public bool `[`NeedsPrivacyPolicy_IsSet`](#structFRHAPI__OAuthTokenResponse_1a64c8a1bacc3e8c0a48829eee030102b5) <a id="structFRHAPI__OAuthTokenResponse_1a64c8a1bacc3e8c0a48829eee030102b5"></a>

true if NeedsPrivacyPolicy_Optional has been set to a value

#### `public FString `[`RegeneratedCode_Optional`](#structFRHAPI__OAuthTokenResponse_1af4575c8414a94d5f81f091f68b328f87) <a id="structFRHAPI__OAuthTokenResponse_1af4575c8414a94d5f81f091f68b328f87"></a>

If present, a new code was generated and can be used after the user accepts the required agreements.

#### `public bool `[`RegeneratedCode_IsSet`](#structFRHAPI__OAuthTokenResponse_1a9bf5217730fe63a400e1a973cb394d3d) <a id="structFRHAPI__OAuthTokenResponse_1a9bf5217730fe63a400e1a973cb394d3d"></a>

true if RegeneratedCode_Optional has been set to a value

#### `public FString `[`ErrorMessage_Optional`](#structFRHAPI__OAuthTokenResponse_1a77cf56edd8b3d7969c5501896adfae7a) <a id="structFRHAPI__OAuthTokenResponse_1a77cf56edd8b3d7969c5501896adfae7a"></a>

Error message if an error occurred.

#### `public bool `[`ErrorMessage_IsSet`](#structFRHAPI__OAuthTokenResponse_1af813608595c71277d1cd587063eeacba) <a id="structFRHAPI__OAuthTokenResponse_1af813608595c71277d1cd587063eeacba"></a>

true if ErrorMessage_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__OAuthTokenResponse_1a568e0104dbb8bdeb652426c9a3b4958f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__OAuthTokenResponse_1a568e0104dbb8bdeb652426c9a3b4958f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenResponse_1a4a3a575be8bc37b188be64634c62f830)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__OAuthTokenResponse_1a4a3a575be8bc37b188be64634c62f830"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a92dabecb88e121e9ad8473ec4a87a266)`()` <a id="structFRHAPI__OAuthTokenResponse_1a92dabecb88e121e9ad8473ec4a87a266"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a4544a199638ca5b4c8097d7531b883b7)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a4544a199638ca5b4c8097d7531b883b7"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a8cb4d1c0b82b344019358c5f5c5f87ec)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a8cb4d1c0b82b344019358c5f5c5f87ec"></a>

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1acc34b8247dd59a47d80307d5ba16a403)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1acc34b8247dd59a47d80307d5ba16a403"></a>

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1ad150f2029f6dcec428cac455fe39c62c)`()` <a id="structFRHAPI__OAuthTokenResponse_1ad150f2029f6dcec428cac455fe39c62c"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a935f03321a0b85710cf6a48442920bf4)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a935f03321a0b85710cf6a48442920bf4"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a0b999fdad7a421a779fe675b544cd6bb)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a0b999fdad7a421a779fe675b544cd6bb"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a2250495df42a88583c7a3282898c679d)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a2250495df42a88583c7a3282898c679d"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearAccessToken`](#structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01)`()` <a id="structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01"></a>

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.

#### `public inline bool `[`IsAccessTokenSet`](#structFRHAPI__OAuthTokenResponse_1a5713eecc8d96e10ec99bca32dc84f373)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a5713eecc8d96e10ec99bca32dc84f373"></a>

Checks whether AccessToken_Optional has been set.

#### `public inline FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a7660fcd42f11960cccca2310f6c0c276)`()` <a id="structFRHAPI__OAuthTokenResponse_1a7660fcd42f11960cccca2310f6c0c276"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a740a036412d72296183bc1ba0043cf2f)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a740a036412d72296183bc1ba0043cf2f"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a26a4cdbf705834681471b2c209d13ab5)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a26a4cdbf705834681471b2c209d13ab5"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a81d6ea5e6c84fb138e1b432d4bc2b276)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a81d6ea5e6c84fb138e1b432d4bc2b276"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a6f92240f4f70f0d84f1859f92d5ae56e)`()` <a id="structFRHAPI__OAuthTokenResponse_1a6f92240f4f70f0d84f1859f92d5ae56e"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1acff99888ba00a692e42025e057455127)`() const` <a id="structFRHAPI__OAuthTokenResponse_1acff99888ba00a692e42025e057455127"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1aa05bdee824029d4969384d63b60d964b)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1aa05bdee824029d4969384d63b60d964b"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a16e532d1687d669de60cee763ce7d0bd)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a16e532d1687d669de60cee763ce7d0bd"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a)`()` <a id="structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline bool `[`IsRefreshTokenSet`](#structFRHAPI__OAuthTokenResponse_1a2a281b02337f03ca992b519e3856ee07)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a2a281b02337f03ca992b519e3856ee07"></a>

Checks whether RefreshToken_Optional has been set.

#### `public inline bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a32ca5184652bb590f9b7ef9ad7d31059)`()` <a id="structFRHAPI__OAuthTokenResponse_1a32ca5184652bb590f9b7ef9ad7d31059"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a6deec3c1600ce0dd35518c52ff100d04)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a6deec3c1600ce0dd35518c52ff100d04"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1aa621a33d289d8ecdbefeaf0568b56630)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1aa621a33d289d8ecdbefeaf0568b56630"></a>

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a94c86f1b876bf3a628536c9240ba3079)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a94c86f1b876bf3a628536c9240ba3079"></a>

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1ad9d88667f3ef549aaf98b8dd58a20c1a)`()` <a id="structFRHAPI__OAuthTokenResponse_1ad9d88667f3ef549aaf98b8dd58a20c1a"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1a146d468b19eb57b59f1908df82b3fd20)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a146d468b19eb57b59f1908df82b3fd20"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a7e7a168b2a90f611d4e732f246d3a5e4)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a7e7a168b2a90f611d4e732f246d3a5e4"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1aeae6aab16a5f128bc870e6da7f0ffa48)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1aeae6aab16a5f128bc870e6da7f0ffa48"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a)`()` <a id="structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a"></a>

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.

#### `public inline bool `[`IsNeedsEulaSet`](#structFRHAPI__OAuthTokenResponse_1aae90f2fafdd986e406e7492ee87eee24)`() const` <a id="structFRHAPI__OAuthTokenResponse_1aae90f2fafdd986e406e7492ee87eee24"></a>

Checks whether NeedsEula_Optional has been set.

#### `public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__OAuthTokenResponse_1a3fe4cac97ef77737e6b180bef9d9292f)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a3fe4cac97ef77737e6b180bef9d9292f"></a>

Returns true if NeedsEula_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__OAuthTokenResponse_1a15665d390c7aa07289adaecab4a3f54c)`()` <a id="structFRHAPI__OAuthTokenResponse_1a15665d390c7aa07289adaecab4a3f54c"></a>

Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.

#### `public inline bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a2e6cf02411a4be38051e3106fcca9f23)`()` <a id="structFRHAPI__OAuthTokenResponse_1a2e6cf02411a4be38051e3106fcca9f23"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a0045a6bd6e09ad317abbea00fdffcdee)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a0045a6bd6e09ad317abbea00fdffcdee"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a6c4cc8d577d09e0205290c8e4b5e54cf)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a6c4cc8d577d09e0205290c8e4b5e54cf"></a>

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1ad43198bdc6ec608f736550210a773b05)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1ad43198bdc6ec608f736550210a773b05"></a>

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1a0b0a1ce8b99cecd764e6445c5d813311)`()` <a id="structFRHAPI__OAuthTokenResponse_1a0b0a1ce8b99cecd764e6445c5d813311"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1a0d0598df71fe512a0700b908ec992610)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a0d0598df71fe512a0700b908ec992610"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a33ae9b8c805b67a66daf75cc36ad5be4)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a33ae9b8c805b67a66daf75cc36ad5be4"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a7feeeaa560078036777c7142cb92b853)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a7feeeaa560078036777c7142cb92b853"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd)`()` <a id="structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd"></a>

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.

#### `public inline bool `[`IsNeedsTosSet`](#structFRHAPI__OAuthTokenResponse_1ad145bda6ad4cba61c3530706a13dda82)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ad145bda6ad4cba61c3530706a13dda82"></a>

Checks whether NeedsTos_Optional has been set.

#### `public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__OAuthTokenResponse_1a8a47b39f4e3957936a62f08f4bd8f65a)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a8a47b39f4e3957936a62f08f4bd8f65a"></a>

Returns true if NeedsTos_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__OAuthTokenResponse_1a015e8453a81e47c94d4a9cfbceb9cc5f)`()` <a id="structFRHAPI__OAuthTokenResponse_1a015e8453a81e47c94d4a9cfbceb9cc5f"></a>

Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.

#### `public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a050abf784394fe849495b5bc5535cd23)`()` <a id="structFRHAPI__OAuthTokenResponse_1a050abf784394fe849495b5bc5535cd23"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ab85ea56478cc10db9110102e62f0d5a9)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ab85ea56478cc10db9110102e62f0d5a9"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a2733675ac7ca5bc2cd6025c4e05364ec)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a2733675ac7ca5bc2cd6025c4e05364ec"></a>

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1aa4a3218db67d0728bfa123476c64b96e)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1aa4a3218db67d0728bfa123476c64b96e"></a>

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1a95ea472ba672cb61c31eb8687478e1c4)`()` <a id="structFRHAPI__OAuthTokenResponse_1a95ea472ba672cb61c31eb8687478e1c4"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1a0da8d6abeed1c6b6a27225a54abd2a60)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a0da8d6abeed1c6b6a27225a54abd2a60"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a0f98fca320cab4f73fd6879ab3672d9a)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a0f98fca320cab4f73fd6879ab3672d9a"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a0f0b56970f2568f231390635cbca781e)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a0f0b56970f2568f231390635cbca781e"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640)`()` <a id="structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640"></a>

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsNeedsPrivacyPolicySet`](#structFRHAPI__OAuthTokenResponse_1af8f21a661ba2f9d30e6ba6d719209cdf)`() const` <a id="structFRHAPI__OAuthTokenResponse_1af8f21a661ba2f9d30e6ba6d719209cdf"></a>

Checks whether NeedsPrivacyPolicy_Optional has been set.

#### `public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__OAuthTokenResponse_1a4ba25f0514ec678fae4446d9bf76a191)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a4ba25f0514ec678fae4446d9bf76a191"></a>

Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__OAuthTokenResponse_1a7f1fa7a80ca6fe68497e004dbae793a0)`()` <a id="structFRHAPI__OAuthTokenResponse_1a7f1fa7a80ca6fe68497e004dbae793a0"></a>

Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1aa577ffab22524adbc2e5aaede48848b0)`()` <a id="structFRHAPI__OAuthTokenResponse_1aa577ffab22524adbc2e5aaede48848b0"></a>

Gets the value of RegeneratedCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1ac34ca65261f372e2d3788c0a997ab92d)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ac34ca65261f372e2d3788c0a997ab92d"></a>

Gets the value of RegeneratedCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a7d9cd1cd0def9108722ee69ccb57fb25)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a7d9cd1cd0def9108722ee69ccb57fb25"></a>

Gets the value of RegeneratedCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a673e44863aba6ff967ec429d24ce0464)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a673e44863aba6ff967ec429d24ce0464"></a>

Fills OutValue with the value of RegeneratedCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1a5a510d339479c6639790cc940047a187)`()` <a id="structFRHAPI__OAuthTokenResponse_1a5a510d339479c6639790cc940047a187"></a>

Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1adb3d96595aa90a852dbaca687939e26c)`() const` <a id="structFRHAPI__OAuthTokenResponse_1adb3d96595aa90a852dbaca687939e26c"></a>

Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a17afaac910db72e8e995361ca44d6225)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a17afaac910db72e8e995361ca44d6225"></a>

Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true.

#### `public inline void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1aee2a2870719d79b996220df2014c4b82)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1aee2a2870719d79b996220df2014c4b82"></a>

Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true using move semantics.

#### `public inline void `[`ClearRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c)`()` <a id="structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c"></a>

Clears the value of RegeneratedCode_Optional and sets RegeneratedCode_IsSet to false.

#### `public inline bool `[`IsRegeneratedCodeSet`](#structFRHAPI__OAuthTokenResponse_1a0a54f1b2ed2f3c6d5b7920b0441e231f)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a0a54f1b2ed2f3c6d5b7920b0441e231f"></a>

Checks whether RegeneratedCode_Optional has been set.

#### `public inline FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a85c1a151fd1f60bc41331b399204886e)`()` <a id="structFRHAPI__OAuthTokenResponse_1a85c1a151fd1f60bc41331b399204886e"></a>

Gets the value of ErrorMessage_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1aa8afba93c56df6c7462810dfee020b9d)`() const` <a id="structFRHAPI__OAuthTokenResponse_1aa8afba93c56df6c7462810dfee020b9d"></a>

Gets the value of ErrorMessage_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a7895b04941e8cf97d1c4313778e14553)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a7895b04941e8cf97d1c4313778e14553"></a>

Gets the value of ErrorMessage_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a7157d20217a3594b651b42729d60059c)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a7157d20217a3594b651b42729d60059c"></a>

Fills OutValue with the value of ErrorMessage_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a86c784557dc4ea4094987fb3df04ff6c)`()` <a id="structFRHAPI__OAuthTokenResponse_1a86c784557dc4ea4094987fb3df04ff6c"></a>

Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a73727606d42f6b9378434d512acf256d)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a73727606d42f6b9378434d512acf256d"></a>

Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a1779086a426f6d906e925dd65fe150a7)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a1779086a426f6d906e925dd65fe150a7"></a>

Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true.

#### `public inline void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1adc81862d1923731f3d4404d9d184c49c)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1adc81862d1923731f3d4404d9d184c49c"></a>

Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91)`()` <a id="structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91"></a>

Clears the value of ErrorMessage_Optional and sets ErrorMessage_IsSet to false.

#### `public inline bool `[`IsErrorMessageSet`](#structFRHAPI__OAuthTokenResponse_1a4bd2721d8ddc393729cf2967697df088)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a4bd2721d8ddc393729cf2967697df088"></a>

Checks whether ErrorMessage_Optional has been set.

