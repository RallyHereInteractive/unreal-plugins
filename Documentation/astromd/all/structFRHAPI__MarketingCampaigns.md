---
title: FRHAPI_MarketingCampaigns Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of external Marketing Campaigns.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) >|[Campaigns](/unreal-plugins/all/structfrhapi__marketingcampaigns/#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505)|List of external Marketing Campaigns.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__marketingcampaigns/#structFRHAPI__MarketingCampaigns_1a8f3ae77637be44c02ad9eb5bef1dda31)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__marketingcampaigns/#structFRHAPI__MarketingCampaigns_1a7f41cb97dd5ba99cad6ffb5a53ab00b0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) > &|[GetCampaigns](/unreal-plugins/all/structfrhapi__marketingcampaigns/#structFRHAPI__MarketingCampaigns_1aa95cc3a073517448aa5d6561e3e702d0)()|Gets the value of Campaigns.|
|const TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) > &|[GetCampaigns](/unreal-plugins/all/structfrhapi__marketingcampaigns/#structFRHAPI__MarketingCampaigns_1a6b519767e3a90b23702d0ee5a31f2199)()|Gets the value of Campaigns.|
|void|[SetCampaigns](/unreal-plugins/all/structfrhapi__marketingcampaigns/#structFRHAPI__MarketingCampaigns_1ae487365fbea2f2a3e37f5c639c16d6c1)(TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) > NewValue)|Sets the value of Campaigns.|
## Public Attributes



### `Campaigns` <a id="structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505"></a>

`TArray<FRHAPI_MarketingCampaign> FRHAPI_MarketingCampaigns::Campaigns`

List of external Marketing Campaigns.





## Public Functions



### `FromJson` <a id="structFRHAPI__MarketingCampaigns_1a8f3ae77637be44c02ad9eb5bef1dda31"></a>

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



### `WriteJson` <a id="structFRHAPI__MarketingCampaigns_1a7f41cb97dd5ba99cad6ffb5a53ab00b0"></a>

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



### `GetCampaigns` <a id="structFRHAPI__MarketingCampaigns_1aa95cc3a073517448aa5d6561e3e702d0"></a>

TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) > & GetCampaigns()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Campaigns.




### `GetCampaigns` <a id="structFRHAPI__MarketingCampaigns_1a6b519767e3a90b23702d0ee5a31f2199"></a>

const TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) > & GetCampaigns()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Campaigns.




### `SetCampaigns` <a id="structFRHAPI__MarketingCampaigns_1ae487365fbea2f2a3e37f5c639c16d6c1"></a>

void SetCampaigns(TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MarketingCampaign](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign) >|NewValue|

#### Description

Sets the value of Campaigns.





