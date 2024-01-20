---
title: URH_BootstrappingSettings Class
---Inherits from UObject

An settings object that contains the settings for the bootstrapping flow.

## Summary
| Kind | View | Description |
|------|------|-------------|
|float|[PollIntervalFinalizer](/unreal-plugins/all/classurh__bootstrappingsettings/#classURH__BootstrappingSettings_1a903a527a78d195bda791d3649c56b17d)|The poll interval for the finalizer that looks up the session based on the allocation info from the provider.|
|int32|[PollLogIntervalFinalizer](/unreal-plugins/all/classurh__bootstrappingsettings/#classURH__BootstrappingSettings_1a739ce5d0bae6aa7db95297627d32ae5e)|How often to log progress on the finalizer poll (number of polls between logs)|
|int32|[MaxPollCountFinalizer](/unreal-plugins/all/classurh__bootstrappingsettings/#classURH__BootstrappingSettings_1ae8418e097feff2568ddc0e4ad6ac76d1)|Maximum number of polls on the finalizer before it is determined to be a failure.|
||[URH_BootstrappingSettings](/unreal-plugins/all/classurh__bootstrappingsettings/#classURH__BootstrappingSettings_1a1b522130db5c6b74641876e3b2e95391)(const FObjectInitializer & ObjectInitializer)|Default constructor.|
## Public Attributes



### `PollIntervalFinalizer` <a id="classURH__BootstrappingSettings_1a903a527a78d195bda791d3649c56b17d"></a>

`float URH_BootstrappingSettings::PollIntervalFinalizer`

The poll interval for the finalizer that looks up the session based on the allocation info from the provider.




### `PollLogIntervalFinalizer` <a id="classURH__BootstrappingSettings_1a739ce5d0bae6aa7db95297627d32ae5e"></a>

`int32 URH_BootstrappingSettings::PollLogIntervalFinalizer`

How often to log progress on the finalizer poll (number of polls between logs)




### `MaxPollCountFinalizer` <a id="classURH__BootstrappingSettings_1ae8418e097feff2568ddc0e4ad6ac76d1"></a>

`int32 URH_BootstrappingSettings::MaxPollCountFinalizer`

Maximum number of polls on the finalizer before it is determined to be a failure.





## Public Functions



### `URH_BootstrappingSettings` <a id="classURH__BootstrappingSettings_1a1b522130db5c6b74641876e3b2e95391"></a>

 URH_BootstrappingSettings(const FObjectInitializer & ObjectInitializer)

#### Parameters

| Type | Name |
|------|------|
|const FObjectInitializer &|ObjectInitializer|

#### Description

Default constructor.





