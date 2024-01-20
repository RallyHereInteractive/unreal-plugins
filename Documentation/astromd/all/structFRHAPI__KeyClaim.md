---
title: FRHAPI_KeyClaim Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A KeyClaim is a reward a player for fulfilling requirements of an eternal marketing campaign. Once the player has completed the requirements of the campaign and have been assigned a sku of the campaign by the Platform, invoke Process Key Entitlements to consume the sku from the Platform for a Key Claim.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_InventoryPortal|[PortalId_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ac799e1995190304db6b0896a44a5611c)|Platform the player is on.|
|bool|[PortalId_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3)|true if PortalId_Optional has been set to a value|
|FString|[PortalUserId_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97)|The Platform's unique identifier for the player.|
|bool|[PortalUserId_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582)|true if PortalUserId_Optional has been set to a value|
|FGuid|[KeyClaimUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344)|The unique identifier for the KeyClaim.|
|bool|[Claimed_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4)|Whether the KeyClaim has been claimed.|
|bool|[Claimed_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42)|true if Claimed_Optional has been set to a value|
|FString|[ExternalKey_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6)|The external key that was been claimed by the player. This is only filled out once the KeyClaim has been claimed.|
|bool|[ExternalKey_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3)|true if ExternalKey_Optional has been set to a value|
|FGuid|[ExternalKeyCampaignUuid_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63)|The unique identifier for the MarketingCampaign that the external key was claimed from.|
|bool|[ExternalKeyCampaignUuid_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf)|true if ExternalKeyCampaignUuid_Optional has been set to a value|
|FString|[ExternalKeyType_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c)|This can be used to allow the player to claim different types based on their preferrence. While we don't have requirement for what should contain, it must match a key type assigned to the external campaign.|
|bool|[ExternalKeyType_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f)|true if ExternalKeyType_Optional has been set to a value|
|FString|[CreatedOn_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0)|The time the KeyClaim was created.|
|bool|[CreatedOn_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19)|true if CreatedOn_Optional has been set to a value|
|FString|[LastModifiedOn_Optional](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a)|The time the KeyClaim was last modified.|
|bool|[LastModifiedOn_IsSet](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f)|true if LastModifiedOn_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a681722ebe833129d706e9f11ffef7a78)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a163dc496e4025332a78aaea155647534)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aec9aa50becf9a17426b29a283bf211ee)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1afd856396baa4cf6e23471420567b09c2)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a8ad0a5f895d520110e3284ed71b6ef04)(const ERHAPI_InventoryPortal & DefaultValue)|Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a1a2671651f5ae1abd6c8d379526212fb)(ERHAPI_InventoryPortal & OutValue)|Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a67cb0a317b0ad9ba8af07079ecc4afce)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a3bf6ad70764c28c4e82872ecfe5e4839)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a536b9ec037266735fd84801e927f3517)(ERHAPI_InventoryPortal NewValue)|Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.|
|void|[ClearPortalId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708)()|Clears the value of PortalId_Optional and sets PortalId_IsSet to false.|
|FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1af5c4926f2a02d408c5bf65a1e85cd7a2)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ac05d8c0fc346da172ac72610811773e7)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a25a75626c760681217cf2e4818be2335)(const FString & DefaultValue)|Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalUserId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614)(FString & OutValue)|Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a0bba9c4a0f98faa6f1d498056bec4988)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aca0809d2121d38f3e20b41eb0cdf87cb)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalUserId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a41d40264bfd092a60e2c511851a43c2f)(FString NewValue)|Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.|
|void|[ClearPortalUserId](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c)()|Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.|
|FGuid &|[GetKeyClaimUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aa157ecf71ea8310f2d2dcdf07dae6504)()|Gets the value of KeyClaimUuid.|
|const FGuid &|[GetKeyClaimUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1af691554e2bf8db3c935b79a761654766)()|Gets the value of KeyClaimUuid.|
|void|[SetKeyClaimUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1acaf93c55e8301b26b679883b8b2de453)(FGuid NewValue)|Sets the value of KeyClaimUuid.|
|bool &|[GetClaimed](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aafeaf7ea04d9beb30bf10597964f177f)()|Gets the value of Claimed_Optional, regardless of it having been set.|
|const bool &|[GetClaimed](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a432006c30617709ef83c0fbf89447e59)()|Gets the value of Claimed_Optional, regardless of it having been set.|
|const bool &|[GetClaimed](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a83284a582a4d0e4a560ad79080331bfc)(const bool & DefaultValue)|Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClaimed](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72)(bool & OutValue)|Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetClaimedOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a149c6bf21adcaa8a6cd9f2ab3a94d680)()|Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetClaimedOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1abe821bb522bbca51c95fdd8e0ff502e3)()|Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClaimed](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a2a5690931e32a635b1a60e562b429ee7)(bool NewValue)|Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.|
|void|[ClearClaimed](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0)()|Clears the value of Claimed_Optional and sets Claimed_IsSet to false.|
|bool|[IsClaimedDefaultValue](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f)()|Returns true if Claimed_Optional is set and matches the default value.|
|void|[SetClaimedToDefault](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989)()|Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true.|
|FString &|[GetExternalKey](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a44035d0c8f6dad64b82912a45b47e69b)()|Gets the value of ExternalKey_Optional, regardless of it having been set.|
|const FString &|[GetExternalKey](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a199fe553a5895d0cdfaa9ee55c03b028)()|Gets the value of ExternalKey_Optional, regardless of it having been set.|
|const FString &|[GetExternalKey](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aa733a1fc8f2f21c518f0443da9b28815)(const FString & DefaultValue)|Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalKey](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0)(FString & OutValue)|Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalKeyOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ac26b5dd34c5887684c5e6b098f43328c)()|Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalKeyOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1aec406f8dbe144fcb1769961e9489d997)()|Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalKey](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1afcb6a068d44c89508103642b31e9c93d)(FString NewValue)|Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.|
|void|[ClearExternalKey](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03)()|Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.|
|FGuid &|[GetExternalKeyCampaignUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1acf4d863356198d7fc201526610751d31)()|Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetExternalKeyCampaignUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ae13780f734c0f7942d4f31f519665c46)()|Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetExternalKeyCampaignUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a0d2b26e65521f2586164a301d08b962f)(const FGuid & DefaultValue)|Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalKeyCampaignUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354)(FGuid & OutValue)|Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetExternalKeyCampaignUuidOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1afe85eb929aa13d87e8b70b91e85d9ad3)()|Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetExternalKeyCampaignUuidOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a902b94f86fc115404fc5e7a785f4a986)()|Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalKeyCampaignUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ab89b799b7bd210941066edca5301e030)(FGuid NewValue)|Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.|
|void|[ClearExternalKeyCampaignUuid](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5)()|Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.|
|FString &|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1ae9ecdd2f605774dd6977d29a419bbfe5)()|Gets the value of ExternalKeyType_Optional, regardless of it having been set.|
|const FString &|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a846c02696a1dbb837716f04b5c08b7ea)()|Gets the value of ExternalKeyType_Optional, regardless of it having been set.|
|const FString &|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a158bcbaf9c99b84488d4ac4784eb9537)(const FString & DefaultValue)|Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5)(FString & OutValue)|Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalKeyTypeOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a1cc41ec0d4804fe09498d6f0b1590017)()|Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalKeyTypeOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a6e846f5d150cb999f8eb416c5e6a0da7)()|Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalKeyType](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a8345b882472009e1ac498cd4115da703)(FString NewValue)|Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.|
|void|[ClearExternalKeyType](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4)()|Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.|
|FString &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1adc05c8cd0162b7c354ae4aaea1bec17e)()|Gets the value of CreatedOn_Optional, regardless of it having been set.|
|const FString &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a4463bc0228649dffe11d316e14d4e8ec)()|Gets the value of CreatedOn_Optional, regardless of it having been set.|
|const FString &|[GetCreatedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a153ee84f13509c8d99f272fccde1a29f)(const FString & DefaultValue)|Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCreatedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43)(FString & OutValue)|Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetCreatedOnOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1acf0822b5ebf73fadd4dcc62c0a6c2be2)()|Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetCreatedOnOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a0a9a15a4b3d47e98f7a7fe82d6d29a4e)()|Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCreatedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a479442832ec7d794d29e1acbb03b430d)(FString NewValue)|Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.|
|void|[ClearCreatedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b)()|Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.|
|FString &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a4d8f1cfcc4afe226f347b63b94050130)()|Gets the value of LastModifiedOn_Optional, regardless of it having been set.|
|const FString &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1af076bcf9f495db33654cfba4f1391435)()|Gets the value of LastModifiedOn_Optional, regardless of it having been set.|
|const FString &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a772b36cc975a47ead2ee4f0406b9be82)(const FString & DefaultValue)|Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904)(FString & OutValue)|Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetLastModifiedOnOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a73c30fbd3623caf3bd561d4b38c4949b)()|Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetLastModifiedOnOrNull](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a213d4c475785f5c0e2d28c7739dfc40c)()|Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a2d3bcf43ed055b613868ec4525e04906)(FString NewValue)|Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.|
|void|[ClearLastModifiedOn](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908)()|Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.|
## Public Attributes



### `PortalId_Optional` <a id="structFRHAPI__KeyClaim_1ac799e1995190304db6b0896a44a5611c"></a>

`ERHAPI_InventoryPortal FRHAPI_KeyClaim::PortalId_Optional`

Platform the player is on.




### `PortalId_IsSet` <a id="structFRHAPI__KeyClaim_1af95158bbcd4208da12c12283b11139c3"></a>

`bool FRHAPI_KeyClaim::PortalId_IsSet`

true if PortalId_Optional has been set to a value




### `PortalUserId_Optional` <a id="structFRHAPI__KeyClaim_1af5375f7ebdab0eb347e86e21d2e13f97"></a>

`FString FRHAPI_KeyClaim::PortalUserId_Optional`

The Platform's unique identifier for the player.




### `PortalUserId_IsSet` <a id="structFRHAPI__KeyClaim_1ad8d5eefad96c5147965f2218c07df582"></a>

`bool FRHAPI_KeyClaim::PortalUserId_IsSet`

true if PortalUserId_Optional has been set to a value




### `KeyClaimUuid` <a id="structFRHAPI__KeyClaim_1a3bc3daebbd03f64cdc91e2a8a823b344"></a>

`FGuid FRHAPI_KeyClaim::KeyClaimUuid`

The unique identifier for the KeyClaim.




### `Claimed_Optional` <a id="structFRHAPI__KeyClaim_1a59446706589fd3b929538b3dc42de3c4"></a>

`bool FRHAPI_KeyClaim::Claimed_Optional`

Whether the KeyClaim has been claimed.




### `Claimed_IsSet` <a id="structFRHAPI__KeyClaim_1a4212cd20d8f1e5399e1d89a7a3dccd42"></a>

`bool FRHAPI_KeyClaim::Claimed_IsSet`

true if Claimed_Optional has been set to a value




### `ExternalKey_Optional` <a id="structFRHAPI__KeyClaim_1a5963308c6ee364902bce43e4e68d21d6"></a>

`FString FRHAPI_KeyClaim::ExternalKey_Optional`

The external key that was been claimed by the player. This is only filled out once the KeyClaim has been claimed.




### `ExternalKey_IsSet` <a id="structFRHAPI__KeyClaim_1aeb18b043e94667764a8cd03457417ee3"></a>

`bool FRHAPI_KeyClaim::ExternalKey_IsSet`

true if ExternalKey_Optional has been set to a value




### `ExternalKeyCampaignUuid_Optional` <a id="structFRHAPI__KeyClaim_1a789b0a30179462c39382fd9e405eba63"></a>

`FGuid FRHAPI_KeyClaim::ExternalKeyCampaignUuid_Optional`

The unique identifier for the MarketingCampaign that the external key was claimed from.




### `ExternalKeyCampaignUuid_IsSet` <a id="structFRHAPI__KeyClaim_1a06d3fce97cbf5dabb2c9c532f05911bf"></a>

`bool FRHAPI_KeyClaim::ExternalKeyCampaignUuid_IsSet`

true if ExternalKeyCampaignUuid_Optional has been set to a value




### `ExternalKeyType_Optional` <a id="structFRHAPI__KeyClaim_1a27fc67118ac74f951b8a008920a1d98c"></a>

`FString FRHAPI_KeyClaim::ExternalKeyType_Optional`

This can be used to allow the player to claim different types based on their preferrence. While we don't have requirement for what should contain, it must match a key type assigned to the external campaign.




### `ExternalKeyType_IsSet` <a id="structFRHAPI__KeyClaim_1a5186945ab0a123e23303fe23f706916f"></a>

`bool FRHAPI_KeyClaim::ExternalKeyType_IsSet`

true if ExternalKeyType_Optional has been set to a value




### `CreatedOn_Optional` <a id="structFRHAPI__KeyClaim_1a5912dfc4d1c1219ae45c2fc36353c5a0"></a>

`FString FRHAPI_KeyClaim::CreatedOn_Optional`

The time the KeyClaim was created.




### `CreatedOn_IsSet` <a id="structFRHAPI__KeyClaim_1a3717f5fd6b09ecfbe8f1eab7ce126a19"></a>

`bool FRHAPI_KeyClaim::CreatedOn_IsSet`

true if CreatedOn_Optional has been set to a value




### `LastModifiedOn_Optional` <a id="structFRHAPI__KeyClaim_1a0592d1667102dcfcf6eae3165f840e2a"></a>

`FString FRHAPI_KeyClaim::LastModifiedOn_Optional`

The time the KeyClaim was last modified.




### `LastModifiedOn_IsSet` <a id="structFRHAPI__KeyClaim_1ae12ac92f275fb4658fb13839b3a92a8f"></a>

`bool FRHAPI_KeyClaim::LastModifiedOn_IsSet`

true if LastModifiedOn_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__KeyClaim_1a681722ebe833129d706e9f11ffef7a78"></a>

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



### `WriteJson` <a id="structFRHAPI__KeyClaim_1a163dc496e4025332a78aaea155647534"></a>

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



### `GetPortalId` <a id="structFRHAPI__KeyClaim_1aec9aa50becf9a17426b29a283bf211ee"></a>

ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__KeyClaim_1afd856396baa4cf6e23471420567b09c2"></a>

const ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__KeyClaim_1a8ad0a5f895d520110e3284ed71b6ef04"></a>

const ERHAPI_InventoryPortal & GetPortalId(const ERHAPI_InventoryPortal & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryPortal &|DefaultValue|

#### Description

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalId` <a id="structFRHAPI__KeyClaim_1a1a2671651f5ae1abd6c8d379526212fb"></a>

bool GetPortalId(ERHAPI_InventoryPortal & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal &|OutValue|

#### Description

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalIdOrNull` <a id="structFRHAPI__KeyClaim_1a67cb0a317b0ad9ba8af07079ecc4afce"></a>

ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalIdOrNull` <a id="structFRHAPI__KeyClaim_1a3bf6ad70764c28c4e82872ecfe5e4839"></a>

const ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalId` <a id="structFRHAPI__KeyClaim_1a536b9ec037266735fd84801e927f3517"></a>

void SetPortalId(ERHAPI_InventoryPortal NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal|NewValue|

#### Description

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.




### `ClearPortalId` <a id="structFRHAPI__KeyClaim_1aa84223198e5d8c855734ff8f6c594708"></a>

void ClearPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.




### `GetPortalUserId` <a id="structFRHAPI__KeyClaim_1af5c4926f2a02d408c5bf65a1e85cd7a2"></a>

FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__KeyClaim_1ac05d8c0fc346da172ac72610811773e7"></a>

const FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__KeyClaim_1a25a75626c760681217cf2e4818be2335"></a>

const FString & GetPortalUserId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalUserId` <a id="structFRHAPI__KeyClaim_1adf598e63631c372e207ea18862b42614"></a>

bool GetPortalUserId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__KeyClaim_1a0bba9c4a0f98faa6f1d498056bec4988"></a>

FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__KeyClaim_1aca0809d2121d38f3e20b41eb0cdf87cb"></a>

const FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalUserId` <a id="structFRHAPI__KeyClaim_1a41d40264bfd092a60e2c511851a43c2f"></a>

void SetPortalUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.




### `ClearPortalUserId` <a id="structFRHAPI__KeyClaim_1a5f789757b654c1ca096bd1692f2ac66c"></a>

void ClearPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.




### `GetKeyClaimUuid` <a id="structFRHAPI__KeyClaim_1aa157ecf71ea8310f2d2dcdf07dae6504"></a>

FGuid & GetKeyClaimUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of KeyClaimUuid.




### `GetKeyClaimUuid` <a id="structFRHAPI__KeyClaim_1af691554e2bf8db3c935b79a761654766"></a>

const FGuid & GetKeyClaimUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of KeyClaimUuid.




### `SetKeyClaimUuid` <a id="structFRHAPI__KeyClaim_1acaf93c55e8301b26b679883b8b2de453"></a>

void SetKeyClaimUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of KeyClaimUuid.




### `GetClaimed` <a id="structFRHAPI__KeyClaim_1aafeaf7ea04d9beb30bf10597964f177f"></a>

bool & GetClaimed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Claimed_Optional, regardless of it having been set.




### `GetClaimed` <a id="structFRHAPI__KeyClaim_1a432006c30617709ef83c0fbf89447e59"></a>

const bool & GetClaimed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Claimed_Optional, regardless of it having been set.




### `GetClaimed` <a id="structFRHAPI__KeyClaim_1a83284a582a4d0e4a560ad79080331bfc"></a>

const bool & GetClaimed(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClaimed` <a id="structFRHAPI__KeyClaim_1a1c40f4da0c52fff68499cad035e73e72"></a>

bool GetClaimed(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false.




### `GetClaimedOrNull` <a id="structFRHAPI__KeyClaim_1a149c6bf21adcaa8a6cd9f2ab3a94d680"></a>

bool * GetClaimedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.




### `GetClaimedOrNull` <a id="structFRHAPI__KeyClaim_1abe821bb522bbca51c95fdd8e0ff502e3"></a>

const bool * GetClaimedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr.




### `SetClaimed` <a id="structFRHAPI__KeyClaim_1a2a5690931e32a635b1a60e562b429ee7"></a>

void SetClaimed(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Claimed_Optional and also sets Claimed_IsSet to true.




### `ClearClaimed` <a id="structFRHAPI__KeyClaim_1a038eb19cbad2ef8265c0fa40a3e497a0"></a>

void ClearClaimed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Claimed_Optional and sets Claimed_IsSet to false.




### `IsClaimedDefaultValue` <a id="structFRHAPI__KeyClaim_1acf01a79ae95e4eada108381792c9918f"></a>

bool IsClaimedDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Claimed_Optional is set and matches the default value.




### `SetClaimedToDefault` <a id="structFRHAPI__KeyClaim_1a6eca578c2f62b6a3871c7caeaa63b989"></a>

void SetClaimedToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true.




### `GetExternalKey` <a id="structFRHAPI__KeyClaim_1a44035d0c8f6dad64b82912a45b47e69b"></a>

FString & GetExternalKey()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKey_Optional, regardless of it having been set.




### `GetExternalKey` <a id="structFRHAPI__KeyClaim_1a199fe553a5895d0cdfaa9ee55c03b028"></a>

const FString & GetExternalKey()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKey_Optional, regardless of it having been set.




### `GetExternalKey` <a id="structFRHAPI__KeyClaim_1aa733a1fc8f2f21c518f0443da9b28815"></a>

const FString & GetExternalKey(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalKey` <a id="structFRHAPI__KeyClaim_1ae48064039c3b32a01b5b4e03351a10b0"></a>

bool GetExternalKey(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalKeyOrNull` <a id="structFRHAPI__KeyClaim_1ac26b5dd34c5887684c5e6b098f43328c"></a>

FString * GetExternalKeyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalKeyOrNull` <a id="structFRHAPI__KeyClaim_1aec406f8dbe144fcb1769961e9489d997"></a>

const FString * GetExternalKeyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalKey` <a id="structFRHAPI__KeyClaim_1afcb6a068d44c89508103642b31e9c93d"></a>

void SetExternalKey(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true.




### `ClearExternalKey` <a id="structFRHAPI__KeyClaim_1ac2969b171baf02d250bb332fc9b20e03"></a>

void ClearExternalKey()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false.




### `GetExternalKeyCampaignUuid` <a id="structFRHAPI__KeyClaim_1acf4d863356198d7fc201526610751d31"></a>

FGuid & GetExternalKeyCampaignUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.




### `GetExternalKeyCampaignUuid` <a id="structFRHAPI__KeyClaim_1ae13780f734c0f7942d4f31f519665c46"></a>

const FGuid & GetExternalKeyCampaignUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set.




### `GetExternalKeyCampaignUuid` <a id="structFRHAPI__KeyClaim_1a0d2b26e65521f2586164a301d08b962f"></a>

const FGuid & GetExternalKeyCampaignUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalKeyCampaignUuid` <a id="structFRHAPI__KeyClaim_1abdb1ac75b51055086d77ba3c4f0aa354"></a>

bool GetExternalKeyCampaignUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalKeyCampaignUuidOrNull` <a id="structFRHAPI__KeyClaim_1afe85eb929aa13d87e8b70b91e85d9ad3"></a>

FGuid * GetExternalKeyCampaignUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalKeyCampaignUuidOrNull` <a id="structFRHAPI__KeyClaim_1a902b94f86fc115404fc5e7a785f4a986"></a>

const FGuid * GetExternalKeyCampaignUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalKeyCampaignUuid` <a id="structFRHAPI__KeyClaim_1ab89b799b7bd210941066edca5301e030"></a>

void SetExternalKeyCampaignUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true.




### `ClearExternalKeyCampaignUuid` <a id="structFRHAPI__KeyClaim_1a1abb370dbb5d37a357cfc6ba7cfdcaa5"></a>

void ClearExternalKeyCampaignUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false.




### `GetExternalKeyType` <a id="structFRHAPI__KeyClaim_1ae9ecdd2f605774dd6977d29a419bbfe5"></a>

FString & GetExternalKeyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKeyType_Optional, regardless of it having been set.




### `GetExternalKeyType` <a id="structFRHAPI__KeyClaim_1a846c02696a1dbb837716f04b5c08b7ea"></a>

const FString & GetExternalKeyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKeyType_Optional, regardless of it having been set.




### `GetExternalKeyType` <a id="structFRHAPI__KeyClaim_1a158bcbaf9c99b84488d4ac4784eb9537"></a>

const FString & GetExternalKeyType(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalKeyType` <a id="structFRHAPI__KeyClaim_1a8e5e9754a38ff40a0344b9fd6dfba8c5"></a>

bool GetExternalKeyType(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalKeyTypeOrNull` <a id="structFRHAPI__KeyClaim_1a1cc41ec0d4804fe09498d6f0b1590017"></a>

FString * GetExternalKeyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalKeyTypeOrNull` <a id="structFRHAPI__KeyClaim_1a6e846f5d150cb999f8eb416c5e6a0da7"></a>

const FString * GetExternalKeyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalKeyType` <a id="structFRHAPI__KeyClaim_1a8345b882472009e1ac498cd4115da703"></a>

void SetExternalKeyType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.




### `ClearExternalKeyType` <a id="structFRHAPI__KeyClaim_1a36662bed3d100b99436208c7b86127b4"></a>

void ClearExternalKeyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.




### `GetCreatedOn` <a id="structFRHAPI__KeyClaim_1adc05c8cd0162b7c354ae4aaea1bec17e"></a>

FString & GetCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedOn_Optional, regardless of it having been set.




### `GetCreatedOn` <a id="structFRHAPI__KeyClaim_1a4463bc0228649dffe11d316e14d4e8ec"></a>

const FString & GetCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedOn_Optional, regardless of it having been set.




### `GetCreatedOn` <a id="structFRHAPI__KeyClaim_1a153ee84f13509c8d99f272fccde1a29f"></a>

const FString & GetCreatedOn(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCreatedOn` <a id="structFRHAPI__KeyClaim_1a99109f99db3004f930a9d3ebff6f5a43"></a>

bool GetCreatedOn(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.




### `GetCreatedOnOrNull` <a id="structFRHAPI__KeyClaim_1acf0822b5ebf73fadd4dcc62c0a6c2be2"></a>

FString * GetCreatedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.




### `GetCreatedOnOrNull` <a id="structFRHAPI__KeyClaim_1a0a9a15a4b3d47e98f7a7fe82d6d29a4e"></a>

const FString * GetCreatedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.




### `SetCreatedOn` <a id="structFRHAPI__KeyClaim_1a479442832ec7d794d29e1acbb03b430d"></a>

void SetCreatedOn(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.




### `ClearCreatedOn` <a id="structFRHAPI__KeyClaim_1af269f620cf927b1fabb63529d7c9a52b"></a>

void ClearCreatedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.




### `GetLastModifiedOn` <a id="structFRHAPI__KeyClaim_1a4d8f1cfcc4afe226f347b63b94050130"></a>

FString & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn_Optional, regardless of it having been set.




### `GetLastModifiedOn` <a id="structFRHAPI__KeyClaim_1af076bcf9f495db33654cfba4f1391435"></a>

const FString & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn_Optional, regardless of it having been set.




### `GetLastModifiedOn` <a id="structFRHAPI__KeyClaim_1a772b36cc975a47ead2ee4f0406b9be82"></a>

const FString & GetLastModifiedOn(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLastModifiedOn` <a id="structFRHAPI__KeyClaim_1a9f13642df89e3f5239d06601165c0904"></a>

bool GetLastModifiedOn(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.




### `GetLastModifiedOnOrNull` <a id="structFRHAPI__KeyClaim_1a73c30fbd3623caf3bd561d4b38c4949b"></a>

FString * GetLastModifiedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.




### `GetLastModifiedOnOrNull` <a id="structFRHAPI__KeyClaim_1a213d4c475785f5c0e2d28c7739dfc40c"></a>

const FString * GetLastModifiedOnOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.




### `SetLastModifiedOn` <a id="structFRHAPI__KeyClaim_1a2d3bcf43ed055b613868ec4525e04906"></a>

void SetLastModifiedOn(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.




### `ClearLastModifiedOn` <a id="structFRHAPI__KeyClaim_1a64310c25854349e6598803fdbc697908"></a>

void ClearLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.





