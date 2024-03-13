---
title: URH_SubsystemPluginBase Class
---Inherits from UObject

Base class for subsystem plugins.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__subsystempluginbase/#classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe)|Gets the auth context for the plugin to use, override to provide functionality.|
|void|[Initialize](/unreal-plugins/all/classurh__subsystempluginbase/#classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79)()|Initialize the subsystem plugin.|
|void|[Deinitialize](/unreal-plugins/all/classurh__subsystempluginbase/#classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12)()|Safely tears down the subsystem plugin.|
## Public Attributes



### `GetAuthContext` <a id="classURH__SubsystemPluginBase_1a29f5a8a69c5fe311c16ce529baebcbbe"></a>

`virtual FAuthContextPtr URH_SubsystemPluginBase::GetAuthContext() const PURE_VIRTUAL(URH_SubsystemPluginBase`

Gets the auth context for the plugin to use, override to provide functionality.





## Public Functions



### `Initialize` <a id="classURH__SubsystemPluginBase_1a4b880c273e8ef942f0c640c7df6e8a79"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem plugin.




### `Deinitialize` <a id="classURH__SubsystemPluginBase_1a0cc2784f9201bcf69a7f12ff9cb8de12"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem plugin.





