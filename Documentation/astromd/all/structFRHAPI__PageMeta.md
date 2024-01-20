---
title: FRHAPI_PageMeta Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[Page](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67)||
|int32|[Limit](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546)||
|int32|[Total](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a526bc02761af6690d057a3ba39fe3b3d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1ab83e2c68322bd5468368a8ca4dc49d9b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPage](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1aa13cc6ef0f0b621ac065a75a236e686e)()|Gets the value of Page.|
|const int32 &|[GetPage](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a1ec015c5ce6921cb3e46a6eb9c587704)()|Gets the value of Page.|
|void|[SetPage](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1afc00c473f02b6ec4d7e86cbf7082224c)(int32 NewValue)|Sets the value of Page.|
|bool|[IsPageDefaultValue](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844)()|Returns true if Page matches the default value.|
|void|[SetPageToDefault](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a)()|Sets the value of Page to its default|
|int32 &|[GetLimit](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a17bdbd54980486c988b388156f899e11)()|Gets the value of Limit.|
|const int32 &|[GetLimit](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a0ebc51d14c74144e1e9bf8ee75a7dbce)()|Gets the value of Limit.|
|void|[SetLimit](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a00b472a80e06eabc0456c0b902bf86f5)(int32 NewValue)|Sets the value of Limit.|
|bool|[IsLimitDefaultValue](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098)()|Returns true if Limit matches the default value.|
|void|[SetLimitToDefault](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10)()|Sets the value of Limit to its default|
|int32 &|[GetTotal](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a02ef93d30af355daf6b7505e62e02c3e)()|Gets the value of Total.|
|const int32 &|[GetTotal](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a786482f7ef05931a754262ec80305689)()|Gets the value of Total.|
|void|[SetTotal](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1ae57e719533a8cd0ef94aaa605254c369)(int32 NewValue)|Sets the value of Total.|
|bool|[IsTotalDefaultValue](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1)()|Returns true if Total matches the default value.|
|void|[SetTotalToDefault](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97)()|Sets the value of Total to its default|
## Public Attributes



### `Page` <a id="structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67"></a>

`int32 FRHAPI_PageMeta::Page`






### `Limit` <a id="structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546"></a>

`int32 FRHAPI_PageMeta::Limit`






### `Total` <a id="structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859"></a>

`int32 FRHAPI_PageMeta::Total`







## Public Functions



### `FromJson` <a id="structFRHAPI__PageMeta_1a526bc02761af6690d057a3ba39fe3b3d"></a>

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



### `WriteJson` <a id="structFRHAPI__PageMeta_1ab83e2c68322bd5468368a8ca4dc49d9b"></a>

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



### `GetPage` <a id="structFRHAPI__PageMeta_1aa13cc6ef0f0b621ac065a75a236e686e"></a>

int32 & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `GetPage` <a id="structFRHAPI__PageMeta_1a1ec015c5ce6921cb3e46a6eb9c587704"></a>

const int32 & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `SetPage` <a id="structFRHAPI__PageMeta_1afc00c473f02b6ec4d7e86cbf7082224c"></a>

void SetPage(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Page.




### `IsPageDefaultValue` <a id="structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844"></a>

bool IsPageDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Page matches the default value.




### `SetPageToDefault` <a id="structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a"></a>

void SetPageToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Page to its default




### `GetLimit` <a id="structFRHAPI__PageMeta_1a17bdbd54980486c988b388156f899e11"></a>

int32 & GetLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Limit.




### `GetLimit` <a id="structFRHAPI__PageMeta_1a0ebc51d14c74144e1e9bf8ee75a7dbce"></a>

const int32 & GetLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Limit.




### `SetLimit` <a id="structFRHAPI__PageMeta_1a00b472a80e06eabc0456c0b902bf86f5"></a>

void SetLimit(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Limit.




### `IsLimitDefaultValue` <a id="structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098"></a>

bool IsLimitDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Limit matches the default value.




### `SetLimitToDefault` <a id="structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10"></a>

void SetLimitToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Limit to its default




### `GetTotal` <a id="structFRHAPI__PageMeta_1a02ef93d30af355daf6b7505e62e02c3e"></a>

int32 & GetTotal()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Total.




### `GetTotal` <a id="structFRHAPI__PageMeta_1a786482f7ef05931a754262ec80305689"></a>

const int32 & GetTotal()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Total.




### `SetTotal` <a id="structFRHAPI__PageMeta_1ae57e719533a8cd0ef94aaa605254c369"></a>

void SetTotal(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Total.




### `IsTotalDefaultValue` <a id="structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1"></a>

bool IsTotalDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Total matches the default value.




### `SetTotalToDefault` <a id="structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97"></a>

void SetTotalToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Total to its default





