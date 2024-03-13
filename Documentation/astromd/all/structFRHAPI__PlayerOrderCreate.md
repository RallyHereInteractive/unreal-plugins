---
title: FRHAPI_PlayerOrderCreate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Source|[Source_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ab01397cfe2bb64ed9a5cdeafe156acef)|The source of the Player Order.|
|bool|[Source_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a838c290f3929beefc7f1654848b17ce2)|true if Source_Optional has been set to a value|
|FGuid|[ClientOrderRefId_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a2592a08e1d12c14e2e777e0186440b18)|Arbitrary UUID clients can use to track Orders between request to response.|
|bool|[ClientOrderRefId_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ab8c2b6274813dd15856ecba2da059d87)|true if ClientOrderRefId_Optional has been set to a value|
|ERHAPI_InventoryPortal|[PortalId_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a402c72866c8914e4e509c05e308678b7)|Portal of the Portal User the Player Order belongs to.|
|bool|[PortalId_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1add956175eaa66b94492b2723d3004fe2)|true if PortalId_Optional has been set to a value|
|FString|[PortalUserId_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a20e727081a392d86144bd31f90c0bf6a)|Portal User Id for the Player this Player Order belongs to.|
|bool|[PortalUserId_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1afdc460887f23d5f25dc5982a72793ec6)|true if PortalUserId_Optional has been set to a value|
|FString|[InstanceId_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a19c2e3759e6ba430e310dc1281491263)|Instance Id for the Instance who submits the Player Order.|
|bool|[InstanceId_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ae66850004e9a235a4bde068472cce0a9)|true if InstanceId_Optional has been set to a value|
|FString|[MatchId_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a2bb908ecc35275bb2ea2a330c9958dd5)|Match Id for the Match that generated the Player Order.|
|bool|[MatchId_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ae83258eb513e0b16a9f18e30638fdcf1)|true if MatchId_Optional has been set to a value|
|bool|[IsTransaction_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ad7a6636f22052cdb144d62ebe86c391f)|If an order is a transaction, any failed entries will roll back changes from all other entries.|
|bool|[IsTransaction_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aa82a27af4ce2fcb1bd63d26dd598b66c)|true if IsTransaction_Optional has been set to a value|
|FString|[OrderId_Optional](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a665741d9a6c4fbd306e8dae1c7e48248)|Unique Identifier for the Order.|
|bool|[OrderId_IsSet](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ad7da3274ad1427713c8eb31a485e06dd)|true if OrderId_Optional has been set to a value|
|TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) >|[Entries](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a665cd6fdf7a346459f9fc7357e6d4ab7)|List of Player Order Entries for the Player Order.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a20dd66761c5c9ef52d31f57b37280dd8)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ac03f8fb2de8e754e030c24927a39c736)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aa31d422ecc06ec4fa2b75b6e5cf47af6)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a24564df9fb4b5bd0d8ea60c08f532e9b)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1abd92923874832689e56aa3d58c8c28ab)(const ERHAPI_Source & DefaultValue)|Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSource](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ad4f5dec7a3117843a46f4b5c91522706)(ERHAPI_Source & OutValue)|Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ae50f0f8f0782185028369f38be012589)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a410b11247c825159a004c3cca7175c11)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSource](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aa6dae803f2bf159acc00fdced75897c7)(ERHAPI_Source NewValue)|Sets the value of Source_Optional and also sets Source_IsSet to true.|
|void|[ClearSource](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a70259a381f0f461bcdbac85c4d3bf580)()|Clears the value of Source_Optional and sets Source_IsSet to false.|
|FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a80f5c847b56bbcaa87eac51754da0b73)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a49311a101131a5ebddcf1a41e665c957)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a7264b0885e0d46ff7c8094f76cd42eb4)(const FGuid & DefaultValue)|Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aa74944fee292e2ee849661212eb89096)(FGuid & OutValue)|Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1abd08d32fd94228bc7360d4c01b4de7fc)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a634cebd69b9da3526348a43e6a45c36a)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a6cd856895032dd1b1545c2fd89db238f)(FGuid NewValue)|Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.|
|void|[ClearClientOrderRefId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a915af97c830cd33d8abda95866a7ebf3)()|Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.|
|ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a5a01fad460ab9b7ac4e51738e6a5b22f)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ac3d5c913d0262558cedd5d8439401a49)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1afbef5298ade9fea7f87c27cea2238aff)(const ERHAPI_InventoryPortal & DefaultValue)|Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aa304c80214d94483cc3595368be24367)(ERHAPI_InventoryPortal & OutValue)|Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1accf8e5b187ab7a7d8a4129ece1bba5b6)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ad95835d62fbce1a345e0b071ff6a2fe4)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a74651823a1bed1b58b14bd2b486985e9)(ERHAPI_InventoryPortal NewValue)|Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.|
|void|[ClearPortalId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a16fe446b76a3b5502cc79cb4f9d643e1)()|Clears the value of PortalId_Optional and sets PortalId_IsSet to false.|
|FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ae72c39c73d34c432b83235010450a1c7)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ab3d6fce75f63390f7d32634a41e30559)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a136f7f8c077226dea10dd97bb327da49)(const FString & DefaultValue)|Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a72aa90c5b0c2aa4561abf059d58ed28c)(FString & OutValue)|Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1afe65abda5a4866c73bd6233c1eac8534)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aff5aa274255aa8c9a4431675391a91c8)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalUserId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a9296abb8c0c6b204d472f178c71225dc)(FString NewValue)|Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.|
|void|[ClearPortalUserId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1abff56483be9fa7fd678d8bc4feb4dd16)()|Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a5948ec29fba0595016d22aa4ff0a85f6)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1afa4e063e53c1d5e37edea790b4fa1cd8)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a557185ff44028184367de62cf32b6309)(const FString & DefaultValue)|Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1abb22b6c2de42fe18fa1ebcd19f4091c9)(FString & OutValue)|Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a234995fac0370bae1dfe0f967470ee63)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a75c846f0b0705730f292db2aeb056cd8)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1af6bafa13676e13641d1e5dc7e794992e)(FString NewValue)|Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.|
|void|[ClearInstanceId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a39b05dfb791b3380c83fd4493c82a6fb)()|Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.|
|FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a769a7a709e545e09d38bb9d2534e2451)()|Gets the value of MatchId_Optional, regardless of it having been set.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a00cec5832419772ebd89ba7ad4d36a68)()|Gets the value of MatchId_Optional, regardless of it having been set.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a35ade7908a6de93affe3d91df12d5ab0)(const FString & DefaultValue)|Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatchId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1abfbda3b8f461916645593a3768568a74)(FString & OutValue)|Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMatchIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a6b8d10b654e92166da526751ce4dbb6b)()|Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMatchIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1afb46003523d8ff655165d5dd40caae5f)()|Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatchId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a706fb822c51ad21efd93de515ab82eed)(FString NewValue)|Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.|
|void|[ClearMatchId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a8e8119db465f7622c5c3a68dab08cb56)()|Clears the value of MatchId_Optional and sets MatchId_IsSet to false.|
|bool &|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ad50ec3fcd6df930cdee0d244f02a02d0)()|Gets the value of IsTransaction_Optional, regardless of it having been set.|
|const bool &|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a3292678ab1b9062530e19ecae6cf974c)()|Gets the value of IsTransaction_Optional, regardless of it having been set.|
|const bool &|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a93e4b4cb1b69ec59be6927b5e909fcef)(const bool & DefaultValue)|Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1abb4eaae1c02f14cc9f232dd024ec4658)(bool & OutValue)|Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetIsTransactionOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a6c53c49be931d2fb300130de76ba57f0)()|Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetIsTransactionOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1aaa8573631ca1f97432c7c1222e9ff4db)()|Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIsTransaction](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a49388e9146dd388b6efb51923689032a)(bool NewValue)|Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.|
|void|[ClearIsTransaction](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a266c2ddc18c5477280131b6567a2aebe)()|Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.|
|bool|[IsIsTransactionDefaultValue](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a01837ddc3c160401fc70c055d5d0d11a)()|Returns true if IsTransaction_Optional is set and matches the default value.|
|void|[SetIsTransactionToDefault](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ac6741974fb669824cd6cafb2192bc13f)()|Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.|
|FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a7a6f19e3d51020b239161ff1a3b798cd)()|Gets the value of OrderId_Optional, regardless of it having been set.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1ab5cae38225fbc9f3c6449f6d9a2773b8)()|Gets the value of OrderId_Optional, regardless of it having been set.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a9fcab5e5f405219b6e5ce0c0cd69d08f)(const FString & DefaultValue)|Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetOrderId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a07376ac871bcb9dcdd7b2059ff1f0d9e)(FString & OutValue)|Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetOrderIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a90bcc21360a03096b7dc4fa785c6107e)()|Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetOrderIdOrNull](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a90236493e48e12ca1885ae4be72b51bb)()|Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetOrderId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a7e9812784039fdd7fb23c8c27a37b672)(FString NewValue)|Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.|
|void|[ClearOrderId](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a88af8e9bdc02d5ec5c3614141a75f8d2)()|Clears the value of OrderId_Optional and sets OrderId_IsSet to false.|
|TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > &|[GetEntries](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a04866e0d8557d0d029275258cff28009)()|Gets the value of Entries.|
|const TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > &|[GetEntries](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a59d30bb8ac929176b0dd2c3b5ebbce1c)()|Gets the value of Entries.|
|void|[SetEntries](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate_1a3f9e2c60c88c52a0456340871e3caafe)(TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > NewValue)|Sets the value of Entries.|
## Public Attributes



### `Source_Optional` <a id="structFRHAPI__PlayerOrderCreate_1ab01397cfe2bb64ed9a5cdeafe156acef"></a>

`ERHAPI_Source FRHAPI_PlayerOrderCreate::Source_Optional`

The source of the Player Order.




### `Source_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1a838c290f3929beefc7f1654848b17ce2"></a>

`bool FRHAPI_PlayerOrderCreate::Source_IsSet`

true if Source_Optional has been set to a value




### `ClientOrderRefId_Optional` <a id="structFRHAPI__PlayerOrderCreate_1a2592a08e1d12c14e2e777e0186440b18"></a>

`FGuid FRHAPI_PlayerOrderCreate::ClientOrderRefId_Optional`

Arbitrary UUID clients can use to track Orders between request to response.




### `ClientOrderRefId_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1ab8c2b6274813dd15856ecba2da059d87"></a>

`bool FRHAPI_PlayerOrderCreate::ClientOrderRefId_IsSet`

true if ClientOrderRefId_Optional has been set to a value




### `PortalId_Optional` <a id="structFRHAPI__PlayerOrderCreate_1a402c72866c8914e4e509c05e308678b7"></a>

`ERHAPI_InventoryPortal FRHAPI_PlayerOrderCreate::PortalId_Optional`

Portal of the Portal User the Player Order belongs to.




### `PortalId_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1add956175eaa66b94492b2723d3004fe2"></a>

`bool FRHAPI_PlayerOrderCreate::PortalId_IsSet`

true if PortalId_Optional has been set to a value




### `PortalUserId_Optional` <a id="structFRHAPI__PlayerOrderCreate_1a20e727081a392d86144bd31f90c0bf6a"></a>

`FString FRHAPI_PlayerOrderCreate::PortalUserId_Optional`

Portal User Id for the Player this Player Order belongs to.




### `PortalUserId_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1afdc460887f23d5f25dc5982a72793ec6"></a>

`bool FRHAPI_PlayerOrderCreate::PortalUserId_IsSet`

true if PortalUserId_Optional has been set to a value




### `InstanceId_Optional` <a id="structFRHAPI__PlayerOrderCreate_1a19c2e3759e6ba430e310dc1281491263"></a>

`FString FRHAPI_PlayerOrderCreate::InstanceId_Optional`

Instance Id for the Instance who submits the Player Order.




### `InstanceId_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1ae66850004e9a235a4bde068472cce0a9"></a>

`bool FRHAPI_PlayerOrderCreate::InstanceId_IsSet`

true if InstanceId_Optional has been set to a value




### `MatchId_Optional` <a id="structFRHAPI__PlayerOrderCreate_1a2bb908ecc35275bb2ea2a330c9958dd5"></a>

`FString FRHAPI_PlayerOrderCreate::MatchId_Optional`

Match Id for the Match that generated the Player Order.




### `MatchId_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1ae83258eb513e0b16a9f18e30638fdcf1"></a>

`bool FRHAPI_PlayerOrderCreate::MatchId_IsSet`

true if MatchId_Optional has been set to a value




### `IsTransaction_Optional` <a id="structFRHAPI__PlayerOrderCreate_1ad7a6636f22052cdb144d62ebe86c391f"></a>

`bool FRHAPI_PlayerOrderCreate::IsTransaction_Optional`

If an order is a transaction, any failed entries will roll back changes from all other entries.




### `IsTransaction_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1aa82a27af4ce2fcb1bd63d26dd598b66c"></a>

`bool FRHAPI_PlayerOrderCreate::IsTransaction_IsSet`

true if IsTransaction_Optional has been set to a value




### `OrderId_Optional` <a id="structFRHAPI__PlayerOrderCreate_1a665741d9a6c4fbd306e8dae1c7e48248"></a>

`FString FRHAPI_PlayerOrderCreate::OrderId_Optional`

Unique Identifier for the Order.




### `OrderId_IsSet` <a id="structFRHAPI__PlayerOrderCreate_1ad7da3274ad1427713c8eb31a485e06dd"></a>

`bool FRHAPI_PlayerOrderCreate::OrderId_IsSet`

true if OrderId_Optional has been set to a value




### `Entries` <a id="structFRHAPI__PlayerOrderCreate_1a665cd6fdf7a346459f9fc7357e6d4ab7"></a>

`TArray<FRHAPI_PlayerOrderEntryCreate> FRHAPI_PlayerOrderCreate::Entries`

List of Player Order Entries for the Player Order.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerOrderCreate_1a20dd66761c5c9ef52d31f57b37280dd8"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerOrderCreate_1ac03f8fb2de8e754e030c24927a39c736"></a>

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



### `GetSource` <a id="structFRHAPI__PlayerOrderCreate_1aa31d422ecc06ec4fa2b75b6e5cf47af6"></a>

ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__PlayerOrderCreate_1a24564df9fb4b5bd0d8ea60c08f532e9b"></a>

const ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__PlayerOrderCreate_1abd92923874832689e56aa3d58c8c28ab"></a>

const ERHAPI_Source & GetSource(const ERHAPI_Source & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|DefaultValue|

#### Description

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSource` <a id="structFRHAPI__PlayerOrderCreate_1ad4f5dec7a3117843a46f4b5c91522706"></a>

bool GetSource(ERHAPI_Source & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source &|OutValue|

#### Description

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.




### `GetSourceOrNull` <a id="structFRHAPI__PlayerOrderCreate_1ae50f0f8f0782185028369f38be012589"></a>

ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `GetSourceOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a410b11247c825159a004c3cca7175c11"></a>

const ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `SetSource` <a id="structFRHAPI__PlayerOrderCreate_1aa6dae803f2bf159acc00fdced75897c7"></a>

void SetSource(ERHAPI_Source NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|NewValue|

#### Description

Sets the value of Source_Optional and also sets Source_IsSet to true.




### `ClearSource` <a id="structFRHAPI__PlayerOrderCreate_1a70259a381f0f461bcdbac85c4d3bf580"></a>

void ClearSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Source_Optional and sets Source_IsSet to false.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrderCreate_1a80f5c847b56bbcaa87eac51754da0b73"></a>

FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrderCreate_1a49311a101131a5ebddcf1a41e665c957"></a>

const FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrderCreate_1a7264b0885e0d46ff7c8094f76cd42eb4"></a>

const FGuid & GetClientOrderRefId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrderCreate_1aa74944fee292e2ee849661212eb89096"></a>

bool GetClientOrderRefId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1abd08d32fd94228bc7360d4c01b4de7fc"></a>

FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a634cebd69b9da3526348a43e6a45c36a"></a>

const FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `SetClientOrderRefId` <a id="structFRHAPI__PlayerOrderCreate_1a6cd856895032dd1b1545c2fd89db238f"></a>

void SetClientOrderRefId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.




### `ClearClientOrderRefId` <a id="structFRHAPI__PlayerOrderCreate_1a915af97c830cd33d8abda95866a7ebf3"></a>

void ClearClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.




### `GetPortalId` <a id="structFRHAPI__PlayerOrderCreate_1a5a01fad460ab9b7ac4e51738e6a5b22f"></a>

ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__PlayerOrderCreate_1ac3d5c913d0262558cedd5d8439401a49"></a>

const ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__PlayerOrderCreate_1afbef5298ade9fea7f87c27cea2238aff"></a>

const ERHAPI_InventoryPortal & GetPortalId(const ERHAPI_InventoryPortal & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryPortal &|DefaultValue|

#### Description

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalId` <a id="structFRHAPI__PlayerOrderCreate_1aa304c80214d94483cc3595368be24367"></a>

bool GetPortalId(ERHAPI_InventoryPortal & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal &|OutValue|

#### Description

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1accf8e5b187ab7a7d8a4129ece1bba5b6"></a>

ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1ad95835d62fbce1a345e0b071ff6a2fe4"></a>

const ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalId` <a id="structFRHAPI__PlayerOrderCreate_1a74651823a1bed1b58b14bd2b486985e9"></a>

void SetPortalId(ERHAPI_InventoryPortal NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal|NewValue|

#### Description

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.




### `ClearPortalId` <a id="structFRHAPI__PlayerOrderCreate_1a16fe446b76a3b5502cc79cb4f9d643e1"></a>

void ClearPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrderCreate_1ae72c39c73d34c432b83235010450a1c7"></a>

FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrderCreate_1ab3d6fce75f63390f7d32634a41e30559"></a>

const FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrderCreate_1a136f7f8c077226dea10dd97bb327da49"></a>

const FString & GetPortalUserId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrderCreate_1a72aa90c5b0c2aa4561abf059d58ed28c"></a>

bool GetPortalUserId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1afe65abda5a4866c73bd6233c1eac8534"></a>

FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1aff5aa274255aa8c9a4431675391a91c8"></a>

const FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalUserId` <a id="structFRHAPI__PlayerOrderCreate_1a9296abb8c0c6b204d472f178c71225dc"></a>

void SetPortalUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.




### `ClearPortalUserId` <a id="structFRHAPI__PlayerOrderCreate_1abff56483be9fa7fd678d8bc4feb4dd16"></a>

void ClearPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrderCreate_1a5948ec29fba0595016d22aa4ff0a85f6"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrderCreate_1afa4e063e53c1d5e37edea790b4fa1cd8"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrderCreate_1a557185ff44028184367de62cf32b6309"></a>

const FString & GetInstanceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrderCreate_1abb22b6c2de42fe18fa1ebcd19f4091c9"></a>

bool GetInstanceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a234995fac0370bae1dfe0f967470ee63"></a>

FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a75c846f0b0705730f292db2aeb056cd8"></a>

const FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceId` <a id="structFRHAPI__PlayerOrderCreate_1af6bafa13676e13641d1e5dc7e794992e"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.




### `ClearInstanceId` <a id="structFRHAPI__PlayerOrderCreate_1a39b05dfb791b3380c83fd4493c82a6fb"></a>

void ClearInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.




### `GetMatchId` <a id="structFRHAPI__PlayerOrderCreate_1a769a7a709e545e09d38bb9d2534e2451"></a>

FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId_Optional, regardless of it having been set.




### `GetMatchId` <a id="structFRHAPI__PlayerOrderCreate_1a00cec5832419772ebd89ba7ad4d36a68"></a>

const FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId_Optional, regardless of it having been set.




### `GetMatchId` <a id="structFRHAPI__PlayerOrderCreate_1a35ade7908a6de93affe3d91df12d5ab0"></a>

const FString & GetMatchId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatchId` <a id="structFRHAPI__PlayerOrderCreate_1abfbda3b8f461916645593a3768568a74"></a>

bool GetMatchId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a6b8d10b654e92166da526751ce4dbb6b"></a>

FString * GetMatchIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1afb46003523d8ff655165d5dd40caae5f"></a>

const FString * GetMatchIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.




### `SetMatchId` <a id="structFRHAPI__PlayerOrderCreate_1a706fb822c51ad21efd93de515ab82eed"></a>

void SetMatchId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.




### `ClearMatchId` <a id="structFRHAPI__PlayerOrderCreate_1a8e8119db465f7622c5c3a68dab08cb56"></a>

void ClearMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrderCreate_1ad50ec3fcd6df930cdee0d244f02a02d0"></a>

bool & GetIsTransaction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IsTransaction_Optional, regardless of it having been set.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrderCreate_1a3292678ab1b9062530e19ecae6cf974c"></a>

const bool & GetIsTransaction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IsTransaction_Optional, regardless of it having been set.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrderCreate_1a93e4b4cb1b69ec59be6927b5e909fcef"></a>

const bool & GetIsTransaction(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrderCreate_1abb4eaae1c02f14cc9f232dd024ec4658"></a>

bool GetIsTransaction(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.




### `GetIsTransactionOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a6c53c49be931d2fb300130de76ba57f0"></a>

bool * GetIsTransactionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.




### `GetIsTransactionOrNull` <a id="structFRHAPI__PlayerOrderCreate_1aaa8573631ca1f97432c7c1222e9ff4db"></a>

const bool * GetIsTransactionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.




### `SetIsTransaction` <a id="structFRHAPI__PlayerOrderCreate_1a49388e9146dd388b6efb51923689032a"></a>

void SetIsTransaction(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.




### `ClearIsTransaction` <a id="structFRHAPI__PlayerOrderCreate_1a266c2ddc18c5477280131b6567a2aebe"></a>

void ClearIsTransaction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.




### `IsIsTransactionDefaultValue` <a id="structFRHAPI__PlayerOrderCreate_1a01837ddc3c160401fc70c055d5d0d11a"></a>

bool IsIsTransactionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if IsTransaction_Optional is set and matches the default value.




### `SetIsTransactionToDefault` <a id="structFRHAPI__PlayerOrderCreate_1ac6741974fb669824cd6cafb2192bc13f"></a>

void SetIsTransactionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.




### `GetOrderId` <a id="structFRHAPI__PlayerOrderCreate_1a7a6f19e3d51020b239161ff1a3b798cd"></a>

FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId_Optional, regardless of it having been set.




### `GetOrderId` <a id="structFRHAPI__PlayerOrderCreate_1ab5cae38225fbc9f3c6449f6d9a2773b8"></a>

const FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId_Optional, regardless of it having been set.




### `GetOrderId` <a id="structFRHAPI__PlayerOrderCreate_1a9fcab5e5f405219b6e5ce0c0cd69d08f"></a>

const FString & GetOrderId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetOrderId` <a id="structFRHAPI__PlayerOrderCreate_1a07376ac871bcb9dcdd7b2059ff1f0d9e"></a>

bool GetOrderId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.




### `GetOrderIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a90bcc21360a03096b7dc4fa785c6107e"></a>

FString * GetOrderIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.




### `GetOrderIdOrNull` <a id="structFRHAPI__PlayerOrderCreate_1a90236493e48e12ca1885ae4be72b51bb"></a>

const FString * GetOrderIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.




### `SetOrderId` <a id="structFRHAPI__PlayerOrderCreate_1a7e9812784039fdd7fb23c8c27a37b672"></a>

void SetOrderId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.




### `ClearOrderId` <a id="structFRHAPI__PlayerOrderCreate_1a88af8e9bdc02d5ec5c3614141a75f8d2"></a>

void ClearOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.




### `GetEntries` <a id="structFRHAPI__PlayerOrderCreate_1a04866e0d8557d0d029275258cff28009"></a>

TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > & GetEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Entries.




### `GetEntries` <a id="structFRHAPI__PlayerOrderCreate_1a59d30bb8ac929176b0dd2c3b5ebbce1c"></a>

const TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > & GetEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Entries.




### `SetEntries` <a id="structFRHAPI__PlayerOrderCreate_1a3f9e2c60c88c52a0456340871e3caafe"></a>

void SetEntries(TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) >|NewValue|

#### Description

Sets the value of Entries.





