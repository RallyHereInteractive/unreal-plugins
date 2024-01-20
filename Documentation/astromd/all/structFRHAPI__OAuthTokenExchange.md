---
title: FRHAPI_OAuthTokenExchange Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

OAuth token exchange request.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_OAuthTokenEchangeGrantType|[GrantType](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1aa86abe58af5adeae744bdd18e4913983)|Grant type for the OAuth exchange.|
|FString|[Code](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1adecfe63121e8082daec11dc10e364895)|authorization_code for the OAuth exchange.|
|bool|[AcceptedEula_Optional](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a57e46947e4feea5f172cd27605afbb43)|If true, the user has accepted the EULA.|
|bool|[AcceptedEula_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a8751a1f91d24c1eadbcbfb504368186e)|true if AcceptedEula_Optional has been set to a value|
|bool|[AcceptedTos_Optional](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a9418a567dcee1ac7d57e44d954b35ee0)|If true, the user has accepted the TOS.|
|bool|[AcceptedTos_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1aae1fe88f23dccedfab5821827648f8d5)|true if AcceptedTos_Optional has been set to a value|
|bool|[AcceptedPrivacyPolicy_Optional](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1aae6ed503678834c1860823dd81e1443b)|If true, the user has accepted the Privacy Policy.|
|bool|[AcceptedPrivacyPolicy_IsSet](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a17e4775567e864d1707a3fd165f27f18)|true if AcceptedPrivacyPolicy_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1ab682bf4d98710840e7a23f2ab2688818)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a3ca80a156dc9963e6ae8a2bae70404fa)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_OAuthTokenEchangeGrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a6ee282c5eb8adbcf0eb170ea3e22f0ba)()|Gets the value of GrantType.|
|const ERHAPI_OAuthTokenEchangeGrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a7ab8a47a8a149e23f9ae553e431dc30c)()|Gets the value of GrantType.|
|void|[SetGrantType](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1aa4fae8ad2a78015a54eae66832a4de6d)(ERHAPI_OAuthTokenEchangeGrantType NewValue)|Sets the value of GrantType.|
|FString &|[GetCode](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a7707ebe9a7dfd2198cb60e45ead0e690)()|Gets the value of Code.|
|const FString &|[GetCode](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1afe1983a19229cf6ef62dfc9a3dd7c3e4)()|Gets the value of Code.|
|void|[SetCode](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a4f1f96ee76ae92ea93ae02b736f9451f)(FString NewValue)|Sets the value of Code.|
|bool &|[GetAcceptedEula](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a53e63f94e1ba7917e516ef25db57fcfc)()|Gets the value of AcceptedEula_Optional, regardless of it having been set.|
|const bool &|[GetAcceptedEula](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a692e97abf1cdc995ce7c76f196a7d1ca)()|Gets the value of AcceptedEula_Optional, regardless of it having been set.|
|const bool &|[GetAcceptedEula](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1abd50a52ef98f635de9a04df437067740)(const bool & DefaultValue)|Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAcceptedEula](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a7d340fd12598c6d04539bf0d162ee2df)(bool & OutValue)|Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAcceptedEulaOrNull](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a3edab593b1fdabfa63fa482a138fb0f1)()|Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAcceptedEulaOrNull](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a20b0762917a318d20a4ea774b9fd1530)()|Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAcceptedEula](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a7e0645daa97b58d978e2883f8e939727)(bool NewValue)|Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true.|
|void|[ClearAcceptedEula](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba)()|Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false.|
|bool|[IsAcceptedEulaDefaultValue](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a528451ab043b5a886b59f59ca182ca11)()|Returns true if AcceptedEula_Optional is set and matches the default value.|
|void|[SetAcceptedEulaToDefault](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a2a068a9b1646965e8fa03cc111077f24)()|Sets the value of AcceptedEula_Optional to its default and also sets AcceptedEula_IsSet to true.|
|bool &|[GetAcceptedTos](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1af219f6740a560a7800f340287beee74e)()|Gets the value of AcceptedTos_Optional, regardless of it having been set.|
|const bool &|[GetAcceptedTos](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a8981df5a6d59fdca6662c950f60cc19a)()|Gets the value of AcceptedTos_Optional, regardless of it having been set.|
|const bool &|[GetAcceptedTos](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a654a6e7c98264f9930d55085e2e5be36)(const bool & DefaultValue)|Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAcceptedTos](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1ac5d3bbf8c2acee2f761f6d94e08b3b6b)(bool & OutValue)|Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAcceptedTosOrNull](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a5e312f6b64edca36be865672b7acd25f)()|Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAcceptedTosOrNull](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a3de7095338a328bca1212886826bf5fa)()|Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAcceptedTos](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a7aeb26c0bd5a0a5c0a667e69c843bebc)(bool NewValue)|Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true.|
|void|[ClearAcceptedTos](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536)()|Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false.|
|bool|[IsAcceptedTosDefaultValue](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a54fb5e2dda724b25ab73be0c252e90d1)()|Returns true if AcceptedTos_Optional is set and matches the default value.|
|void|[SetAcceptedTosToDefault](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a5c57ff1fe72114cf8238824dfee5077c)()|Sets the value of AcceptedTos_Optional to its default and also sets AcceptedTos_IsSet to true.|
|bool &|[GetAcceptedPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1afe6a55ea73d5c8c3d965dabb878b52b1)()|Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetAcceptedPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a14bac8f5a42d15b7df7346b3390779df)()|Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetAcceptedPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a3a6f3d2d96711be00550cc526f090d23)(const bool & DefaultValue)|Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAcceptedPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a9c1f3cb03a83630263e44703279ded2a)(bool & OutValue)|Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAcceptedPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a0f3928a29c7bd8af1e0be1cd74d461b6)()|Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAcceptedPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1aedbb09ac04f49d018def2382887d0d8d)()|Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAcceptedPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a677c9d0c39918df89e2c40a228cb0368)(bool NewValue)|Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true.|
|void|[ClearAcceptedPrivacyPolicy](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1)()|Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false.|
|bool|[IsAcceptedPrivacyPolicyDefaultValue](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1ae5beea9b982bdfe51052d2b1ed011776)()|Returns true if AcceptedPrivacyPolicy_Optional is set and matches the default value.|
|void|[SetAcceptedPrivacyPolicyToDefault](/unreal-plugins/all/structfrhapi__oauthtokenexchange/#structFRHAPI__OAuthTokenExchange_1a3523911676aa77a4facdfba9699a4355)()|Sets the value of AcceptedPrivacyPolicy_Optional to its default and also sets AcceptedPrivacyPolicy_IsSet to true.|
## Public Attributes



### `GrantType` <a id="structFRHAPI__OAuthTokenExchange_1aa86abe58af5adeae744bdd18e4913983"></a>

`ERHAPI_OAuthTokenEchangeGrantType FRHAPI_OAuthTokenExchange::GrantType`

Grant type for the OAuth exchange.




### `Code` <a id="structFRHAPI__OAuthTokenExchange_1adecfe63121e8082daec11dc10e364895"></a>

`FString FRHAPI_OAuthTokenExchange::Code`

authorization_code for the OAuth exchange.




### `AcceptedEula_Optional` <a id="structFRHAPI__OAuthTokenExchange_1a57e46947e4feea5f172cd27605afbb43"></a>

`bool FRHAPI_OAuthTokenExchange::AcceptedEula_Optional`

If true, the user has accepted the EULA.




### `AcceptedEula_IsSet` <a id="structFRHAPI__OAuthTokenExchange_1a8751a1f91d24c1eadbcbfb504368186e"></a>

`bool FRHAPI_OAuthTokenExchange::AcceptedEula_IsSet`

true if AcceptedEula_Optional has been set to a value




### `AcceptedTos_Optional` <a id="structFRHAPI__OAuthTokenExchange_1a9418a567dcee1ac7d57e44d954b35ee0"></a>

`bool FRHAPI_OAuthTokenExchange::AcceptedTos_Optional`

If true, the user has accepted the TOS.




### `AcceptedTos_IsSet` <a id="structFRHAPI__OAuthTokenExchange_1aae1fe88f23dccedfab5821827648f8d5"></a>

`bool FRHAPI_OAuthTokenExchange::AcceptedTos_IsSet`

true if AcceptedTos_Optional has been set to a value




### `AcceptedPrivacyPolicy_Optional` <a id="structFRHAPI__OAuthTokenExchange_1aae6ed503678834c1860823dd81e1443b"></a>

`bool FRHAPI_OAuthTokenExchange::AcceptedPrivacyPolicy_Optional`

If true, the user has accepted the Privacy Policy.




### `AcceptedPrivacyPolicy_IsSet` <a id="structFRHAPI__OAuthTokenExchange_1a17e4775567e864d1707a3fd165f27f18"></a>

`bool FRHAPI_OAuthTokenExchange::AcceptedPrivacyPolicy_IsSet`

true if AcceptedPrivacyPolicy_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__OAuthTokenExchange_1ab682bf4d98710840e7a23f2ab2688818"></a>

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



### `WriteJson` <a id="structFRHAPI__OAuthTokenExchange_1a3ca80a156dc9963e6ae8a2bae70404fa"></a>

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



### `GetGrantType` <a id="structFRHAPI__OAuthTokenExchange_1a6ee282c5eb8adbcf0eb170ea3e22f0ba"></a>

ERHAPI_OAuthTokenEchangeGrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `GetGrantType` <a id="structFRHAPI__OAuthTokenExchange_1a7ab8a47a8a149e23f9ae553e431dc30c"></a>

const ERHAPI_OAuthTokenEchangeGrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `SetGrantType` <a id="structFRHAPI__OAuthTokenExchange_1aa4fae8ad2a78015a54eae66832a4de6d"></a>

void SetGrantType(ERHAPI_OAuthTokenEchangeGrantType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OAuthTokenEchangeGrantType|NewValue|

#### Description

Sets the value of GrantType.




### `GetCode` <a id="structFRHAPI__OAuthTokenExchange_1a7707ebe9a7dfd2198cb60e45ead0e690"></a>

FString & GetCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Code.




### `GetCode` <a id="structFRHAPI__OAuthTokenExchange_1afe1983a19229cf6ef62dfc9a3dd7c3e4"></a>

const FString & GetCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Code.




### `SetCode` <a id="structFRHAPI__OAuthTokenExchange_1a4f1f96ee76ae92ea93ae02b736f9451f"></a>

void SetCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Code.




### `GetAcceptedEula` <a id="structFRHAPI__OAuthTokenExchange_1a53e63f94e1ba7917e516ef25db57fcfc"></a>

bool & GetAcceptedEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptedEula_Optional, regardless of it having been set.




### `GetAcceptedEula` <a id="structFRHAPI__OAuthTokenExchange_1a692e97abf1cdc995ce7c76f196a7d1ca"></a>

const bool & GetAcceptedEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptedEula_Optional, regardless of it having been set.




### `GetAcceptedEula` <a id="structFRHAPI__OAuthTokenExchange_1abd50a52ef98f635de9a04df437067740"></a>

const bool & GetAcceptedEula(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAcceptedEula` <a id="structFRHAPI__OAuthTokenExchange_1a7d340fd12598c6d04539bf0d162ee2df"></a>

bool GetAcceptedEula(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false.




### `GetAcceptedEulaOrNull` <a id="structFRHAPI__OAuthTokenExchange_1a3edab593b1fdabfa63fa482a138fb0f1"></a>

bool * GetAcceptedEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.




### `GetAcceptedEulaOrNull` <a id="structFRHAPI__OAuthTokenExchange_1a20b0762917a318d20a4ea774b9fd1530"></a>

const bool * GetAcceptedEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr.




### `SetAcceptedEula` <a id="structFRHAPI__OAuthTokenExchange_1a7e0645daa97b58d978e2883f8e939727"></a>

void SetAcceptedEula(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true.




### `ClearAcceptedEula` <a id="structFRHAPI__OAuthTokenExchange_1a0dfd9d4f91feb3ee973bf6cf38171fba"></a>

void ClearAcceptedEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false.




### `IsAcceptedEulaDefaultValue` <a id="structFRHAPI__OAuthTokenExchange_1a528451ab043b5a886b59f59ca182ca11"></a>

bool IsAcceptedEulaDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AcceptedEula_Optional is set and matches the default value.




### `SetAcceptedEulaToDefault` <a id="structFRHAPI__OAuthTokenExchange_1a2a068a9b1646965e8fa03cc111077f24"></a>

void SetAcceptedEulaToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AcceptedEula_Optional to its default and also sets AcceptedEula_IsSet to true.




### `GetAcceptedTos` <a id="structFRHAPI__OAuthTokenExchange_1af219f6740a560a7800f340287beee74e"></a>

bool & GetAcceptedTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptedTos_Optional, regardless of it having been set.




### `GetAcceptedTos` <a id="structFRHAPI__OAuthTokenExchange_1a8981df5a6d59fdca6662c950f60cc19a"></a>

const bool & GetAcceptedTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptedTos_Optional, regardless of it having been set.




### `GetAcceptedTos` <a id="structFRHAPI__OAuthTokenExchange_1a654a6e7c98264f9930d55085e2e5be36"></a>

const bool & GetAcceptedTos(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAcceptedTos` <a id="structFRHAPI__OAuthTokenExchange_1ac5d3bbf8c2acee2f761f6d94e08b3b6b"></a>

bool GetAcceptedTos(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false.




### `GetAcceptedTosOrNull` <a id="structFRHAPI__OAuthTokenExchange_1a5e312f6b64edca36be865672b7acd25f"></a>

bool * GetAcceptedTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.




### `GetAcceptedTosOrNull` <a id="structFRHAPI__OAuthTokenExchange_1a3de7095338a328bca1212886826bf5fa"></a>

const bool * GetAcceptedTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr.




### `SetAcceptedTos` <a id="structFRHAPI__OAuthTokenExchange_1a7aeb26c0bd5a0a5c0a667e69c843bebc"></a>

void SetAcceptedTos(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true.




### `ClearAcceptedTos` <a id="structFRHAPI__OAuthTokenExchange_1abb37f9c9c203a7419b816d7590ad6536"></a>

void ClearAcceptedTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false.




### `IsAcceptedTosDefaultValue` <a id="structFRHAPI__OAuthTokenExchange_1a54fb5e2dda724b25ab73be0c252e90d1"></a>

bool IsAcceptedTosDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AcceptedTos_Optional is set and matches the default value.




### `SetAcceptedTosToDefault` <a id="structFRHAPI__OAuthTokenExchange_1a5c57ff1fe72114cf8238824dfee5077c"></a>

void SetAcceptedTosToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AcceptedTos_Optional to its default and also sets AcceptedTos_IsSet to true.




### `GetAcceptedPrivacyPolicy` <a id="structFRHAPI__OAuthTokenExchange_1afe6a55ea73d5c8c3d965dabb878b52b1"></a>

bool & GetAcceptedPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.




### `GetAcceptedPrivacyPolicy` <a id="structFRHAPI__OAuthTokenExchange_1a14bac8f5a42d15b7df7346b3390779df"></a>

const bool & GetAcceptedPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set.




### `GetAcceptedPrivacyPolicy` <a id="structFRHAPI__OAuthTokenExchange_1a3a6f3d2d96711be00550cc526f090d23"></a>

const bool & GetAcceptedPrivacyPolicy(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAcceptedPrivacyPolicy` <a id="structFRHAPI__OAuthTokenExchange_1a9c1f3cb03a83630263e44703279ded2a"></a>

bool GetAcceptedPrivacyPolicy(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.




### `GetAcceptedPrivacyPolicyOrNull` <a id="structFRHAPI__OAuthTokenExchange_1a0f3928a29c7bd8af1e0be1cd74d461b6"></a>

bool * GetAcceptedPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `GetAcceptedPrivacyPolicyOrNull` <a id="structFRHAPI__OAuthTokenExchange_1aedbb09ac04f49d018def2382887d0d8d"></a>

const bool * GetAcceptedPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `SetAcceptedPrivacyPolicy` <a id="structFRHAPI__OAuthTokenExchange_1a677c9d0c39918df89e2c40a228cb0368"></a>

void SetAcceptedPrivacyPolicy(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true.




### `ClearAcceptedPrivacyPolicy` <a id="structFRHAPI__OAuthTokenExchange_1addf1109e7e4b70e5492411ec62c83fb1"></a>

void ClearAcceptedPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false.




### `IsAcceptedPrivacyPolicyDefaultValue` <a id="structFRHAPI__OAuthTokenExchange_1ae5beea9b982bdfe51052d2b1ed011776"></a>

bool IsAcceptedPrivacyPolicyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AcceptedPrivacyPolicy_Optional is set and matches the default value.




### `SetAcceptedPrivacyPolicyToDefault` <a id="structFRHAPI__OAuthTokenExchange_1a3523911676aa77a4facdfba9699a4355"></a>

void SetAcceptedPrivacyPolicyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AcceptedPrivacyPolicy_Optional to its default and also sets AcceptedPrivacyPolicy_IsSet to true.





