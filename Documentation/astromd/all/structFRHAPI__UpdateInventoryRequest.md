---
title: FRHAPI_UpdateInventoryRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to Update an existing Inventory entry. If the Inventory entry does not exist, then the request will fail.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Source|[Source_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054)|Source of this Inventory Operation.|
|bool|[Source_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd)|true if Source_Optional has been set to a value|
|FGuid|[ClientOrderRefId_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48)|Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.|
|bool|[ClientOrderRefId_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f)|true if ClientOrderRefId_Optional has been set to a value|
|ERHAPI_InventoryBucket|[Bucket_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144)|Inventory Bucket for this Inventory Operation.|
|bool|[Bucket_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb)|true if Bucket_Optional has been set to a value|
|int32|[Count_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230)|Count for this Inventory Operation.|
|bool|[Count_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3)|true if Count_Optional has been set to a value|
|FDateTime|[Expires_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Expires_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4)|true if Expires_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd)|Arbitrary data map that can be set to add additional data to Inventory.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68)|true if CustomData_Optional has been set to a value|
|int32|[ItemId_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d)|Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.|
|bool|[ItemId_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6)|true if ItemId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae70155fa9c5e02731a3ae083a5db8685)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a7ba32b8b10c222f2b9e3eb5232bbe60f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a57169cd738d407c44f957683abde1924)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1adf9d6ce28430852000eba36f8870fc89)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ad8afbe1ef767e8918c82b7bd19ef7622)(const ERHAPI_Source & DefaultValue)|Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9)(ERHAPI_Source & OutValue)|Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a3fccf692236a0254cd77475513ddcbc0)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ab3b27ea06a1ff6c312c5b497d2523f30)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a130b734657bbe87566f5f10b4b9624c4)(ERHAPI_Source NewValue)|Sets the value of Source_Optional and also sets Source_IsSet to true.|
|void|[ClearSource](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)()|Clears the value of Source_Optional and sets Source_IsSet to false.|
|FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a3466db7f0539d8409f8f01ff33787cef)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2d139f68cd57d3beab1eb934cd1ab504)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1af823665c4e1740eddcf9952ebe907c4c)(const FGuid & DefaultValue)|Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2)(FGuid & OutValue)|Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a9013fced6f8b4aac4d2f799bbd890f0a)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1adca834faccbaa1881bbaa76c01f7c5ba)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a4a886139e32f880d2e82166433499917)(FGuid NewValue)|Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.|
|void|[ClearClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)()|Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.|
|ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2e4f73d6a8fa16b4b6204eda6cfd8ccd)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a4d15d38506b6038483fe338f4e5f01e4)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a9ee9d6ab1413281ec941336d92ad45f9)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2063e8d13ebb99ab5eee6de8e9b59d75)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a20e911d6238e68a9cd279c56934ccffa)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1af97208ece79b87da6e853a4c00e385b5)(ERHAPI_InventoryBucket NewValue)|Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.|
|void|[ClearBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)()|Clears the value of Bucket_Optional and sets Bucket_IsSet to false.|
|int32 &|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a5873d1b962ee52cdccd163696b40cea9)()|Gets the value of Count_Optional, regardless of it having been set.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1afdaa22930897d2f26ced1e5d9fe009e9)()|Gets the value of Count_Optional, regardless of it having been set.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a1b0f009c8cf49f4f0147004716f3f1c7)(const int32 & DefaultValue)|Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb)(int32 & OutValue)|Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetCountOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ab33e66be1fbca6b09f7eba54c630de07)()|Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetCountOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a21718474f91f63c99cab7c87d747b088)()|Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a9b9771a3cf0e84afe4c9ecea9c0cd224)(int32 NewValue)|Sets the value of Count_Optional and also sets Count_IsSet to true.|
|void|[ClearCount](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)()|Clears the value of Count_Optional and sets Count_IsSet to false.|
|bool|[IsCountDefaultValue](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a)()|Returns true if Count_Optional is set and matches the default value.|
|void|[SetCountToDefault](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352)()|Sets the value of Count_Optional to its default and also sets Count_IsSet to true.|
|FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2768ca11a9a8e9995127099d536105de)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1aab7bcfef4eba64b45fecedc3e166272a)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a55bd52a965ae3f0e5ddef6a3a9f1f35f)(const FDateTime & DefaultValue)|Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774)(FDateTime & OutValue)|Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a578eaa18bc072f86faf3f0e67166c691)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae7c1534a56d4b5776c53c9924b62714b)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a7d72833633c5a5f7903986b1e3cda7bc)(FDateTime NewValue)|Sets the value of Expires_Optional and also sets Expires_IsSet to true.|
|void|[ClearExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)()|Clears the value of Expires_Optional and sets Expires_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae7bfce74be19e09fb35621bff68709b5)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae609c8168511f13ba255927fdd4a7721)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ad04a26a22d44f8eec1b3022d89a8750a)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ad1606208ef97e66ecd0bf93057210a41)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a9aa0affdf62a4dfe65c8f8be782249a3)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a8f70d9aa9656e06ceb39ff730ae3be4d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ab3c70a024cb3cf974ce31b16df8ca82d)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ae9cf927cccc7361e4ba7beafad7cf3ff)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a2a3a6738f8dbd227857c9dd59e7ff545)(const int32 & DefaultValue)|Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046)(int32 & OutValue)|Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a854ae5448a4b0a9d9029055cc81c02bf)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a884a4a9a3d4044e5c237d752af7d811b)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a594cffd78a8e514fc765b07cc1538701)(int32 NewValue)|Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.|
|void|[ClearItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)()|Clears the value of ItemId_Optional and sets ItemId_IsSet to false.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f)()|Returns true if ItemId_Optional is set and matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__updateinventoryrequest/#structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d)()|Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.|
## Public Attributes



### `Source_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054"></a>

`ERHAPI_Source FRHAPI_UpdateInventoryRequest::Source_Optional`

Source of this Inventory Operation.




### `Source_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd"></a>

`bool FRHAPI_UpdateInventoryRequest::Source_IsSet`

true if Source_Optional has been set to a value




### `ClientOrderRefId_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48"></a>

`FGuid FRHAPI_UpdateInventoryRequest::ClientOrderRefId_Optional`

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.




### `ClientOrderRefId_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f"></a>

`bool FRHAPI_UpdateInventoryRequest::ClientOrderRefId_IsSet`

true if ClientOrderRefId_Optional has been set to a value




### `Bucket_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144"></a>

`ERHAPI_InventoryBucket FRHAPI_UpdateInventoryRequest::Bucket_Optional`

Inventory Bucket for this Inventory Operation.




### `Bucket_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb"></a>

`bool FRHAPI_UpdateInventoryRequest::Bucket_IsSet`

true if Bucket_Optional has been set to a value




### `Count_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230"></a>

`int32 FRHAPI_UpdateInventoryRequest::Count_Optional`

Count for this Inventory Operation.




### `Count_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3"></a>

`bool FRHAPI_UpdateInventoryRequest::Count_IsSet`

true if Count_Optional has been set to a value




### `Expires_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924"></a>

`FDateTime FRHAPI_UpdateInventoryRequest::Expires_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4"></a>

`bool FRHAPI_UpdateInventoryRequest::Expires_IsSet`

true if Expires_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd"></a>

`TMap<FString, FString> FRHAPI_UpdateInventoryRequest::CustomData_Optional`

Arbitrary data map that can be set to add additional data to Inventory.




### `CustomData_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68"></a>

`bool FRHAPI_UpdateInventoryRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `ItemId_Optional` <a id="structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d"></a>

`int32 FRHAPI_UpdateInventoryRequest::ItemId_Optional`

Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.




### `ItemId_IsSet` <a id="structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6"></a>

`bool FRHAPI_UpdateInventoryRequest::ItemId_IsSet`

true if ItemId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__UpdateInventoryRequest_1ae70155fa9c5e02731a3ae083a5db8685"></a>

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



### `WriteJson` <a id="structFRHAPI__UpdateInventoryRequest_1a7ba32b8b10c222f2b9e3eb5232bbe60f"></a>

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



### `GetSource` <a id="structFRHAPI__UpdateInventoryRequest_1a57169cd738d407c44f957683abde1924"></a>

ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__UpdateInventoryRequest_1adf9d6ce28430852000eba36f8870fc89"></a>

const ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__UpdateInventoryRequest_1ad8afbe1ef767e8918c82b7bd19ef7622"></a>

const ERHAPI_Source & GetSource(const ERHAPI_Source & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|DefaultValue|

#### Description

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSource` <a id="structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9"></a>

bool GetSource(ERHAPI_Source & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source &|OutValue|

#### Description

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.




### `GetSourceOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a3fccf692236a0254cd77475513ddcbc0"></a>

ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `GetSourceOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1ab3b27ea06a1ff6c312c5b497d2523f30"></a>

const ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `SetSource` <a id="structFRHAPI__UpdateInventoryRequest_1a130b734657bbe87566f5f10b4b9624c4"></a>

void SetSource(ERHAPI_Source NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|NewValue|

#### Description

Sets the value of Source_Optional and also sets Source_IsSet to true.




### `ClearSource` <a id="structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2"></a>

void ClearSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Source_Optional and sets Source_IsSet to false.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequest_1a3466db7f0539d8409f8f01ff33787cef"></a>

FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequest_1a2d139f68cd57d3beab1eb934cd1ab504"></a>

const FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequest_1af823665c4e1740eddcf9952ebe907c4c"></a>

const FGuid & GetClientOrderRefId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2"></a>

bool GetClientOrderRefId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a9013fced6f8b4aac4d2f799bbd890f0a"></a>

FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1adca834faccbaa1881bbaa76c01f7c5ba"></a>

const FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `SetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequest_1a4a886139e32f880d2e82166433499917"></a>

void SetClientOrderRefId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.




### `ClearClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110"></a>

void ClearClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequest_1a2e4f73d6a8fa16b4b6204eda6cfd8ccd"></a>

ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequest_1a4d15d38506b6038483fe338f4e5f01e4"></a>

const ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequest_1a9ee9d6ab1413281ec941336d92ad45f9"></a>

const ERHAPI_InventoryBucket & GetBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d"></a>

bool GetBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.




### `GetBucketOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a2063e8d13ebb99ab5eee6de8e9b59d75"></a>

ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `GetBucketOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a20e911d6238e68a9cd279c56934ccffa"></a>

const ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `SetBucket` <a id="structFRHAPI__UpdateInventoryRequest_1af97208ece79b87da6e853a4c00e385b5"></a>

void SetBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.




### `ClearBucket` <a id="structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f"></a>

void ClearBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequest_1a5873d1b962ee52cdccd163696b40cea9"></a>

int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count_Optional, regardless of it having been set.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequest_1afdaa22930897d2f26ced1e5d9fe009e9"></a>

const int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count_Optional, regardless of it having been set.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequest_1a1b0f009c8cf49f4f0147004716f3f1c7"></a>

const int32 & GetCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb"></a>

bool GetCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.




### `GetCountOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1ab33e66be1fbca6b09f7eba54c630de07"></a>

int32 * GetCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.




### `GetCountOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a21718474f91f63c99cab7c87d747b088"></a>

const int32 * GetCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.




### `SetCount` <a id="structFRHAPI__UpdateInventoryRequest_1a9b9771a3cf0e84afe4c9ecea9c0cd224"></a>

void SetCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Count_Optional and also sets Count_IsSet to true.




### `ClearCount` <a id="structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512"></a>

void ClearCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Count_Optional and sets Count_IsSet to false.




### `IsCountDefaultValue` <a id="structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a"></a>

bool IsCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Count_Optional is set and matches the default value.




### `SetCountToDefault` <a id="structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352"></a>

void SetCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequest_1a2768ca11a9a8e9995127099d536105de"></a>

FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequest_1aab7bcfef4eba64b45fecedc3e166272a"></a>

const FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequest_1a55bd52a965ae3f0e5ddef6a3a9f1f35f"></a>

const FDateTime & GetExpires(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774"></a>

bool GetExpires(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a578eaa18bc072f86faf3f0e67166c691"></a>

FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1ae7c1534a56d4b5776c53c9924b62714b"></a>

const FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `SetExpires` <a id="structFRHAPI__UpdateInventoryRequest_1a7d72833633c5a5f7903986b1e3cda7bc"></a>

void SetExpires(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expires_Optional and also sets Expires_IsSet to true.




### `ClearExpires` <a id="structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a"></a>

void ClearExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expires_Optional and sets Expires_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequest_1ae7bfce74be19e09fb35621bff68709b5"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequest_1ae609c8168511f13ba255927fdd4a7721"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequest_1ad04a26a22d44f8eec1b3022d89a8750a"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1ad1606208ef97e66ecd0bf93057210a41"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a9aa0affdf62a4dfe65c8f8be782249a3"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__UpdateInventoryRequest_1a8f70d9aa9656e06ceb39ff730ae3be4d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequest_1ab3c70a024cb3cf974ce31b16df8ca82d"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequest_1ae9cf927cccc7361e4ba7beafad7cf3ff"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequest_1a2a3a6738f8dbd227857c9dd59e7ff545"></a>

const int32 & GetItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046"></a>

bool GetItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemIdOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a854ae5448a4b0a9d9029055cc81c02bf"></a>

int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemIdOrNull` <a id="structFRHAPI__UpdateInventoryRequest_1a884a4a9a3d4044e5c237d752af7d811b"></a>

const int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemId` <a id="structFRHAPI__UpdateInventoryRequest_1a594cffd78a8e514fc765b07cc1538701"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.




### `ClearItemId` <a id="structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001"></a>

void ClearItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.




### `IsItemIdDefaultValue` <a id="structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId_Optional is set and matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.





