---
title: FRH_ErrorInfo Struct
---
Generic blueprint and native delegate used to report success or failure.

Generic handler for HTTP request errors. 
## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[ResponseCode](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439)|The Error Code of the HTTP request.|
|FString|[ResponseContent](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330)|Content of the HTTP request response.|
||[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1ac686c671d6b2e7bd7e13899fe82cecb8)()|Default constructor.|
||[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12)(const RallyHereAPI::FResponse * Response)|Construct from Response Ptr.|
||[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516)(const RallyHereAPI::FResponse & Response)|Construct from Response Ref.|
||[~FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf)()|Default destructor.|
|void|[ImportErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d)(const RallyHereAPI::FResponse & Response)|Parses The HTTP response into the error info.|
## Public Attributes



### `ResponseCode` <a id="structFRH__ErrorInfo_1a390a2d3df6eb1eb30b8c45910beda439"></a>

`int32 FRH_ErrorInfo::ResponseCode`

The Error Code of the HTTP request.




### `ResponseContent` <a id="structFRH__ErrorInfo_1a1a9cfc1398f93647a4409ed1e9712330"></a>

`FString FRH_ErrorInfo::ResponseContent`

Content of the HTTP request response.





## Public Functions



### `FRH_ErrorInfo` <a id="structFRH__ErrorInfo_1ac686c671d6b2e7bd7e13899fe82cecb8"></a>

 FRH_ErrorInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `FRH_ErrorInfo` <a id="structFRH__ErrorInfo_1a3aa352c4f719437558b1ad1e9bb2ca12"></a>

 FRH_ErrorInfo(const RallyHereAPI::FResponse * Response)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse *|Response|

#### Description

Construct from Response Ptr.




### `FRH_ErrorInfo` <a id="structFRH__ErrorInfo_1aeb95360beb4cd80cc13d261d67cec516"></a>

 FRH_ErrorInfo(const RallyHereAPI::FResponse & Response)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse &|Response|

#### Description

Construct from Response Ref.




### `~FRH_ErrorInfo` <a id="structFRH__ErrorInfo_1ac9f4ab0234c74be322dba389a32e32cf"></a>

 ~FRH_ErrorInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default destructor.




### `ImportErrorInfo` <a id="structFRH__ErrorInfo_1a26ac8bbbd57882588cc878b0ee7fa99d"></a>

void ImportErrorInfo(const RallyHereAPI::FResponse & Response)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse &|Response|

#### Description

Parses The HTTP response into the error info.


#### Parameters

Response
: The response to parse. 




