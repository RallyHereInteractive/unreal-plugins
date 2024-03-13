---
title: RH_PlayerNotifications.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_PlayerNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications)||
|enum|[FRH_NotificationPollingTypes](/unreal-plugins/all/rh__playernotifications_8h/#group__Notifications_1gace387863cbcb11c5932fc70080b2d724)|Enum to define how to poll for notifications.|
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a83f8a9af0f70afc5eb1f309648c50bda)(FRH_OnNotificationStreamedDynamicDelegate , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , Notification , const FString & , APIName , const TArray< FString > & , APIParams )||
||[DECLARE_MULTICAST_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a79be619a99d8bf0b0d3e470bc5f20b87)(FRH_OnNotificationStreamedDelegate , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , const FString & , const TArray< FString > & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a73d233d24d8bcfb8364f9b93e7bd1858)(FRH_OnNotificationsPagedDynamicDelegate , bool , bSuccess , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & , Notifications , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , Resp )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a69fd74e0dc102fa50352397e0efdc326)(FRH_OnNotificationsPagedDelegate , bool , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1ab3376cbb512b92c45f07dafc81880486)(FRH_OnNotificationsPagedDelegateBlock , FRH_OnNotificationsPagedDelegate , FRH_OnNotificationsPagedDynamicDelegate , bool , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a703ab32a6b80d96160eb3ee9b42c4999)(FRH_OnGetSingularNotificationDynamicDelegate , bool , bSuccess , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , Notification , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , Resp )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a467c3e0511685d848ea262591ba712ac)(FRH_OnGetSingularNotificationDelegate , bool , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a3706a9421692441318f48799fe8abe77)(FRH_OnGetSingularNotificationDelegateBlock , FRH_OnGetSingularNotificationDelegate , FRH_OnGetSingularNotificationDynamicDelegate , bool , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a0b4f722f9498a5efc0ab4b3d43b198c6)(FRH_OnSingularNotificationIDDynamicDelegate , bool , bSuccess , const FString & , NotificationId , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , Resp )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1acb38d2da637e598da14b0472659ea40f)(FRH_OnSingularNotificationIDDelegate , bool , const FString & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1aefa0763c3de841956f95cc3789df7ef7)(FRH_OnSingularNotificationIDDelegateBlock , FRH_OnSingularNotificationIDDelegate , FRH_OnSingularNotificationIDDynamicDelegate , bool , const FString & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DELEGATE_FourParams](/unreal-plugins/all/rh__playernotifications_8h/#RH__PlayerNotifications_8h_1a91757a719ce11b73884474f3397e997c)(FRH_OnNotificationsStreamedHelperDelegate , bool bSuccess, const FString & , float , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & )||
## Enums




### `FRH_NotificationPollingTypes` <a id="group__Notifications_1gace387863cbcb11c5932fc70080b2d724"></a>
Enum to define how to poll for notifications.



| Enumerator | Initializer|
|------------|------------|
|`LongPoll`|``|



## Functions



### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a83f8a9af0f70afc5eb1f309648c50bda"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRH_OnNotificationStreamedDynamicDelegate , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , Notification , const FString & , APIName , const TArray< FString > & , APIParams )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnNotificationStreamedDynamicDelegate||
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &||
|Notification||
|const FString &||
|APIName||
|const TArray< FString > &||
|APIParams||

#### Description






### `DECLARE_MULTICAST_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a79be619a99d8bf0b0d3e470bc5f20b87"></a>

 DECLARE_MULTICAST_DELEGATE_ThreeParams(FRH_OnNotificationStreamedDelegate , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , const FString & , const TArray< FString > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnNotificationStreamedDelegate||
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &||
|const FString &||
|const TArray< FString > &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a73d233d24d8bcfb8364f9b93e7bd1858"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnNotificationsPagedDynamicDelegate , bool , bSuccess , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & , Notifications , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , Resp )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnNotificationsPagedDynamicDelegate||
|bool||
|bSuccess||
|const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) &||
|Notifications||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|Resp||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a69fd74e0dc102fa50352397e0efdc326"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnNotificationsPagedDelegate , bool , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnNotificationsPagedDelegate||
|bool||
|const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerNotifications_8h_1ab3376cbb512b92c45f07dafc81880486"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnNotificationsPagedDelegateBlock , FRH_OnNotificationsPagedDelegate , FRH_OnNotificationsPagedDynamicDelegate , bool , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnNotificationsPagedDelegateBlock||
|FRH_OnNotificationsPagedDelegate||
|FRH_OnNotificationsPagedDynamicDelegate||
|bool||
|const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a703ab32a6b80d96160eb3ee9b42c4999"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetSingularNotificationDynamicDelegate , bool , bSuccess , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , Notification , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , Resp )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetSingularNotificationDynamicDelegate||
|bool||
|bSuccess||
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &||
|Notification||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|Resp||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a467c3e0511685d848ea262591ba712ac"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnGetSingularNotificationDelegate , bool , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetSingularNotificationDelegate||
|bool||
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerNotifications_8h_1a3706a9421692441318f48799fe8abe77"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetSingularNotificationDelegateBlock , FRH_OnGetSingularNotificationDelegate , FRH_OnGetSingularNotificationDynamicDelegate , bool , const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetSingularNotificationDelegateBlock||
|FRH_OnGetSingularNotificationDelegate||
|FRH_OnGetSingularNotificationDynamicDelegate||
|bool||
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1a0b4f722f9498a5efc0ab4b3d43b198c6"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnSingularNotificationIDDynamicDelegate , bool , bSuccess , const FString & , NotificationId , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , Resp )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSingularNotificationIDDynamicDelegate||
|bool||
|bSuccess||
|const FString &||
|NotificationId||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|Resp||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__PlayerNotifications_8h_1acb38d2da637e598da14b0472659ea40f"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnSingularNotificationIDDelegate , bool , const FString & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSingularNotificationIDDelegate||
|bool||
|const FString &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerNotifications_8h_1aefa0763c3de841956f95cc3789df7ef7"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnSingularNotificationIDDelegateBlock , FRH_OnSingularNotificationIDDelegate , FRH_OnSingularNotificationIDDynamicDelegate , bool , const FString & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSingularNotificationIDDelegateBlock||
|FRH_OnSingularNotificationIDDelegate||
|FRH_OnSingularNotificationIDDynamicDelegate||
|bool||
|const FString &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DELEGATE_FourParams` <a id="RH__PlayerNotifications_8h_1a91757a719ce11b73884474f3397e997c"></a>

 DECLARE_DELEGATE_FourParams(FRH_OnNotificationsStreamedHelperDelegate , bool bSuccess, const FString & , float , const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnNotificationsStreamedHelperDelegate||
|bool|bSuccess|
|const FString &||
|float||
|const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) &||

#### Description







