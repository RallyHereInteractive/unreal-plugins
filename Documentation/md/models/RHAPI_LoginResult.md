# RHAPI_LoginResult <a id="group__RHAPI__LoginResult"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginResult`](#structFRHAPI__LoginResult) | 

## struct `FRHAPI_LoginResult` <a id="structFRHAPI__LoginResult"></a>

```
struct FRHAPI_LoginResult
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__LoginResult_1a6a195b87e1d22fa5b77b86e7d376ebd1) | 
`public int32 `[`PortalId`](#structFRHAPI__LoginResult_1a3898b1b959f1ff5f3cc950e0d547ba32) | 
`public FString `[`PortalUserId`](#structFRHAPI__LoginResult_1a9237ecf76d2eb6d9ed3a804e3980b741) | 
`public FString `[`DisplayName`](#structFRHAPI__LoginResult_1ae364a213c068323650e9601609858258) | 
`public `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` `[`PortalParentAuthResult_Optional`](#structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b) | 
`public bool `[`PortalParentAuthResult_IsSet`](#structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2) | true if PortalParentAuthResult_Optional has been set to a value
`public TArray< FString > `[`Permissions_Optional`](#structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9) | List of permissions for this user.
`public bool `[`Permissions_IsSet`](#structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0) | true if Permissions_Optional has been set to a value
`public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3) | List of restrictions on this player.
`public bool `[`Restrictions_IsSet`](#structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786) | true if Restrictions_Optional has been set to a value
`public int32 `[`ActivePlayerId`](#structFRHAPI__LoginResult_1a1c655acbbbf60ee0ce3148ecccec823f) | 
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a) | 
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41) | true if ActivePlayerUuid_Optional has been set to a value
`public int32 `[`RoleId_Optional`](#structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d) | 
`public bool `[`RoleId_IsSet`](#structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231) | true if RoleId_Optional has been set to a value
`public FGuid `[`PersonId`](#structFRHAPI__LoginResult_1ab83a5487d85f800109203fd8fdff8803) | 
`public FString `[`AccessToken_Optional`](#structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca) | 
`public bool `[`AccessToken_IsSet`](#structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995) | true if AccessToken_Optional has been set to a value
`public FString `[`RefreshToken_Optional`](#structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1) | 
`public bool `[`RefreshToken_IsSet`](#structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756) | true if RefreshToken_Optional has been set to a value
`public FGuid `[`PublisherUuid`](#structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2) | 
`public FGuid `[`TenantUuid`](#structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f) | 
`public FGuid `[`ConfigElectorUuid`](#structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116) | 
`public FGuid `[`ClientUuid`](#structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213) | 
`public virtual bool `[`FromJson`](#structFRHAPI__LoginResult_1af9386114ff2777a0a15b36708f6e5f09)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginResult_1aa5959a551d8a530e874d75d5595f88d8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a712826e629138103d8339c89233ffe80)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1afd7f6afc21762473033d3d7040785da2)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__LoginResult_1a10048ac1b23f3bf2bc204cefe6113e71)`(ERHAPI_Platform NewValue)` | Sets the value of Platform.
`public inline int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a81bb1a5f2b0b910b94e7fb379225ea41)`()` | Gets the value of PortalId.
`public inline const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a403967e58a0b7745cec24f0669251d3c)`() const` | Gets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__LoginResult_1a85c30ef4fc3e869906bb313a7008dbb3)`(int32 NewValue)` | Sets the value of PortalId.
`public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc)`() const` | Returns true if PortalId matches the default value.
`public inline void `[`SetPortalIdToDefault`](#structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba)`()` | Sets the value of PortalId to its default
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a7827ac1341c121eb35939596064ad6b1)`()` | Gets the value of PortalUserId.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a82e3884bf96475d371884c99230ea97b)`() const` | Gets the value of PortalUserId.
`public inline void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a77786a9479bdfef56971f5ceacd4c507)`(FString NewValue)` | Sets the value of PortalUserId.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a5310c11bcc70cb20b3f250a58e6bd4f5)`()` | Gets the value of DisplayName.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a6857d153e9e5aabd9ebb2d9b05c5d61f)`() const` | Gets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a56c4a7b1902feaa9c59083353c83ad76)`(FString NewValue)` | Sets the value of DisplayName.
`public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1af45c0420e8f2c53dd90f6ab04e8a13cd)`()` | Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a16396a932b03209e12da35c8c31ec90d)`() const` | Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a45e8281fa0ddfa075482e2bf5987da49)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & DefaultValue) const` | Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & OutValue) const` | Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a7acfe016d627fb1b1f82252ab4ad4139)`()` | Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1af4bf2b450acbf5a6fcdc0596fc32e01b)`() const` | Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a7a4dba3b5dc18577616224de5a50cdce)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` NewValue)` | Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.
`public inline void `[`ClearPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)`()` | Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.
`public inline TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1ae52fc41eac76d05e0ef38b26fc6778be)`()` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1ab2e0574f4c6cbc666fb4dbe57814e9a5)`() const` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a0ed9a8cebad4bc2b0cba5c330550731d)`(const TArray< FString > & DefaultValue) const` | Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPermissions`](#structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1a80cfa9d4030c594cbe9c1cf7af89e44f)`()` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1a0df27d87117ffb7dedb8a998b512e4a3)`() const` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPermissions`](#structFRHAPI__LoginResult_1aabacfbec460b7d38cb8531780e97106a)`(TArray< FString > NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.
`public inline void `[`ClearPermissions`](#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)`()` | Clears the value of Permissions_Optional and sets Permissions_IsSet to false.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a5f81447e492fba869512ee5f8fa39604)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a0b3682ccc2e6fe31dbb71424150a99e0)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a0c3558c768839889f205e7703ce00b71)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a26d84ee697ce3b4af2694df4a8d4e83b)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a60bc420be3304644bf1264a253a030d5)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRestrictions`](#structFRHAPI__LoginResult_1a43d16a10bb9991d633c37489eee917a2)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline void `[`ClearRestrictions`](#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1abd6312561724ae3080f95ee5f5e78776)`()` | Gets the value of ActivePlayerId.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a8380c009e055919c8ceb6a13434626a3)`() const` | Gets the value of ActivePlayerId.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1a3c3ea9fff80e9f50187686ca97018780)`(int32 NewValue)` | Sets the value of ActivePlayerId.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e)`() const` | Returns true if ActivePlayerId matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2)`()` | Sets the value of ActivePlayerId to its default
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1ad16fbc95e56950f7bd52bbb3ac196009)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a4f466e522104c187144289b4954ae604)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a43c60cd2031e4032f0a5ce096b36753c)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1ada4d3707d7854a11aa9bc369368d4955)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1a6fe0d0a464ce9ce890773feda96d3385)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a754c95d54fba55b9ad0c3e21e740e9cd)`(FGuid NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a31ab2c464f256a2d199eefa76fd625de)`()` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a13cc2a2262f4565a4753c25261a45ca9)`() const` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a60520556eface9e7d1002c2933c10ae3)`(const int32 & DefaultValue) const` | Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRoleId`](#structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c)`(int32 & OutValue) const` | Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1aeb169273bdccf56baf16dab675ba9f73)`()` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a4566137520b64f2ee500b9b8f4244560)`() const` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRoleId`](#structFRHAPI__LoginResult_1a911c9fe98ad56c69fdd33892957f7be0)`(int32 NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.
`public inline void `[`ClearRoleId`](#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)`()` | Clears the value of RoleId_Optional and sets RoleId_IsSet to false.
`public inline bool `[`IsRoleIdDefaultValue`](#structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b)`() const` | Returns true if RoleId_Optional is set and matches the default value.
`public inline void `[`SetRoleIdToDefault`](#structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a)`()` | Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1ad5f7841745b8c2353b872744d1fa430d)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a50d7210d0f201108372e4c62e25373bf)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__LoginResult_1a4099dde0581ef5199fb8256d026c144f)`(FGuid NewValue)` | Sets the value of PersonId.
`public inline FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1ae45a5a0b9ddda92565f4a3938418fb71)`()` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a38705f5e253421c6ce0354c199779afc)`() const` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1ab7fdf728e3ec81e5bb6959c4c6b55f66)`(const FString & DefaultValue) const` | Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAccessToken`](#structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09)`(FString & OutValue) const` | Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a4ca170034ba64e4f2f8d2bfa99bdf9a0)`()` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a2bf785d937053e66dd735b946c3958c2)`() const` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ae960932e4a4f114c64864e9cc0991757)`(FString NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.
`public inline void `[`ClearAccessToken`](#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)`()` | Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.
`public inline bool `[`IsAccessTokenDefaultValue`](#structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace)`() const` | Returns true if AccessToken_Optional is set and matches the default value.
`public inline void `[`SetAccessTokenToDefault`](#structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27)`()` | Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true.
`public inline FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1adda4636d7b154c46c3a360319ed15e19)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a3958d5ab6a09afba08f0d002d4d06e0b)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a3fd165bef86a99683dc1890478ec60be)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1a74a35074acf8ea53bb6964afb9e90782)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1a1b65228cd4acb2680c676d5d2510c701)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1af125da324043ce86f5bf7636d73509ff)`(FString NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a1fd8421a3033ad6b0277631a32801bf5)`()` | Gets the value of PublisherUuid.
`public inline const FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a496281b4f8ecff54d0d769135f8861c1)`() const` | Gets the value of PublisherUuid.
`public inline void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1a27018b14036cce6753ce7a619956c50c)`(FGuid NewValue)` | Sets the value of PublisherUuid.
`public inline FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1aebba86ff4902dc42dfcb2bc296d8f747)`()` | Gets the value of TenantUuid.
`public inline const FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a8292a55c9c109539ad6e70cbf4c1a499)`() const` | Gets the value of TenantUuid.
`public inline void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a8e0abade30079d5e6488bf5dcc41f0d6)`(FGuid NewValue)` | Sets the value of TenantUuid.
`public inline FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1a5351c4867f8998d5e346bfbe2715f173)`()` | Gets the value of ConfigElectorUuid.
`public inline const FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1abf235689d54d8df089e2dba84c2fe1fc)`() const` | Gets the value of ConfigElectorUuid.
`public inline void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1a6cd60e22848f80de3b925d6649970995)`(FGuid NewValue)` | Sets the value of ConfigElectorUuid.
`public inline FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1a21d4d933e77829f7871845271f4d5823)`()` | Gets the value of ClientUuid.
`public inline const FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1ac3a78366de32fae402b409edafbee950)`() const` | Gets the value of ClientUuid.
`public inline void `[`SetClientUuid`](#structFRHAPI__LoginResult_1ada7aa427ac3999a2dce454588d733676)`(FGuid NewValue)` | Sets the value of ClientUuid.

#### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__LoginResult_1a6a195b87e1d22fa5b77b86e7d376ebd1) <a id="structFRHAPI__LoginResult_1a6a195b87e1d22fa5b77b86e7d376ebd1"></a>

<br>
#### `public int32 `[`PortalId`](#structFRHAPI__LoginResult_1a3898b1b959f1ff5f3cc950e0d547ba32) <a id="structFRHAPI__LoginResult_1a3898b1b959f1ff5f3cc950e0d547ba32"></a>

<br>
#### `public FString `[`PortalUserId`](#structFRHAPI__LoginResult_1a9237ecf76d2eb6d9ed3a804e3980b741) <a id="structFRHAPI__LoginResult_1a9237ecf76d2eb6d9ed3a804e3980b741"></a>

<br>
#### `public FString `[`DisplayName`](#structFRHAPI__LoginResult_1ae364a213c068323650e9601609858258) <a id="structFRHAPI__LoginResult_1ae364a213c068323650e9601609858258"></a>

<br>
#### `public `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` `[`PortalParentAuthResult_Optional`](#structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b) <a id="structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b"></a>

<br>
#### `public bool `[`PortalParentAuthResult_IsSet`](#structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2) <a id="structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2"></a>

true if PortalParentAuthResult_Optional has been set to a value

<br>
#### `public TArray< FString > `[`Permissions_Optional`](#structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9) <a id="structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9"></a>

List of permissions for this user.

<br>
#### `public bool `[`Permissions_IsSet`](#structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0) <a id="structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0"></a>

true if Permissions_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3) <a id="structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3"></a>

List of restrictions on this player.

<br>
#### `public bool `[`Restrictions_IsSet`](#structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786) <a id="structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786"></a>

true if Restrictions_Optional has been set to a value

<br>
#### `public int32 `[`ActivePlayerId`](#structFRHAPI__LoginResult_1a1c655acbbbf60ee0ce3148ecccec823f) <a id="structFRHAPI__LoginResult_1a1c655acbbbf60ee0ce3148ecccec823f"></a>

<br>
#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a) <a id="structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a"></a>

<br>
#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41) <a id="structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41"></a>

true if ActivePlayerUuid_Optional has been set to a value

<br>
#### `public int32 `[`RoleId_Optional`](#structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d) <a id="structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d"></a>

<br>
#### `public bool `[`RoleId_IsSet`](#structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231) <a id="structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231"></a>

true if RoleId_Optional has been set to a value

<br>
#### `public FGuid `[`PersonId`](#structFRHAPI__LoginResult_1ab83a5487d85f800109203fd8fdff8803) <a id="structFRHAPI__LoginResult_1ab83a5487d85f800109203fd8fdff8803"></a>

<br>
#### `public FString `[`AccessToken_Optional`](#structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca) <a id="structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca"></a>

<br>
#### `public bool `[`AccessToken_IsSet`](#structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995) <a id="structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995"></a>

true if AccessToken_Optional has been set to a value

<br>
#### `public FString `[`RefreshToken_Optional`](#structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1) <a id="structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1"></a>

<br>
#### `public bool `[`RefreshToken_IsSet`](#structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756) <a id="structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756"></a>

true if RefreshToken_Optional has been set to a value

<br>
#### `public FGuid `[`PublisherUuid`](#structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2) <a id="structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2"></a>

<br>
#### `public FGuid `[`TenantUuid`](#structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f) <a id="structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f"></a>

<br>
#### `public FGuid `[`ConfigElectorUuid`](#structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116) <a id="structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116"></a>

<br>
#### `public FGuid `[`ClientUuid`](#structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213) <a id="structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginResult_1af9386114ff2777a0a15b36708f6e5f09)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginResult_1af9386114ff2777a0a15b36708f6e5f09"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginResult_1aa5959a551d8a530e874d75d5595f88d8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LoginResult_1aa5959a551d8a530e874d75d5595f88d8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a712826e629138103d8339c89233ffe80)`()` <a id="structFRHAPI__LoginResult_1a712826e629138103d8339c89233ffe80"></a>

Gets the value of Platform.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1afd7f6afc21762473033d3d7040785da2)`() const` <a id="structFRHAPI__LoginResult_1afd7f6afc21762473033d3d7040785da2"></a>

Gets the value of Platform.

<br>
#### `public inline void `[`SetPlatform`](#structFRHAPI__LoginResult_1a10048ac1b23f3bf2bc204cefe6113e71)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__LoginResult_1a10048ac1b23f3bf2bc204cefe6113e71"></a>

Sets the value of Platform.

<br>
#### `public inline int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a81bb1a5f2b0b910b94e7fb379225ea41)`()` <a id="structFRHAPI__LoginResult_1a81bb1a5f2b0b910b94e7fb379225ea41"></a>

Gets the value of PortalId.

<br>
#### `public inline const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a403967e58a0b7745cec24f0669251d3c)`() const` <a id="structFRHAPI__LoginResult_1a403967e58a0b7745cec24f0669251d3c"></a>

Gets the value of PortalId.

<br>
#### `public inline void `[`SetPortalId`](#structFRHAPI__LoginResult_1a85c30ef4fc3e869906bb313a7008dbb3)`(int32 NewValue)` <a id="structFRHAPI__LoginResult_1a85c30ef4fc3e869906bb313a7008dbb3"></a>

Sets the value of PortalId.

<br>
#### `public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc)`() const` <a id="structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc"></a>

Returns true if PortalId matches the default value.

<br>
#### `public inline void `[`SetPortalIdToDefault`](#structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba)`()` <a id="structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba"></a>

Sets the value of PortalId to its default

<br>
#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a7827ac1341c121eb35939596064ad6b1)`()` <a id="structFRHAPI__LoginResult_1a7827ac1341c121eb35939596064ad6b1"></a>

Gets the value of PortalUserId.

<br>
#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a82e3884bf96475d371884c99230ea97b)`() const` <a id="structFRHAPI__LoginResult_1a82e3884bf96475d371884c99230ea97b"></a>

Gets the value of PortalUserId.

<br>
#### `public inline void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a77786a9479bdfef56971f5ceacd4c507)`(FString NewValue)` <a id="structFRHAPI__LoginResult_1a77786a9479bdfef56971f5ceacd4c507"></a>

Sets the value of PortalUserId.

<br>
#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a5310c11bcc70cb20b3f250a58e6bd4f5)`()` <a id="structFRHAPI__LoginResult_1a5310c11bcc70cb20b3f250a58e6bd4f5"></a>

Gets the value of DisplayName.

<br>
#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a6857d153e9e5aabd9ebb2d9b05c5d61f)`() const` <a id="structFRHAPI__LoginResult_1a6857d153e9e5aabd9ebb2d9b05c5d61f"></a>

Gets the value of DisplayName.

<br>
#### `public inline void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a56c4a7b1902feaa9c59083353c83ad76)`(FString NewValue)` <a id="structFRHAPI__LoginResult_1a56c4a7b1902feaa9c59083353c83ad76"></a>

Sets the value of DisplayName.

<br>
#### `public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1af45c0420e8f2c53dd90f6ab04e8a13cd)`()` <a id="structFRHAPI__LoginResult_1af45c0420e8f2c53dd90f6ab04e8a13cd"></a>

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a16396a932b03209e12da35c8c31ec90d)`() const` <a id="structFRHAPI__LoginResult_1a16396a932b03209e12da35c8c31ec90d"></a>

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a45e8281fa0ddfa075482e2bf5987da49)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a45e8281fa0ddfa075482e2bf5987da49"></a>

Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & OutValue) const` <a id="structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7"></a>

Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a7acfe016d627fb1b1f82252ab4ad4139)`()` <a id="structFRHAPI__LoginResult_1a7acfe016d627fb1b1f82252ab4ad4139"></a>

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1af4bf2b450acbf5a6fcdc0596fc32e01b)`() const` <a id="structFRHAPI__LoginResult_1af4bf2b450acbf5a6fcdc0596fc32e01b"></a>

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a7a4dba3b5dc18577616224de5a50cdce)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` NewValue)` <a id="structFRHAPI__LoginResult_1a7a4dba3b5dc18577616224de5a50cdce"></a>

Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.

<br>
#### `public inline void `[`ClearPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)`()` <a id="structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24"></a>

Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.

<br>
#### `public inline TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1ae52fc41eac76d05e0ef38b26fc6778be)`()` <a id="structFRHAPI__LoginResult_1ae52fc41eac76d05e0ef38b26fc6778be"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1ab2e0574f4c6cbc666fb4dbe57814e9a5)`() const` <a id="structFRHAPI__LoginResult_1ab2e0574f4c6cbc666fb4dbe57814e9a5"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a0ed9a8cebad4bc2b0cba5c330550731d)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a0ed9a8cebad4bc2b0cba5c330550731d"></a>

Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPermissions`](#structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8"></a>

Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1a80cfa9d4030c594cbe9c1cf7af89e44f)`()` <a id="structFRHAPI__LoginResult_1a80cfa9d4030c594cbe9c1cf7af89e44f"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1a0df27d87117ffb7dedb8a998b512e4a3)`() const` <a id="structFRHAPI__LoginResult_1a0df27d87117ffb7dedb8a998b512e4a3"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPermissions`](#structFRHAPI__LoginResult_1aabacfbec460b7d38cb8531780e97106a)`(TArray< FString > NewValue)` <a id="structFRHAPI__LoginResult_1aabacfbec460b7d38cb8531780e97106a"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.

<br>
#### `public inline void `[`ClearPermissions`](#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)`()` <a id="structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb"></a>

Clears the value of Permissions_Optional and sets Permissions_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a5f81447e492fba869512ee5f8fa39604)`()` <a id="structFRHAPI__LoginResult_1a5f81447e492fba869512ee5f8fa39604"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a0b3682ccc2e6fe31dbb71424150a99e0)`() const` <a id="structFRHAPI__LoginResult_1a0b3682ccc2e6fe31dbb71424150a99e0"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a0c3558c768839889f205e7703ce00b71)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a0c3558c768839889f205e7703ce00b71"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a26d84ee697ce3b4af2694df4a8d4e83b)`()` <a id="structFRHAPI__LoginResult_1a26d84ee697ce3b4af2694df4a8d4e83b"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a60bc420be3304644bf1264a253a030d5)`() const` <a id="structFRHAPI__LoginResult_1a60bc420be3304644bf1264a253a030d5"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRestrictions`](#structFRHAPI__LoginResult_1a43d16a10bb9991d633c37489eee917a2)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > NewValue)` <a id="structFRHAPI__LoginResult_1a43d16a10bb9991d633c37489eee917a2"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

<br>
#### `public inline void `[`ClearRestrictions`](#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)`()` <a id="structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

<br>
#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1abd6312561724ae3080f95ee5f5e78776)`()` <a id="structFRHAPI__LoginResult_1abd6312561724ae3080f95ee5f5e78776"></a>

Gets the value of ActivePlayerId.

<br>
#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a8380c009e055919c8ceb6a13434626a3)`() const` <a id="structFRHAPI__LoginResult_1a8380c009e055919c8ceb6a13434626a3"></a>

Gets the value of ActivePlayerId.

<br>
#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1a3c3ea9fff80e9f50187686ca97018780)`(int32 NewValue)` <a id="structFRHAPI__LoginResult_1a3c3ea9fff80e9f50187686ca97018780"></a>

Sets the value of ActivePlayerId.

<br>
#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e)`() const` <a id="structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e"></a>

Returns true if ActivePlayerId matches the default value.

<br>
#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2)`()` <a id="structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2"></a>

Sets the value of ActivePlayerId to its default

<br>
#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1ad16fbc95e56950f7bd52bbb3ac196009)`()` <a id="structFRHAPI__LoginResult_1ad16fbc95e56950f7bd52bbb3ac196009"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a4f466e522104c187144289b4954ae604)`() const` <a id="structFRHAPI__LoginResult_1a4f466e522104c187144289b4954ae604"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a43c60cd2031e4032f0a5ce096b36753c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a43c60cd2031e4032f0a5ce096b36753c"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1ada4d3707d7854a11aa9bc369368d4955)`()` <a id="structFRHAPI__LoginResult_1ada4d3707d7854a11aa9bc369368d4955"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1a6fe0d0a464ce9ce890773feda96d3385)`() const` <a id="structFRHAPI__LoginResult_1a6fe0d0a464ce9ce890773feda96d3385"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a754c95d54fba55b9ad0c3e21e740e9cd)`(FGuid NewValue)` <a id="structFRHAPI__LoginResult_1a754c95d54fba55b9ad0c3e21e740e9cd"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)`()` <a id="structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

<br>
#### `public inline int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a31ab2c464f256a2d199eefa76fd625de)`()` <a id="structFRHAPI__LoginResult_1a31ab2c464f256a2d199eefa76fd625de"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a13cc2a2262f4565a4753c25261a45ca9)`() const` <a id="structFRHAPI__LoginResult_1a13cc2a2262f4565a4753c25261a45ca9"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a60520556eface9e7d1002c2933c10ae3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a60520556eface9e7d1002c2933c10ae3"></a>

Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRoleId`](#structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c"></a>

Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1aeb169273bdccf56baf16dab675ba9f73)`()` <a id="structFRHAPI__LoginResult_1aeb169273bdccf56baf16dab675ba9f73"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a4566137520b64f2ee500b9b8f4244560)`() const` <a id="structFRHAPI__LoginResult_1a4566137520b64f2ee500b9b8f4244560"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRoleId`](#structFRHAPI__LoginResult_1a911c9fe98ad56c69fdd33892957f7be0)`(int32 NewValue)` <a id="structFRHAPI__LoginResult_1a911c9fe98ad56c69fdd33892957f7be0"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.

<br>
#### `public inline void `[`ClearRoleId`](#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)`()` <a id="structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9"></a>

Clears the value of RoleId_Optional and sets RoleId_IsSet to false.

<br>
#### `public inline bool `[`IsRoleIdDefaultValue`](#structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b)`() const` <a id="structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b"></a>

Returns true if RoleId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetRoleIdToDefault`](#structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a)`()` <a id="structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a"></a>

Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1ad5f7841745b8c2353b872744d1fa430d)`()` <a id="structFRHAPI__LoginResult_1ad5f7841745b8c2353b872744d1fa430d"></a>

Gets the value of PersonId.

<br>
#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a50d7210d0f201108372e4c62e25373bf)`() const` <a id="structFRHAPI__LoginResult_1a50d7210d0f201108372e4c62e25373bf"></a>

Gets the value of PersonId.

<br>
#### `public inline void `[`SetPersonId`](#structFRHAPI__LoginResult_1a4099dde0581ef5199fb8256d026c144f)`(FGuid NewValue)` <a id="structFRHAPI__LoginResult_1a4099dde0581ef5199fb8256d026c144f"></a>

Sets the value of PersonId.

<br>
#### `public inline FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1ae45a5a0b9ddda92565f4a3938418fb71)`()` <a id="structFRHAPI__LoginResult_1ae45a5a0b9ddda92565f4a3938418fb71"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a38705f5e253421c6ce0354c199779afc)`() const` <a id="structFRHAPI__LoginResult_1a38705f5e253421c6ce0354c199779afc"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1ab7fdf728e3ec81e5bb6959c4c6b55f66)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1ab7fdf728e3ec81e5bb6959c4c6b55f66"></a>

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAccessToken`](#structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09"></a>

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a4ca170034ba64e4f2f8d2bfa99bdf9a0)`()` <a id="structFRHAPI__LoginResult_1a4ca170034ba64e4f2f8d2bfa99bdf9a0"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a2bf785d937053e66dd735b946c3958c2)`() const` <a id="structFRHAPI__LoginResult_1a2bf785d937053e66dd735b946c3958c2"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ae960932e4a4f114c64864e9cc0991757)`(FString NewValue)` <a id="structFRHAPI__LoginResult_1ae960932e4a4f114c64864e9cc0991757"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.

<br>
#### `public inline void `[`ClearAccessToken`](#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)`()` <a id="structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc"></a>

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.

<br>
#### `public inline bool `[`IsAccessTokenDefaultValue`](#structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace)`() const` <a id="structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace"></a>

Returns true if AccessToken_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetAccessTokenToDefault`](#structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27)`()` <a id="structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27"></a>

Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true.

<br>
#### `public inline FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1adda4636d7b154c46c3a360319ed15e19)`()` <a id="structFRHAPI__LoginResult_1adda4636d7b154c46c3a360319ed15e19"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a3958d5ab6a09afba08f0d002d4d06e0b)`() const` <a id="structFRHAPI__LoginResult_1a3958d5ab6a09afba08f0d002d4d06e0b"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a3fd165bef86a99683dc1890478ec60be)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a3fd165bef86a99683dc1890478ec60be"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1a74a35074acf8ea53bb6964afb9e90782)`()` <a id="structFRHAPI__LoginResult_1a74a35074acf8ea53bb6964afb9e90782"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1a1b65228cd4acb2680c676d5d2510c701)`() const` <a id="structFRHAPI__LoginResult_1a1b65228cd4acb2680c676d5d2510c701"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1af125da324043ce86f5bf7636d73509ff)`(FString NewValue)` <a id="structFRHAPI__LoginResult_1af125da324043ce86f5bf7636d73509ff"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

<br>
#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)`()` <a id="structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

<br>
#### `public inline FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a1fd8421a3033ad6b0277631a32801bf5)`()` <a id="structFRHAPI__LoginResult_1a1fd8421a3033ad6b0277631a32801bf5"></a>

Gets the value of PublisherUuid.

<br>
#### `public inline const FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a496281b4f8ecff54d0d769135f8861c1)`() const` <a id="structFRHAPI__LoginResult_1a496281b4f8ecff54d0d769135f8861c1"></a>

Gets the value of PublisherUuid.

<br>
#### `public inline void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1a27018b14036cce6753ce7a619956c50c)`(FGuid NewValue)` <a id="structFRHAPI__LoginResult_1a27018b14036cce6753ce7a619956c50c"></a>

Sets the value of PublisherUuid.

<br>
#### `public inline FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1aebba86ff4902dc42dfcb2bc296d8f747)`()` <a id="structFRHAPI__LoginResult_1aebba86ff4902dc42dfcb2bc296d8f747"></a>

Gets the value of TenantUuid.

<br>
#### `public inline const FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a8292a55c9c109539ad6e70cbf4c1a499)`() const` <a id="structFRHAPI__LoginResult_1a8292a55c9c109539ad6e70cbf4c1a499"></a>

Gets the value of TenantUuid.

<br>
#### `public inline void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a8e0abade30079d5e6488bf5dcc41f0d6)`(FGuid NewValue)` <a id="structFRHAPI__LoginResult_1a8e0abade30079d5e6488bf5dcc41f0d6"></a>

Sets the value of TenantUuid.

<br>
#### `public inline FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1a5351c4867f8998d5e346bfbe2715f173)`()` <a id="structFRHAPI__LoginResult_1a5351c4867f8998d5e346bfbe2715f173"></a>

Gets the value of ConfigElectorUuid.

<br>
#### `public inline const FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1abf235689d54d8df089e2dba84c2fe1fc)`() const` <a id="structFRHAPI__LoginResult_1abf235689d54d8df089e2dba84c2fe1fc"></a>

Gets the value of ConfigElectorUuid.

<br>
#### `public inline void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1a6cd60e22848f80de3b925d6649970995)`(FGuid NewValue)` <a id="structFRHAPI__LoginResult_1a6cd60e22848f80de3b925d6649970995"></a>

Sets the value of ConfigElectorUuid.

<br>
#### `public inline FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1a21d4d933e77829f7871845271f4d5823)`()` <a id="structFRHAPI__LoginResult_1a21d4d933e77829f7871845271f4d5823"></a>

Gets the value of ClientUuid.

<br>
#### `public inline const FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1ac3a78366de32fae402b409edafbee950)`() const` <a id="structFRHAPI__LoginResult_1ac3a78366de32fae402b409edafbee950"></a>

Gets the value of ClientUuid.

<br>
#### `public inline void `[`SetClientUuid`](#structFRHAPI__LoginResult_1ada7aa427ac3999a2dce454588d733676)`(FGuid NewValue)` <a id="structFRHAPI__LoginResult_1ada7aa427ac3999a2dce454588d733676"></a>

Sets the value of ClientUuid.

<br>
