---
title: FRHAPI_AgreementMessage Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Error message for when a user has not agreed to the EULA, TOS, or Privacy Policy.

## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[AuthSuccess_Optional](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1aa8d209e82da7a456005582c2badbf561)||
|bool|[AuthSuccess_IsSet](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a4bed655f80f9c37f889530f5493c9c98)|true if AuthSuccess_Optional has been set to a value|
|FString|[ErrorCode](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ae83c4271a95b301e2cbf385809e8e3bb)||
|FString|[Desc](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a341feccacab82ba00edf1bc819948b68)||
|bool|[NeedsEula_Optional](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a080b82ee1915127652fd6c4080dae3fb)|Whether the user needs to accept the End User License Agreement.|
|bool|[NeedsEula_IsSet](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ac42e50d11a3620d0db931ea7cde62345)|true if NeedsEula_Optional has been set to a value|
|bool|[NeedsTos_Optional](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a878df1d6fb0437cd07eadad56bd8df08)|Whether the user needs to accept the Terms of Service.|
|bool|[NeedsTos_IsSet](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1abd60f2debe16b2924f731615d3e6a841)|true if NeedsTos_Optional has been set to a value|
|bool|[NeedsPrivacyPolicy_Optional](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a99d643a23f43e3f9508584d2cb3c3ecd)|Whether the user needs to accept the Privacy Policy.|
|bool|[NeedsPrivacyPolicy_IsSet](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a0fc51c53961a3d1b7b5ff9cbd5784fa0)|true if NeedsPrivacyPolicy_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a7c23aac9b13afd476198e45e0c380cc7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a8c963c13ac21dd41a28d5fc01766e7c0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|bool &|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a57397b50391881929fa779675378cae2)()|Gets the value of AuthSuccess_Optional, regardless of it having been set.|
|const bool &|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ad52e8bc7849d6105395bd1a4d4949a5d)()|Gets the value of AuthSuccess_Optional, regardless of it having been set.|
|const bool &|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ac0aaa4e2629a8d9ab9544aa0425aff4e)(const bool & DefaultValue)|Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f)(bool & OutValue)|Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAuthSuccessOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a52432e93a57aac16076f47f3831141a4)()|Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAuthSuccessOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1aa8d8eb1c96f6fb36b248543abdad1274)()|Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAuthSuccess](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1af4944c992022ae18631e32cf3d389ba7)(bool NewValue)|Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.|
|void|[ClearAuthSuccess](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03)()|Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.|
|bool|[IsAuthSuccessDefaultValue](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe)()|Returns true if AuthSuccess_Optional is set and matches the default value.|
|void|[SetAuthSuccessToDefault](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4)()|Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.|
|FString &|[GetErrorCode](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ae24b2e3d39c42e5e5752be0ed0a789f2)()|Gets the value of ErrorCode.|
|const FString &|[GetErrorCode](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1aed5d205b58e1e319cc9419e46c07d877)()|Gets the value of ErrorCode.|
|void|[SetErrorCode](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a102b46fe2aaf3346b38942636c438f18)(FString NewValue)|Sets the value of ErrorCode.|
|FString &|[GetDesc](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1acaedd82cb90517f793cdecea95a9c43b)()|Gets the value of Desc.|
|const FString &|[GetDesc](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1af80ab5684c0a1a65da856c9419bd5cfe)()|Gets the value of Desc.|
|void|[SetDesc](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a4888e7ffcde8e799094d1d9e4eb349ba)(FString NewValue)|Sets the value of Desc.|
|bool &|[GetNeedsEula](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a450209aff2a672e809bb134e75f2df77)()|Gets the value of NeedsEula_Optional, regardless of it having been set.|
|const bool &|[GetNeedsEula](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a2e49e29ec477f70398248ee5ba43c124)()|Gets the value of NeedsEula_Optional, regardless of it having been set.|
|const bool &|[GetNeedsEula](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a9e510f79103ca4bc65b1433000aaf59e)(const bool & DefaultValue)|Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNeedsEula](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e)(bool & OutValue)|Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetNeedsEulaOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ac42bcf8a7450dbd0222d86ad04dec03e)()|Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetNeedsEulaOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a5be15659a73afe371d9fed6d617d4dbb)()|Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNeedsEula](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a479307d082de00e9aa611168d4ec9287)(bool NewValue)|Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.|
|void|[ClearNeedsEula](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e)()|Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.|
|bool|[IsNeedsEulaDefaultValue](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9)()|Returns true if NeedsEula_Optional is set and matches the default value.|
|void|[SetNeedsEulaToDefault](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511)()|Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.|
|bool &|[GetNeedsTos](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a507796f242e8017a626f43a71f5b4a75)()|Gets the value of NeedsTos_Optional, regardless of it having been set.|
|const bool &|[GetNeedsTos](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a33fda52ab7562b9523b69b7c64fae69e)()|Gets the value of NeedsTos_Optional, regardless of it having been set.|
|const bool &|[GetNeedsTos](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a60098fab0216fb389628ab655cea0d6f)(const bool & DefaultValue)|Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNeedsTos](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d)(bool & OutValue)|Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetNeedsTosOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1ac1082aa5f2b1d3c4f5b13bc3be2142c6)()|Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetNeedsTosOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1af551aad8d0d0fe36db399fdcd374efd1)()|Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNeedsTos](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1aaebb72ed189f4caa435574765c86672c)(bool NewValue)|Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.|
|void|[ClearNeedsTos](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149)()|Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.|
|bool|[IsNeedsTosDefaultValue](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57)()|Returns true if NeedsTos_Optional is set and matches the default value.|
|void|[SetNeedsTosToDefault](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5)()|Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.|
|bool &|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a3b7f585517e712ca2d419dade15d259f)()|Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1aa4b43760d25927f3adf0df53c4604900)()|Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a6c98f08799aeec8630d035201a45e4dd)(const bool & DefaultValue)|Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07)(bool & OutValue)|Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetNeedsPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1af1a4b4f8ee677dd3d1175c2464f359c7)()|Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetNeedsPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a7225c7fd9d517b262610f2bb4b0d77b2)()|Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1aa62a048cd9878ee2b33600f7f6ebce9b)(bool NewValue)|Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.|
|void|[ClearNeedsPrivacyPolicy](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee)()|Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.|
|bool|[IsNeedsPrivacyPolicyDefaultValue](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b)()|Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.|
|void|[SetNeedsPrivacyPolicyToDefault](/unreal-plugins/all/structfrhapi__agreementmessage/#structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4)()|Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.|
## Public Attributes



### `AuthSuccess_Optional` <a id="structFRHAPI__AgreementMessage_1aa8d209e82da7a456005582c2badbf561"></a>

`bool FRHAPI_AgreementMessage::AuthSuccess_Optional`






### `AuthSuccess_IsSet` <a id="structFRHAPI__AgreementMessage_1a4bed655f80f9c37f889530f5493c9c98"></a>

`bool FRHAPI_AgreementMessage::AuthSuccess_IsSet`

true if AuthSuccess_Optional has been set to a value




### `ErrorCode` <a id="structFRHAPI__AgreementMessage_1ae83c4271a95b301e2cbf385809e8e3bb"></a>

`FString FRHAPI_AgreementMessage::ErrorCode`






### `Desc` <a id="structFRHAPI__AgreementMessage_1a341feccacab82ba00edf1bc819948b68"></a>

`FString FRHAPI_AgreementMessage::Desc`






### `NeedsEula_Optional` <a id="structFRHAPI__AgreementMessage_1a080b82ee1915127652fd6c4080dae3fb"></a>

`bool FRHAPI_AgreementMessage::NeedsEula_Optional`

Whether the user needs to accept the End User License Agreement.




### `NeedsEula_IsSet` <a id="structFRHAPI__AgreementMessage_1ac42e50d11a3620d0db931ea7cde62345"></a>

`bool FRHAPI_AgreementMessage::NeedsEula_IsSet`

true if NeedsEula_Optional has been set to a value




### `NeedsTos_Optional` <a id="structFRHAPI__AgreementMessage_1a878df1d6fb0437cd07eadad56bd8df08"></a>

`bool FRHAPI_AgreementMessage::NeedsTos_Optional`

Whether the user needs to accept the Terms of Service.




### `NeedsTos_IsSet` <a id="structFRHAPI__AgreementMessage_1abd60f2debe16b2924f731615d3e6a841"></a>

`bool FRHAPI_AgreementMessage::NeedsTos_IsSet`

true if NeedsTos_Optional has been set to a value




### `NeedsPrivacyPolicy_Optional` <a id="structFRHAPI__AgreementMessage_1a99d643a23f43e3f9508584d2cb3c3ecd"></a>

`bool FRHAPI_AgreementMessage::NeedsPrivacyPolicy_Optional`

Whether the user needs to accept the Privacy Policy.




### `NeedsPrivacyPolicy_IsSet` <a id="structFRHAPI__AgreementMessage_1a0fc51c53961a3d1b7b5ff9cbd5784fa0"></a>

`bool FRHAPI_AgreementMessage::NeedsPrivacyPolicy_IsSet`

true if NeedsPrivacyPolicy_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__AgreementMessage_1a7c23aac9b13afd476198e45e0c380cc7"></a>

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



### `WriteJson` <a id="structFRHAPI__AgreementMessage_1a8c963c13ac21dd41a28d5fc01766e7c0"></a>

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



### `GetAuthSuccess` <a id="structFRHAPI__AgreementMessage_1a57397b50391881929fa779675378cae2"></a>

bool & GetAuthSuccess()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AuthSuccess_Optional, regardless of it having been set.




### `GetAuthSuccess` <a id="structFRHAPI__AgreementMessage_1ad52e8bc7849d6105395bd1a4d4949a5d"></a>

const bool & GetAuthSuccess()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AuthSuccess_Optional, regardless of it having been set.




### `GetAuthSuccess` <a id="structFRHAPI__AgreementMessage_1ac0aaa4e2629a8d9ab9544aa0425aff4e"></a>

const bool & GetAuthSuccess(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAuthSuccess` <a id="structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f"></a>

bool GetAuthSuccess(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.




### `GetAuthSuccessOrNull` <a id="structFRHAPI__AgreementMessage_1a52432e93a57aac16076f47f3831141a4"></a>

bool * GetAuthSuccessOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.




### `GetAuthSuccessOrNull` <a id="structFRHAPI__AgreementMessage_1aa8d8eb1c96f6fb36b248543abdad1274"></a>

const bool * GetAuthSuccessOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.




### `SetAuthSuccess` <a id="structFRHAPI__AgreementMessage_1af4944c992022ae18631e32cf3d389ba7"></a>

void SetAuthSuccess(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.




### `ClearAuthSuccess` <a id="structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03"></a>

void ClearAuthSuccess()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.




### `IsAuthSuccessDefaultValue` <a id="structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe"></a>

bool IsAuthSuccessDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AuthSuccess_Optional is set and matches the default value.




### `SetAuthSuccessToDefault` <a id="structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4"></a>

void SetAuthSuccessToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.




### `GetErrorCode` <a id="structFRHAPI__AgreementMessage_1ae24b2e3d39c42e5e5752be0ed0a789f2"></a>

FString & GetErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorCode.




### `GetErrorCode` <a id="structFRHAPI__AgreementMessage_1aed5d205b58e1e319cc9419e46c07d877"></a>

const FString & GetErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorCode.




### `SetErrorCode` <a id="structFRHAPI__AgreementMessage_1a102b46fe2aaf3346b38942636c438f18"></a>

void SetErrorCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ErrorCode.




### `GetDesc` <a id="structFRHAPI__AgreementMessage_1acaedd82cb90517f793cdecea95a9c43b"></a>

FString & GetDesc()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Desc.




### `GetDesc` <a id="structFRHAPI__AgreementMessage_1af80ab5684c0a1a65da856c9419bd5cfe"></a>

const FString & GetDesc()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Desc.




### `SetDesc` <a id="structFRHAPI__AgreementMessage_1a4888e7ffcde8e799094d1d9e4eb349ba"></a>

void SetDesc(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Desc.




### `GetNeedsEula` <a id="structFRHAPI__AgreementMessage_1a450209aff2a672e809bb134e75f2df77"></a>

bool & GetNeedsEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsEula_Optional, regardless of it having been set.




### `GetNeedsEula` <a id="structFRHAPI__AgreementMessage_1a2e49e29ec477f70398248ee5ba43c124"></a>

const bool & GetNeedsEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsEula_Optional, regardless of it having been set.




### `GetNeedsEula` <a id="structFRHAPI__AgreementMessage_1a9e510f79103ca4bc65b1433000aaf59e"></a>

const bool & GetNeedsEula(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNeedsEula` <a id="structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e"></a>

bool GetNeedsEula(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.




### `GetNeedsEulaOrNull` <a id="structFRHAPI__AgreementMessage_1ac42bcf8a7450dbd0222d86ad04dec03e"></a>

bool * GetNeedsEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.




### `GetNeedsEulaOrNull` <a id="structFRHAPI__AgreementMessage_1a5be15659a73afe371d9fed6d617d4dbb"></a>

const bool * GetNeedsEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.




### `SetNeedsEula` <a id="structFRHAPI__AgreementMessage_1a479307d082de00e9aa611168d4ec9287"></a>

void SetNeedsEula(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.




### `ClearNeedsEula` <a id="structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e"></a>

void ClearNeedsEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.




### `IsNeedsEulaDefaultValue` <a id="structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9"></a>

bool IsNeedsEulaDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NeedsEula_Optional is set and matches the default value.




### `SetNeedsEulaToDefault` <a id="structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511"></a>

void SetNeedsEulaToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.




### `GetNeedsTos` <a id="structFRHAPI__AgreementMessage_1a507796f242e8017a626f43a71f5b4a75"></a>

bool & GetNeedsTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsTos_Optional, regardless of it having been set.




### `GetNeedsTos` <a id="structFRHAPI__AgreementMessage_1a33fda52ab7562b9523b69b7c64fae69e"></a>

const bool & GetNeedsTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsTos_Optional, regardless of it having been set.




### `GetNeedsTos` <a id="structFRHAPI__AgreementMessage_1a60098fab0216fb389628ab655cea0d6f"></a>

const bool & GetNeedsTos(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNeedsTos` <a id="structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d"></a>

bool GetNeedsTos(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.




### `GetNeedsTosOrNull` <a id="structFRHAPI__AgreementMessage_1ac1082aa5f2b1d3c4f5b13bc3be2142c6"></a>

bool * GetNeedsTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.




### `GetNeedsTosOrNull` <a id="structFRHAPI__AgreementMessage_1af551aad8d0d0fe36db399fdcd374efd1"></a>

const bool * GetNeedsTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.




### `SetNeedsTos` <a id="structFRHAPI__AgreementMessage_1aaebb72ed189f4caa435574765c86672c"></a>

void SetNeedsTos(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.




### `ClearNeedsTos` <a id="structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149"></a>

void ClearNeedsTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.




### `IsNeedsTosDefaultValue` <a id="structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57"></a>

bool IsNeedsTosDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NeedsTos_Optional is set and matches the default value.




### `SetNeedsTosToDefault` <a id="structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5"></a>

void SetNeedsTosToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__AgreementMessage_1a3b7f585517e712ca2d419dade15d259f"></a>

bool & GetNeedsPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__AgreementMessage_1aa4b43760d25927f3adf0df53c4604900"></a>

const bool & GetNeedsPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__AgreementMessage_1a6c98f08799aeec8630d035201a45e4dd"></a>

const bool & GetNeedsPrivacyPolicy(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNeedsPrivacyPolicy` <a id="structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07"></a>

bool GetNeedsPrivacyPolicy(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.




### `GetNeedsPrivacyPolicyOrNull` <a id="structFRHAPI__AgreementMessage_1af1a4b4f8ee677dd3d1175c2464f359c7"></a>

bool * GetNeedsPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `GetNeedsPrivacyPolicyOrNull` <a id="structFRHAPI__AgreementMessage_1a7225c7fd9d517b262610f2bb4b0d77b2"></a>

const bool * GetNeedsPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `SetNeedsPrivacyPolicy` <a id="structFRHAPI__AgreementMessage_1aa62a048cd9878ee2b33600f7f6ebce9b"></a>

void SetNeedsPrivacyPolicy(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.




### `ClearNeedsPrivacyPolicy` <a id="structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee"></a>

void ClearNeedsPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.




### `IsNeedsPrivacyPolicyDefaultValue` <a id="structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b"></a>

bool IsNeedsPrivacyPolicyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.




### `SetNeedsPrivacyPolicyToDefault` <a id="structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4"></a>

void SetNeedsPrivacyPolicyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.





