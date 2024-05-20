# RHAPI_KeyClaim <a id="group__RHAPI__KeyClaim"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KeyClaim`](#structFRHAPI__KeyClaim) | A KeyClaim is a reward a player for fulfilling requirements of an eternal marketing campaign. Once the player has completed the requirements of the campaign and have been assigned a sku of the campaign by the Platform, invoke Process Key Entitlements to consume the sku from the Platform for a Key Claim.

## struct `FRHAPI_KeyClaim` <a id="structFRHAPI__KeyClaim"></a>

```
struct FRHAPI_KeyClaim
  : public FRHAPI_Model
```

A KeyClaim is a reward a player for fulfilling requirements of an eternal marketing campaign. Once the player has completed the requirements of the campaign and have been assigned a sku of the campaign by the Platform, invoke Process Key Entitlements to consume the sku from the Platform for a Key Claim.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__KeyClaim_1a230d8f8464d3ff7466cdd4d785081567) | Platform the player is on.
`public bool `[`PortalId_IsSet`](#structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3) | true if PortalId_Optional has been set to a value
`public FString `[`PortalUserId_Optional`](#structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97) | The Platform's unique identifier for the player.
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582) | true if PortalUserId_Optional has been set to a value
`public FGuid `[`KeyClaimUuid`](#structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344) | The unique identifier for the KeyClaim.
`public bool `[`Claimed_Optional`](#structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4) | Whether the KeyClaim has been claimed.
`public bool `[`Claimed_IsSet`](#structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42) | true if Claimed_Optional has been set to a value
`public FString `[`ExternalKey_Optional`](#structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6) | The external key that was been claimed by the player. This is only filled out once the KeyClaim has been claimed.
`public bool `[`ExternalKey_IsSet`](#structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3) | true if ExternalKey_Optional has been set to a value
`public FGuid `[`ExternalKeyCampaignUuid_Optional`](#structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63) | The unique identifier for the MarketingCampaign that the external key was claimed from.
`public bool `[`ExternalKeyCampaignUuid_IsSet`](#structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf) | true if ExternalKeyCampaignUuid_Optional has been set to a value
`public FString `[`ExternalKeyType_Optional`](#structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c) | This can be used to allow the player to claim different types based on their preferrence. While we don't have requirement for what should contain, it must match a key type assigned to the external campaign.
`public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f) | true if ExternalKeyType_Optional has been set to a value
`public FString `[`CreatedOn_Optional`](#structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0) | The time the KeyClaim was created.
`public bool `[`CreatedOn_IsSet`](#structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19) | true if CreatedOn_Optional has been set to a value
`public FString `[`LastModifiedOn_Optional`](#structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a) | The time the KeyClaim was last modified.
`public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f) | true if LastModifiedOn_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__KeyClaim_1a681722ebe833129d706e9f11ffef7a78)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyClaim_1a163dc496e4025332a78aaea155647534)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a5266ae75f80f5752e66afb7c7a3c6549)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1aa3b9a16f6886cd19148006f769bc2bfc)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a3581500021bff570324d72de78d6b436)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__KeyClaim_1ab02963a36020a78db711b6280a6e06f4)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1ad8d17e2a98961fb3fa2876eb328710f2)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1adee0a7aadbccd3271e086f72e47c310d)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a2e3bb43bc5ee7d3621084660a16f9a14)`(ERHAPI_Portal NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`ClearPortalId`](#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1af5c4926f2a02d408c5bf65a1e85cd7a2)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1ac05d8c0fc346da172ac72610811773e7)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a25a75626c760681217cf2e4818be2335)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a0bba9c4a0f98faa6f1d498056bec4988)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1aca0809d2121d38f3e20b41eb0cdf87cb)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a41d40264bfd092a60e2c511851a43c2f)`(FString NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1aa157ecf71ea8310f2d2dcdf07dae6504)`()` | Gets the value of KeyClaimUuid.
`public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1af691554e2bf8db3c935b79a761654766)`() const` | Gets the value of KeyClaimUuid.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1acaf93c55e8301b26b679883b8b2de453)`(FGuid NewValue)` | Sets the value of KeyClaimUuid.
`public inline bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1aafeaf7ea04d9beb30bf10597964f177f)`()` | Gets the value of Claimed_Optional, regardless of it having been set.
`public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a432006c30617709ef83c0fbf89447e59)`() const` | Gets the value of Claimed_Optional, regardless of it having been set.
`public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a83284a582a4d0e4a560ad79080331bfc)`(const bool & DefaultValue) const` | Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClaimed`](#structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72)`(bool & OutValue) const` | Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1a149c6bf21adcaa8a6cd9f2ab3a94d680)`()` | Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1abe821bb522bbca51c95fdd8e0ff502e3)`() const` | Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a2a5690931e32a635b1a60e562b429ee7)`(bool NewValue)` | Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.
`public inline void `[`ClearClaimed`](#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)`()` | Clears the value of Claimed_Optional and sets Claimed_IsSet to false.
`public inline bool `[`IsClaimedDefaultValue`](#structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f)`() const` | Returns true if Claimed_Optional is set and matches the default value.
`public inline void `[`SetClaimedToDefault`](#structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989)`()` | Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true.
`public inline FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a44035d0c8f6dad64b82912a45b47e69b)`()` | Gets the value of ExternalKey_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a199fe553a5895d0cdfaa9ee55c03b028)`() const` | Gets the value of ExternalKey_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1aa733a1fc8f2f21c518f0443da9b28815)`(const FString & DefaultValue) const` | Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKey`](#structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1ac26b5dd34c5887684c5e6b098f43328c)`()` | Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1aec406f8dbe144fcb1769961e9489d997)`() const` | Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1afcb6a068d44c89508103642b31e9c93d)`(FString NewValue)` | Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.
`public inline void `[`ClearExternalKey`](#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)`()` | Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.
`public inline FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1acf4d863356198d7fc201526610751d31)`()` | Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ae13780f734c0f7942d4f31f519665c46)`() const` | Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a0d2b26e65521f2586164a301d08b962f)`(const FGuid & DefaultValue) const` | Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354)`(FGuid & OutValue) const` | Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1afe85eb929aa13d87e8b70b91e85d9ad3)`()` | Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a902b94f86fc115404fc5e7a785f4a986)`() const` | Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ab89b799b7bd210941066edca5301e030)`(FGuid NewValue)` | Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.
`public inline void `[`ClearExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)`()` | Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.
`public inline FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1ae9ecdd2f605774dd6977d29a419bbfe5)`()` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a846c02696a1dbb837716f04b5c08b7ea)`() const` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a158bcbaf9c99b84488d4ac4784eb9537)`(const FString & DefaultValue) const` | Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a1cc41ec0d4804fe09498d6f0b1590017)`()` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a6e846f5d150cb999f8eb416c5e6a0da7)`() const` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1a8345b882472009e1ac498cd4115da703)`(FString NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.
`public inline void `[`ClearExternalKeyType`](#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)`()` | Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.
`public inline FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1adc05c8cd0162b7c354ae4aaea1bec17e)`()` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a4463bc0228649dffe11d316e14d4e8ec)`() const` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a153ee84f13509c8d99f272fccde1a29f)`(const FString & DefaultValue) const` | Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43)`(FString & OutValue) const` | Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1acf0822b5ebf73fadd4dcc62c0a6c2be2)`()` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1a0a9a15a4b3d47e98f7a7fe82d6d29a4e)`() const` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a479442832ec7d794d29e1acbb03b430d)`(FString NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.
`public inline void `[`ClearCreatedOn`](#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)`()` | Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.
`public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a4d8f1cfcc4afe226f347b63b94050130)`()` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1af076bcf9f495db33654cfba4f1391435)`() const` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a772b36cc975a47ead2ee4f0406b9be82)`(const FString & DefaultValue) const` | Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904)`(FString & OutValue) const` | Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a73c30fbd3623caf3bd561d4b38c4949b)`()` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a213d4c475785f5c0e2d28c7739dfc40c)`() const` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1a2d3bcf43ed055b613868ec4525e04906)`(FString NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.
`public inline void `[`ClearLastModifiedOn`](#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)`()` | Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

#### Members

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__KeyClaim_1a230d8f8464d3ff7466cdd4d785081567) <a id="structFRHAPI__KeyClaim_1a230d8f8464d3ff7466cdd4d785081567"></a>

Platform the player is on.

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3) <a id="structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3"></a>

true if PortalId_Optional has been set to a value

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97) <a id="structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97"></a>

The Platform's unique identifier for the player.

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582) <a id="structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582"></a>

true if PortalUserId_Optional has been set to a value

#### `public FGuid `[`KeyClaimUuid`](#structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344) <a id="structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344"></a>

The unique identifier for the KeyClaim.

#### `public bool `[`Claimed_Optional`](#structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4) <a id="structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4"></a>

Whether the KeyClaim has been claimed.

#### `public bool `[`Claimed_IsSet`](#structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42) <a id="structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42"></a>

true if Claimed_Optional has been set to a value

#### `public FString `[`ExternalKey_Optional`](#structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6) <a id="structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6"></a>

The external key that was been claimed by the player. This is only filled out once the KeyClaim has been claimed.

#### `public bool `[`ExternalKey_IsSet`](#structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3) <a id="structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3"></a>

true if ExternalKey_Optional has been set to a value

#### `public FGuid `[`ExternalKeyCampaignUuid_Optional`](#structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63) <a id="structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63"></a>

The unique identifier for the MarketingCampaign that the external key was claimed from.

#### `public bool `[`ExternalKeyCampaignUuid_IsSet`](#structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf) <a id="structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf"></a>

true if ExternalKeyCampaignUuid_Optional has been set to a value

#### `public FString `[`ExternalKeyType_Optional`](#structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c) <a id="structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c"></a>

This can be used to allow the player to claim different types based on their preferrence. While we don't have requirement for what should contain, it must match a key type assigned to the external campaign.

#### `public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f) <a id="structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f"></a>

true if ExternalKeyType_Optional has been set to a value

#### `public FString `[`CreatedOn_Optional`](#structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0) <a id="structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0"></a>

The time the KeyClaim was created.

#### `public bool `[`CreatedOn_IsSet`](#structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19) <a id="structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19"></a>

true if CreatedOn_Optional has been set to a value

#### `public FString `[`LastModifiedOn_Optional`](#structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a) <a id="structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a"></a>

The time the KeyClaim was last modified.

#### `public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f) <a id="structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f"></a>

true if LastModifiedOn_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__KeyClaim_1a681722ebe833129d706e9f11ffef7a78)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KeyClaim_1a681722ebe833129d706e9f11ffef7a78"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KeyClaim_1a163dc496e4025332a78aaea155647534)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KeyClaim_1a163dc496e4025332a78aaea155647534"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a5266ae75f80f5752e66afb7c7a3c6549)`()` <a id="structFRHAPI__KeyClaim_1a5266ae75f80f5752e66afb7c7a3c6549"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1aa3b9a16f6886cd19148006f769bc2bfc)`() const` <a id="structFRHAPI__KeyClaim_1aa3b9a16f6886cd19148006f769bc2bfc"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a3581500021bff570324d72de78d6b436)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a3581500021bff570324d72de78d6b436"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__KeyClaim_1ab02963a36020a78db711b6280a6e06f4)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__KeyClaim_1ab02963a36020a78db711b6280a6e06f4"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1ad8d17e2a98961fb3fa2876eb328710f2)`()` <a id="structFRHAPI__KeyClaim_1ad8d17e2a98961fb3fa2876eb328710f2"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1adee0a7aadbccd3271e086f72e47c310d)`() const` <a id="structFRHAPI__KeyClaim_1adee0a7aadbccd3271e086f72e47c310d"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a2e3bb43bc5ee7d3621084660a16f9a14)`(ERHAPI_Portal NewValue)` <a id="structFRHAPI__KeyClaim_1a2e3bb43bc5ee7d3621084660a16f9a14"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)`()` <a id="structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1af5c4926f2a02d408c5bf65a1e85cd7a2)`()` <a id="structFRHAPI__KeyClaim_1af5c4926f2a02d408c5bf65a1e85cd7a2"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1ac05d8c0fc346da172ac72610811773e7)`() const` <a id="structFRHAPI__KeyClaim_1ac05d8c0fc346da172ac72610811773e7"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a25a75626c760681217cf2e4818be2335)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a25a75626c760681217cf2e4818be2335"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a0bba9c4a0f98faa6f1d498056bec4988)`()` <a id="structFRHAPI__KeyClaim_1a0bba9c4a0f98faa6f1d498056bec4988"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1aca0809d2121d38f3e20b41eb0cdf87cb)`() const` <a id="structFRHAPI__KeyClaim_1aca0809d2121d38f3e20b41eb0cdf87cb"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a41d40264bfd092a60e2c511851a43c2f)`(FString NewValue)` <a id="structFRHAPI__KeyClaim_1a41d40264bfd092a60e2c511851a43c2f"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)`()` <a id="structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1aa157ecf71ea8310f2d2dcdf07dae6504)`()` <a id="structFRHAPI__KeyClaim_1aa157ecf71ea8310f2d2dcdf07dae6504"></a>

Gets the value of KeyClaimUuid.

#### `public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1af691554e2bf8db3c935b79a761654766)`() const` <a id="structFRHAPI__KeyClaim_1af691554e2bf8db3c935b79a761654766"></a>

Gets the value of KeyClaimUuid.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1acaf93c55e8301b26b679883b8b2de453)`(FGuid NewValue)` <a id="structFRHAPI__KeyClaim_1acaf93c55e8301b26b679883b8b2de453"></a>

Sets the value of KeyClaimUuid.

#### `public inline bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1aafeaf7ea04d9beb30bf10597964f177f)`()` <a id="structFRHAPI__KeyClaim_1aafeaf7ea04d9beb30bf10597964f177f"></a>

Gets the value of Claimed_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a432006c30617709ef83c0fbf89447e59)`() const` <a id="structFRHAPI__KeyClaim_1a432006c30617709ef83c0fbf89447e59"></a>

Gets the value of Claimed_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a83284a582a4d0e4a560ad79080331bfc)`(const bool & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a83284a582a4d0e4a560ad79080331bfc"></a>

Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClaimed`](#structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72)`(bool & OutValue) const` <a id="structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72"></a>

Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1a149c6bf21adcaa8a6cd9f2ab3a94d680)`()` <a id="structFRHAPI__KeyClaim_1a149c6bf21adcaa8a6cd9f2ab3a94d680"></a>

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1abe821bb522bbca51c95fdd8e0ff502e3)`() const` <a id="structFRHAPI__KeyClaim_1abe821bb522bbca51c95fdd8e0ff502e3"></a>

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a2a5690931e32a635b1a60e562b429ee7)`(bool NewValue)` <a id="structFRHAPI__KeyClaim_1a2a5690931e32a635b1a60e562b429ee7"></a>

Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.

#### `public inline void `[`ClearClaimed`](#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)`()` <a id="structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0"></a>

Clears the value of Claimed_Optional and sets Claimed_IsSet to false.

#### `public inline bool `[`IsClaimedDefaultValue`](#structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f)`() const` <a id="structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f"></a>

Returns true if Claimed_Optional is set and matches the default value.

#### `public inline void `[`SetClaimedToDefault`](#structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989)`()` <a id="structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989"></a>

Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true.

#### `public inline FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a44035d0c8f6dad64b82912a45b47e69b)`()` <a id="structFRHAPI__KeyClaim_1a44035d0c8f6dad64b82912a45b47e69b"></a>

Gets the value of ExternalKey_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a199fe553a5895d0cdfaa9ee55c03b028)`() const` <a id="structFRHAPI__KeyClaim_1a199fe553a5895d0cdfaa9ee55c03b028"></a>

Gets the value of ExternalKey_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1aa733a1fc8f2f21c518f0443da9b28815)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1aa733a1fc8f2f21c518f0443da9b28815"></a>

Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKey`](#structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0"></a>

Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1ac26b5dd34c5887684c5e6b098f43328c)`()` <a id="structFRHAPI__KeyClaim_1ac26b5dd34c5887684c5e6b098f43328c"></a>

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1aec406f8dbe144fcb1769961e9489d997)`() const` <a id="structFRHAPI__KeyClaim_1aec406f8dbe144fcb1769961e9489d997"></a>

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1afcb6a068d44c89508103642b31e9c93d)`(FString NewValue)` <a id="structFRHAPI__KeyClaim_1afcb6a068d44c89508103642b31e9c93d"></a>

Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.

#### `public inline void `[`ClearExternalKey`](#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)`()` <a id="structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03"></a>

Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.

#### `public inline FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1acf4d863356198d7fc201526610751d31)`()` <a id="structFRHAPI__KeyClaim_1acf4d863356198d7fc201526610751d31"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ae13780f734c0f7942d4f31f519665c46)`() const` <a id="structFRHAPI__KeyClaim_1ae13780f734c0f7942d4f31f519665c46"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a0d2b26e65521f2586164a301d08b962f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a0d2b26e65521f2586164a301d08b962f"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354)`(FGuid & OutValue) const` <a id="structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354"></a>

Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1afe85eb929aa13d87e8b70b91e85d9ad3)`()` <a id="structFRHAPI__KeyClaim_1afe85eb929aa13d87e8b70b91e85d9ad3"></a>

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a902b94f86fc115404fc5e7a785f4a986)`() const` <a id="structFRHAPI__KeyClaim_1a902b94f86fc115404fc5e7a785f4a986"></a>

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ab89b799b7bd210941066edca5301e030)`(FGuid NewValue)` <a id="structFRHAPI__KeyClaim_1ab89b799b7bd210941066edca5301e030"></a>

Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.

#### `public inline void `[`ClearExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)`()` <a id="structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5"></a>

Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.

#### `public inline FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1ae9ecdd2f605774dd6977d29a419bbfe5)`()` <a id="structFRHAPI__KeyClaim_1ae9ecdd2f605774dd6977d29a419bbfe5"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a846c02696a1dbb837716f04b5c08b7ea)`() const` <a id="structFRHAPI__KeyClaim_1a846c02696a1dbb837716f04b5c08b7ea"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a158bcbaf9c99b84488d4ac4784eb9537)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a158bcbaf9c99b84488d4ac4784eb9537"></a>

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5"></a>

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a1cc41ec0d4804fe09498d6f0b1590017)`()` <a id="structFRHAPI__KeyClaim_1a1cc41ec0d4804fe09498d6f0b1590017"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a6e846f5d150cb999f8eb416c5e6a0da7)`() const` <a id="structFRHAPI__KeyClaim_1a6e846f5d150cb999f8eb416c5e6a0da7"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1a8345b882472009e1ac498cd4115da703)`(FString NewValue)` <a id="structFRHAPI__KeyClaim_1a8345b882472009e1ac498cd4115da703"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.

#### `public inline void `[`ClearExternalKeyType`](#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)`()` <a id="structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4"></a>

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.

#### `public inline FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1adc05c8cd0162b7c354ae4aaea1bec17e)`()` <a id="structFRHAPI__KeyClaim_1adc05c8cd0162b7c354ae4aaea1bec17e"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a4463bc0228649dffe11d316e14d4e8ec)`() const` <a id="structFRHAPI__KeyClaim_1a4463bc0228649dffe11d316e14d4e8ec"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a153ee84f13509c8d99f272fccde1a29f)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a153ee84f13509c8d99f272fccde1a29f"></a>

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43"></a>

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1acf0822b5ebf73fadd4dcc62c0a6c2be2)`()` <a id="structFRHAPI__KeyClaim_1acf0822b5ebf73fadd4dcc62c0a6c2be2"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1a0a9a15a4b3d47e98f7a7fe82d6d29a4e)`() const` <a id="structFRHAPI__KeyClaim_1a0a9a15a4b3d47e98f7a7fe82d6d29a4e"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a479442832ec7d794d29e1acbb03b430d)`(FString NewValue)` <a id="structFRHAPI__KeyClaim_1a479442832ec7d794d29e1acbb03b430d"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.

#### `public inline void `[`ClearCreatedOn`](#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)`()` <a id="structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b"></a>

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.

#### `public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a4d8f1cfcc4afe226f347b63b94050130)`()` <a id="structFRHAPI__KeyClaim_1a4d8f1cfcc4afe226f347b63b94050130"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1af076bcf9f495db33654cfba4f1391435)`() const` <a id="structFRHAPI__KeyClaim_1af076bcf9f495db33654cfba4f1391435"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a772b36cc975a47ead2ee4f0406b9be82)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a772b36cc975a47ead2ee4f0406b9be82"></a>

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904"></a>

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a73c30fbd3623caf3bd561d4b38c4949b)`()` <a id="structFRHAPI__KeyClaim_1a73c30fbd3623caf3bd561d4b38c4949b"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a213d4c475785f5c0e2d28c7739dfc40c)`() const` <a id="structFRHAPI__KeyClaim_1a213d4c475785f5c0e2d28c7739dfc40c"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1a2d3bcf43ed055b613868ec4525e04906)`(FString NewValue)` <a id="structFRHAPI__KeyClaim_1a2d3bcf43ed055b613868ec4525e04906"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.

#### `public inline void `[`ClearLastModifiedOn`](#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)`()` <a id="structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908"></a>

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

