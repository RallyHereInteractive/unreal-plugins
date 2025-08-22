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
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__KeyClaim_1a230d8f8464d3ff7466cdd4d785081567) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__KeyClaim_1a3eaf099f9b9661e9dae28a7bf9aa47f6) | true if PortalId_Optional has been explicitly set to null
`public FString `[`PortalUserId_Optional`](#structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97) | 
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582) | true if PortalUserId_Optional has been set to a value
`public bool `[`PortalUserId_IsNull`](#structFRHAPI__KeyClaim_1ab53dfbb94293d1f76e5ba0ec8c0786b6) | true if PortalUserId_Optional has been explicitly set to null
`public FGuid `[`KeyClaimUuid`](#structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344) | The unique identifier for the KeyClaim.
`public bool `[`Claimed_Optional`](#structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4) | 
`public bool `[`Claimed_IsSet`](#structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42) | true if Claimed_Optional has been set to a value
`public bool `[`Claimed_IsNull`](#structFRHAPI__KeyClaim_1a961bd25316e078f6eff51dd6c0de57e5) | true if Claimed_Optional has been explicitly set to null
`public FString `[`ExternalKey_Optional`](#structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6) | 
`public bool `[`ExternalKey_IsSet`](#structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3) | true if ExternalKey_Optional has been set to a value
`public bool `[`ExternalKey_IsNull`](#structFRHAPI__KeyClaim_1a3bb860549e3d10931f36c7730f33bb10) | true if ExternalKey_Optional has been explicitly set to null
`public FGuid `[`ExternalKeyCampaignUuid_Optional`](#structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63) | 
`public bool `[`ExternalKeyCampaignUuid_IsSet`](#structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf) | true if ExternalKeyCampaignUuid_Optional has been set to a value
`public bool `[`ExternalKeyCampaignUuid_IsNull`](#structFRHAPI__KeyClaim_1a9a73df5f23aac15e9c428f3451bd8f6e) | true if ExternalKeyCampaignUuid_Optional has been explicitly set to null
`public FString `[`ExternalKeyType_Optional`](#structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c) | 
`public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f) | true if ExternalKeyType_Optional has been set to a value
`public bool `[`ExternalKeyType_IsNull`](#structFRHAPI__KeyClaim_1a84e1bd5e40356526cca2f96aa5a4efb5) | true if ExternalKeyType_Optional has been explicitly set to null
`public FString `[`CreatedOn_Optional`](#structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0) | 
`public bool `[`CreatedOn_IsSet`](#structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19) | true if CreatedOn_Optional has been set to a value
`public bool `[`CreatedOn_IsNull`](#structFRHAPI__KeyClaim_1ae0b7cc4515c49f0133111168f302fde5) | true if CreatedOn_Optional has been explicitly set to null
`public FString `[`LastModifiedOn_Optional`](#structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a) | 
`public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f) | true if LastModifiedOn_Optional has been set to a value
`public bool `[`LastModifiedOn_IsNull`](#structFRHAPI__KeyClaim_1a46b773728c92b60cfef353f98aea3e16) | true if LastModifiedOn_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__KeyClaim_1ab1ce1f1d226bcb5120b8a20c8bcd46a5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyClaim_1a707e2269fd0a389df18c7f269e031684)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a07c0e4a822edd88866789be4812a3a4e)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1ac96d5d168b0273ede375ab35e0968c3b)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1ac2b8ca942ec68e5a916de57e1d1b2b53)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__KeyClaim_1ac3d9b05aae9d8e607ffda779a6d5c666)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1afb15ed418276633a2c6792e0577731da)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1aae89bbdca1547c14698cac36c6929391)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a82bf6d4f15fec18398f008f6796d2793)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a8310e478b2dab0be875f9a9e26fa6208)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__KeyClaim_1adc4fecde464060199784e1cee0283382)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__KeyClaim_1a6fcfe7fc27f13fc93690aaeff6fc5739)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a8d4b0fd327764596cb3a526f4c20b7e1)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1ae73d1c016805ec61bdcbeadecee56feb)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a97139bc37562e7d4660bd1d4c4154cde)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a00d3f04c62fa9e286a2456f64105114f)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1abe88f3e2177001bebdc3e8afe00a02dc)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a68157595c19d3b292f3eba8cf00582b9)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a74162ef05596eeca09bbd87a1a3392a5)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a1e0158f20e59d18f4227c625ff2ed99c)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__KeyClaim_1a136bc49e8a503a80fa5a763b4df8d334)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__KeyClaim_1aa766e7dfd96fe415f15b0a2289296e7e)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1ab6fb641a20b7f83b163b77ee8a41b163)`()` | Gets the value of KeyClaimUuid.
`public inline FORCEINLINE const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a0bd8e9968bb428d51a0df47f1591341b)`() const` | Gets the value of KeyClaimUuid.
`public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a9ffcf96150a8b40f09198865ba0334f9)`(const FGuid & NewValue)` | Sets the value of KeyClaimUuid.
`public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a88fc757824c2e0172ea0a6c79354f457)`(FGuid && NewValue)` | Sets the value of KeyClaimUuid using move semantics.
`public inline FORCEINLINE bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a6f573abc601ace9dd01b6e02cd474865)`()` | Gets the value of Claimed_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1acf1b0e271c76d5d81de788f7c81ea5c9)`() const` | Gets the value of Claimed_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1aca074e57079aec07e1c8e586a04b11d7)`(const bool & DefaultValue) const` | Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClaimed`](#structFRHAPI__KeyClaim_1a0b0f80e3fe0b41cc0ebe87334af778ee)`(bool & OutValue) const` | Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1aebff1d3651f7d877dc0d90d52e5f2559)`()` | Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1a4c9aed46e174e18ae437f0ba7d1e99e6)`() const` | Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a7648abbf68c98583323fa80cdc23c841)`(const bool & NewValue)` | Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.
`public inline FORCEINLINE void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a2814a149c669358519cf589031267b4e)`(bool && NewValue)` | Sets the value of Claimed_Optional and also sets Claimed_IsSet to true using move semantics.
`public inline void `[`ClearClaimed`](#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)`()` | Clears the value of Claimed_Optional and sets Claimed_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Claimed`](#structFRHAPI__KeyClaim_1a5ba867fd184d0aa311a0cf3f66793330)`()` | Returns the default value of Claimed.
`public inline FORCEINLINE void `[`SetClaimedToNull`](#structFRHAPI__KeyClaim_1a10fa172bfa0ea5252c4116a70283802a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClaimedNull`](#structFRHAPI__KeyClaim_1af26935054fdcd2cbee953b223bc0bd2b)`() const` | Checks whether Claimed_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a3a6d21856d0e2365c72d59dac740b954)`()` | Gets the value of ExternalKey_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a006249a815c9826098f68fffa2ebbbb5)`() const` | Gets the value of ExternalKey_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a1401765e028367e2b5af55a3d4a2e1e9)`(const FString & DefaultValue) const` | Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalKey`](#structFRHAPI__KeyClaim_1aae6f444364b2982646942c55c4b4850f)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1a0ebaef6a6fff9eaecfb0e0908ab5a8b0)`()` | Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1ae0ae056e965d8468553674770705e1f1)`() const` | Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a196a0af70f8f664abf1b4af8b0e1482d)`(const FString & NewValue)` | Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a6323b5020fa56a0a64a04294ce7d4df4)`(FString && NewValue)` | Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true using move semantics.
`public inline void `[`ClearExternalKey`](#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)`()` | Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalKeyToNull`](#structFRHAPI__KeyClaim_1a634831a93b52c34f48f0070cb27ee69e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalKeyNull`](#structFRHAPI__KeyClaim_1a9436693307c40baeb14ff684e4efd404)`() const` | Checks whether ExternalKey_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a9606d9a3e8fdd90d889d1f277a4117c1)`()` | Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ac487f327101c867093d4b88678a30cf6)`() const` | Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1acaa6f662e7128c3ce6dd848f50e10cfe)`(const FGuid & DefaultValue) const` | Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a9443b26026b3ac8b6b65cab198dd494d)`(FGuid & OutValue) const` | Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a1fa1c1c530f1765707179e375f55aaf8)`()` | Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a3d9ef0d1aca67a8438f3bcce9c0c278e)`() const` | Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a0f2c6a6627beceafb33f19c48f98fd30)`(const FGuid & NewValue)` | Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a5e31c5c92c5435dcd999d7ee2adbd637)`(FGuid && NewValue)` | Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)`()` | Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalKeyCampaignUuidToNull`](#structFRHAPI__KeyClaim_1a19d058cd0de941e1acc2c682a1a2f339)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalKeyCampaignUuidNull`](#structFRHAPI__KeyClaim_1ab4ecd531bc0efdc9e16aa2a5b7ab49c8)`() const` | Checks whether ExternalKeyCampaignUuid_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1ae5e7ad37a845609158fb82b0d146cb6a)`()` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a991fa23ed72ba1a5ee011089a864d5d9)`() const` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1afd84ca14508efa51e70d98c3b57dc468)`(const FString & DefaultValue) const` | Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1ad887e7d74416b11e98e6d1fefe79b8f7)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a5379876459ae92cba2086fab4a7c3de9)`()` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a7b12e64ee379c94403cfb8e0a7a746c4)`() const` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1af4c7f722c6ba7abdde5fefbdc7f2241f)`(const FString & NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1a4e06a429502b1973a969c8affcdc9da4)`(FString && NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyType`](#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)`()` | Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalKeyTypeToNull`](#structFRHAPI__KeyClaim_1a61f94381bab11b2c1679ba46de439eae)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalKeyTypeNull`](#structFRHAPI__KeyClaim_1af9bb58461b4ad8eec3978a3394dbe71d)`() const` | Checks whether ExternalKeyType_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a78cbcdfc34f73d4e4bf02470e10c6667)`()` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a3d33628279408bd972fa94b323c149df)`() const` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1adaa2cce133a502d87465937ce4bc8990)`(const FString & DefaultValue) const` | Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a1916eb4910d8a20f663b4c8a47851011)`(FString & OutValue) const` | Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1ab423b85a0d4ee666cadde728d846793f)`()` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1a488db64e62f50a2f78b3e9ebf4efaa99)`() const` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a01c7d4b8d64c34cc72863c3e1d800d96)`(const FString & NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a56bafa906bbe3dca12c66866f632623d)`(FString && NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.
`public inline void `[`ClearCreatedOn`](#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)`()` | Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.
`public inline FORCEINLINE void `[`SetCreatedOnToNull`](#structFRHAPI__KeyClaim_1a2c4773e98a4081149fa7589970196852)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCreatedOnNull`](#structFRHAPI__KeyClaim_1a09cd9734d30d969ef8b581f00cf39195)`() const` | Checks whether CreatedOn_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1ad2b434b526f974ed7cb06711e1285c13)`()` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a4c48059aef96c4e2f018cbba99661df1)`() const` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1abae98c3a2faf9cac70b245d7a664aa1a)`(const FString & DefaultValue) const` | Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1ae220bc4128347a886ec843bb97ff78bf)`(FString & OutValue) const` | Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a20f9a15985c1142b9d02b614746d5c77)`()` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a336f57304f2cad29faa9bffc2d6d0a98)`() const` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1aeee135bac6516473aef6344ce4b64bf1)`(const FString & NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1a230f5bb90ac5b993f6bc710430cb830a)`(FString && NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedOn`](#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)`()` | Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.
`public inline FORCEINLINE void `[`SetLastModifiedOnToNull`](#structFRHAPI__KeyClaim_1a5d4e6bf206f922c0171bff3f197f706f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLastModifiedOnNull`](#structFRHAPI__KeyClaim_1a76176b7c4f64ad11423f20f5f55c3985)`() const` | Checks whether LastModifiedOn_Optional is set to null.

### Members

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__KeyClaim_1a230d8f8464d3ff7466cdd4d785081567) <a id="structFRHAPI__KeyClaim_1a230d8f8464d3ff7466cdd4d785081567"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3) <a id="structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__KeyClaim_1a3eaf099f9b9661e9dae28a7bf9aa47f6) <a id="structFRHAPI__KeyClaim_1a3eaf099f9b9661e9dae28a7bf9aa47f6"></a>

true if PortalId_Optional has been explicitly set to null

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97) <a id="structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97"></a>

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582) <a id="structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582"></a>

true if PortalUserId_Optional has been set to a value

#### `public bool `[`PortalUserId_IsNull`](#structFRHAPI__KeyClaim_1ab53dfbb94293d1f76e5ba0ec8c0786b6) <a id="structFRHAPI__KeyClaim_1ab53dfbb94293d1f76e5ba0ec8c0786b6"></a>

true if PortalUserId_Optional has been explicitly set to null

#### `public FGuid `[`KeyClaimUuid`](#structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344) <a id="structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344"></a>

The unique identifier for the KeyClaim.

#### `public bool `[`Claimed_Optional`](#structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4) <a id="structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4"></a>

#### `public bool `[`Claimed_IsSet`](#structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42) <a id="structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42"></a>

true if Claimed_Optional has been set to a value

#### `public bool `[`Claimed_IsNull`](#structFRHAPI__KeyClaim_1a961bd25316e078f6eff51dd6c0de57e5) <a id="structFRHAPI__KeyClaim_1a961bd25316e078f6eff51dd6c0de57e5"></a>

true if Claimed_Optional has been explicitly set to null

#### `public FString `[`ExternalKey_Optional`](#structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6) <a id="structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6"></a>

#### `public bool `[`ExternalKey_IsSet`](#structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3) <a id="structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3"></a>

true if ExternalKey_Optional has been set to a value

#### `public bool `[`ExternalKey_IsNull`](#structFRHAPI__KeyClaim_1a3bb860549e3d10931f36c7730f33bb10) <a id="structFRHAPI__KeyClaim_1a3bb860549e3d10931f36c7730f33bb10"></a>

true if ExternalKey_Optional has been explicitly set to null

#### `public FGuid `[`ExternalKeyCampaignUuid_Optional`](#structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63) <a id="structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63"></a>

#### `public bool `[`ExternalKeyCampaignUuid_IsSet`](#structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf) <a id="structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf"></a>

true if ExternalKeyCampaignUuid_Optional has been set to a value

#### `public bool `[`ExternalKeyCampaignUuid_IsNull`](#structFRHAPI__KeyClaim_1a9a73df5f23aac15e9c428f3451bd8f6e) <a id="structFRHAPI__KeyClaim_1a9a73df5f23aac15e9c428f3451bd8f6e"></a>

true if ExternalKeyCampaignUuid_Optional has been explicitly set to null

#### `public FString `[`ExternalKeyType_Optional`](#structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c) <a id="structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c"></a>

#### `public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f) <a id="structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f"></a>

true if ExternalKeyType_Optional has been set to a value

#### `public bool `[`ExternalKeyType_IsNull`](#structFRHAPI__KeyClaim_1a84e1bd5e40356526cca2f96aa5a4efb5) <a id="structFRHAPI__KeyClaim_1a84e1bd5e40356526cca2f96aa5a4efb5"></a>

true if ExternalKeyType_Optional has been explicitly set to null

#### `public FString `[`CreatedOn_Optional`](#structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0) <a id="structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0"></a>

#### `public bool `[`CreatedOn_IsSet`](#structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19) <a id="structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19"></a>

true if CreatedOn_Optional has been set to a value

#### `public bool `[`CreatedOn_IsNull`](#structFRHAPI__KeyClaim_1ae0b7cc4515c49f0133111168f302fde5) <a id="structFRHAPI__KeyClaim_1ae0b7cc4515c49f0133111168f302fde5"></a>

true if CreatedOn_Optional has been explicitly set to null

#### `public FString `[`LastModifiedOn_Optional`](#structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a) <a id="structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a"></a>

#### `public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f) <a id="structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f"></a>

true if LastModifiedOn_Optional has been set to a value

#### `public bool `[`LastModifiedOn_IsNull`](#structFRHAPI__KeyClaim_1a46b773728c92b60cfef353f98aea3e16) <a id="structFRHAPI__KeyClaim_1a46b773728c92b60cfef353f98aea3e16"></a>

true if LastModifiedOn_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1a07c0e4a822edd88866789be4812a3a4e)`()` <a id="structFRHAPI__KeyClaim_1a07c0e4a822edd88866789be4812a3a4e"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1ac96d5d168b0273ede375ab35e0968c3b)`() const` <a id="structFRHAPI__KeyClaim_1ac96d5d168b0273ede375ab35e0968c3b"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__KeyClaim_1ac2b8ca942ec68e5a916de57e1d1b2b53)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1ac2b8ca942ec68e5a916de57e1d1b2b53"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__KeyClaim_1ac3d9b05aae9d8e607ffda779a6d5c666)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__KeyClaim_1ac3d9b05aae9d8e607ffda779a6d5c666"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1afb15ed418276633a2c6792e0577731da)`()` <a id="structFRHAPI__KeyClaim_1afb15ed418276633a2c6792e0577731da"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__KeyClaim_1aae89bbdca1547c14698cac36c6929391)`() const` <a id="structFRHAPI__KeyClaim_1aae89bbdca1547c14698cac36c6929391"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a82bf6d4f15fec18398f008f6796d2793)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__KeyClaim_1a82bf6d4f15fec18398f008f6796d2793"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__KeyClaim_1a8310e478b2dab0be875f9a9e26fa6208)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__KeyClaim_1a8310e478b2dab0be875f9a9e26fa6208"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)`()` <a id="structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__KeyClaim_1adc4fecde464060199784e1cee0283382)`()` <a id="structFRHAPI__KeyClaim_1adc4fecde464060199784e1cee0283382"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__KeyClaim_1a6fcfe7fc27f13fc93690aaeff6fc5739)`() const` <a id="structFRHAPI__KeyClaim_1a6fcfe7fc27f13fc93690aaeff6fc5739"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a8d4b0fd327764596cb3a526f4c20b7e1)`()` <a id="structFRHAPI__KeyClaim_1a8d4b0fd327764596cb3a526f4c20b7e1"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1ae73d1c016805ec61bdcbeadecee56feb)`() const` <a id="structFRHAPI__KeyClaim_1ae73d1c016805ec61bdcbeadecee56feb"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a97139bc37562e7d4660bd1d4c4154cde)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a97139bc37562e7d4660bd1d4c4154cde"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__KeyClaim_1a00d3f04c62fa9e286a2456f64105114f)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a00d3f04c62fa9e286a2456f64105114f"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1abe88f3e2177001bebdc3e8afe00a02dc)`()` <a id="structFRHAPI__KeyClaim_1abe88f3e2177001bebdc3e8afe00a02dc"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__KeyClaim_1a68157595c19d3b292f3eba8cf00582b9)`() const` <a id="structFRHAPI__KeyClaim_1a68157595c19d3b292f3eba8cf00582b9"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a74162ef05596eeca09bbd87a1a3392a5)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1a74162ef05596eeca09bbd87a1a3392a5"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__KeyClaim_1a1e0158f20e59d18f4227c625ff2ed99c)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a1e0158f20e59d18f4227c625ff2ed99c"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)`()` <a id="structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__KeyClaim_1a136bc49e8a503a80fa5a763b4df8d334)`()` <a id="structFRHAPI__KeyClaim_1a136bc49e8a503a80fa5a763b4df8d334"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__KeyClaim_1aa766e7dfd96fe415f15b0a2289296e7e)`() const` <a id="structFRHAPI__KeyClaim_1aa766e7dfd96fe415f15b0a2289296e7e"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1ab6fb641a20b7f83b163b77ee8a41b163)`()` <a id="structFRHAPI__KeyClaim_1ab6fb641a20b7f83b163b77ee8a41b163"></a>

Gets the value of KeyClaimUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a0bd8e9968bb428d51a0df47f1591341b)`() const` <a id="structFRHAPI__KeyClaim_1a0bd8e9968bb428d51a0df47f1591341b"></a>

Gets the value of KeyClaimUuid.

#### `public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a9ffcf96150a8b40f09198865ba0334f9)`(const FGuid & NewValue)` <a id="structFRHAPI__KeyClaim_1a9ffcf96150a8b40f09198865ba0334f9"></a>

Sets the value of KeyClaimUuid.

#### `public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__KeyClaim_1a88fc757824c2e0172ea0a6c79354f457)`(FGuid && NewValue)` <a id="structFRHAPI__KeyClaim_1a88fc757824c2e0172ea0a6c79354f457"></a>

Sets the value of KeyClaimUuid using move semantics.

#### `public inline FORCEINLINE bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1a6f573abc601ace9dd01b6e02cd474865)`()` <a id="structFRHAPI__KeyClaim_1a6f573abc601ace9dd01b6e02cd474865"></a>

Gets the value of Claimed_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1acf1b0e271c76d5d81de788f7c81ea5c9)`() const` <a id="structFRHAPI__KeyClaim_1acf1b0e271c76d5d81de788f7c81ea5c9"></a>

Gets the value of Claimed_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetClaimed`](#structFRHAPI__KeyClaim_1aca074e57079aec07e1c8e586a04b11d7)`(const bool & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1aca074e57079aec07e1c8e586a04b11d7"></a>

Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClaimed`](#structFRHAPI__KeyClaim_1a0b0f80e3fe0b41cc0ebe87334af778ee)`(bool & OutValue) const` <a id="structFRHAPI__KeyClaim_1a0b0f80e3fe0b41cc0ebe87334af778ee"></a>

Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1aebff1d3651f7d877dc0d90d52e5f2559)`()` <a id="structFRHAPI__KeyClaim_1aebff1d3651f7d877dc0d90d52e5f2559"></a>

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetClaimedOrNull`](#structFRHAPI__KeyClaim_1a4c9aed46e174e18ae437f0ba7d1e99e6)`() const` <a id="structFRHAPI__KeyClaim_1a4c9aed46e174e18ae437f0ba7d1e99e6"></a>

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a7648abbf68c98583323fa80cdc23c841)`(const bool & NewValue)` <a id="structFRHAPI__KeyClaim_1a7648abbf68c98583323fa80cdc23c841"></a>

Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClaimed`](#structFRHAPI__KeyClaim_1a2814a149c669358519cf589031267b4e)`(bool && NewValue)` <a id="structFRHAPI__KeyClaim_1a2814a149c669358519cf589031267b4e"></a>

Sets the value of Claimed_Optional and also sets Claimed_IsSet to true using move semantics.

#### `public inline void `[`ClearClaimed`](#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)`()` <a id="structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0"></a>

Clears the value of Claimed_Optional and sets Claimed_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Claimed`](#structFRHAPI__KeyClaim_1a5ba867fd184d0aa311a0cf3f66793330)`()` <a id="structFRHAPI__KeyClaim_1a5ba867fd184d0aa311a0cf3f66793330"></a>

Returns the default value of Claimed.

#### `public inline FORCEINLINE void `[`SetClaimedToNull`](#structFRHAPI__KeyClaim_1a10fa172bfa0ea5252c4116a70283802a)`()` <a id="structFRHAPI__KeyClaim_1a10fa172bfa0ea5252c4116a70283802a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClaimedNull`](#structFRHAPI__KeyClaim_1af26935054fdcd2cbee953b223bc0bd2b)`() const` <a id="structFRHAPI__KeyClaim_1af26935054fdcd2cbee953b223bc0bd2b"></a>

Checks whether Claimed_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a3a6d21856d0e2365c72d59dac740b954)`()` <a id="structFRHAPI__KeyClaim_1a3a6d21856d0e2365c72d59dac740b954"></a>

Gets the value of ExternalKey_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a006249a815c9826098f68fffa2ebbbb5)`() const` <a id="structFRHAPI__KeyClaim_1a006249a815c9826098f68fffa2ebbbb5"></a>

Gets the value of ExternalKey_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalKey`](#structFRHAPI__KeyClaim_1a1401765e028367e2b5af55a3d4a2e1e9)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1a1401765e028367e2b5af55a3d4a2e1e9"></a>

Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalKey`](#structFRHAPI__KeyClaim_1aae6f444364b2982646942c55c4b4850f)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1aae6f444364b2982646942c55c4b4850f"></a>

Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1a0ebaef6a6fff9eaecfb0e0908ab5a8b0)`()` <a id="structFRHAPI__KeyClaim_1a0ebaef6a6fff9eaecfb0e0908ab5a8b0"></a>

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalKeyOrNull`](#structFRHAPI__KeyClaim_1ae0ae056e965d8468553674770705e1f1)`() const` <a id="structFRHAPI__KeyClaim_1ae0ae056e965d8468553674770705e1f1"></a>

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a196a0af70f8f664abf1b4af8b0e1482d)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1a196a0af70f8f664abf1b4af8b0e1482d"></a>

Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalKey`](#structFRHAPI__KeyClaim_1a6323b5020fa56a0a64a04294ce7d4df4)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a6323b5020fa56a0a64a04294ce7d4df4"></a>

Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKey`](#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)`()` <a id="structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03"></a>

Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalKeyToNull`](#structFRHAPI__KeyClaim_1a634831a93b52c34f48f0070cb27ee69e)`()` <a id="structFRHAPI__KeyClaim_1a634831a93b52c34f48f0070cb27ee69e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalKeyNull`](#structFRHAPI__KeyClaim_1a9436693307c40baeb14ff684e4efd404)`() const` <a id="structFRHAPI__KeyClaim_1a9436693307c40baeb14ff684e4efd404"></a>

Checks whether ExternalKey_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a9606d9a3e8fdd90d889d1f277a4117c1)`()` <a id="structFRHAPI__KeyClaim_1a9606d9a3e8fdd90d889d1f277a4117c1"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1ac487f327101c867093d4b88678a30cf6)`() const` <a id="structFRHAPI__KeyClaim_1ac487f327101c867093d4b88678a30cf6"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1acaa6f662e7128c3ce6dd848f50e10cfe)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1acaa6f662e7128c3ce6dd848f50e10cfe"></a>

Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a9443b26026b3ac8b6b65cab198dd494d)`(FGuid & OutValue) const` <a id="structFRHAPI__KeyClaim_1a9443b26026b3ac8b6b65cab198dd494d"></a>

Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a1fa1c1c530f1765707179e375f55aaf8)`()` <a id="structFRHAPI__KeyClaim_1a1fa1c1c530f1765707179e375f55aaf8"></a>

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetExternalKeyCampaignUuidOrNull`](#structFRHAPI__KeyClaim_1a3d9ef0d1aca67a8438f3bcce9c0c278e)`() const` <a id="structFRHAPI__KeyClaim_1a3d9ef0d1aca67a8438f3bcce9c0c278e"></a>

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a0f2c6a6627beceafb33f19c48f98fd30)`(const FGuid & NewValue)` <a id="structFRHAPI__KeyClaim_1a0f2c6a6627beceafb33f19c48f98fd30"></a>

Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a5e31c5c92c5435dcd999d7ee2adbd637)`(FGuid && NewValue)` <a id="structFRHAPI__KeyClaim_1a5e31c5c92c5435dcd999d7ee2adbd637"></a>

Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyCampaignUuid`](#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)`()` <a id="structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5"></a>

Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalKeyCampaignUuidToNull`](#structFRHAPI__KeyClaim_1a19d058cd0de941e1acc2c682a1a2f339)`()` <a id="structFRHAPI__KeyClaim_1a19d058cd0de941e1acc2c682a1a2f339"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalKeyCampaignUuidNull`](#structFRHAPI__KeyClaim_1ab4ecd531bc0efdc9e16aa2a5b7ab49c8)`() const` <a id="structFRHAPI__KeyClaim_1ab4ecd531bc0efdc9e16aa2a5b7ab49c8"></a>

Checks whether ExternalKeyCampaignUuid_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1ae5e7ad37a845609158fb82b0d146cb6a)`()` <a id="structFRHAPI__KeyClaim_1ae5e7ad37a845609158fb82b0d146cb6a"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1a991fa23ed72ba1a5ee011089a864d5d9)`() const` <a id="structFRHAPI__KeyClaim_1a991fa23ed72ba1a5ee011089a864d5d9"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1afd84ca14508efa51e70d98c3b57dc468)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1afd84ca14508efa51e70d98c3b57dc468"></a>

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalKeyType`](#structFRHAPI__KeyClaim_1ad887e7d74416b11e98e6d1fefe79b8f7)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1ad887e7d74416b11e98e6d1fefe79b8f7"></a>

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a5379876459ae92cba2086fab4a7c3de9)`()` <a id="structFRHAPI__KeyClaim_1a5379876459ae92cba2086fab4a7c3de9"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__KeyClaim_1a7b12e64ee379c94403cfb8e0a7a746c4)`() const` <a id="structFRHAPI__KeyClaim_1a7b12e64ee379c94403cfb8e0a7a746c4"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1af4c7f722c6ba7abdde5fefbdc7f2241f)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1af4c7f722c6ba7abdde5fefbdc7f2241f"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__KeyClaim_1a4e06a429502b1973a969c8affcdc9da4)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a4e06a429502b1973a969c8affcdc9da4"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyType`](#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)`()` <a id="structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4"></a>

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalKeyTypeToNull`](#structFRHAPI__KeyClaim_1a61f94381bab11b2c1679ba46de439eae)`()` <a id="structFRHAPI__KeyClaim_1a61f94381bab11b2c1679ba46de439eae"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalKeyTypeNull`](#structFRHAPI__KeyClaim_1af9bb58461b4ad8eec3978a3394dbe71d)`() const` <a id="structFRHAPI__KeyClaim_1af9bb58461b4ad8eec3978a3394dbe71d"></a>

Checks whether ExternalKeyType_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a78cbcdfc34f73d4e4bf02470e10c6667)`()` <a id="structFRHAPI__KeyClaim_1a78cbcdfc34f73d4e4bf02470e10c6667"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a3d33628279408bd972fa94b323c149df)`() const` <a id="structFRHAPI__KeyClaim_1a3d33628279408bd972fa94b323c149df"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1adaa2cce133a502d87465937ce4bc8990)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1adaa2cce133a502d87465937ce4bc8990"></a>

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedOn`](#structFRHAPI__KeyClaim_1a1916eb4910d8a20f663b4c8a47851011)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1a1916eb4910d8a20f663b4c8a47851011"></a>

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1ab423b85a0d4ee666cadde728d846793f)`()` <a id="structFRHAPI__KeyClaim_1ab423b85a0d4ee666cadde728d846793f"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__KeyClaim_1a488db64e62f50a2f78b3e9ebf4efaa99)`() const` <a id="structFRHAPI__KeyClaim_1a488db64e62f50a2f78b3e9ebf4efaa99"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a01c7d4b8d64c34cc72863c3e1d800d96)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1a01c7d4b8d64c34cc72863c3e1d800d96"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__KeyClaim_1a56bafa906bbe3dca12c66866f632623d)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a56bafa906bbe3dca12c66866f632623d"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedOn`](#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)`()` <a id="structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b"></a>

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCreatedOnToNull`](#structFRHAPI__KeyClaim_1a2c4773e98a4081149fa7589970196852)`()` <a id="structFRHAPI__KeyClaim_1a2c4773e98a4081149fa7589970196852"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCreatedOnNull`](#structFRHAPI__KeyClaim_1a09cd9734d30d969ef8b581f00cf39195)`() const` <a id="structFRHAPI__KeyClaim_1a09cd9734d30d969ef8b581f00cf39195"></a>

Checks whether CreatedOn_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1ad2b434b526f974ed7cb06711e1285c13)`()` <a id="structFRHAPI__KeyClaim_1ad2b434b526f974ed7cb06711e1285c13"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1a4c48059aef96c4e2f018cbba99661df1)`() const` <a id="structFRHAPI__KeyClaim_1a4c48059aef96c4e2f018cbba99661df1"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1abae98c3a2faf9cac70b245d7a664aa1a)`(const FString & DefaultValue) const` <a id="structFRHAPI__KeyClaim_1abae98c3a2faf9cac70b245d7a664aa1a"></a>

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedOn`](#structFRHAPI__KeyClaim_1ae220bc4128347a886ec843bb97ff78bf)`(FString & OutValue) const` <a id="structFRHAPI__KeyClaim_1ae220bc4128347a886ec843bb97ff78bf"></a>

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a20f9a15985c1142b9d02b614746d5c77)`()` <a id="structFRHAPI__KeyClaim_1a20f9a15985c1142b9d02b614746d5c77"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__KeyClaim_1a336f57304f2cad29faa9bffc2d6d0a98)`() const` <a id="structFRHAPI__KeyClaim_1a336f57304f2cad29faa9bffc2d6d0a98"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1aeee135bac6516473aef6344ce4b64bf1)`(const FString & NewValue)` <a id="structFRHAPI__KeyClaim_1aeee135bac6516473aef6344ce4b64bf1"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__KeyClaim_1a230f5bb90ac5b993f6bc710430cb830a)`(FString && NewValue)` <a id="structFRHAPI__KeyClaim_1a230f5bb90ac5b993f6bc710430cb830a"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedOn`](#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)`()` <a id="structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908"></a>

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLastModifiedOnToNull`](#structFRHAPI__KeyClaim_1a5d4e6bf206f922c0171bff3f197f706f)`()` <a id="structFRHAPI__KeyClaim_1a5d4e6bf206f922c0171bff3f197f706f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLastModifiedOnNull`](#structFRHAPI__KeyClaim_1a76176b7c4f64ad11423f20f5f55c3985)`() const` <a id="structFRHAPI__KeyClaim_1a76176b7c4f64ad11423f20f5f55c3985"></a>

Checks whether LastModifiedOn_Optional is set to null.

