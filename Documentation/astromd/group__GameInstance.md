---
title: GameInstance
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_BootstrappingSettings](/unreal-plugins/all/classurh__bootstrappingsettings/#classURH__BootstrappingSettings)||
|struct|[FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult)||
|class|[URH_GameInstanceServerBootstrapper](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper)||
|class|[URH_GameInstanceClientBootstrapper](/unreal-plugins/all/classurh__gameinstanceclientbootstrapper/#classURH__GameInstanceClientBootstrapper)||
|class|[URH_GameInstanceSessionSubsystem](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem)||
|class|[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem)||
|enum|[ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)|An enum for the handled bootstrapping modes.|
|enum|[ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)|An enum for the steps in the bootstrapping flow.|
## Enums




### `ERH_ServerBootstrapMode` <a id="group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196"></a>
An enum for the handled bootstrapping modes.



| Enumerator | Initializer|
|------------|------------|
|`GameHostProvider`|``|
|`Disabled`|``|
|`LoginOnly`|``|
|`AutoCreate`|``|



### `ERH_ServerBootstrapFlowStep` <a id="group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36"></a>
An enum for the steps in the bootstrapping flow.



| Enumerator | Initializer|
|------------|------------|
|`Unstarted`|``|
|`Failed`|``|
|`LoggingIn`|``|
|`Recycling`|``|
|`Registration`|``|
|`WaitingForSession`|``|
|`SyncingToSession`|``|
|`Complete`|``|



