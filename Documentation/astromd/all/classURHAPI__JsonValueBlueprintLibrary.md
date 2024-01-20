---
title: URHAPI_JsonValueBlueprintLibrary Class
---Inherits from UBlueprintFunctionLibrary



## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[FRHAPI_JsonValueToString](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a41c6ef3c2485d5f96ef555211de24887)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & InValue, FString & OutString)||
|bool|[StringToFRHAPI_JsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aa7ab4b0c132be0f8475e85390976ab49)(const FString & InString, [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & OutValue)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[MakeNumberJsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a7a5760317d60f71dfe2ed07e17112a49)(float InNumber)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[MakeStringJsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a377d8e2022f1d370c36889999451565a)(const FString & InString)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[MakeBoolJsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a402bccb7ce6c565c6a1b73d478e5068d)(const FString & InString, bool InBool)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[MakeNullJsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1af8398b45226b3214ca6355fa376207bb)(const FString & InString)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[MakeArrayJsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aff8e884434a5f2f0fb589234d00ec7f7)(const FString & InString, const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & InArray)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[MakeObjectJsonValue](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aa887c8f2062d12ee3a2e8e1910a3c251)(const FString & InString, const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & InObject)||
|float|[AsNumber](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a99ad845ae1e8e4ffde775168d81d0623)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|FString|[AsString](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1afd30ef5500ab675cd97c0053ac7050f4)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|bool|[AsBool](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a211564baa612db591d081aa47002ec41)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|bool|[IsNull](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aee9716ab757e758126e38cbe021a541f)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) >|[AsArray](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1ad943f06480c7cd97e0c1ae09f7f67766)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[AsObject](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1ac334d4be5b44a88e09480988c712adb4)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
|bool|[TryGetNumber](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a50ffd952dd219b5fbb69ff6309c503bb)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, float & OutNumber)||
|bool|[TryGetInteger](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a1192b0f295ceb8742deec799f67b2027)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, int32 & OutInteger)||
|bool|[TryGetInteger64](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a5d69ac78d5fb5d323efbd740a42896b0)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, int64 & OutInteger64)||
|bool|[TryGetString](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1abf9d3eb42d9a115beb05939a9716cb3f)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, FString & OutString)||
|bool|[TryGetBool](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a9581b41103c9bd422e4f569e97ad0bd9)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, bool & OutBool)||
|bool|[TryGetArray](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aa7d4af6817fe186958dfeabdbd9d1484)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)||
|bool|[TryGetObject](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aec689577a3aea0c8d3fd772432a24baf)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)||
|bool|[CompareEqual](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1a92a1c177d265d6c28a30679483da99cd)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & A, const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & B)||
|ERHAPI_JsonValueType|[GetType](/unreal-plugins/all/classurhapi__jsonvalueblueprintlibrary/#classURHAPI__JsonValueBlueprintLibrary_1aaedf50ed5c833a625f23285729615b1d)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)||
## Public Static Functions



### `FRHAPI_JsonValueToString` <a id="classURHAPI__JsonValueBlueprintLibrary_1a41c6ef3c2485d5f96ef555211de24887"></a>

bool FRHAPI_JsonValueToString(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & InValue, FString & OutString)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|InValue|
|FString &|OutString|

#### Description






### `StringToFRHAPI_JsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1aa7ab4b0c132be0f8475e85390976ab49"></a>

bool StringToFRHAPI_JsonValue(const FString & InString, [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|OutValue|

#### Description






### `MakeNumberJsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1a7a5760317d60f71dfe2ed07e17112a49"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) MakeNumberJsonValue(float InNumber)

#### Parameters

| Type | Name |
|------|------|
|float|InNumber|

#### Description






### `MakeStringJsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1a377d8e2022f1d370c36889999451565a"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) MakeStringJsonValue(const FString & InString)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|

#### Description






### `MakeBoolJsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1a402bccb7ce6c565c6a1b73d478e5068d"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) MakeBoolJsonValue(const FString & InString, bool InBool)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|
|bool|InBool|

#### Description






### `MakeNullJsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1af8398b45226b3214ca6355fa376207bb"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) MakeNullJsonValue(const FString & InString)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|

#### Description






### `MakeArrayJsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1aff8e884434a5f2f0fb589234d00ec7f7"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) MakeArrayJsonValue(const FString & InString, const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & InArray)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|InArray|

#### Description






### `MakeObjectJsonValue` <a id="classURHAPI__JsonValueBlueprintLibrary_1aa887c8f2062d12ee3a2e8e1910a3c251"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) MakeObjectJsonValue(const FString & InString, const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & InObject)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InString|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|InObject|

#### Description






### `AsNumber` <a id="classURHAPI__JsonValueBlueprintLibrary_1a99ad845ae1e8e4ffde775168d81d0623"></a>

float AsNumber(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `AsString` <a id="classURHAPI__JsonValueBlueprintLibrary_1afd30ef5500ab675cd97c0053ac7050f4"></a>

FString AsString(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `AsBool` <a id="classURHAPI__JsonValueBlueprintLibrary_1a211564baa612db591d081aa47002ec41"></a>

bool AsBool(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `IsNull` <a id="classURHAPI__JsonValueBlueprintLibrary_1aee9716ab757e758126e38cbe021a541f"></a>

bool IsNull(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `AsArray` <a id="classURHAPI__JsonValueBlueprintLibrary_1ad943f06480c7cd97e0c1ae09f7f67766"></a>

TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > AsArray(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `AsObject` <a id="classURHAPI__JsonValueBlueprintLibrary_1ac334d4be5b44a88e09480988c712adb4"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) AsObject(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description






### `TryGetNumber` <a id="classURHAPI__JsonValueBlueprintLibrary_1a50ffd952dd219b5fbb69ff6309c503bb"></a>

bool TryGetNumber(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, float & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|float &|OutNumber|

#### Description






### `TryGetInteger` <a id="classURHAPI__JsonValueBlueprintLibrary_1a1192b0f295ceb8742deec799f67b2027"></a>

bool TryGetInteger(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, int32 & OutInteger)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|int32 &|OutInteger|

#### Description






### `TryGetInteger64` <a id="classURHAPI__JsonValueBlueprintLibrary_1a5d69ac78d5fb5d323efbd740a42896b0"></a>

bool TryGetInteger64(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, int64 & OutInteger64)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|int64 &|OutInteger64|

#### Description






### `TryGetString` <a id="classURHAPI__JsonValueBlueprintLibrary_1abf9d3eb42d9a115beb05939a9716cb3f"></a>

bool TryGetString(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, FString & OutString)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|FString &|OutString|

#### Description






### `TryGetBool` <a id="classURHAPI__JsonValueBlueprintLibrary_1a9581b41103c9bd422e4f569e97ad0bd9"></a>

bool TryGetBool(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, bool & OutBool)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|bool &|OutBool|

#### Description






### `TryGetArray` <a id="classURHAPI__JsonValueBlueprintLibrary_1aa7d4af6817fe186958dfeabdbd9d1484"></a>

bool TryGetArray(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|OutArray|

#### Description






### `TryGetObject` <a id="classURHAPI__JsonValueBlueprintLibrary_1aec689577a3aea0c8d3fd772432a24baf"></a>

bool TryGetObject(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value, [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutObject|

#### Description






### `CompareEqual` <a id="classURHAPI__JsonValueBlueprintLibrary_1a92a1c177d265d6c28a30679483da99cd"></a>

bool CompareEqual(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & A, const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & B)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|A|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|B|

#### Description







## Public Functions



### `GetType` <a id="classURHAPI__JsonValueBlueprintLibrary_1aaedf50ed5c833a625f23285729615b1d"></a>

ERHAPI_JsonValueType GetType(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Value)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Value|

#### Description







