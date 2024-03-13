---
title: FRHAPI_PlayerOrdersResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Player Orders.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) >|[Data_Optional](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d)|A collection of Player Orders.|
|bool|[Data_IsSet](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac)|true if Data_Optional has been set to a value|
|[FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta)|[Page](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a418f61fd5f024d525d0da70fc2d59a49)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a8555587cb327c4845ebd18ab880527e5)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &|[GetData](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6)()|Gets the value of Data_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &|[GetData](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0)()|Gets the value of Data_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &|[GetData](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727)(const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & DefaultValue)|Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetData](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5)(TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & OutValue)|Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > *|[GetDataOrNull](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd)()|Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > *|[GetDataOrNull](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436)()|Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetData](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a0bdc148248e6ff73e014b9ad2f6beec9)(TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > NewValue)|Sets the value of Data_Optional and also sets Data_IsSet to true.|
|void|[ClearData](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)()|Clears the value of Data_Optional and sets Data_IsSet to false.|
|[FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05)()|Gets the value of Page.|
|const [FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282)()|Gets the value of Page.|
|void|[SetPage](/unreal-plugins/all/structfrhapi__playerordersresponse/#structFRHAPI__PlayerOrdersResponse_1ad6ebd309447418e0da39b0689bcc5116)([FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta) NewValue)|Sets the value of Page.|
## Public Attributes



### `Data_Optional` <a id="structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d"></a>

`TArray<FRHAPI_PlayerOrder> FRHAPI_PlayerOrdersResponse::Data_Optional`

A collection of Player Orders.




### `Data_IsSet` <a id="structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac"></a>

`bool FRHAPI_PlayerOrdersResponse::Data_IsSet`

true if Data_Optional has been set to a value




### `Page` <a id="structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a"></a>

`FRHAPI_InventoryPageMeta FRHAPI_PlayerOrdersResponse::Page`







## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerOrdersResponse_1a418f61fd5f024d525d0da70fc2d59a49"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerOrdersResponse_1a8555587cb327c4845ebd18ab880527e5"></a>

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



### `GetData` <a id="structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6"></a>

TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & GetData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Data_Optional, regardless of it having been set.




### `GetData` <a id="structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0"></a>

const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & GetData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Data_Optional, regardless of it having been set.




### `GetData` <a id="structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727"></a>

const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & GetData(const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &|DefaultValue|

#### Description

Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetData` <a id="structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5"></a>

bool GetData(TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &|OutValue|

#### Description

Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.




### `GetDataOrNull` <a id="structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd"></a>

TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > * GetDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.




### `GetDataOrNull` <a id="structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436"></a>

const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > * GetDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.




### `SetData` <a id="structFRHAPI__PlayerOrdersResponse_1a0bdc148248e6ff73e014b9ad2f6beec9"></a>

void SetData(TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) >|NewValue|

#### Description

Sets the value of Data_Optional and also sets Data_IsSet to true.




### `ClearData` <a id="structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be"></a>

void ClearData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Data_Optional and sets Data_IsSet to false.




### `GetPage` <a id="structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05"></a>

[FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `GetPage` <a id="structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282"></a>

const [FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `SetPage` <a id="structFRHAPI__PlayerOrdersResponse_1ad6ebd309447418e0da39b0689bcc5116"></a>

void SetPage([FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryPageMeta](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta)|NewValue|

#### Description

Sets the value of Page.





