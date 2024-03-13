---
title: FRHAPI_JsonValue Struct
---


## Summary
| Kind | View | Description |
|------|------|-------------|
|TSharedPtr< FJsonValue >|[Value](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a744f36aede2f8997b904d99bedb416c6)||
||[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a56fea9798340d482054a3d27081131e0)()||
||[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a2a9bb03c15f203495a2d1d96d3cc5d18)(TSharedPtr< FJsonValue > InValue)||
|float|[AsNumber](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a38bfa1ea49cb9b0f2b1fc3272307e1c4)()||
|FString|[AsString](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a58dbdd8635073eb4b4d7ce3696e876a7)()||
|bool|[AsBool](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a89bea2ad43f78c7bc7d948dd64558bc2)()||
|bool|[IsNull](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ab75c9d1a7e2eb91d33143a663177e380)()||
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) >|[AsArray](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1af5ec8da6223d2789cc147e056fafcc6f)()||
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[AsObject](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a777a41099bc199fc1a65b47944e69e5e)()||
|ERHAPI_JsonValueType|[GetType](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ab80c309121940569565bf0845dca9204)()||
|bool|[TryGetNumber](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ac00b86f5106274b316d1642ce6d9c8a2)(float & OutNumber)||
|bool|[TryGetInteger](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a8bfa62fd1f0e5fae2dbb8926bcb14a80)(int32 & OutNumber)||
|bool|[TryGetInteger64](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a44795010a34287037c6b01939d9b6e19)(int64 & OutNumber)||
|bool|[TryGetFloat](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a790ae84c8d2b7072633bfe832140ae7e)(float & OutNumber)||
|bool|[TryGetNumber](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1afe1928e169d2d08e2d06f81012bcce92)(int32 & OutNumber)||
|bool|[TryGetString](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a2ce068c90b20574ba04368538b12863c)(FString & OutString)||
|bool|[TryGetBool](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1aef6c42f6674f10495ac3d33cb90a2b6e)(bool & OutBool)||
|bool|[TryGetArray](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a5bc195f85e08c6f214ae2ca942f93b5b)(TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)||
|bool|[TryGetObject](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ae086faddac9b0c94e1f0661e30019852)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)||
|void|[SetValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ad04272a518ebe27d792f5b080e0169dc)(const TSharedPtr< FJsonValue > NewValue)||
|TSharedPtr< FJsonValue >|[GetValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1a8c63b74e3ba1a7ade9ed576bae0e9ff3)()||
|bool|[CompareEqual](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ae780943462794adf59cccb8e5eda0f6f)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Other)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[CreateFromUnrealValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue_1ab254ed449daa3700278c1b0efb1943c6)(TSharedPtr< FJsonValue > NewVal)||
## Private Attributes



### `Value` <a id="structFRHAPI__JsonValue_1a744f36aede2f8997b904d99bedb416c6"></a>

`TSharedPtr<FJsonValue> FRHAPI_JsonValue::Value`







## Public Functions



### `FRHAPI_JsonValue` <a id="structFRHAPI__JsonValue_1a56fea9798340d482054a3d27081131e0"></a>

 FRHAPI_JsonValue()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `FRHAPI_JsonValue` <a id="structFRHAPI__JsonValue_1a2a9bb03c15f203495a2d1d96d3cc5d18"></a>

 FRHAPI_JsonValue(TSharedPtr< FJsonValue > InValue)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< FJsonValue >|InValue|

#### Description






### `AsNumber` <a id="structFRHAPI__JsonValue_1a38bfa1ea49cb9b0f2b1fc3272307e1c4"></a>

float AsNumber()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AsString` <a id="structFRHAPI__JsonValue_1a58dbdd8635073eb4b4d7ce3696e876a7"></a>

FString AsString()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AsBool` <a id="structFRHAPI__JsonValue_1a89bea2ad43f78c7bc7d948dd64558bc2"></a>

bool AsBool()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `IsNull` <a id="structFRHAPI__JsonValue_1ab75c9d1a7e2eb91d33143a663177e380"></a>

bool IsNull()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AsArray` <a id="structFRHAPI__JsonValue_1af5ec8da6223d2789cc147e056fafcc6f"></a>

TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > AsArray()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AsObject` <a id="structFRHAPI__JsonValue_1a777a41099bc199fc1a65b47944e69e5e"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) AsObject()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `GetType` <a id="structFRHAPI__JsonValue_1ab80c309121940569565bf0845dca9204"></a>

ERHAPI_JsonValueType GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `TryGetNumber` <a id="structFRHAPI__JsonValue_1ac00b86f5106274b316d1642ce6d9c8a2"></a>

bool TryGetNumber(float & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|float &|OutNumber|

#### Description






### `TryGetInteger` <a id="structFRHAPI__JsonValue_1a8bfa62fd1f0e5fae2dbb8926bcb14a80"></a>

bool TryGetInteger(int32 & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutNumber|

#### Description






### `TryGetInteger64` <a id="structFRHAPI__JsonValue_1a44795010a34287037c6b01939d9b6e19"></a>

bool TryGetInteger64(int64 & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutNumber|

#### Description






### `TryGetFloat` <a id="structFRHAPI__JsonValue_1a790ae84c8d2b7072633bfe832140ae7e"></a>

bool TryGetFloat(float & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|float &|OutNumber|

#### Description






### `TryGetNumber` <a id="structFRHAPI__JsonValue_1afe1928e169d2d08e2d06f81012bcce92"></a>

bool TryGetNumber(int32 & OutNumber)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutNumber|

#### Description






### `TryGetString` <a id="structFRHAPI__JsonValue_1a2ce068c90b20574ba04368538b12863c"></a>

bool TryGetString(FString & OutString)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutString|

#### Description






### `TryGetBool` <a id="structFRHAPI__JsonValue_1aef6c42f6674f10495ac3d33cb90a2b6e"></a>

bool TryGetBool(bool & OutBool)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutBool|

#### Description






### `TryGetArray` <a id="structFRHAPI__JsonValue_1a5bc195f85e08c6f214ae2ca942f93b5b"></a>

bool TryGetArray(TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|OutArray|

#### Description






### `TryGetObject` <a id="structFRHAPI__JsonValue_1ae086faddac9b0c94e1f0661e30019852"></a>

bool TryGetObject([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutObject)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutObject|

#### Description






### `SetValue` <a id="structFRHAPI__JsonValue_1ad04272a518ebe27d792f5b080e0169dc"></a>

void SetValue(const TSharedPtr< FJsonValue > NewValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue >|NewValue|

#### Description






### `GetValue` <a id="structFRHAPI__JsonValue_1a8c63b74e3ba1a7ade9ed576bae0e9ff3"></a>

TSharedPtr< FJsonValue > GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `CompareEqual` <a id="structFRHAPI__JsonValue_1ae780943462794adf59cccb8e5eda0f6f"></a>

bool CompareEqual(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & Other)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|Other|

#### Description







## Public Static Functions



### `CreateFromUnrealValue` <a id="structFRHAPI__JsonValue_1ab254ed449daa3700278c1b0efb1943c6"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) CreateFromUnrealValue(TSharedPtr< FJsonValue > NewVal)

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< FJsonValue >|NewVal|

#### Description







