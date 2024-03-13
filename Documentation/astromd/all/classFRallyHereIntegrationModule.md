---
title: FRallyHereIntegrationModule Class
---Inherits from IModuleInterface

Module for the Rally Here Integration Layer.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TWeakObjectPtr< [URH_Integration](/unreal-plugins/all/classurh__integration/#classURH__Integration) >|[Integration](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1aef4b4e829bcd84d44e58c0cdde9079f7)||
||[~FRallyHereIntegrationModule](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120)()|Default constructor.|
|void|[StartupModule](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b)()|Initializes the module.|
|void|[ShutdownModule](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff)()|Safely ends the module.|
|[URH_Integration](/unreal-plugins/all/classurh__integration/#classURH__Integration) &|[GetIntegration](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1aef9bad7d1f539b0e86e055663d30df2a)()|Gets the Integration class fromt he module.|
|FName|[GetModuleName](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1a9be57caefb587f15356977d8cde87527)()|Returns the module name.|
|bool|[IsAvailable](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1a37dd157c6a3f68f38f6ebbf5e94de4c0)()|Checks if the module is loaded.|
|[URH_Integration](/unreal-plugins/all/classurh__integration/#classURH__Integration) &|[Get](/unreal-plugins/all/classfrallyhereintegrationmodule/#classFRallyHereIntegrationModule_1a9b45f73b73f01f065254288e7959cc43)()|Gets the module, lazy loads it if needed.|
## Private Attributes



### `Integration` <a id="classFRallyHereIntegrationModule_1aef4b4e829bcd84d44e58c0cdde9079f7"></a>

`TWeakObjectPtr<URH_Integration> FRallyHereIntegrationModule::Integration`







## Public Functions



### `~FRallyHereIntegrationModule` <a id="classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120"></a>

 ~FRallyHereIntegrationModule()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `StartupModule` <a id="classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b"></a>

void StartupModule()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the module.




### `ShutdownModule` <a id="classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff"></a>

void ShutdownModule()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely ends the module.




### `GetIntegration` <a id="classFRallyHereIntegrationModule_1aef9bad7d1f539b0e86e055663d30df2a"></a>

[URH_Integration](/unreal-plugins/all/classurh__integration/#classURH__Integration) & GetIntegration()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Integration class fromt he module.





## Public Static Functions



### `GetModuleName` <a id="classFRallyHereIntegrationModule_1a9be57caefb587f15356977d8cde87527"></a>

FName GetModuleName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns the module name.




### `IsAvailable` <a id="classFRallyHereIntegrationModule_1a37dd157c6a3f68f38f6ebbf5e94de4c0"></a>

bool IsAvailable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Checks if the module is loaded.




### `Get` <a id="classFRallyHereIntegrationModule_1a9b45f73b73f01f065254288e7959cc43"></a>

[URH_Integration](/unreal-plugins/all/classurh__integration/#classURH__Integration) & Get()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the module, lazy loads it if needed.





