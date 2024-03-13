---
title: FRH_BootstrappingResult Struct
---
An result object that contains the accumulated results for the bootstrapping flow.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_GameHostAllocationInfo|[AllocationInfo](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1adec6488272e42a9e0b06af3ab6d59d21)|Allocation info from the provider.|
|TOptional< FString >|[ETag](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1ac73f26d7721fb5dad1842db2210f63ee)|Etag for the session.|
|TOptional< [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) >|[Session](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1ad19f9f0c2ef01ee27ee8662fa2c24fbf)|Session data.|
|TOptional< [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|[Template](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1a96b718bfaa357278d45e35e5f8195d7d)|Session template.|
||[FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1aa216ffeac7a1df598341b1c44b1cf60a)()|Default constructor.|
||[FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1ac72f8aa3aba34360f7bb355c28b09bf4)(const FRH_GameHostAllocationInfo & InAllocationInfo)|Constructor with Host Allocation Info.|
|FORCEINLINE bool|[IsValid](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1a2c15ea10bd2944064a94f6623a605c53)()|Whether or not this result is valid (it has the required IDs to be finalized)|
|FORCEINLINE bool|[IsComplete](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult_1adf13be05a51ab5276b77474e92fe2bd6)()|Whether or not this result is complete (it has valid and matching session information)|
## Public Attributes



### `AllocationInfo` <a id="structFRH__BootstrappingResult_1adec6488272e42a9e0b06af3ab6d59d21"></a>

`FRH_GameHostAllocationInfo FRH_BootstrappingResult::AllocationInfo`

Allocation info from the provider.




### `ETag` <a id="structFRH__BootstrappingResult_1ac73f26d7721fb5dad1842db2210f63ee"></a>

`TOptional<FString> FRH_BootstrappingResult::ETag`

Etag for the session.




### `Session` <a id="structFRH__BootstrappingResult_1ad19f9f0c2ef01ee27ee8662fa2c24fbf"></a>

`TOptional<FRH_APISessionWithETag> FRH_BootstrappingResult::Session`

Session data.




### `Template` <a id="structFRH__BootstrappingResult_1a96b718bfaa357278d45e35e5f8195d7d"></a>

`TOptional<FRHAPI_SessionTemplate> FRH_BootstrappingResult::Template`

Session template.





## Public Functions



### `FRH_BootstrappingResult` <a id="structFRH__BootstrappingResult_1aa216ffeac7a1df598341b1c44b1cf60a"></a>

 FRH_BootstrappingResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `FRH_BootstrappingResult` <a id="structFRH__BootstrappingResult_1ac72f8aa3aba34360f7bb355c28b09bf4"></a>

 FRH_BootstrappingResult(const FRH_GameHostAllocationInfo & InAllocationInfo)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GameHostAllocationInfo &|InAllocationInfo|

#### Description

Constructor with Host Allocation Info.




### `IsValid` <a id="structFRH__BootstrappingResult_1a2c15ea10bd2944064a94f6623a605c53"></a>

FORCEINLINE bool IsValid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether or not this result is valid (it has the required IDs to be finalized)




### `IsComplete` <a id="structFRH__BootstrappingResult_1adf13be05a51ab5276b77474e92fe2bd6"></a>

FORCEINLINE bool IsComplete()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether or not this result is complete (it has valid and matching session information)





