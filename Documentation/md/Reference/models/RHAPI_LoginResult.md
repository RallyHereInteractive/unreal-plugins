---
title: RHAPI_LoginResult
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginResult`](#structFRHAPI__LoginResult) | Login result.

## struct `FRHAPI_LoginResult` <a id="structFRHAPI__LoginResult"></a>

```
struct FRHAPI_LoginResult
  : public FRHAPI_Model
```

Login result.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` `[`PortalParentAuthResult_Optional`](#structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b) | Parent portal auth result.
`public bool `[`PortalParentAuthResult_IsSet`](#structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2) | true if PortalParentAuthResult_Optional has been set to a value
`public TArray< FString > `[`Permissions_Optional`](#structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9) | List of permissions for this user.
`public bool `[`Permissions_IsSet`](#structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0) | true if Permissions_Optional has been set to a value
`public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3) | List of restrictions on this player.
`public bool `[`Restrictions_IsSet`](#structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786) | true if Restrictions_Optional has been set to a value
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__LoginResult_1a5eceb890dd1f28e9864062403a45784e) | Active player ID. *DEPRECATED* use `active_player_uuid` instead.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__LoginResult_1a3e9f86c543ac4d3c115382e29991757f) | true if ActivePlayerId_Optional has been set to a value
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a) | Active player UUID.
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41) | true if ActivePlayerUuid_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__LoginResult_1a0dc5395dbda79312a90f1946f4231c1b) | Platform.
`public bool `[`Platform_IsSet`](#structFRHAPI__LoginResult_1af9eee267ff0a0ef04d98176b0f595feb) | true if Platform_Optional has been set to a value
`public int32 `[`PortalId_Optional`](#structFRHAPI__LoginResult_1a47d3bde9f717778cac89bb8d62ae9b59) | Portal ID *DEPRECATED* use `platform` instead.
`public bool `[`PortalId_IsSet`](#structFRHAPI__LoginResult_1a2d86cb45ba94ba52ff96d96888c2abda) | true if PortalId_Optional has been set to a value
`public FString `[`PortalUserId_Optional`](#structFRHAPI__LoginResult_1ad5f66896b60689fc1414d092f0daa968) | Portal user ID.
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__LoginResult_1aeefd030bad04f66c45751ce2adbadf86) | true if PortalUserId_Optional has been set to a value
`public FString `[`DisplayName_Optional`](#structFRHAPI__LoginResult_1a8cdc905ef995721032212eac2a6472fe) | Display name.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__LoginResult_1a490d90d8c0d72ce6e3bee3ee328f1e70) | true if DisplayName_Optional has been set to a value
`public int32 `[`RoleId_Optional`](#structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d) | Role ID.
`public bool `[`RoleId_IsSet`](#structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231) | true if RoleId_Optional has been set to a value
`public FGuid `[`PersonId_Optional`](#structFRHAPI__LoginResult_1a8f59353274272dcc977a897af4433cdf) | Person ID.
`public bool `[`PersonId_IsSet`](#structFRHAPI__LoginResult_1ac4b67378dfa2c4975eeae9acaa635451) | true if PersonId_Optional has been set to a value
`public FString `[`AccessToken_Optional`](#structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca) | Access token that can be used for future requests.
`public bool `[`AccessToken_IsSet`](#structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995) | true if AccessToken_Optional has been set to a value
`public FString `[`RefreshToken_Optional`](#structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1) | Refresh token that can be used to refresh authentication for a new access token.
`public bool `[`RefreshToken_IsSet`](#structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756) | true if RefreshToken_Optional has been set to a value
`public FGuid `[`PublisherUuid`](#structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2) | Publisher UUID.
`public FGuid `[`TenantUuid`](#structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f) | Tenant UUID.
`public FGuid `[`ConfigElectorUuid`](#structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116) | Config elector UUID.
`public FGuid `[`ClientUuid`](#structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213) | Client UUID.
`public FString `[`ClientId`](#structFRHAPI__LoginResult_1ac991183ac255ddd26e72105ae65dc0f3) | Client ID.
`public FString `[`TokenType`](#structFRHAPI__LoginResult_1aa14a8a2d5dd54ac2622d936a977dd2c6) | Token type.
`public int32 `[`ExpiresIn_Optional`](#structFRHAPI__LoginResult_1a7d1933cdc5be268381830d15f6c8a132) | Result access token expiration time in seconds.
`public bool `[`ExpiresIn_IsSet`](#structFRHAPI__LoginResult_1a24059abe66a39f9e4eb782d00cb3fc8b) | true if ExpiresIn_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LoginResult_1a3d682d12ef3087fdaa22bb5e6d8f13c7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginResult_1a239c37492f9e7076e11a5d240a944059)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a78b9fb607583e2b31df4f7f16d9a896d)`()` | Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a36782c87b3b5c8a5555cf3092145ee4c)`() const` | Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a661b8970c201719ba2ecf533f32d50b1)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & DefaultValue) const` | Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & OutValue) const` | Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1aec5ac3dad0ad8a06173a9b0245fd7261)`()` | Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a8522d5d27386770528815ec9e48a921c)`() const` | Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a1f255e124da7e061b930e3e94d5ba35c)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & NewValue)` | Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.
`public inline void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1ab890e3417180fbbf4435e3df655fed60)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` && NewValue)` | Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true using move semantics.
`public inline void `[`ClearPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)`()` | Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.
`public inline bool `[`IsPortalParentAuthResultSet`](#structFRHAPI__LoginResult_1a00e83eb5317a5215092e147e14adc96d)`() const` | Checks whether PortalParentAuthResult_Optional has been set.
`public inline TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a2f8bcf06991ecb00d503ed009ef5fcf4)`()` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a58c364073507f187627ac81a70975c6e)`() const` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1af12d7d1e5d01388fcf499ef517af06c1)`(const TArray< FString > & DefaultValue) const` | Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPermissions`](#structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1ae739ca5a068044f4c5ce2df5bb80079d)`()` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1a1055b4139cdf04cb5b450a30cab38cad)`() const` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPermissions`](#structFRHAPI__LoginResult_1a015afefa3214e661cdd7c8bbc1d50a94)`(const TArray< FString > & NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.
`public inline void `[`SetPermissions`](#structFRHAPI__LoginResult_1a4aaf96f9d5db26d8905d1c12d36651d8)`(TArray< FString > && NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.
`public inline void `[`ClearPermissions`](#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)`()` | Clears the value of Permissions_Optional and sets Permissions_IsSet to false.
`public inline bool `[`IsPermissionsSet`](#structFRHAPI__LoginResult_1a36de5a4f168da64a1ccf75640260e8ef)`() const` | Checks whether Permissions_Optional has been set.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a6450665a6abcbbe322d82a1f67d02abc)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a515df060bd3b05a125f9c0cc4c531f35)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac3f69221aace4a3b85bf227b039e5526)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a70cf996077ee7a5199d54dfdde9de139)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a890b8db68b137ac42dd7ce497c2268cb)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRestrictions`](#structFRHAPI__LoginResult_1af0f1711013fb64809083a6d34c219539)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline void `[`SetRestrictions`](#structFRHAPI__LoginResult_1a43ae15baae395ce4a8ca35dd5320fca6)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.
`public inline bool `[`IsRestrictionsSet`](#structFRHAPI__LoginResult_1aa1b16af8595489bd6b8644f6ec4b92b4)`() const` | Checks whether Restrictions_Optional has been set.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a04105a1787d9a133e22bb39fa3dc7c61)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a4007ea39c9bd1971f15cdfe0219e4639)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a84229a4827247d520c37504f4b20f3c6)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1ac8fc67732b575bdb76008868d8744c46)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1a04a5a4475e155e7b9cb1697dff01f3ea)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1a1f62132c71883979073e0169d7a6f24c)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1a29a49a2f607279de3e2dac975730e621)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1a8e028b0d5e9e285e2000eff940a4ff69)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__LoginResult_1a0c35927fab94b21ec7968d82e2048045)`() const` | Checks whether ActivePlayerId_Optional has been set.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1acc6ad4e59c1ef2346c2c508493aceb4a)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a615d49bc2e2671f43d1896f2c5d3dbef)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1af9c97c7179c50d4fd4bb3266d62e2ea2)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1a08501f148ce7e70b88b8d168b1ba3088)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1a027c24c3f5e2e47890a5d86c3422281d)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a4dd59cf7a9d7b64df40eedc748982121)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a64a32dd38de6bd5ddeed9dfde3c69273)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__LoginResult_1a70e2a307fdf5e23990a263bc8ea83c22)`() const` | Checks whether ActivePlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a8c3d5ca0734629a584fae85916b4c4ae)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a2f604429d46b722c75debc527cd38899)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a31239d062347756784fca0803899b228)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__LoginResult_1a2303f44002f5734d8128e429f7f1a645)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1ae73862b32ed7c60c349408140ba3b725)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1aeea72ff4179c409424abba4a3488b216)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__LoginResult_1aaa122a472e12be17785761f89bfcd003)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__LoginResult_1a4d8dfe9efca167b4a18ef1e5135d5051)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__LoginResult_1af7387a450f1161862eae6b3021d52a7f)`() const` | Checks whether Platform_Optional has been set.
`public inline int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1ac6f1dffceb040450e2101297c0cb4e04)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a2f0d32346d46750b1e273e3f72433532)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1aee3287b20ce31ad85aeede7928c5c993)`(const int32 & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__LoginResult_1a224d268ace8080edbf13687e412c8517)`(int32 & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1afd7a67d727790c723fbfea3b2971622f)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1acfc1c7b9801e5c5f1ada19fee1ae61c3)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__LoginResult_1abefcec558be214599717e1013cd20ee0)`(const int32 & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__LoginResult_1a7349810d1b84f56cca91f9fe965fc38b)`(int32 && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__LoginResult_1ab2c646862e4daea75c7464b584f72d02)`() const` | Checks whether PortalId_Optional has been set.
`public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc)`() const` | Returns true if PortalId_Optional is set and matches the default value.
`public inline void `[`SetPortalIdToDefault`](#structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba)`()` | Sets the value of PortalId_Optional to its default and also sets PortalId_IsSet to true.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a8b834c0b014aaf83ef70673c45a868bf)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a1ed00aff6eb38fd6e3639134af40cb96)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a8625c78eeb48d3b90c8a84f578885a41)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a6be646bfa0bf28bdb8e1f4480ef30d55)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1af5a8c3851fc827268938fc609c7ad240)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1a8c97b9b14f7a436bf044d13d11da6652)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a0f3d2ce9a736a7edd66453177f6e42f8)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a03b96bddb9841327dce473288ae493b7)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__LoginResult_1a11e99240bfc0f80cd55f182f5acee8ec)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a0477529d53f56ef257a6912470ca08c5)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a262fb3732ba5716b9a1c87845c84d221)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a5c3d1eca7b68af68b869122cb4006713)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__LoginResult_1a436aad15bc9b8f259d7e1cc02bf6340a)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1a070e672af7518ba7cc9f5f6fe3cf84f2)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1acd476b1378e8be970a555fbd635d11e4)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a1555a130d44f05972bfa4180c18d7e54)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a611569e84eac856e1d30ac6bd7047af6)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline bool `[`IsDisplayNameSet`](#structFRHAPI__LoginResult_1ae906335cb99b77c6c53147ab0c6ead4e)`() const` | Checks whether DisplayName_Optional has been set.
`public inline int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a25c478a307a744d9b2dadf4e2ac655ec)`()` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a8360463ebb330f61ca734113723e1f4e)`() const` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1ad3ba0d0241b92c56a473f81b886473aa)`(const int32 & DefaultValue) const` | Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRoleId`](#structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c)`(int32 & OutValue) const` | Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a0338f7042e05e855a8b4511c5f58d59b)`()` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a0c1ad658062e195323510e93717e2cb3)`() const` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRoleId`](#structFRHAPI__LoginResult_1a7015d43993bfdb3217ca8199b0cc0e5a)`(const int32 & NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.
`public inline void `[`SetRoleId`](#structFRHAPI__LoginResult_1acd1a7701e7640991e621f790c91a07bf)`(int32 && NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.
`public inline void `[`ClearRoleId`](#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)`()` | Clears the value of RoleId_Optional and sets RoleId_IsSet to false.
`public inline bool `[`IsRoleIdSet`](#structFRHAPI__LoginResult_1a0336e83cdc962c5d7c4de60094795ada)`() const` | Checks whether RoleId_Optional has been set.
`public inline bool `[`IsRoleIdDefaultValue`](#structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b)`() const` | Returns true if RoleId_Optional is set and matches the default value.
`public inline void `[`SetRoleIdToDefault`](#structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a)`()` | Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a46f5d250b822113d47cbe5f473bc4f87)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1adbd5c24c8b7db9f74d753826f877901a)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a02560f739b0b9b88194e3b95c4d9da67)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__LoginResult_1a7a9dee414bf6c9d8a4a34f51843c431c)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1aaf471728dcc8e0ff78b5661a6cd654ec)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1a408a488ad71fb359665dc972c042b3c7)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__LoginResult_1a855b8d39d3c7334d2b1cc19294d01ca1)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__LoginResult_1a0141c2b6958471ca7d77492212040fe1)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__LoginResult_1a0204dee635520b1ccabf6a1a897a61d7)`() const` | Checks whether PersonId_Optional has been set.
`public inline FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a00257d44a5b29f43e0ec3ed42ac7dac4)`()` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1aa52cdc054d27cec517f8c9c526dd7b56)`() const` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a4377abe336158482d0519836d93a7a62)`(const FString & DefaultValue) const` | Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAccessToken`](#structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09)`(FString & OutValue) const` | Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a8de9ff59e9416bdcc1b30ca67440e5fa)`()` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1ae5fd7244e938009a56d3fb8cce66948b)`() const` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ac8238f0c90d4964155f40619cb8ab132)`(const FString & NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.
`public inline void `[`SetAccessToken`](#structFRHAPI__LoginResult_1a410ef798c6ca6df190876744af82f7c6)`(FString && NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.
`public inline void `[`ClearAccessToken`](#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)`()` | Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.
`public inline bool `[`IsAccessTokenSet`](#structFRHAPI__LoginResult_1a9629802d2cb8068064fcd0dc2ea41b15)`() const` | Checks whether AccessToken_Optional has been set.
`public inline bool `[`IsAccessTokenDefaultValue`](#structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace)`() const` | Returns true if AccessToken_Optional is set and matches the default value.
`public inline void `[`SetAccessTokenToDefault`](#structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27)`()` | Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true.
`public inline FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1af6515bf5f21864a30625b18f62b0141e)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a681bd62c14c73b32b03634cbba3d88c8)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1ad4c08632f3cd3b4528e622d15dbdb774)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1a3407c51c9387c04525104741bb585606)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1ac53704c7c6ca2218c6f7f10871102db0)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1acf3ee475a5bd39a885bcbac0518258ad)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1ac0ca4355972bf143a734bddf3c5dd53b)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline bool `[`IsRefreshTokenSet`](#structFRHAPI__LoginResult_1a7abf8b4ca9f8538cbe0d0917fa5ba486)`() const` | Checks whether RefreshToken_Optional has been set.
`public inline FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1abf498761bf2e462b8a404d71e957a1e6)`()` | Gets the value of PublisherUuid.
`public inline const FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1af2260cbb6d1f1e6a1d88c3ebad9aba91)`() const` | Gets the value of PublisherUuid.
`public inline void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1a9390d26a43e2249c47ea0e843d58db21)`(const FGuid & NewValue)` | Sets the value of PublisherUuid.
`public inline void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1adc6c5e897b201c4ba9513572495c96ac)`(FGuid && NewValue)` | Sets the value of PublisherUuid using move semantics.
`public inline FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a03d83d5a1e9df9753248931f155310fb)`()` | Gets the value of TenantUuid.
`public inline const FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a5c15b803a932a4a05d6ea18a79e7c8b9)`() const` | Gets the value of TenantUuid.
`public inline void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a2c00bc2d73009a5b6e5561cf32106359)`(const FGuid & NewValue)` | Sets the value of TenantUuid.
`public inline void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a2f29b0b38b9fbb0b34018a63ee82cac4)`(FGuid && NewValue)` | Sets the value of TenantUuid using move semantics.
`public inline FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1ad947ec9856acc8493ece5b86a36011e8)`()` | Gets the value of ConfigElectorUuid.
`public inline const FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1ab635a400cfdb70565fadc6fc0e888b7d)`() const` | Gets the value of ConfigElectorUuid.
`public inline void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1a8cc3b3d29503a1e5098d72f28235f254)`(const FGuid & NewValue)` | Sets the value of ConfigElectorUuid.
`public inline void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1ad576e71bf830f4e595c0a2de9c3b4bcd)`(FGuid && NewValue)` | Sets the value of ConfigElectorUuid using move semantics.
`public inline FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1a1a4c8d8c82330370546a37bdbe8221ae)`()` | Gets the value of ClientUuid.
`public inline const FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1a0aa159ae3754774cb8319ab01054fb88)`() const` | Gets the value of ClientUuid.
`public inline void `[`SetClientUuid`](#structFRHAPI__LoginResult_1abeb9397af8edf6774e9e1918722c51a2)`(const FGuid & NewValue)` | Sets the value of ClientUuid.
`public inline void `[`SetClientUuid`](#structFRHAPI__LoginResult_1aef47746b792219e8fa64fe6061971aa2)`(FGuid && NewValue)` | Sets the value of ClientUuid using move semantics.
`public inline FString & `[`GetClientId`](#structFRHAPI__LoginResult_1a100df56d1286fd663d6ced3eede7b7a3)`()` | Gets the value of ClientId.
`public inline const FString & `[`GetClientId`](#structFRHAPI__LoginResult_1acce24f23ff7ac33720fea7f265c34bcd)`() const` | Gets the value of ClientId.
`public inline void `[`SetClientId`](#structFRHAPI__LoginResult_1ad72cce9c4f269957ae22b46977eb3a66)`(const FString & NewValue)` | Sets the value of ClientId.
`public inline void `[`SetClientId`](#structFRHAPI__LoginResult_1a1ffc807d6a04a89ce81a165c544dc251)`(FString && NewValue)` | Sets the value of ClientId using move semantics.
`public inline FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1a230fbc8e0d6e7ddb00c60417d76a78c3)`()` | Gets the value of TokenType.
`public inline const FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1abff45fe0954e8e5618f278c017030229)`() const` | Gets the value of TokenType.
`public inline void `[`SetTokenType`](#structFRHAPI__LoginResult_1a98e3f66357340765498dea46f867b42a)`(const FString & NewValue)` | Sets the value of TokenType.
`public inline void `[`SetTokenType`](#structFRHAPI__LoginResult_1ad864944a2ac8ead9313c762e8d65d38f)`(FString && NewValue)` | Sets the value of TokenType using move semantics.
`public inline int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1af81e715ed8f494b838ce2de49f703fcc)`()` | Gets the value of ExpiresIn_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1adebc200e4ad6abf2ece4dd912beee0f6)`() const` | Gets the value of ExpiresIn_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a447bfe4508d6e817dfaff192054c18e6)`(const int32 & DefaultValue) const` | Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a8bdf9c0d75a04e67ad719453bd104805)`(int32 & OutValue) const` | Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1ac54efd2816caa5ca6ef5bdab72177531)`()` | Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1a837f98cc968853bf1b1b790d646eae4a)`() const` | Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1a758471c3ec0f84c4ab772cdfd2065e4c)`(const int32 & NewValue)` | Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true.
`public inline void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1addfe828d00d7b90fb8717af1ce42a973)`(int32 && NewValue)` | Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true using move semantics.
`public inline void `[`ClearExpiresIn`](#structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae)`()` | Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false.
`public inline bool `[`IsExpiresInSet`](#structFRHAPI__LoginResult_1af60780d8671d0b3388ecccefc8ca348b)`() const` | Checks whether ExpiresIn_Optional has been set.
`public inline bool `[`IsExpiresInDefaultValue`](#structFRHAPI__LoginResult_1a2a984e7838336bff1cb832e105ddebaf)`() const` | Returns true if ExpiresIn_Optional is set and matches the default value.
`public inline void `[`SetExpiresInToDefault`](#structFRHAPI__LoginResult_1a60c0277fb290298bc3c9c8d9ef6e4b82)`()` | Sets the value of ExpiresIn_Optional to its default and also sets ExpiresIn_IsSet to true.

### Members

#### `public `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` `[`PortalParentAuthResult_Optional`](#structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b) <a id="structFRHAPI__LoginResult_1aafa0221a83ff325e02182519fc6a664b"></a>

Parent portal auth result.

#### `public bool `[`PortalParentAuthResult_IsSet`](#structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2) <a id="structFRHAPI__LoginResult_1ad84a4150a336bc1f6f55819dea19dff2"></a>

true if PortalParentAuthResult_Optional has been set to a value

#### `public TArray< FString > `[`Permissions_Optional`](#structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9) <a id="structFRHAPI__LoginResult_1a2841f8f618dc2680f7ab4c6899561cd9"></a>

List of permissions for this user.

#### `public bool `[`Permissions_IsSet`](#structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0) <a id="structFRHAPI__LoginResult_1a0c607dca5488bdf74bd28eaaef59d5f0"></a>

true if Permissions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3) <a id="structFRHAPI__LoginResult_1a4586cd52c8ed381811e2a1a4c61859f3"></a>

List of restrictions on this player.

#### `public bool `[`Restrictions_IsSet`](#structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786) <a id="structFRHAPI__LoginResult_1a2a25d29775c9306078e4a7c19c1f6786"></a>

true if Restrictions_Optional has been set to a value

#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__LoginResult_1a5eceb890dd1f28e9864062403a45784e) <a id="structFRHAPI__LoginResult_1a5eceb890dd1f28e9864062403a45784e"></a>

Active player ID. *DEPRECATED* use `active_player_uuid` instead.

#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__LoginResult_1a3e9f86c543ac4d3c115382e29991757f) <a id="structFRHAPI__LoginResult_1a3e9f86c543ac4d3c115382e29991757f"></a>

true if ActivePlayerId_Optional has been set to a value

#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a) <a id="structFRHAPI__LoginResult_1a1fe87a5018d006aab99028203b01251a"></a>

Active player UUID.

#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41) <a id="structFRHAPI__LoginResult_1ac02d484f09e284db376db17de8e2db41"></a>

true if ActivePlayerUuid_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__LoginResult_1a0dc5395dbda79312a90f1946f4231c1b) <a id="structFRHAPI__LoginResult_1a0dc5395dbda79312a90f1946f4231c1b"></a>

Platform.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__LoginResult_1af9eee267ff0a0ef04d98176b0f595feb) <a id="structFRHAPI__LoginResult_1af9eee267ff0a0ef04d98176b0f595feb"></a>

true if Platform_Optional has been set to a value

#### `public int32 `[`PortalId_Optional`](#structFRHAPI__LoginResult_1a47d3bde9f717778cac89bb8d62ae9b59) <a id="structFRHAPI__LoginResult_1a47d3bde9f717778cac89bb8d62ae9b59"></a>

Portal ID *DEPRECATED* use `platform` instead.

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__LoginResult_1a2d86cb45ba94ba52ff96d96888c2abda) <a id="structFRHAPI__LoginResult_1a2d86cb45ba94ba52ff96d96888c2abda"></a>

true if PortalId_Optional has been set to a value

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__LoginResult_1ad5f66896b60689fc1414d092f0daa968) <a id="structFRHAPI__LoginResult_1ad5f66896b60689fc1414d092f0daa968"></a>

Portal user ID.

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__LoginResult_1aeefd030bad04f66c45751ce2adbadf86) <a id="structFRHAPI__LoginResult_1aeefd030bad04f66c45751ce2adbadf86"></a>

true if PortalUserId_Optional has been set to a value

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__LoginResult_1a8cdc905ef995721032212eac2a6472fe) <a id="structFRHAPI__LoginResult_1a8cdc905ef995721032212eac2a6472fe"></a>

Display name.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__LoginResult_1a490d90d8c0d72ce6e3bee3ee328f1e70) <a id="structFRHAPI__LoginResult_1a490d90d8c0d72ce6e3bee3ee328f1e70"></a>

true if DisplayName_Optional has been set to a value

#### `public int32 `[`RoleId_Optional`](#structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d) <a id="structFRHAPI__LoginResult_1afebeb425c411703bca06d59456ba9d0d"></a>

Role ID.

#### `public bool `[`RoleId_IsSet`](#structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231) <a id="structFRHAPI__LoginResult_1aa2242500dd115b30cdcb6e9e33c2a231"></a>

true if RoleId_Optional has been set to a value

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__LoginResult_1a8f59353274272dcc977a897af4433cdf) <a id="structFRHAPI__LoginResult_1a8f59353274272dcc977a897af4433cdf"></a>

Person ID.

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__LoginResult_1ac4b67378dfa2c4975eeae9acaa635451) <a id="structFRHAPI__LoginResult_1ac4b67378dfa2c4975eeae9acaa635451"></a>

true if PersonId_Optional has been set to a value

#### `public FString `[`AccessToken_Optional`](#structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca) <a id="structFRHAPI__LoginResult_1a5974b3b5de07ae97a0e1d64830c025ca"></a>

Access token that can be used for future requests.

#### `public bool `[`AccessToken_IsSet`](#structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995) <a id="structFRHAPI__LoginResult_1abae8091fc3254a451a6dcbf785626995"></a>

true if AccessToken_Optional has been set to a value

#### `public FString `[`RefreshToken_Optional`](#structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1) <a id="structFRHAPI__LoginResult_1a47cc38d2d92dc2a188de95ff1b9b48a1"></a>

Refresh token that can be used to refresh authentication for a new access token.

#### `public bool `[`RefreshToken_IsSet`](#structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756) <a id="structFRHAPI__LoginResult_1a52e874f6fbb4991b98d673a1e75f8756"></a>

true if RefreshToken_Optional has been set to a value

#### `public FGuid `[`PublisherUuid`](#structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2) <a id="structFRHAPI__LoginResult_1ad7cd2550323daecbe38dd81afcb599e2"></a>

Publisher UUID.

#### `public FGuid `[`TenantUuid`](#structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f) <a id="structFRHAPI__LoginResult_1a7421186147416414e5e5807959dc056f"></a>

Tenant UUID.

#### `public FGuid `[`ConfigElectorUuid`](#structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116) <a id="structFRHAPI__LoginResult_1a016a390d6851b1892d0829fbd8f0f116"></a>

Config elector UUID.

#### `public FGuid `[`ClientUuid`](#structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213) <a id="structFRHAPI__LoginResult_1aa28597bee651583c0631fcef0d952213"></a>

Client UUID.

#### `public FString `[`ClientId`](#structFRHAPI__LoginResult_1ac991183ac255ddd26e72105ae65dc0f3) <a id="structFRHAPI__LoginResult_1ac991183ac255ddd26e72105ae65dc0f3"></a>

Client ID.

#### `public FString `[`TokenType`](#structFRHAPI__LoginResult_1aa14a8a2d5dd54ac2622d936a977dd2c6) <a id="structFRHAPI__LoginResult_1aa14a8a2d5dd54ac2622d936a977dd2c6"></a>

Token type.

#### `public int32 `[`ExpiresIn_Optional`](#structFRHAPI__LoginResult_1a7d1933cdc5be268381830d15f6c8a132) <a id="structFRHAPI__LoginResult_1a7d1933cdc5be268381830d15f6c8a132"></a>

Result access token expiration time in seconds.

#### `public bool `[`ExpiresIn_IsSet`](#structFRHAPI__LoginResult_1a24059abe66a39f9e4eb782d00cb3fc8b) <a id="structFRHAPI__LoginResult_1a24059abe66a39f9e4eb782d00cb3fc8b"></a>

true if ExpiresIn_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginResult_1a3d682d12ef3087fdaa22bb5e6d8f13c7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginResult_1a3d682d12ef3087fdaa22bb5e6d8f13c7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginResult_1a239c37492f9e7076e11a5d240a944059)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LoginResult_1a239c37492f9e7076e11a5d240a944059"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a78b9fb607583e2b31df4f7f16d9a896d)`()` <a id="structFRHAPI__LoginResult_1a78b9fb607583e2b31df4f7f16d9a896d"></a>

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a36782c87b3b5c8a5555cf3092145ee4c)`() const` <a id="structFRHAPI__LoginResult_1a36782c87b3b5c8a5555cf3092145ee4c"></a>

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a661b8970c201719ba2ecf533f32d50b1)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a661b8970c201719ba2ecf533f32d50b1"></a>

Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & OutValue) const` <a id="structFRHAPI__LoginResult_1a15bcdf4e250253eb23af80a04ccb42d7"></a>

Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1aec5ac3dad0ad8a06173a9b0245fd7261)`()` <a id="structFRHAPI__LoginResult_1aec5ac3dad0ad8a06173a9b0245fd7261"></a>

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a8522d5d27386770528815ec9e48a921c)`() const` <a id="structFRHAPI__LoginResult_1a8522d5d27386770528815ec9e48a921c"></a>

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a1f255e124da7e061b930e3e94d5ba35c)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & NewValue)` <a id="structFRHAPI__LoginResult_1a1f255e124da7e061b930e3e94d5ba35c"></a>

Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.

#### `public inline void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1ab890e3417180fbbf4435e3df655fed60)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` && NewValue)` <a id="structFRHAPI__LoginResult_1ab890e3417180fbbf4435e3df655fed60"></a>

Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)`()` <a id="structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24"></a>

Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.

#### `public inline bool `[`IsPortalParentAuthResultSet`](#structFRHAPI__LoginResult_1a00e83eb5317a5215092e147e14adc96d)`() const` <a id="structFRHAPI__LoginResult_1a00e83eb5317a5215092e147e14adc96d"></a>

Checks whether PortalParentAuthResult_Optional has been set.

#### `public inline TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a2f8bcf06991ecb00d503ed009ef5fcf4)`()` <a id="structFRHAPI__LoginResult_1a2f8bcf06991ecb00d503ed009ef5fcf4"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a58c364073507f187627ac81a70975c6e)`() const` <a id="structFRHAPI__LoginResult_1a58c364073507f187627ac81a70975c6e"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1af12d7d1e5d01388fcf499ef517af06c1)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__LoginResult_1af12d7d1e5d01388fcf499ef517af06c1"></a>

Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPermissions`](#structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__LoginResult_1a681506152f91537c6b5c71ef6e32fee8"></a>

Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1ae739ca5a068044f4c5ce2df5bb80079d)`()` <a id="structFRHAPI__LoginResult_1ae739ca5a068044f4c5ce2df5bb80079d"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1a1055b4139cdf04cb5b450a30cab38cad)`() const` <a id="structFRHAPI__LoginResult_1a1055b4139cdf04cb5b450a30cab38cad"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPermissions`](#structFRHAPI__LoginResult_1a015afefa3214e661cdd7c8bbc1d50a94)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__LoginResult_1a015afefa3214e661cdd7c8bbc1d50a94"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.

#### `public inline void `[`SetPermissions`](#structFRHAPI__LoginResult_1a4aaf96f9d5db26d8905d1c12d36651d8)`(TArray< FString > && NewValue)` <a id="structFRHAPI__LoginResult_1a4aaf96f9d5db26d8905d1c12d36651d8"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.

#### `public inline void `[`ClearPermissions`](#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)`()` <a id="structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb"></a>

Clears the value of Permissions_Optional and sets Permissions_IsSet to false.

#### `public inline bool `[`IsPermissionsSet`](#structFRHAPI__LoginResult_1a36de5a4f168da64a1ccf75640260e8ef)`() const` <a id="structFRHAPI__LoginResult_1a36de5a4f168da64a1ccf75640260e8ef"></a>

Checks whether Permissions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a6450665a6abcbbe322d82a1f67d02abc)`()` <a id="structFRHAPI__LoginResult_1a6450665a6abcbbe322d82a1f67d02abc"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a515df060bd3b05a125f9c0cc4c531f35)`() const` <a id="structFRHAPI__LoginResult_1a515df060bd3b05a125f9c0cc4c531f35"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac3f69221aace4a3b85bf227b039e5526)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__LoginResult_1ac3f69221aace4a3b85bf227b039e5526"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__LoginResult_1ac32a199b997c3e83b238cacb90079279"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a70cf996077ee7a5199d54dfdde9de139)`()` <a id="structFRHAPI__LoginResult_1a70cf996077ee7a5199d54dfdde9de139"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a890b8db68b137ac42dd7ce497c2268cb)`() const` <a id="structFRHAPI__LoginResult_1a890b8db68b137ac42dd7ce497c2268cb"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__LoginResult_1af0f1711013fb64809083a6d34c219539)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__LoginResult_1af0f1711013fb64809083a6d34c219539"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__LoginResult_1a43ae15baae395ce4a8ca35dd5320fca6)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__LoginResult_1a43ae15baae395ce4a8ca35dd5320fca6"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)`()` <a id="structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

#### `public inline bool `[`IsRestrictionsSet`](#structFRHAPI__LoginResult_1aa1b16af8595489bd6b8644f6ec4b92b4)`() const` <a id="structFRHAPI__LoginResult_1aa1b16af8595489bd6b8644f6ec4b92b4"></a>

Checks whether Restrictions_Optional has been set.

#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a04105a1787d9a133e22bb39fa3dc7c61)`()` <a id="structFRHAPI__LoginResult_1a04105a1787d9a133e22bb39fa3dc7c61"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a4007ea39c9bd1971f15cdfe0219e4639)`() const` <a id="structFRHAPI__LoginResult_1a4007ea39c9bd1971f15cdfe0219e4639"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a84229a4827247d520c37504f4b20f3c6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a84229a4827247d520c37504f4b20f3c6"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1ac8fc67732b575bdb76008868d8744c46)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1ac8fc67732b575bdb76008868d8744c46"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1a04a5a4475e155e7b9cb1697dff01f3ea)`()` <a id="structFRHAPI__LoginResult_1a04a5a4475e155e7b9cb1697dff01f3ea"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1a1f62132c71883979073e0169d7a6f24c)`() const` <a id="structFRHAPI__LoginResult_1a1f62132c71883979073e0169d7a6f24c"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1a29a49a2f607279de3e2dac975730e621)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1a29a49a2f607279de3e2dac975730e621"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1a8e028b0d5e9e285e2000eff940a4ff69)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1a8e028b0d5e9e285e2000eff940a4ff69"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3)`()` <a id="structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__LoginResult_1a0c35927fab94b21ec7968d82e2048045)`() const` <a id="structFRHAPI__LoginResult_1a0c35927fab94b21ec7968d82e2048045"></a>

Checks whether ActivePlayerId_Optional has been set.

#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e)`() const` <a id="structFRHAPI__LoginResult_1a45c87ab795b97f82c2fb0d089c52a09e"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2)`()` <a id="structFRHAPI__LoginResult_1a357fd4f7bc1fe3c03452da3a468304f2"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1acc6ad4e59c1ef2346c2c508493aceb4a)`()` <a id="structFRHAPI__LoginResult_1acc6ad4e59c1ef2346c2c508493aceb4a"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a615d49bc2e2671f43d1896f2c5d3dbef)`() const` <a id="structFRHAPI__LoginResult_1a615d49bc2e2671f43d1896f2c5d3dbef"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1af9c97c7179c50d4fd4bb3266d62e2ea2)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginResult_1af9c97c7179c50d4fd4bb3266d62e2ea2"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginResult_1a5f721ae331376542bc45357122122c91"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1a08501f148ce7e70b88b8d168b1ba3088)`()` <a id="structFRHAPI__LoginResult_1a08501f148ce7e70b88b8d168b1ba3088"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1a027c24c3f5e2e47890a5d86c3422281d)`() const` <a id="structFRHAPI__LoginResult_1a027c24c3f5e2e47890a5d86c3422281d"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a4dd59cf7a9d7b64df40eedc748982121)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a4dd59cf7a9d7b64df40eedc748982121"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a64a32dd38de6bd5ddeed9dfde3c69273)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a64a32dd38de6bd5ddeed9dfde3c69273"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)`()` <a id="structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__LoginResult_1a70e2a307fdf5e23990a263bc8ea83c22)`() const` <a id="structFRHAPI__LoginResult_1a70e2a307fdf5e23990a263bc8ea83c22"></a>

Checks whether ActivePlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a8c3d5ca0734629a584fae85916b4c4ae)`()` <a id="structFRHAPI__LoginResult_1a8c3d5ca0734629a584fae85916b4c4ae"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a2f604429d46b722c75debc527cd38899)`() const` <a id="structFRHAPI__LoginResult_1a2f604429d46b722c75debc527cd38899"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a31239d062347756784fca0803899b228)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a31239d062347756784fca0803899b228"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__LoginResult_1a2303f44002f5734d8128e429f7f1a645)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__LoginResult_1a2303f44002f5734d8128e429f7f1a645"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1ae73862b32ed7c60c349408140ba3b725)`()` <a id="structFRHAPI__LoginResult_1ae73862b32ed7c60c349408140ba3b725"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1aeea72ff4179c409424abba4a3488b216)`() const` <a id="structFRHAPI__LoginResult_1aeea72ff4179c409424abba4a3488b216"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__LoginResult_1aaa122a472e12be17785761f89bfcd003)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__LoginResult_1aaa122a472e12be17785761f89bfcd003"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__LoginResult_1a4d8dfe9efca167b4a18ef1e5135d5051)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__LoginResult_1a4d8dfe9efca167b4a18ef1e5135d5051"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb)`()` <a id="structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__LoginResult_1af7387a450f1161862eae6b3021d52a7f)`() const` <a id="structFRHAPI__LoginResult_1af7387a450f1161862eae6b3021d52a7f"></a>

Checks whether Platform_Optional has been set.

#### `public inline int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1ac6f1dffceb040450e2101297c0cb4e04)`()` <a id="structFRHAPI__LoginResult_1ac6f1dffceb040450e2101297c0cb4e04"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a2f0d32346d46750b1e273e3f72433532)`() const` <a id="structFRHAPI__LoginResult_1a2f0d32346d46750b1e273e3f72433532"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1aee3287b20ce31ad85aeede7928c5c993)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1aee3287b20ce31ad85aeede7928c5c993"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__LoginResult_1a224d268ace8080edbf13687e412c8517)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a224d268ace8080edbf13687e412c8517"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1afd7a67d727790c723fbfea3b2971622f)`()` <a id="structFRHAPI__LoginResult_1afd7a67d727790c723fbfea3b2971622f"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1acfc1c7b9801e5c5f1ada19fee1ae61c3)`() const` <a id="structFRHAPI__LoginResult_1acfc1c7b9801e5c5f1ada19fee1ae61c3"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__LoginResult_1abefcec558be214599717e1013cd20ee0)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1abefcec558be214599717e1013cd20ee0"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__LoginResult_1a7349810d1b84f56cca91f9fe965fc38b)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1a7349810d1b84f56cca91f9fe965fc38b"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78)`()` <a id="structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__LoginResult_1ab2c646862e4daea75c7464b584f72d02)`() const` <a id="structFRHAPI__LoginResult_1ab2c646862e4daea75c7464b584f72d02"></a>

Checks whether PortalId_Optional has been set.

#### `public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc)`() const` <a id="structFRHAPI__LoginResult_1abd66958d8a434197e742d08131ee7edc"></a>

Returns true if PortalId_Optional is set and matches the default value.

#### `public inline void `[`SetPortalIdToDefault`](#structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba)`()` <a id="structFRHAPI__LoginResult_1a59c6c295c2390b3a91c5ea8ccf2e08ba"></a>

Sets the value of PortalId_Optional to its default and also sets PortalId_IsSet to true.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a8b834c0b014aaf83ef70673c45a868bf)`()` <a id="structFRHAPI__LoginResult_1a8b834c0b014aaf83ef70673c45a868bf"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a1ed00aff6eb38fd6e3639134af40cb96)`() const` <a id="structFRHAPI__LoginResult_1a1ed00aff6eb38fd6e3639134af40cb96"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a8625c78eeb48d3b90c8a84f578885a41)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a8625c78eeb48d3b90c8a84f578885a41"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a6be646bfa0bf28bdb8e1f4480ef30d55)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a6be646bfa0bf28bdb8e1f4480ef30d55"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1af5a8c3851fc827268938fc609c7ad240)`()` <a id="structFRHAPI__LoginResult_1af5a8c3851fc827268938fc609c7ad240"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1a8c97b9b14f7a436bf044d13d11da6652)`() const` <a id="structFRHAPI__LoginResult_1a8c97b9b14f7a436bf044d13d11da6652"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a0f3d2ce9a736a7edd66453177f6e42f8)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a0f3d2ce9a736a7edd66453177f6e42f8"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a03b96bddb9841327dce473288ae493b7)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a03b96bddb9841327dce473288ae493b7"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a)`()` <a id="structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__LoginResult_1a11e99240bfc0f80cd55f182f5acee8ec)`() const` <a id="structFRHAPI__LoginResult_1a11e99240bfc0f80cd55f182f5acee8ec"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a0477529d53f56ef257a6912470ca08c5)`()` <a id="structFRHAPI__LoginResult_1a0477529d53f56ef257a6912470ca08c5"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a262fb3732ba5716b9a1c87845c84d221)`() const` <a id="structFRHAPI__LoginResult_1a262fb3732ba5716b9a1c87845c84d221"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a5c3d1eca7b68af68b869122cb4006713)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a5c3d1eca7b68af68b869122cb4006713"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__LoginResult_1a436aad15bc9b8f259d7e1cc02bf6340a)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a436aad15bc9b8f259d7e1cc02bf6340a"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1a070e672af7518ba7cc9f5f6fe3cf84f2)`()` <a id="structFRHAPI__LoginResult_1a070e672af7518ba7cc9f5f6fe3cf84f2"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1acd476b1378e8be970a555fbd635d11e4)`() const` <a id="structFRHAPI__LoginResult_1acd476b1378e8be970a555fbd635d11e4"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a1555a130d44f05972bfa4180c18d7e54)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a1555a130d44f05972bfa4180c18d7e54"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a611569e84eac856e1d30ac6bd7047af6)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a611569e84eac856e1d30ac6bd7047af6"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96)`()` <a id="structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline bool `[`IsDisplayNameSet`](#structFRHAPI__LoginResult_1ae906335cb99b77c6c53147ab0c6ead4e)`() const` <a id="structFRHAPI__LoginResult_1ae906335cb99b77c6c53147ab0c6ead4e"></a>

Checks whether DisplayName_Optional has been set.

#### `public inline int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a25c478a307a744d9b2dadf4e2ac655ec)`()` <a id="structFRHAPI__LoginResult_1a25c478a307a744d9b2dadf4e2ac655ec"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a8360463ebb330f61ca734113723e1f4e)`() const` <a id="structFRHAPI__LoginResult_1a8360463ebb330f61ca734113723e1f4e"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1ad3ba0d0241b92c56a473f81b886473aa)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1ad3ba0d0241b92c56a473f81b886473aa"></a>

Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRoleId`](#structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a5324fd123458787777d9a8e08b1b7e9c"></a>

Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a0338f7042e05e855a8b4511c5f58d59b)`()` <a id="structFRHAPI__LoginResult_1a0338f7042e05e855a8b4511c5f58d59b"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a0c1ad658062e195323510e93717e2cb3)`() const` <a id="structFRHAPI__LoginResult_1a0c1ad658062e195323510e93717e2cb3"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRoleId`](#structFRHAPI__LoginResult_1a7015d43993bfdb3217ca8199b0cc0e5a)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1a7015d43993bfdb3217ca8199b0cc0e5a"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.

#### `public inline void `[`SetRoleId`](#structFRHAPI__LoginResult_1acd1a7701e7640991e621f790c91a07bf)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1acd1a7701e7640991e621f790c91a07bf"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.

#### `public inline void `[`ClearRoleId`](#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)`()` <a id="structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9"></a>

Clears the value of RoleId_Optional and sets RoleId_IsSet to false.

#### `public inline bool `[`IsRoleIdSet`](#structFRHAPI__LoginResult_1a0336e83cdc962c5d7c4de60094795ada)`() const` <a id="structFRHAPI__LoginResult_1a0336e83cdc962c5d7c4de60094795ada"></a>

Checks whether RoleId_Optional has been set.

#### `public inline bool `[`IsRoleIdDefaultValue`](#structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b)`() const` <a id="structFRHAPI__LoginResult_1a903468ea6be9d761fd9121fc38ed301b"></a>

Returns true if RoleId_Optional is set and matches the default value.

#### `public inline void `[`SetRoleIdToDefault`](#structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a)`()` <a id="structFRHAPI__LoginResult_1afb04194d63508bb667829c333ee1325a"></a>

Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a46f5d250b822113d47cbe5f473bc4f87)`()` <a id="structFRHAPI__LoginResult_1a46f5d250b822113d47cbe5f473bc4f87"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1adbd5c24c8b7db9f74d753826f877901a)`() const` <a id="structFRHAPI__LoginResult_1adbd5c24c8b7db9f74d753826f877901a"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a02560f739b0b9b88194e3b95c4d9da67)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a02560f739b0b9b88194e3b95c4d9da67"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__LoginResult_1a7a9dee414bf6c9d8a4a34f51843c431c)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginResult_1a7a9dee414bf6c9d8a4a34f51843c431c"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1aaf471728dcc8e0ff78b5661a6cd654ec)`()` <a id="structFRHAPI__LoginResult_1aaf471728dcc8e0ff78b5661a6cd654ec"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1a408a488ad71fb359665dc972c042b3c7)`() const` <a id="structFRHAPI__LoginResult_1a408a488ad71fb359665dc972c042b3c7"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__LoginResult_1a855b8d39d3c7334d2b1cc19294d01ca1)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a855b8d39d3c7334d2b1cc19294d01ca1"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__LoginResult_1a0141c2b6958471ca7d77492212040fe1)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a0141c2b6958471ca7d77492212040fe1"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81)`()` <a id="structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__LoginResult_1a0204dee635520b1ccabf6a1a897a61d7)`() const` <a id="structFRHAPI__LoginResult_1a0204dee635520b1ccabf6a1a897a61d7"></a>

Checks whether PersonId_Optional has been set.

#### `public inline FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a00257d44a5b29f43e0ec3ed42ac7dac4)`()` <a id="structFRHAPI__LoginResult_1a00257d44a5b29f43e0ec3ed42ac7dac4"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1aa52cdc054d27cec517f8c9c526dd7b56)`() const` <a id="structFRHAPI__LoginResult_1aa52cdc054d27cec517f8c9c526dd7b56"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a4377abe336158482d0519836d93a7a62)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a4377abe336158482d0519836d93a7a62"></a>

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAccessToken`](#structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a8403e67b0ce65b9d47de587e58422c09"></a>

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a8de9ff59e9416bdcc1b30ca67440e5fa)`()` <a id="structFRHAPI__LoginResult_1a8de9ff59e9416bdcc1b30ca67440e5fa"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1ae5fd7244e938009a56d3fb8cce66948b)`() const` <a id="structFRHAPI__LoginResult_1ae5fd7244e938009a56d3fb8cce66948b"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ac8238f0c90d4964155f40619cb8ab132)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1ac8238f0c90d4964155f40619cb8ab132"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.

#### `public inline void `[`SetAccessToken`](#structFRHAPI__LoginResult_1a410ef798c6ca6df190876744af82f7c6)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a410ef798c6ca6df190876744af82f7c6"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearAccessToken`](#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)`()` <a id="structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc"></a>

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.

#### `public inline bool `[`IsAccessTokenSet`](#structFRHAPI__LoginResult_1a9629802d2cb8068064fcd0dc2ea41b15)`() const` <a id="structFRHAPI__LoginResult_1a9629802d2cb8068064fcd0dc2ea41b15"></a>

Checks whether AccessToken_Optional has been set.

#### `public inline bool `[`IsAccessTokenDefaultValue`](#structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace)`() const` <a id="structFRHAPI__LoginResult_1a05208b4c9a1d2a966040a827b88faace"></a>

Returns true if AccessToken_Optional is set and matches the default value.

#### `public inline void `[`SetAccessTokenToDefault`](#structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27)`()` <a id="structFRHAPI__LoginResult_1af5c8db0da958879c920fcc3ad51ede27"></a>

Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true.

#### `public inline FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1af6515bf5f21864a30625b18f62b0141e)`()` <a id="structFRHAPI__LoginResult_1af6515bf5f21864a30625b18f62b0141e"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a681bd62c14c73b32b03634cbba3d88c8)`() const` <a id="structFRHAPI__LoginResult_1a681bd62c14c73b32b03634cbba3d88c8"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1ad4c08632f3cd3b4528e622d15dbdb774)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1ad4c08632f3cd3b4528e622d15dbdb774"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a04ebd938478c7f4ea5cb6c9cec35fc17"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1a3407c51c9387c04525104741bb585606)`()` <a id="structFRHAPI__LoginResult_1a3407c51c9387c04525104741bb585606"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1ac53704c7c6ca2218c6f7f10871102db0)`() const` <a id="structFRHAPI__LoginResult_1ac53704c7c6ca2218c6f7f10871102db0"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1acf3ee475a5bd39a885bcbac0518258ad)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1acf3ee475a5bd39a885bcbac0518258ad"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1ac0ca4355972bf143a734bddf3c5dd53b)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1ac0ca4355972bf143a734bddf3c5dd53b"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)`()` <a id="structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline bool `[`IsRefreshTokenSet`](#structFRHAPI__LoginResult_1a7abf8b4ca9f8538cbe0d0917fa5ba486)`() const` <a id="structFRHAPI__LoginResult_1a7abf8b4ca9f8538cbe0d0917fa5ba486"></a>

Checks whether RefreshToken_Optional has been set.

#### `public inline FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1abf498761bf2e462b8a404d71e957a1e6)`()` <a id="structFRHAPI__LoginResult_1abf498761bf2e462b8a404d71e957a1e6"></a>

Gets the value of PublisherUuid.

#### `public inline const FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1af2260cbb6d1f1e6a1d88c3ebad9aba91)`() const` <a id="structFRHAPI__LoginResult_1af2260cbb6d1f1e6a1d88c3ebad9aba91"></a>

Gets the value of PublisherUuid.

#### `public inline void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1a9390d26a43e2249c47ea0e843d58db21)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a9390d26a43e2249c47ea0e843d58db21"></a>

Sets the value of PublisherUuid.

#### `public inline void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1adc6c5e897b201c4ba9513572495c96ac)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1adc6c5e897b201c4ba9513572495c96ac"></a>

Sets the value of PublisherUuid using move semantics.

#### `public inline FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a03d83d5a1e9df9753248931f155310fb)`()` <a id="structFRHAPI__LoginResult_1a03d83d5a1e9df9753248931f155310fb"></a>

Gets the value of TenantUuid.

#### `public inline const FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a5c15b803a932a4a05d6ea18a79e7c8b9)`() const` <a id="structFRHAPI__LoginResult_1a5c15b803a932a4a05d6ea18a79e7c8b9"></a>

Gets the value of TenantUuid.

#### `public inline void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a2c00bc2d73009a5b6e5561cf32106359)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a2c00bc2d73009a5b6e5561cf32106359"></a>

Sets the value of TenantUuid.

#### `public inline void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a2f29b0b38b9fbb0b34018a63ee82cac4)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a2f29b0b38b9fbb0b34018a63ee82cac4"></a>

Sets the value of TenantUuid using move semantics.

#### `public inline FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1ad947ec9856acc8493ece5b86a36011e8)`()` <a id="structFRHAPI__LoginResult_1ad947ec9856acc8493ece5b86a36011e8"></a>

Gets the value of ConfigElectorUuid.

#### `public inline const FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1ab635a400cfdb70565fadc6fc0e888b7d)`() const` <a id="structFRHAPI__LoginResult_1ab635a400cfdb70565fadc6fc0e888b7d"></a>

Gets the value of ConfigElectorUuid.

#### `public inline void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1a8cc3b3d29503a1e5098d72f28235f254)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a8cc3b3d29503a1e5098d72f28235f254"></a>

Sets the value of ConfigElectorUuid.

#### `public inline void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1ad576e71bf830f4e595c0a2de9c3b4bcd)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1ad576e71bf830f4e595c0a2de9c3b4bcd"></a>

Sets the value of ConfigElectorUuid using move semantics.

#### `public inline FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1a1a4c8d8c82330370546a37bdbe8221ae)`()` <a id="structFRHAPI__LoginResult_1a1a4c8d8c82330370546a37bdbe8221ae"></a>

Gets the value of ClientUuid.

#### `public inline const FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1a0aa159ae3754774cb8319ab01054fb88)`() const` <a id="structFRHAPI__LoginResult_1a0aa159ae3754774cb8319ab01054fb88"></a>

Gets the value of ClientUuid.

#### `public inline void `[`SetClientUuid`](#structFRHAPI__LoginResult_1abeb9397af8edf6774e9e1918722c51a2)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1abeb9397af8edf6774e9e1918722c51a2"></a>

Sets the value of ClientUuid.

#### `public inline void `[`SetClientUuid`](#structFRHAPI__LoginResult_1aef47746b792219e8fa64fe6061971aa2)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1aef47746b792219e8fa64fe6061971aa2"></a>

Sets the value of ClientUuid using move semantics.

#### `public inline FString & `[`GetClientId`](#structFRHAPI__LoginResult_1a100df56d1286fd663d6ced3eede7b7a3)`()` <a id="structFRHAPI__LoginResult_1a100df56d1286fd663d6ced3eede7b7a3"></a>

Gets the value of ClientId.

#### `public inline const FString & `[`GetClientId`](#structFRHAPI__LoginResult_1acce24f23ff7ac33720fea7f265c34bcd)`() const` <a id="structFRHAPI__LoginResult_1acce24f23ff7ac33720fea7f265c34bcd"></a>

Gets the value of ClientId.

#### `public inline void `[`SetClientId`](#structFRHAPI__LoginResult_1ad72cce9c4f269957ae22b46977eb3a66)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1ad72cce9c4f269957ae22b46977eb3a66"></a>

Sets the value of ClientId.

#### `public inline void `[`SetClientId`](#structFRHAPI__LoginResult_1a1ffc807d6a04a89ce81a165c544dc251)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a1ffc807d6a04a89ce81a165c544dc251"></a>

Sets the value of ClientId using move semantics.

#### `public inline FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1a230fbc8e0d6e7ddb00c60417d76a78c3)`()` <a id="structFRHAPI__LoginResult_1a230fbc8e0d6e7ddb00c60417d76a78c3"></a>

Gets the value of TokenType.

#### `public inline const FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1abff45fe0954e8e5618f278c017030229)`() const` <a id="structFRHAPI__LoginResult_1abff45fe0954e8e5618f278c017030229"></a>

Gets the value of TokenType.

#### `public inline void `[`SetTokenType`](#structFRHAPI__LoginResult_1a98e3f66357340765498dea46f867b42a)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a98e3f66357340765498dea46f867b42a"></a>

Sets the value of TokenType.

#### `public inline void `[`SetTokenType`](#structFRHAPI__LoginResult_1ad864944a2ac8ead9313c762e8d65d38f)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1ad864944a2ac8ead9313c762e8d65d38f"></a>

Sets the value of TokenType using move semantics.

#### `public inline int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1af81e715ed8f494b838ce2de49f703fcc)`()` <a id="structFRHAPI__LoginResult_1af81e715ed8f494b838ce2de49f703fcc"></a>

Gets the value of ExpiresIn_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1adebc200e4ad6abf2ece4dd912beee0f6)`() const` <a id="structFRHAPI__LoginResult_1adebc200e4ad6abf2ece4dd912beee0f6"></a>

Gets the value of ExpiresIn_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a447bfe4508d6e817dfaff192054c18e6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a447bfe4508d6e817dfaff192054c18e6"></a>

Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a8bdf9c0d75a04e67ad719453bd104805)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a8bdf9c0d75a04e67ad719453bd104805"></a>

Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1ac54efd2816caa5ca6ef5bdab72177531)`()` <a id="structFRHAPI__LoginResult_1ac54efd2816caa5ca6ef5bdab72177531"></a>

Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1a837f98cc968853bf1b1b790d646eae4a)`() const` <a id="structFRHAPI__LoginResult_1a837f98cc968853bf1b1b790d646eae4a"></a>

Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1a758471c3ec0f84c4ab772cdfd2065e4c)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1a758471c3ec0f84c4ab772cdfd2065e4c"></a>

Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true.

#### `public inline void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1addfe828d00d7b90fb8717af1ce42a973)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1addfe828d00d7b90fb8717af1ce42a973"></a>

Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiresIn`](#structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae)`()` <a id="structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae"></a>

Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false.

#### `public inline bool `[`IsExpiresInSet`](#structFRHAPI__LoginResult_1af60780d8671d0b3388ecccefc8ca348b)`() const` <a id="structFRHAPI__LoginResult_1af60780d8671d0b3388ecccefc8ca348b"></a>

Checks whether ExpiresIn_Optional has been set.

#### `public inline bool `[`IsExpiresInDefaultValue`](#structFRHAPI__LoginResult_1a2a984e7838336bff1cb832e105ddebaf)`() const` <a id="structFRHAPI__LoginResult_1a2a984e7838336bff1cb832e105ddebaf"></a>

Returns true if ExpiresIn_Optional is set and matches the default value.

#### `public inline void `[`SetExpiresInToDefault`](#structFRHAPI__LoginResult_1a60c0277fb290298bc3c9c8d9ef6e4b82)`()` <a id="structFRHAPI__LoginResult_1a60c0277fb290298bc3c9c8d9ef6e4b82"></a>

Sets the value of ExpiresIn_Optional to its default and also sets ExpiresIn_IsSet to true.

