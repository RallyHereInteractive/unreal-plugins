---
title: FRHAPI_AdOpportunities Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) >|[Opportunities](/unreal-plugins/all/structfrhapi__adopportunities/#structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__adopportunities/#structFRHAPI__AdOpportunities_1aacb6660cbf98575505612b2f724b9553)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__adopportunities/#structFRHAPI__AdOpportunities_1a479bc71e04d3d38ba4dab5c3fa76870c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > &|[GetOpportunities](/unreal-plugins/all/structfrhapi__adopportunities/#structFRHAPI__AdOpportunities_1a9bb1906e1cc793af43de22cc852c2a78)()|Gets the value of Opportunities.|
|const TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > &|[GetOpportunities](/unreal-plugins/all/structfrhapi__adopportunities/#structFRHAPI__AdOpportunities_1a9b93de1d671c38962e90f1963dc67272)()|Gets the value of Opportunities.|
|void|[SetOpportunities](/unreal-plugins/all/structfrhapi__adopportunities/#structFRHAPI__AdOpportunities_1af4812eab7243e147bd720ae6d2eca341)(TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > NewValue)|Sets the value of Opportunities.|
## Public Attributes



### `Opportunities` <a id="structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0"></a>

`TArray<FRHAPI_AdOpportunity> FRHAPI_AdOpportunities::Opportunities`







## Public Functions



### `FromJson` <a id="structFRHAPI__AdOpportunities_1aacb6660cbf98575505612b2f724b9553"></a>

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



### `WriteJson` <a id="structFRHAPI__AdOpportunities_1a479bc71e04d3d38ba4dab5c3fa76870c"></a>

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



### `GetOpportunities` <a id="structFRHAPI__AdOpportunities_1a9bb1906e1cc793af43de22cc852c2a78"></a>

TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > & GetOpportunities()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Opportunities.




### `GetOpportunities` <a id="structFRHAPI__AdOpportunities_1a9b93de1d671c38962e90f1963dc67272"></a>

const TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > & GetOpportunities()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Opportunities.




### `SetOpportunities` <a id="structFRHAPI__AdOpportunities_1af4812eab7243e147bd720ae6d2eca341"></a>

void SetOpportunities(TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) >|NewValue|

#### Description

Sets the value of Opportunities.





