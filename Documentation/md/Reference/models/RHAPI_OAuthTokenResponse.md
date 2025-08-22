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
`public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__OAuthTokenResponse_1abad42f438bc78e70ee1e908011eaec39) | List of restrictions that prevented authentication.
`public bool `[`Restrictions_IsSet`](#structFRHAPI__OAuthTokenResponse_1a98897ae8a23a9041120cc82841ca117d) | true if Restrictions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__OAuthTokenResponse_1a568e0104dbb8bdeb652426c9a3b4958f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__OAuthTokenResponse_1a4a3a575be8bc37b188be64634c62f830)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a94b59748e09dd6c1b1d4d415f84a56b6)`()` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a0fa93fb3b13fe6494b3403125336853b)`() const` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a8ce36776640ea758593f970e3ce35331)`(const FString & DefaultValue) const` | Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a7cc9b25d3e4082f2093e38f830e2b277)`(FString & OutValue) const` | Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a70e03ef65dcf4148c07eb372bae9c6b9)`()` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1ad00933bc403c2718912eeef68b81433b)`() const` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1ae2dfeea2ff279e98e8f0f908767a905f)`(const FString & NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.
`public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1affebf97931934b11a01a8d652dd1931b)`(FString && NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.
`public inline void `[`ClearAccessToken`](#structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01)`()` | Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a22b17873f0111559e1ad7bad24b8c055)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a93e0649e9452509bd67d1dd2f127527a)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a794bf8aef5840159e96b17460b19c2cd)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1ae1f0f10932fc6f5ec55339a9b8515371)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a0de6b7ae11da8ca2fa6008e27c639174)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a2800d7b524f94fdc0cea12d232e70d54)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a0c1ebf87399d55370d77ade59712ff1a)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1ab3ebde69af0cdc4e092b197f55969dfb)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline FORCEINLINE bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a40eb1974575449515f6aba9934f388ca)`()` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1ad9e845c6b7e8c1822ea6f5fd997fe920)`() const` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1ae8ff2da1b8c9df8481f14b91bb2a8107)`(const bool & DefaultValue) const` | Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1af4d18212ca1b95636f964a4b56e4f1c1)`(bool & OutValue) const` | Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1a485244b9eddcba04c76470c0d250d2a0)`()` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1a6b6d118293944aa89f4d5812341f3fc6)`() const` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a584c923f9f72da05b5262fa18b13dfde)`(const bool & NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.
`public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1ad7cfa7068d715cb5c44b17232fa57b5c)`(bool && NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.
`public inline void `[`ClearNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a)`()` | Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NeedsEula`](#structFRHAPI__OAuthTokenResponse_1ade098dc9613ffdd22879bf37adf9a81e)`()` | Returns the default value of NeedsEula.
`public inline FORCEINLINE bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a6a8c8fe81e3485be4e97b6baebc312c5)`()` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a22789bb241414ed482b0a47c779f8b82)`() const` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a2d250fff7ae0549c51fb677ff0832d48)`(const bool & DefaultValue) const` | Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a9d514977d14be13688809298923c2237)`(bool & OutValue) const` | Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1ab1309adc45a644977db9c98b4ecb51a8)`()` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1a4043ddb20354893bf71e60cf7b87578d)`() const` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a08b4f90f45dcdaa32b2bd4cdf73023a5)`(const bool & NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.
`public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a653f12007deaa3336dbfa166be78e010)`(bool && NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.
`public inline void `[`ClearNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd)`()` | Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NeedsTos`](#structFRHAPI__OAuthTokenResponse_1abec6536a692556dda6ebb6c40ae78ad3)`()` | Returns the default value of NeedsTos.
`public inline FORCEINLINE bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a18944357af69e3cb9497e06226154a6e)`()` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ab679a69e0fc0c35342d9095ef2c198d8)`() const` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1aca644d55a1c6d2150951b21ad35099bb)`(const bool & DefaultValue) const` | Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a7edf339baa10b148801586f3e51b872a)`(bool & OutValue) const` | Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1af0a4d474b1dd6f125099610de1c4a439)`()` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1a09093b9a4aff4a3f67992aafb54cba6d)`() const` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ac16c68c89910ccb23b6416b2076bbffb)`(const bool & NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ab8dba215546664e5a802bccbdefd7069)`(bool && NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640)`()` | Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1aae59862be3b1185f89a8908a181aa5c3)`()` | Returns the default value of NeedsPrivacyPolicy.
`public inline FORCEINLINE FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a209c15611f286a185448cfa3ab79289d)`()` | Gets the value of RegeneratedCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a5b2f85da488b72ec2e75e08ea8fe9071)`() const` | Gets the value of RegeneratedCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a51c05db6f92a8e9bce2f4feb0ae5ba0e)`(const FString & DefaultValue) const` | Gets the value of RegeneratedCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a02522fe269d5e69605b48225bc5b5454)`(FString & OutValue) const` | Fills OutValue with the value of RegeneratedCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1ada45cb8051b6843a79e1a4d2d25e2258)`()` | Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1a70ea9c8b8fd82a69c4e319bce2b8386b)`() const` | Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1acd894217a1455e789b66ced91939a83b)`(const FString & NewValue)` | Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true.
`public inline FORCEINLINE void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a802e291b6de1114a43db1439a9cc1fad)`(FString && NewValue)` | Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true using move semantics.
`public inline void `[`ClearRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c)`()` | Clears the value of RegeneratedCode_Optional and sets RegeneratedCode_IsSet to false.
`public inline FORCEINLINE FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a61c5b75495052cdbcc61c173ed1295ae)`()` | Gets the value of ErrorMessage_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1ac5b34267dc1528bc9f6a44a88ec108c0)`() const` | Gets the value of ErrorMessage_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1ad3b93244b33213553b3821bbf9d8997c)`(const FString & DefaultValue) const` | Gets the value of ErrorMessage_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1ae957001d1aad3e4db72fe409f559cb37)`(FString & OutValue) const` | Fills OutValue with the value of ErrorMessage_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a19cb43ac0733a0f1ba62f7d595097e62)`()` | Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a7d94ca0bab8fdaca18f80d8f5bd88832)`() const` | Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1acdb9fbee42217caf618d52fb4a88dcb2)`(const FString & NewValue)` | Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a9ccfee7ebaf7e5322c92a36cf97b25a4)`(FString && NewValue)` | Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true using move semantics.
`public inline void `[`ClearErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91)`()` | Clears the value of ErrorMessage_Optional and sets ErrorMessage_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a25d90dd69df3485c61b2225bedac2b67)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1ab2a0215d9e03fdd173a47d984305b986)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a3c7cff879883ae247e97f6bdcdb04764)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a250c35faf903623a9a1a7195985b6e60)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__OAuthTokenResponse_1aca64b62452b52f970b8dcb7d022bae7a)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__OAuthTokenResponse_1a243f7befd6f96a56df572d6460b2b519)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a66f06918f135b0750ffa6131840754b0)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__OAuthTokenResponse_1ac1400d7b3a72e8298682b42cf71cb99f)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__OAuthTokenResponse_1a2cc2f58318024fe1815877cb012929be)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

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

#### `public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__OAuthTokenResponse_1abad42f438bc78e70ee1e908011eaec39) <a id="structFRHAPI__OAuthTokenResponse_1abad42f438bc78e70ee1e908011eaec39"></a>

List of restrictions that prevented authentication.

#### `public bool `[`Restrictions_IsSet`](#structFRHAPI__OAuthTokenResponse_1a98897ae8a23a9041120cc82841ca117d) <a id="structFRHAPI__OAuthTokenResponse_1a98897ae8a23a9041120cc82841ca117d"></a>

true if Restrictions_Optional has been set to a value

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

#### `public inline FORCEINLINE FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a94b59748e09dd6c1b1d4d415f84a56b6)`()` <a id="structFRHAPI__OAuthTokenResponse_1a94b59748e09dd6c1b1d4d415f84a56b6"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a0fa93fb3b13fe6494b3403125336853b)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a0fa93fb3b13fe6494b3403125336853b"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a8ce36776640ea758593f970e3ce35331)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a8ce36776640ea758593f970e3ce35331"></a>

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAccessToken`](#structFRHAPI__OAuthTokenResponse_1a7cc9b25d3e4082f2093e38f830e2b277)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a7cc9b25d3e4082f2093e38f830e2b277"></a>

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a70e03ef65dcf4148c07eb372bae9c6b9)`()` <a id="structFRHAPI__OAuthTokenResponse_1a70e03ef65dcf4148c07eb372bae9c6b9"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1ad00933bc403c2718912eeef68b81433b)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ad00933bc403c2718912eeef68b81433b"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1ae2dfeea2ff279e98e8f0f908767a905f)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1ae2dfeea2ff279e98e8f0f908767a905f"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__OAuthTokenResponse_1affebf97931934b11a01a8d652dd1931b)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1affebf97931934b11a01a8d652dd1931b"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearAccessToken`](#structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01)`()` <a id="structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01"></a>

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a22b17873f0111559e1ad7bad24b8c055)`()` <a id="structFRHAPI__OAuthTokenResponse_1a22b17873f0111559e1ad7bad24b8c055"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a93e0649e9452509bd67d1dd2f127527a)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a93e0649e9452509bd67d1dd2f127527a"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a794bf8aef5840159e96b17460b19c2cd)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a794bf8aef5840159e96b17460b19c2cd"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1ae1f0f10932fc6f5ec55339a9b8515371)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1ae1f0f10932fc6f5ec55339a9b8515371"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a0de6b7ae11da8ca2fa6008e27c639174)`()` <a id="structFRHAPI__OAuthTokenResponse_1a0de6b7ae11da8ca2fa6008e27c639174"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__OAuthTokenResponse_1a2800d7b524f94fdc0cea12d232e70d54)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a2800d7b524f94fdc0cea12d232e70d54"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a0c1ebf87399d55370d77ade59712ff1a)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a0c1ebf87399d55370d77ade59712ff1a"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__OAuthTokenResponse_1ab3ebde69af0cdc4e092b197f55969dfb)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1ab3ebde69af0cdc4e092b197f55969dfb"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a)`()` <a id="structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a40eb1974575449515f6aba9934f388ca)`()` <a id="structFRHAPI__OAuthTokenResponse_1a40eb1974575449515f6aba9934f388ca"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1ad9e845c6b7e8c1822ea6f5fd997fe920)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ad9e845c6b7e8c1822ea6f5fd997fe920"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1ae8ff2da1b8c9df8481f14b91bb2a8107)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1ae8ff2da1b8c9df8481f14b91bb2a8107"></a>

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1af4d18212ca1b95636f964a4b56e4f1c1)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1af4d18212ca1b95636f964a4b56e4f1c1"></a>

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1a485244b9eddcba04c76470c0d250d2a0)`()` <a id="structFRHAPI__OAuthTokenResponse_1a485244b9eddcba04c76470c0d250d2a0"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__OAuthTokenResponse_1a6b6d118293944aa89f4d5812341f3fc6)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a6b6d118293944aa89f4d5812341f3fc6"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a584c923f9f72da05b5262fa18b13dfde)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a584c923f9f72da05b5262fa18b13dfde"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__OAuthTokenResponse_1ad7cfa7068d715cb5c44b17232fa57b5c)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1ad7cfa7068d715cb5c44b17232fa57b5c"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsEula`](#structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a)`()` <a id="structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a"></a>

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NeedsEula`](#structFRHAPI__OAuthTokenResponse_1ade098dc9613ffdd22879bf37adf9a81e)`()` <a id="structFRHAPI__OAuthTokenResponse_1ade098dc9613ffdd22879bf37adf9a81e"></a>

Returns the default value of NeedsEula.

#### `public inline FORCEINLINE bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a6a8c8fe81e3485be4e97b6baebc312c5)`()` <a id="structFRHAPI__OAuthTokenResponse_1a6a8c8fe81e3485be4e97b6baebc312c5"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a22789bb241414ed482b0a47c779f8b82)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a22789bb241414ed482b0a47c779f8b82"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a2d250fff7ae0549c51fb677ff0832d48)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a2d250fff7ae0549c51fb677ff0832d48"></a>

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a9d514977d14be13688809298923c2237)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a9d514977d14be13688809298923c2237"></a>

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1ab1309adc45a644977db9c98b4ecb51a8)`()` <a id="structFRHAPI__OAuthTokenResponse_1ab1309adc45a644977db9c98b4ecb51a8"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__OAuthTokenResponse_1a4043ddb20354893bf71e60cf7b87578d)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a4043ddb20354893bf71e60cf7b87578d"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a08b4f90f45dcdaa32b2bd4cdf73023a5)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a08b4f90f45dcdaa32b2bd4cdf73023a5"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a653f12007deaa3336dbfa166be78e010)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a653f12007deaa3336dbfa166be78e010"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsTos`](#structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd)`()` <a id="structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd"></a>

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NeedsTos`](#structFRHAPI__OAuthTokenResponse_1abec6536a692556dda6ebb6c40ae78ad3)`()` <a id="structFRHAPI__OAuthTokenResponse_1abec6536a692556dda6ebb6c40ae78ad3"></a>

Returns the default value of NeedsTos.

#### `public inline FORCEINLINE bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a18944357af69e3cb9497e06226154a6e)`()` <a id="structFRHAPI__OAuthTokenResponse_1a18944357af69e3cb9497e06226154a6e"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ab679a69e0fc0c35342d9095ef2c198d8)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ab679a69e0fc0c35342d9095ef2c198d8"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1aca644d55a1c6d2150951b21ad35099bb)`(const bool & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1aca644d55a1c6d2150951b21ad35099bb"></a>

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1a7edf339baa10b148801586f3e51b872a)`(bool & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a7edf339baa10b148801586f3e51b872a"></a>

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1af0a4d474b1dd6f125099610de1c4a439)`()` <a id="structFRHAPI__OAuthTokenResponse_1af0a4d474b1dd6f125099610de1c4a439"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__OAuthTokenResponse_1a09093b9a4aff4a3f67992aafb54cba6d)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a09093b9a4aff4a3f67992aafb54cba6d"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ac16c68c89910ccb23b6416b2076bbffb)`(const bool & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1ac16c68c89910ccb23b6416b2076bbffb"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ab8dba215546664e5a802bccbdefd7069)`(bool && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1ab8dba215546664e5a802bccbdefd7069"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640)`()` <a id="structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640"></a>

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NeedsPrivacyPolicy`](#structFRHAPI__OAuthTokenResponse_1aae59862be3b1185f89a8908a181aa5c3)`()` <a id="structFRHAPI__OAuthTokenResponse_1aae59862be3b1185f89a8908a181aa5c3"></a>

Returns the default value of NeedsPrivacyPolicy.

#### `public inline FORCEINLINE FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a209c15611f286a185448cfa3ab79289d)`()` <a id="structFRHAPI__OAuthTokenResponse_1a209c15611f286a185448cfa3ab79289d"></a>

Gets the value of RegeneratedCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a5b2f85da488b72ec2e75e08ea8fe9071)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a5b2f85da488b72ec2e75e08ea8fe9071"></a>

Gets the value of RegeneratedCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a51c05db6f92a8e9bce2f4feb0ae5ba0e)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a51c05db6f92a8e9bce2f4feb0ae5ba0e"></a>

Gets the value of RegeneratedCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a02522fe269d5e69605b48225bc5b5454)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a02522fe269d5e69605b48225bc5b5454"></a>

Fills OutValue with the value of RegeneratedCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1ada45cb8051b6843a79e1a4d2d25e2258)`()` <a id="structFRHAPI__OAuthTokenResponse_1ada45cb8051b6843a79e1a4d2d25e2258"></a>

Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegeneratedCodeOrNull`](#structFRHAPI__OAuthTokenResponse_1a70ea9c8b8fd82a69c4e319bce2b8386b)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a70ea9c8b8fd82a69c4e319bce2b8386b"></a>

Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1acd894217a1455e789b66ced91939a83b)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1acd894217a1455e789b66ced91939a83b"></a>

Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a802e291b6de1114a43db1439a9cc1fad)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a802e291b6de1114a43db1439a9cc1fad"></a>

Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true using move semantics.

#### `public inline void `[`ClearRegeneratedCode`](#structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c)`()` <a id="structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c"></a>

Clears the value of RegeneratedCode_Optional and sets RegeneratedCode_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a61c5b75495052cdbcc61c173ed1295ae)`()` <a id="structFRHAPI__OAuthTokenResponse_1a61c5b75495052cdbcc61c173ed1295ae"></a>

Gets the value of ErrorMessage_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1ac5b34267dc1528bc9f6a44a88ec108c0)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ac5b34267dc1528bc9f6a44a88ec108c0"></a>

Gets the value of ErrorMessage_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1ad3b93244b33213553b3821bbf9d8997c)`(const FString & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1ad3b93244b33213553b3821bbf9d8997c"></a>

Gets the value of ErrorMessage_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1ae957001d1aad3e4db72fe409f559cb37)`(FString & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1ae957001d1aad3e4db72fe409f559cb37"></a>

Fills OutValue with the value of ErrorMessage_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a19cb43ac0733a0f1ba62f7d595097e62)`()` <a id="structFRHAPI__OAuthTokenResponse_1a19cb43ac0733a0f1ba62f7d595097e62"></a>

Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorMessageOrNull`](#structFRHAPI__OAuthTokenResponse_1a7d94ca0bab8fdaca18f80d8f5bd88832)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a7d94ca0bab8fdaca18f80d8f5bd88832"></a>

Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1acdb9fbee42217caf618d52fb4a88dcb2)`(const FString & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1acdb9fbee42217caf618d52fb4a88dcb2"></a>

Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a9ccfee7ebaf7e5322c92a36cf97b25a4)`(FString && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a9ccfee7ebaf7e5322c92a36cf97b25a4"></a>

Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorMessage`](#structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91)`()` <a id="structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91"></a>

Clears the value of ErrorMessage_Optional and sets ErrorMessage_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a25d90dd69df3485c61b2225bedac2b67)`()` <a id="structFRHAPI__OAuthTokenResponse_1a25d90dd69df3485c61b2225bedac2b67"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1ab2a0215d9e03fdd173a47d984305b986)`() const` <a id="structFRHAPI__OAuthTokenResponse_1ab2a0215d9e03fdd173a47d984305b986"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a3c7cff879883ae247e97f6bdcdb04764)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a3c7cff879883ae247e97f6bdcdb04764"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a250c35faf903623a9a1a7195985b6e60)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__OAuthTokenResponse_1a250c35faf903623a9a1a7195985b6e60"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__OAuthTokenResponse_1aca64b62452b52f970b8dcb7d022bae7a)`()` <a id="structFRHAPI__OAuthTokenResponse_1aca64b62452b52f970b8dcb7d022bae7a"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__OAuthTokenResponse_1a243f7befd6f96a56df572d6460b2b519)`() const` <a id="structFRHAPI__OAuthTokenResponse_1a243f7befd6f96a56df572d6460b2b519"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__OAuthTokenResponse_1a66f06918f135b0750ffa6131840754b0)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1a66f06918f135b0750ffa6131840754b0"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__OAuthTokenResponse_1ac1400d7b3a72e8298682b42cf71cb99f)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__OAuthTokenResponse_1ac1400d7b3a72e8298682b42cf71cb99f"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__OAuthTokenResponse_1a2cc2f58318024fe1815877cb012929be)`()` <a id="structFRHAPI__OAuthTokenResponse_1a2cc2f58318024fe1815877cb012929be"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

