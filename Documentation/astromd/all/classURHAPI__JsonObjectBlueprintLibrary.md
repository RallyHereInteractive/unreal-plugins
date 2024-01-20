---
title: URHAPI_JsonObjectBlueprintLibrary Class
---Inherits from UBlueprintFunctionLibrary



## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[FRHAPI_JsonObjectToString](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ad73ae18fbb1815cfaff61360292eb2ac)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & InObject, FString & OutString)||
|bool|[StringToFRHAPI_JsonObject](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a13f69157c2d06a3cb811bc159132d586)(const FString & InString, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)||
|bool|[HasField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ad47180a09f5fc4d3d1ef92b30093d222)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|void|[SetField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ae2def6a00744bfc3453138be1011e257)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|void|[RemoveField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a1068c894abaee96247f61e5d9bccc0d2)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|float|[GetNumberField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ac5bb148295a78b79884b51127bf140c6)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|bool|[TryGeNumberField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1aa1eb776355a7075498394a9f4e022b33)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, float & OutNumber)||
|void|[SetNumberField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a6e5d16926cd63ed58e5b95a31380f156)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, float Number)||
|bool|[TryGetIntegerField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a7230932ed59535298069453ea891d07f)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, int32 & OutInteger)||
|bool|[TryGetInteger64Field](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a02c31e08d99d00f7c13fdc2815cab400)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, int64 & OutInteger64)||
|FString|[GetStringField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ad2df6bb6c3d14c3b2c133d7488965296)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|bool|[TryGetStringField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a6166c4e03a0622facd9e8f31b8437470)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, FString & OutString)||
|bool|[TryGetStringArrayField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a801a840d2d1fa635cb7db6ef18ed91ec)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, TArray< FString > & OutArray)||
|void|[SetStringField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a2b6cf6402cfc5381dc9541f96449d9b4)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const FString & StringValue)||
|bool|[GetBoolField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ac600c30e5bb05aa7973741a311e309e9)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|bool|[TryGetBoolField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a361a1a90b8cc72be1fa31c2f9f88dc1e)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, bool & OutBool)||
|void|[SetBoolField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a2eb1fe4e456a80d0356513f615f2f6a0)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, bool InValue)||
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) >|[GetArrayField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a942899a95322fe6d4d180b891b4b6881)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|bool|[TryGetArrayField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a4e40c1f94d022f1f05680118a3437bf9)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)||
|void|[SetArrayField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a5eaec0b1d9f77a0475a6151667cf4a8e)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & Array)||
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[GetObjectField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ac2aff1d03e8eae26d28a01bd969e2564)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
|bool|[TryGetObjectField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1a8587f30f75168f6a5b099af360b78943)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)||
|void|[SetObjectField](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1ae50b2883c472d95aa45ad3ac243a1cee)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & JsonObject)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[TryGetValue](/unreal-plugins/all/classurhapi__jsonobjectblueprintlibrary/#classURHAPI__JsonObjectBlueprintLibrary_1abf2bfcdd881163fa42783230acad1756)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)||
## Public Static Functions



### `FRHAPI_JsonObjectToString` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ad73ae18fbb1815cfaff61360292eb2ac"></a>

bool FRHAPI_JsonObjectToString(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & InObject, FString & OutString)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|InObject|
|FString &|OutString|

#### Description






### `StringToFRHAPI_JsonObject` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a13f69157c2d06a3cb811bc159132d586"></a>

bool StringToFRHAPI_JsonObject(const FString & InString, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutObject|

#### Description






### `HasField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ad47180a09f5fc4d3d1ef92b30093d222"></a>

bool HasField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `SetField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ae2def6a00744bfc3453138be1011e257"></a>

void SetField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `RemoveField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a1068c894abaee96247f61e5d9bccc0d2"></a>

void RemoveField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `GetNumberField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ac5bb148295a78b79884b51127bf140c6"></a>

float GetNumberField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `TryGeNumberField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1aa1eb776355a7075498394a9f4e022b33"></a>

bool TryGeNumberField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, float & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|float &|OutNumber|

#### Description






### `SetNumberField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a6e5d16926cd63ed58e5b95a31380f156"></a>

void SetNumberField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, float Number)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|float|Number|

#### Description






### `TryGetIntegerField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a7230932ed59535298069453ea891d07f"></a>

bool TryGetIntegerField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, int32 & OutInteger)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|int32 &|OutInteger|

#### Description






### `TryGetInteger64Field` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a02c31e08d99d00f7c13fdc2815cab400"></a>

bool TryGetInteger64Field(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, int64 & OutInteger64)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|int64 &|OutInteger64|

#### Description






### `GetStringField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ad2df6bb6c3d14c3b2c133d7488965296"></a>

FString GetStringField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `TryGetStringField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a6166c4e03a0622facd9e8f31b8437470"></a>

bool TryGetStringField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, FString & OutString)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|FString &|OutString|

#### Description






### `TryGetStringArrayField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a801a840d2d1fa635cb7db6ef18ed91ec"></a>

bool TryGetStringArrayField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, TArray< FString > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|TArray< FString > &|OutArray|

#### Description






### `SetStringField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a2b6cf6402cfc5381dc9541f96449d9b4"></a>

void SetStringField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const FString & StringValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|const FString &|StringValue|

#### Description






### `GetBoolField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ac600c30e5bb05aa7973741a311e309e9"></a>

bool GetBoolField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `TryGetBoolField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a361a1a90b8cc72be1fa31c2f9f88dc1e"></a>

bool TryGetBoolField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, bool & OutBool)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|bool &|OutBool|

#### Description






### `SetBoolField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a2eb1fe4e456a80d0356513f615f2f6a0"></a>

void SetBoolField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, bool InValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|bool|InValue|

#### Description






### `GetArrayField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a942899a95322fe6d4d180b891b4b6881"></a>

TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > GetArrayField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `TryGetArrayField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a4e40c1f94d022f1f05680118a3437bf9"></a>

bool TryGetArrayField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|OutArray|

#### Description






### `SetArrayField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a5eaec0b1d9f77a0475a6151667cf4a8e"></a>

void SetArrayField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & Array)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|Array|

#### Description






### `GetObjectField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ac2aff1d03e8eae26d28a01bd969e2564"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) GetObjectField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description






### `TryGetObjectField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1a8587f30f75168f6a5b099af360b78943"></a>

bool TryGetObjectField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutObject|

#### Description






### `SetObjectField` <a id="classURHAPI__JsonObjectBlueprintLibrary_1ae50b2883c472d95aa45ad3ac243a1cee"></a>

void SetObjectField(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName, const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & JsonObject)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|JsonObject|

#### Description







## Public Functions



### `TryGetValue` <a id="classURHAPI__JsonObjectBlueprintLibrary_1abf2bfcdd881163fa42783230acad1756"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) TryGetValue(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & Object, const FString & FieldName)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|Object|
|const FString &|FieldName|

#### Description







