---
title: FRHAPI_AdOpportunity Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[AdUrl](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761)|The URL to the ad.|
|int32|[Seconds](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2)|The number of seconds the ad is.|
|FString|[OpportunityId](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049)|The ID of the ad opportunity.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a021b3507f5edc302686d770788269419)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a4a1100d7ce89db79898d59dc8017effd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetAdUrl](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a8dcf652a8c0b7ab48dd3c39f80628aab)()|Gets the value of AdUrl.|
|const FString &|[GetAdUrl](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a5e81eba4f2fc85ab5c798c0d0e4b0b25)()|Gets the value of AdUrl.|
|void|[SetAdUrl](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a163059957b31cb5bf11118d670732e04)(FString NewValue)|Sets the value of AdUrl.|
|int32 &|[GetSeconds](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a81af9bc21531a9b893c63701c3a32226)()|Gets the value of Seconds.|
|const int32 &|[GetSeconds](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a64f89adb2f2bc8a770256f856171edb1)()|Gets the value of Seconds.|
|void|[SetSeconds](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a39d50942df6398873b5371b0b8c3f01a)(int32 NewValue)|Sets the value of Seconds.|
|bool|[IsSecondsDefaultValue](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc)()|Returns true if Seconds matches the default value.|
|void|[SetSecondsToDefault](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714)()|Sets the value of Seconds to its default|
|FString &|[GetOpportunityId](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1a6403415eb727e767876069dd98fd0296)()|Gets the value of OpportunityId.|
|const FString &|[GetOpportunityId](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1af16ec49a16ce1243bd2f250e0673d9b9)()|Gets the value of OpportunityId.|
|void|[SetOpportunityId](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity_1ac464e608478a61280f9af03bbd03c1dc)(FString NewValue)|Sets the value of OpportunityId.|
## Public Attributes



### `AdUrl` <a id="structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761"></a>

`FString FRHAPI_AdOpportunity::AdUrl`

The URL to the ad.




### `Seconds` <a id="structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2"></a>

`int32 FRHAPI_AdOpportunity::Seconds`

The number of seconds the ad is.




### `OpportunityId` <a id="structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049"></a>

`FString FRHAPI_AdOpportunity::OpportunityId`

The ID of the ad opportunity.





## Public Functions



### `FromJson` <a id="structFRHAPI__AdOpportunity_1a021b3507f5edc302686d770788269419"></a>

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



### `WriteJson` <a id="structFRHAPI__AdOpportunity_1a4a1100d7ce89db79898d59dc8017effd"></a>

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



### `GetAdUrl` <a id="structFRHAPI__AdOpportunity_1a8dcf652a8c0b7ab48dd3c39f80628aab"></a>

FString & GetAdUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AdUrl.




### `GetAdUrl` <a id="structFRHAPI__AdOpportunity_1a5e81eba4f2fc85ab5c798c0d0e4b0b25"></a>

const FString & GetAdUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AdUrl.




### `SetAdUrl` <a id="structFRHAPI__AdOpportunity_1a163059957b31cb5bf11118d670732e04"></a>

void SetAdUrl(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of AdUrl.




### `GetSeconds` <a id="structFRHAPI__AdOpportunity_1a81af9bc21531a9b893c63701c3a32226"></a>

int32 & GetSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Seconds.




### `GetSeconds` <a id="structFRHAPI__AdOpportunity_1a64f89adb2f2bc8a770256f856171edb1"></a>

const int32 & GetSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Seconds.




### `SetSeconds` <a id="structFRHAPI__AdOpportunity_1a39d50942df6398873b5371b0b8c3f01a"></a>

void SetSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Seconds.




### `IsSecondsDefaultValue` <a id="structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc"></a>

bool IsSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Seconds matches the default value.




### `SetSecondsToDefault` <a id="structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714"></a>

void SetSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Seconds to its default




### `GetOpportunityId` <a id="structFRHAPI__AdOpportunity_1a6403415eb727e767876069dd98fd0296"></a>

FString & GetOpportunityId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OpportunityId.




### `GetOpportunityId` <a id="structFRHAPI__AdOpportunity_1af16ec49a16ce1243bd2f250e0673d9b9"></a>

const FString & GetOpportunityId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OpportunityId.




### `SetOpportunityId` <a id="structFRHAPI__AdOpportunity_1ac464e608478a61280f9af03bbd03c1dc"></a>

void SetOpportunityId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of OpportunityId.





