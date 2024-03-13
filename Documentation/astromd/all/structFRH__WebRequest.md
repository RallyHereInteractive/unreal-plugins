---
title: FRH_WebRequest Struct
---
Web call request data.

## Summary
| Kind | View | Description |
|------|------|-------------|
|RallyHereAPI::FRequestMetadata|[Metadata](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd)|Metadata for the Web Request.|
|FName|[APIName](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494)|The API name of the Web Request.|
|FDateTime|[Timestamp](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2)|The local timestamp when the request was made.|
|FString|[Verb](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40)|Verb for the action type of the Web Request.|
|FString|[URL](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1a4729623950d6991d5817089262ac791c)|URL for the Web Request.|
|TMap< FString, FString >|[Headers](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3)|Headers for the Web Request.|
|FString|[Content](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20)|Content for the Web Request.|
|TArray< [FRH_WebResponse](/unreal-plugins/all/structfrh__webresponse/#structFRH__WebResponse) >|[Responses](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed)|Response for the Web Request. Can contain multiple if the request had to be retried.|
||[FRH_WebRequest](/unreal-plugins/all/structfrh__webrequest/#structFRH__WebRequest_1aded51ff8b75b1483c6ee3fa664c0a5ff)()||
## Public Attributes



### `Metadata` <a id="structFRH__WebRequest_1a899659b011ca74b4a674024e23ce85dd"></a>

`RallyHereAPI::FRequestMetadata FRH_WebRequest::Metadata`

Metadata for the Web Request.




### `APIName` <a id="structFRH__WebRequest_1ae3636307d276ed20b76eb9b349bf1494"></a>

`FName FRH_WebRequest::APIName`

The API name of the Web Request.




### `Timestamp` <a id="structFRH__WebRequest_1a2a2ebfb48d0c08366a850601fa1b12d2"></a>

`FDateTime FRH_WebRequest::Timestamp`

The local timestamp when the request was made.




### `Verb` <a id="structFRH__WebRequest_1adc541c624a49f77f06d6161e40ce4c40"></a>

`FString FRH_WebRequest::Verb`

Verb for the action type of the Web Request.




### `URL` <a id="structFRH__WebRequest_1a4729623950d6991d5817089262ac791c"></a>

`FString FRH_WebRequest::URL`

URL for the Web Request.




### `Headers` <a id="structFRH__WebRequest_1ae9ca0888071d0f658686ae6453a01be3"></a>

`TMap<FString, FString> FRH_WebRequest::Headers`

Headers for the Web Request.




### `Content` <a id="structFRH__WebRequest_1ae43e1b6f4ef84aebde988062c8701e20"></a>

`FString FRH_WebRequest::Content`

Content for the Web Request.




### `Responses` <a id="structFRH__WebRequest_1aafe02329852f8883685dcd0f4714c3ed"></a>

`TArray<FRH_WebResponse> FRH_WebRequest::Responses`

Response for the Web Request. Can contain multiple if the request had to be retried.





## Public Functions



### `FRH_WebRequest` <a id="structFRH__WebRequest_1aded51ff8b75b1483c6ee3fa664c0a5ff"></a>

 FRH_WebRequest()

#### Parameters

| Type | Name |
|------|------|

#### Description







