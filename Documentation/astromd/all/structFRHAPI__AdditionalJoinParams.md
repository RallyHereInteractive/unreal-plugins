---
title: FRHAPI_AdditionalJoinParams Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Additional parameters to apply to a matchmaking ticket.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, float >|[DoubleArgs_Optional](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83)|Additional double arguments to add to the matchmaking ticket.|
|bool|[DoubleArgs_IsSet](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707)|true if DoubleArgs_Optional has been set to a value|
|TMap< FString, FString >|[StringArgs_Optional](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4)|Additional string arguments to add to the matchmaking ticket.|
|bool|[StringArgs_IsSet](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d)|true if StringArgs_Optional has been set to a value|
|TArray< FString >|[Tags_Optional](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3)|Additional tags to add to the matchmaking ticket.|
|bool|[Tags_IsSet](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6)|true if Tags_Optional has been set to a value|
|TMap< FString, FString >|[Extensions_Optional](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd)|Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.|
|bool|[Extensions_IsSet](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83)|true if Extensions_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ae23599829e73ae580a2f7b8a1425fbb7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1abe2f6320318b53f510d6309a0a6f5fcf)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, float > &|[GetDoubleArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1aabe7c646e550db8df4bc5e1782bbae8c)()|Gets the value of DoubleArgs_Optional, regardless of it having been set.|
|const TMap< FString, float > &|[GetDoubleArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a84f4c7a3e8523c80145c8da26b042b3a)()|Gets the value of DoubleArgs_Optional, regardless of it having been set.|
|const TMap< FString, float > &|[GetDoubleArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ad1ba115ea7a2a9eee148419c490d27ec)(const TMap< FString, float > & DefaultValue)|Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDoubleArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b)(TMap< FString, float > & OutValue)|Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, float > *|[GetDoubleArgsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a1929b09bc94153c1709b04a34cb5f579)()|Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, float > *|[GetDoubleArgsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1aa582bc773b05c745ba2cf92f1a9d2a4d)()|Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDoubleArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ac97e2acece0a36ef4e4a2369569370e0)(TMap< FString, float > NewValue)|Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.|
|void|[ClearDoubleArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)()|Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.|
|TMap< FString, FString > &|[GetStringArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1aee56142e4ede519e524b6e2e176b2902)()|Gets the value of StringArgs_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetStringArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a64563214481a17493c6fbe4853c449e8)()|Gets the value of StringArgs_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetStringArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a37ac752248e252d0379f18a221128580)(const TMap< FString, FString > & DefaultValue)|Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStringArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetStringArgsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1aa93e031a5878f950eb64e0fd1e05227d)()|Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetStringArgsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a0c3a1bf622363576124c7619b33d89f6)()|Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStringArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a079e475c01f6f53511acedfd93b1b4c0)(TMap< FString, FString > NewValue)|Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.|
|void|[ClearStringArgs](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)()|Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.|
|TArray< FString > &|[GetTags](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ac1caf9793e68f022ece1f7f189161d42)()|Gets the value of Tags_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetTags](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a5d2c0934b594959c6d870d8e06b1876c)()|Gets the value of Tags_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetTags](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ab3c6e6203999cd0cdb79b02d6a4bec5f)(const TArray< FString > & DefaultValue)|Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTags](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3)(TArray< FString > & OutValue)|Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.|
|TArray< FString > *|[GetTagsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a817f369f070e33e0a55d356292fba64f)()|Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< FString > *|[GetTagsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a39662fcd9d3af849292d5d5793a08d54)()|Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTags](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a1e71de03744774d573b785c8f1678f4a)(TArray< FString > NewValue)|Sets the value of Tags_Optional and also sets Tags_IsSet to true.|
|void|[ClearTags](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)()|Clears the value of Tags_Optional and sets Tags_IsSet to false.|
|TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a2af14fcbfccaf8733a3d0a9c511debdb)()|Gets the value of Extensions_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a4d202329f362922798012b8ca3f8784b)()|Gets the value of Extensions_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ab60908d74a79b88788cc2e9993203c71)(const TMap< FString, FString > & DefaultValue)|Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExtensions](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetExtensionsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1a718fce2b4a063aa53b92047ad35de12a)()|Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetExtensionsOrNull](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ab61518d1a59cd1cd9305364dd88d4cb1)()|Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExtensions](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1ae342550ce74edaad074ce99670188d23)(TMap< FString, FString > NewValue)|Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.|
|void|[ClearExtensions](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)()|Clears the value of Extensions_Optional and sets Extensions_IsSet to false.|
## Public Attributes



### `DoubleArgs_Optional` <a id="structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83"></a>

`TMap<FString, float> FRHAPI_AdditionalJoinParams::DoubleArgs_Optional`

Additional double arguments to add to the matchmaking ticket.




### `DoubleArgs_IsSet` <a id="structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707"></a>

`bool FRHAPI_AdditionalJoinParams::DoubleArgs_IsSet`

true if DoubleArgs_Optional has been set to a value




### `StringArgs_Optional` <a id="structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4"></a>

`TMap<FString, FString> FRHAPI_AdditionalJoinParams::StringArgs_Optional`

Additional string arguments to add to the matchmaking ticket.




### `StringArgs_IsSet` <a id="structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d"></a>

`bool FRHAPI_AdditionalJoinParams::StringArgs_IsSet`

true if StringArgs_Optional has been set to a value




### `Tags_Optional` <a id="structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3"></a>

`TArray<FString> FRHAPI_AdditionalJoinParams::Tags_Optional`

Additional tags to add to the matchmaking ticket.




### `Tags_IsSet` <a id="structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6"></a>

`bool FRHAPI_AdditionalJoinParams::Tags_IsSet`

true if Tags_Optional has been set to a value




### `Extensions_Optional` <a id="structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd"></a>

`TMap<FString, FString> FRHAPI_AdditionalJoinParams::Extensions_Optional`

Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.




### `Extensions_IsSet` <a id="structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83"></a>

`bool FRHAPI_AdditionalJoinParams::Extensions_IsSet`

true if Extensions_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__AdditionalJoinParams_1ae23599829e73ae580a2f7b8a1425fbb7"></a>

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



### `WriteJson` <a id="structFRHAPI__AdditionalJoinParams_1abe2f6320318b53f510d6309a0a6f5fcf"></a>

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



### `GetDoubleArgs` <a id="structFRHAPI__AdditionalJoinParams_1aabe7c646e550db8df4bc5e1782bbae8c"></a>

TMap< FString, float > & GetDoubleArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DoubleArgs_Optional, regardless of it having been set.




### `GetDoubleArgs` <a id="structFRHAPI__AdditionalJoinParams_1a84f4c7a3e8523c80145c8da26b042b3a"></a>

const TMap< FString, float > & GetDoubleArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DoubleArgs_Optional, regardless of it having been set.




### `GetDoubleArgs` <a id="structFRHAPI__AdditionalJoinParams_1ad1ba115ea7a2a9eee148419c490d27ec"></a>

const TMap< FString, float > & GetDoubleArgs(const TMap< FString, float > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, float > &|DefaultValue|

#### Description

Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDoubleArgs` <a id="structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b"></a>

bool GetDoubleArgs(TMap< FString, float > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, float > &|OutValue|

#### Description

Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.




### `GetDoubleArgsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1a1929b09bc94153c1709b04a34cb5f579"></a>

TMap< FString, float > * GetDoubleArgsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.




### `GetDoubleArgsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1aa582bc773b05c745ba2cf92f1a9d2a4d"></a>

const TMap< FString, float > * GetDoubleArgsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.




### `SetDoubleArgs` <a id="structFRHAPI__AdditionalJoinParams_1ac97e2acece0a36ef4e4a2369569370e0"></a>

void SetDoubleArgs(TMap< FString, float > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, float >|NewValue|

#### Description

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.




### `ClearDoubleArgs` <a id="structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207"></a>

void ClearDoubleArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.




### `GetStringArgs` <a id="structFRHAPI__AdditionalJoinParams_1aee56142e4ede519e524b6e2e176b2902"></a>

TMap< FString, FString > & GetStringArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StringArgs_Optional, regardless of it having been set.




### `GetStringArgs` <a id="structFRHAPI__AdditionalJoinParams_1a64563214481a17493c6fbe4853c449e8"></a>

const TMap< FString, FString > & GetStringArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StringArgs_Optional, regardless of it having been set.




### `GetStringArgs` <a id="structFRHAPI__AdditionalJoinParams_1a37ac752248e252d0379f18a221128580"></a>

const TMap< FString, FString > & GetStringArgs(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStringArgs` <a id="structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427"></a>

bool GetStringArgs(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.




### `GetStringArgsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1aa93e031a5878f950eb64e0fd1e05227d"></a>

TMap< FString, FString > * GetStringArgsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.




### `GetStringArgsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1a0c3a1bf622363576124c7619b33d89f6"></a>

const TMap< FString, FString > * GetStringArgsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.




### `SetStringArgs` <a id="structFRHAPI__AdditionalJoinParams_1a079e475c01f6f53511acedfd93b1b4c0"></a>

void SetStringArgs(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.




### `ClearStringArgs` <a id="structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563"></a>

void ClearStringArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.




### `GetTags` <a id="structFRHAPI__AdditionalJoinParams_1ac1caf9793e68f022ece1f7f189161d42"></a>

TArray< FString > & GetTags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Tags_Optional, regardless of it having been set.




### `GetTags` <a id="structFRHAPI__AdditionalJoinParams_1a5d2c0934b594959c6d870d8e06b1876c"></a>

const TArray< FString > & GetTags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Tags_Optional, regardless of it having been set.




### `GetTags` <a id="structFRHAPI__AdditionalJoinParams_1ab3c6e6203999cd0cdb79b02d6a4bec5f"></a>

const TArray< FString > & GetTags(const TArray< FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|DefaultValue|

#### Description

Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTags` <a id="structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3"></a>

bool GetTags(TArray< FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString > &|OutValue|

#### Description

Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.




### `GetTagsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1a817f369f070e33e0a55d356292fba64f"></a>

TArray< FString > * GetTagsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.




### `GetTagsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1a39662fcd9d3af849292d5d5793a08d54"></a>

const TArray< FString > * GetTagsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.




### `SetTags` <a id="structFRHAPI__AdditionalJoinParams_1a1e71de03744774d573b785c8f1678f4a"></a>

void SetTags(TArray< FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString >|NewValue|

#### Description

Sets the value of Tags_Optional and also sets Tags_IsSet to true.




### `ClearTags` <a id="structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9"></a>

void ClearTags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Tags_Optional and sets Tags_IsSet to false.




### `GetExtensions` <a id="structFRHAPI__AdditionalJoinParams_1a2af14fcbfccaf8733a3d0a9c511debdb"></a>

TMap< FString, FString > & GetExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Extensions_Optional, regardless of it having been set.




### `GetExtensions` <a id="structFRHAPI__AdditionalJoinParams_1a4d202329f362922798012b8ca3f8784b"></a>

const TMap< FString, FString > & GetExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Extensions_Optional, regardless of it having been set.




### `GetExtensions` <a id="structFRHAPI__AdditionalJoinParams_1ab60908d74a79b88788cc2e9993203c71"></a>

const TMap< FString, FString > & GetExtensions(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExtensions` <a id="structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940"></a>

bool GetExtensions(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.




### `GetExtensionsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1a718fce2b4a063aa53b92047ad35de12a"></a>

TMap< FString, FString > * GetExtensionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.




### `GetExtensionsOrNull` <a id="structFRHAPI__AdditionalJoinParams_1ab61518d1a59cd1cd9305364dd88d4cb1"></a>

const TMap< FString, FString > * GetExtensionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.




### `SetExtensions` <a id="structFRHAPI__AdditionalJoinParams_1ae342550ce74edaad074ce99670188d23"></a>

void SetExtensions(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.




### `ClearExtensions` <a id="structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2"></a>

void ClearExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.





