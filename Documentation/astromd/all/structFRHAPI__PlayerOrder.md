---
title: FRHAPI_PlayerOrder Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Represents a Player Order.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Source|[Source_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11)|The source of the Player Order.|
|bool|[Source_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b)|true if Source_Optional has been set to a value|
|FGuid|[ClientOrderRefId_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e)|Arbitrary UUID clients can use to track Orders between request to response.|
|bool|[ClientOrderRefId_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab)|true if ClientOrderRefId_Optional has been set to a value|
|ERHAPI_InventoryPortal|[PortalId_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aec69f2f62a21de46c0d865395951b6cc)|Portal of the Portal User the Player Order belongs to.|
|bool|[PortalId_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5)|true if PortalId_Optional has been set to a value|
|FString|[PortalUserId_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623)|Portal User Id for the Player this Player Order belongs to.|
|bool|[PortalUserId_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032)|true if PortalUserId_Optional has been set to a value|
|FString|[InstanceId_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa)|Instance Id for the Instance who submits the Player Order.|
|bool|[InstanceId_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a)|true if InstanceId_Optional has been set to a value|
|FString|[MatchId_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0)|Match Id for the Match that generated the Player Order.|
|bool|[MatchId_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6)|true if MatchId_Optional has been set to a value|
|bool|[IsTransaction_Optional](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a675a03c8fb3c2d8c805887b9201981ee)|If an order is a transaction, any failed entries will roll back changes from all other entries.|
|bool|[IsTransaction_IsSet](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a30482ee87d4cb50c608290e43f3308de)|true if IsTransaction_Optional has been set to a value|
|FString|[OrderId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a55713f9bf6e90b0a2e260f7c2caa60d1)|Unique Identifier for the Order.|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ab334dc4e5f3db2677c6f7bc63f2faf2d)|Player UUID of the Player this Player Order belongs to.|
|FDateTime|[CreatedTime](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a64a7756cf64cbb16bba72c743e6d4e40)|Time the Player Order was created.|
|TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) >|[Entries](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a7a45cd58f0b7dfc940fbdb45af46caa7)|List of Player Order Entries for the Player Order.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1af538945703a9feb2478934204469ae5d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a85a88e788dc037a03fb90391c57cb2d9)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a06781ea13be64327d4542f0d54d67f81)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a5552932df5fad02c098735a36623ae5f)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a01ab2bfcf063a5d329c866ce193474f6)(const ERHAPI_Source & DefaultValue)|Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSource](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68)(ERHAPI_Source & OutValue)|Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a175e55f6615c643684ca979ca3bd0254)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aa506f7a58cbd9c9204d6fb02318e9fc2)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSource](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a0355907568383885229a700dbfda71e6)(ERHAPI_Source NewValue)|Sets the value of Source_Optional and also sets Source_IsSet to true.|
|void|[ClearSource](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)()|Clears the value of Source_Optional and sets Source_IsSet to false.|
|FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aadd42c9c9de7e5816cd5573f82e87599)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ad554bd7cac8a6a9150f397a13cebe496)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a0b006b084502eb467535a7abade3474e)(const FGuid & DefaultValue)|Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0)(FGuid & OutValue)|Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a48aed8444db9b545be41da1fe1099911)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aa967f29dad34b17b5db3354544d48d53)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientOrderRefId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ae49cbca547ae82aa07fd3a524a6af3a7)(FGuid NewValue)|Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.|
|void|[ClearClientOrderRefId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)()|Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.|
|ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a204eb85e71627216a00688724623e06e)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a8d2a3aa5f159e863b199c84bc987ebf7)()|Gets the value of PortalId_Optional, regardless of it having been set.|
|const ERHAPI_InventoryPortal &|[GetPortalId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a7387d8b573616522c5bf894ef2a14270)(const ERHAPI_InventoryPortal & DefaultValue)|Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1af973eed13f40c3d0afa5bfde204b4d90)(ERHAPI_InventoryPortal & OutValue)|Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ad5f82b8cd1efbffc21315b82754ebba7)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryPortal *|[GetPortalIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a12f2080b6e76e90e2a727f90fb8c39d8)()|Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ac9dd1b1f873add221b07966f444e2bdc)(ERHAPI_InventoryPortal NewValue)|Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.|
|void|[ClearPortalId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)()|Clears the value of PortalId_Optional and sets PortalId_IsSet to false.|
|FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ae9158d01cb1e48f2fa7fe63ce2963773)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ac4d6c2a19badd8e999e9a1a8e90ab2a0)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a94fec3319835511f5bbadc89b30a9640)(const FString & DefaultValue)|Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalUserId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03)(FString & OutValue)|Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a44124b325816a3b9f8b1846f1601d1b7)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a4f6b85019664ce6d4b7f56916c9715da)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalUserId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a7c9b659227dd01b9191f357b009305aa)(FString NewValue)|Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.|
|void|[ClearPortalUserId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)()|Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a2a40f7b9e3e37f77023f9f2f8978fa77)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a62a809c97bac59ccc8c317be48ab4210)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a9d8017e4836a3b208038b18f48b55e92)(const FString & DefaultValue)|Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5)(FString & OutValue)|Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a21456fecdf2b12997c3a4899f7d944da)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a922a18740f2c3d1a47a640d8721c3ab0)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a69c3e371f5362ee35a42cd9e891c9424)(FString NewValue)|Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.|
|void|[ClearInstanceId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)()|Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.|
|FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a5b4feeb1e8d370be55daa7b3807c802c)()|Gets the value of MatchId_Optional, regardless of it having been set.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a91b385b0d9f73c41e6b132c5567f266e)()|Gets the value of MatchId_Optional, regardless of it having been set.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a0fb1b1e68aa2918d329bb3c45c5d11ca)(const FString & DefaultValue)|Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatchId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf)(FString & OutValue)|Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMatchIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aa29b7cf0c624fc0b884f26aafb798ac2)()|Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMatchIdOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a707ca4fd565ccea6891ecaeb21f8cd96)()|Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatchId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1adefd4fe819f1e2eedb3b59267f583f26)(FString NewValue)|Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.|
|void|[ClearMatchId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)()|Clears the value of MatchId_Optional and sets MatchId_IsSet to false.|
|bool &|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a4788123a04b61d5a77db912111e00d39)()|Gets the value of IsTransaction_Optional, regardless of it having been set.|
|const bool &|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aafc750ed80ca02a53c0005b00204b15f)()|Gets the value of IsTransaction_Optional, regardless of it having been set.|
|const bool &|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a1076d0cc40176395f251cffa97f7d1c2)(const bool & DefaultValue)|Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIsTransaction](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4)(bool & OutValue)|Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetIsTransactionOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ad72db60eb0c7175dec585f994a704242)()|Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetIsTransactionOrNull](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a919632165b598540c6b0cee4a7461582)()|Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIsTransaction](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ad009239d65564a5d165dbb356ab56d9f)(bool NewValue)|Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.|
|void|[ClearIsTransaction](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)()|Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.|
|bool|[IsIsTransactionDefaultValue](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254)()|Returns true if IsTransaction_Optional is set and matches the default value.|
|void|[SetIsTransactionToDefault](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608)()|Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.|
|FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1afb0a430d55c07348233967bdd24bb540)()|Gets the value of OrderId.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a9398ddd15b826063581108c76ea8a706)()|Gets the value of OrderId.|
|void|[SetOrderId](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a3c30512d5971ff430feac226c0197803)(FString NewValue)|Sets the value of OrderId.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a616fefaf8375efeaada86739a6263546)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ab2add03bbc5afc39a4361870eafc30de)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a52b9965e323462b5c3cef6ae86173dd3)(FGuid NewValue)|Sets the value of PlayerUuid.|
|FDateTime &|[GetCreatedTime](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ab45b6f6e261a16f7914fabe772869b8c)()|Gets the value of CreatedTime.|
|const FDateTime &|[GetCreatedTime](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1aaaf5dc25f6465ca5b85788dc463a9be7)()|Gets the value of CreatedTime.|
|void|[SetCreatedTime](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a3416c5df27610a2e7b5430fc63dd7904)(FDateTime NewValue)|Sets the value of CreatedTime.|
|TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) > &|[GetEntries](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1ae10a93607b2aed45b64f2c090866a405)()|Gets the value of Entries.|
|const TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) > &|[GetEntries](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a569047af3f44f566bbda2ba88cee0a03)()|Gets the value of Entries.|
|void|[SetEntries](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder_1a12728b7e6371fbd2c1b6c72941c12f15)(TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) > NewValue)|Sets the value of Entries.|
## Public Attributes



### `Source_Optional` <a id="structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11"></a>

`ERHAPI_Source FRHAPI_PlayerOrder::Source_Optional`

The source of the Player Order.




### `Source_IsSet` <a id="structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b"></a>

`bool FRHAPI_PlayerOrder::Source_IsSet`

true if Source_Optional has been set to a value




### `ClientOrderRefId_Optional` <a id="structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e"></a>

`FGuid FRHAPI_PlayerOrder::ClientOrderRefId_Optional`

Arbitrary UUID clients can use to track Orders between request to response.




### `ClientOrderRefId_IsSet` <a id="structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab"></a>

`bool FRHAPI_PlayerOrder::ClientOrderRefId_IsSet`

true if ClientOrderRefId_Optional has been set to a value




### `PortalId_Optional` <a id="structFRHAPI__PlayerOrder_1aec69f2f62a21de46c0d865395951b6cc"></a>

`ERHAPI_InventoryPortal FRHAPI_PlayerOrder::PortalId_Optional`

Portal of the Portal User the Player Order belongs to.




### `PortalId_IsSet` <a id="structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5"></a>

`bool FRHAPI_PlayerOrder::PortalId_IsSet`

true if PortalId_Optional has been set to a value




### `PortalUserId_Optional` <a id="structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623"></a>

`FString FRHAPI_PlayerOrder::PortalUserId_Optional`

Portal User Id for the Player this Player Order belongs to.




### `PortalUserId_IsSet` <a id="structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032"></a>

`bool FRHAPI_PlayerOrder::PortalUserId_IsSet`

true if PortalUserId_Optional has been set to a value




### `InstanceId_Optional` <a id="structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa"></a>

`FString FRHAPI_PlayerOrder::InstanceId_Optional`

Instance Id for the Instance who submits the Player Order.




### `InstanceId_IsSet` <a id="structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a"></a>

`bool FRHAPI_PlayerOrder::InstanceId_IsSet`

true if InstanceId_Optional has been set to a value




### `MatchId_Optional` <a id="structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0"></a>

`FString FRHAPI_PlayerOrder::MatchId_Optional`

Match Id for the Match that generated the Player Order.




### `MatchId_IsSet` <a id="structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6"></a>

`bool FRHAPI_PlayerOrder::MatchId_IsSet`

true if MatchId_Optional has been set to a value




### `IsTransaction_Optional` <a id="structFRHAPI__PlayerOrder_1a675a03c8fb3c2d8c805887b9201981ee"></a>

`bool FRHAPI_PlayerOrder::IsTransaction_Optional`

If an order is a transaction, any failed entries will roll back changes from all other entries.




### `IsTransaction_IsSet` <a id="structFRHAPI__PlayerOrder_1a30482ee87d4cb50c608290e43f3308de"></a>

`bool FRHAPI_PlayerOrder::IsTransaction_IsSet`

true if IsTransaction_Optional has been set to a value




### `OrderId` <a id="structFRHAPI__PlayerOrder_1a55713f9bf6e90b0a2e260f7c2caa60d1"></a>

`FString FRHAPI_PlayerOrder::OrderId`

Unique Identifier for the Order.




### `PlayerUuid` <a id="structFRHAPI__PlayerOrder_1ab334dc4e5f3db2677c6f7bc63f2faf2d"></a>

`FGuid FRHAPI_PlayerOrder::PlayerUuid`

Player UUID of the Player this Player Order belongs to.




### `CreatedTime` <a id="structFRHAPI__PlayerOrder_1a64a7756cf64cbb16bba72c743e6d4e40"></a>

`FDateTime FRHAPI_PlayerOrder::CreatedTime`

Time the Player Order was created.




### `Entries` <a id="structFRHAPI__PlayerOrder_1a7a45cd58f0b7dfc940fbdb45af46caa7"></a>

`TArray<FRHAPI_PlayerOrderEntry> FRHAPI_PlayerOrder::Entries`

List of Player Order Entries for the Player Order.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerOrder_1af538945703a9feb2478934204469ae5d"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerOrder_1a85a88e788dc037a03fb90391c57cb2d9"></a>

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



### `GetSource` <a id="structFRHAPI__PlayerOrder_1a06781ea13be64327d4542f0d54d67f81"></a>

ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__PlayerOrder_1a5552932df5fad02c098735a36623ae5f"></a>

const ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__PlayerOrder_1a01ab2bfcf063a5d329c866ce193474f6"></a>

const ERHAPI_Source & GetSource(const ERHAPI_Source & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|DefaultValue|

#### Description

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSource` <a id="structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68"></a>

bool GetSource(ERHAPI_Source & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source &|OutValue|

#### Description

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.




### `GetSourceOrNull` <a id="structFRHAPI__PlayerOrder_1a175e55f6615c643684ca979ca3bd0254"></a>

ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `GetSourceOrNull` <a id="structFRHAPI__PlayerOrder_1aa506f7a58cbd9c9204d6fb02318e9fc2"></a>

const ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `SetSource` <a id="structFRHAPI__PlayerOrder_1a0355907568383885229a700dbfda71e6"></a>

void SetSource(ERHAPI_Source NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|NewValue|

#### Description

Sets the value of Source_Optional and also sets Source_IsSet to true.




### `ClearSource` <a id="structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29"></a>

void ClearSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Source_Optional and sets Source_IsSet to false.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrder_1aadd42c9c9de7e5816cd5573f82e87599"></a>

FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrder_1ad554bd7cac8a6a9150f397a13cebe496"></a>

const FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrder_1a0b006b084502eb467535a7abade3474e"></a>

const FGuid & GetClientOrderRefId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientOrderRefId` <a id="structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0"></a>

bool GetClientOrderRefId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__PlayerOrder_1a48aed8444db9b545be41da1fe1099911"></a>

FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__PlayerOrder_1aa967f29dad34b17b5db3354544d48d53"></a>

const FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `SetClientOrderRefId` <a id="structFRHAPI__PlayerOrder_1ae49cbca547ae82aa07fd3a524a6af3a7"></a>

void SetClientOrderRefId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.




### `ClearClientOrderRefId` <a id="structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317"></a>

void ClearClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.




### `GetPortalId` <a id="structFRHAPI__PlayerOrder_1a204eb85e71627216a00688724623e06e"></a>

ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__PlayerOrder_1a8d2a3aa5f159e863b199c84bc987ebf7"></a>

const ERHAPI_InventoryPortal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId_Optional, regardless of it having been set.




### `GetPortalId` <a id="structFRHAPI__PlayerOrder_1a7387d8b573616522c5bf894ef2a14270"></a>

const ERHAPI_InventoryPortal & GetPortalId(const ERHAPI_InventoryPortal & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryPortal &|DefaultValue|

#### Description

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalId` <a id="structFRHAPI__PlayerOrder_1af973eed13f40c3d0afa5bfde204b4d90"></a>

bool GetPortalId(ERHAPI_InventoryPortal & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal &|OutValue|

#### Description

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalIdOrNull` <a id="structFRHAPI__PlayerOrder_1ad5f82b8cd1efbffc21315b82754ebba7"></a>

ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalIdOrNull` <a id="structFRHAPI__PlayerOrder_1a12f2080b6e76e90e2a727f90fb8c39d8"></a>

const ERHAPI_InventoryPortal * GetPortalIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalId` <a id="structFRHAPI__PlayerOrder_1ac9dd1b1f873add221b07966f444e2bdc"></a>

void SetPortalId(ERHAPI_InventoryPortal NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal|NewValue|

#### Description

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.




### `ClearPortalId` <a id="structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285"></a>

void ClearPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrder_1ae9158d01cb1e48f2fa7fe63ce2963773"></a>

FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrder_1ac4d6c2a19badd8e999e9a1a8e90ab2a0"></a>

const FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrder_1a94fec3319835511f5bbadc89b30a9640"></a>

const FString & GetPortalUserId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalUserId` <a id="structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03"></a>

bool GetPortalUserId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__PlayerOrder_1a44124b325816a3b9f8b1846f1601d1b7"></a>

FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__PlayerOrder_1a4f6b85019664ce6d4b7f56916c9715da"></a>

const FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalUserId` <a id="structFRHAPI__PlayerOrder_1a7c9b659227dd01b9191f357b009305aa"></a>

void SetPortalUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.




### `ClearPortalUserId` <a id="structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5"></a>

void ClearPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrder_1a2a40f7b9e3e37f77023f9f2f8978fa77"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrder_1a62a809c97bac59ccc8c317be48ab4210"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrder_1a9d8017e4836a3b208038b18f48b55e92"></a>

const FString & GetInstanceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceId` <a id="structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5"></a>

bool GetInstanceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceIdOrNull` <a id="structFRHAPI__PlayerOrder_1a21456fecdf2b12997c3a4899f7d944da"></a>

FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceIdOrNull` <a id="structFRHAPI__PlayerOrder_1a922a18740f2c3d1a47a640d8721c3ab0"></a>

const FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceId` <a id="structFRHAPI__PlayerOrder_1a69c3e371f5362ee35a42cd9e891c9424"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.




### `ClearInstanceId` <a id="structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e"></a>

void ClearInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.




### `GetMatchId` <a id="structFRHAPI__PlayerOrder_1a5b4feeb1e8d370be55daa7b3807c802c"></a>

FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId_Optional, regardless of it having been set.




### `GetMatchId` <a id="structFRHAPI__PlayerOrder_1a91b385b0d9f73c41e6b132c5567f266e"></a>

const FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId_Optional, regardless of it having been set.




### `GetMatchId` <a id="structFRHAPI__PlayerOrder_1a0fb1b1e68aa2918d329bb3c45c5d11ca"></a>

const FString & GetMatchId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatchId` <a id="structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf"></a>

bool GetMatchId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchIdOrNull` <a id="structFRHAPI__PlayerOrder_1aa29b7cf0c624fc0b884f26aafb798ac2"></a>

FString * GetMatchIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchIdOrNull` <a id="structFRHAPI__PlayerOrder_1a707ca4fd565ccea6891ecaeb21f8cd96"></a>

const FString * GetMatchIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.




### `SetMatchId` <a id="structFRHAPI__PlayerOrder_1adefd4fe819f1e2eedb3b59267f583f26"></a>

void SetMatchId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.




### `ClearMatchId` <a id="structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78"></a>

void ClearMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrder_1a4788123a04b61d5a77db912111e00d39"></a>

bool & GetIsTransaction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IsTransaction_Optional, regardless of it having been set.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrder_1aafc750ed80ca02a53c0005b00204b15f"></a>

const bool & GetIsTransaction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IsTransaction_Optional, regardless of it having been set.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrder_1a1076d0cc40176395f251cffa97f7d1c2"></a>

const bool & GetIsTransaction(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIsTransaction` <a id="structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4"></a>

bool GetIsTransaction(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.




### `GetIsTransactionOrNull` <a id="structFRHAPI__PlayerOrder_1ad72db60eb0c7175dec585f994a704242"></a>

bool * GetIsTransactionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.




### `GetIsTransactionOrNull` <a id="structFRHAPI__PlayerOrder_1a919632165b598540c6b0cee4a7461582"></a>

const bool * GetIsTransactionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.




### `SetIsTransaction` <a id="structFRHAPI__PlayerOrder_1ad009239d65564a5d165dbb356ab56d9f"></a>

void SetIsTransaction(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.




### `ClearIsTransaction` <a id="structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767"></a>

void ClearIsTransaction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.




### `IsIsTransactionDefaultValue` <a id="structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254"></a>

bool IsIsTransactionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if IsTransaction_Optional is set and matches the default value.




### `SetIsTransactionToDefault` <a id="structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608"></a>

void SetIsTransactionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.




### `GetOrderId` <a id="structFRHAPI__PlayerOrder_1afb0a430d55c07348233967bdd24bb540"></a>

FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId.




### `GetOrderId` <a id="structFRHAPI__PlayerOrder_1a9398ddd15b826063581108c76ea8a706"></a>

const FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId.




### `SetOrderId` <a id="structFRHAPI__PlayerOrder_1a3c30512d5971ff430feac226c0197803"></a>

void SetOrderId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of OrderId.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerOrder_1a616fefaf8375efeaada86739a6263546"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerOrder_1ab2add03bbc5afc39a4361870eafc30de"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlayerOrder_1a52b9965e323462b5c3cef6ae86173dd3"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetCreatedTime` <a id="structFRHAPI__PlayerOrder_1ab45b6f6e261a16f7914fabe772869b8c"></a>

FDateTime & GetCreatedTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedTime.




### `GetCreatedTime` <a id="structFRHAPI__PlayerOrder_1aaaf5dc25f6465ca5b85788dc463a9be7"></a>

const FDateTime & GetCreatedTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedTime.




### `SetCreatedTime` <a id="structFRHAPI__PlayerOrder_1a3416c5df27610a2e7b5430fc63dd7904"></a>

void SetCreatedTime(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of CreatedTime.




### `GetEntries` <a id="structFRHAPI__PlayerOrder_1ae10a93607b2aed45b64f2c090866a405"></a>

TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) > & GetEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Entries.




### `GetEntries` <a id="structFRHAPI__PlayerOrder_1a569047af3f44f566bbda2ba88cee0a03"></a>

const TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) > & GetEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Entries.




### `SetEntries` <a id="structFRHAPI__PlayerOrder_1a12728b7e6371fbd2c1b6c72941c12f15"></a>

void SetEntries(TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrderEntry](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry) >|NewValue|

#### Description

Sets the value of Entries.





