---
title: FRHAPI_PurgeResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Purge response from a purge request.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PersonId](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f)|Person ID that will be purged.|
|FDateTime|[PurgeOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|FDateTime|[CreatedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|FDateTime|[LastModifiedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|FString|[Status](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9)|Status of the purge request.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81)()|Gets the value of PersonId.|
|const FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8)()|Gets the value of PersonId.|
|void|[SetPersonId](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1af33171c3f15797e12450f2a2e420ea7f)(FGuid NewValue)|Sets the value of PersonId.|
|FDateTime &|[GetPurgeOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266)()|Gets the value of PurgeOn.|
|const FDateTime &|[GetPurgeOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547)()|Gets the value of PurgeOn.|
|void|[SetPurgeOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a2538e2c1c93d9da2aee884987d6a4298)(FDateTime NewValue)|Sets the value of PurgeOn.|
|FDateTime &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658)()|Gets the value of CreatedOn.|
|const FDateTime &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b)()|Gets the value of CreatedOn.|
|void|[SetCreatedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1aa2417c1512e1ea1f29609974c4f67eae)(FDateTime NewValue)|Sets the value of CreatedOn.|
|FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4)()|Gets the value of LastModifiedOn.|
|const FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa)()|Gets the value of LastModifiedOn.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a61a7e91502c3b138728b9521dc48c1a6)(FDateTime NewValue)|Sets the value of LastModifiedOn.|
|FString &|[GetStatus](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496)()|Gets the value of Status.|
|const FString &|[GetStatus](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904)()|Gets the value of Status.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse_1a637ce446f6575e52ed0dd2c6b61424da)(FString NewValue)|Sets the value of Status.|
## Public Attributes



### `PersonId` <a id="structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f"></a>

`FGuid FRHAPI_PurgeResponse::PersonId`

Person ID that will be purged.




### `PurgeOn` <a id="structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5"></a>

`FDateTime FRHAPI_PurgeResponse::PurgeOn`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `CreatedOn` <a id="structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922"></a>

`FDateTime FRHAPI_PurgeResponse::CreatedOn`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `LastModifiedOn` <a id="structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12"></a>

`FDateTime FRHAPI_PurgeResponse::LastModifiedOn`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Status` <a id="structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9"></a>

`FString FRHAPI_PurgeResponse::Status`

Status of the purge request.





## Public Functions



### `FromJson` <a id="structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032"></a>

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



### `WriteJson` <a id="structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211"></a>

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



### `GetPersonId` <a id="structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81"></a>

FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId.




### `GetPersonId` <a id="structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8"></a>

const FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId.




### `SetPersonId` <a id="structFRHAPI__PurgeResponse_1af33171c3f15797e12450f2a2e420ea7f"></a>

void SetPersonId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PersonId.




### `GetPurgeOn` <a id="structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266"></a>

FDateTime & GetPurgeOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PurgeOn.




### `GetPurgeOn` <a id="structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547"></a>

const FDateTime & GetPurgeOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PurgeOn.




### `SetPurgeOn` <a id="structFRHAPI__PurgeResponse_1a2538e2c1c93d9da2aee884987d6a4298"></a>

void SetPurgeOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of PurgeOn.




### `GetCreatedOn` <a id="structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658"></a>

FDateTime & GetCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedOn.




### `GetCreatedOn` <a id="structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b"></a>

const FDateTime & GetCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedOn.




### `SetCreatedOn` <a id="structFRHAPI__PurgeResponse_1aa2417c1512e1ea1f29609974c4f67eae"></a>

void SetCreatedOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of CreatedOn.




### `GetLastModifiedOn` <a id="structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4"></a>

FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `GetLastModifiedOn` <a id="structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa"></a>

const FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `SetLastModifiedOn` <a id="structFRHAPI__PurgeResponse_1a61a7e91502c3b138728b9521dc48c1a6"></a>

void SetLastModifiedOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastModifiedOn.




### `GetStatus` <a id="structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496"></a>

FString & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `GetStatus` <a id="structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904"></a>

const FString & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `SetStatus` <a id="structFRHAPI__PurgeResponse_1a637ce446f6575e52ed0dd2c6b61424da"></a>

void SetStatus(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Status.





