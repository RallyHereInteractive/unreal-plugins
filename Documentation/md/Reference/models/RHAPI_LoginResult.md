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
`public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__LoginResult_1a841198710987a73e506322921009a61b) | Which of the platform's environments was this user info from? For Xbox, this is sandbox. For PSN, this is sp-int/prod-qa/np. For Nintendo, this is jd1/dd1/dp1/sd1/sp1/lp1.
`public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__LoginResult_1a7577905d5d0f7576ae1f3a0f1b41e057) | true if PlatformEnvironment_Optional has been set to a value
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
`public inline FORCEINLINE `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a273e50b353b6b34c3396db29b4f825be)`()` | Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a54ab0ec630eb911fffe0dbe17bcc63c6)`() const` | Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a51d811d11ddbc85e67966a0e605d288e)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & DefaultValue) const` | Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a59d0fa1f3daa8cb5cd27771f34ebcf3b)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & OutValue) const` | Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a8ea2eb78a3d2d5930bbb4e999116e573)`()` | Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a34d0daa69058c2db9698f340f468edc1)`() const` | Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a4a1110b2d5e709fffca7278368b2b5cf)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & NewValue)` | Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa52a4d46fe187d728ac722be72e644d2)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` && NewValue)` | Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true using move semantics.
`public inline void `[`ClearPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)`()` | Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1aeb64ac14a63f4696e32a745325d43f1a)`()` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1aff7049bfb0947c341815e3916d7a3cca)`() const` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a80542274729cd3162f973ee7fd9dccf3)`(const TArray< FString > & DefaultValue) const` | Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPermissions`](#structFRHAPI__LoginResult_1a7915f1c3929df51e660f29ad7d698dbf)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1ae4ac03efbec5bdaf80f4ac20a398768c)`()` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1ade8bfccf7661b32ffdffd38a15ba3c2a)`() const` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__LoginResult_1a906d2b05cc6560d532b71dab4cd865f7)`(const TArray< FString > & NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.
`public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__LoginResult_1a2147c647439276bbededf8cafc0b0e45)`(TArray< FString > && NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.
`public inline void `[`ClearPermissions`](#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)`()` | Clears the value of Permissions_Optional and sets Permissions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1add8391c7c0a810bc40053910f740d2b0)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac63378e584a1c238326610f21341fd08)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a6440a0f86f3f590079724540387663db)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__LoginResult_1adcdb0bb592b2bdfa710cc0bc38c29057)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a7d2063668b1a2b78495f4d67718bfcde)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a22ac3c4a74a28bd72a1b83e12a2a21fa)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginResult_1a3cfd52c62a38fa2dab642445d48ff789)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginResult_1ac5b05a34e92d863be01d2be72004010f)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a2476393872f51227ad93ac95986d7f03)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1aa204d8dcd506fb02561eb0c73b0e096b)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a8ca995176315f3ea10989c2318b0a0c0)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a166d8c3da79b52660532cb64f2c9b965)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1ad4bca959a685f7793b8b71f6b109b6fe)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1a48ac411fa37165edcb05b5504e84f4af)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1aa024833b5e5429b7d91d53df443d3eb1)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1afa79b2f11806b84cb0d67dc942de7666)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__LoginResult_1a41386e7769c26576a72cc10d57b00aa1)`()` | Returns the default value of ActivePlayerId.
`public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a144b3a18fd877668a359358ce2f1aedc)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1ae449fe0b3d9563a2eb0b2396b753db06)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a0f1d43940093feca08c2b339d14e74ba)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1ab2630b266886e87d93f3b9ab1ea8c605)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1ae631e9ee1421c764d54681ec25291534)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1aa362fd2a80c5b8e1771156d708fa7fdf)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1aca28fe784493bfe4dd6f20575e48a8c5)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a72ae5b69312f5d61ba74fc5559016c00)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a9adc9d8aa59c5c503b01d8f3143c010a)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a34a00fcb1ccc87d31f4e6516cacfc5ea)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a9de31c044901d6e999f1de1908dea665)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__LoginResult_1afd4c0ca2472f9897934d851fe47038a7)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1a741d0bb4b8fd4759c180acdd4f3b0b03)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1a40acdf519a44bd5f00a78ffa6280be3d)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginResult_1ade980d249d9a137d78f38097cd896a36)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginResult_1aa720ab8f99a7125ca8e9e73bc3a7acfb)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a4704898a20e9523be7d0f58740b9b3ed)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a97805a5a8364984da37a83c621346867)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1aaf8fe38c59d99653110414e6f8df7e63)`(const int32 & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__LoginResult_1a0645a69a8dc8a2985b02db8e3e591db3)`(int32 & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1af5537e1407772c62af2119ff78f70f47)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1a70f8c9a9ebf379de1fb9f02ee7f8202b)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__LoginResult_1a9f4ca97465d4643e929eee10435c2a95)`(const int32 & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__LoginResult_1ad6203488bcfc006fdc5002b4a94a627b)`(int32 && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PortalId`](#structFRHAPI__LoginResult_1aede6ee0d6587615fe53aa15445504c7f)`()` | Returns the default value of PortalId.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a9a155033b5f334eaf54806b6c7319909)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a83ce74751506d12fc643c914fa82e6df)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a2dc638f2c9dd393100c42516c2e1195e)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a130bfaa9a5506932e0e985eef3e949c8)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1a4eec6b9e9f8cfeaa856faa1c4b2ccde4)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1a1a8d443ae06ea4b878996d55f3dffe34)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a60596facf8ce80b2536e27445f2bc343)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a7c80319bb07896c763df31c193c64e09)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1a040866e6c5abbc1cfce97691ac4820cd)`()` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1a50ab08ae03d56640de0b34f497f26fc6)`() const` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1ae766a43ef4b77d97f32982d107f59bf1)`(const FString & DefaultValue) const` | Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1ada64de8cc704568d0278044eef2b1e99)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__LoginResult_1a75720b24c0f16ba80aa64b73af0c8f87)`()` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__LoginResult_1a84f49d8d847ceb337a50e3fcacc7046e)`() const` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__LoginResult_1a2155d37e48baa09055331fd6aebd0077)`(const FString & NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__LoginResult_1a0454a12cd14538003648a508ffe9723d)`(FString && NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__LoginResult_1a6a35c4e31f094790a6989eff35069645)`()` | Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1ab0be3828ed2306505ef0e9757bb3af2f)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1aedae1a510aab3a32e53a2854e0fd7c53)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a9d22e3c03d1418ed1013430464320c3d)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__LoginResult_1a8b9fd58233a410ed040fde93c4ce667f)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1a0aa5d85d518a64f2d9058ab3b97b3bf8)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1aa8a40542203e0790cd8596039c38ffe1)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a1fed9998cf51fd8b6520f7cc1deb176b)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a19d6c5bc96dda67e0f22ab9832566789)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a151a55db6a64ee5dfac015ddf374f10c)`()` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1ab6f0693a72a0e3cef89ae939454fcbfa)`() const` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a7d6ca38d49c2b1c66110d0d2839edb6e)`(const int32 & DefaultValue) const` | Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRoleId`](#structFRHAPI__LoginResult_1a4598bb90a42b9b0963c534d3eb9acc97)`(int32 & OutValue) const` | Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a4a79fdac33351d2a544072c7daf98d10)`()` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1ac1f23955780fcc115d9e4ecd822cfc7e)`() const` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__LoginResult_1add1b3dc2d99d0614bf33468d7053e611)`(const int32 & NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.
`public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__LoginResult_1a84d0c8bd49128e9d3bfd03cb44833692)`(int32 && NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.
`public inline void `[`ClearRoleId`](#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)`()` | Clears the value of RoleId_Optional and sets RoleId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RoleId`](#structFRHAPI__LoginResult_1afbb36e1164b40d6eadbe978170331ada)`()` | Returns the default value of RoleId.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1afd9c2b900f23f518722d5ff433e82938)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a086478e18116d3c6366c7215d22068c9)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a4c0ec0377b0b7d17aff7e0929a146393)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__LoginResult_1a5335bd7f922c9c4c581afa5a266c4cdd)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1af7d7f90542e082dff1de39907066f630)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1a2f4894f4e89ccdc0e460c10e33211ee3)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginResult_1a85f0ad7a2a02168451a8bbc3eefd9326)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginResult_1a54f5c8a5e3a2df1a3226baa4a26d454a)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a1f8f85021ba44b67e545d454ce77352b)`()` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1ae4e8fbfe97adcb79d1d1444549a9b30a)`() const` | Gets the value of AccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1abdb93c94cde8f49fe29b8b5ff3b8e8a3)`(const FString & DefaultValue) const` | Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAccessToken`](#structFRHAPI__LoginResult_1a56f4c83cc2985ea2fd7bab3c3d4e4dec)`(FString & OutValue) const` | Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a04c190a6a32136526ac3d8db79d0787a)`()` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1af5f014fcf22635c640520d672656ba1c)`() const` | Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ac49813adfacdbda1a9ca50259a7fc025)`(const FString & NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.
`public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ab419e0e6c0ce7fe4e0316edcf7e04c57)`(FString && NewValue)` | Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.
`public inline void `[`ClearAccessToken`](#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)`()` | Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_AccessToken`](#structFRHAPI__LoginResult_1aa82a35850f030ebafdf5673f98c775b5)`()` | Returns the default value of AccessToken.
`public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a7555b7bc7cd3506219dcb85ba25eaee0)`()` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1ac86bd8c90d22a2844fea3dc3de4607f1)`() const` | Gets the value of RefreshToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a6c2dd3850a97b5e1169212b25eaa0500)`(const FString & DefaultValue) const` | Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRefreshToken`](#structFRHAPI__LoginResult_1ae437f96ae50a988fed98545446a1fab3)`(FString & OutValue) const` | Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1acb61ca2fdeb17a40a3117116daeb8cc0)`()` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1afe11232284ae0bb40ef551f377a8489f)`() const` | Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1a0aefb5533ba7bc9edd1234207c9ef62c)`(const FString & NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1adecfcf4e7fa94912295cc881b5851c39)`(FString && NewValue)` | Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.
`public inline void `[`ClearRefreshToken`](#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)`()` | Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a2f889c4a676a5d21485e33febc7f39ad)`()` | Gets the value of PublisherUuid.
`public inline FORCEINLINE const FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a85889014377acad8096051c1cce77a23)`() const` | Gets the value of PublisherUuid.
`public inline FORCEINLINE void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1a037825b9e2f321749e7c8a9a768688ec)`(const FGuid & NewValue)` | Sets the value of PublisherUuid.
`public inline FORCEINLINE void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1ab8347218e9aeab639ccaeab53d074259)`(FGuid && NewValue)` | Sets the value of PublisherUuid using move semantics.
`public inline FORCEINLINE FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a5e29cacf4c6420506a26ce94085dc641)`()` | Gets the value of TenantUuid.
`public inline FORCEINLINE const FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1aead53f47b086e1f44a35be2c227d338b)`() const` | Gets the value of TenantUuid.
`public inline FORCEINLINE void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a2569e6f626381859b159e90d12ecc63b)`(const FGuid & NewValue)` | Sets the value of TenantUuid.
`public inline FORCEINLINE void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1aea6ad320e9045fca2ca9115af1c08ffa)`(FGuid && NewValue)` | Sets the value of TenantUuid using move semantics.
`public inline FORCEINLINE FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1aef3b31d2717aa18ac5eebd87a91357cb)`()` | Gets the value of ConfigElectorUuid.
`public inline FORCEINLINE const FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1ad56e06f6816df21eb03f6cf2a4b3dc10)`() const` | Gets the value of ConfigElectorUuid.
`public inline FORCEINLINE void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1ae66b87beb7b14282170813b22192ef7b)`(const FGuid & NewValue)` | Sets the value of ConfigElectorUuid.
`public inline FORCEINLINE void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1a9abbd83c92b5904815bb4150b253639e)`(FGuid && NewValue)` | Sets the value of ConfigElectorUuid using move semantics.
`public inline FORCEINLINE FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1ae77289b312db197cbc5869e9adba9a8d)`()` | Gets the value of ClientUuid.
`public inline FORCEINLINE const FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1aa41331fa1e4938ed9c2df223b41f2843)`() const` | Gets the value of ClientUuid.
`public inline FORCEINLINE void `[`SetClientUuid`](#structFRHAPI__LoginResult_1acebf42d9a435eec1930ffd51eb2db669)`(const FGuid & NewValue)` | Sets the value of ClientUuid.
`public inline FORCEINLINE void `[`SetClientUuid`](#structFRHAPI__LoginResult_1a873393103d5f2d8baa0b8af67baf9442)`(FGuid && NewValue)` | Sets the value of ClientUuid using move semantics.
`public inline FORCEINLINE FString & `[`GetClientId`](#structFRHAPI__LoginResult_1a677c6c36d86e3e6f3f5db25d52dd7a70)`()` | Gets the value of ClientId.
`public inline FORCEINLINE const FString & `[`GetClientId`](#structFRHAPI__LoginResult_1a75e5d75f3b996f37a9a523caff988ed1)`() const` | Gets the value of ClientId.
`public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginResult_1a00c587d1f27ff870fdc86fbc8818686f)`(const FString & NewValue)` | Sets the value of ClientId.
`public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginResult_1a11d386a9f31fd80c3b5acb57f0761e3c)`(FString && NewValue)` | Sets the value of ClientId using move semantics.
`public inline FORCEINLINE FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1aa0c9b11defe1bd2ec0bb695c7d486053)`()` | Gets the value of TokenType.
`public inline FORCEINLINE const FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1ac871137caf22fb8031d026f91d3b9371)`() const` | Gets the value of TokenType.
`public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__LoginResult_1a6cf081e31e1ab8644738100ba3463a7d)`(const FString & NewValue)` | Sets the value of TokenType.
`public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__LoginResult_1a102d28f9f28d3c5d8f259a14c09946a7)`(FString && NewValue)` | Sets the value of TokenType using move semantics.
`public inline FORCEINLINE int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a8af7416b882e96e5faa917f31212ebfd)`()` | Gets the value of ExpiresIn_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a08308548220a2ed3d120a84fa7860671)`() const` | Gets the value of ExpiresIn_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a61f0e3ce3f55b5c96475a3ac022e8f02)`(const int32 & DefaultValue) const` | Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a568608c2f90e690329597f9637553b20)`(int32 & OutValue) const` | Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1ac1abf8ce4650c769abbfa781c1cf1b68)`()` | Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1afafbd9372605427c26aa2f22e3dcc6fc)`() const` | Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1acb1a052f8d8dc571a2908aa2ae69939c)`(const int32 & NewValue)` | Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true.
`public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1a98769d90350924408ba44349f069c0a4)`(int32 && NewValue)` | Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true using move semantics.
`public inline void `[`ClearExpiresIn`](#structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae)`()` | Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ExpiresIn`](#structFRHAPI__LoginResult_1a391f8cb8edd954c9be999e499c54bdac)`()` | Returns the default value of ExpiresIn.

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

#### `public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__LoginResult_1a841198710987a73e506322921009a61b) <a id="structFRHAPI__LoginResult_1a841198710987a73e506322921009a61b"></a>

Which of the platform's environments was this user info from? For Xbox, this is sandbox. For PSN, this is sp-int/prod-qa/np. For Nintendo, this is jd1/dd1/dp1/sd1/sp1/lp1.

#### `public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__LoginResult_1a7577905d5d0f7576ae1f3a0f1b41e057) <a id="structFRHAPI__LoginResult_1a7577905d5d0f7576ae1f3a0f1b41e057"></a>

true if PlatformEnvironment_Optional has been set to a value

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

#### `public inline FORCEINLINE `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a273e50b353b6b34c3396db29b4f825be)`()` <a id="structFRHAPI__LoginResult_1a273e50b353b6b34c3396db29b4f825be"></a>

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a54ab0ec630eb911fffe0dbe17bcc63c6)`() const` <a id="structFRHAPI__LoginResult_1a54ab0ec630eb911fffe0dbe17bcc63c6"></a>

Gets the value of PortalParentAuthResult_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a51d811d11ddbc85e67966a0e605d288e)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a51d811d11ddbc85e67966a0e605d288e"></a>

Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a59d0fa1f3daa8cb5cd27771f34ebcf3b)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & OutValue) const` <a id="structFRHAPI__LoginResult_1a59d0fa1f3daa8cb5cd27771f34ebcf3b"></a>

Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a8ea2eb78a3d2d5930bbb4e999116e573)`()` <a id="structFRHAPI__LoginResult_1a8ea2eb78a3d2d5930bbb4e999116e573"></a>

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` * `[`GetPortalParentAuthResultOrNull`](#structFRHAPI__LoginResult_1a34d0daa69058c2db9698f340f468edc1)`() const` <a id="structFRHAPI__LoginResult_1a34d0daa69058c2db9698f340f468edc1"></a>

Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1a4a1110b2d5e709fffca7278368b2b5cf)`(const `[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` & NewValue)` <a id="structFRHAPI__LoginResult_1a4a1110b2d5e709fffca7278368b2b5cf"></a>

Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa52a4d46fe187d728ac722be72e644d2)`(`[`FRHAPI_PortalUserInfo`](RHAPI_PortalUserInfo.md#structFRHAPI__PortalUserInfo)` && NewValue)` <a id="structFRHAPI__LoginResult_1aa52a4d46fe187d728ac722be72e644d2"></a>

Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalParentAuthResult`](#structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24)`()` <a id="structFRHAPI__LoginResult_1aa36803dfc08638528fd8c688bf80bf24"></a>

Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1aeb64ac14a63f4696e32a745325d43f1a)`()` <a id="structFRHAPI__LoginResult_1aeb64ac14a63f4696e32a745325d43f1a"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1aff7049bfb0947c341815e3916d7a3cca)`() const` <a id="structFRHAPI__LoginResult_1aff7049bfb0947c341815e3916d7a3cca"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetPermissions`](#structFRHAPI__LoginResult_1a80542274729cd3162f973ee7fd9dccf3)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a80542274729cd3162f973ee7fd9dccf3"></a>

Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPermissions`](#structFRHAPI__LoginResult_1a7915f1c3929df51e660f29ad7d698dbf)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__LoginResult_1a7915f1c3929df51e660f29ad7d698dbf"></a>

Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1ae4ac03efbec5bdaf80f4ac20a398768c)`()` <a id="structFRHAPI__LoginResult_1ae4ac03efbec5bdaf80f4ac20a398768c"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetPermissionsOrNull`](#structFRHAPI__LoginResult_1ade8bfccf7661b32ffdffd38a15ba3c2a)`() const` <a id="structFRHAPI__LoginResult_1ade8bfccf7661b32ffdffd38a15ba3c2a"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__LoginResult_1a906d2b05cc6560d532b71dab4cd865f7)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__LoginResult_1a906d2b05cc6560d532b71dab4cd865f7"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__LoginResult_1a2147c647439276bbededf8cafc0b0e45)`(TArray< FString > && NewValue)` <a id="structFRHAPI__LoginResult_1a2147c647439276bbededf8cafc0b0e45"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.

#### `public inline void `[`ClearPermissions`](#structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb)`()` <a id="structFRHAPI__LoginResult_1ac2213188392440997ac42e87729525bb"></a>

Clears the value of Permissions_Optional and sets Permissions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1add8391c7c0a810bc40053910f740d2b0)`()` <a id="structFRHAPI__LoginResult_1add8391c7c0a810bc40053910f740d2b0"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1ac63378e584a1c238326610f21341fd08)`() const` <a id="structFRHAPI__LoginResult_1ac63378e584a1c238326610f21341fd08"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginResult_1a6440a0f86f3f590079724540387663db)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a6440a0f86f3f590079724540387663db"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__LoginResult_1adcdb0bb592b2bdfa710cc0bc38c29057)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__LoginResult_1adcdb0bb592b2bdfa710cc0bc38c29057"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a7d2063668b1a2b78495f4d67718bfcde)`()` <a id="structFRHAPI__LoginResult_1a7d2063668b1a2b78495f4d67718bfcde"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginResult_1a22ac3c4a74a28bd72a1b83e12a2a21fa)`() const` <a id="structFRHAPI__LoginResult_1a22ac3c4a74a28bd72a1b83e12a2a21fa"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginResult_1a3cfd52c62a38fa2dab642445d48ff789)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__LoginResult_1a3cfd52c62a38fa2dab642445d48ff789"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginResult_1ac5b05a34e92d863be01d2be72004010f)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__LoginResult_1ac5b05a34e92d863be01d2be72004010f"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5)`()` <a id="structFRHAPI__LoginResult_1a8064e54643a413110e09279104d1eee5"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a2476393872f51227ad93ac95986d7f03)`()` <a id="structFRHAPI__LoginResult_1a2476393872f51227ad93ac95986d7f03"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1aa204d8dcd506fb02561eb0c73b0e096b)`() const` <a id="structFRHAPI__LoginResult_1aa204d8dcd506fb02561eb0c73b0e096b"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a8ca995176315f3ea10989c2318b0a0c0)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a8ca995176315f3ea10989c2318b0a0c0"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__LoginResult_1a166d8c3da79b52660532cb64f2c9b965)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a166d8c3da79b52660532cb64f2c9b965"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1ad4bca959a685f7793b8b71f6b109b6fe)`()` <a id="structFRHAPI__LoginResult_1ad4bca959a685f7793b8b71f6b109b6fe"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__LoginResult_1a48ac411fa37165edcb05b5504e84f4af)`() const` <a id="structFRHAPI__LoginResult_1a48ac411fa37165edcb05b5504e84f4af"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1aa024833b5e5429b7d91d53df443d3eb1)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1aa024833b5e5429b7d91d53df443d3eb1"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__LoginResult_1afa79b2f11806b84cb0d67dc942de7666)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1afa79b2f11806b84cb0d67dc942de7666"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3)`()` <a id="structFRHAPI__LoginResult_1a1b9c9b478e52a173f801ad3895c195a3"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__LoginResult_1a41386e7769c26576a72cc10d57b00aa1)`()` <a id="structFRHAPI__LoginResult_1a41386e7769c26576a72cc10d57b00aa1"></a>

Returns the default value of ActivePlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a144b3a18fd877668a359358ce2f1aedc)`()` <a id="structFRHAPI__LoginResult_1a144b3a18fd877668a359358ce2f1aedc"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1ae449fe0b3d9563a2eb0b2396b753db06)`() const` <a id="structFRHAPI__LoginResult_1ae449fe0b3d9563a2eb0b2396b753db06"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1a0f1d43940093feca08c2b339d14e74ba)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a0f1d43940093feca08c2b339d14e74ba"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__LoginResult_1ab2630b266886e87d93f3b9ab1ea8c605)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginResult_1ab2630b266886e87d93f3b9ab1ea8c605"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1ae631e9ee1421c764d54681ec25291534)`()` <a id="structFRHAPI__LoginResult_1ae631e9ee1421c764d54681ec25291534"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__LoginResult_1aa362fd2a80c5b8e1771156d708fa7fdf)`() const` <a id="structFRHAPI__LoginResult_1aa362fd2a80c5b8e1771156d708fa7fdf"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1aca28fe784493bfe4dd6f20575e48a8c5)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1aca28fe784493bfe4dd6f20575e48a8c5"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__LoginResult_1a72ae5b69312f5d61ba74fc5559016c00)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a72ae5b69312f5d61ba74fc5559016c00"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d)`()` <a id="structFRHAPI__LoginResult_1a061552f18cd22ca6b609b2112934525d"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a9adc9d8aa59c5c503b01d8f3143c010a)`()` <a id="structFRHAPI__LoginResult_1a9adc9d8aa59c5c503b01d8f3143c010a"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a34a00fcb1ccc87d31f4e6516cacfc5ea)`() const` <a id="structFRHAPI__LoginResult_1a34a00fcb1ccc87d31f4e6516cacfc5ea"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginResult_1a9de31c044901d6e999f1de1908dea665)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a9de31c044901d6e999f1de1908dea665"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__LoginResult_1afd4c0ca2472f9897934d851fe47038a7)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__LoginResult_1afd4c0ca2472f9897934d851fe47038a7"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1a741d0bb4b8fd4759c180acdd4f3b0b03)`()` <a id="structFRHAPI__LoginResult_1a741d0bb4b8fd4759c180acdd4f3b0b03"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginResult_1a40acdf519a44bd5f00a78ffa6280be3d)`() const` <a id="structFRHAPI__LoginResult_1a40acdf519a44bd5f00a78ffa6280be3d"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginResult_1ade980d249d9a137d78f38097cd896a36)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__LoginResult_1ade980d249d9a137d78f38097cd896a36"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginResult_1aa720ab8f99a7125ca8e9e73bc3a7acfb)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__LoginResult_1aa720ab8f99a7125ca8e9e73bc3a7acfb"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb)`()` <a id="structFRHAPI__LoginResult_1a308a1f4ca675358c484366e796a2d3cb"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a4704898a20e9523be7d0f58740b9b3ed)`()` <a id="structFRHAPI__LoginResult_1a4704898a20e9523be7d0f58740b9b3ed"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1a97805a5a8364984da37a83c621346867)`() const` <a id="structFRHAPI__LoginResult_1a97805a5a8364984da37a83c621346867"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPortalId`](#structFRHAPI__LoginResult_1aaf8fe38c59d99653110414e6f8df7e63)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1aaf8fe38c59d99653110414e6f8df7e63"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__LoginResult_1a0645a69a8dc8a2985b02db8e3e591db3)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a0645a69a8dc8a2985b02db8e3e591db3"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1af5537e1407772c62af2119ff78f70f47)`()` <a id="structFRHAPI__LoginResult_1af5537e1407772c62af2119ff78f70f47"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPortalIdOrNull`](#structFRHAPI__LoginResult_1a70f8c9a9ebf379de1fb9f02ee7f8202b)`() const` <a id="structFRHAPI__LoginResult_1a70f8c9a9ebf379de1fb9f02ee7f8202b"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__LoginResult_1a9f4ca97465d4643e929eee10435c2a95)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1a9f4ca97465d4643e929eee10435c2a95"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__LoginResult_1ad6203488bcfc006fdc5002b4a94a627b)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1ad6203488bcfc006fdc5002b4a94a627b"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78)`()` <a id="structFRHAPI__LoginResult_1a712d02eaecff2b7f12f87880c8077b78"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PortalId`](#structFRHAPI__LoginResult_1aede6ee0d6587615fe53aa15445504c7f)`()` <a id="structFRHAPI__LoginResult_1aede6ee0d6587615fe53aa15445504c7f"></a>

Returns the default value of PortalId.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a9a155033b5f334eaf54806b6c7319909)`()` <a id="structFRHAPI__LoginResult_1a9a155033b5f334eaf54806b6c7319909"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a83ce74751506d12fc643c914fa82e6df)`() const` <a id="structFRHAPI__LoginResult_1a83ce74751506d12fc643c914fa82e6df"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a2dc638f2c9dd393100c42516c2e1195e)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a2dc638f2c9dd393100c42516c2e1195e"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__LoginResult_1a130bfaa9a5506932e0e985eef3e949c8)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a130bfaa9a5506932e0e985eef3e949c8"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1a4eec6b9e9f8cfeaa856faa1c4b2ccde4)`()` <a id="structFRHAPI__LoginResult_1a4eec6b9e9f8cfeaa856faa1c4b2ccde4"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__LoginResult_1a1a8d443ae06ea4b878996d55f3dffe34)`() const` <a id="structFRHAPI__LoginResult_1a1a8d443ae06ea4b878996d55f3dffe34"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a60596facf8ce80b2536e27445f2bc343)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a60596facf8ce80b2536e27445f2bc343"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__LoginResult_1a7c80319bb07896c763df31c193c64e09)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a7c80319bb07896c763df31c193c64e09"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a)`()` <a id="structFRHAPI__LoginResult_1a1a87647cf0a6cdeafe147e2696e9d94a"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1a040866e6c5abbc1cfce97691ac4820cd)`()` <a id="structFRHAPI__LoginResult_1a040866e6c5abbc1cfce97691ac4820cd"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1a50ab08ae03d56640de0b34f497f26fc6)`() const` <a id="structFRHAPI__LoginResult_1a50ab08ae03d56640de0b34f497f26fc6"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1ae766a43ef4b77d97f32982d107f59bf1)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1ae766a43ef4b77d97f32982d107f59bf1"></a>

Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformEnvironment`](#structFRHAPI__LoginResult_1ada64de8cc704568d0278044eef2b1e99)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1ada64de8cc704568d0278044eef2b1e99"></a>

Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__LoginResult_1a75720b24c0f16ba80aa64b73af0c8f87)`()` <a id="structFRHAPI__LoginResult_1a75720b24c0f16ba80aa64b73af0c8f87"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__LoginResult_1a84f49d8d847ceb337a50e3fcacc7046e)`() const` <a id="structFRHAPI__LoginResult_1a84f49d8d847ceb337a50e3fcacc7046e"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__LoginResult_1a2155d37e48baa09055331fd6aebd0077)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a2155d37e48baa09055331fd6aebd0077"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__LoginResult_1a0454a12cd14538003648a508ffe9723d)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a0454a12cd14538003648a508ffe9723d"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__LoginResult_1a6a35c4e31f094790a6989eff35069645)`()` <a id="structFRHAPI__LoginResult_1a6a35c4e31f094790a6989eff35069645"></a>

Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1ab0be3828ed2306505ef0e9757bb3af2f)`()` <a id="structFRHAPI__LoginResult_1ab0be3828ed2306505ef0e9757bb3af2f"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1aedae1a510aab3a32e53a2854e0fd7c53)`() const` <a id="structFRHAPI__LoginResult_1aedae1a510aab3a32e53a2854e0fd7c53"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__LoginResult_1a9d22e3c03d1418ed1013430464320c3d)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a9d22e3c03d1418ed1013430464320c3d"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__LoginResult_1a8b9fd58233a410ed040fde93c4ce667f)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a8b9fd58233a410ed040fde93c4ce667f"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1a0aa5d85d518a64f2d9058ab3b97b3bf8)`()` <a id="structFRHAPI__LoginResult_1a0aa5d85d518a64f2d9058ab3b97b3bf8"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__LoginResult_1aa8a40542203e0790cd8596039c38ffe1)`() const` <a id="structFRHAPI__LoginResult_1aa8a40542203e0790cd8596039c38ffe1"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a1fed9998cf51fd8b6520f7cc1deb176b)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a1fed9998cf51fd8b6520f7cc1deb176b"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__LoginResult_1a19d6c5bc96dda67e0f22ab9832566789)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a19d6c5bc96dda67e0f22ab9832566789"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96)`()` <a id="structFRHAPI__LoginResult_1a283b86fec06f806b51bd4cd784f95e96"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a151a55db6a64ee5dfac015ddf374f10c)`()` <a id="structFRHAPI__LoginResult_1a151a55db6a64ee5dfac015ddf374f10c"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1ab6f0693a72a0e3cef89ae939454fcbfa)`() const` <a id="structFRHAPI__LoginResult_1ab6f0693a72a0e3cef89ae939454fcbfa"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRoleId`](#structFRHAPI__LoginResult_1a7d6ca38d49c2b1c66110d0d2839edb6e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a7d6ca38d49c2b1c66110d0d2839edb6e"></a>

Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRoleId`](#structFRHAPI__LoginResult_1a4598bb90a42b9b0963c534d3eb9acc97)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a4598bb90a42b9b0963c534d3eb9acc97"></a>

Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1a4a79fdac33351d2a544072c7daf98d10)`()` <a id="structFRHAPI__LoginResult_1a4a79fdac33351d2a544072c7daf98d10"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRoleIdOrNull`](#structFRHAPI__LoginResult_1ac1f23955780fcc115d9e4ecd822cfc7e)`() const` <a id="structFRHAPI__LoginResult_1ac1f23955780fcc115d9e4ecd822cfc7e"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__LoginResult_1add1b3dc2d99d0614bf33468d7053e611)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1add1b3dc2d99d0614bf33468d7053e611"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__LoginResult_1a84d0c8bd49128e9d3bfd03cb44833692)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1a84d0c8bd49128e9d3bfd03cb44833692"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.

#### `public inline void `[`ClearRoleId`](#structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9)`()` <a id="structFRHAPI__LoginResult_1a8569561d7b4bde1c550ddf791bbc70c9"></a>

Clears the value of RoleId_Optional and sets RoleId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RoleId`](#structFRHAPI__LoginResult_1afbb36e1164b40d6eadbe978170331ada)`()` <a id="structFRHAPI__LoginResult_1afbb36e1164b40d6eadbe978170331ada"></a>

Returns the default value of RoleId.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1afd9c2b900f23f518722d5ff433e82938)`()` <a id="structFRHAPI__LoginResult_1afd9c2b900f23f518722d5ff433e82938"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a086478e18116d3c6366c7215d22068c9)`() const` <a id="structFRHAPI__LoginResult_1a086478e18116d3c6366c7215d22068c9"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginResult_1a4c0ec0377b0b7d17aff7e0929a146393)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a4c0ec0377b0b7d17aff7e0929a146393"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__LoginResult_1a5335bd7f922c9c4c581afa5a266c4cdd)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginResult_1a5335bd7f922c9c4c581afa5a266c4cdd"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1af7d7f90542e082dff1de39907066f630)`()` <a id="structFRHAPI__LoginResult_1af7d7f90542e082dff1de39907066f630"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginResult_1a2f4894f4e89ccdc0e460c10e33211ee3)`() const` <a id="structFRHAPI__LoginResult_1a2f4894f4e89ccdc0e460c10e33211ee3"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginResult_1a85f0ad7a2a02168451a8bbc3eefd9326)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a85f0ad7a2a02168451a8bbc3eefd9326"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginResult_1a54f5c8a5e3a2df1a3226baa4a26d454a)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a54f5c8a5e3a2df1a3226baa4a26d454a"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81)`()` <a id="structFRHAPI__LoginResult_1a8e32ddf5cbf7be065d8323e337ef6a81"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1a1f8f85021ba44b67e545d454ce77352b)`()` <a id="structFRHAPI__LoginResult_1a1f8f85021ba44b67e545d454ce77352b"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1ae4e8fbfe97adcb79d1d1444549a9b30a)`() const` <a id="structFRHAPI__LoginResult_1ae4e8fbfe97adcb79d1d1444549a9b30a"></a>

Gets the value of AccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAccessToken`](#structFRHAPI__LoginResult_1abdb93c94cde8f49fe29b8b5ff3b8e8a3)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1abdb93c94cde8f49fe29b8b5ff3b8e8a3"></a>

Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAccessToken`](#structFRHAPI__LoginResult_1a56f4c83cc2985ea2fd7bab3c3d4e4dec)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1a56f4c83cc2985ea2fd7bab3c3d4e4dec"></a>

Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1a04c190a6a32136526ac3d8db79d0787a)`()` <a id="structFRHAPI__LoginResult_1a04c190a6a32136526ac3d8db79d0787a"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetAccessTokenOrNull`](#structFRHAPI__LoginResult_1af5f014fcf22635c640520d672656ba1c)`() const` <a id="structFRHAPI__LoginResult_1af5f014fcf22635c640520d672656ba1c"></a>

Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ac49813adfacdbda1a9ca50259a7fc025)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1ac49813adfacdbda1a9ca50259a7fc025"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAccessToken`](#structFRHAPI__LoginResult_1ab419e0e6c0ce7fe4e0316edcf7e04c57)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1ab419e0e6c0ce7fe4e0316edcf7e04c57"></a>

Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearAccessToken`](#structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc)`()` <a id="structFRHAPI__LoginResult_1ad7662e9ca33b063f594a57ab806030fc"></a>

Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_AccessToken`](#structFRHAPI__LoginResult_1aa82a35850f030ebafdf5673f98c775b5)`()` <a id="structFRHAPI__LoginResult_1aa82a35850f030ebafdf5673f98c775b5"></a>

Returns the default value of AccessToken.

#### `public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a7555b7bc7cd3506219dcb85ba25eaee0)`()` <a id="structFRHAPI__LoginResult_1a7555b7bc7cd3506219dcb85ba25eaee0"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1ac86bd8c90d22a2844fea3dc3de4607f1)`() const` <a id="structFRHAPI__LoginResult_1ac86bd8c90d22a2844fea3dc3de4607f1"></a>

Gets the value of RefreshToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__LoginResult_1a6c2dd3850a97b5e1169212b25eaa0500)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a6c2dd3850a97b5e1169212b25eaa0500"></a>

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRefreshToken`](#structFRHAPI__LoginResult_1ae437f96ae50a988fed98545446a1fab3)`(FString & OutValue) const` <a id="structFRHAPI__LoginResult_1ae437f96ae50a988fed98545446a1fab3"></a>

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1acb61ca2fdeb17a40a3117116daeb8cc0)`()` <a id="structFRHAPI__LoginResult_1acb61ca2fdeb17a40a3117116daeb8cc0"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRefreshTokenOrNull`](#structFRHAPI__LoginResult_1afe11232284ae0bb40ef551f377a8489f)`() const` <a id="structFRHAPI__LoginResult_1afe11232284ae0bb40ef551f377a8489f"></a>

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1a0aefb5533ba7bc9edd1234207c9ef62c)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a0aefb5533ba7bc9edd1234207c9ef62c"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LoginResult_1adecfcf4e7fa94912295cc881b5851c39)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1adecfcf4e7fa94912295cc881b5851c39"></a>

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true using move semantics.

#### `public inline void `[`ClearRefreshToken`](#structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99)`()` <a id="structFRHAPI__LoginResult_1a31fd8762d202e872dd192dadeb3e6b99"></a>

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a2f889c4a676a5d21485e33febc7f39ad)`()` <a id="structFRHAPI__LoginResult_1a2f889c4a676a5d21485e33febc7f39ad"></a>

Gets the value of PublisherUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPublisherUuid`](#structFRHAPI__LoginResult_1a85889014377acad8096051c1cce77a23)`() const` <a id="structFRHAPI__LoginResult_1a85889014377acad8096051c1cce77a23"></a>

Gets the value of PublisherUuid.

#### `public inline FORCEINLINE void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1a037825b9e2f321749e7c8a9a768688ec)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a037825b9e2f321749e7c8a9a768688ec"></a>

Sets the value of PublisherUuid.

#### `public inline FORCEINLINE void `[`SetPublisherUuid`](#structFRHAPI__LoginResult_1ab8347218e9aeab639ccaeab53d074259)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1ab8347218e9aeab639ccaeab53d074259"></a>

Sets the value of PublisherUuid using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1a5e29cacf4c6420506a26ce94085dc641)`()` <a id="structFRHAPI__LoginResult_1a5e29cacf4c6420506a26ce94085dc641"></a>

Gets the value of TenantUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetTenantUuid`](#structFRHAPI__LoginResult_1aead53f47b086e1f44a35be2c227d338b)`() const` <a id="structFRHAPI__LoginResult_1aead53f47b086e1f44a35be2c227d338b"></a>

Gets the value of TenantUuid.

#### `public inline FORCEINLINE void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1a2569e6f626381859b159e90d12ecc63b)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1a2569e6f626381859b159e90d12ecc63b"></a>

Sets the value of TenantUuid.

#### `public inline FORCEINLINE void `[`SetTenantUuid`](#structFRHAPI__LoginResult_1aea6ad320e9045fca2ca9115af1c08ffa)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1aea6ad320e9045fca2ca9115af1c08ffa"></a>

Sets the value of TenantUuid using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1aef3b31d2717aa18ac5eebd87a91357cb)`()` <a id="structFRHAPI__LoginResult_1aef3b31d2717aa18ac5eebd87a91357cb"></a>

Gets the value of ConfigElectorUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetConfigElectorUuid`](#structFRHAPI__LoginResult_1ad56e06f6816df21eb03f6cf2a4b3dc10)`() const` <a id="structFRHAPI__LoginResult_1ad56e06f6816df21eb03f6cf2a4b3dc10"></a>

Gets the value of ConfigElectorUuid.

#### `public inline FORCEINLINE void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1ae66b87beb7b14282170813b22192ef7b)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1ae66b87beb7b14282170813b22192ef7b"></a>

Sets the value of ConfigElectorUuid.

#### `public inline FORCEINLINE void `[`SetConfigElectorUuid`](#structFRHAPI__LoginResult_1a9abbd83c92b5904815bb4150b253639e)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a9abbd83c92b5904815bb4150b253639e"></a>

Sets the value of ConfigElectorUuid using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1ae77289b312db197cbc5869e9adba9a8d)`()` <a id="structFRHAPI__LoginResult_1ae77289b312db197cbc5869e9adba9a8d"></a>

Gets the value of ClientUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetClientUuid`](#structFRHAPI__LoginResult_1aa41331fa1e4938ed9c2df223b41f2843)`() const` <a id="structFRHAPI__LoginResult_1aa41331fa1e4938ed9c2df223b41f2843"></a>

Gets the value of ClientUuid.

#### `public inline FORCEINLINE void `[`SetClientUuid`](#structFRHAPI__LoginResult_1acebf42d9a435eec1930ffd51eb2db669)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginResult_1acebf42d9a435eec1930ffd51eb2db669"></a>

Sets the value of ClientUuid.

#### `public inline FORCEINLINE void `[`SetClientUuid`](#structFRHAPI__LoginResult_1a873393103d5f2d8baa0b8af67baf9442)`(FGuid && NewValue)` <a id="structFRHAPI__LoginResult_1a873393103d5f2d8baa0b8af67baf9442"></a>

Sets the value of ClientUuid using move semantics.

#### `public inline FORCEINLINE FString & `[`GetClientId`](#structFRHAPI__LoginResult_1a677c6c36d86e3e6f3f5db25d52dd7a70)`()` <a id="structFRHAPI__LoginResult_1a677c6c36d86e3e6f3f5db25d52dd7a70"></a>

Gets the value of ClientId.

#### `public inline FORCEINLINE const FString & `[`GetClientId`](#structFRHAPI__LoginResult_1a75e5d75f3b996f37a9a523caff988ed1)`() const` <a id="structFRHAPI__LoginResult_1a75e5d75f3b996f37a9a523caff988ed1"></a>

Gets the value of ClientId.

#### `public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginResult_1a00c587d1f27ff870fdc86fbc8818686f)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a00c587d1f27ff870fdc86fbc8818686f"></a>

Sets the value of ClientId.

#### `public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginResult_1a11d386a9f31fd80c3b5acb57f0761e3c)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a11d386a9f31fd80c3b5acb57f0761e3c"></a>

Sets the value of ClientId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1aa0c9b11defe1bd2ec0bb695c7d486053)`()` <a id="structFRHAPI__LoginResult_1aa0c9b11defe1bd2ec0bb695c7d486053"></a>

Gets the value of TokenType.

#### `public inline FORCEINLINE const FString & `[`GetTokenType`](#structFRHAPI__LoginResult_1ac871137caf22fb8031d026f91d3b9371)`() const` <a id="structFRHAPI__LoginResult_1ac871137caf22fb8031d026f91d3b9371"></a>

Gets the value of TokenType.

#### `public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__LoginResult_1a6cf081e31e1ab8644738100ba3463a7d)`(const FString & NewValue)` <a id="structFRHAPI__LoginResult_1a6cf081e31e1ab8644738100ba3463a7d"></a>

Sets the value of TokenType.

#### `public inline FORCEINLINE void `[`SetTokenType`](#structFRHAPI__LoginResult_1a102d28f9f28d3c5d8f259a14c09946a7)`(FString && NewValue)` <a id="structFRHAPI__LoginResult_1a102d28f9f28d3c5d8f259a14c09946a7"></a>

Sets the value of TokenType using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a8af7416b882e96e5faa917f31212ebfd)`()` <a id="structFRHAPI__LoginResult_1a8af7416b882e96e5faa917f31212ebfd"></a>

Gets the value of ExpiresIn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a08308548220a2ed3d120a84fa7860671)`() const` <a id="structFRHAPI__LoginResult_1a08308548220a2ed3d120a84fa7860671"></a>

Gets the value of ExpiresIn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a61f0e3ce3f55b5c96475a3ac022e8f02)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LoginResult_1a61f0e3ce3f55b5c96475a3ac022e8f02"></a>

Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpiresIn`](#structFRHAPI__LoginResult_1a568608c2f90e690329597f9637553b20)`(int32 & OutValue) const` <a id="structFRHAPI__LoginResult_1a568608c2f90e690329597f9637553b20"></a>

Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1ac1abf8ce4650c769abbfa781c1cf1b68)`()` <a id="structFRHAPI__LoginResult_1ac1abf8ce4650c769abbfa781c1cf1b68"></a>

Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetExpiresInOrNull`](#structFRHAPI__LoginResult_1afafbd9372605427c26aa2f22e3dcc6fc)`() const` <a id="structFRHAPI__LoginResult_1afafbd9372605427c26aa2f22e3dcc6fc"></a>

Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1acb1a052f8d8dc571a2908aa2ae69939c)`(const int32 & NewValue)` <a id="structFRHAPI__LoginResult_1acb1a052f8d8dc571a2908aa2ae69939c"></a>

Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpiresIn`](#structFRHAPI__LoginResult_1a98769d90350924408ba44349f069c0a4)`(int32 && NewValue)` <a id="structFRHAPI__LoginResult_1a98769d90350924408ba44349f069c0a4"></a>

Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiresIn`](#structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae)`()` <a id="structFRHAPI__LoginResult_1a80efb45adcc41e57693500a0bf4b31ae"></a>

Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ExpiresIn`](#structFRHAPI__LoginResult_1a391f8cb8edd954c9be999e499c54bdac)`()` <a id="structFRHAPI__LoginResult_1a391f8cb8edd954c9be999e499c54bdac"></a>

Returns the default value of ExpiresIn.

