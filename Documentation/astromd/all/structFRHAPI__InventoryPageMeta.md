---
title: FRHAPI_InventoryPageMeta Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Metadata about the page of results.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FDateTime|[StartingPosition_Optional](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[StartingPosition_IsSet](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185)|true if StartingPosition_Optional has been set to a value|
|FString|[Cursor_Optional](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538)|The cursor value pointing to the next page of results. If cursor is provided, starting_position is ignored.|
|bool|[Cursor_IsSet](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d)|true if Cursor_Optional has been set to a value|
|ERHAPI_SortOrder|[Sort_Optional](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78)|The direction to search.|
|bool|[Sort_IsSet](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69)|true if Sort_Optional has been set to a value|
|int32|[Limit_Optional](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a88140b3d3bb2565e9c18954ce18a16f8)|The number of Orders to return.|
|bool|[Limit_IsSet](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a4f868e55bc1bbd8ad8d27291b0915c3f)|true if Limit_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a38427182d79116dd40b2d1ccf18a59c4)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a65ca19121d156d635b6810ec4dcfc17b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FDateTime &|[GetStartingPosition](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a3c44fda7651fc115a74c592999664d09)()|Gets the value of StartingPosition_Optional, regardless of it having been set.|
|const FDateTime &|[GetStartingPosition](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a48fa02aa3e866f131b893a6be2819e64)()|Gets the value of StartingPosition_Optional, regardless of it having been set.|
|const FDateTime &|[GetStartingPosition](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a2a697943ae549cf1b5e2a3f61c745b89)(const FDateTime & DefaultValue)|Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStartingPosition](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5)(FDateTime & OutValue)|Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetStartingPositionOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a648fa26e7238b29e334bb7f65ee1e5be)()|Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetStartingPositionOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1afca1a33a512d2f3b6d6ed6f27dd31333)()|Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStartingPosition](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a8fc966839c7deaaed489497efdb4be79)(FDateTime NewValue)|Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.|
|void|[ClearStartingPosition](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)()|Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.|
|FString &|[GetCursor](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a87d855b3da18995a74d5e2e494a3e465)()|Gets the value of Cursor_Optional, regardless of it having been set.|
|const FString &|[GetCursor](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a91f48b809ff6f89d817d0c4b7d65324c)()|Gets the value of Cursor_Optional, regardless of it having been set.|
|const FString &|[GetCursor](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a34f2dfdd667d2b555b07f25d58989590)(const FString & DefaultValue)|Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCursor](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b)(FString & OutValue)|Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetCursorOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a903d41d5ec2acc673fa56d0030a9630e)()|Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetCursorOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ade0d94c0a4dcd930ba8f7187a3f20526)()|Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCursor](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a3d3595bd4412728c1b2fd179c6f0bdd4)(FString NewValue)|Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.|
|void|[ClearCursor](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)()|Clears the value of Cursor_Optional and sets Cursor_IsSet to false.|
|ERHAPI_SortOrder &|[GetSort](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1afd74d1967b31907de123080537b6597b)()|Gets the value of Sort_Optional, regardless of it having been set.|
|const ERHAPI_SortOrder &|[GetSort](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ab7587a292ff20c81dfe1f48b1448fb98)()|Gets the value of Sort_Optional, regardless of it having been set.|
|const ERHAPI_SortOrder &|[GetSort](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1aee1e3a4dc443711031ddeb6852b2be5c)(const ERHAPI_SortOrder & DefaultValue)|Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSort](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3)(ERHAPI_SortOrder & OutValue)|Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_SortOrder *|[GetSortOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ae12efc3540a1820a90d23c40196d63a5)()|Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_SortOrder *|[GetSortOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ad5129dbfcde84799a5906fa22274f4fd)()|Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSort](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a3733ef7522ac54c13c57c080baa8277e)(ERHAPI_SortOrder NewValue)|Sets the value of Sort_Optional and also sets Sort_IsSet to true.|
|void|[ClearSort](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)()|Clears the value of Sort_Optional and sets Sort_IsSet to false.|
|int32 &|[GetLimit](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1ab206adec9b57dd83cf3b74733c006124)()|Gets the value of Limit_Optional, regardless of it having been set.|
|const int32 &|[GetLimit](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a1898a672f357922da383e9b26cbb40ab)()|Gets the value of Limit_Optional, regardless of it having been set.|
|const int32 &|[GetLimit](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a491742e8dcef1239d77491bdd019a728)(const int32 & DefaultValue)|Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLimit](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64)(int32 & OutValue)|Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLimitOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1aebac7a1def32ee784c1efb027479bfea)()|Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLimitOrNull](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1addb26599f5bf58ad993c62af6cd61ba6)()|Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLimit](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a59c27c6a0436a8ab1376746a98f7d757)(int32 NewValue)|Sets the value of Limit_Optional and also sets Limit_IsSet to true.|
|void|[ClearLimit](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)()|Clears the value of Limit_Optional and sets Limit_IsSet to false.|
|bool|[IsLimitDefaultValue](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c)()|Returns true if Limit_Optional is set and matches the default value.|
|void|[SetLimitToDefault](/unreal-plugins/all/structfrhapi__inventorypagemeta/#structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8)()|Sets the value of Limit_Optional to its default and also sets Limit_IsSet to true.|
## Public Attributes



### `StartingPosition_Optional` <a id="structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e"></a>

`FDateTime FRHAPI_InventoryPageMeta::StartingPosition_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `StartingPosition_IsSet` <a id="structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185"></a>

`bool FRHAPI_InventoryPageMeta::StartingPosition_IsSet`

true if StartingPosition_Optional has been set to a value




### `Cursor_Optional` <a id="structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538"></a>

`FString FRHAPI_InventoryPageMeta::Cursor_Optional`

The cursor value pointing to the next page of results. If cursor is provided, starting_position is ignored.




### `Cursor_IsSet` <a id="structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d"></a>

`bool FRHAPI_InventoryPageMeta::Cursor_IsSet`

true if Cursor_Optional has been set to a value




### `Sort_Optional` <a id="structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78"></a>

`ERHAPI_SortOrder FRHAPI_InventoryPageMeta::Sort_Optional`

The direction to search.




### `Sort_IsSet` <a id="structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69"></a>

`bool FRHAPI_InventoryPageMeta::Sort_IsSet`

true if Sort_Optional has been set to a value




### `Limit_Optional` <a id="structFRHAPI__InventoryPageMeta_1a88140b3d3bb2565e9c18954ce18a16f8"></a>

`int32 FRHAPI_InventoryPageMeta::Limit_Optional`

The number of Orders to return.




### `Limit_IsSet` <a id="structFRHAPI__InventoryPageMeta_1a4f868e55bc1bbd8ad8d27291b0915c3f"></a>

`bool FRHAPI_InventoryPageMeta::Limit_IsSet`

true if Limit_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventoryPageMeta_1a38427182d79116dd40b2d1ccf18a59c4"></a>

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



### `WriteJson` <a id="structFRHAPI__InventoryPageMeta_1a65ca19121d156d635b6810ec4dcfc17b"></a>

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



### `GetStartingPosition` <a id="structFRHAPI__InventoryPageMeta_1a3c44fda7651fc115a74c592999664d09"></a>

FDateTime & GetStartingPosition()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StartingPosition_Optional, regardless of it having been set.




### `GetStartingPosition` <a id="structFRHAPI__InventoryPageMeta_1a48fa02aa3e866f131b893a6be2819e64"></a>

const FDateTime & GetStartingPosition()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StartingPosition_Optional, regardless of it having been set.




### `GetStartingPosition` <a id="structFRHAPI__InventoryPageMeta_1a2a697943ae549cf1b5e2a3f61c745b89"></a>

const FDateTime & GetStartingPosition(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStartingPosition` <a id="structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5"></a>

bool GetStartingPosition(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.




### `GetStartingPositionOrNull` <a id="structFRHAPI__InventoryPageMeta_1a648fa26e7238b29e334bb7f65ee1e5be"></a>

FDateTime * GetStartingPositionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.




### `GetStartingPositionOrNull` <a id="structFRHAPI__InventoryPageMeta_1afca1a33a512d2f3b6d6ed6f27dd31333"></a>

const FDateTime * GetStartingPositionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.




### `SetStartingPosition` <a id="structFRHAPI__InventoryPageMeta_1a8fc966839c7deaaed489497efdb4be79"></a>

void SetStartingPosition(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.




### `ClearStartingPosition` <a id="structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477"></a>

void ClearStartingPosition()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.




### `GetCursor` <a id="structFRHAPI__InventoryPageMeta_1a87d855b3da18995a74d5e2e494a3e465"></a>

FString & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor_Optional, regardless of it having been set.




### `GetCursor` <a id="structFRHAPI__InventoryPageMeta_1a91f48b809ff6f89d817d0c4b7d65324c"></a>

const FString & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor_Optional, regardless of it having been set.




### `GetCursor` <a id="structFRHAPI__InventoryPageMeta_1a34f2dfdd667d2b555b07f25d58989590"></a>

const FString & GetCursor(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCursor` <a id="structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b"></a>

bool GetCursor(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.




### `GetCursorOrNull` <a id="structFRHAPI__InventoryPageMeta_1a903d41d5ec2acc673fa56d0030a9630e"></a>

FString * GetCursorOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.




### `GetCursorOrNull` <a id="structFRHAPI__InventoryPageMeta_1ade0d94c0a4dcd930ba8f7187a3f20526"></a>

const FString * GetCursorOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.




### `SetCursor` <a id="structFRHAPI__InventoryPageMeta_1a3d3595bd4412728c1b2fd179c6f0bdd4"></a>

void SetCursor(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.




### `ClearCursor` <a id="structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2"></a>

void ClearCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.




### `GetSort` <a id="structFRHAPI__InventoryPageMeta_1afd74d1967b31907de123080537b6597b"></a>

ERHAPI_SortOrder & GetSort()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Sort_Optional, regardless of it having been set.




### `GetSort` <a id="structFRHAPI__InventoryPageMeta_1ab7587a292ff20c81dfe1f48b1448fb98"></a>

const ERHAPI_SortOrder & GetSort()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Sort_Optional, regardless of it having been set.




### `GetSort` <a id="structFRHAPI__InventoryPageMeta_1aee1e3a4dc443711031ddeb6852b2be5c"></a>

const ERHAPI_SortOrder & GetSort(const ERHAPI_SortOrder & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SortOrder &|DefaultValue|

#### Description

Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSort` <a id="structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3"></a>

bool GetSort(ERHAPI_SortOrder & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SortOrder &|OutValue|

#### Description

Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.




### `GetSortOrNull` <a id="structFRHAPI__InventoryPageMeta_1ae12efc3540a1820a90d23c40196d63a5"></a>

ERHAPI_SortOrder * GetSortOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.




### `GetSortOrNull` <a id="structFRHAPI__InventoryPageMeta_1ad5129dbfcde84799a5906fa22274f4fd"></a>

const ERHAPI_SortOrder * GetSortOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.




### `SetSort` <a id="structFRHAPI__InventoryPageMeta_1a3733ef7522ac54c13c57c080baa8277e"></a>

void SetSort(ERHAPI_SortOrder NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SortOrder|NewValue|

#### Description

Sets the value of Sort_Optional and also sets Sort_IsSet to true.




### `ClearSort` <a id="structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f"></a>

void ClearSort()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Sort_Optional and sets Sort_IsSet to false.




### `GetLimit` <a id="structFRHAPI__InventoryPageMeta_1ab206adec9b57dd83cf3b74733c006124"></a>

int32 & GetLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Limit_Optional, regardless of it having been set.




### `GetLimit` <a id="structFRHAPI__InventoryPageMeta_1a1898a672f357922da383e9b26cbb40ab"></a>

const int32 & GetLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Limit_Optional, regardless of it having been set.




### `GetLimit` <a id="structFRHAPI__InventoryPageMeta_1a491742e8dcef1239d77491bdd019a728"></a>

const int32 & GetLimit(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLimit` <a id="structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64"></a>

bool GetLimit(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.




### `GetLimitOrNull` <a id="structFRHAPI__InventoryPageMeta_1aebac7a1def32ee784c1efb027479bfea"></a>

int32 * GetLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.




### `GetLimitOrNull` <a id="structFRHAPI__InventoryPageMeta_1addb26599f5bf58ad993c62af6cd61ba6"></a>

const int32 * GetLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.




### `SetLimit` <a id="structFRHAPI__InventoryPageMeta_1a59c27c6a0436a8ab1376746a98f7d757"></a>

void SetLimit(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Limit_Optional and also sets Limit_IsSet to true.




### `ClearLimit` <a id="structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488"></a>

void ClearLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Limit_Optional and sets Limit_IsSet to false.




### `IsLimitDefaultValue` <a id="structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c"></a>

bool IsLimitDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Limit_Optional is set and matches the default value.




### `SetLimitToDefault` <a id="structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8"></a>

void SetLimitToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Limit_Optional to its default and also sets Limit_IsSet to true.





