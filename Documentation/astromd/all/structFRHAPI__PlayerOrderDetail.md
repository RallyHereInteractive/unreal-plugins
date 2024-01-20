---
title: FRHAPI_PlayerOrderDetail Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Represents details of what occurred in a Player Order Entry.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PlayerOrderDetailType|[Type](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5)|The type of detail.|
|int32|[LootId_Optional](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f)|The Loot ID.|
|bool|[LootId_IsSet](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118)|true if LootId_Optional has been set to a value|
|[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange)|[InvChange_Optional](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d)||
|bool|[InvChange_IsSet](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998)|true if InvChange_Optional has been set to a value|
|[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate)|[Order_Optional](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a68f838a280f08b03b0bf5964b28098cc)||
|bool|[Order_IsSet](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22)|true if Order_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a4ba5c63e5403eb6ddd51041593318f46)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a68f1fb71c6510a14fb0c6fb09668bd90)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_PlayerOrderDetailType &|[GetType](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a09de077b2f6fe4d527abce325cb1dec1)()|Gets the value of Type.|
|const ERHAPI_PlayerOrderDetailType &|[GetType](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a9646c80d2cdf34ad649d00d6dd5fbba1)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a4889f53c7bda72f614266062daf11fa5)(ERHAPI_PlayerOrderDetailType NewValue)|Sets the value of Type.|
|int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1aafdff43dd3c9cddaebbf007389da0652)()|Gets the value of LootId_Optional, regardless of it having been set.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1aad3c84358a2ab11834e393ea4e94572d)()|Gets the value of LootId_Optional, regardless of it having been set.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a59828efc74f9947124a58f4e4caac914)(const int32 & DefaultValue)|Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25)(int32 & OutValue)|Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLootIdOrNull](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1aadd5bd1461c82ec3c6a96acab2ec4944)()|Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLootIdOrNull](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1aca3b15e3efbbae144c58d907ac90a540)()|Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLootId](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ade4d91d46467f9cb5ca89c9adbc7c934)(int32 NewValue)|Sets the value of LootId_Optional and also sets LootId_IsSet to true.|
|void|[ClearLootId](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)()|Clears the value of LootId_Optional and sets LootId_IsSet to false.|
|bool|[IsLootIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409)()|Returns true if LootId_Optional is set and matches the default value.|
|void|[SetLootIdToDefault](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e)()|Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.|
|[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) &|[GetInvChange](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a90dc58840bc985ff425e780abbc5b06b)()|Gets the value of InvChange_Optional, regardless of it having been set.|
|const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) &|[GetInvChange](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ad7dbac2e3bc53ffae3289bae48b5275e)()|Gets the value of InvChange_Optional, regardless of it having been set.|
|const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) &|[GetInvChange](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a60e932caf031f1362fac1275708d3662)(const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & DefaultValue)|Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInvChange](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f)([FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & OutValue)|Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) *|[GetInvChangeOrNull](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1abc8734cb6ba19f93a3c72b2d6be96eb9)()|Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) *|[GetInvChangeOrNull](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a1b1c882d5062edb870216cd15a268a33)()|Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInvChange](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ac66dc39b856ab7251011f3214eff25da)([FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) NewValue)|Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.|
|void|[ClearInvChange](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)()|Clears the value of InvChange_Optional and sets InvChange_IsSet to false.|
|[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) &|[GetOrder](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a70b42b24e651a36375ed51a61a2ecc99)()|Gets the value of Order_Optional, regardless of it having been set.|
|const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) &|[GetOrder](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a60fd2aa1695a2914bc45156aaafa4636)()|Gets the value of Order_Optional, regardless of it having been set.|
|const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) &|[GetOrder](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a3ca03ffed0676543f3221612b8294aa0)(const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & DefaultValue)|Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetOrder](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c)([FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & OutValue)|Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) *|[GetOrderOrNull](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1aba0410c19deaa4906cfb062ceb1e2980)()|Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) *|[GetOrderOrNull](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1af76bb5ebba4ba5a41c9ff602c524e882)()|Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetOrder](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1af79748dec66d051483019425facb4ba8)([FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) NewValue)|Sets the value of Order_Optional and also sets Order_IsSet to true.|
|void|[ClearOrder](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)()|Clears the value of Order_Optional and sets Order_IsSet to false.|
## Public Attributes



### `Type` <a id="structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5"></a>

`ERHAPI_PlayerOrderDetailType FRHAPI_PlayerOrderDetail::Type`

The type of detail.




### `LootId_Optional` <a id="structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f"></a>

`int32 FRHAPI_PlayerOrderDetail::LootId_Optional`

The Loot ID.




### `LootId_IsSet` <a id="structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118"></a>

`bool FRHAPI_PlayerOrderDetail::LootId_IsSet`

true if LootId_Optional has been set to a value




### `InvChange_Optional` <a id="structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d"></a>

`FRHAPI_PlayerInventoryChange FRHAPI_PlayerOrderDetail::InvChange_Optional`






### `InvChange_IsSet` <a id="structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998"></a>

`bool FRHAPI_PlayerOrderDetail::InvChange_IsSet`

true if InvChange_Optional has been set to a value




### `Order_Optional` <a id="structFRHAPI__PlayerOrderDetail_1a68f838a280f08b03b0bf5964b28098cc"></a>

`FRHAPI_PlayerOrderCreate FRHAPI_PlayerOrderDetail::Order_Optional`






### `Order_IsSet` <a id="structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22"></a>

`bool FRHAPI_PlayerOrderDetail::Order_IsSet`

true if Order_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerOrderDetail_1a4ba5c63e5403eb6ddd51041593318f46"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerOrderDetail_1a68f1fb71c6510a14fb0c6fb09668bd90"></a>

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



### `GetType` <a id="structFRHAPI__PlayerOrderDetail_1a09de077b2f6fe4d527abce325cb1dec1"></a>

ERHAPI_PlayerOrderDetailType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__PlayerOrderDetail_1a9646c80d2cdf34ad649d00d6dd5fbba1"></a>

const ERHAPI_PlayerOrderDetailType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__PlayerOrderDetail_1a4889f53c7bda72f614266062daf11fa5"></a>

void SetType(ERHAPI_PlayerOrderDetailType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderDetailType|NewValue|

#### Description

Sets the value of Type.




### `GetLootId` <a id="structFRHAPI__PlayerOrderDetail_1aafdff43dd3c9cddaebbf007389da0652"></a>

int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId_Optional, regardless of it having been set.




### `GetLootId` <a id="structFRHAPI__PlayerOrderDetail_1aad3c84358a2ab11834e393ea4e94572d"></a>

const int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId_Optional, regardless of it having been set.




### `GetLootId` <a id="structFRHAPI__PlayerOrderDetail_1a59828efc74f9947124a58f4e4caac914"></a>

const int32 & GetLootId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLootId` <a id="structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25"></a>

bool GetLootId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.




### `GetLootIdOrNull` <a id="structFRHAPI__PlayerOrderDetail_1aadd5bd1461c82ec3c6a96acab2ec4944"></a>

int32 * GetLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.




### `GetLootIdOrNull` <a id="structFRHAPI__PlayerOrderDetail_1aca3b15e3efbbae144c58d907ac90a540"></a>

const int32 * GetLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.




### `SetLootId` <a id="structFRHAPI__PlayerOrderDetail_1ade4d91d46467f9cb5ca89c9adbc7c934"></a>

void SetLootId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LootId_Optional and also sets LootId_IsSet to true.




### `ClearLootId` <a id="structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7"></a>

void ClearLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LootId_Optional and sets LootId_IsSet to false.




### `IsLootIdDefaultValue` <a id="structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409"></a>

bool IsLootIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LootId_Optional is set and matches the default value.




### `SetLootIdToDefault` <a id="structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e"></a>

void SetLootIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.




### `GetInvChange` <a id="structFRHAPI__PlayerOrderDetail_1a90dc58840bc985ff425e780abbc5b06b"></a>

[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & GetInvChange()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InvChange_Optional, regardless of it having been set.




### `GetInvChange` <a id="structFRHAPI__PlayerOrderDetail_1ad7dbac2e3bc53ffae3289bae48b5275e"></a>

const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & GetInvChange()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InvChange_Optional, regardless of it having been set.




### `GetInvChange` <a id="structFRHAPI__PlayerOrderDetail_1a60e932caf031f1362fac1275708d3662"></a>

const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & GetInvChange(const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) &|DefaultValue|

#### Description

Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInvChange` <a id="structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f"></a>

bool GetInvChange([FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) &|OutValue|

#### Description

Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.




### `GetInvChangeOrNull` <a id="structFRHAPI__PlayerOrderDetail_1abc8734cb6ba19f93a3c72b2d6be96eb9"></a>

[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) * GetInvChangeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.




### `GetInvChangeOrNull` <a id="structFRHAPI__PlayerOrderDetail_1a1b1c882d5062edb870216cd15a268a33"></a>

const [FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) * GetInvChangeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.




### `SetInvChange` <a id="structFRHAPI__PlayerOrderDetail_1ac66dc39b856ab7251011f3214eff25da"></a>

void SetInvChange([FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PlayerInventoryChange](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange)|NewValue|

#### Description

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.




### `ClearInvChange` <a id="structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d"></a>

void ClearInvChange()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InvChange_Optional and sets InvChange_IsSet to false.




### `GetOrder` <a id="structFRHAPI__PlayerOrderDetail_1a70b42b24e651a36375ed51a61a2ecc99"></a>

[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & GetOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Order_Optional, regardless of it having been set.




### `GetOrder` <a id="structFRHAPI__PlayerOrderDetail_1a60fd2aa1695a2914bc45156aaafa4636"></a>

const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & GetOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Order_Optional, regardless of it having been set.




### `GetOrder` <a id="structFRHAPI__PlayerOrderDetail_1a3ca03ffed0676543f3221612b8294aa0"></a>

const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & GetOrder(const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) &|DefaultValue|

#### Description

Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetOrder` <a id="structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c"></a>

bool GetOrder([FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) &|OutValue|

#### Description

Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.




### `GetOrderOrNull` <a id="structFRHAPI__PlayerOrderDetail_1aba0410c19deaa4906cfb062ceb1e2980"></a>

[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) * GetOrderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.




### `GetOrderOrNull` <a id="structFRHAPI__PlayerOrderDetail_1af76bb5ebba4ba5a41c9ff602c524e882"></a>

const [FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) * GetOrderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.




### `SetOrder` <a id="structFRHAPI__PlayerOrderDetail_1af79748dec66d051483019425facb4ba8"></a>

void SetOrder([FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate)|NewValue|

#### Description

Sets the value of Order_Optional and also sets Order_IsSet to true.




### `ClearOrder` <a id="structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67"></a>

void ClearOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Order_Optional and sets Order_IsSet to false.





