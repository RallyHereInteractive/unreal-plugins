---
title: RH_PurgeSubsystem.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_PurgeSubsystem](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem)||
|define|[HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT](/unreal-plugins/all/rh__purgesubsystem_8h/#RH__PurgeSubsystem_8h_1ac46762b86bd2274daa1c317b95308a4f)||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__purgesubsystem_8h/#RH__PurgeSubsystem_8h_1afff9b1fecbd5d8a63ec763d3900191f6)(FRH_OnPurgeStatusUpdatedDynamicDelegate , bool , bSuccess , [FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) , PurgeStatus , [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) , Error )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__purgesubsystem_8h/#RH__PurgeSubsystem_8h_1a5acbf96710c6183239dcbe95147c8773)(FRH_OnPurgeStatusUpdatedDelegate , bool , [FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) , [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__purgesubsystem_8h/#RH__PurgeSubsystem_8h_1a330a06e9205a33019cd2dfa9d92fc5c6)(FRH_OnPurgeStatusUpdatedDelegateBlock , FRH_OnPurgeStatusUpdatedDelegate , FRH_OnPurgeStatusUpdatedDynamicDelegate , bool , [FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) , [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) )||
## Defines



### `HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT` <a id="RH__PurgeSubsystem_8h_1ac46762b86bd2274daa1c317b95308a4f"></a>


#define HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT 1







## Functions



### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__PurgeSubsystem_8h_1afff9b1fecbd5d8a63ec763d3900191f6"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnPurgeStatusUpdatedDynamicDelegate , bool , bSuccess , [FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) , PurgeStatus , [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) , Error )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPurgeStatusUpdatedDynamicDelegate||
|bool||
|bSuccess||
|[FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse)||
|PurgeStatus||
|[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo)||
|Error||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__PurgeSubsystem_8h_1a5acbf96710c6183239dcbe95147c8773"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnPurgeStatusUpdatedDelegate , bool , [FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) , [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPurgeStatusUpdatedDelegate||
|bool||
|[FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse)||
|[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo)||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PurgeSubsystem_8h_1a330a06e9205a33019cd2dfa9d92fc5c6"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnPurgeStatusUpdatedDelegateBlock , FRH_OnPurgeStatusUpdatedDelegate , FRH_OnPurgeStatusUpdatedDynamicDelegate , bool , [FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) , [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPurgeStatusUpdatedDelegateBlock||
|FRH_OnPurgeStatusUpdatedDelegate||
|FRH_OnPurgeStatusUpdatedDynamicDelegate||
|bool||
|[FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse)||
|[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo)||

#### Description







