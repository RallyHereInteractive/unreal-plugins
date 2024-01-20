---
title: FRHAPI_KVsResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) >|[Kvs_Optional](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a23c8a086c879a75d8a952c3488b1d918)|The list of key/value pairs.|
|bool|[Kvs_IsSet](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1ad6fa29ad0978eb9732f25ab213953c30)|true if Kvs_Optional has been set to a value|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) >|[SecretKvs_Optional](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1af63ae829af8a15d99069b6cd79572b33)|The list of secret key/value pairs.|
|bool|[SecretKvs_IsSet](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a6657f5ba8a24b0a449e8d5edff7d9ec6)|true if SecretKvs_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1afb8e0b14abceded9fd850defcbf1a35f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1ae39b61dfbbae303147faa03e574b1419)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|[GetKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a89088c89a016fb0a7a61c8319d27c015)()|Gets the value of Kvs_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|[GetKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1aa8691628be3e612a49c6fab688ae4618)()|Gets the value of Kvs_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|[GetKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a1db5f7f60d4c5aa2c5188ef462b1e136)(const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & DefaultValue)|Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a4fc3634a4c7053ebd828999729e21b64)(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & OutValue)|Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > *|[GetKvsOrNull](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a4ef08d350364df38ddd5dcea1f2264cf)()|Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > *|[GetKvsOrNull](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a24fb7cbc1e621e21ae332ad73400f5f6)()|Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1ab6cbfbbd3cb494aa73503d5c7d08e04e)(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > NewValue)|Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.|
|void|[ClearKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a3dd1cd2619fd12e0ba2ae5c55fa83022)()|Clears the value of Kvs_Optional and sets Kvs_IsSet to false.|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|[GetSecretKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a7bce7dc5b2d80c7040c503979e68acef)()|Gets the value of SecretKvs_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|[GetSecretKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a9d799237d733889498ddb16e5a3bd758)()|Gets the value of SecretKvs_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|[GetSecretKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a5c56ba563e4e3cad3ec1538fc3ef1740)(const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & DefaultValue)|Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSecretKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1ae7f5bc4bc91895b5cfb879447c31d0d3)(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & OutValue)|Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > *|[GetSecretKvsOrNull](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a1a7c21a46cd22c9c8ec9ab2f8439b19a)()|Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > *|[GetSecretKvsOrNull](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1abbab1521243e292457957d06f6f86d5c)()|Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSecretKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1ad0d654d300ed8e4d24956fb8379abdc4)(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > NewValue)|Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.|
|void|[ClearSecretKvs](/unreal-plugins/all/structfrhapi__kvsresponse/#structFRHAPI__KVsResponse_1a2449a19a3578451c008d6eeba8628fdb)()|Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.|
## Public Attributes



### `Kvs_Optional` <a id="structFRHAPI__KVsResponse_1a23c8a086c879a75d8a952c3488b1d918"></a>

`TArray<FRHAPI_AppSetting> FRHAPI_KVsResponse::Kvs_Optional`

The list of key/value pairs.




### `Kvs_IsSet` <a id="structFRHAPI__KVsResponse_1ad6fa29ad0978eb9732f25ab213953c30"></a>

`bool FRHAPI_KVsResponse::Kvs_IsSet`

true if Kvs_Optional has been set to a value




### `SecretKvs_Optional` <a id="structFRHAPI__KVsResponse_1af63ae829af8a15d99069b6cd79572b33"></a>

`TArray<FRHAPI_AppSetting> FRHAPI_KVsResponse::SecretKvs_Optional`

The list of secret key/value pairs.




### `SecretKvs_IsSet` <a id="structFRHAPI__KVsResponse_1a6657f5ba8a24b0a449e8d5edff7d9ec6"></a>

`bool FRHAPI_KVsResponse::SecretKvs_IsSet`

true if SecretKvs_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__KVsResponse_1afb8e0b14abceded9fd850defcbf1a35f"></a>

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



### `WriteJson` <a id="structFRHAPI__KVsResponse_1ae39b61dfbbae303147faa03e574b1419"></a>

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



### `GetKvs` <a id="structFRHAPI__KVsResponse_1a89088c89a016fb0a7a61c8319d27c015"></a>

TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & GetKvs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Kvs_Optional, regardless of it having been set.




### `GetKvs` <a id="structFRHAPI__KVsResponse_1aa8691628be3e612a49c6fab688ae4618"></a>

const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & GetKvs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Kvs_Optional, regardless of it having been set.




### `GetKvs` <a id="structFRHAPI__KVsResponse_1a1db5f7f60d4c5aa2c5188ef462b1e136"></a>

const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & GetKvs(const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|DefaultValue|

#### Description

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetKvs` <a id="structFRHAPI__KVsResponse_1a4fc3634a4c7053ebd828999729e21b64"></a>

bool GetKvs(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|OutValue|

#### Description

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.




### `GetKvsOrNull` <a id="structFRHAPI__KVsResponse_1a4ef08d350364df38ddd5dcea1f2264cf"></a>

TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > * GetKvsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.




### `GetKvsOrNull` <a id="structFRHAPI__KVsResponse_1a24fb7cbc1e621e21ae332ad73400f5f6"></a>

const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > * GetKvsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.




### `SetKvs` <a id="structFRHAPI__KVsResponse_1ab6cbfbbd3cb494aa73503d5c7d08e04e"></a>

void SetKvs(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) >|NewValue|

#### Description

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.




### `ClearKvs` <a id="structFRHAPI__KVsResponse_1a3dd1cd2619fd12e0ba2ae5c55fa83022"></a>

void ClearKvs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.




### `GetSecretKvs` <a id="structFRHAPI__KVsResponse_1a7bce7dc5b2d80c7040c503979e68acef"></a>

TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & GetSecretKvs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SecretKvs_Optional, regardless of it having been set.




### `GetSecretKvs` <a id="structFRHAPI__KVsResponse_1a9d799237d733889498ddb16e5a3bd758"></a>

const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & GetSecretKvs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SecretKvs_Optional, regardless of it having been set.




### `GetSecretKvs` <a id="structFRHAPI__KVsResponse_1a5c56ba563e4e3cad3ec1538fc3ef1740"></a>

const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & GetSecretKvs(const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|DefaultValue|

#### Description

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSecretKvs` <a id="structFRHAPI__KVsResponse_1ae7f5bc4bc91895b5cfb879447c31d0d3"></a>

bool GetSecretKvs(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > &|OutValue|

#### Description

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.




### `GetSecretKvsOrNull` <a id="structFRHAPI__KVsResponse_1a1a7c21a46cd22c9c8ec9ab2f8439b19a"></a>

TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > * GetSecretKvsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.




### `GetSecretKvsOrNull` <a id="structFRHAPI__KVsResponse_1abbab1521243e292457957d06f6f86d5c"></a>

const TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > * GetSecretKvsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.




### `SetSecretKvs` <a id="structFRHAPI__KVsResponse_1ad0d654d300ed8e4d24956fb8379abdc4"></a>

void SetSecretKvs(TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_AppSetting](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting) >|NewValue|

#### Description

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.




### `ClearSecretKvs` <a id="structFRHAPI__KVsResponse_1a2449a19a3578451c008d6eeba8628fdb"></a>

void ClearSecretKvs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.





