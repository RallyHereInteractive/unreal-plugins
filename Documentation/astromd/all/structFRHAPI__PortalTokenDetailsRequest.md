---
title: FRHAPI_PortalTokenDetailsRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PortalTokenDetailsGrantType|[GrantType](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369)||
|FString|[PortalAccessToken](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98)|Token or secret used to authenticate the provided grant type.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1a0537d65dbaeccc3403ac707d1cc4995f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1afef7776e0d4367f60e4298263e4cb67e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_PortalTokenDetailsGrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7)()|Gets the value of GrantType.|
|const ERHAPI_PortalTokenDetailsGrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e)()|Gets the value of GrantType.|
|void|[SetGrantType](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1ab18a3820e59afe35e034acd19a4f784b)(ERHAPI_PortalTokenDetailsGrantType NewValue)|Sets the value of GrantType.|
|FString &|[GetPortalAccessToken](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9)()|Gets the value of PortalAccessToken.|
|const FString &|[GetPortalAccessToken](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271)()|Gets the value of PortalAccessToken.|
|void|[SetPortalAccessToken](/unreal-plugins/all/structfrhapi__portaltokendetailsrequest/#structFRHAPI__PortalTokenDetailsRequest_1ab9e79f2af1ff269ead537aebedb7017f)(FString NewValue)|Sets the value of PortalAccessToken.|
## Public Attributes



### `GrantType` <a id="structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369"></a>

`ERHAPI_PortalTokenDetailsGrantType FRHAPI_PortalTokenDetailsRequest::GrantType`






### `PortalAccessToken` <a id="structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98"></a>

`FString FRHAPI_PortalTokenDetailsRequest::PortalAccessToken`

Token or secret used to authenticate the provided grant type.





## Public Functions



### `FromJson` <a id="structFRHAPI__PortalTokenDetailsRequest_1a0537d65dbaeccc3403ac707d1cc4995f"></a>

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



### `WriteJson` <a id="structFRHAPI__PortalTokenDetailsRequest_1afef7776e0d4367f60e4298263e4cb67e"></a>

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



### `GetGrantType` <a id="structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7"></a>

ERHAPI_PortalTokenDetailsGrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `GetGrantType` <a id="structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e"></a>

const ERHAPI_PortalTokenDetailsGrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `SetGrantType` <a id="structFRHAPI__PortalTokenDetailsRequest_1ab18a3820e59afe35e034acd19a4f784b"></a>

void SetGrantType(ERHAPI_PortalTokenDetailsGrantType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PortalTokenDetailsGrantType|NewValue|

#### Description

Sets the value of GrantType.




### `GetPortalAccessToken` <a id="structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9"></a>

FString & GetPortalAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalAccessToken.




### `GetPortalAccessToken` <a id="structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271"></a>

const FString & GetPortalAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalAccessToken.




### `SetPortalAccessToken` <a id="structFRHAPI__PortalTokenDetailsRequest_1ab9e79f2af1ff269ead537aebedb7017f"></a>

void SetPortalAccessToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalAccessToken.





