---
title: RHAPI_KeyClaim
---

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

### Summary

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
`public virtual bool `[`FromJson`](#structFRHAPI__KeyClaim_1ab1ce1f1d226bcb5120b8a20c8bcd46a5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyClaim_1a707e2269fd0a389df18c7f269e031684)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1acf224d149ecf640713c53ded28b757b9)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a5979c95efa327d6b71fcbc2dc64d0949)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a5031bef8ccaae81b2eead95868a5ca3d)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__KeyClaim_1ab02963a36020a78db711b6280a6e06f4)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1a5633316325355439f35bfd98d13ab37e)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1a09f4e0dfd72291ca4a30de9ec6f3330c)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__KeyClaim_1ad153a78da3fa327716ec7937afc4b279)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a1430f5a468f106af77f7328a9608b46a)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__KeyClaim_1aa989fc7b2cdbc5f122e0dc8fa4601d94)`() const` | Checks whether PortalId_Optional has been set.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a4b5978e18f63e8f394cd0759605018ac)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1ae065420601a133b54693a6631f185ebc)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1af3f7cd0989567a22f62c3250d57f2013)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a58bef64d08587a0f0a3191dfd1c2e738)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a1f29834c899084d8403f219fd9f1ed7b)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a1dda732cfde6215a0c684eeb66074eeb)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1ab6b1d3f642d6eb67b9d059b172b2db00)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__KeyClaim_1a74302d02d85979611e64f2485487aff1)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a2929034c2368c72a6ace04fcd7c029dc)`()` | Gets the value of KeyClaimUuid.
`public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a66c4c290a6fdfa09fa7bbce29794dfc7)`() const` | Gets the value of KeyClaimUuid.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1aef79975bd03283a1b4bdcabab6c0d675)`(const FGuid & NewValue)` | Sets the value of KeyClaimUuid.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1ae4e64466cedd79bf16fdddc2e19cc1fe)`(FGuid && NewValue)` | Sets the value of KeyClaimUuid using move semantics.
`public inline bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a7f245737d70b599f6180f9d1b188da8c)`()` | Gets the value of Claimed_Optional, regardless of it having been set.
`public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a43a9645ec4e2543ce4664c4984232b02)`() const` | Gets the value of Claimed_Optional, regardless of it having been set.
`public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a2678903fbf838f7b8028f07750957bb9)`(const bool & DefaultValue) const` | Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClaimed`](#structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72)`(bool & OutValue) const` | Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1ace0f14b1d3f1978b57a24c1cc665785c)`()` | Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1a5b28767311cdafa9c73e14edc01728ce)`() const` | Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a1f040f165ca27a052c7d2024b6372bf6)`(const bool & NewValue)` | Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.
`public inline void `[`SetClaimed`](#structFRHAPI__KeyClaim_1ab3873b4cd8d53e204c42023c3a7cec5b)`(bool && NewValue)` | Sets the value of Claimed_Optional and also sets Claimed_IsSet to true using move semantics.
`public inline void `[`ClearClaimed`](#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)`()` | Clears the value of Claimed_Optional and sets Claimed_IsSet to false.
`public inline bool `[`IsClaimedSet`](#structFRHAPI__KeyClaim_1a232a3b9aa5b3fa932ab97fee06549d91)`() const` | Checks whether Claimed_Optional has been set.
`public inline bool `[`IsClaimedDefaultValue`](#structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f)`() const` | Returns true if Claimed_Optional is set and matches the default value.
`public inline void `[`SetClaimedToDefault`](#structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989)`()` | Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true.
`public inline FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a0b50d2760097b35718e8b1e7c21241c5)`()` | Gets the value of ExternalKey_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a036a67299453334b89fb280e8a71abd2)`() const` | Gets the value of ExternalKey_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1aa656274c3d17e96e5495faf68b740d27)`(const FString & DefaultValue) const` | Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKey`](#structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1aa1d3580651878a9be15a7d3edf35961c)`()` | Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1ab55ec1d6d98235e3745ed176851e72de)`() const` | Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a522907eefee6e622926cf40b1ced839a)`(const FString & NewValue)` | Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.
`public inline void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a82b475fa057a0ef9b888593b0c056d95)`(FString && NewValue)` | Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true using move semantics.
`public inline void `[`ClearExternalKey`](#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)`()` | Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.
`public inline bool `[`IsExternalKeySet`](#structFRHAPI__KeyClaim_1a3744d0542ab9b26e3b4d688c74353922)`() const` | Checks whether ExternalKey_Optional has been set.
`public inline FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ad72613c56bfb7423439a59ced91fae3d)`()` | Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a85e713189b2758906a3db5c59ae14ad8)`() const` | Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a88adbd0d2beb06553ed0cad4fdfc7cb6)`(const FGuid & DefaultValue) const` | Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354)`(FGuid & OutValue) const` | Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a36fd81fbc743032c107306f23532f45e)`()` | Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a8f4ff641ea73834dce74652f15973fe2)`() const` | Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a3b0f2b848840dce199f42ce2a23b3d3f)`(const FGuid & NewValue)` | Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.
`public inline void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a6b15fd836f4fa5d2a35695daa5080338)`(FGuid && NewValue)` | Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)`()` | Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.
`public inline bool `[`IsExternalKeyCampaignUuidSet`](#structFRHAPI__KeyClaim_1aa3438d5294eb79b7ed82cef1c118be6b)`() const` | Checks whether ExternalKeyCampaignUuid_Optional has been set.
`public inline FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a0e5fb367d7b1422b922ff8c144c78620)`()` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a4a08fc27a8056586dc486b8825a55b80)`() const` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a1c7d0fb3212e18675792ca2372db6e99)`(const FString & DefaultValue) const` | Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a01bc954ba6c1b8d0b97e06254ce81b4f)`()` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1ab981cc3afb90eab0756a37ad542a5c3c)`() const` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1ab91d6ccaae164793c1e936867d276ea6)`(const FString & NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.
`public inline void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1a1c28342396ad9da7bb6979beb81dbb4b)`(FString && NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyType`](#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)`()` | Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.
`public inline bool `[`IsExternalKeyTypeSet`](#structFRHAPI__KeyClaim_1a0ae04f80177c6febc14a2fb82a38eea8)`() const` | Checks whether ExternalKeyType_Optional has been set.
`public inline FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a136c42d9a7714129fd98f8d2dbaf9d3e)`()` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1abda5cd5934e6837dc749c676e38ff249)`() const` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1abdfa7a035092264bad0e2e35f5ced393)`(const FString & DefaultValue) const` | Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43)`(FString & OutValue) const` | Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1a470dd65fb6bd5d8fc69c622ec98ecbd9)`()` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1aff8b6e51133a15f51ee5dfd900b1a867)`() const` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1aaea6b49417e3e061a1328286bc47d9d7)`(const FString & NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.
`public inline void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a7b8a6ec4ece2585c570a2983dfc075c3)`(FString && NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.
`public inline void `[`ClearCreatedOn`](#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)`()` | Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.
`public inline bool `[`IsCreatedOnSet`](#structFRHAPI__KeyClaim_1aace9dc18bab14634f027c6ffcab2e2b3)`() const` | Checks whether CreatedOn_Optional has been set.
`public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1ac1216aa013dad734e5e95793ec818f13)`()` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a83f2edcbad70d90c9b27db7d595b3aa9)`() const` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a18d2fe0cfcd5bfdb0a7ac654b72456d5)`(const FString & DefaultValue) const` | Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904)`(FString & OutValue) const` | Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1ad2672939ecb2e82ceac54991a3171c73)`()` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1ac42724ec6daff301e45fde94ac1d2aba)`() const` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1afd88bbec04902b58aed09f2cb6fe6f81)`(const FString & NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1ae2a3b4c8008c400bc0bb310592dadd44)`(FString && NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedOn`](#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)`()` | Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.
`public inline bool `[`IsLastModifiedOnSet`](#structFRHAPI__KeyClaim_1a6c8d83b50ca71fa30eef047935e1e856)`() const` | Checks whether LastModifiedOn_Optional has been set.

### Members

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__KeyClaim_1ab1ce1f1d226bcb5120b8a20c8bcd46a5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KeyClaim_1ab1ce1f1d226bcb5120b8a20c8bcd46a5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KeyClaim_1a707e2269fd0a389df18c7f269e031684)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__KeyClaim_1a707e2269fd0a389df18c7f269e031684"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1acf224d149ecf640713c53ded28b757b9)`()` <a id="structFRHAPI__KeyClaim_1acf224d149ecf640713c53ded28b757b9"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a5979c95efa327d6b71fcbc2dc64d0949)`() const` <a id="structFRHAPI__KeyClaim_1a5979c95efa327d6b71fcbc2dc64d0949"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a5031bef8ccaae81b2eead95868a5ca3d)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a5031bef8ccaae81b2eead95868a5ca3d"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__KeyClaim_1ab02963a36020a78db711b6280a6e06f4)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__KeyClaim_1ab02963a36020a78db711b6280a6e06f4"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1a5633316325355439f35bfd98d13ab37e)`()` <a id="structFRHAPI__KeyClaim_1a5633316325355439f35bfd98d13ab37e"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1a09f4e0dfd72291ca4a30de9ec6f3330c)`() const` <a id="structFRHAPI__KeyClaim_1a09f4e0dfd72291ca4a30de9ec6f3330c"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__KeyClaim_1ad153a78da3fa327716ec7937afc4b279)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__KeyClaim_1ad153a78da3fa327716ec7937afc4b279"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a1430f5a468f106af77f7328a9608b46a)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__KeyClaim_1a1430f5a468f106af77f7328a9608b46a"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)`()` <a id="structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__KeyClaim_1aa989fc7b2cdbc5f122e0dc8fa4601d94)`() const` <a id="structFRHAPI__KeyClaim_1aa989fc7b2cdbc5f122e0dc8fa4601d94"></a>

Checks whether PortalId_Optional has been set.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a4b5978e18f63e8f394cd0759605018ac)`()` <a id="structFRHAPI__KeyClaim_1a4b5978e18f63e8f394cd0759605018ac"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1ae065420601a133b54693a6631f185ebc)`() const` <a id="structFRHAPI__KeyClaim_1ae065420601a133b54693a6631f185ebc"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1af3f7cd0989567a22f62c3250d57f2013)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1af3f7cd0989567a22f62c3250d57f2013"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a58bef64d08587a0f0a3191dfd1c2e738)`()` <a id="structFRHAPI__KeyClaim_1a58bef64d08587a0f0a3191dfd1c2e738"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a1f29834c899084d8403f219fd9f1ed7b)`() const` <a id="structFRHAPI__KeyClaim_1a1f29834c899084d8403f219fd9f1ed7b"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a1dda732cfde6215a0c684eeb66074eeb)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1a1dda732cfde6215a0c684eeb66074eeb"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1ab6b1d3f642d6eb67b9d059b172b2db00)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1ab6b1d3f642d6eb67b9d059b172b2db00"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)`()` <a id="structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__KeyClaim_1a74302d02d85979611e64f2485487aff1)`() const` <a id="structFRHAPI__KeyClaim_1a74302d02d85979611e64f2485487aff1"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a2929034c2368c72a6ace04fcd7c029dc)`()` <a id="structFRHAPI__KeyClaim_1a2929034c2368c72a6ace04fcd7c029dc"></a>

Gets the value of KeyClaimUuid.

#### `public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a66c4c290a6fdfa09fa7bbce29794dfc7)`() const` <a id="structFRHAPI__KeyClaim_1a66c4c290a6fdfa09fa7bbce29794dfc7"></a>

Gets the value of KeyClaimUuid.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1aef79975bd03283a1b4bdcabab6c0d675)`(const FGuid & NewValue)` <a id="structFRHAPI__KeyClaim_1aef79975bd03283a1b4bdcabab6c0d675"></a>

Sets the value of KeyClaimUuid.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1ae4e64466cedd79bf16fdddc2e19cc1fe)`(FGuid && NewValue)` <a id="structFRHAPI__KeyClaim_1ae4e64466cedd79bf16fdddc2e19cc1fe"></a>

Sets the value of KeyClaimUuid using move semantics.

#### `public inline bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a7f245737d70b599f6180f9d1b188da8c)`()` <a id="structFRHAPI__KeyClaim_1a7f245737d70b599f6180f9d1b188da8c"></a>

Gets the value of Claimed_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a43a9645ec4e2543ce4664c4984232b02)`() const` <a id="structFRHAPI__KeyClaim_1a43a9645ec4e2543ce4664c4984232b02"></a>

Gets the value of Claimed_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a2678903fbf838f7b8028f07750957bb9)`(const bool & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a2678903fbf838f7b8028f07750957bb9"></a>

Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClaimed`](#structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72)`(bool & OutValue) const` <a id="structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72"></a>

Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1ace0f14b1d3f1978b57a24c1cc665785c)`()` <a id="structFRHAPI__KeyClaim_1ace0f14b1d3f1978b57a24c1cc665785c"></a>

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1a5b28767311cdafa9c73e14edc01728ce)`() const` <a id="structFRHAPI__KeyClaim_1a5b28767311cdafa9c73e14edc01728ce"></a>

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a1f040f165ca27a052c7d2024b6372bf6)`(const bool & NewValue)` <a id="structFRHAPI__KeyClaim_1a1f040f165ca27a052c7d2024b6372bf6"></a>

Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.

#### `public inline void `[`SetClaimed`](#structFRHAPI__KeyClaim_1ab3873b4cd8d53e204c42023c3a7cec5b)`(bool && NewValue)` <a id="structFRHAPI__KeyClaim_1ab3873b4cd8d53e204c42023c3a7cec5b"></a>

Sets the value of Claimed_Optional and also sets Claimed_IsSet to true using move semantics.

#### `public inline void `[`ClearClaimed`](#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)`()` <a id="structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0"></a>

Clears the value of Claimed_Optional and sets Claimed_IsSet to false.

#### `public inline bool `[`IsClaimedSet`](#structFRHAPI__KeyClaim_1a232a3b9aa5b3fa932ab97fee06549d91)`() const` <a id="structFRHAPI__KeyClaim_1a232a3b9aa5b3fa932ab97fee06549d91"></a>

Checks whether Claimed_Optional has been set.

#### `public inline bool `[`IsClaimedDefaultValue`](#structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f)`() const` <a id="structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f"></a>

Returns true if Claimed_Optional is set and matches the default value.

#### `public inline void `[`SetClaimedToDefault`](#structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989)`()` <a id="structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989"></a>

Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true.

#### `public inline FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a0b50d2760097b35718e8b1e7c21241c5)`()` <a id="structFRHAPI__KeyClaim_1a0b50d2760097b35718e8b1e7c21241c5"></a>

Gets the value of ExternalKey_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a036a67299453334b89fb280e8a71abd2)`() const` <a id="structFRHAPI__KeyClaim_1a036a67299453334b89fb280e8a71abd2"></a>

Gets the value of ExternalKey_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1aa656274c3d17e96e5495faf68b740d27)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1aa656274c3d17e96e5495faf68b740d27"></a>

Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKey`](#structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0"></a>

Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1aa1d3580651878a9be15a7d3edf35961c)`()` <a id="structFRHAPI__KeyClaim_1aa1d3580651878a9be15a7d3edf35961c"></a>

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1ab55ec1d6d98235e3745ed176851e72de)`() const` <a id="structFRHAPI__KeyClaim_1ab55ec1d6d98235e3745ed176851e72de"></a>

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a522907eefee6e622926cf40b1ced839a)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1a522907eefee6e622926cf40b1ced839a"></a>

Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.

#### `public inline void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a82b475fa057a0ef9b888593b0c056d95)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a82b475fa057a0ef9b888593b0c056d95"></a>

Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKey`](#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)`()` <a id="structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03"></a>

Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.

#### `public inline bool `[`IsExternalKeySet`](#structFRHAPI__KeyClaim_1a3744d0542ab9b26e3b4d688c74353922)`() const` <a id="structFRHAPI__KeyClaim_1a3744d0542ab9b26e3b4d688c74353922"></a>

Checks whether ExternalKey_Optional has been set.

#### `public inline FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ad72613c56bfb7423439a59ced91fae3d)`()` <a id="structFRHAPI__KeyClaim_1ad72613c56bfb7423439a59ced91fae3d"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a85e713189b2758906a3db5c59ae14ad8)`() const` <a id="structFRHAPI__KeyClaim_1a85e713189b2758906a3db5c59ae14ad8"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a88adbd0d2beb06553ed0cad4fdfc7cb6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a88adbd0d2beb06553ed0cad4fdfc7cb6"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354)`(FGuid & OutValue) const` <a id="structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354"></a>

Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a36fd81fbc743032c107306f23532f45e)`()` <a id="structFRHAPI__KeyClaim_1a36fd81fbc743032c107306f23532f45e"></a>

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a8f4ff641ea73834dce74652f15973fe2)`() const` <a id="structFRHAPI__KeyClaim_1a8f4ff641ea73834dce74652f15973fe2"></a>

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a3b0f2b848840dce199f42ce2a23b3d3f)`(const FGuid & NewValue)` <a id="structFRHAPI__KeyClaim_1a3b0f2b848840dce199f42ce2a23b3d3f"></a>

Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.

#### `public inline void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a6b15fd836f4fa5d2a35695daa5080338)`(FGuid && NewValue)` <a id="structFRHAPI__KeyClaim_1a6b15fd836f4fa5d2a35695daa5080338"></a>

Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)`()` <a id="structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5"></a>

Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.

#### `public inline bool `[`IsExternalKeyCampaignUuidSet`](#structFRHAPI__KeyClaim_1aa3438d5294eb79b7ed82cef1c118be6b)`() const` <a id="structFRHAPI__KeyClaim_1aa3438d5294eb79b7ed82cef1c118be6b"></a>

Checks whether ExternalKeyCampaignUuid_Optional has been set.

#### `public inline FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a0e5fb367d7b1422b922ff8c144c78620)`()` <a id="structFRHAPI__KeyClaim_1a0e5fb367d7b1422b922ff8c144c78620"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a4a08fc27a8056586dc486b8825a55b80)`() const` <a id="structFRHAPI__KeyClaim_1a4a08fc27a8056586dc486b8825a55b80"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a1c7d0fb3212e18675792ca2372db6e99)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a1c7d0fb3212e18675792ca2372db6e99"></a>

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5"></a>

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a01bc954ba6c1b8d0b97e06254ce81b4f)`()` <a id="structFRHAPI__KeyClaim_1a01bc954ba6c1b8d0b97e06254ce81b4f"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1ab981cc3afb90eab0756a37ad542a5c3c)`() const` <a id="structFRHAPI__KeyClaim_1ab981cc3afb90eab0756a37ad542a5c3c"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1ab91d6ccaae164793c1e936867d276ea6)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1ab91d6ccaae164793c1e936867d276ea6"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.

#### `public inline void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1a1c28342396ad9da7bb6979beb81dbb4b)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a1c28342396ad9da7bb6979beb81dbb4b"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyType`](#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)`()` <a id="structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4"></a>

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.

#### `public inline bool `[`IsExternalKeyTypeSet`](#structFRHAPI__KeyClaim_1a0ae04f80177c6febc14a2fb82a38eea8)`() const` <a id="structFRHAPI__KeyClaim_1a0ae04f80177c6febc14a2fb82a38eea8"></a>

Checks whether ExternalKeyType_Optional has been set.

#### `public inline FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a136c42d9a7714129fd98f8d2dbaf9d3e)`()` <a id="structFRHAPI__KeyClaim_1a136c42d9a7714129fd98f8d2dbaf9d3e"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1abda5cd5934e6837dc749c676e38ff249)`() const` <a id="structFRHAPI__KeyClaim_1abda5cd5934e6837dc749c676e38ff249"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1abdfa7a035092264bad0e2e35f5ced393)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1abdfa7a035092264bad0e2e35f5ced393"></a>

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43"></a>

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1a470dd65fb6bd5d8fc69c622ec98ecbd9)`()` <a id="structFRHAPI__KeyClaim_1a470dd65fb6bd5d8fc69c622ec98ecbd9"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1aff8b6e51133a15f51ee5dfd900b1a867)`() const` <a id="structFRHAPI__KeyClaim_1aff8b6e51133a15f51ee5dfd900b1a867"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1aaea6b49417e3e061a1328286bc47d9d7)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1aaea6b49417e3e061a1328286bc47d9d7"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a7b8a6ec4ece2585c570a2983dfc075c3)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a7b8a6ec4ece2585c570a2983dfc075c3"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedOn`](#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)`()` <a id="structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b"></a>

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.

#### `public inline bool `[`IsCreatedOnSet`](#structFRHAPI__KeyClaim_1aace9dc18bab14634f027c6ffcab2e2b3)`() const` <a id="structFRHAPI__KeyClaim_1aace9dc18bab14634f027c6ffcab2e2b3"></a>

Checks whether CreatedOn_Optional has been set.

#### `public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1ac1216aa013dad734e5e95793ec818f13)`()` <a id="structFRHAPI__KeyClaim_1ac1216aa013dad734e5e95793ec818f13"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a83f2edcbad70d90c9b27db7d595b3aa9)`() const` <a id="structFRHAPI__KeyClaim_1a83f2edcbad70d90c9b27db7d595b3aa9"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a18d2fe0cfcd5bfdb0a7ac654b72456d5)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a18d2fe0cfcd5bfdb0a7ac654b72456d5"></a>

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904"></a>

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1ad2672939ecb2e82ceac54991a3171c73)`()` <a id="structFRHAPI__KeyClaim_1ad2672939ecb2e82ceac54991a3171c73"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1ac42724ec6daff301e45fde94ac1d2aba)`() const` <a id="structFRHAPI__KeyClaim_1ac42724ec6daff301e45fde94ac1d2aba"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1afd88bbec04902b58aed09f2cb6fe6f81)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1afd88bbec04902b58aed09f2cb6fe6f81"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1ae2a3b4c8008c400bc0bb310592dadd44)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1ae2a3b4c8008c400bc0bb310592dadd44"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedOn`](#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)`()` <a id="structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908"></a>

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

#### `public inline bool `[`IsLastModifiedOnSet`](#structFRHAPI__KeyClaim_1a6c8d83b50ca71fa30eef047935e1e856)`() const` <a id="structFRHAPI__KeyClaim_1a6c8d83b50ca71fa30eef047935e1e856"></a>

Checks whether LastModifiedOn_Optional has been set.

