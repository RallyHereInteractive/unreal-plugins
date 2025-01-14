---
title: RHAPI_PlayerOrderCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderCreate`](#structFRHAPI__PlayerOrderCreate) | Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

## struct `FRHAPI_PlayerOrderCreate` <a id="structFRHAPI__PlayerOrderCreate"></a>

```
struct FRHAPI_PlayerOrderCreate
  : public FRHAPI_Model
```

Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreate_1ab01397cfe2bb64ed9a5cdeafe156acef) | The source of the Player Order.
`public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreate_1a838c290f3929beefc7f1654848b17ce2) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreate_1a2592a08e1d12c14e2e777e0186440b18) | Arbitrary UUID clients can use to track Orders between request to response.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ab8c2b6274813dd15856ecba2da059d87) | true if ClientOrderRefId_Optional has been set to a value
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreate_1a4094b4112a76345b0e8614152e8177b6) | Portal of the Portal User the Player Order belongs to.
`public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreate_1add956175eaa66b94492b2723d3004fe2) | true if PortalId_Optional has been set to a value
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreate_1a20e727081a392d86144bd31f90c0bf6a) | Portal User Id for the Player this Player Order belongs to.
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreate_1afdc460887f23d5f25dc5982a72793ec6) | true if PortalUserId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreate_1a19c2e3759e6ba430e310dc1281491263) | Instance Id for the Instance who submits the Player Order.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ae66850004e9a235a4bde068472cce0a9) | true if InstanceId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreate_1a2bb908ecc35275bb2ea2a330c9958dd5) | Match Id for the Match that generated the Player Order.
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ae83258eb513e0b16a9f18e30638fdcf1) | true if MatchId_Optional has been set to a value
`public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreate_1ad7a6636f22052cdb144d62ebe86c391f) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreate_1aa82a27af4ce2fcb1bd63d26dd598b66c) | true if IsTransaction_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreate_1a665741d9a6c4fbd306e8dae1c7e48248) | Unique Identifier for the Order.
`public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ad7da3274ad1427713c8eb31a485e06dd) | true if OrderId_Optional has been set to a value
`public TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > `[`Entries`](#structFRHAPI__PlayerOrderCreate_1a665cd6fdf7a346459f9fc7357e6d4ab7) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreate_1ad566ed46295c64e3d2764af560ab3909)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreate_1aa53b9ada2b9233b510f8b47eb56e3fff)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1ae99633213134d46e95b52cbf824678e2)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1ac7aef4d1069d42efd1bb42cd74b6a729)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1acdd192a19ec73d48eee1eebfd9edf36d)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1ad4f5dec7a3117843a46f4b5c91522706)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreate_1a75d0c77ee67fec50b1634cb4281c6980)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreate_1a73fe28fb44d9af78c28e3ffd8c1de8f0)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreate_1a27bffd794810bd81f5edf1ef23ff8daa)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreate_1a4487bc8ea23246e9013591a42194fd3f)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreate_1a70259a381f0f461bcdbac85c4d3bf580)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreate_1a032009f4fff2006c507451ffc638dd4d)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1aac2e680dc1775a499850341f08d7f104)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a19cb27895604ddd23d76ba00fee00329)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a747625a57ad2b0169a1eb532808ca1bd)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1aa74944fee292e2ee849661212eb89096)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a62975cfb6098e1fc9f064dcb93ad3e2a)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a39c8b0b3a9116a6cb055fb8c98c73e13)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1aa304e09699ca669ad47bbada810ac784)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a44be2a20d03880447865b780fc866c1f)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a915af97c830cd33d8abda95866a7ebf3)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreate_1a6d5220de3e31528d06fb20bd8f6f7352)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a232cf8c20c21dfd3fb13f8b8226cb42b)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a3d3bc2f49979f659387782d43b9b411f)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a103c8b186e3f301fd2d26d6d887f3d89)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a46cbcd4a33f1e2228b8b0ac28e1c7103)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a42b7fddc64b96cef1c4c364a91b82007)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreate_1aa9ed9fd25f425971c35fb1ea5862221d)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreate_1a91ba0e0cdbae374fc7f39607bcf46d33)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreate_1af90dd40f59c637cedf8979e796d653da)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreate_1a16fe446b76a3b5502cc79cb4f9d643e1)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreate_1a71794e2b337a233ed5a15df1fa78e66b)`() const` | Checks whether PortalId_Optional has been set.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1a0f90bf115ebf58e01da6f1eae62e7484)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1a20ed5140991a6fe446820feb6da34237)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1afec923e72fe0108e0507669165790902)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1a72aa90c5b0c2aa4561abf059d58ed28c)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a3acd5744ed54394a76b463245093d50f)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a23c0dc5047fe0e9a2127f35d6e96e09e)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1ad0ead92e16564a72718b38ad82302cf7)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1aa73111b7e893695dc2fbabc60794ed7a)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreate_1abff56483be9fa7fd678d8bc4feb4dd16)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreate_1ace22b7a537d63a3e50c528de1dc74706)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1a22f3ca5e083e52219677ba95d1d0ef4d)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1aa821dcb8b238d4d03bed3a5403fd488f)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1a436d5a46d775f1675d30e91064af8ca7)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1abb22b6c2de42fe18fa1ebcd19f4091c9)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreate_1af007a5619a917e785d4bc68c5fff8375)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a2a494fb385152a037308f694ab775dbf)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreate_1ad5d3e34f1fd4c841d2a7d9bc64e844b6)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreate_1adb841f5416a48db20a6fb039be3faecc)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreate_1a39b05dfb791b3380c83fd4493c82a6fb)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreate_1a8bd2e53e697a6a1739e32a39fd4e925b)`() const` | Checks whether InstanceId_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1a655936b05ce6f33f726fc6c1907ab831)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1a7e00a08970b87d88eabfd9aa1abe8aaf)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1aca0821ebe36f5d8c7878ed007f0b9ec2)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1abfbda3b8f461916645593a3768568a74)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a81a71da870ab7ff73b86fe19f2b65249)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a8cf69a8211f0d813eab3966e100331d1)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreate_1ae57e32950b3506cef240a3ef5a6eb5c5)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreate_1a2bc04968f841f037222e989018012935)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreate_1a8e8119db465f7622c5c3a68dab08cb56)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreate_1a88976cf58d2f0457c890be420243331e)`() const` | Checks whether MatchId_Optional has been set.
`public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a70e582851ec87b34c990f787352f59cf)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1ab230c7a09b9079f767a83d62df5fb028)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1ac978aa22fcf10b783072883d9c789ad3)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1abb4eaae1c02f14cc9f232dd024ec4658)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreate_1a2c636e43237de0b6e94a7e8e14cfd986)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreate_1a9ccf4ca7a1f1a4cd684fda3cbc4a26b0)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a11945a63000bf611dce086932b0f35a1)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a03cd9f78ffdd9521018f16e4ae34adba)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a266c2ddc18c5477280131b6567a2aebe)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreate_1a9f3818f006ba9e71a31fd323e5198c5d)`() const` | Checks whether IsTransaction_Optional has been set.
`public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreate_1a01837ddc3c160401fc70c055d5d0d11a)`() const` | Returns true if IsTransaction_Optional is set and matches the default value.
`public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreate_1ac6741974fb669824cd6cafb2192bc13f)`()` | Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1ac5e12f1b89144cd13d200c1cfb312c58)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1a6bfacc0807df2bc323b54b8f64577961)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1ab03b4c76ece17d558791450d14d1ccd3)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1a07376ac871bcb9dcdd7b2059ff1f0d9e)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreate_1ad0dcc322f3ceec1ff805a10e99afe2be)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreate_1ac0471268ecce1505867d3aa8707b814e)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreate_1a4ba145ff0fc54e2bf79f4b7253797223)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreate_1acd5fd41bef3d41ed74dc981ad43a6068)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreate_1a88af8e9bdc02d5ec5c3614141a75f8d2)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreate_1a978631d1d1cdd1deeb8ca55c76c31665)`() const` | Checks whether OrderId_Optional has been set.
`public inline TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreate_1a27129c20fafa48fe9aa23f581ffb3e48)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreate_1aad3f4f091d6374e85f4571bca005caee)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreate_1add2cc921da86bfb1c69c314a54c2e81f)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreate_1abe2b6f5d4d9b07d025ec5a145d86e471)`(TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreate_1ab01397cfe2bb64ed9a5cdeafe156acef) <a id="structFRHAPI__PlayerOrderCreate_1ab01397cfe2bb64ed9a5cdeafe156acef"></a>

The source of the Player Order.

#### `public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreate_1a838c290f3929beefc7f1654848b17ce2) <a id="structFRHAPI__PlayerOrderCreate_1a838c290f3929beefc7f1654848b17ce2"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreate_1a2592a08e1d12c14e2e777e0186440b18) <a id="structFRHAPI__PlayerOrderCreate_1a2592a08e1d12c14e2e777e0186440b18"></a>

Arbitrary UUID clients can use to track Orders between request to response.

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ab8c2b6274813dd15856ecba2da059d87) <a id="structFRHAPI__PlayerOrderCreate_1ab8c2b6274813dd15856ecba2da059d87"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreate_1a4094b4112a76345b0e8614152e8177b6) <a id="structFRHAPI__PlayerOrderCreate_1a4094b4112a76345b0e8614152e8177b6"></a>

Portal of the Portal User the Player Order belongs to.

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreate_1add956175eaa66b94492b2723d3004fe2) <a id="structFRHAPI__PlayerOrderCreate_1add956175eaa66b94492b2723d3004fe2"></a>

true if PortalId_Optional has been set to a value

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreate_1a20e727081a392d86144bd31f90c0bf6a) <a id="structFRHAPI__PlayerOrderCreate_1a20e727081a392d86144bd31f90c0bf6a"></a>

Portal User Id for the Player this Player Order belongs to.

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreate_1afdc460887f23d5f25dc5982a72793ec6) <a id="structFRHAPI__PlayerOrderCreate_1afdc460887f23d5f25dc5982a72793ec6"></a>

true if PortalUserId_Optional has been set to a value

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreate_1a19c2e3759e6ba430e310dc1281491263) <a id="structFRHAPI__PlayerOrderCreate_1a19c2e3759e6ba430e310dc1281491263"></a>

Instance Id for the Instance who submits the Player Order.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ae66850004e9a235a4bde068472cce0a9) <a id="structFRHAPI__PlayerOrderCreate_1ae66850004e9a235a4bde068472cce0a9"></a>

true if InstanceId_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreate_1a2bb908ecc35275bb2ea2a330c9958dd5) <a id="structFRHAPI__PlayerOrderCreate_1a2bb908ecc35275bb2ea2a330c9958dd5"></a>

Match Id for the Match that generated the Player Order.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ae83258eb513e0b16a9f18e30638fdcf1) <a id="structFRHAPI__PlayerOrderCreate_1ae83258eb513e0b16a9f18e30638fdcf1"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreate_1ad7a6636f22052cdb144d62ebe86c391f) <a id="structFRHAPI__PlayerOrderCreate_1ad7a6636f22052cdb144d62ebe86c391f"></a>

If an order is a transaction, any failed entries will roll back changes from all other entries.

#### `public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreate_1aa82a27af4ce2fcb1bd63d26dd598b66c) <a id="structFRHAPI__PlayerOrderCreate_1aa82a27af4ce2fcb1bd63d26dd598b66c"></a>

true if IsTransaction_Optional has been set to a value

#### `public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreate_1a665741d9a6c4fbd306e8dae1c7e48248) <a id="structFRHAPI__PlayerOrderCreate_1a665741d9a6c4fbd306e8dae1c7e48248"></a>

Unique Identifier for the Order.

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreate_1ad7da3274ad1427713c8eb31a485e06dd) <a id="structFRHAPI__PlayerOrderCreate_1ad7da3274ad1427713c8eb31a485e06dd"></a>

true if OrderId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > `[`Entries`](#structFRHAPI__PlayerOrderCreate_1a665cd6fdf7a346459f9fc7357e6d4ab7) <a id="structFRHAPI__PlayerOrderCreate_1a665cd6fdf7a346459f9fc7357e6d4ab7"></a>

List of Player Order Entries for the Player Order.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreate_1ad566ed46295c64e3d2764af560ab3909)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderCreate_1ad566ed46295c64e3d2764af560ab3909"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreate_1aa53b9ada2b9233b510f8b47eb56e3fff)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderCreate_1aa53b9ada2b9233b510f8b47eb56e3fff"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1ae99633213134d46e95b52cbf824678e2)`()` <a id="structFRHAPI__PlayerOrderCreate_1ae99633213134d46e95b52cbf824678e2"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1ac7aef4d1069d42efd1bb42cd74b6a729)`() const` <a id="structFRHAPI__PlayerOrderCreate_1ac7aef4d1069d42efd1bb42cd74b6a729"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1acdd192a19ec73d48eee1eebfd9edf36d)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1acdd192a19ec73d48eee1eebfd9edf36d"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreate_1ad4f5dec7a3117843a46f4b5c91522706)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1ad4f5dec7a3117843a46f4b5c91522706"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreate_1a75d0c77ee67fec50b1634cb4281c6980)`()` <a id="structFRHAPI__PlayerOrderCreate_1a75d0c77ee67fec50b1634cb4281c6980"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreate_1a73fe28fb44d9af78c28e3ffd8c1de8f0)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a73fe28fb44d9af78c28e3ffd8c1de8f0"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreate_1a27bffd794810bd81f5edf1ef23ff8daa)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a27bffd794810bd81f5edf1ef23ff8daa"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreate_1a4487bc8ea23246e9013591a42194fd3f)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a4487bc8ea23246e9013591a42194fd3f"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreate_1a70259a381f0f461bcdbac85c4d3bf580)`()` <a id="structFRHAPI__PlayerOrderCreate_1a70259a381f0f461bcdbac85c4d3bf580"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreate_1a032009f4fff2006c507451ffc638dd4d)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a032009f4fff2006c507451ffc638dd4d"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1aac2e680dc1775a499850341f08d7f104)`()` <a id="structFRHAPI__PlayerOrderCreate_1aac2e680dc1775a499850341f08d7f104"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a19cb27895604ddd23d76ba00fee00329)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a19cb27895604ddd23d76ba00fee00329"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a747625a57ad2b0169a1eb532808ca1bd)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1a747625a57ad2b0169a1eb532808ca1bd"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1aa74944fee292e2ee849661212eb89096)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1aa74944fee292e2ee849661212eb89096"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a62975cfb6098e1fc9f064dcb93ad3e2a)`()` <a id="structFRHAPI__PlayerOrderCreate_1a62975cfb6098e1fc9f064dcb93ad3e2a"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a39c8b0b3a9116a6cb055fb8c98c73e13)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a39c8b0b3a9116a6cb055fb8c98c73e13"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1aa304e09699ca669ad47bbada810ac784)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1aa304e09699ca669ad47bbada810ac784"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a44be2a20d03880447865b780fc866c1f)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a44be2a20d03880447865b780fc866c1f"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreate_1a915af97c830cd33d8abda95866a7ebf3)`()` <a id="structFRHAPI__PlayerOrderCreate_1a915af97c830cd33d8abda95866a7ebf3"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreate_1a6d5220de3e31528d06fb20bd8f6f7352)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a6d5220de3e31528d06fb20bd8f6f7352"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a232cf8c20c21dfd3fb13f8b8226cb42b)`()` <a id="structFRHAPI__PlayerOrderCreate_1a232cf8c20c21dfd3fb13f8b8226cb42b"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a3d3bc2f49979f659387782d43b9b411f)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a3d3bc2f49979f659387782d43b9b411f"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a103c8b186e3f301fd2d26d6d887f3d89)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1a103c8b186e3f301fd2d26d6d887f3d89"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreate_1a46cbcd4a33f1e2228b8b0ac28e1c7103)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1a46cbcd4a33f1e2228b8b0ac28e1c7103"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a42b7fddc64b96cef1c4c364a91b82007)`()` <a id="structFRHAPI__PlayerOrderCreate_1a42b7fddc64b96cef1c4c364a91b82007"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreate_1aa9ed9fd25f425971c35fb1ea5862221d)`() const` <a id="structFRHAPI__PlayerOrderCreate_1aa9ed9fd25f425971c35fb1ea5862221d"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreate_1a91ba0e0cdbae374fc7f39607bcf46d33)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a91ba0e0cdbae374fc7f39607bcf46d33"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreate_1af90dd40f59c637cedf8979e796d653da)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1af90dd40f59c637cedf8979e796d653da"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreate_1a16fe446b76a3b5502cc79cb4f9d643e1)`()` <a id="structFRHAPI__PlayerOrderCreate_1a16fe446b76a3b5502cc79cb4f9d643e1"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreate_1a71794e2b337a233ed5a15df1fa78e66b)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a71794e2b337a233ed5a15df1fa78e66b"></a>

Checks whether PortalId_Optional has been set.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1a0f90bf115ebf58e01da6f1eae62e7484)`()` <a id="structFRHAPI__PlayerOrderCreate_1a0f90bf115ebf58e01da6f1eae62e7484"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1a20ed5140991a6fe446820feb6da34237)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a20ed5140991a6fe446820feb6da34237"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1afec923e72fe0108e0507669165790902)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1afec923e72fe0108e0507669165790902"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1a72aa90c5b0c2aa4561abf059d58ed28c)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1a72aa90c5b0c2aa4561abf059d58ed28c"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a3acd5744ed54394a76b463245093d50f)`()` <a id="structFRHAPI__PlayerOrderCreate_1a3acd5744ed54394a76b463245093d50f"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a23c0dc5047fe0e9a2127f35d6e96e09e)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a23c0dc5047fe0e9a2127f35d6e96e09e"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1ad0ead92e16564a72718b38ad82302cf7)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1ad0ead92e16564a72718b38ad82302cf7"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreate_1aa73111b7e893695dc2fbabc60794ed7a)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1aa73111b7e893695dc2fbabc60794ed7a"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreate_1abff56483be9fa7fd678d8bc4feb4dd16)`()` <a id="structFRHAPI__PlayerOrderCreate_1abff56483be9fa7fd678d8bc4feb4dd16"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreate_1ace22b7a537d63a3e50c528de1dc74706)`() const` <a id="structFRHAPI__PlayerOrderCreate_1ace22b7a537d63a3e50c528de1dc74706"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1a22f3ca5e083e52219677ba95d1d0ef4d)`()` <a id="structFRHAPI__PlayerOrderCreate_1a22f3ca5e083e52219677ba95d1d0ef4d"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1aa821dcb8b238d4d03bed3a5403fd488f)`() const` <a id="structFRHAPI__PlayerOrderCreate_1aa821dcb8b238d4d03bed3a5403fd488f"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1a436d5a46d775f1675d30e91064af8ca7)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1a436d5a46d775f1675d30e91064af8ca7"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreate_1abb22b6c2de42fe18fa1ebcd19f4091c9)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1abb22b6c2de42fe18fa1ebcd19f4091c9"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreate_1af007a5619a917e785d4bc68c5fff8375)`()` <a id="structFRHAPI__PlayerOrderCreate_1af007a5619a917e785d4bc68c5fff8375"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a2a494fb385152a037308f694ab775dbf)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a2a494fb385152a037308f694ab775dbf"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreate_1ad5d3e34f1fd4c841d2a7d9bc64e844b6)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1ad5d3e34f1fd4c841d2a7d9bc64e844b6"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreate_1adb841f5416a48db20a6fb039be3faecc)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1adb841f5416a48db20a6fb039be3faecc"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreate_1a39b05dfb791b3380c83fd4493c82a6fb)`()` <a id="structFRHAPI__PlayerOrderCreate_1a39b05dfb791b3380c83fd4493c82a6fb"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreate_1a8bd2e53e697a6a1739e32a39fd4e925b)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a8bd2e53e697a6a1739e32a39fd4e925b"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1a655936b05ce6f33f726fc6c1907ab831)`()` <a id="structFRHAPI__PlayerOrderCreate_1a655936b05ce6f33f726fc6c1907ab831"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1a7e00a08970b87d88eabfd9aa1abe8aaf)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a7e00a08970b87d88eabfd9aa1abe8aaf"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1aca0821ebe36f5d8c7878ed007f0b9ec2)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1aca0821ebe36f5d8c7878ed007f0b9ec2"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreate_1abfbda3b8f461916645593a3768568a74)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1abfbda3b8f461916645593a3768568a74"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a81a71da870ab7ff73b86fe19f2b65249)`()` <a id="structFRHAPI__PlayerOrderCreate_1a81a71da870ab7ff73b86fe19f2b65249"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreate_1a8cf69a8211f0d813eab3966e100331d1)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a8cf69a8211f0d813eab3966e100331d1"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreate_1ae57e32950b3506cef240a3ef5a6eb5c5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1ae57e32950b3506cef240a3ef5a6eb5c5"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreate_1a2bc04968f841f037222e989018012935)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a2bc04968f841f037222e989018012935"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreate_1a8e8119db465f7622c5c3a68dab08cb56)`()` <a id="structFRHAPI__PlayerOrderCreate_1a8e8119db465f7622c5c3a68dab08cb56"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreate_1a88976cf58d2f0457c890be420243331e)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a88976cf58d2f0457c890be420243331e"></a>

Checks whether MatchId_Optional has been set.

#### `public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a70e582851ec87b34c990f787352f59cf)`()` <a id="structFRHAPI__PlayerOrderCreate_1a70e582851ec87b34c990f787352f59cf"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1ab230c7a09b9079f767a83d62df5fb028)`() const` <a id="structFRHAPI__PlayerOrderCreate_1ab230c7a09b9079f767a83d62df5fb028"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1ac978aa22fcf10b783072883d9c789ad3)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1ac978aa22fcf10b783072883d9c789ad3"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1abb4eaae1c02f14cc9f232dd024ec4658)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1abb4eaae1c02f14cc9f232dd024ec4658"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreate_1a2c636e43237de0b6e94a7e8e14cfd986)`()` <a id="structFRHAPI__PlayerOrderCreate_1a2c636e43237de0b6e94a7e8e14cfd986"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreate_1a9ccf4ca7a1f1a4cd684fda3cbc4a26b0)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a9ccf4ca7a1f1a4cd684fda3cbc4a26b0"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a11945a63000bf611dce086932b0f35a1)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a11945a63000bf611dce086932b0f35a1"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a03cd9f78ffdd9521018f16e4ae34adba)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a03cd9f78ffdd9521018f16e4ae34adba"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreate_1a266c2ddc18c5477280131b6567a2aebe)`()` <a id="structFRHAPI__PlayerOrderCreate_1a266c2ddc18c5477280131b6567a2aebe"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreate_1a9f3818f006ba9e71a31fd323e5198c5d)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a9f3818f006ba9e71a31fd323e5198c5d"></a>

Checks whether IsTransaction_Optional has been set.

#### `public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreate_1a01837ddc3c160401fc70c055d5d0d11a)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a01837ddc3c160401fc70c055d5d0d11a"></a>

Returns true if IsTransaction_Optional is set and matches the default value.

#### `public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreate_1ac6741974fb669824cd6cafb2192bc13f)`()` <a id="structFRHAPI__PlayerOrderCreate_1ac6741974fb669824cd6cafb2192bc13f"></a>

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1ac5e12f1b89144cd13d200c1cfb312c58)`()` <a id="structFRHAPI__PlayerOrderCreate_1ac5e12f1b89144cd13d200c1cfb312c58"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1a6bfacc0807df2bc323b54b8f64577961)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a6bfacc0807df2bc323b54b8f64577961"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1ab03b4c76ece17d558791450d14d1ccd3)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreate_1ab03b4c76ece17d558791450d14d1ccd3"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreate_1a07376ac871bcb9dcdd7b2059ff1f0d9e)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreate_1a07376ac871bcb9dcdd7b2059ff1f0d9e"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreate_1ad0dcc322f3ceec1ff805a10e99afe2be)`()` <a id="structFRHAPI__PlayerOrderCreate_1ad0dcc322f3ceec1ff805a10e99afe2be"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreate_1ac0471268ecce1505867d3aa8707b814e)`() const` <a id="structFRHAPI__PlayerOrderCreate_1ac0471268ecce1505867d3aa8707b814e"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreate_1a4ba145ff0fc54e2bf79f4b7253797223)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1a4ba145ff0fc54e2bf79f4b7253797223"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreate_1acd5fd41bef3d41ed74dc981ad43a6068)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1acd5fd41bef3d41ed74dc981ad43a6068"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreate_1a88af8e9bdc02d5ec5c3614141a75f8d2)`()` <a id="structFRHAPI__PlayerOrderCreate_1a88af8e9bdc02d5ec5c3614141a75f8d2"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreate_1a978631d1d1cdd1deeb8ca55c76c31665)`() const` <a id="structFRHAPI__PlayerOrderCreate_1a978631d1d1cdd1deeb8ca55c76c31665"></a>

Checks whether OrderId_Optional has been set.

#### `public inline TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreate_1a27129c20fafa48fe9aa23f581ffb3e48)`()` <a id="structFRHAPI__PlayerOrderCreate_1a27129c20fafa48fe9aa23f581ffb3e48"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreate_1aad3f4f091d6374e85f4571bca005caee)`() const` <a id="structFRHAPI__PlayerOrderCreate_1aad3f4f091d6374e85f4571bca005caee"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreate_1add2cc921da86bfb1c69c314a54c2e81f)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1add2cc921da86bfb1c69c314a54c2e81f"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreate_1abe2b6f5d4d9b07d025ec5a145d86e471)`(TArray< `[`FRHAPI_PlayerOrderEntryCreate`](RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreate_1abe2b6f5d4d9b07d025ec5a145d86e471"></a>

Sets the value of Entries using move semantics.

