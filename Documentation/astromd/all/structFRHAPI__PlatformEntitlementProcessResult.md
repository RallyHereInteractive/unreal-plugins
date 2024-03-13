---
title: FRHAPI_PlatformEntitlementProcessResult Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Result of processing a platform entitlement.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[RequestId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e)|unique id to allow tracking the request|
|ERHAPI_ClientType|[ClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00)|client type this purchase was made on|
|FString|[TransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8)|unique id for this transaction on the platform|
|ERHAPI_PlatformRegion|[PlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf)|region this purchase was made in|
|FString|[Status_Optional](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf)|status of this result|
|bool|[Status_IsSet](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c)|true if Status_Optional has been set to a value|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) >|[ClientEntitlements_Optional](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c)|Client entitlements that have been processed.|
|bool|[ClientEntitlements_IsSet](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35)|true if ClientEntitlements_Optional has been set to a value|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) >|[ServerEntitlements_Optional](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1)|Server entitlements that have been processed.|
|bool|[ServerEntitlements_IsSet](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f)|true if ServerEntitlements_Optional has been set to a value|
|ERHAPI_Platform|[PlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a3942cf5bfee604460bfb00c0bda56728)|Platform these transactions were processed on.|
|FString|[PlatformUserId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488)|Unique identifier for the platform user that processed this entitlement.|
|bool|[SkippedServerEntitlements_Optional](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53)|True if the server entitlements were skipped.|
|bool|[SkippedServerEntitlements_IsSet](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0)|true if SkippedServerEntitlements_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ad108abc48df6c4c617e0fe351747dc01)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1aba0657945dfaf09647ac494f0c0e6ae5)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetRequestId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ad91f9ad6322419576a16fa20ae6f024c)()|Gets the value of RequestId.|
|const FString &|[GetRequestId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a670729b04ecca6b3fbd9eba1f0030bf6)()|Gets the value of RequestId.|
|void|[SetRequestId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a14e5407efe3ba686334fab6272d51fd9)(FString NewValue)|Sets the value of RequestId.|
|ERHAPI_ClientType &|[GetClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a8a807f7b00f898958aa1ca1ac40e6089)()|Gets the value of ClientType.|
|const ERHAPI_ClientType &|[GetClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a98a9c8edeabca820a66ab0777a256168)()|Gets the value of ClientType.|
|void|[SetClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ac784a1e34f0b0b61babfe0ec0d9479c3)(ERHAPI_ClientType NewValue)|Sets the value of ClientType.|
|FString &|[GetTransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a50babcdd3fee3fd2be24c39d7e207ee5)()|Gets the value of TransactionId.|
|const FString &|[GetTransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a61eb2bad09ee850069cf8b17f60bf330)()|Gets the value of TransactionId.|
|void|[SetTransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a052516ce09ea1b8ea2fa1fe0d219c597)(FString NewValue)|Sets the value of TransactionId.|
|ERHAPI_PlatformRegion &|[GetPlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a9349613c3dfcffe134a3346461da14d3)()|Gets the value of PlatformRegion.|
|const ERHAPI_PlatformRegion &|[GetPlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a7b3cf321a18a94bcd4f1a15bf155e202)()|Gets the value of PlatformRegion.|
|void|[SetPlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a66579a150798b37f7fdf7fbea439ce08)(ERHAPI_PlatformRegion NewValue)|Sets the value of PlatformRegion.|
|FString &|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a33026d1703c93269fb8c0d570a7f6cd8)()|Gets the value of Status_Optional, regardless of it having been set.|
|const FString &|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a14aecf516930c582ef19093ba68e2a36)()|Gets the value of Status_Optional, regardless of it having been set.|
|const FString &|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a0ca92dbcc87160e09c5f9ddef68ca5f7)(const FString & DefaultValue)|Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a)(FString & OutValue)|Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a9a89192ad77bc1fae2888bc8d69d4326)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a02188a9702b28bd5bd5f6b8fc851a58d)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a213ebc12affcf564b5ececbb0c642f06)(FString NewValue)|Sets the value of Status_Optional and also sets Status_IsSet to true.|
|void|[ClearStatus](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)()|Clears the value of Status_Optional and sets Status_IsSet to false.|
|bool|[IsStatusDefaultValue](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc)()|Returns true if Status_Optional is set and matches the default value.|
|void|[SetStatusToDefault](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664)()|Sets the value of Status_Optional to its default and also sets Status_IsSet to true.|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetClientEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ace2fa9dcbf9c9ced3c956a60efb6cb2b)()|Gets the value of ClientEntitlements_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetClientEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ad7276a2b47f6e251330e25604416ad7f)()|Gets the value of ClientEntitlements_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetClientEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a4d311cc311e31b455690fcd8e54df93d)(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & DefaultValue)|Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & OutValue)|Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > *|[GetClientEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a97a72289245fbef21ba70ca4c9d8bb8a)()|Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > *|[GetClientEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a7b724e483f4493ff591c91845da1d7a9)()|Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a6c3683e0634056ca22bb63517c9cabed)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > NewValue)|Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.|
|void|[ClearClientEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)()|Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a343c7db8c5068c4bbe6038fa2895cd06)()|Gets the value of ServerEntitlements_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ab4559c62ee5964d0d60a2db04c01ceae)()|Gets the value of ServerEntitlements_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a03801eab63d8d1ea1b63865738d626f7)(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & DefaultValue)|Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & OutValue)|Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > *|[GetServerEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1adb7f2a3df2d63ce697f094ca2782c7c5)()|Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > *|[GetServerEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1aa725b81b2a5d43733241ccc8a2d95791)()|Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ad4440b2b99702eaf033140ca3ab45ff4)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > NewValue)|Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.|
|void|[ClearServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)()|Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.|
|ERHAPI_Platform &|[GetPlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ab72adc5136d6adfb22b38eb7d079b5c6)()|Gets the value of PlatformId.|
|const ERHAPI_Platform &|[GetPlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a9022daf3ec5d7955a01f8a1f1fa59c92)()|Gets the value of PlatformId.|
|void|[SetPlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a9562812ae338b87e24b94b0b44d3b8ff)(ERHAPI_Platform NewValue)|Sets the value of PlatformId.|
|FString &|[GetPlatformUserId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a41545147a09fbaddd80eee600ca7c6a8)()|Gets the value of PlatformUserId.|
|const FString &|[GetPlatformUserId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a8376f3a70d8e352596e132f4835b76e1)()|Gets the value of PlatformUserId.|
|void|[SetPlatformUserId](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a8a0350a78adf011c1ceb8a5965bba05f)(FString NewValue)|Sets the value of PlatformUserId.|
|bool &|[GetSkippedServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1aba052cf9707bc398e9f0736d949bec03)()|Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.|
|const bool &|[GetSkippedServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a118ca7f349f1fe9d7a06398919c5ed3f)()|Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.|
|const bool &|[GetSkippedServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a7b2438905118d37739885ae4f2b8b403)(const bool & DefaultValue)|Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSkippedServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651)(bool & OutValue)|Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetSkippedServerEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a407ef16410bdad9c8e71edf540dd5795)()|Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetSkippedServerEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a1ff559cd97945d0cd53426fbebcd3aae)()|Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSkippedServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ac758f0b0d2a079a379d1eb4b739c77f3)(bool NewValue)|Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.|
|void|[ClearSkippedServerEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)()|Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.|
|bool|[IsSkippedServerEntitlementsDefaultValue](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a)()|Returns true if SkippedServerEntitlements_Optional is set and matches the default value.|
|void|[SetSkippedServerEntitlementsToDefault](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96)()|Sets the value of SkippedServerEntitlements_Optional to its default and also sets SkippedServerEntitlements_IsSet to true.|
## Public Attributes



### `RequestId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e"></a>

`FString FRHAPI_PlatformEntitlementProcessResult::RequestId`

unique id to allow tracking the request




### `ClientType` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00"></a>

`ERHAPI_ClientType FRHAPI_PlatformEntitlementProcessResult::ClientType`

client type this purchase was made on




### `TransactionId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8"></a>

`FString FRHAPI_PlatformEntitlementProcessResult::TransactionId`

unique id for this transaction on the platform




### `PlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf"></a>

`ERHAPI_PlatformRegion FRHAPI_PlatformEntitlementProcessResult::PlatformRegion`

region this purchase was made in




### `Status_Optional` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf"></a>

`FString FRHAPI_PlatformEntitlementProcessResult::Status_Optional`

status of this result




### `Status_IsSet` <a id="structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c"></a>

`bool FRHAPI_PlatformEntitlementProcessResult::Status_IsSet`

true if Status_Optional has been set to a value




### `ClientEntitlements_Optional` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c"></a>

`TArray<FRHAPI_PlatformEntitlement> FRHAPI_PlatformEntitlementProcessResult::ClientEntitlements_Optional`

Client entitlements that have been processed.




### `ClientEntitlements_IsSet` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35"></a>

`bool FRHAPI_PlatformEntitlementProcessResult::ClientEntitlements_IsSet`

true if ClientEntitlements_Optional has been set to a value




### `ServerEntitlements_Optional` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1"></a>

`TArray<FRHAPI_PlatformEntitlement> FRHAPI_PlatformEntitlementProcessResult::ServerEntitlements_Optional`

Server entitlements that have been processed.




### `ServerEntitlements_IsSet` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f"></a>

`bool FRHAPI_PlatformEntitlementProcessResult::ServerEntitlements_IsSet`

true if ServerEntitlements_Optional has been set to a value




### `PlatformId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3942cf5bfee604460bfb00c0bda56728"></a>

`ERHAPI_Platform FRHAPI_PlatformEntitlementProcessResult::PlatformId`

Platform these transactions were processed on.




### `PlatformUserId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488"></a>

`FString FRHAPI_PlatformEntitlementProcessResult::PlatformUserId`

Unique identifier for the platform user that processed this entitlement.




### `SkippedServerEntitlements_Optional` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53"></a>

`bool FRHAPI_PlatformEntitlementProcessResult::SkippedServerEntitlements_Optional`

True if the server entitlements were skipped.




### `SkippedServerEntitlements_IsSet` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0"></a>

`bool FRHAPI_PlatformEntitlementProcessResult::SkippedServerEntitlements_IsSet`

true if SkippedServerEntitlements_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad108abc48df6c4c617e0fe351747dc01"></a>

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



### `WriteJson` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aba0657945dfaf09647ac494f0c0e6ae5"></a>

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



### `GetRequestId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad91f9ad6322419576a16fa20ae6f024c"></a>

FString & GetRequestId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequestId.




### `GetRequestId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a670729b04ecca6b3fbd9eba1f0030bf6"></a>

const FString & GetRequestId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequestId.




### `SetRequestId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a14e5407efe3ba686334fab6272d51fd9"></a>

void SetRequestId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RequestId.




### `GetClientType` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8a807f7b00f898958aa1ca1ac40e6089"></a>

ERHAPI_ClientType & GetClientType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientType.




### `GetClientType` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a98a9c8edeabca820a66ab0777a256168"></a>

const ERHAPI_ClientType & GetClientType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientType.




### `SetClientType` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac784a1e34f0b0b61babfe0ec0d9479c3"></a>

void SetClientType(ERHAPI_ClientType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ClientType|NewValue|

#### Description

Sets the value of ClientType.




### `GetTransactionId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a50babcdd3fee3fd2be24c39d7e207ee5"></a>

FString & GetTransactionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TransactionId.




### `GetTransactionId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a61eb2bad09ee850069cf8b17f60bf330"></a>

const FString & GetTransactionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TransactionId.




### `SetTransactionId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a052516ce09ea1b8ea2fa1fe0d219c597"></a>

void SetTransactionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of TransactionId.




### `GetPlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9349613c3dfcffe134a3346461da14d3"></a>

ERHAPI_PlatformRegion & GetPlatformRegion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformRegion.




### `GetPlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7b3cf321a18a94bcd4f1a15bf155e202"></a>

const ERHAPI_PlatformRegion & GetPlatformRegion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformRegion.




### `SetPlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a66579a150798b37f7fdf7fbea439ce08"></a>

void SetPlatformRegion(ERHAPI_PlatformRegion NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlatformRegion|NewValue|

#### Description

Sets the value of PlatformRegion.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a33026d1703c93269fb8c0d570a7f6cd8"></a>

FString & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a14aecf516930c582ef19093ba68e2a36"></a>

const FString & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a0ca92dbcc87160e09c5f9ddef68ca5f7"></a>

const FString & GetStatus(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a"></a>

bool GetStatus(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.




### `GetStatusOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9a89192ad77bc1fae2888bc8d69d4326"></a>

FString * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `GetStatusOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a02188a9702b28bd5bd5f6b8fc851a58d"></a>

const FString * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `SetStatus` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a213ebc12affcf564b5ececbb0c642f06"></a>

void SetStatus(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Status_Optional and also sets Status_IsSet to true.




### `ClearStatus` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96"></a>

void ClearStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Status_Optional and sets Status_IsSet to false.




### `IsStatusDefaultValue` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc"></a>

bool IsStatusDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Status_Optional is set and matches the default value.




### `SetStatusToDefault` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664"></a>

void SetStatusToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Status_Optional to its default and also sets Status_IsSet to true.




### `GetClientEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ace2fa9dcbf9c9ced3c956a60efb6cb2b"></a>

TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetClientEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientEntitlements_Optional, regardless of it having been set.




### `GetClientEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad7276a2b47f6e251330e25604416ad7f"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetClientEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientEntitlements_Optional, regardless of it having been set.




### `GetClientEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4d311cc311e31b455690fcd8e54df93d"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetClientEntitlements(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|DefaultValue|

#### Description

Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140"></a>

bool GetClientEntitlements(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|OutValue|

#### Description

Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.




### `GetClientEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a97a72289245fbef21ba70ca4c9d8bb8a"></a>

TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > * GetClientEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.




### `GetClientEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7b724e483f4493ff591c91845da1d7a9"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > * GetClientEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.




### `SetClientEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a6c3683e0634056ca22bb63517c9cabed"></a>

void SetClientEntitlements(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) >|NewValue|

#### Description

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.




### `ClearClientEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5"></a>

void ClearClientEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.




### `GetServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a343c7db8c5068c4bbe6038fa2895cd06"></a>

TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetServerEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ServerEntitlements_Optional, regardless of it having been set.




### `GetServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab4559c62ee5964d0d60a2db04c01ceae"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetServerEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ServerEntitlements_Optional, regardless of it having been set.




### `GetServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a03801eab63d8d1ea1b63865738d626f7"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetServerEntitlements(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|DefaultValue|

#### Description

Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476"></a>

bool GetServerEntitlements(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|OutValue|

#### Description

Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.




### `GetServerEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb7f2a3df2d63ce697f094ca2782c7c5"></a>

TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > * GetServerEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.




### `GetServerEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa725b81b2a5d43733241ccc8a2d95791"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > * GetServerEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.




### `SetServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad4440b2b99702eaf033140ca3ab45ff4"></a>

void SetServerEntitlements(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) >|NewValue|

#### Description

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.




### `ClearServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6"></a>

void ClearServerEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.




### `GetPlatformId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab72adc5136d6adfb22b38eb7d079b5c6"></a>

ERHAPI_Platform & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId.




### `GetPlatformId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9022daf3ec5d7955a01f8a1f1fa59c92"></a>

const ERHAPI_Platform & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId.




### `SetPlatformId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9562812ae338b87e24b94b0b44d3b8ff"></a>

void SetPlatformId(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of PlatformId.




### `GetPlatformUserId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a41545147a09fbaddd80eee600ca7c6a8"></a>

FString & GetPlatformUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformUserId.




### `GetPlatformUserId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8376f3a70d8e352596e132f4835b76e1"></a>

const FString & GetPlatformUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformUserId.




### `SetPlatformUserId` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8a0350a78adf011c1ceb8a5965bba05f"></a>

void SetPlatformUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformUserId.




### `GetSkippedServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aba052cf9707bc398e9f0736d949bec03"></a>

bool & GetSkippedServerEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.




### `GetSkippedServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a118ca7f349f1fe9d7a06398919c5ed3f"></a>

const bool & GetSkippedServerEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.




### `GetSkippedServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7b2438905118d37739885ae4f2b8b403"></a>

const bool & GetSkippedServerEntitlements(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSkippedServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651"></a>

bool GetSkippedServerEntitlements(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.




### `GetSkippedServerEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a407ef16410bdad9c8e71edf540dd5795"></a>

bool * GetSkippedServerEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.




### `GetSkippedServerEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1ff559cd97945d0cd53426fbebcd3aae"></a>

const bool * GetSkippedServerEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.




### `SetSkippedServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac758f0b0d2a079a379d1eb4b739c77f3"></a>

void SetSkippedServerEntitlements(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.




### `ClearSkippedServerEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e"></a>

void ClearSkippedServerEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.




### `IsSkippedServerEntitlementsDefaultValue` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a"></a>

bool IsSkippedServerEntitlementsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SkippedServerEntitlements_Optional is set and matches the default value.




### `SetSkippedServerEntitlementsToDefault` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96"></a>

void SetSkippedServerEntitlementsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SkippedServerEntitlements_Optional to its default and also sets SkippedServerEntitlements_IsSet to true.





