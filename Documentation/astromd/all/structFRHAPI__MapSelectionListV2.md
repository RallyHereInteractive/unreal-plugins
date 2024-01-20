---
title: FRHAPI_MapSelectionListV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a14dc8c0be8f15c5611dbf79087b0599e)|ID to uniquely identify this map selection list.|
|TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) >|[Maps](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1ac98cad728a16cb2c742629671a17b010)|List of maps that can be chosen in this selection list.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a480a4fa3df75fcf83ea5b875d615187f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1acc9ee2168e3523742307aa8cc58d92eb)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1ac7e58e7080e1e034770f8181bc5f258a)()|Gets the value of MapSelectionListId.|
|const FString &|[GetMapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a92d6c0635bb56833635852c475a923b6)()|Gets the value of MapSelectionListId.|
|void|[SetMapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a4163b0da3ef171fad2fae764139e1807)(FString NewValue)|Sets the value of MapSelectionListId.|
|TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) > &|[GetMaps](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a7ef11344b831aa06219fedf6eb2416aa)()|Gets the value of Maps.|
|const TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) > &|[GetMaps](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a2f5bc9a98548876244a84d7557263357)()|Gets the value of Maps.|
|void|[SetMaps](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2_1a3bb3db9859948e65b89d94ffab03eb06)(TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) > NewValue)|Sets the value of Maps.|
## Public Attributes



### `MapSelectionListId` <a id="structFRHAPI__MapSelectionListV2_1a14dc8c0be8f15c5611dbf79087b0599e"></a>

`FString FRHAPI_MapSelectionListV2::MapSelectionListId`

ID to uniquely identify this map selection list.




### `Maps` <a id="structFRHAPI__MapSelectionListV2_1ac98cad728a16cb2c742629671a17b010"></a>

`TArray<FRHAPI_MapConfigV2> FRHAPI_MapSelectionListV2::Maps`

List of maps that can be chosen in this selection list.





## Public Functions



### `FromJson` <a id="structFRHAPI__MapSelectionListV2_1a480a4fa3df75fcf83ea5b875d615187f"></a>

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



### `WriteJson` <a id="structFRHAPI__MapSelectionListV2_1acc9ee2168e3523742307aa8cc58d92eb"></a>

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



### `GetMapSelectionListId` <a id="structFRHAPI__MapSelectionListV2_1ac7e58e7080e1e034770f8181bc5f258a"></a>

FString & GetMapSelectionListId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionListId.




### `GetMapSelectionListId` <a id="structFRHAPI__MapSelectionListV2_1a92d6c0635bb56833635852c475a923b6"></a>

const FString & GetMapSelectionListId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionListId.




### `SetMapSelectionListId` <a id="structFRHAPI__MapSelectionListV2_1a4163b0da3ef171fad2fae764139e1807"></a>

void SetMapSelectionListId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MapSelectionListId.




### `GetMaps` <a id="structFRHAPI__MapSelectionListV2_1a7ef11344b831aa06219fedf6eb2416aa"></a>

TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) > & GetMaps()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Maps.




### `GetMaps` <a id="structFRHAPI__MapSelectionListV2_1a2f5bc9a98548876244a84d7557263357"></a>

const TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) > & GetMaps()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Maps.




### `SetMaps` <a id="structFRHAPI__MapSelectionListV2_1a3bb3db9859948e65b89d94ffab03eb06"></a>

void SetMaps(TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MapConfigV2](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2) >|NewValue|

#### Description

Sets the value of Maps.





