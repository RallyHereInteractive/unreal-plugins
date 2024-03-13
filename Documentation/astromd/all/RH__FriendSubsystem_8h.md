---
title: RH_FriendSubsystem.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend)||
|class|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend)||
|class|[URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem)||
|enum|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)|Status of players' friend relationship.|
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a1f18bd6ea7dc2e9fae3f20807e5c4099)(FRH_FriendListUpdatedDelegate , const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1ab7394b274571bd3a0f9c0ae52005cef4)(FRH_FriendUpdatedDelegate , [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * )||
||[DECLARE_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a00d2e297f3bd8d43b96efc32ff189746)(FRH_FriendUpdateErrorDelegate , const FGuid & , const FName & )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1adbb4e150d3d0ac32926c97b6b9fe27d8)(FRH_BlockedListUpdatedDelegate , const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > & )||
||[DECLARE_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a15da315d949e499b3f695840d2ad769a)(FRH_BlockedPlayerUpdatedDelegate , const FGuid & , const bool )||
||[DECLARE_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a55bfbb02f1cc1a6027958ce68c29e615)(FRH_BlockedPlayerUpdateErrorDelegate , const FGuid & , const FName & )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1ad6a26d8372d98be4c64669f1066bb67a)(FRH_FriendListUpdatedDynamicDelegate , const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & , FriendList )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1ac53c3038a3e2bd56a41786dad39df7a7)(FRH_FriendUpdatedDynamicDelegate , [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * , Friend )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a39468c7473bbfa878087951892881670)(FRH_FriendUpdateErrorDynamicDelegate , const FGuid & , PlayerId , const FName & , Error )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a88d9a694acf494836a4e0d4442a05b20)(FRH_BlockedListUpdatedDynamicDelegate , const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > & , Blocked )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1af21ba07c2c67c28fb6541794f9d7d795)(FRH_BlockedPlayerUpdatedDynamicDelegate , const FGuid & , PlayerId , const bool , bSuccess )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a930d7c47342c6445b3d30625155cbf68)(FRH_BlockedPlayerUpdateErrorDynamicDelegate , const FGuid & , PlayerId , const FName & , Error )||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1ae4b28b69b3da320271822b69583ab0b6)(FRH_GenericFriendDynamicDelegate , bool , bSuccess )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a5ece688af1458d9c711a19f4a1328a54)(FRH_GenericFriendDelegate , bool )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a5edcc0af8bab0977093d8ccd317946bc)(FRH_GenericFriendWithUuidDynamicDelegate , bool , bSuccess , const FGuid & , FriendsPlayerUuid )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a46f0ba73f28b66bac5d76c8b44d277b0)(FRH_GenericFriendWithUuidDelegate , bool , const FGuid & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a3b1d68dbdf10ac09749439f98b3c99f9)(FRH_GenericFriendWithUuidBlock , FRH_GenericFriendWithUuidDelegate , FRH_GenericFriendWithUuidDynamicDelegate , bool , const FGuid & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1aa617a1c0380b2f572f65456121a080a9)(FRH_AddFriendDynamicDelegate , bool , bSuccess , const FGuid & , FriendsPlayerUuid , [FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) , FriendStatus )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1ade78a6cf74ffcd88eb1758cb40f58721)(FRH_AddFriendDelegate , bool , const FGuid & , [FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1ac1d57370c4d34086a969f25d8a1aea72)(FRH_AddFriendBlock , FRH_AddFriendDelegate , FRH_AddFriendDynamicDelegate , bool , const FGuid & , [FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a4c8429014fc3dbc9bd5f65cfb814906f)(FRH_AddNotesDynamicDelegate , bool , bSuccess , const FGuid & , FriendsPlayerUuid , const FString & , NewNote )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a2f1ac05e8b0e8ba8f256ee49c148c478)(FRH_AddNotesDelegate , bool , const FGuid & , const FString & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a849dcb05b52561a088f6303b31fd62e8)(FRH_AddNotesBlock , FRH_AddNotesDelegate , FRH_AddNotesDynamicDelegate , bool , const FGuid & , const FString & )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1a633dd620290fa13bda8b00045742f2f4)(FRH_GetRHPlayerUuidDynamicDelegate , bool , bSuccess , const FGuid & , PlayerUuid )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__friendsubsystem_8h/#RH__FriendSubsystem_8h_1afd7a9f2fd08e6d0bdbab1cd4464bc04f)(FRH_GetRHPlayerUuidDelegate , bool , const FGuid & )||
## Enums




### `FriendshipStatus` <a id="group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244"></a>
Status of players' friend relationship.



| Enumerator | Initializer|
|------------|------------|
|`RH_None`|``|
|`RH_Friends`|``|
|`RH_FriendRequestSent`|``|
|`RH_FriendRequestPending`|``|
|`RH_FriendRequestDeclinedByOther`|``|



## Functions



### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1a1f18bd6ea7dc2e9fae3f20807e5c4099"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_FriendListUpdatedDelegate , const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_FriendListUpdatedDelegate||
|const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > &||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1ab7394b274571bd3a0f9c0ae52005cef4"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_FriendUpdatedDelegate , [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_FriendUpdatedDelegate||
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *||

#### Description






### `DECLARE_MULTICAST_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a00d2e297f3bd8d43b96efc32ff189746"></a>

 DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_FriendUpdateErrorDelegate , const FGuid & , const FName & )

#### Parameters

| Type | Name |
|------|------|
|FRH_FriendUpdateErrorDelegate||
|const FGuid &||
|const FName &||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1adbb4e150d3d0ac32926c97b6b9fe27d8"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_BlockedListUpdatedDelegate , const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_BlockedListUpdatedDelegate||
|const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > &||

#### Description






### `DECLARE_MULTICAST_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a15da315d949e499b3f695840d2ad769a"></a>

 DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdatedDelegate , const FGuid & , const bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_BlockedPlayerUpdatedDelegate||
|const FGuid &||
|const bool||

#### Description






### `DECLARE_MULTICAST_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a55bfbb02f1cc1a6027958ce68c29e615"></a>

 DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdateErrorDelegate , const FGuid & , const FName & )

#### Parameters

| Type | Name |
|------|------|
|FRH_BlockedPlayerUpdateErrorDelegate||
|const FGuid &||
|const FName &||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1ad6a26d8372d98be4c64669f1066bb67a"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_FriendListUpdatedDynamicDelegate , const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & , FriendList )

#### Parameters

| Type | Name |
|------|------|
|FRH_FriendListUpdatedDynamicDelegate||
|const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > &||
|FriendList||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1ac53c3038a3e2bd56a41786dad39df7a7"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_FriendUpdatedDynamicDelegate , [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * , Friend )

#### Parameters

| Type | Name |
|------|------|
|FRH_FriendUpdatedDynamicDelegate||
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *||
|Friend||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a39468c7473bbfa878087951892881670"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_FriendUpdateErrorDynamicDelegate , const FGuid & , PlayerId , const FName & , Error )

#### Parameters

| Type | Name |
|------|------|
|FRH_FriendUpdateErrorDynamicDelegate||
|const FGuid &||
|PlayerId||
|const FName &||
|Error||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1a88d9a694acf494836a4e0d4442a05b20"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_BlockedListUpdatedDynamicDelegate , const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > & , Blocked )

#### Parameters

| Type | Name |
|------|------|
|FRH_BlockedListUpdatedDynamicDelegate||
|const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > &||
|Blocked||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1af21ba07c2c67c28fb6541794f9d7d795"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdatedDynamicDelegate , const FGuid & , PlayerId , const bool , bSuccess )

#### Parameters

| Type | Name |
|------|------|
|FRH_BlockedPlayerUpdatedDynamicDelegate||
|const FGuid &||
|PlayerId||
|const bool||
|bSuccess||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a930d7c47342c6445b3d30625155cbf68"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdateErrorDynamicDelegate , const FGuid & , PlayerId , const FName & , Error )

#### Parameters

| Type | Name |
|------|------|
|FRH_BlockedPlayerUpdateErrorDynamicDelegate||
|const FGuid &||
|PlayerId||
|const FName &||
|Error||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1ae4b28b69b3da320271822b69583ab0b6"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GenericFriendDynamicDelegate , bool , bSuccess )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericFriendDynamicDelegate||
|bool||
|bSuccess||

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__FriendSubsystem_8h_1a5ece688af1458d9c711a19f4a1328a54"></a>

 DECLARE_DELEGATE_OneParam(FRH_GenericFriendDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericFriendDelegate||
|bool||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a5edcc0af8bab0977093d8ccd317946bc"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_GenericFriendWithUuidDynamicDelegate , bool , bSuccess , const FGuid & , FriendsPlayerUuid )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericFriendWithUuidDynamicDelegate||
|bool||
|bSuccess||
|const FGuid &||
|FriendsPlayerUuid||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a46f0ba73f28b66bac5d76c8b44d277b0"></a>

 DECLARE_DELEGATE_TwoParams(FRH_GenericFriendWithUuidDelegate , bool , const FGuid & )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericFriendWithUuidDelegate||
|bool||
|const FGuid &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__FriendSubsystem_8h_1a3b1d68dbdf10ac09749439f98b3c99f9"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_GenericFriendWithUuidBlock , FRH_GenericFriendWithUuidDelegate , FRH_GenericFriendWithUuidDynamicDelegate , bool , const FGuid & )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericFriendWithUuidBlock||
|FRH_GenericFriendWithUuidDelegate||
|FRH_GenericFriendWithUuidDynamicDelegate||
|bool||
|const FGuid &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__FriendSubsystem_8h_1aa617a1c0380b2f572f65456121a080a9"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_AddFriendDynamicDelegate , bool , bSuccess , const FGuid & , FriendsPlayerUuid , [FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) , FriendStatus )

#### Parameters

| Type | Name |
|------|------|
|FRH_AddFriendDynamicDelegate||
|bool||
|bSuccess||
|const FGuid &||
|FriendsPlayerUuid||
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)||
|FriendStatus||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__FriendSubsystem_8h_1ade78a6cf74ffcd88eb1758cb40f58721"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_AddFriendDelegate , bool , const FGuid & , [FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) )

#### Parameters

| Type | Name |
|------|------|
|FRH_AddFriendDelegate||
|bool||
|const FGuid &||
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__FriendSubsystem_8h_1ac1d57370c4d34086a969f25d8a1aea72"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_AddFriendBlock , FRH_AddFriendDelegate , FRH_AddFriendDynamicDelegate , bool , const FGuid & , [FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) )

#### Parameters

| Type | Name |
|------|------|
|FRH_AddFriendBlock||
|FRH_AddFriendDelegate||
|FRH_AddFriendDynamicDelegate||
|bool||
|const FGuid &||
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__FriendSubsystem_8h_1a4c8429014fc3dbc9bd5f65cfb814906f"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_AddNotesDynamicDelegate , bool , bSuccess , const FGuid & , FriendsPlayerUuid , const FString & , NewNote )

#### Parameters

| Type | Name |
|------|------|
|FRH_AddNotesDynamicDelegate||
|bool||
|bSuccess||
|const FGuid &||
|FriendsPlayerUuid||
|const FString &||
|NewNote||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__FriendSubsystem_8h_1a2f1ac05e8b0e8ba8f256ee49c148c478"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_AddNotesDelegate , bool , const FGuid & , const FString & )

#### Parameters

| Type | Name |
|------|------|
|FRH_AddNotesDelegate||
|bool||
|const FGuid &||
|const FString &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__FriendSubsystem_8h_1a849dcb05b52561a088f6303b31fd62e8"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_AddNotesBlock , FRH_AddNotesDelegate , FRH_AddNotesDynamicDelegate , bool , const FGuid & , const FString & )

#### Parameters

| Type | Name |
|------|------|
|FRH_AddNotesBlock||
|FRH_AddNotesDelegate||
|FRH_AddNotesDynamicDelegate||
|bool||
|const FGuid &||
|const FString &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1a633dd620290fa13bda8b00045742f2f4"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_GetRHPlayerUuidDynamicDelegate , bool , bSuccess , const FGuid & , PlayerUuid )

#### Parameters

| Type | Name |
|------|------|
|FRH_GetRHPlayerUuidDynamicDelegate||
|bool||
|bSuccess||
|const FGuid &||
|PlayerUuid||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__FriendSubsystem_8h_1afd7a9f2fd08e6d0bdbab1cd4464bc04f"></a>

 DECLARE_DELEGATE_TwoParams(FRH_GetRHPlayerUuidDelegate , bool , const FGuid & )

#### Parameters

| Type | Name |
|------|------|
|FRH_GetRHPlayerUuidDelegate||
|bool||
|const FGuid &||

#### Description







