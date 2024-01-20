---
title: RH_PlayerInfoSubsystem.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper)||
|class|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence)||
|class|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions)||
|struct|[FRH_PlayerSettingKeySetWrapper](/unreal-plugins/all/structfrh__playersettingkeysetwrapper/#structFRH__PlayerSettingKeySetWrapper)||
|class|[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo)||
|class|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo)||
|struct|[FRH_PlayerAndPlatformInfo](/unreal-plugins/all/structfrh__playerandplatforminfo/#structFRH__PlayerAndPlatformInfo)||
|class|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem)||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a4e97cec45d44f825de8cbc09681f678d)(FRH_PlayerInfoGetPlatformsDynamicDelegate , bool , bSuccess , const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > & , Platforms )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1ad3c397f801b3acc7c2244d6df7a2bcfb)(FRH_PlayerInfoGetPlatformsDelegate , bool , const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > & )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a347ab243202828749ac42454a048bc62)(FRH_PlayerInfoGetPlayerSettingsDynamicDelegate , bool , bSuccess , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & , Response )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a1cff4458e14eb1edfe46ea29b6302717)(FRH_PlayerInfoGetPlayerSettingsDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1ac1fc5b48c2bf2ff37eff7e7daef3c4a0)(FRH_PlayerInfoGetPlayerSettingsBlock , FRH_PlayerInfoGetPlayerSettingsDelegate , FRH_PlayerInfoGetPlayerSettingsDynamicDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1ab9830ecc213d96b92cc4523fcdff032c)(FRH_PlayerInfoSetPlayerSettingsDynamicDelegate , bool , bSuccess , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & , Response )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a120ca2a84cadf64254127339e269e3f0)(FRH_PlayerInfoSetPlayerSettingsDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a4fabdc7f1ae952d95edd3983899fb5aa)(FRH_PlayerInfoSetPlayerSettingsBlock , FRH_PlayerInfoSetPlayerSettingsDelegate , FRH_PlayerInfoSetPlayerSettingsDynamicDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a0b9b88629f8cb442109c9e945af1f9f7)(FRH_PlayerInfoGetDisplayNameDynamicDelegate , bool , bSuccess , const FString & , DisplayName )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a81f8fad335776ac2f8edb97aab0df3be)(FRH_PlayerInfoGetDisplayNameDelegate , bool , const FString & )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1adad996060a6082758e13da8775baf719)(FRH_PlayerInfoLookupPlayerDynamicDelegate , bool , bSuccess , const TArray< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > & , PlayerInfo )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1aa3e49bb6b7e717eea2c54de6595b3484)(FRH_PlayerInfoLookupPlayerDelegate , bool , const TArray< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > & )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1aef219872608f0ede0596f01634a81b72)(FRH_PlayerInfoGetPlayerRankingsDynamicDelegate , bool , bSuccess , const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & , PlayerRankingInfo )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a85748f71b3c8fa3ba1d1149d08040ac2)(FRH_PlayerInfoGetPlayerRankingsDelegate , bool , const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a02c8ef2170c3637f2060e532bed57a5f)(FRH_OnPresenceUpdatedMulticastDynamicDelegate , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * , PresenceData )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a152163e7ca924f8edc7a9f4440d80c0f)(FRH_OnPresenceUpdatedMulticastDelegate , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1aba40234b880c5e08ad9af0076ad98c22)(FRH_OnRequestPlayerPresenceDynamicDelegate , bool , bSuccess , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * , PresenceData )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a91563d15d2a238b58586511ab5c3b799)(FRH_OnRequestPlayerPresenceDelegate , bool , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a62baaeaca139fea322acdd9a2919c8f1)(FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * , SessionData )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a3e81f88e3e6d1e189094564cc967e386)(FRH_OnPlayerSessionsUpdatedMulticastDelegate , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * )||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a939bbc771ead65e0f4a50b5deea88f4c)(FRH_OnRequestPlayerSessionsDynamicDelegate , bool , bSuccess , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * , SessionData )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinfosubsystem_8h/#RH__PlayerInfoSubsystem_8h_1a54e2829987b9bd477d89e028c5a1ef94)(FRH_OnRequestPlayerSessionsDelegate , bool , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * )||
## Functions



### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a4e97cec45d44f825de8cbc09681f678d"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDynamicDelegate , bool , bSuccess , const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > & , Platforms )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlatformsDynamicDelegate||
|bool||
|bSuccess||
|const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > &||
|Platforms||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1ad3c397f801b3acc7c2244d6df7a2bcfb"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDelegate , bool , const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlatformsDelegate||
|bool||
|const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a347ab243202828749ac42454a048bc62"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDynamicDelegate , bool , bSuccess , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & , Response )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlayerSettingsDynamicDelegate||
|bool||
|bSuccess||
|const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &||
|Response||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a1cff4458e14eb1edfe46ea29b6302717"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlayerSettingsDelegate||
|bool||
|const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerInfoSubsystem_8h_1ac1fc5b48c2bf2ff37eff7e7daef3c4a0"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerSettingsBlock , FRH_PlayerInfoGetPlayerSettingsDelegate , FRH_PlayerInfoGetPlayerSettingsDynamicDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlayerSettingsBlock||
|FRH_PlayerInfoGetPlayerSettingsDelegate||
|FRH_PlayerInfoGetPlayerSettingsDynamicDelegate||
|bool||
|const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1ab9830ecc213d96b92cc4523fcdff032c"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDynamicDelegate , bool , bSuccess , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & , Response )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoSetPlayerSettingsDynamicDelegate||
|bool||
|bSuccess||
|const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &||
|Response||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a120ca2a84cadf64254127339e269e3f0"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoSetPlayerSettingsDelegate||
|bool||
|const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerInfoSubsystem_8h_1a4fabdc7f1ae952d95edd3983899fb5aa"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoSetPlayerSettingsBlock , FRH_PlayerInfoSetPlayerSettingsDelegate , FRH_PlayerInfoSetPlayerSettingsDynamicDelegate , bool , const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoSetPlayerSettingsBlock||
|FRH_PlayerInfoSetPlayerSettingsDelegate||
|FRH_PlayerInfoSetPlayerSettingsDynamicDelegate||
|bool||
|const [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a0b9b88629f8cb442109c9e945af1f9f7"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetDisplayNameDynamicDelegate , bool , bSuccess , const FString & , DisplayName )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetDisplayNameDynamicDelegate||
|bool||
|bSuccess||
|const FString &||
|DisplayName||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a81f8fad335776ac2f8edb97aab0df3be"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetDisplayNameDelegate , bool , const FString & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetDisplayNameDelegate||
|bool||
|const FString &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1adad996060a6082758e13da8775baf719"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDynamicDelegate , bool , bSuccess , const TArray< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > & , PlayerInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoLookupPlayerDynamicDelegate||
|bool||
|bSuccess||
|const TArray< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > &||
|PlayerInfo||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1aa3e49bb6b7e717eea2c54de6595b3484"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDelegate , bool , const TArray< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoLookupPlayerDelegate||
|bool||
|const TArray< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1aef219872608f0ede0596f01634a81b72"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerRankingsDynamicDelegate , bool , bSuccess , const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & , PlayerRankingInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlayerRankingsDynamicDelegate||
|bool||
|bSuccess||
|const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &||
|PlayerRankingInfo||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a85748f71b3c8fa3ba1d1149d08040ac2"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerRankingsDelegate , bool , const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PlayerInfoGetPlayerRankingsDelegate||
|bool||
|const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__PlayerInfoSubsystem_8h_1a02c8ef2170c3637f2060e532bed57a5f"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnPresenceUpdatedMulticastDynamicDelegate , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * , PresenceData )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPresenceUpdatedMulticastDynamicDelegate||
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *||
|PresenceData||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__PlayerInfoSubsystem_8h_1a152163e7ca924f8edc7a9f4440d80c0f"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnPresenceUpdatedMulticastDelegate , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPresenceUpdatedMulticastDelegate||
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1aba40234b880c5e08ad9af0076ad98c22"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRequestPlayerPresenceDynamicDelegate , bool , bSuccess , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * , PresenceData )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRequestPlayerPresenceDynamicDelegate||
|bool||
|bSuccess||
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *||
|PresenceData||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a91563d15d2a238b58586511ab5c3b799"></a>

 DECLARE_DELEGATE_TwoParams(FRH_OnRequestPlayerPresenceDelegate , bool , [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRequestPlayerPresenceDelegate||
|bool||
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__PlayerInfoSubsystem_8h_1a62baaeaca139fea322acdd9a2919c8f1"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * , SessionData )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate||
|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) *||
|SessionData||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__PlayerInfoSubsystem_8h_1a3e81f88e3e6d1e189094564cc967e386"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnPlayerSessionsUpdatedMulticastDelegate , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnPlayerSessionsUpdatedMulticastDelegate||
|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) *||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a939bbc771ead65e0f4a50b5deea88f4c"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRequestPlayerSessionsDynamicDelegate , bool , bSuccess , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * , SessionData )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRequestPlayerSessionsDynamicDelegate||
|bool||
|bSuccess||
|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) *||
|SessionData||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInfoSubsystem_8h_1a54e2829987b9bd477d89e028c5a1ef94"></a>

 DECLARE_DELEGATE_TwoParams(FRH_OnRequestPlayerSessionsDelegate , bool , [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRequestPlayerSessionsDelegate||
|bool||
|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) *||

#### Description







