---
title: FRHAPI_LoginResult Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Login result.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo)|[PortalParentAuthResult_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b)||
|bool|[PortalParentAuthResult_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2)|true if PortalParentAuthResult_Optional has been set to a value|
|TArray< FString >|[Permissions_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9)|List of permissions for this user.|
|bool|[Permissions_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0)|true if Permissions_Optional has been set to a value|
|TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) >|[Restrictions_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3)|List of restrictions on this player.|
|bool|[Restrictions_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786)|true if Restrictions_Optional has been set to a value|
|int32|[ActivePlayerId_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5eceb890dd1f28e9864062403a45784e)|Active player ID. DEPRECATED use active_player_uuid instead.|
|bool|[ActivePlayerId_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a3e9f86c543ac4d3c115382e29991757f)|true if ActivePlayerId_Optional has been set to a value|
|FGuid|[ActivePlayerUuid_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a)|Active player UUID.|
|bool|[ActivePlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41)|true if ActivePlayerUuid_Optional has been set to a value|
|ERHAPI_Platform|[Platform_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0dc5395dbda79312a90f1946f4231c1b)|Platform.|
|bool|[Platform_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1af9eee267ff0a0ef04d98176b0f595feb)|true if Platform_Optional has been set to a value|
|int32|[PortalId_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a47d3bde9f717778cac89bb8d62ae9b59)|Portal ID DEPRECATED use platform instead.|
|bool|[PortalId_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2d86cb45ba94ba52ff96d96888c2abda)|true if PortalId_Optional has been set to a value|
|FString|[PortalUserId_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ad5f66896b60689fc1414d092f0daa968)|Portal user ID.|
|bool|[PortalUserId_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aeefd030bad04f66c45751ce2adbadf86)|true if PortalUserId_Optional has been set to a value|
|FString|[DisplayName_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8cdc905ef995721032212eac2a6472fe)|Display name.|
|bool|[DisplayName_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a490d90d8c0d72ce6e3bee3ee328f1e70)|true if DisplayName_Optional has been set to a value|
|int32|[RoleId_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d)|Role ID.|
|bool|[RoleId_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231)|true if RoleId_Optional has been set to a value|
|FGuid|[PersonId_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8f59353274272dcc977a897af4433cdf)|Person ID.|
|bool|[PersonId_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ac4b67378dfa2c4975eeae9acaa635451)|true if PersonId_Optional has been set to a value|
|FString|[AccessToken_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca)|Access token that can be used for future requests.|
|bool|[AccessToken_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995)|true if AccessToken_Optional has been set to a value|
|FString|[RefreshToken_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1)|Refresh token that can be used to refresh authentication for a new access token.|
|bool|[RefreshToken_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756)|true if RefreshToken_Optional has been set to a value|
|FGuid|[PublisherUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2)|Publisher UUID.|
|FGuid|[TenantUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f)|Tenant UUID.|
|FGuid|[ConfigElectorUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116)|Config elector UUID.|
|FGuid|[ClientUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213)|Client UUID.|
|FString|[TokenType](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aa14a8a2d5dd54ac2622d936a977dd2c6)|Token type.|
|int32|[ExpiresIn_Optional](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7d1933cdc5be268381830d15f6c8a132)|Result access token expiration time in seconds.|
|bool|[ExpiresIn_IsSet](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a24059abe66a39f9e4eb782d00cb3fc8b)|true if ExpiresIn_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1af9386114ff2777a0a15b36708f6e5f09)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aa5959a551d8a530e874d75d5595f88d8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) &|[GetPortalParentAuthResult](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1af45c0420e8f2c53dd90f6ab04e8a13cd)()|Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.|
|const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) &|[GetPortalParentAuthResult](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a16396a932b03209e12da35c8c31ec90d)()|Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.|
|const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) &|[GetPortalParentAuthResult](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a45e8281fa0ddfa075482e2bf5987da49)(const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & DefaultValue)|Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalParentAuthResult](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7)([FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & OutValue)|Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) *|[GetPortalParentAuthResultOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7acfe016d627fb1b1f82252ab4ad4139)()|Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) *|[GetPortalParentAuthResultOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1af4bf2b450acbf5a6fcdc0596fc32e01b)()|Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalParentAuthResult](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7a4dba3b5dc18577616224de5a50cdce)([FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) NewValue)|Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.|
|void|[ClearPortalParentAuthResult](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)()|Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.|
|TArray< FString > &|[GetPermissions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ae52fc41eac76d05e0ef38b26fc6778be)()|Gets the value of Permissions_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetPermissions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ab2e0574f4c6cbc666fb4dbe57814e9a5)()|Gets the value of Permissions_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetPermissions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0ed9a8cebad4bc2b0cba5c330550731d)(const TArray< FString > & DefaultValue)|Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPermissions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8)(TArray< FString > & OutValue)|Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.|
|TArray< FString > *|[GetPermissionsOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a80cfa9d4030c594cbe9c1cf7af89e44f)()|Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< FString > *|[GetPermissionsOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0df27d87117ffb7dedb8a998b512e4a3)()|Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPermissions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aabacfbec460b7d38cb8531780e97106a)(TArray< FString > NewValue)|Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.|
|void|[ClearPermissions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)()|Clears the value of Permissions_Optional and sets Permissions_IsSet to false.|
|TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > &|[GetRestrictions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5f81447e492fba869512ee5f8fa39604)()|Gets the value of Restrictions_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > &|[GetRestrictions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0b3682ccc2e6fe31dbb71424150a99e0)()|Gets the value of Restrictions_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > &|[GetRestrictions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0c3558c768839889f205e7703ce00b71)(const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & DefaultValue)|Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRestrictions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279)(TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & OutValue)|Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > *|[GetRestrictionsOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a26d84ee697ce3b4af2694df4a8d4e83b)()|Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > *|[GetRestrictionsOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a60bc420be3304644bf1264a253a030d5)()|Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRestrictions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a43d16a10bb9991d633c37489eee917a2)(TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > NewValue)|Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.|
|void|[ClearRestrictions](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)()|Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.|
|int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1abd6312561724ae3080f95ee5f5e78776)()|Gets the value of ActivePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8380c009e055919c8ceb6a13434626a3)()|Gets the value of ActivePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a6b94a2bb9623072601994c865f0616cd)(const int32 & DefaultValue)|Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ac8fc67732b575bdb76008868d8744c46)(int32 & OutValue)|Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetActivePlayerIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a63a66731a9c657165992fa4df7c3c424)()|Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetActivePlayerIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a32d424747f02d469b2fc202beda1b1a6)()|Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActivePlayerId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a3c3ea9fff80e9f50187686ca97018780)(int32 NewValue)|Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.|
|void|[ClearActivePlayerId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3)()|Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.|
|bool|[IsActivePlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e)()|Returns true if ActivePlayerId_Optional is set and matches the default value.|
|void|[SetActivePlayerIdToDefault](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2)()|Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.|
|FGuid &|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ad16fbc95e56950f7bd52bbb3ac196009)()|Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a4f466e522104c187144289b4954ae604)()|Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a43c60cd2031e4032f0a5ce096b36753c)(const FGuid & DefaultValue)|Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91)(FGuid & OutValue)|Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetActivePlayerUuidOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ada4d3707d7854a11aa9bc369368d4955)()|Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetActivePlayerUuidOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a6fe0d0a464ce9ce890773feda96d3385)()|Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActivePlayerUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a754c95d54fba55b9ad0c3e21e740e9cd)(FGuid NewValue)|Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.|
|void|[ClearActivePlayerUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)()|Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a712826e629138103d8339c89233ffe80)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1afd7f6afc21762473033d3d7040785da2)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aadfdbf9836fe4022991613c7fd291187)(const ERHAPI_Platform & DefaultValue)|Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatform](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2303f44002f5734d8128e429f7f1a645)(ERHAPI_Platform & OutValue)|Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Platform *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a721ec3bb61790e50d1f51ee8392bded3)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Platform *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a326caa8f5f5eef2ca0f0b3750325f16e)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a10048ac1b23f3bf2bc204cefe6113e71)(ERHAPI_Platform NewValue)|Sets the value of Platform_Optional and also sets Platform_IsSet to true.|
|void|[ClearPlatform](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb)()|Clears the value of Platform_Optional and sets Platform_IsSet to false.|
|int32 &|[GetPortalId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a81bb1a5f2b0b910b94e7fb379225ea41)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const int32 &|[GetPortalId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a403967e58a0b7745cec24f0669251d3c)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const int32 &|[GetPortalId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5b1d13bbb8c4812884cc10a655a59775)(const int32 & DefaultValue)|Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a224d268ace8080edbf13687e412c8517)(int32 & OutValue)|Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ae6eeb0d26e97dedec3a62ff6f3a7569b)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1acd24dc648cf2ad13bfa5bd7799a1f8a6)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a85c30ef4fc3e869906bb313a7008dbb3)(int32 NewValue)|Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.|
|void|[ClearPortalId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78)()|Clears the value of PortalId_Optional and sets PortalId_IsSet to false.|
|bool|[IsPortalIdDefaultValue](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc)()|Returns true if PortalId_Optional is set and matches the default value.|
|void|[SetPortalIdToDefault](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba)()|Sets the value of PortalId_Optional to its default and also sets PortalId_IsSet to true.|
|FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7827ac1341c121eb35939596064ad6b1)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a82e3884bf96475d371884c99230ea97b)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a216452de71c6c30385ec9bc64c2fd1cd)(const FString & DefaultValue)|Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalUserId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a6be646bfa0bf28bdb8e1f4480ef30d55)(FString & OutValue)|Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a65f1dd2ca847e2957fd6487b147977ae)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1afcf1c157c01c679ea5786476235a20ce)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalUserId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a77786a9479bdfef56971f5ceacd4c507)(FString NewValue)|Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.|
|void|[ClearPortalUserId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a)()|Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.|
|FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5310c11bcc70cb20b3f250a58e6bd4f5)()|Gets the value of DisplayName_Optional, regardless of it having been set.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a6857d153e9e5aabd9ebb2d9b05c5d61f)()|Gets the value of DisplayName_Optional, regardless of it having been set.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a16d995689359f780431cc035aa54c317)(const FString & DefaultValue)|Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDisplayName](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a436aad15bc9b8f259d7e1cc02bf6340a)(FString & OutValue)|Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDisplayNameOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a0c7ea8df134edbbc29dc44c1fd0b35b3)()|Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDisplayNameOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7b269f06c4e83d0e6c56f19eb9e4a352)()|Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDisplayName](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a56c4a7b1902feaa9c59083353c83ad76)(FString NewValue)|Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.|
|void|[ClearDisplayName](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96)()|Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.|
|int32 &|[GetRoleId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a31ab2c464f256a2d199eefa76fd625de)()|Gets the value of RoleId_Optional, regardless of it having been set.|
|const int32 &|[GetRoleId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a13cc2a2262f4565a4753c25261a45ca9)()|Gets the value of RoleId_Optional, regardless of it having been set.|
|const int32 &|[GetRoleId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a60520556eface9e7d1002c2933c10ae3)(const int32 & DefaultValue)|Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRoleId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c)(int32 & OutValue)|Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetRoleIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aeb169273bdccf56baf16dab675ba9f73)()|Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetRoleIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a4566137520b64f2ee500b9b8f4244560)()|Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRoleId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a911c9fe98ad56c69fdd33892957f7be0)(int32 NewValue)|Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.|
|void|[ClearRoleId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)()|Clears the value of RoleId_Optional and sets RoleId_IsSet to false.|
|bool|[IsRoleIdDefaultValue](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b)()|Returns true if RoleId_Optional is set and matches the default value.|
|void|[SetRoleIdToDefault](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a)()|Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true.|
|FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ad5f7841745b8c2353b872744d1fa430d)()|Gets the value of PersonId_Optional, regardless of it having been set.|
|const FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a50d7210d0f201108372e4c62e25373bf)()|Gets the value of PersonId_Optional, regardless of it having been set.|
|const FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1afcccdfc200e2bcde9006759eeb717a8d)(const FGuid & DefaultValue)|Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPersonId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7a9dee414bf6c9d8a4a34f51843c431c)(FGuid & OutValue)|Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetPersonIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ab423b997c7664336a744a8199ef0c481)()|Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetPersonIdOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a432bead299726f8fbe408be2fdb9d50e)()|Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPersonId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a4099dde0581ef5199fb8256d026c144f)(FGuid NewValue)|Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.|
|void|[ClearPersonId](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81)()|Clears the value of PersonId_Optional and sets PersonId_IsSet to false.|
|FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ae45a5a0b9ddda92565f4a3938418fb71)()|Gets the value of AccessToken_Optional, regardless of it having been set.|
|const FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a38705f5e253421c6ce0354c199779afc)()|Gets the value of AccessToken_Optional, regardless of it having been set.|
|const FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ab7fdf728e3ec81e5bb6959c4c6b55f66)(const FString & DefaultValue)|Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAccessToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09)(FString & OutValue)|Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetAccessTokenOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a4ca170034ba64e4f2f8d2bfa99bdf9a0)()|Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetAccessTokenOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2bf785d937053e66dd735b946c3958c2)()|Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAccessToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ae960932e4a4f114c64864e9cc0991757)(FString NewValue)|Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.|
|void|[ClearAccessToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)()|Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.|
|bool|[IsAccessTokenDefaultValue](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace)()|Returns true if AccessToken_Optional is set and matches the default value.|
|void|[SetAccessTokenToDefault](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27)()|Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true.|
|FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1adda4636d7b154c46c3a360319ed15e19)()|Gets the value of RefreshToken_Optional, regardless of it having been set.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a3958d5ab6a09afba08f0d002d4d06e0b)()|Gets the value of RefreshToken_Optional, regardless of it having been set.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a3fd165bef86a99683dc1890478ec60be)(const FString & DefaultValue)|Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRefreshToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17)(FString & OutValue)|Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRefreshTokenOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a74a35074acf8ea53bb6964afb9e90782)()|Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRefreshTokenOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a1b65228cd4acb2680c676d5d2510c701)()|Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRefreshToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1af125da324043ce86f5bf7636d73509ff)(FString NewValue)|Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.|
|void|[ClearRefreshToken](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)()|Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.|
|FGuid &|[GetPublisherUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a1fd8421a3033ad6b0277631a32801bf5)()|Gets the value of PublisherUuid.|
|const FGuid &|[GetPublisherUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a496281b4f8ecff54d0d769135f8861c1)()|Gets the value of PublisherUuid.|
|void|[SetPublisherUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a27018b14036cce6753ce7a619956c50c)(FGuid NewValue)|Sets the value of PublisherUuid.|
|FGuid &|[GetTenantUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1aebba86ff4902dc42dfcb2bc296d8f747)()|Gets the value of TenantUuid.|
|const FGuid &|[GetTenantUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8292a55c9c109539ad6e70cbf4c1a499)()|Gets the value of TenantUuid.|
|void|[SetTenantUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8e0abade30079d5e6488bf5dcc41f0d6)(FGuid NewValue)|Sets the value of TenantUuid.|
|FGuid &|[GetConfigElectorUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a5351c4867f8998d5e346bfbe2715f173)()|Gets the value of ConfigElectorUuid.|
|const FGuid &|[GetConfigElectorUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1abf235689d54d8df089e2dba84c2fe1fc)()|Gets the value of ConfigElectorUuid.|
|void|[SetConfigElectorUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a6cd60e22848f80de3b925d6649970995)(FGuid NewValue)|Sets the value of ConfigElectorUuid.|
|FGuid &|[GetClientUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a21d4d933e77829f7871845271f4d5823)()|Gets the value of ClientUuid.|
|const FGuid &|[GetClientUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ac3a78366de32fae402b409edafbee950)()|Gets the value of ClientUuid.|
|void|[SetClientUuid](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1ada7aa427ac3999a2dce454588d733676)(FGuid NewValue)|Sets the value of ClientUuid.|
|FString &|[GetTokenType](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a17ef1eb7cc1174968947d78939f557ed)()|Gets the value of TokenType.|
|const FString &|[GetTokenType](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2fd401529903abef949fda4554b6079f)()|Gets the value of TokenType.|
|void|[SetTokenType](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1acbde832a361cf27225d9d753eb3f5b9c)(FString NewValue)|Sets the value of TokenType.|
|int32 &|[GetExpiresIn](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7948484cef7647882defceee9045088d)()|Gets the value of ExpiresIn_Optional, regardless of it having been set.|
|const int32 &|[GetExpiresIn](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1acfaf74510763dc28087a36d48e74e981)()|Gets the value of ExpiresIn_Optional, regardless of it having been set.|
|const int32 &|[GetExpiresIn](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a71ddc53390a573ebb693667e1a343a4f)(const int32 & DefaultValue)|Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpiresIn](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a8bdf9c0d75a04e67ad719453bd104805)(int32 & OutValue)|Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetExpiresInOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a96cebc2f890f990815c207d0e916e7fa)()|Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetExpiresInOrNull](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a7568d218ac98e4cd2a8838d04fdd8cda)()|Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpiresIn](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a859cff3e9039af976ce0f9ccff465694)(int32 NewValue)|Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true.|
|void|[ClearExpiresIn](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae)()|Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false.|
|bool|[IsExpiresInDefaultValue](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a2a984e7838336bff1cb832e105ddebaf)()|Returns true if ExpiresIn_Optional is set and matches the default value.|
|void|[SetExpiresInToDefault](/unreal-plugins/all/structfrhapi__loginresult/#structFRHAPI__LoginResult_1a60c0277fb290298bc3c9c8d9ef6e4b82)()|Sets the value of ExpiresIn_Optional to its default and also sets ExpiresIn_IsSet to true.|
## Public Attributes



### `PortalParentAuthResult_Optional` <a id="structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b"></a>

`FRHAPI_PortalUserInfo FRHAPI_LoginResult::PortalParentAuthResult_Optional`






### `PortalParentAuthResult_IsSet` <a id="structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2"></a>

`bool FRHAPI_LoginResult::PortalParentAuthResult_IsSet`

true if PortalParentAuthResult_Optional has been set to a value




### `Permissions_Optional` <a id="structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9"></a>

`TArray<FString> FRHAPI_LoginResult::Permissions_Optional`

List of permissions for this user.




### `Permissions_IsSet` <a id="structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0"></a>

`bool FRHAPI_LoginResult::Permissions_IsSet`

true if Permissions_Optional has been set to a value




### `Restrictions_Optional` <a id="structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3"></a>

`TArray<FRHAPI_Restriction> FRHAPI_LoginResult::Restrictions_Optional`

List of restrictions on this player.




### `Restrictions_IsSet` <a id="structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786"></a>

`bool FRHAPI_LoginResult::Restrictions_IsSet`

true if Restrictions_Optional has been set to a value




### `ActivePlayerId_Optional` <a id="structFRHAPI__LoginResult_1a5eceb890dd1f28e9864062403a45784e"></a>

`int32 FRHAPI_LoginResult::ActivePlayerId_Optional`

Active player ID. DEPRECATED use active_player_uuid instead.




### `ActivePlayerId_IsSet` <a id="structFRHAPI__LoginResult_1a3e9f86c543ac4d3c115382e29991757f"></a>

`bool FRHAPI_LoginResult::ActivePlayerId_IsSet`

true if ActivePlayerId_Optional has been set to a value




### `ActivePlayerUuid_Optional` <a id="structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a"></a>

`FGuid FRHAPI_LoginResult::ActivePlayerUuid_Optional`

Active player UUID.




### `ActivePlayerUuid_IsSet` <a id="structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41"></a>

`bool FRHAPI_LoginResult::ActivePlayerUuid_IsSet`

true if ActivePlayerUuid_Optional has been set to a value




### `Platform_Optional` <a id="structFRHAPI__LoginResult_1a0dc5395dbda79312a90f1946f4231c1b"></a>

`ERHAPI_Platform FRHAPI_LoginResult::Platform_Optional`

Platform.




### `Platform_IsSet` <a id="structFRHAPI__LoginResult_1af9eee267ff0a0ef04d98176b0f595feb"></a>

`bool FRHAPI_LoginResult::Platform_IsSet`

true if Platform_Optional has been set to a value




### `PortalId_Optional` <a id="structFRHAPI__LoginResult_1a47d3bde9f717778cac89bb8d62ae9b59"></a>

`int32 FRHAPI_LoginResult::PortalId_Optional`

Portal ID DEPRECATED use platform instead.




### `PortalId_IsSet` <a id="structFRHAPI__LoginResult_1a2d86cb45ba94ba52ff96d96888c2abda"></a>

`bool FRHAPI_LoginResult::PortalId_IsSet`

true if PortalId_Optional has been set to a value




### `PortalUserId_Optional` <a id="structFRHAPI__LoginResult_1ad5f66896b60689fc1414d092f0daa968"></a>

`FString FRHAPI_LoginResult::PortalUserId_Optional`

Portal user ID.




### `PortalUserId_IsSet` <a id="structFRHAPI__LoginResult_1aeefd030bad04f66c45751ce2adbadf86"></a>

`bool FRHAPI_LoginResult::PortalUserId_IsSet`

true if PortalUserId_Optional has been set to a value




### `DisplayName_Optional` <a id="structFRHAPI__LoginResult_1a8cdc905ef995721032212eac2a6472fe"></a>

`FString FRHAPI_LoginResult::DisplayName_Optional`

Display name.




### `DisplayName_IsSet` <a id="structFRHAPI__LoginResult_1a490d90d8c0d72ce6e3bee3ee328f1e70"></a>

`bool FRHAPI_LoginResult::DisplayName_IsSet`

true if DisplayName_Optional has been set to a value




### `RoleId_Optional` <a id="structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d"></a>

`int32 FRHAPI_LoginResult::RoleId_Optional`

Role ID.




### `RoleId_IsSet` <a id="structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231"></a>

`bool FRHAPI_LoginResult::RoleId_IsSet`

true if RoleId_Optional has been set to a value




### `PersonId_Optional` <a id="structFRHAPI__LoginResult_1a8f59353274272dcc977a897af4433cdf"></a>

`FGuid FRHAPI_LoginResult::PersonId_Optional`

Person ID.




### `PersonId_IsSet` <a id="structFRHAPI__LoginResult_1ac4b67378dfa2c4975eeae9acaa635451"></a>

`bool FRHAPI_LoginResult::PersonId_IsSet`

true if PersonId_Optional has been set to a value




### `AccessToken_Optional` <a id="structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca"></a>

`FString FRHAPI_LoginResult::AccessToken_Optional`

Access token that can be used for future requests.




### `AccessToken_IsSet` <a id="structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995"></a>

`bool FRHAPI_LoginResult::AccessToken_IsSet`

true if AccessToken_Optional has been set to a value




### `RefreshToken_Optional` <a id="structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1"></a>

`FString FRHAPI_LoginResult::RefreshToken_Optional`

Refresh token that can be used to refresh authentication for a new access token.




### `RefreshToken_IsSet` <a id="structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756"></a>

`bool FRHAPI_LoginResult::RefreshToken_IsSet`

true if RefreshToken_Optional has been set to a value




### `PublisherUuid` <a id="structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2"></a>

`FGuid FRHAPI_LoginResult::PublisherUuid`

Publisher UUID.




### `TenantUuid` <a id="structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f"></a>

`FGuid FRHAPI_LoginResult::TenantUuid`

Tenant UUID.




### `ConfigElectorUuid` <a id="structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116"></a>

`FGuid FRHAPI_LoginResult::ConfigElectorUuid`

Config elector UUID.




### `ClientUuid` <a id="structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213"></a>

`FGuid FRHAPI_LoginResult::ClientUuid`

Client UUID.




### `TokenType` <a id="structFRHAPI__LoginResult_1aa14a8a2d5dd54ac2622d936a977dd2c6"></a>

`FString FRHAPI_LoginResult::TokenType`

Token type.




### `ExpiresIn_Optional` <a id="structFRHAPI__LoginResult_1a7d1933cdc5be268381830d15f6c8a132"></a>

`int32 FRHAPI_LoginResult::ExpiresIn_Optional`

Result access token expiration time in seconds.




### `ExpiresIn_IsSet` <a id="structFRHAPI__LoginResult_1a24059abe66a39f9e4eb782d00cb3fc8b"></a>

`bool FRHAPI_LoginResult::ExpiresIn_IsSet`

true if ExpiresIn_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__LoginResult_1af9386114ff2777a0a15b36708f6e5f09"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__LoginResult_1aa5959a551d8a530e874d75d5595f88d8"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetPortalParentAuthResult` <a id="structFRHAPI__LoginResult_1af45c0420e8f2c53dd90f6ab04e8a13cd"></a>

[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & GetPortalParentAuthResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.




### `GetPortalParentAuthResult` <a id="structFRHAPI__LoginResult_1a16396a932b03209e12da35c8c31ec90d"></a>

const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & GetPortalParentAuthResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.




### `GetPortalParentAuthResult` <a id="structFRHAPI__LoginResult_1a45e8281fa0ddfa075482e2bf5987da49"></a>

const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & GetPortalParentAuthResult(const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) &|DefaultValue|

#### Description

Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalParentAuthResult` <a id="structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7"></a>

bool GetPortalParentAuthResult([FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) &|OutValue|

#### Description

Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalParentAuthResultOrNull` <a id="structFRHAPI__LoginResult_1a7acfe016d627fb1b1f82252ab4ad4139"></a>

[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) * GetPortalParentAuthResultOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalParentAuthResultOrNull` <a id="structFRHAPI__LoginResult_1af4bf2b450acbf5a6fcdc0596fc32e01b"></a>

const [FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) * GetPortalParentAuthResultOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalParentAuthResult` <a id="structFRHAPI__LoginResult_1a7a4dba3b5dc18577616224de5a50cdce"></a>

void SetPortalParentAuthResult([FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PortalUserInfo](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo)|NewValue|

#### Description

Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.




### `ClearPortalParentAuthResult` <a id="structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24"></a>

void ClearPortalParentAuthResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.




### `GetPermissions` <a id="structFRHAPI__LoginResult_1ae52fc41eac76d05e0ef38b26fc6778be"></a>

TArray< FString > & GetPermissions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Permissions_Optional, regardless of it having been set.




### `GetPermissions` <a id="structFRHAPI__LoginResult_1ab2e0574f4c6cbc666fb4dbe57814e9a5"></a>

const TArray< FString > & GetPermissions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Permissions_Optional, regardless of it having been set.




### `GetPermissions` <a id="structFRHAPI__LoginResult_1a0ed9a8cebad4bc2b0cba5c330550731d"></a>

const TArray< FString > & GetPermissions(const TArray< FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|DefaultValue|

#### Description

Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPermissions` <a id="structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8"></a>

bool GetPermissions(TArray< FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString > &|OutValue|

#### Description

Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.




### `GetPermissionsOrNull` <a id="structFRHAPI__LoginResult_1a80cfa9d4030c594cbe9c1cf7af89e44f"></a>

TArray< FString > * GetPermissionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.




### `GetPermissionsOrNull` <a id="structFRHAPI__LoginResult_1a0df27d87117ffb7dedb8a998b512e4a3"></a>

const TArray< FString > * GetPermissionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.




### `SetPermissions` <a id="structFRHAPI__LoginResult_1aabacfbec460b7d38cb8531780e97106a"></a>

void SetPermissions(TArray< FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString >|NewValue|

#### Description

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.




### `ClearPermissions` <a id="structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb"></a>

void ClearPermissions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Permissions_Optional and sets Permissions_IsSet to false.




### `GetRestrictions` <a id="structFRHAPI__LoginResult_1a5f81447e492fba869512ee5f8fa39604"></a>

TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & GetRestrictions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Restrictions_Optional, regardless of it having been set.




### `GetRestrictions` <a id="structFRHAPI__LoginResult_1a0b3682ccc2e6fe31dbb71424150a99e0"></a>

const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & GetRestrictions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Restrictions_Optional, regardless of it having been set.




### `GetRestrictions` <a id="structFRHAPI__LoginResult_1a0c3558c768839889f205e7703ce00b71"></a>

const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & GetRestrictions(const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > &|DefaultValue|

#### Description

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRestrictions` <a id="structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279"></a>

bool GetRestrictions(TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > &|OutValue|

#### Description

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.




### `GetRestrictionsOrNull` <a id="structFRHAPI__LoginResult_1a26d84ee697ce3b4af2694df4a8d4e83b"></a>

TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > * GetRestrictionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.




### `GetRestrictionsOrNull` <a id="structFRHAPI__LoginResult_1a60bc420be3304644bf1264a253a030d5"></a>

const TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > * GetRestrictionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.




### `SetRestrictions` <a id="structFRHAPI__LoginResult_1a43d16a10bb9991d633c37489eee917a2"></a>

void SetRestrictions(TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_Restriction](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction) >|NewValue|

#### Description

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.




### `ClearRestrictions` <a id="structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5"></a>

void ClearRestrictions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.




### `GetActivePlayerId` <a id="structFRHAPI__LoginResult_1abd6312561724ae3080f95ee5f5e78776"></a>

int32 & GetActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerId_Optional, regardless of it having been set.




### `GetActivePlayerId` <a id="structFRHAPI__LoginResult_1a8380c009e055919c8ceb6a13434626a3"></a>

const int32 & GetActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerId_Optional, regardless of it having been set.




### `GetActivePlayerId` <a id="structFRHAPI__LoginResult_1a6b94a2bb9623072601994c865f0616cd"></a>

const int32 & GetActivePlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActivePlayerId` <a id="structFRHAPI__LoginResult_1ac8fc67732b575bdb76008868d8744c46"></a>

bool GetActivePlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetActivePlayerIdOrNull` <a id="structFRHAPI__LoginResult_1a63a66731a9c657165992fa4df7c3c424"></a>

int32 * GetActivePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetActivePlayerIdOrNull` <a id="structFRHAPI__LoginResult_1a32d424747f02d469b2fc202beda1b1a6"></a>

const int32 * GetActivePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetActivePlayerId` <a id="structFRHAPI__LoginResult_1a3c3ea9fff80e9f50187686ca97018780"></a>

void SetActivePlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.




### `ClearActivePlayerId` <a id="structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3"></a>

void ClearActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.




### `IsActivePlayerIdDefaultValue` <a id="structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e"></a>

bool IsActivePlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ActivePlayerId_Optional is set and matches the default value.




### `SetActivePlayerIdToDefault` <a id="structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2"></a>

void SetActivePlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.




### `GetActivePlayerUuid` <a id="structFRHAPI__LoginResult_1ad16fbc95e56950f7bd52bbb3ac196009"></a>

FGuid & GetActivePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.




### `GetActivePlayerUuid` <a id="structFRHAPI__LoginResult_1a4f466e522104c187144289b4954ae604"></a>

const FGuid & GetActivePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.




### `GetActivePlayerUuid` <a id="structFRHAPI__LoginResult_1a43c60cd2031e4032f0a5ce096b36753c"></a>

const FGuid & GetActivePlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActivePlayerUuid` <a id="structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91"></a>

bool GetActivePlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetActivePlayerUuidOrNull` <a id="structFRHAPI__LoginResult_1ada4d3707d7854a11aa9bc369368d4955"></a>

FGuid * GetActivePlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetActivePlayerUuidOrNull` <a id="structFRHAPI__LoginResult_1a6fe0d0a464ce9ce890773feda96d3385"></a>

const FGuid * GetActivePlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetActivePlayerUuid` <a id="structFRHAPI__LoginResult_1a754c95d54fba55b9ad0c3e21e740e9cd"></a>

void SetActivePlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.




### `ClearActivePlayerUuid` <a id="structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d"></a>

void ClearActivePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.




### `GetPlatform` <a id="structFRHAPI__LoginResult_1a712826e629138103d8339c89233ffe80"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__LoginResult_1afd7f6afc21762473033d3d7040785da2"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__LoginResult_1aadfdbf9836fe4022991613c7fd291187"></a>

const ERHAPI_Platform & GetPlatform(const ERHAPI_Platform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|DefaultValue|

#### Description

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatform` <a id="structFRHAPI__LoginResult_1a2303f44002f5734d8128e429f7f1a645"></a>

bool GetPlatform(ERHAPI_Platform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform &|OutValue|

#### Description

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformOrNull` <a id="structFRHAPI__LoginResult_1a721ec3bb61790e50d1f51ee8392bded3"></a>

ERHAPI_Platform * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformOrNull` <a id="structFRHAPI__LoginResult_1a326caa8f5f5eef2ca0f0b3750325f16e"></a>

const ERHAPI_Platform * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatform` <a id="structFRHAPI__LoginResult_1a10048ac1b23f3bf2bc204cefe6113e71"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform_Optional and also sets Platform_IsSet to true.




### `ClearPlatform` <a id="structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb"></a>

void ClearPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Platform_Optional and sets Platform_IsSet to false.




### `GetPortalId` <a id="structFRHAPI__LoginResult_1a81bb1a5f2b0b910b94e7fb379225ea41"></a>

int32 & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__LoginResult_1a403967e58a0b7745cec24f0669251d3c"></a>

const int32 & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__LoginResult_1a5b1d13bbb8c4812884cc10a655a59775"></a>

const int32 & GetPortalId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalId` <a id="structFRHAPI__LoginResult_1a224d268ace8080edbf13687e412c8517"></a>

bool GetPortalId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalIdOrNull` <a id="structFRHAPI__LoginResult_1ae6eeb0d26e97dedec3a62ff6f3a7569b"></a>

int32 * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalIdOrNull` <a id="structFRHAPI__LoginResult_1acd24dc648cf2ad13bfa5bd7799a1f8a6"></a>

const int32 * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalId` <a id="structFRHAPI__LoginResult_1a85c30ef4fc3e869906bb313a7008dbb3"></a>

void SetPortalId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.




### `ClearPortalId` <a id="structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78"></a>

void ClearPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.




### `IsPortalIdDefaultValue` <a id="structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc"></a>

bool IsPortalIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PortalId_Optional is set and matches the default value.




### `SetPortalIdToDefault` <a id="structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba"></a>

void SetPortalIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PortalId_Optional to its default and also sets PortalId_IsSet to true.




### `GetPortalUserId` <a id="structFRHAPI__LoginResult_1a7827ac1341c121eb35939596064ad6b1"></a>

FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__LoginResult_1a82e3884bf96475d371884c99230ea97b"></a>

const FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__LoginResult_1a216452de71c6c30385ec9bc64c2fd1cd"></a>

const FString & GetPortalUserId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalUserId` <a id="structFRHAPI__LoginResult_1a6be646bfa0bf28bdb8e1f4480ef30d55"></a>

bool GetPortalUserId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__LoginResult_1a65f1dd2ca847e2957fd6487b147977ae"></a>

FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__LoginResult_1afcf1c157c01c679ea5786476235a20ce"></a>

const FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalUserId` <a id="structFRHAPI__LoginResult_1a77786a9479bdfef56971f5ceacd4c507"></a>

void SetPortalUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.




### `ClearPortalUserId` <a id="structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a"></a>

void ClearPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.




### `GetDisplayName` <a id="structFRHAPI__LoginResult_1a5310c11bcc70cb20b3f250a58e6bd4f5"></a>

FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName_Optional, regardless of it having been set.




### `GetDisplayName` <a id="structFRHAPI__LoginResult_1a6857d153e9e5aabd9ebb2d9b05c5d61f"></a>

const FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName_Optional, regardless of it having been set.




### `GetDisplayName` <a id="structFRHAPI__LoginResult_1a16d995689359f780431cc035aa54c317"></a>

const FString & GetDisplayName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDisplayName` <a id="structFRHAPI__LoginResult_1a436aad15bc9b8f259d7e1cc02bf6340a"></a>

bool GetDisplayName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.




### `GetDisplayNameOrNull` <a id="structFRHAPI__LoginResult_1a0c7ea8df134edbbc29dc44c1fd0b35b3"></a>

FString * GetDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.




### `GetDisplayNameOrNull` <a id="structFRHAPI__LoginResult_1a7b269f06c4e83d0e6c56f19eb9e4a352"></a>

const FString * GetDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.




### `SetDisplayName` <a id="structFRHAPI__LoginResult_1a56c4a7b1902feaa9c59083353c83ad76"></a>

void SetDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.




### `ClearDisplayName` <a id="structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96"></a>

void ClearDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.




### `GetRoleId` <a id="structFRHAPI__LoginResult_1a31ab2c464f256a2d199eefa76fd625de"></a>

int32 & GetRoleId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RoleId_Optional, regardless of it having been set.




### `GetRoleId` <a id="structFRHAPI__LoginResult_1a13cc2a2262f4565a4753c25261a45ca9"></a>

const int32 & GetRoleId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RoleId_Optional, regardless of it having been set.




### `GetRoleId` <a id="structFRHAPI__LoginResult_1a60520556eface9e7d1002c2933c10ae3"></a>

const int32 & GetRoleId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRoleId` <a id="structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c"></a>

bool GetRoleId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.




### `GetRoleIdOrNull` <a id="structFRHAPI__LoginResult_1aeb169273bdccf56baf16dab675ba9f73"></a>

int32 * GetRoleIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.




### `GetRoleIdOrNull` <a id="structFRHAPI__LoginResult_1a4566137520b64f2ee500b9b8f4244560"></a>

const int32 * GetRoleIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.




### `SetRoleId` <a id="structFRHAPI__LoginResult_1a911c9fe98ad56c69fdd33892957f7be0"></a>

void SetRoleId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.




### `ClearRoleId` <a id="structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9"></a>

void ClearRoleId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RoleId_Optional and sets RoleId_IsSet to false.




### `IsRoleIdDefaultValue` <a id="structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b"></a>

bool IsRoleIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RoleId_Optional is set and matches the default value.




### `SetRoleIdToDefault` <a id="structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a"></a>

void SetRoleIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true.




### `GetPersonId` <a id="structFRHAPI__LoginResult_1ad5f7841745b8c2353b872744d1fa430d"></a>

FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId_Optional, regardless of it having been set.




### `GetPersonId` <a id="structFRHAPI__LoginResult_1a50d7210d0f201108372e4c62e25373bf"></a>

const FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId_Optional, regardless of it having been set.




### `GetPersonId` <a id="structFRHAPI__LoginResult_1afcccdfc200e2bcde9006759eeb717a8d"></a>

const FGuid & GetPersonId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPersonId` <a id="structFRHAPI__LoginResult_1a7a9dee414bf6c9d8a4a34f51843c431c"></a>

bool GetPersonId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.




### `GetPersonIdOrNull` <a id="structFRHAPI__LoginResult_1ab423b997c7664336a744a8199ef0c481"></a>

FGuid * GetPersonIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.




### `GetPersonIdOrNull` <a id="structFRHAPI__LoginResult_1a432bead299726f8fbe408be2fdb9d50e"></a>

const FGuid * GetPersonIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.




### `SetPersonId` <a id="structFRHAPI__LoginResult_1a4099dde0581ef5199fb8256d026c144f"></a>

void SetPersonId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.




### `ClearPersonId` <a id="structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81"></a>

void ClearPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.




### `GetAccessToken` <a id="structFRHAPI__LoginResult_1ae45a5a0b9ddda92565f4a3938418fb71"></a>

FString & GetAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AccessToken_Optional, regardless of it having been set.




### `GetAccessToken` <a id="structFRHAPI__LoginResult_1a38705f5e253421c6ce0354c199779afc"></a>

const FString & GetAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AccessToken_Optional, regardless of it having been set.




### `GetAccessToken` <a id="structFRHAPI__LoginResult_1ab7fdf728e3ec81e5bb6959c4c6b55f66"></a>

const FString & GetAccessToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAccessToken` <a id="structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09"></a>

bool GetAccessToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.




### `GetAccessTokenOrNull` <a id="structFRHAPI__LoginResult_1a4ca170034ba64e4f2f8d2bfa99bdf9a0"></a>

FString * GetAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.




### `GetAccessTokenOrNull` <a id="structFRHAPI__LoginResult_1a2bf785d937053e66dd735b946c3958c2"></a>

const FString * GetAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.




### `SetAccessToken` <a id="structFRHAPI__LoginResult_1ae960932e4a4f114c64864e9cc0991757"></a>

void SetAccessToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.




### `ClearAccessToken` <a id="structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc"></a>

void ClearAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.




### `IsAccessTokenDefaultValue` <a id="structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace"></a>

bool IsAccessTokenDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AccessToken_Optional is set and matches the default value.




### `SetAccessTokenToDefault` <a id="structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27"></a>

void SetAccessTokenToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true.




### `GetRefreshToken` <a id="structFRHAPI__LoginResult_1adda4636d7b154c46c3a360319ed15e19"></a>

FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken_Optional, regardless of it having been set.




### `GetRefreshToken` <a id="structFRHAPI__LoginResult_1a3958d5ab6a09afba08f0d002d4d06e0b"></a>

const FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken_Optional, regardless of it having been set.




### `GetRefreshToken` <a id="structFRHAPI__LoginResult_1a3fd165bef86a99683dc1890478ec60be"></a>

const FString & GetRefreshToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRefreshToken` <a id="structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17"></a>

bool GetRefreshToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.




### `GetRefreshTokenOrNull` <a id="structFRHAPI__LoginResult_1a74a35074acf8ea53bb6964afb9e90782"></a>

FString * GetRefreshTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.




### `GetRefreshTokenOrNull` <a id="structFRHAPI__LoginResult_1a1b65228cd4acb2680c676d5d2510c701"></a>

const FString * GetRefreshTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.




### `SetRefreshToken` <a id="structFRHAPI__LoginResult_1af125da324043ce86f5bf7636d73509ff"></a>

void SetRefreshToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.




### `ClearRefreshToken` <a id="structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99"></a>

void ClearRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.




### `GetPublisherUuid` <a id="structFRHAPI__LoginResult_1a1fd8421a3033ad6b0277631a32801bf5"></a>

FGuid & GetPublisherUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PublisherUuid.




### `GetPublisherUuid` <a id="structFRHAPI__LoginResult_1a496281b4f8ecff54d0d769135f8861c1"></a>

const FGuid & GetPublisherUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PublisherUuid.




### `SetPublisherUuid` <a id="structFRHAPI__LoginResult_1a27018b14036cce6753ce7a619956c50c"></a>

void SetPublisherUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PublisherUuid.




### `GetTenantUuid` <a id="structFRHAPI__LoginResult_1aebba86ff4902dc42dfcb2bc296d8f747"></a>

FGuid & GetTenantUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TenantUuid.




### `GetTenantUuid` <a id="structFRHAPI__LoginResult_1a8292a55c9c109539ad6e70cbf4c1a499"></a>

const FGuid & GetTenantUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TenantUuid.




### `SetTenantUuid` <a id="structFRHAPI__LoginResult_1a8e0abade30079d5e6488bf5dcc41f0d6"></a>

void SetTenantUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of TenantUuid.




### `GetConfigElectorUuid` <a id="structFRHAPI__LoginResult_1a5351c4867f8998d5e346bfbe2715f173"></a>

FGuid & GetConfigElectorUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ConfigElectorUuid.




### `GetConfigElectorUuid` <a id="structFRHAPI__LoginResult_1abf235689d54d8df089e2dba84c2fe1fc"></a>

const FGuid & GetConfigElectorUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ConfigElectorUuid.




### `SetConfigElectorUuid` <a id="structFRHAPI__LoginResult_1a6cd60e22848f80de3b925d6649970995"></a>

void SetConfigElectorUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ConfigElectorUuid.




### `GetClientUuid` <a id="structFRHAPI__LoginResult_1a21d4d933e77829f7871845271f4d5823"></a>

FGuid & GetClientUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientUuid.




### `GetClientUuid` <a id="structFRHAPI__LoginResult_1ac3a78366de32fae402b409edafbee950"></a>

const FGuid & GetClientUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientUuid.




### `SetClientUuid` <a id="structFRHAPI__LoginResult_1ada7aa427ac3999a2dce454588d733676"></a>

void SetClientUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ClientUuid.




### `GetTokenType` <a id="structFRHAPI__LoginResult_1a17ef1eb7cc1174968947d78939f557ed"></a>

FString & GetTokenType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TokenType.




### `GetTokenType` <a id="structFRHAPI__LoginResult_1a2fd401529903abef949fda4554b6079f"></a>

const FString & GetTokenType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TokenType.




### `SetTokenType` <a id="structFRHAPI__LoginResult_1acbde832a361cf27225d9d753eb3f5b9c"></a>

void SetTokenType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of TokenType.




### `GetExpiresIn` <a id="structFRHAPI__LoginResult_1a7948484cef7647882defceee9045088d"></a>

int32 & GetExpiresIn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExpiresIn_Optional, regardless of it having been set.




### `GetExpiresIn` <a id="structFRHAPI__LoginResult_1acfaf74510763dc28087a36d48e74e981"></a>

const int32 & GetExpiresIn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExpiresIn_Optional, regardless of it having been set.




### `GetExpiresIn` <a id="structFRHAPI__LoginResult_1a71ddc53390a573ebb693667e1a343a4f"></a>

const int32 & GetExpiresIn(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpiresIn` <a id="structFRHAPI__LoginResult_1a8bdf9c0d75a04e67ad719453bd104805"></a>

bool GetExpiresIn(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresInOrNull` <a id="structFRHAPI__LoginResult_1a96cebc2f890f990815c207d0e916e7fa"></a>

int32 * GetExpiresInOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresInOrNull` <a id="structFRHAPI__LoginResult_1a7568d218ac98e4cd2a8838d04fdd8cda"></a>

const int32 * GetExpiresInOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.




### `SetExpiresIn` <a id="structFRHAPI__LoginResult_1a859cff3e9039af976ce0f9ccff465694"></a>

void SetExpiresIn(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true.




### `ClearExpiresIn` <a id="structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae"></a>

void ClearExpiresIn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false.




### `IsExpiresInDefaultValue` <a id="structFRHAPI__LoginResult_1a2a984e7838336bff1cb832e105ddebaf"></a>

bool IsExpiresInDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ExpiresIn_Optional is set and matches the default value.




### `SetExpiresInToDefault` <a id="structFRHAPI__LoginResult_1a60c0277fb290298bc3c9c8d9ef6e4b82"></a>

void SetExpiresInToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ExpiresIn_Optional to its default and also sets ExpiresIn_IsSet to true.





