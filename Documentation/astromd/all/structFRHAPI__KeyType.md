---
title: FRHAPI_KeyType Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A Key Type is a type of key that can be claimed from a Marketing Campaign.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Type](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde)|The type of key.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType_1af7191d475c90e3a0816b5d4bf43ae328)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType_1a2f8918a400e913e9034377d936692548)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType_1a6246f2efe400fcd0ef63b8cea89b836a)()|Gets the value of Type.|
|const FString &|[GetType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType_1ae2f4df1be8a30aa99befe068994848ed)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__keytype/#structFRHAPI__KeyType_1ada118d4aa3e8fea65f29cd198f50a5f2)(FString NewValue)|Sets the value of Type.|
## Public Attributes



### `Type` <a id="structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde"></a>

`FString FRHAPI_KeyType::Type`

The type of key.





## Public Functions



### `FromJson` <a id="structFRHAPI__KeyType_1af7191d475c90e3a0816b5d4bf43ae328"></a>

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



### `WriteJson` <a id="structFRHAPI__KeyType_1a2f8918a400e913e9034377d936692548"></a>

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



### `GetType` <a id="structFRHAPI__KeyType_1a6246f2efe400fcd0ef63b8cea89b836a"></a>

FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__KeyType_1ae2f4df1be8a30aa99befe068994848ed"></a>

const FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__KeyType_1ada118d4aa3e8fea65f29cd198f50a5f2"></a>

void SetType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Type.





