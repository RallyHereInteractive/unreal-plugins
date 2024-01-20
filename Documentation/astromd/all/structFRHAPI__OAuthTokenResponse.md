---
title: FRHAPI_OAuthTokenResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

OAuth token exchange response. Successful response will contain an access_token and refresh_token. If the user has not accepted all required agreements, the response will contain the appropriate needs_* flags and a regenerated_code. The regenerated_code is an authorization_code that can be used after the user has accepted the required agreements.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[AccessToken_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1adde232680fa32875137ce7f9163f3aa0)|Access token for the user.|
|bool|[AccessToken_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a8d0d73e83ffeda8b8480b48a47cd0063)|true if AccessToken_Optional has been set to a value|
|FString|[RefreshToken_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a45e0db2e2e612f481d60596e319fc315)|Refresh token for the user.|
|bool|[RefreshToken_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aa13e74199c18b249c7efcef2bdb30bc0)|true if RefreshToken_Optional has been set to a value|
|bool|[NeedsEula_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1abd3470ec6c8d75da2458816e9ac2fe10)|If true, the user must accept the EULA before a token can be generated.|
|bool|[NeedsEula_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a2f874a50b9bb2d8a2eec842554be1a74)|true if NeedsEula_Optional has been set to a value|
|bool|[NeedsTos_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad688d5ef40dc5bb29c2bd90aac26704d)|If true, the user must accept the TOS before a token can be generated.|
|bool|[NeedsTos_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1afa9d6772ee5ba956d10986d7f37fde88)|true if NeedsTos_Optional has been set to a value|
|bool|[NeedsPrivacyPolicy_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ac80818280535df6f40cc9421fb366c13)|If true, the user must accept the Privacy Policy before a token can be generated.|
|bool|[NeedsPrivacyPolicy_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a64c8a1bacc3e8c0a48829eee030102b5)|true if NeedsPrivacyPolicy_Optional has been set to a value|
|FString|[RegeneratedCode_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1af4575c8414a94d5f81f091f68b328f87)|If present, a new code was generated and can be used after the user accepts the required agreements.|
|bool|[RegeneratedCode_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a9bf5217730fe63a400e1a973cb394d3d)|true if RegeneratedCode_Optional has been set to a value|
|FString|[ErrorMessage_Optional](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a77cf56edd8b3d7969c5501896adfae7a)|Error message if an error occurred.|
|bool|[ErrorMessage_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1af813608595c71277d1cd587063eeacba)|true if ErrorMessage_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aaddc0d3b8e538af941bb8f328fd7d817)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a0d68b6e2cfe02059d271a64c47415595)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aa31a77b15119134ad36ff4bae07f5c74)()|Gets the value of AccessToken_Optional, regardless of it having been set.|
|const FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a4f0b14ce752986de279e424b51766ded)()|Gets the value of AccessToken_Optional, regardless of it having been set.|
|const FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ac34b59048b75e3e1ffcdc99604e6e66a)(const FString & DefaultValue)|Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAccessToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1acc34b8247dd59a47d80307d5ba16a403)(FString & OutValue)|Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetAccessTokenOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a2f335a9932f13e1f6c753bf01fd67abb)()|Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetAccessTokenOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ac5c7e027985fba3895cccd05cfa8a98c)()|Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAccessToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a7eeacc30dfb8d8b85ffda35e59159f30)(FString NewValue)|Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.|
|void|[ClearAccessToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01)()|Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.|
|FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aa7951cb5e628f65ca38547f9aa82be7e)()|Gets the value of RefreshToken_Optional, regardless of it having been set.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad37e1a6ece685d082759c50779d83f2b)()|Gets the value of RefreshToken_Optional, regardless of it having been set.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a65865129909ed11cc722e8f68264e89e)(const FString & DefaultValue)|Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRefreshToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a81d6ea5e6c84fb138e1b432d4bc2b276)(FString & OutValue)|Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRefreshTokenOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aec300aa90ad9ccd411d72d8c01f257be)()|Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRefreshTokenOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a8d8a6b97ac934d970cdd2c00b1adf310)()|Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRefreshToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1acfcbd8d79076b2abda34f32ee31ed042)(FString NewValue)|Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.|
|void|[ClearRefreshToken](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a)()|Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.|
|bool &|[GetNeedsEula](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a7d455ee20d36238921af83554b58c4d4)()|Gets the value of NeedsEula_Optional, regardless of it having been set.|
|const bool &|[GetNeedsEula](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a2987702c8d9368983fd2cfcd27f550b0)()|Gets the value of NeedsEula_Optional, regardless of it having been set.|
|const bool &|[GetNeedsEula](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a3ec349e917edde6296ac72f8fdf276ab)(const bool & DefaultValue)|Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNeedsEula](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a94c86f1b876bf3a628536c9240ba3079)(bool & OutValue)|Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetNeedsEulaOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ab02d9808a3d9c940494d6bfc8178572b)()|Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetNeedsEulaOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a66be0202d5a7f0aea9661a4656050046)()|Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNeedsEula](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1af45d9bd4d81219855bfc074deb33ff1f)(bool NewValue)|Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.|
|void|[ClearNeedsEula](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a)()|Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.|
|bool|[IsNeedsEulaDefaultValue](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a3fe4cac97ef77737e6b180bef9d9292f)()|Returns true if NeedsEula_Optional is set and matches the default value.|
|void|[SetNeedsEulaToDefault](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a15665d390c7aa07289adaecab4a3f54c)()|Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.|
|bool &|[GetNeedsTos](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a6161e803161d7b4fa9aea7f96a95f012)()|Gets the value of NeedsTos_Optional, regardless of it having been set.|
|const bool &|[GetNeedsTos](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aed84c03dd7273a04254b21695f0cd50c)()|Gets the value of NeedsTos_Optional, regardless of it having been set.|
|const bool &|[GetNeedsTos](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a78931f738ca1d7e0f8d1cc685ef1646e)(const bool & DefaultValue)|Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNeedsTos](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad43198bdc6ec608f736550210a773b05)(bool & OutValue)|Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetNeedsTosOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad1feeac472c389a4f43859096cce82dc)()|Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetNeedsTosOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad50d998b02d089ceea9e02b7d4ed568c)()|Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNeedsTos](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad5b6d4b3cd559d30722677dca8ca1c80)(bool NewValue)|Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.|
|void|[ClearNeedsTos](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd)()|Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.|
|bool|[IsNeedsTosDefaultValue](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a8a47b39f4e3957936a62f08f4bd8f65a)()|Returns true if NeedsTos_Optional is set and matches the default value.|
|void|[SetNeedsTosToDefault](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a015e8453a81e47c94d4a9cfbceb9cc5f)()|Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.|
|bool &|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad077e55666c119dd40c4b3983fe83a9f)()|Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a2b6761cbb130f33733c9b7a62b3b36cd)()|Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1acadb0980d488f61a9a5b0dfa76efc7d3)(const bool & DefaultValue)|Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aa4a3218db67d0728bfa123476c64b96e)(bool & OutValue)|Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetNeedsPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a0e2dc912ab17869974783e6a411043ca)()|Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetNeedsPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a935189186bb6cd1dc3a9221e6ef9c5bf)()|Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ab8d965da10bc086aa6ec8a58db50702a)(bool NewValue)|Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.|
|void|[ClearNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640)()|Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.|
|bool|[IsNeedsPrivacyPolicyDefaultValue](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a4ba25f0514ec678fae4446d9bf76a191)()|Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.|
|void|[SetNeedsPrivacyPolicyToDefault](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a7f1fa7a80ca6fe68497e004dbae793a0)()|Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.|
|FString &|[GetRegeneratedCode](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a1c8913672ce5903a256810e9b7cfd15f)()|Gets the value of RegeneratedCode_Optional, regardless of it having been set.|
|const FString &|[GetRegeneratedCode](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1acb7fd0e234af375bf540e99ac58d6071)()|Gets the value of RegeneratedCode_Optional, regardless of it having been set.|
|const FString &|[GetRegeneratedCode](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a1215bdfbf74840f9b8b8b353715f5549)(const FString & DefaultValue)|Gets the value of RegeneratedCode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRegeneratedCode](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a673e44863aba6ff967ec429d24ce0464)(FString & OutValue)|Fills OutValue with the value of RegeneratedCode_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRegeneratedCodeOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a0cec91d772650e50880e9584c3836b35)()|Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRegeneratedCodeOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1af499304c73210c85bc94dad0d3519c32)()|Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRegeneratedCode](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a2b73c656edbe2947bcaeb52a0e340a37)(FString NewValue)|Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true.|
|void|[ClearRegeneratedCode](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c)()|Clears the value of RegeneratedCode_Optional and sets RegeneratedCode_IsSet to false.|
|FString &|[GetErrorMessage](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1aad0f94c3aebf0603ad664d9780e80639)()|Gets the value of ErrorMessage_Optional, regardless of it having been set.|
|const FString &|[GetErrorMessage](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a882b701551cf1586c83b257a04d5d608)()|Gets the value of ErrorMessage_Optional, regardless of it having been set.|
|const FString &|[GetErrorMessage](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a82049853bef037782e79bf41cea5f609)(const FString & DefaultValue)|Gets the value of ErrorMessage_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetErrorMessage](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a7157d20217a3594b651b42729d60059c)(FString & OutValue)|Fills OutValue with the value of ErrorMessage_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetErrorMessageOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a22b8b2e31d99b1cd11486f5991744833)()|Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetErrorMessageOrNull](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1ad27f66c509a1f5ea090e73fadbf70c35)()|Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetErrorMessage](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a9b3deaad5aff42f75ca1b8d92a88e854)(FString NewValue)|Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true.|
|void|[ClearErrorMessage](/unreal-plugins/all/structfrhapi__oauthtokenresponse/#structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91)()|Clears the value of ErrorMessage_Optional and sets ErrorMessage_IsSet to false.|
## Public Attributes



### `AccessToken_Optional` <a id="structFRHAPI__OAuthTokenResponse_1adde232680fa32875137ce7f9163f3aa0"></a>

`FString FRHAPI_OAuthTokenResponse::AccessToken_Optional`

Access token for the user.




### `AccessToken_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1a8d0d73e83ffeda8b8480b48a47cd0063"></a>

`bool FRHAPI_OAuthTokenResponse::AccessToken_IsSet`

true if AccessToken_Optional has been set to a value




### `RefreshToken_Optional` <a id="structFRHAPI__OAuthTokenResponse_1a45e0db2e2e612f481d60596e319fc315"></a>

`FString FRHAPI_OAuthTokenResponse::RefreshToken_Optional`

Refresh token for the user.




### `RefreshToken_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1aa13e74199c18b249c7efcef2bdb30bc0"></a>

`bool FRHAPI_OAuthTokenResponse::RefreshToken_IsSet`

true if RefreshToken_Optional has been set to a value




### `NeedsEula_Optional` <a id="structFRHAPI__OAuthTokenResponse_1abd3470ec6c8d75da2458816e9ac2fe10"></a>

`bool FRHAPI_OAuthTokenResponse::NeedsEula_Optional`

If true, the user must accept the EULA before a token can be generated.




### `NeedsEula_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1a2f874a50b9bb2d8a2eec842554be1a74"></a>

`bool FRHAPI_OAuthTokenResponse::NeedsEula_IsSet`

true if NeedsEula_Optional has been set to a value




### `NeedsTos_Optional` <a id="structFRHAPI__OAuthTokenResponse_1ad688d5ef40dc5bb29c2bd90aac26704d"></a>

`bool FRHAPI_OAuthTokenResponse::NeedsTos_Optional`

If true, the user must accept the TOS before a token can be generated.




### `NeedsTos_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1afa9d6772ee5ba956d10986d7f37fde88"></a>

`bool FRHAPI_OAuthTokenResponse::NeedsTos_IsSet`

true if NeedsTos_Optional has been set to a value




### `NeedsPrivacyPolicy_Optional` <a id="structFRHAPI__OAuthTokenResponse_1ac80818280535df6f40cc9421fb366c13"></a>

`bool FRHAPI_OAuthTokenResponse::NeedsPrivacyPolicy_Optional`

If true, the user must accept the Privacy Policy before a token can be generated.




### `NeedsPrivacyPolicy_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1a64c8a1bacc3e8c0a48829eee030102b5"></a>

`bool FRHAPI_OAuthTokenResponse::NeedsPrivacyPolicy_IsSet`

true if NeedsPrivacyPolicy_Optional has been set to a value




### `RegeneratedCode_Optional` <a id="structFRHAPI__OAuthTokenResponse_1af4575c8414a94d5f81f091f68b328f87"></a>

`FString FRHAPI_OAuthTokenResponse::RegeneratedCode_Optional`

If present, a new code was generated and can be used after the user accepts the required agreements.




### `RegeneratedCode_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1a9bf5217730fe63a400e1a973cb394d3d"></a>

`bool FRHAPI_OAuthTokenResponse::RegeneratedCode_IsSet`

true if RegeneratedCode_Optional has been set to a value




### `ErrorMessage_Optional` <a id="structFRHAPI__OAuthTokenResponse_1a77cf56edd8b3d7969c5501896adfae7a"></a>

`FString FRHAPI_OAuthTokenResponse::ErrorMessage_Optional`

Error message if an error occurred.




### `ErrorMessage_IsSet` <a id="structFRHAPI__OAuthTokenResponse_1af813608595c71277d1cd587063eeacba"></a>

`bool FRHAPI_OAuthTokenResponse::ErrorMessage_IsSet`

true if ErrorMessage_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__OAuthTokenResponse_1aaddc0d3b8e538af941bb8f328fd7d817"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__OAuthTokenResponse_1a0d68b6e2cfe02059d271a64c47415595"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetAccessToken` <a id="structFRHAPI__OAuthTokenResponse_1aa31a77b15119134ad36ff4bae07f5c74"></a>

FString & GetAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AccessToken_Optional, regardless of it having been set.




### `GetAccessToken` <a id="structFRHAPI__OAuthTokenResponse_1a4f0b14ce752986de279e424b51766ded"></a>

const FString & GetAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AccessToken_Optional, regardless of it having been set.




### `GetAccessToken` <a id="structFRHAPI__OAuthTokenResponse_1ac34b59048b75e3e1ffcdc99604e6e66a"></a>

const FString & GetAccessToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAccessToken` <a id="structFRHAPI__OAuthTokenResponse_1acc34b8247dd59a47d80307d5ba16a403"></a>

bool GetAccessToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.




### `GetAccessTokenOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a2f335a9932f13e1f6c753bf01fd67abb"></a>

FString * GetAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.




### `GetAccessTokenOrNull` <a id="structFRHAPI__OAuthTokenResponse_1ac5c7e027985fba3895cccd05cfa8a98c"></a>

const FString * GetAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.




### `SetAccessToken` <a id="structFRHAPI__OAuthTokenResponse_1a7eeacc30dfb8d8b85ffda35e59159f30"></a>

void SetAccessToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.




### `ClearAccessToken` <a id="structFRHAPI__OAuthTokenResponse_1ab6549c31b60e4e562658dd43e3378a01"></a>

void ClearAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.




### `GetRefreshToken` <a id="structFRHAPI__OAuthTokenResponse_1aa7951cb5e628f65ca38547f9aa82be7e"></a>

FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken_Optional, regardless of it having been set.




### `GetRefreshToken` <a id="structFRHAPI__OAuthTokenResponse_1ad37e1a6ece685d082759c50779d83f2b"></a>

const FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken_Optional, regardless of it having been set.




### `GetRefreshToken` <a id="structFRHAPI__OAuthTokenResponse_1a65865129909ed11cc722e8f68264e89e"></a>

const FString & GetRefreshToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRefreshToken` <a id="structFRHAPI__OAuthTokenResponse_1a81d6ea5e6c84fb138e1b432d4bc2b276"></a>

bool GetRefreshToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.




### `GetRefreshTokenOrNull` <a id="structFRHAPI__OAuthTokenResponse_1aec300aa90ad9ccd411d72d8c01f257be"></a>

FString * GetRefreshTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.




### `GetRefreshTokenOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a8d8a6b97ac934d970cdd2c00b1adf310"></a>

const FString * GetRefreshTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.




### `SetRefreshToken` <a id="structFRHAPI__OAuthTokenResponse_1acfcbd8d79076b2abda34f32ee31ed042"></a>

void SetRefreshToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.




### `ClearRefreshToken` <a id="structFRHAPI__OAuthTokenResponse_1a3872fb44c576ce15ca44857c6033665a"></a>

void ClearRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.




### `GetNeedsEula` <a id="structFRHAPI__OAuthTokenResponse_1a7d455ee20d36238921af83554b58c4d4"></a>

bool & GetNeedsEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsEula_Optional, regardless of it having been set.




### `GetNeedsEula` <a id="structFRHAPI__OAuthTokenResponse_1a2987702c8d9368983fd2cfcd27f550b0"></a>

const bool & GetNeedsEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsEula_Optional, regardless of it having been set.




### `GetNeedsEula` <a id="structFRHAPI__OAuthTokenResponse_1a3ec349e917edde6296ac72f8fdf276ab"></a>

const bool & GetNeedsEula(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNeedsEula` <a id="structFRHAPI__OAuthTokenResponse_1a94c86f1b876bf3a628536c9240ba3079"></a>

bool GetNeedsEula(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.




### `GetNeedsEulaOrNull` <a id="structFRHAPI__OAuthTokenResponse_1ab02d9808a3d9c940494d6bfc8178572b"></a>

bool * GetNeedsEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.




### `GetNeedsEulaOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a66be0202d5a7f0aea9661a4656050046"></a>

const bool * GetNeedsEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.




### `SetNeedsEula` <a id="structFRHAPI__OAuthTokenResponse_1af45d9bd4d81219855bfc074deb33ff1f"></a>

void SetNeedsEula(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.




### `ClearNeedsEula` <a id="structFRHAPI__OAuthTokenResponse_1a26ca325763675827b1ebd81aea63f26a"></a>

void ClearNeedsEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.




### `IsNeedsEulaDefaultValue` <a id="structFRHAPI__OAuthTokenResponse_1a3fe4cac97ef77737e6b180bef9d9292f"></a>

bool IsNeedsEulaDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NeedsEula_Optional is set and matches the default value.




### `SetNeedsEulaToDefault` <a id="structFRHAPI__OAuthTokenResponse_1a15665d390c7aa07289adaecab4a3f54c"></a>

void SetNeedsEulaToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.




### `GetNeedsTos` <a id="structFRHAPI__OAuthTokenResponse_1a6161e803161d7b4fa9aea7f96a95f012"></a>

bool & GetNeedsTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsTos_Optional, regardless of it having been set.




### `GetNeedsTos` <a id="structFRHAPI__OAuthTokenResponse_1aed84c03dd7273a04254b21695f0cd50c"></a>

const bool & GetNeedsTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsTos_Optional, regardless of it having been set.




### `GetNeedsTos` <a id="structFRHAPI__OAuthTokenResponse_1a78931f738ca1d7e0f8d1cc685ef1646e"></a>

const bool & GetNeedsTos(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNeedsTos` <a id="structFRHAPI__OAuthTokenResponse_1ad43198bdc6ec608f736550210a773b05"></a>

bool GetNeedsTos(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.




### `GetNeedsTosOrNull` <a id="structFRHAPI__OAuthTokenResponse_1ad1feeac472c389a4f43859096cce82dc"></a>

bool * GetNeedsTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.




### `GetNeedsTosOrNull` <a id="structFRHAPI__OAuthTokenResponse_1ad50d998b02d089ceea9e02b7d4ed568c"></a>

const bool * GetNeedsTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.




### `SetNeedsTos` <a id="structFRHAPI__OAuthTokenResponse_1ad5b6d4b3cd559d30722677dca8ca1c80"></a>

void SetNeedsTos(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.




### `ClearNeedsTos` <a id="structFRHAPI__OAuthTokenResponse_1a11ea5150a0eb635f4e100fedb07dd1cd"></a>

void ClearNeedsTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.




### `IsNeedsTosDefaultValue` <a id="structFRHAPI__OAuthTokenResponse_1a8a47b39f4e3957936a62f08f4bd8f65a"></a>

bool IsNeedsTosDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NeedsTos_Optional is set and matches the default value.




### `SetNeedsTosToDefault` <a id="structFRHAPI__OAuthTokenResponse_1a015e8453a81e47c94d4a9cfbceb9cc5f"></a>

void SetNeedsTosToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__OAuthTokenResponse_1ad077e55666c119dd40c4b3983fe83a9f"></a>

bool & GetNeedsPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__OAuthTokenResponse_1a2b6761cbb130f33733c9b7a62b3b36cd"></a>

const bool & GetNeedsPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__OAuthTokenResponse_1acadb0980d488f61a9a5b0dfa76efc7d3"></a>

const bool & GetNeedsPrivacyPolicy(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__OAuthTokenResponse_1aa4a3218db67d0728bfa123476c64b96e"></a>

bool GetNeedsPrivacyPolicy(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.




### `GetNeedsPrivacyPolicyOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a0e2dc912ab17869974783e6a411043ca"></a>

bool * GetNeedsPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `GetNeedsPrivacyPolicyOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a935189186bb6cd1dc3a9221e6ef9c5bf"></a>

const bool * GetNeedsPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `SetNeedsPrivacyPolicy` <a id="structFRHAPI__OAuthTokenResponse_1ab8d965da10bc086aa6ec8a58db50702a"></a>

void SetNeedsPrivacyPolicy(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.




### `ClearNeedsPrivacyPolicy` <a id="structFRHAPI__OAuthTokenResponse_1ae51f4ff1afe199ec159f55e49322a640"></a>

void ClearNeedsPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.




### `IsNeedsPrivacyPolicyDefaultValue` <a id="structFRHAPI__OAuthTokenResponse_1a4ba25f0514ec678fae4446d9bf76a191"></a>

bool IsNeedsPrivacyPolicyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.




### `SetNeedsPrivacyPolicyToDefault` <a id="structFRHAPI__OAuthTokenResponse_1a7f1fa7a80ca6fe68497e004dbae793a0"></a>

void SetNeedsPrivacyPolicyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.




### `GetRegeneratedCode` <a id="structFRHAPI__OAuthTokenResponse_1a1c8913672ce5903a256810e9b7cfd15f"></a>

FString & GetRegeneratedCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegeneratedCode_Optional, regardless of it having been set.




### `GetRegeneratedCode` <a id="structFRHAPI__OAuthTokenResponse_1acb7fd0e234af375bf540e99ac58d6071"></a>

const FString & GetRegeneratedCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegeneratedCode_Optional, regardless of it having been set.




### `GetRegeneratedCode` <a id="structFRHAPI__OAuthTokenResponse_1a1215bdfbf74840f9b8b8b353715f5549"></a>

const FString & GetRegeneratedCode(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RegeneratedCode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRegeneratedCode` <a id="structFRHAPI__OAuthTokenResponse_1a673e44863aba6ff967ec429d24ce0464"></a>

bool GetRegeneratedCode(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RegeneratedCode_Optional and returns true if it has been set, otherwise returns false.




### `GetRegeneratedCodeOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a0cec91d772650e50880e9584c3836b35"></a>

FString * GetRegeneratedCodeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.




### `GetRegeneratedCodeOrNull` <a id="structFRHAPI__OAuthTokenResponse_1af499304c73210c85bc94dad0d3519c32"></a>

const FString * GetRegeneratedCodeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegeneratedCode_Optional, if it has been set, otherwise returns nullptr.




### `SetRegeneratedCode` <a id="structFRHAPI__OAuthTokenResponse_1a2b73c656edbe2947bcaeb52a0e340a37"></a>

void SetRegeneratedCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RegeneratedCode_Optional and also sets RegeneratedCode_IsSet to true.




### `ClearRegeneratedCode` <a id="structFRHAPI__OAuthTokenResponse_1a61c9903d1213f0d2279b6631edcbf70c"></a>

void ClearRegeneratedCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RegeneratedCode_Optional and sets RegeneratedCode_IsSet to false.




### `GetErrorMessage` <a id="structFRHAPI__OAuthTokenResponse_1aad0f94c3aebf0603ad664d9780e80639"></a>

FString & GetErrorMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorMessage_Optional, regardless of it having been set.




### `GetErrorMessage` <a id="structFRHAPI__OAuthTokenResponse_1a882b701551cf1586c83b257a04d5d608"></a>

const FString & GetErrorMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorMessage_Optional, regardless of it having been set.




### `GetErrorMessage` <a id="structFRHAPI__OAuthTokenResponse_1a82049853bef037782e79bf41cea5f609"></a>

const FString & GetErrorMessage(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ErrorMessage_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetErrorMessage` <a id="structFRHAPI__OAuthTokenResponse_1a7157d20217a3594b651b42729d60059c"></a>

bool GetErrorMessage(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ErrorMessage_Optional and returns true if it has been set, otherwise returns false.




### `GetErrorMessageOrNull` <a id="structFRHAPI__OAuthTokenResponse_1a22b8b2e31d99b1cd11486f5991744833"></a>

FString * GetErrorMessageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.




### `GetErrorMessageOrNull` <a id="structFRHAPI__OAuthTokenResponse_1ad27f66c509a1f5ea090e73fadbf70c35"></a>

const FString * GetErrorMessageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ErrorMessage_Optional, if it has been set, otherwise returns nullptr.




### `SetErrorMessage` <a id="structFRHAPI__OAuthTokenResponse_1a9b3deaad5aff42f75ca1b8d92a88e854"></a>

void SetErrorMessage(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ErrorMessage_Optional and also sets ErrorMessage_IsSet to true.




### `ClearErrorMessage` <a id="structFRHAPI__OAuthTokenResponse_1a80ef23c341b72eb8297c8accfdbc2c91"></a>

void ClearErrorMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ErrorMessage_Optional and sets ErrorMessage_IsSet to false.





