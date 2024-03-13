---
title: FRHAPI_RankData Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Trueskill oriented ranked data about a player&#39;s skill and confidence levels.

## Summary
| Kind | View | Description |
|------|------|-------------|
|float|[Mu](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a93050be6e5e700a4df0ce7653e9b4661)|Trueskill mu. This is a measure of perceived skill in a player.|
|float|[Sigma](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a45a6360cbb9002f253ce3481b84b2260)|Trueskill sigma. This is a measure of how unconfident we are in the perceived skill (high sigma means less confident)|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a6cc90e4d02ac3c6eb18ac7bbed74c9e6)|Custom key-value player rank data.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a1d6a997932948120bf350d5fd2b61ed1)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a7626e3e65856e26d5d6fe6cd74c95457)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ae6535dda682e34f419505864f6451557)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|float &|[GetMu](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a)()|Gets the value of Mu.|
|const float &|[GetMu](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9)()|Gets the value of Mu.|
|void|[SetMu](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ade1c2275b9f3bd62fd2cc33a117596be)(float NewValue)|Sets the value of Mu.|
|float &|[GetSigma](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a30e029ef16b031aff172f71e960dba16)()|Gets the value of Sigma.|
|const float &|[GetSigma](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ac0fdf966a2fe9a58e82c5bdb7aa57bb9)()|Gets the value of Sigma.|
|void|[SetSigma](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a5650bafa8bd83f4582fc8ea91dafb931)(float NewValue)|Sets the value of Sigma.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ae2a514ff74b15eedc063e0f162f687ee)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1aeb70cd726f718f8dae11d3224f05c196)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ae0d5ca3e159251223c9f44a542676696)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ac5e97b58e367645b7c86f4d75bb104a5)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ae83cac353d1116f8a0e0b8af55f11be1)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ac7be297a8ac380c575fd38cf3d95a1ab)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1a276200d7bad57cad50071060f3be8eab)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData_1ae6fdd574b4aa03a955e0d73368021c63)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `Mu` <a id="structFRHAPI__RankData_1a93050be6e5e700a4df0ce7653e9b4661"></a>

`float FRHAPI_RankData::Mu`

Trueskill mu. This is a measure of perceived skill in a player.




### `Sigma` <a id="structFRHAPI__RankData_1a45a6360cbb9002f253ce3481b84b2260"></a>

`float FRHAPI_RankData::Sigma`

Trueskill sigma. This is a measure of how unconfident we are in the perceived skill (high sigma means less confident)




### `CustomData_Optional` <a id="structFRHAPI__RankData_1a6cc90e4d02ac3c6eb18ac7bbed74c9e6"></a>

`TMap<FString, FString> FRHAPI_RankData::CustomData_Optional`

Custom key-value player rank data.




### `CustomData_IsSet` <a id="structFRHAPI__RankData_1a1d6a997932948120bf350d5fd2b61ed1"></a>

`bool FRHAPI_RankData::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__RankData_1a7626e3e65856e26d5d6fe6cd74c95457"></a>

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



### `WriteJson` <a id="structFRHAPI__RankData_1ae6535dda682e34f419505864f6451557"></a>

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



### `GetMu` <a id="structFRHAPI__RankData_1a0a2c501c8a8d440f060ca600124efa7a"></a>

float & GetMu()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mu.




### `GetMu` <a id="structFRHAPI__RankData_1a65ca5c4664b5ef60345439156aee02b9"></a>

const float & GetMu()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mu.




### `SetMu` <a id="structFRHAPI__RankData_1ade1c2275b9f3bd62fd2cc33a117596be"></a>

void SetMu(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of Mu.




### `GetSigma` <a id="structFRHAPI__RankData_1a30e029ef16b031aff172f71e960dba16"></a>

float & GetSigma()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Sigma.




### `GetSigma` <a id="structFRHAPI__RankData_1ac0fdf966a2fe9a58e82c5bdb7aa57bb9"></a>

const float & GetSigma()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Sigma.




### `SetSigma` <a id="structFRHAPI__RankData_1a5650bafa8bd83f4582fc8ea91dafb931"></a>

void SetSigma(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of Sigma.




### `GetCustomData` <a id="structFRHAPI__RankData_1ae2a514ff74b15eedc063e0f162f687ee"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__RankData_1aeb70cd726f718f8dae11d3224f05c196"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__RankData_1ae0d5ca3e159251223c9f44a542676696"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__RankData_1ac5e97b58e367645b7c86f4d75bb104a5"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__RankData_1ae83cac353d1116f8a0e0b8af55f11be1"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__RankData_1ac7be297a8ac380c575fd38cf3d95a1ab"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__RankData_1a276200d7bad57cad50071060f3be8eab"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__RankData_1ae6fdd574b4aa03a955e0d73368021c63"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





