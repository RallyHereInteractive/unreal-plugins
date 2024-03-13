---
title: FRHAPI_MarketingCampaign Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A Marketing Campaign is a set of external keys that can be claimed by players.The key claims are assigned to the player based on.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[Uuid](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64)|The unique identifier for the Marketing Campaign.|
|FString|[Name](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5)|The name of the Marketing Campaign.|
|ERHAPI_InventoryPortal|[PortalId_Optional](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a14a8c7399ef2083e7fbf1ca37324599c)|Platform for the Marketing Campaign.|
|bool|[PortalId_IsSet](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555)|true if PortalId_Optional has been set to a value|
|TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) >|[KeyTypes](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187)|The types of keys that can be claimed from this campaign.|
|FString|[CreatedOn_Optional](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5)|The time the MarketingCampaign was created.|
|bool|[CreatedOn_IsSet](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd)|true if CreatedOn_Optional has been set to a value|
|FString|[LastModifiedOn_Optional](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749)|The time the MarketingCampaign was last modified.|
|bool|[LastModifiedOn_IsSet](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a)|true if LastModifiedOn_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a117c660e8a3b29aa49fca0b7659a6257)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1afc1372471524c0d87f44889c5ce67008)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetUuid](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1afea3c2144a9946be7b97627fe96c82c5)()|Gets the value of Uuid.|
|const FGuid &|[GetUuid](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a23193be74250e1626329d01416cdade3)()|Gets the value of Uuid.|
|void|[SetUuid](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a22cf010ad1fa09c3871fcfaa253b1f35)(FGuid NewValue)|Sets the value of Uuid.|
|FString &|[GetName](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a4d1656a7c3c5ee9b7139d5c8ce31e90d)()|Gets the value of Name.|
|const FString &|[GetName](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a3b052047bead420245b451ec7759e8b4)()|Gets the value of Name.|
|void|[SetName](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a43d09e85d07f6fe9becb151ccdd406a9)(FString NewValue)|Sets the value of Name.|
|ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a62601fc98cab2459b867ef42a48a66d2)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a4b5ea75bebeca35dbcf06cc9beff1ee4)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a74710a724c6d9feb986b9809be254442)(const ERHAPI_InventoryPortal & DefaultValue)|Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalId](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1afe918724bc70308a92f3781fbb59f267)(ERHAPI_InventoryPortal & OutValue)|Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a98eb847ad52a0a69ce7817abdd0d5495)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a5e0c3f91342035f088108494ca57b9e4)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a9f49215dd72fb5a277ab43423153d4dc)(ERHAPI_InventoryPortal NewValue)|Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.|
|void|[ClearPortalId](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)()|Clears the value of PortalId_Optional and sets PortalId_IsSet to false.|
|TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) > &|[GetKeyTypes](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1ab1a2efa3ebfc416759425bc944c14751)()|Gets the value of KeyTypes.|
|const TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) > &|[GetKeyTypes](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a6e04603948a382008325629abc892da6)()|Gets the value of KeyTypes.|
|void|[SetKeyTypes](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a739d8b8357e1a00a15d4e77efde53a5d)(TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) > NewValue)|Sets the value of KeyTypes.|
|FString &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1afb006821fee42ef311e97deebb4158b8)()|Gets the value of CreatedOn_Optional, regardless of it having been set.|
|const FString &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1aa77d50f39e725ceb84e27175db0bfa06)()|Gets the value of CreatedOn_Optional, regardless of it having been set.|
|const FString &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1af52eab87f90c083d1270394b1abff39b)(const FString & DefaultValue)|Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCreatedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc)(FString & OutValue)|Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetCreatedOnOrNull](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1ab7e50b5a72c019e9323b71378b52475b)()|Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetCreatedOnOrNull](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a14b5ec70aa6af84e07486c3ff4a7e3d5)()|Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCreatedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a9b2a7c425e7e47b628a97ccd492cf3df)(FString NewValue)|Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.|
|void|[ClearCreatedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)()|Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.|
|FString &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a934bb894ebc2082869ab21944d003f00)()|Gets the value of LastModifiedOn_Optional, regardless of it having been set.|
|const FString &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1acae329d0b3570a0e0ef7331b6bc3169e)()|Gets the value of LastModifiedOn_Optional, regardless of it having been set.|
|const FString &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a747d9d73cc209c09d60e9a95924352bc)(const FString & DefaultValue)|Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564)(FString & OutValue)|Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetLastModifiedOnOrNull](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a0dc98da2de551cb295b39bf705038de2)()|Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetLastModifiedOnOrNull](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1a6259718ff0ead9c36ad3da1f969c6034)()|Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1aafd70fa05b108d3c8919031a75ff0e9b)(FString NewValue)|Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.|
|void|[ClearLastModifiedOn](/unreal-plugins/all/structfrhapi__marketingcampaign/#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)()|Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.|
## Public Attributes



### `Uuid` <a id="structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64"></a>

`FGuid FRHAPI_MarketingCampaign::Uuid`

The unique identifier for the Marketing Campaign.




### `Name` <a id="structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5"></a>

`FString FRHAPI_MarketingCampaign::Name`

The name of the Marketing Campaign.




### `PortalId_Optional` <a id="structFRHAPI__MarketingCampaign_1a14a8c7399ef2083e7fbf1ca37324599c"></a>

`ERHAPI_InventoryPortal FRHAPI_MarketingCampaign::PortalId_Optional`

Platform for the Marketing Campaign.




### `PortalId_IsSet` <a id="structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555"></a>

`bool FRHAPI_MarketingCampaign::PortalId_IsSet`

true if PortalId_Optional has been set to a value




### `KeyTypes` <a id="structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187"></a>

`TArray<FRHAPI_KeyType> FRHAPI_MarketingCampaign::KeyTypes`

The types of keys that can be claimed from this campaign.




### `CreatedOn_Optional` <a id="structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5"></a>

`FString FRHAPI_MarketingCampaign::CreatedOn_Optional`

The time the MarketingCampaign was created.




### `CreatedOn_IsSet` <a id="structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd"></a>

`bool FRHAPI_MarketingCampaign::CreatedOn_IsSet`

true if CreatedOn_Optional has been set to a value




### `LastModifiedOn_Optional` <a id="structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749"></a>

`FString FRHAPI_MarketingCampaign::LastModifiedOn_Optional`

The time the MarketingCampaign was last modified.




### `LastModifiedOn_IsSet` <a id="structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a"></a>

`bool FRHAPI_MarketingCampaign::LastModifiedOn_IsSet`

true if LastModifiedOn_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MarketingCampaign_1a117c660e8a3b29aa49fca0b7659a6257"></a>

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



### `WriteJson` <a id="structFRHAPI__MarketingCampaign_1afc1372471524c0d87f44889c5ce67008"></a>

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



### `GetUuid` <a id="structFRHAPI__MarketingCampaign_1afea3c2144a9946be7b97627fe96c82c5"></a>

FGuid & GetUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Uuid.




### `GetUuid` <a id="structFRHAPI__MarketingCampaign_1a23193be74250e1626329d01416cdade3"></a>

const FGuid & GetUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Uuid.




### `SetUuid` <a id="structFRHAPI__MarketingCampaign_1a22cf010ad1fa09c3871fcfaa253b1f35"></a>

void SetUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of Uuid.




### `GetName` <a id="structFRHAPI__MarketingCampaign_1a4d1656a7c3c5ee9b7139d5c8ce31e90d"></a>

FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name.




### `GetName` <a id="structFRHAPI__MarketingCampaign_1a3b052047bead420245b451ec7759e8b4"></a>

const FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name.




### `SetName` <a id="structFRHAPI__MarketingCampaign_1a43d09e85d07f6fe9becb151ccdd406a9"></a>

void SetName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Name.




### `GetPortalId` <a id="structFRHAPI__MarketingCampaign_1a62601fc98cab2459b867ef42a48a66d2"></a>

ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__MarketingCampaign_1a4b5ea75bebeca35dbcf06cc9beff1ee4"></a>

const ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__MarketingCampaign_1a74710a724c6d9feb986b9809be254442"></a>

const ERHAPI_InventoryPortal & GetPortalId(const ERHAPI_InventoryPortal & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryPortal &|DefaultValue|

#### Description

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalId` <a id="structFRHAPI__MarketingCampaign_1afe918724bc70308a92f3781fbb59f267"></a>

bool GetPortalId(ERHAPI_InventoryPortal & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal &|OutValue|

#### Description

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalIdOrNull` <a id="structFRHAPI__MarketingCampaign_1a98eb847ad52a0a69ce7817abdd0d5495"></a>

ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalIdOrNull` <a id="structFRHAPI__MarketingCampaign_1a5e0c3f91342035f088108494ca57b9e4"></a>

const ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalId` <a id="structFRHAPI__MarketingCampaign_1a9f49215dd72fb5a277ab43423153d4dc"></a>

void SetPortalId(ERHAPI_InventoryPortal NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal|NewValue|

#### Description

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.




### `ClearPortalId` <a id="structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899"></a>

void ClearPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.




### `GetKeyTypes` <a id="structFRHAPI__MarketingCampaign_1ab1a2efa3ebfc416759425bc944c14751"></a>

TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) > & GetKeyTypes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of KeyTypes.




### `GetKeyTypes` <a id="structFRHAPI__MarketingCampaign_1a6e04603948a382008325629abc892da6"></a>

const TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) > & GetKeyTypes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of KeyTypes.




### `SetKeyTypes` <a id="structFRHAPI__MarketingCampaign_1a739d8b8357e1a00a15d4e77efde53a5d"></a>

void SetKeyTypes(TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_KeyType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType) >|NewValue|

#### Description

Sets the value of KeyTypes.




### `GetCreatedOn` <a id="structFRHAPI__MarketingCampaign_1afb006821fee42ef311e97deebb4158b8"></a>

FString & GetCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedOn_Optional, regardless of it having been set.




### `GetCreatedOn` <a id="structFRHAPI__MarketingCampaign_1aa77d50f39e725ceb84e27175db0bfa06"></a>

const FString & GetCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedOn_Optional, regardless of it having been set.




### `GetCreatedOn` <a id="structFRHAPI__MarketingCampaign_1af52eab87f90c083d1270394b1abff39b"></a>

const FString & GetCreatedOn(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCreatedOn` <a id="structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc"></a>

bool GetCreatedOn(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.




### `GetCreatedOnOrNull` <a id="structFRHAPI__MarketingCampaign_1ab7e50b5a72c019e9323b71378b52475b"></a>

FString * GetCreatedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.




### `GetCreatedOnOrNull` <a id="structFRHAPI__MarketingCampaign_1a14b5ec70aa6af84e07486c3ff4a7e3d5"></a>

const FString * GetCreatedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.




### `SetCreatedOn` <a id="structFRHAPI__MarketingCampaign_1a9b2a7c425e7e47b628a97ccd492cf3df"></a>

void SetCreatedOn(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.




### `ClearCreatedOn` <a id="structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f"></a>

void ClearCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.




### `GetLastModifiedOn` <a id="structFRHAPI__MarketingCampaign_1a934bb894ebc2082869ab21944d003f00"></a>

FString & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn_Optional, regardless of it having been set.




### `GetLastModifiedOn` <a id="structFRHAPI__MarketingCampaign_1acae329d0b3570a0e0ef7331b6bc3169e"></a>

const FString & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn_Optional, regardless of it having been set.




### `GetLastModifiedOn` <a id="structFRHAPI__MarketingCampaign_1a747d9d73cc209c09d60e9a95924352bc"></a>

const FString & GetLastModifiedOn(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLastModifiedOn` <a id="structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564"></a>

bool GetLastModifiedOn(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.




### `GetLastModifiedOnOrNull` <a id="structFRHAPI__MarketingCampaign_1a0dc98da2de551cb295b39bf705038de2"></a>

FString * GetLastModifiedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.




### `GetLastModifiedOnOrNull` <a id="structFRHAPI__MarketingCampaign_1a6259718ff0ead9c36ad3da1f969c6034"></a>

const FString * GetLastModifiedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.




### `SetLastModifiedOn` <a id="structFRHAPI__MarketingCampaign_1aafd70fa05b108d3c8919031a75ff0e9b"></a>

void SetLastModifiedOn(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.




### `ClearLastModifiedOn` <a id="structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21"></a>

void ClearLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.





