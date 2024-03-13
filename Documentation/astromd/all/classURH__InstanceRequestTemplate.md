---
title: URH_InstanceRequestTemplate Class
---Inherits from UObject

Class to organize a Instance Request Templates information.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate)|[TemplateInfo](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1afbba8929c948a370b10eed13de228caf)|The configuration of the template.|
|FString|[ETag](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1a54081c0bdd7533fb04bcd92a02cbecfa)|ETag of last template update.|
|const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) &|[GetInfo](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1aecf119da8d779218b9b3e855e356e7f9)()|Gets the template info.|
|const FString &|[GetETag](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1aaa58e4713d9d5691feeb8ebec31f62d4)()|Gets the Etag for the template info.|
|const FGuid &|[GetInstanceRequestTemplateId](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1a2bb354e782f456b84951d99c0da5b873)()|ID to uniquely identify this instance launch template.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1a600cd1f87cca0d28e4770930af3b19c4)()|Custom data that will be passed to the session during the instance launch request.|
|void|[ImportAPIInstanceLaunchTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1a15872173e96e3437b0eb2151cdbe8c1e)(const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) & APITemplate, const FString & InETag)|Imports template info from an API call.|
|FString|[GetDescription](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate_1aefa7958ae9ac8f8f518660ddd3ff19fb)()|Gets a description of the template, display its id for debugging.|
## Private Attributes



### `TemplateInfo` <a id="classURH__InstanceRequestTemplate_1afbba8929c948a370b10eed13de228caf"></a>

`FRHAPI_InstanceRequestTemplate URH_InstanceRequestTemplate::TemplateInfo`

The configuration of the template.




### `ETag` <a id="classURH__InstanceRequestTemplate_1a54081c0bdd7533fb04bcd92a02cbecfa"></a>

`FString URH_InstanceRequestTemplate::ETag`

ETag of last template update.





## Public Functions



### `GetInfo` <a id="classURH__InstanceRequestTemplate_1aecf119da8d779218b9b3e855e356e7f9"></a>

const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) & GetInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the template info.




### `GetETag` <a id="classURH__InstanceRequestTemplate_1aaa58e4713d9d5691feeb8ebec31f62d4"></a>

const FString & GetETag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Etag for the template info.




### `GetInstanceRequestTemplateId` <a id="classURH__InstanceRequestTemplate_1a2bb354e782f456b84951d99c0da5b873"></a>

const FGuid & GetInstanceRequestTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

ID to uniquely identify this instance launch template.




### `GetCustomData` <a id="classURH__InstanceRequestTemplate_1a600cd1f87cca0d28e4770930af3b19c4"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Custom data that will be passed to the session during the instance launch request.




### `ImportAPIInstanceLaunchTemplate` <a id="classURH__InstanceRequestTemplate_1a15872173e96e3437b0eb2151cdbe8c1e"></a>

void ImportAPIInstanceLaunchTemplate(const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) & APITemplate, const FString & InETag)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) &|APITemplate|
|const FString &|InETag|

#### Description

Imports template info from an API call.


#### Parameters

APITemplate
: Template info from API call. 
InETag
: ETag from API call. 



### `GetDescription` <a id="classURH__InstanceRequestTemplate_1aefa7958ae9ac8f8f518660ddd3ff19fb"></a>

FString GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a description of the template, display its id for debugging.





