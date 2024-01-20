---
title: FRHAPI_CrossplayPreferences Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A session&#39;s or player&#39;s preferences around crossplay platforms and inputs. Permitted platforms and inputs will be checked when new players attempt to join a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_CrossplayPlatform|[PermittedPlatform](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051)|The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.)|
|ERHAPI_CrossplayInput|[PermittedInput](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25)|The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.)|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1a91388e37c3dc50e88f786a22a670f4b4)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1ad1acab088331e99ab2ff3fa42c9b1973)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_CrossplayPlatform &|[GetPermittedPlatform](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c)()|Gets the value of PermittedPlatform.|
|const ERHAPI_CrossplayPlatform &|[GetPermittedPlatform](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f)()|Gets the value of PermittedPlatform.|
|void|[SetPermittedPlatform](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1ab3e97515aa5dabbdff8cdfa06bb22956)(ERHAPI_CrossplayPlatform NewValue)|Sets the value of PermittedPlatform.|
|ERHAPI_CrossplayInput &|[GetPermittedInput](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45)()|Gets the value of PermittedInput.|
|const ERHAPI_CrossplayInput &|[GetPermittedInput](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0)()|Gets the value of PermittedInput.|
|void|[SetPermittedInput](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences_1a7b0065b5374b1708ecbefd784b6a1b1b)(ERHAPI_CrossplayInput NewValue)|Sets the value of PermittedInput.|
## Public Attributes



### `PermittedPlatform` <a id="structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051"></a>

`ERHAPI_CrossplayPlatform FRHAPI_CrossplayPreferences::PermittedPlatform`

The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.)




### `PermittedInput` <a id="structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25"></a>

`ERHAPI_CrossplayInput FRHAPI_CrossplayPreferences::PermittedInput`

The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.)





## Public Functions



### `FromJson` <a id="structFRHAPI__CrossplayPreferences_1a91388e37c3dc50e88f786a22a670f4b4"></a>

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



### `WriteJson` <a id="structFRHAPI__CrossplayPreferences_1ad1acab088331e99ab2ff3fa42c9b1973"></a>

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



### `GetPermittedPlatform` <a id="structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c"></a>

ERHAPI_CrossplayPlatform & GetPermittedPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PermittedPlatform.




### `GetPermittedPlatform` <a id="structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f"></a>

const ERHAPI_CrossplayPlatform & GetPermittedPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PermittedPlatform.




### `SetPermittedPlatform` <a id="structFRHAPI__CrossplayPreferences_1ab3e97515aa5dabbdff8cdfa06bb22956"></a>

void SetPermittedPlatform(ERHAPI_CrossplayPlatform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_CrossplayPlatform|NewValue|

#### Description

Sets the value of PermittedPlatform.




### `GetPermittedInput` <a id="structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45"></a>

ERHAPI_CrossplayInput & GetPermittedInput()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PermittedInput.




### `GetPermittedInput` <a id="structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0"></a>

const ERHAPI_CrossplayInput & GetPermittedInput()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PermittedInput.




### `SetPermittedInput` <a id="structFRHAPI__CrossplayPreferences_1a7b0065b5374b1708ecbefd784b6a1b1b"></a>

void SetPermittedInput(ERHAPI_CrossplayInput NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_CrossplayInput|NewValue|

#### Description

Sets the value of PermittedInput.





