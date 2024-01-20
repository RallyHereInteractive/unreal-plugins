---
title: FRHAPI_PlayerLinkedPortalsResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response for getting a player&#39;s linked portals.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse)|[Player](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708)||
|TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) >|[LinkedPortals](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f)|List of linked portals.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1a76e7a20aec8cefbb1a980050c7695338)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1aeba5999e8c3c9ea6e5bb1db98bebffb6)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|[FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse) &|[GetPlayer](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91)()|Gets the value of Player.|
|const [FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse) &|[GetPlayer](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5)()|Gets the value of Player.|
|void|[SetPlayer](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1a08acab14a0dc5a937831282fe5f5411a)([FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse) NewValue)|Sets the value of Player.|
|TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) > &|[GetLinkedPortals](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f)()|Gets the value of LinkedPortals.|
|const TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) > &|[GetLinkedPortals](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64)()|Gets the value of LinkedPortals.|
|void|[SetLinkedPortals](/unreal-plugins/all/structfrhapi__playerlinkedportalsresponse/#structFRHAPI__PlayerLinkedPortalsResponse_1a686c98afb13ebd719d23e4383f92de5c)(TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) > NewValue)|Sets the value of LinkedPortals.|
## Public Attributes



### `Player` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708"></a>

`FRHAPI_PlayerPersonResponse FRHAPI_PlayerLinkedPortalsResponse::Player`






### `LinkedPortals` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f"></a>

`TArray<FRHAPI_PortalUserResponse> FRHAPI_PlayerLinkedPortalsResponse::LinkedPortals`

List of linked portals.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a76e7a20aec8cefbb1a980050c7695338"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aeba5999e8c3c9ea6e5bb1db98bebffb6"></a>

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



### `GetPlayer` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91"></a>

[FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse) & GetPlayer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Player.




### `GetPlayer` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5"></a>

const [FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse) & GetPlayer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Player.




### `SetPlayer` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a08acab14a0dc5a937831282fe5f5411a"></a>

void SetPlayer([FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PlayerPersonResponse](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse)|NewValue|

#### Description

Sets the value of Player.




### `GetLinkedPortals` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f"></a>

TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) > & GetLinkedPortals()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LinkedPortals.




### `GetLinkedPortals` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64"></a>

const TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) > & GetLinkedPortals()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LinkedPortals.




### `SetLinkedPortals` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a686c98afb13ebd719d23e4383f92de5c"></a>

void SetLinkedPortals(TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PortalUserResponse](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse) >|NewValue|

#### Description

Sets the value of LinkedPortals.





