---
title: FRHAPI_ValidationError Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) >|[Loc](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095)||
|FString|[Msg](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c)||
|FString|[Type](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1ab3562d087a66613270f2c2108ff79b78)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a6ad60c5e03c830506b58887849fa43db)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) > &|[GetLoc](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1abf1227d9ef5b4a4238422c016c0859da)()|Gets the value of Loc.|
|const TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) > &|[GetLoc](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1afee16f1cb4b4b1cff3be2fb367b9194b)()|Gets the value of Loc.|
|void|[SetLoc](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a790dc5f32c3159f3c633eb0edb85edd7)(TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) > NewValue)|Sets the value of Loc.|
|FString &|[GetMsg](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1af87c82841237f79052cce426ba7c8f4e)()|Gets the value of Msg.|
|const FString &|[GetMsg](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a033c4d3989361b189cbe719e9e3ada43)()|Gets the value of Msg.|
|void|[SetMsg](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a7025c8b35b61d2523cf426fd577cddae)(FString NewValue)|Sets the value of Msg.|
|FString &|[GetType](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a1d00a847b3b555ad080655ebe0b5c261)()|Gets the value of Type.|
|const FString &|[GetType](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a03c34fe18e8cbc74092d32accdc5d041)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError_1a4a714bf3a474e5ee8407c274514ae753)(FString NewValue)|Sets the value of Type.|
## Public Attributes



### `Loc` <a id="structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095"></a>

`TArray<FRHAPI_LocationInner> FRHAPI_ValidationError::Loc`






### `Msg` <a id="structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c"></a>

`FString FRHAPI_ValidationError::Msg`






### `Type` <a id="structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18"></a>

`FString FRHAPI_ValidationError::Type`







## Public Functions



### `FromJson` <a id="structFRHAPI__ValidationError_1ab3562d087a66613270f2c2108ff79b78"></a>

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



### `WriteJson` <a id="structFRHAPI__ValidationError_1a6ad60c5e03c830506b58887849fa43db"></a>

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



### `GetLoc` <a id="structFRHAPI__ValidationError_1abf1227d9ef5b4a4238422c016c0859da"></a>

TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) > & GetLoc()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loc.




### `GetLoc` <a id="structFRHAPI__ValidationError_1afee16f1cb4b4b1cff3be2fb367b9194b"></a>

const TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) > & GetLoc()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loc.




### `SetLoc` <a id="structFRHAPI__ValidationError_1a790dc5f32c3159f3c633eb0edb85edd7"></a>

void SetLoc(TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_LocationInner](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner) >|NewValue|

#### Description

Sets the value of Loc.




### `GetMsg` <a id="structFRHAPI__ValidationError_1af87c82841237f79052cce426ba7c8f4e"></a>

FString & GetMsg()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Msg.




### `GetMsg` <a id="structFRHAPI__ValidationError_1a033c4d3989361b189cbe719e9e3ada43"></a>

const FString & GetMsg()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Msg.




### `SetMsg` <a id="structFRHAPI__ValidationError_1a7025c8b35b61d2523cf426fd577cddae"></a>

void SetMsg(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Msg.




### `GetType` <a id="structFRHAPI__ValidationError_1a1d00a847b3b555ad080655ebe0b5c261"></a>

FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__ValidationError_1a03c34fe18e8cbc74092d32accdc5d041"></a>

const FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__ValidationError_1a4a714bf3a474e5ee8407c274514ae753"></a>

void SetType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Type.





