---
title: FRHAPI_JsonObject Struct
---


## Summary
| Kind | View | Description |
|------|------|-------------|
|TSharedPtr< FJsonObject >|[Obj](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a445a9e90881703fe7e9eba61ca348903)||
||[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a1b43baf907fe1c835ca51c6fb841f9e7)()||
||[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1aacbd20e7f05f118d2d199f492339aca8)(TSharedPtr< FJsonObject > InObj)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[TryGetValue](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a43552750a4074651bc9944001d78b2af)(const FString & FieldName)||
|bool|[HasField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a749adfcc3fb9ac3dd29af3b5260995a5)(const FString & FieldName)||
|void|[SetField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a26542291e3e1f3015b3efda8d2706357)(const FString & FieldName, const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|void|[RemoveField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a98fc00e15561fae99bd0ba2bf3a72734)(const FString & FieldName)||
|float|[GetNumberField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1ab78c36b910d90b9c5e2a1d9c361ee109)(const FString & FieldName)||
|bool|[TryGetNumberField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1aece283eddb31c7bf107f34646324e6e2)(const FString & FieldName, float & OutNumber)||
|void|[SetNumberField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1ad37600a7c83b89123abf974a18b58b0a)(const FString & FieldName, float Number)||
|bool|[TryGetIntegerField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a7554fd827253b859f73372da6d5da8ae)(const FString & FieldName, int32 & OutNumber)||
|bool|[TryGetInteger64Field](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a2e742fc43bfa99de1e27221041b3a7e1)(const FString & FieldName, int64 & OutNumber)||
|float|[GetFloatField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a551f86bd05997cf56f31abbb175ced64)(const FString & FieldName)||
|float|[TryGetFloatField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a4612635a672641ca520e740a027e3044)(const FString & FieldName, float & OutNumber)||
|int32|[GetIntegerField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a139c21cafce17a49d4e974b76bbd5aad)(const FString & FieldName)||
|FString|[GetStringField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a3993e987ccdd1938645ae8fd03747797)(const FString & FieldName)||
|bool|[TryGetStringField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a107ef94df2388ffd2362720d0304b704)(const FString & FieldName, FString & OutString)||
|bool|[TryGetStringArrayField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1ae940d411bcad1b6c59ac058a2af5f2f1)(const FString & FieldName, TArray< FString > & OutArray)||
|void|[SetStringField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1aa670aa03fde6fdbb4344572b34ee4ec2)(const FString & FieldName, const FString & StringValue)||
|bool|[GetBoolField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a869a1b10d1049931c60b362b88fd3ea0)(const FString & FieldName)||
|bool|[TryGetBoolField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1ae234ddcc027c4db656c8df41c7cf7066)(const FString & FieldName, bool & OutBool)||
|void|[SetBoolField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1afaf227cb91d5a773d874c04e62822690)(const FString & FieldName, bool InValue)||
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) >|[GetArrayField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a1bce0aa5a1a00957b1b99f8271122eb7)(const FString & FieldName)||
|bool|[TryGetArrayField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a3fdfa71e137759072b9f3fcf8d6a8e41)(const FString & FieldName, TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)||
|void|[SetArrayField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a38f541bd443124d7efc41f67f89e2519)(const FString & FieldName, const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & Array)||
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[GetObjectField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1adc61629e6acf76fc3eb06f5210974663)(const FString & FieldName)||
|bool|[TryGetObjectField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a2d07b53a0dd9124cba9b6b428fa23c28)(const FString & FieldName, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)||
|void|[SetObjectField](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1acd260efcbf9f44d8d4c5dee8c0d3a60d)(const FString & FieldName, const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & JsonObject)||
|void|[SetObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1aced154f8a7bb674164275336aca25713)(const TSharedPtr< FJsonObject > NewObj)||
|TSharedPtr< FJsonObject >|[GetObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a59d441e2a36e2031f59612843657acd7)()||
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[CreateFromUnrealObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject_1a6cb09c0a8086f28ac9c0b61d8fc5391e)(TSharedPtr< FJsonObject > NewObj)||
## Private Attributes



### `Obj` <a id="structFRHAPI__JsonObject_1a445a9e90881703fe7e9eba61ca348903"></a>

`TSharedPtr<FJsonObject> FRHAPI_JsonObject::Obj`







## Public Functions



### `FRHAPI_JsonObject` <a id="structFRHAPI__JsonObject_1a1b43baf907fe1c835ca51c6fb841f9e7"></a>

 FRHAPI_JsonObject()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `FRHAPI_JsonObject` <a id="structFRHAPI__JsonObject_1aacbd20e7f05f118d2d199f492339aca8"></a>

 FRHAPI_JsonObject(TSharedPtr< FJsonObject > InObj)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< FJsonObject >|InObj|

#### Description






### `TryGetValue` <a id="structFRHAPI__JsonObject_1a43552750a4074651bc9944001d78b2af"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) TryGetValue(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `HasField` <a id="structFRHAPI__JsonObject_1a749adfcc3fb9ac3dd29af3b5260995a5"></a>

bool HasField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `SetField` <a id="structFRHAPI__JsonObject_1a26542291e3e1f3015b3efda8d2706357"></a>

void SetField(const FString & FieldName, const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `RemoveField` <a id="structFRHAPI__JsonObject_1a98fc00e15561fae99bd0ba2bf3a72734"></a>

void RemoveField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `GetNumberField` <a id="structFRHAPI__JsonObject_1ab78c36b910d90b9c5e2a1d9c361ee109"></a>

float GetNumberField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `TryGetNumberField` <a id="structFRHAPI__JsonObject_1aece283eddb31c7bf107f34646324e6e2"></a>

bool TryGetNumberField(const FString & FieldName, float & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|float &|OutNumber|

#### Description






### `SetNumberField` <a id="structFRHAPI__JsonObject_1ad37600a7c83b89123abf974a18b58b0a"></a>

void SetNumberField(const FString & FieldName, float Number)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|float|Number|

#### Description






### `TryGetIntegerField` <a id="structFRHAPI__JsonObject_1a7554fd827253b859f73372da6d5da8ae"></a>

bool TryGetIntegerField(const FString & FieldName, int32 & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|int32 &|OutNumber|

#### Description






### `TryGetInteger64Field` <a id="structFRHAPI__JsonObject_1a2e742fc43bfa99de1e27221041b3a7e1"></a>

bool TryGetInteger64Field(const FString & FieldName, int64 & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|int64 &|OutNumber|

#### Description






### `GetFloatField` <a id="structFRHAPI__JsonObject_1a551f86bd05997cf56f31abbb175ced64"></a>

float GetFloatField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `TryGetFloatField` <a id="structFRHAPI__JsonObject_1a4612635a672641ca520e740a027e3044"></a>

float TryGetFloatField(const FString & FieldName, float & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|float &|OutNumber|

#### Description






### `GetIntegerField` <a id="structFRHAPI__JsonObject_1a139c21cafce17a49d4e974b76bbd5aad"></a>

int32 GetIntegerField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `GetStringField` <a id="structFRHAPI__JsonObject_1a3993e987ccdd1938645ae8fd03747797"></a>

FString GetStringField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `TryGetStringField` <a id="structFRHAPI__JsonObject_1a107ef94df2388ffd2362720d0304b704"></a>

bool TryGetStringField(const FString & FieldName, FString & OutString)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|FString &|OutString|

#### Description






### `TryGetStringArrayField` <a id="structFRHAPI__JsonObject_1ae940d411bcad1b6c59ac058a2af5f2f1"></a>

bool TryGetStringArrayField(const FString & FieldName, TArray< FString > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|TArray< FString > &|OutArray|

#### Description






### `SetStringField` <a id="structFRHAPI__JsonObject_1aa670aa03fde6fdbb4344572b34ee4ec2"></a>

void SetStringField(const FString & FieldName, const FString & StringValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|const FString &|StringValue|

#### Description






### `GetBoolField` <a id="structFRHAPI__JsonObject_1a869a1b10d1049931c60b362b88fd3ea0"></a>

bool GetBoolField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `TryGetBoolField` <a id="structFRHAPI__JsonObject_1ae234ddcc027c4db656c8df41c7cf7066"></a>

bool TryGetBoolField(const FString & FieldName, bool & OutBool)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|bool &|OutBool|

#### Description






### `SetBoolField` <a id="structFRHAPI__JsonObject_1afaf227cb91d5a773d874c04e62822690"></a>

void SetBoolField(const FString & FieldName, bool InValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|bool|InValue|

#### Description






### `GetArrayField` <a id="structFRHAPI__JsonObject_1a1bce0aa5a1a00957b1b99f8271122eb7"></a>

TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > GetArrayField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `TryGetArrayField` <a id="structFRHAPI__JsonObject_1a3fdfa71e137759072b9f3fcf8d6a8e41"></a>

bool TryGetArrayField(const FString & FieldName, TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|OutArray|

#### Description






### `SetArrayField` <a id="structFRHAPI__JsonObject_1a38f541bd443124d7efc41f67f89e2519"></a>

void SetArrayField(const FString & FieldName, const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & Array)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|Array|

#### Description






### `GetObjectField` <a id="structFRHAPI__JsonObject_1adc61629e6acf76fc3eb06f5210974663"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) GetObjectField(const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|

#### Description






### `TryGetObjectField` <a id="structFRHAPI__JsonObject_1a2d07b53a0dd9124cba9b6b428fa23c28"></a>

bool TryGetObjectField(const FString & FieldName, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutObject|

#### Description






### `SetObjectField` <a id="structFRHAPI__JsonObject_1acd260efcbf9f44d8d4c5dee8c0d3a60d"></a>

void SetObjectField(const FString & FieldName, const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & JsonObject)

#### Parameters

| Type | Name |
|------|------|
|const FString &|FieldName|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|JsonObject|

#### Description






### `SetObject` <a id="structFRHAPI__JsonObject_1aced154f8a7bb674164275336aca25713"></a>

void SetObject(const TSharedPtr< FJsonObject > NewObj)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonObject >|NewObj|

#### Description






### `GetObject` <a id="structFRHAPI__JsonObject_1a59d441e2a36e2031f59612843657acd7"></a>

TSharedPtr< FJsonObject > GetObject()

#### Parameters

| Type | Name |
|------|------|

#### Description







## Public Static Functions



### `CreateFromUnrealObject` <a id="structFRHAPI__JsonObject_1a6cb09c0a8086f28ac9c0b61d8fc5391e"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) CreateFromUnrealObject(TSharedPtr< FJsonObject > NewObj)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< FJsonObject >|NewObj|

#### Description







