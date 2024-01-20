---
title: FRHAPI_MessageOnly Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Message only response.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Message](/unreal-plugins/all/structfrhapi__messageonly/#structFRHAPI__MessageOnly_1abe8093800b37a5b9b70be11a097b2ed4)|Message.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__messageonly/#structFRHAPI__MessageOnly_1ac4f375bd4468863bf6e8e677c8b8ae2a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__messageonly/#structFRHAPI__MessageOnly_1a3c641f01fce8607f221a9cbdcc557533)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMessage](/unreal-plugins/all/structfrhapi__messageonly/#structFRHAPI__MessageOnly_1acad27e625a0840c0002310edba4f8cb6)()|Gets the value of Message.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__messageonly/#structFRHAPI__MessageOnly_1afe30c250051e80d194c815b963d4d4ba)()|Gets the value of Message.|
|void|[SetMessage](/unreal-plugins/all/structfrhapi__messageonly/#structFRHAPI__MessageOnly_1a0eb9aec4d1113c87c318b88b716f306d)(FString NewValue)|Sets the value of Message.|
## Public Attributes



### `Message` <a id="structFRHAPI__MessageOnly_1abe8093800b37a5b9b70be11a097b2ed4"></a>

`FString FRHAPI_MessageOnly::Message`

Message.





## Public Functions



### `FromJson` <a id="structFRHAPI__MessageOnly_1ac4f375bd4468863bf6e8e677c8b8ae2a"></a>

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



### `WriteJson` <a id="structFRHAPI__MessageOnly_1a3c641f01fce8607f221a9cbdcc557533"></a>

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



### `GetMessage` <a id="structFRHAPI__MessageOnly_1acad27e625a0840c0002310edba4f8cb6"></a>

FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message.




### `GetMessage` <a id="structFRHAPI__MessageOnly_1afe30c250051e80d194c815b963d4d4ba"></a>

const FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message.




### `SetMessage` <a id="structFRHAPI__MessageOnly_1a0eb9aec4d1113c87c318b88b716f306d"></a>

void SetMessage(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Message.





