---
title: FRH_CustomEndpointResponseWrapper Struct
---
Wrapper calls for custom endpoint responses.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[HttpResponseCode](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819)||
|TArray< FString >|[HttpHeaders](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a)||
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[HttpBody](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045)||
|[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo)|[RHErrorInfo](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd)||
||[FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0)()||
||[FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556)(const RallyHereAPI::FResponse_CustomEndpointSend & Resp)||
## Public Attributes



### `HttpResponseCode` <a id="structFRH__CustomEndpointResponseWrapper_1a523d0748b8c43562b244c5b443885819"></a>

`int32 FRH_CustomEndpointResponseWrapper::HttpResponseCode`



Http Response Code 



### `HttpHeaders` <a id="structFRH__CustomEndpointResponseWrapper_1a59c48808e9357fd64aa2de14d6369a7a"></a>

`TArray<FString> FRH_CustomEndpointResponseWrapper::HttpHeaders`



Http Headers 



### `HttpBody` <a id="structFRH__CustomEndpointResponseWrapper_1a791bfd7b371c5a8c49745dc4736fd045"></a>

`FRHAPI_JsonValue FRH_CustomEndpointResponseWrapper::HttpBody`



Http Body as Json 



### `RHErrorInfo` <a id="structFRH__CustomEndpointResponseWrapper_1a5bc7706d93244411d0652b495030b2fd"></a>

`FRH_ErrorInfo FRH_CustomEndpointResponseWrapper::RHErrorInfo`



Parsed RallyHere error 




## Public Functions



### `FRH_CustomEndpointResponseWrapper` <a id="structFRH__CustomEndpointResponseWrapper_1aa44901d30ba89511ec625f6bfe297aa0"></a>

 FRH_CustomEndpointResponseWrapper()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `FRH_CustomEndpointResponseWrapper` <a id="structFRH__CustomEndpointResponseWrapper_1ad3707751b28f8cd4eaafc8d9cd4f8556"></a>

 FRH_CustomEndpointResponseWrapper(const RallyHereAPI::FResponse_CustomEndpointSend & Resp)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_CustomEndpointSend &|Resp|

#### Description







