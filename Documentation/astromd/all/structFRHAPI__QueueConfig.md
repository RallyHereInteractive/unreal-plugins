---
title: FRHAPI_QueueConfig Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED - V1 Configuration about a specific queue.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[QueueId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d)|ID to uniquely identify this queue.|
|bool|[Active](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e)|Flag for whether or not the queue is active, and can be joined or sessions created from it.|
|int32|[RankingType](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c)|Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)|
|int32|[NumSides](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1)|The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.|
|int32|[MaxPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9)|The maximum number of players that can be on each team.|
|int32|[MinPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86)|The minimum number of players that can be on each team.|
|int32|[MaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4)|The maximum size of a group that can join this queue.|
|FGuid|[MatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad)|ID for which group of matchmaking templates/rules will be used when joining this queue.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1afa46d1b47a820d16fb78e603f8e97056)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a6bfcc693d3b707e273c68ffced461c9f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetQueueId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1afbb7596094bb006f2709ede4d235583a)()|Gets the value of QueueId.|
|const FString &|[GetQueueId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a7531a7aa89e0f4f15bab9d171395b721)()|Gets the value of QueueId.|
|void|[SetQueueId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1ad98691951173499c6da05206f1819463)(FString NewValue)|Sets the value of QueueId.|
|bool &|[GetActive](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1aa2f41600e5497f9f954f96778cbe90bd)()|Gets the value of Active.|
|const bool &|[GetActive](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1aa77d550684015caf80bac335fbe5b691)()|Gets the value of Active.|
|void|[SetActive](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a8d7d827d893ff75f7bc597ba259c854a)(bool NewValue)|Sets the value of Active.|
|bool|[IsActiveDefaultValue](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a1cf37082fbdcae269056c583c43ac884)()|Returns true if Active matches the default value.|
|void|[SetActiveToDefault](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a10f6ccf4def627103f7f6805f4af2c1b)()|Sets the value of Active to its default|
|int32 &|[GetRankingType](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a86e0e4b34a8ec1ea88d6464548ee7ed5)()|Gets the value of RankingType.|
|const int32 &|[GetRankingType](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a3fa024ebcc799d27c37be9b291d51426)()|Gets the value of RankingType.|
|void|[SetRankingType](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a70de6dc3f45bbc43b73d44d2cba6540f)(int32 NewValue)|Sets the value of RankingType.|
|bool|[IsRankingTypeDefaultValue](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a3ccc8262e40ba2f0e5704a71399304aa)()|Returns true if RankingType matches the default value.|
|void|[SetRankingTypeToDefault](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a7b090f5d4ac4e8a648c77fde033751d1)()|Sets the value of RankingType to its default|
|int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a97000ec0ff3107b6ed9a178e01ac31c4)()|Gets the value of NumSides.|
|const int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1ac7e6706e2ec1846709e75f396c3472f4)()|Gets the value of NumSides.|
|void|[SetNumSides](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1ac718e6d395cf89c575c1fe10d369af31)(int32 NewValue)|Sets the value of NumSides.|
|bool|[IsNumSidesDefaultValue](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1aede076c88291f8381088e21b0b80f229)()|Returns true if NumSides matches the default value.|
|void|[SetNumSidesToDefault](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a6572ad59ee9f3952109271c675fb11b0)()|Sets the value of NumSides to its default|
|int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a6c6cf45bcc73d4e3bd29f88da124d9d5)()|Gets the value of MaxPlayersPerSide.|
|const int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1ab89a34440f9e9e7206a303267d9b3fdd)()|Gets the value of MaxPlayersPerSide.|
|void|[SetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a8f5f1cc8fd9ae370a7b058a18f683e97)(int32 NewValue)|Sets the value of MaxPlayersPerSide.|
|bool|[IsMaxPlayersPerSideDefaultValue](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a09d2693ff64135cdb7e1123ecf4d091d)()|Returns true if MaxPlayersPerSide matches the default value.|
|void|[SetMaxPlayersPerSideToDefault](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a4a883842fa1e6aef71553d510cc0a787)()|Sets the value of MaxPlayersPerSide to its default|
|int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a48329c418e000d978319bfe144d690be)()|Gets the value of MinPlayersPerSide.|
|const int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a60c1f52d98a85a00d15471b2b84b88e6)()|Gets the value of MinPlayersPerSide.|
|void|[SetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a2eb75c7505266544585d9879bd9175b5)(int32 NewValue)|Sets the value of MinPlayersPerSide.|
|bool|[IsMinPlayersPerSideDefaultValue](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a47b44d176fa5abb7489d797adb8efd65)()|Returns true if MinPlayersPerSide matches the default value.|
|void|[SetMinPlayersPerSideToDefault](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a6237a800c6262bb4ed9a7701efadd93c)()|Sets the value of MinPlayersPerSide to its default|
|int32 &|[GetMaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a3a5701576906e50a1364ea01a61b8fe5)()|Gets the value of MaxQueueGroupSize.|
|const int32 &|[GetMaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a630f29c3dd01db55fc532ae31b4b59eb)()|Gets the value of MaxQueueGroupSize.|
|void|[SetMaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a2aa70fb1002de69cecd824fc3dff9a3d)(int32 NewValue)|Sets the value of MaxQueueGroupSize.|
|bool|[IsMaxQueueGroupSizeDefaultValue](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a250bed73ccc2af55989c363cb355a1c1)()|Returns true if MaxQueueGroupSize matches the default value.|
|void|[SetMaxQueueGroupSizeToDefault](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a2fbb47f7fe5ff059458787e1e907153e)()|Sets the value of MaxQueueGroupSize to its default|
|FGuid &|[GetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1abb31141c8116720d5103bea41c9ea63b)()|Gets the value of MatchMakingTemplateGroupId.|
|const FGuid &|[GetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1ac6f164a4fe9089bed47aa1833809a008)()|Gets the value of MatchMakingTemplateGroupId.|
|void|[SetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig_1a80b6c3ed4b3759e23b6c8f7a319e58e6)(FGuid NewValue)|Sets the value of MatchMakingTemplateGroupId.|
## Public Attributes



### `QueueId` <a id="structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d"></a>

`FString FRHAPI_QueueConfig::QueueId`

ID to uniquely identify this queue.




### `Active` <a id="structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e"></a>

`bool FRHAPI_QueueConfig::Active`

Flag for whether or not the queue is active, and can be joined or sessions created from it.




### `RankingType` <a id="structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c"></a>

`int32 FRHAPI_QueueConfig::RankingType`

Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)




### `NumSides` <a id="structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1"></a>

`int32 FRHAPI_QueueConfig::NumSides`

The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.




### `MaxPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9"></a>

`int32 FRHAPI_QueueConfig::MaxPlayersPerSide`

The maximum number of players that can be on each team.




### `MinPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86"></a>

`int32 FRHAPI_QueueConfig::MinPlayersPerSide`

The minimum number of players that can be on each team.




### `MaxQueueGroupSize` <a id="structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4"></a>

`int32 FRHAPI_QueueConfig::MaxQueueGroupSize`

The maximum size of a group that can join this queue.




### `MatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad"></a>

`FGuid FRHAPI_QueueConfig::MatchMakingTemplateGroupId`

ID for which group of matchmaking templates/rules will be used when joining this queue.





## Public Functions



### `FromJson` <a id="structFRHAPI__QueueConfig_1afa46d1b47a820d16fb78e603f8e97056"></a>

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



### `WriteJson` <a id="structFRHAPI__QueueConfig_1a6bfcc693d3b707e273c68ffced461c9f"></a>

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



### `GetQueueId` <a id="structFRHAPI__QueueConfig_1afbb7596094bb006f2709ede4d235583a"></a>

FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QueueId.




### `GetQueueId` <a id="structFRHAPI__QueueConfig_1a7531a7aa89e0f4f15bab9d171395b721"></a>

const FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QueueId.




### `SetQueueId` <a id="structFRHAPI__QueueConfig_1ad98691951173499c6da05206f1819463"></a>

void SetQueueId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of QueueId.




### `GetActive` <a id="structFRHAPI__QueueConfig_1aa2f41600e5497f9f954f96778cbe90bd"></a>

bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active.




### `GetActive` <a id="structFRHAPI__QueueConfig_1aa77d550684015caf80bac335fbe5b691"></a>

const bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active.




### `SetActive` <a id="structFRHAPI__QueueConfig_1a8d7d827d893ff75f7bc597ba259c854a"></a>

void SetActive(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Active.




### `IsActiveDefaultValue` <a id="structFRHAPI__QueueConfig_1a1cf37082fbdcae269056c583c43ac884"></a>

bool IsActiveDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Active matches the default value.




### `SetActiveToDefault` <a id="structFRHAPI__QueueConfig_1a10f6ccf4def627103f7f6805f4af2c1b"></a>

void SetActiveToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Active to its default




### `GetRankingType` <a id="structFRHAPI__QueueConfig_1a86e0e4b34a8ec1ea88d6464548ee7ed5"></a>

int32 & GetRankingType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankingType.




### `GetRankingType` <a id="structFRHAPI__QueueConfig_1a3fa024ebcc799d27c37be9b291d51426"></a>

const int32 & GetRankingType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankingType.




### `SetRankingType` <a id="structFRHAPI__QueueConfig_1a70de6dc3f45bbc43b73d44d2cba6540f"></a>

void SetRankingType(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RankingType.




### `IsRankingTypeDefaultValue` <a id="structFRHAPI__QueueConfig_1a3ccc8262e40ba2f0e5704a71399304aa"></a>

bool IsRankingTypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RankingType matches the default value.




### `SetRankingTypeToDefault` <a id="structFRHAPI__QueueConfig_1a7b090f5d4ac4e8a648c77fde033751d1"></a>

void SetRankingTypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RankingType to its default




### `GetNumSides` <a id="structFRHAPI__QueueConfig_1a97000ec0ff3107b6ed9a178e01ac31c4"></a>

int32 & GetNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumSides.




### `GetNumSides` <a id="structFRHAPI__QueueConfig_1ac7e6706e2ec1846709e75f396c3472f4"></a>

const int32 & GetNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumSides.




### `SetNumSides` <a id="structFRHAPI__QueueConfig_1ac718e6d395cf89c575c1fe10d369af31"></a>

void SetNumSides(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of NumSides.




### `IsNumSidesDefaultValue` <a id="structFRHAPI__QueueConfig_1aede076c88291f8381088e21b0b80f229"></a>

bool IsNumSidesDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NumSides matches the default value.




### `SetNumSidesToDefault` <a id="structFRHAPI__QueueConfig_1a6572ad59ee9f3952109271c675fb11b0"></a>

void SetNumSidesToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NumSides to its default




### `GetMaxPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a6c6cf45bcc73d4e3bd29f88da124d9d5"></a>

int32 & GetMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayersPerSide.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__QueueConfig_1ab89a34440f9e9e7206a303267d9b3fdd"></a>

const int32 & GetMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayersPerSide.




### `SetMaxPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a8f5f1cc8fd9ae370a7b058a18f683e97"></a>

void SetMaxPlayersPerSide(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxPlayersPerSide.




### `IsMaxPlayersPerSideDefaultValue` <a id="structFRHAPI__QueueConfig_1a09d2693ff64135cdb7e1123ecf4d091d"></a>

bool IsMaxPlayersPerSideDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxPlayersPerSide matches the default value.




### `SetMaxPlayersPerSideToDefault` <a id="structFRHAPI__QueueConfig_1a4a883842fa1e6aef71553d510cc0a787"></a>

void SetMaxPlayersPerSideToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxPlayersPerSide to its default




### `GetMinPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a48329c418e000d978319bfe144d690be"></a>

int32 & GetMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinPlayersPerSide.




### `GetMinPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a60c1f52d98a85a00d15471b2b84b88e6"></a>

const int32 & GetMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinPlayersPerSide.




### `SetMinPlayersPerSide` <a id="structFRHAPI__QueueConfig_1a2eb75c7505266544585d9879bd9175b5"></a>

void SetMinPlayersPerSide(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MinPlayersPerSide.




### `IsMinPlayersPerSideDefaultValue` <a id="structFRHAPI__QueueConfig_1a47b44d176fa5abb7489d797adb8efd65"></a>

bool IsMinPlayersPerSideDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MinPlayersPerSide matches the default value.




### `SetMinPlayersPerSideToDefault` <a id="structFRHAPI__QueueConfig_1a6237a800c6262bb4ed9a7701efadd93c"></a>

void SetMinPlayersPerSideToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MinPlayersPerSide to its default




### `GetMaxQueueGroupSize` <a id="structFRHAPI__QueueConfig_1a3a5701576906e50a1364ea01a61b8fe5"></a>

int32 & GetMaxQueueGroupSize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxQueueGroupSize.




### `GetMaxQueueGroupSize` <a id="structFRHAPI__QueueConfig_1a630f29c3dd01db55fc532ae31b4b59eb"></a>

const int32 & GetMaxQueueGroupSize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxQueueGroupSize.




### `SetMaxQueueGroupSize` <a id="structFRHAPI__QueueConfig_1a2aa70fb1002de69cecd824fc3dff9a3d"></a>

void SetMaxQueueGroupSize(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxQueueGroupSize.




### `IsMaxQueueGroupSizeDefaultValue` <a id="structFRHAPI__QueueConfig_1a250bed73ccc2af55989c363cb355a1c1"></a>

bool IsMaxQueueGroupSizeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxQueueGroupSize matches the default value.




### `SetMaxQueueGroupSizeToDefault` <a id="structFRHAPI__QueueConfig_1a2fbb47f7fe5ff059458787e1e907153e"></a>

void SetMaxQueueGroupSizeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxQueueGroupSize to its default




### `GetMatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfig_1abb31141c8116720d5103bea41c9ea63b"></a>

FGuid & GetMatchMakingTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateGroupId.




### `GetMatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfig_1ac6f164a4fe9089bed47aa1833809a008"></a>

const FGuid & GetMatchMakingTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateGroupId.




### `SetMatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfig_1a80b6c3ed4b3759e23b6c8f7a319e58e6"></a>

void SetMatchMakingTemplateGroupId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of MatchMakingTemplateGroupId.





