---
title: FRHAPI_SessionEvent Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about an event that occurred in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[EventCode](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ada7192668c25eaf79f536942f52ed0b7)|Code that identifies this type of event. See CommonEventCode for common examples.|
|FString|[Description_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1abe8c2502538b58fc383b01f261f883c0)|Description metadata about the event.|
|bool|[Description_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a175b0b4ec965516f3b437beb1480bfbb)|true if Description_Optional has been set to a value|
|int32|[SourcePlayerId_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aa515b57425a7d7076849029ba5ed7295)|Player who triggered the event.|
|bool|[SourcePlayerId_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ae42de2978b5d499c17db28f66cdc2574)|true if SourcePlayerId_Optional has been set to a value|
|FGuid|[SourcePlayerUuid_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a81f9e69f07e63785518a74b6324580f4)|Player who triggered the event.|
|bool|[SourcePlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1abe95ddaa05cdc349003086aa387b48cd)|true if SourcePlayerUuid_Optional has been set to a value|
|int32|[TargetPlayerId_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a4365a24b63a86dfe383ea3cebf12b5e1)|Player who the event was targetted toward, if relevant.|
|bool|[TargetPlayerId_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a6103dbb6e81a8141af54e73cb90d4b9c)|true if TargetPlayerId_Optional has been set to a value|
|FGuid|[TargetPlayerUuid_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a9261bcec138cb28b7d218736fe96009f)|Player who the event was targetted toward, if relevant.|
|bool|[TargetPlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1abb6691ca17854d7f8e493c1b51c77603)|true if TargetPlayerUuid_Optional has been set to a value|
|FString|[Instance_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ab3d4a6169c5cfab343dd8ceca08bd611)|Instance that was active at the time of the event.|
|bool|[Instance_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1afea379dd4bd02b5f977e25ddc6d3cb98)|true if Instance_Optional has been set to a value|
|FString|[Match_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ae1014951cb8bbb932d680d3f0d5b9e4d)|Match that was active at the time of the event.|
|bool|[Match_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a5916e2315556f522e63401bcfcc3010c)|true if Match_Optional has been set to a value|
|ERHAPI_Platform|[Platform_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a5b711158057defc2182c719e549a79f5)|Relevant platform.|
|bool|[Platform_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a2cf1f03e58d1a987849317cec3d8ad2b)|true if Platform_Optional has been set to a value|
|FString|[PlatformSessionIdBase64_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a5d17415a482fd903435bfcf767c76aef)|Relevant platform session id.|
|bool|[PlatformSessionIdBase64_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a86c10008c5c3f1d467da3e722c88a173)|true if PlatformSessionIdBase64_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a93a98860d513d172f40664eb623ae400)|custom data about this event|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a4f59e4b523724ef75c3108f6594daf99)|true if CustomData_Optional has been set to a value|
|FDateTime|[Timestamp](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ac6341064f04e3ae7cf02057c3518a8ca)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a8e1449cf19336e0f466a4cb77804c3fe)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a02c391532110c5bdae07e6bd7a19a5c0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetEventCode](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a48e43b1cf126641984694824cdc8e4b0)()|Gets the value of EventCode.|
|const FString &|[GetEventCode](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a85a297de3b90425c68633750fb2f5eae)()|Gets the value of EventCode.|
|void|[SetEventCode](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a789e2a8a080c080170f7ad4829131399)(FString NewValue)|Sets the value of EventCode.|
|FString &|[GetDescription](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a033023a3e9abf89505a6be54559396b9)()|Gets the value of Description_Optional, regardless of it having been set.|
|const FString &|[GetDescription](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a7d333fe0a6751d4f20ae73a179b5c85f)()|Gets the value of Description_Optional, regardless of it having been set.|
|const FString &|[GetDescription](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aec79544001384ffee489c8f930827768)(const FString & DefaultValue)|Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDescription](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a38b4cfaaa4f5f219541ff824521dbeb5)(FString & OutValue)|Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDescriptionOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aafb644bf8803129c7356244af2018fff)()|Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDescriptionOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ade42b301beb4933a43055aa326040417)()|Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDescription](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aabf164cf96ed14c239ad7497de37a9fe)(FString NewValue)|Sets the value of Description_Optional and also sets Description_IsSet to true.|
|void|[ClearDescription](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a19ece9a45c4e554101aab849c2821874)()|Clears the value of Description_Optional and sets Description_IsSet to false.|
|bool|[IsDescriptionDefaultValue](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a1ce8014002624b1c161d52155345a846)()|Returns true if Description_Optional is set and matches the default value.|
|void|[SetDescriptionToDefault](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1adad6f2848d11f0294c377c6ab07010f1)()|Sets the value of Description_Optional to its default and also sets Description_IsSet to true.|
|int32 &|[GetSourcePlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a0edce9f8136bbe02ac3b480fdfbb61f9)()|Gets the value of SourcePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetSourcePlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aa52dbf1ddd3f8a203025bc7aec1a3457)()|Gets the value of SourcePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetSourcePlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a63aa0eba0a565a00efc366512e76aa6b)(const int32 & DefaultValue)|Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSourcePlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1afdd3517c381a2d9780d7aa0f3508fa7d)(int32 & OutValue)|Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetSourcePlayerIdOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a2aef94777a867498dfdf8211f4631fe0)()|Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetSourcePlayerIdOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a0e083bcd446710c3b0d89d8d69b79a96)()|Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSourcePlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1af97d102fc73644bc426c58f6fa02b89c)(int32 NewValue)|Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.|
|void|[ClearSourcePlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a26f36471920a06291f2c73192a7ed0fe)()|Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.|
|bool|[IsSourcePlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a16cec2cfd4335037e242e3a8ea52781a)()|Returns true if SourcePlayerId_Optional is set and matches the default value.|
|void|[SetSourcePlayerIdToDefault](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a2cefa3bde4a551c7154b48c2cc9f49eb)()|Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.|
|FGuid &|[GetSourcePlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aca377a2417000d257cc373187eacfbfd)()|Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetSourcePlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a217dbbe0b364666e926f27e17fc256f9)()|Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetSourcePlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1af324fe03c397dde0d0ec08be5d9e0050)(const FGuid & DefaultValue)|Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSourcePlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a6dc6260c477267f2e961bf1ebee9ab8c)(FGuid & OutValue)|Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetSourcePlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a9893bd75b442af4c97e2fad15b93aabd)()|Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetSourcePlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ab24ee9854cd771ac7fba908ea9859f5e)()|Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSourcePlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a729d1b1c2f9d1a62babe731db3dd3e61)(FGuid NewValue)|Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.|
|void|[ClearSourcePlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a12f0e25853a85ef30397e1936f793de7)()|Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.|
|int32 &|[GetTargetPlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a151bfac77d3b8110e617ae1ec97d2911)()|Gets the value of TargetPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetTargetPlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a29987296af40ce965e22edb2a7566904)()|Gets the value of TargetPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetTargetPlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a48308a30ef35648888fc9a850961d0c1)(const int32 & DefaultValue)|Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTargetPlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aba78bcf538a7a8abb78bd2d0e224baf1)(int32 & OutValue)|Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetTargetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a6928c161f79f64328bc4a827be28e3b1)()|Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetTargetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aae6aae8bd68a90c502f8d1c6bf6117b5)()|Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTargetPlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ab2a9aa6c7d967b0a79e861770041e4b1)(int32 NewValue)|Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.|
|void|[ClearTargetPlayerId](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ad4615f30b862210d543982105389cfe8)()|Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.|
|bool|[IsTargetPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a52449a0671a6dde6f70d64378defaf45)()|Returns true if TargetPlayerId_Optional is set and matches the default value.|
|void|[SetTargetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ad61b0ff6814801ac2f73e333d6268999)()|Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.|
|FGuid &|[GetTargetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a697c3282519a043aefe742d1e27891e5)()|Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetTargetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a0118de113410611342f22e0d9e96dc27)()|Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetTargetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ae374456134407e7fc1b22a1787ab2f74)(const FGuid & DefaultValue)|Gets the value of TargetPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTargetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a9d9878b8c04b80a9c04f0cc25d297267)(FGuid & OutValue)|Fills OutValue with the value of TargetPlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetTargetPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a92eda87a198a2940820c8d805e9d9737)()|Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetTargetPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a5af70d7f9129c70a8bffd6e36723a296)()|Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTargetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a9d7c0d8ae0b02170afe01616b99183a4)(FGuid NewValue)|Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true.|
|void|[ClearTargetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a3d7be30fb52bf33409cbb22e9b460f76)()|Clears the value of TargetPlayerUuid_Optional and sets TargetPlayerUuid_IsSet to false.|
|FString &|[GetInstance](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a3dd350bdbbaeb755df5ab7b1e9af681e)()|Gets the value of Instance_Optional, regardless of it having been set.|
|const FString &|[GetInstance](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a3ddae4387223ebb350ab06be9bb1c461)()|Gets the value of Instance_Optional, regardless of it having been set.|
|const FString &|[GetInstance](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a746eebbfa8b40a5c03977bf18510e8eb)(const FString & DefaultValue)|Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstance](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a2e1560e398eae2b00e8573db3cdcdcb3)(FString & OutValue)|Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a4b2720106407519e96691dcb0a1c7385)()|Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aa756214fe8522c875df5dc0bb0e2d69e)()|Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstance](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ab0b3f269ba0b694bff399cbcaa496cd0)(FString NewValue)|Sets the value of Instance_Optional and also sets Instance_IsSet to true.|
|void|[ClearInstance](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ac8e8ef1f82940116cc9f97baa138b8c2)()|Clears the value of Instance_Optional and sets Instance_IsSet to false.|
|FString &|[GetMatch](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a747e0795519b5209b105de36cbc16488)()|Gets the value of Match_Optional, regardless of it having been set.|
|const FString &|[GetMatch](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a8864d5ae078e6a43c55240f6e86d25fc)()|Gets the value of Match_Optional, regardless of it having been set.|
|const FString &|[GetMatch](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a8f956797bd60e4f0f28a4efa909f638f)(const FString & DefaultValue)|Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatch](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a46c161e6fd0669edf4f057c8c21de4ef)(FString & OutValue)|Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMatchOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1af33f2b327a4d5a352e66d47913053061)()|Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMatchOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ad4ce66a8bdb00e0e94a6270600b99e71)()|Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatch](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a9c2a5edaf4fb50aa9130d990cb65bbfe)(FString NewValue)|Sets the value of Match_Optional and also sets Match_IsSet to true.|
|void|[ClearMatch](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a23cff6a6b125c9324e73844a4d0c5a10)()|Clears the value of Match_Optional and sets Match_IsSet to false.|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a28648ea8318ec7159e59ee016620fa8b)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a03390fb91786da9a1a4dfd947e9f4bc7)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a3e9f684ca118e881cf8110790ed781b5)(const ERHAPI_Platform & DefaultValue)|Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatform](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aa5273494fc37655cdfb15816dc2fc393)(ERHAPI_Platform & OutValue)|Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Platform *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ada359d0f9c9b81f712bde222c9a8297c)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Platform *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a0f2afecce301a0610bf5a31ded5d6a87)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a09c789b858549ca9a17ab4635ed63562)(ERHAPI_Platform NewValue)|Sets the value of Platform_Optional and also sets Platform_IsSet to true.|
|void|[ClearPlatform](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a7343f450b956b0bc34c4c60d2eaa0c6a)()|Clears the value of Platform_Optional and sets Platform_IsSet to false.|
|FString &|[GetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1abee51da3b1d68174f35599befe5f682e)()|Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.|
|const FString &|[GetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ad1ee4a584a5399abefd5fb17d3320faa)()|Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.|
|const FString &|[GetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a5dc45cf48e994ebdcf3db7d76a9b5782)(const FString & DefaultValue)|Gets the value of PlatformSessionIdBase64_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a6aacef8490050f6a6652c0c0e5f2d2ae)(FString & OutValue)|Fills OutValue with the value of PlatformSessionIdBase64_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPlatformSessionIdBase64OrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a872f522ee36f1bcd6948f240a99c8014)()|Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPlatformSessionIdBase64OrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a6b15ed5a98dd9492ca9f9f7a22ef0e96)()|Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1af2b26e13296277b72dde4f45ac36851f)(FString NewValue)|Sets the value of PlatformSessionIdBase64_Optional and also sets PlatformSessionIdBase64_IsSet to true.|
|void|[ClearPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a797529d65f280b7a5a00e8f5fe91774f)()|Clears the value of PlatformSessionIdBase64_Optional and sets PlatformSessionIdBase64_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ac3c70d0562b9b7e6dacb07626fbe57c1)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a45c2eac1c630d8b32a1abb0cf9d55e6f)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ae3e9b18849b48078a5cf4c9f3858d68b)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aed6d29f8d1ecb72ab1d614b5c3e39c14)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1ad34a53a1ee2735394f05d6e66d0da3e8)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a8e2745134d60000e1fa7028e504bedcb)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1aba198835b5f9f817b6de83a7f5ab4908)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a2b10f31ef9cefc481f1dc7f453cd6d35)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FDateTime &|[GetTimestamp](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a0285624bc44a30f13d72ccf1ae59e473)()|Gets the value of Timestamp.|
|const FDateTime &|[GetTimestamp](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a58da8a09c35351006be38a4bf1792d1a)()|Gets the value of Timestamp.|
|void|[SetTimestamp](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent_1a8b445eb1d0f8fdddc20b9760e3431545)(FDateTime NewValue)|Sets the value of Timestamp.|
## Public Attributes



### `EventCode` <a id="structFRHAPI__SessionEvent_1ada7192668c25eaf79f536942f52ed0b7"></a>

`FString FRHAPI_SessionEvent::EventCode`

Code that identifies this type of event. See CommonEventCode for common examples.




### `Description_Optional` <a id="structFRHAPI__SessionEvent_1abe8c2502538b58fc383b01f261f883c0"></a>

`FString FRHAPI_SessionEvent::Description_Optional`

Description metadata about the event.




### `Description_IsSet` <a id="structFRHAPI__SessionEvent_1a175b0b4ec965516f3b437beb1480bfbb"></a>

`bool FRHAPI_SessionEvent::Description_IsSet`

true if Description_Optional has been set to a value




### `SourcePlayerId_Optional` <a id="structFRHAPI__SessionEvent_1aa515b57425a7d7076849029ba5ed7295"></a>

`int32 FRHAPI_SessionEvent::SourcePlayerId_Optional`

Player who triggered the event.




### `SourcePlayerId_IsSet` <a id="structFRHAPI__SessionEvent_1ae42de2978b5d499c17db28f66cdc2574"></a>

`bool FRHAPI_SessionEvent::SourcePlayerId_IsSet`

true if SourcePlayerId_Optional has been set to a value




### `SourcePlayerUuid_Optional` <a id="structFRHAPI__SessionEvent_1a81f9e69f07e63785518a74b6324580f4"></a>

`FGuid FRHAPI_SessionEvent::SourcePlayerUuid_Optional`

Player who triggered the event.




### `SourcePlayerUuid_IsSet` <a id="structFRHAPI__SessionEvent_1abe95ddaa05cdc349003086aa387b48cd"></a>

`bool FRHAPI_SessionEvent::SourcePlayerUuid_IsSet`

true if SourcePlayerUuid_Optional has been set to a value




### `TargetPlayerId_Optional` <a id="structFRHAPI__SessionEvent_1a4365a24b63a86dfe383ea3cebf12b5e1"></a>

`int32 FRHAPI_SessionEvent::TargetPlayerId_Optional`

Player who the event was targetted toward, if relevant.




### `TargetPlayerId_IsSet` <a id="structFRHAPI__SessionEvent_1a6103dbb6e81a8141af54e73cb90d4b9c"></a>

`bool FRHAPI_SessionEvent::TargetPlayerId_IsSet`

true if TargetPlayerId_Optional has been set to a value




### `TargetPlayerUuid_Optional` <a id="structFRHAPI__SessionEvent_1a9261bcec138cb28b7d218736fe96009f"></a>

`FGuid FRHAPI_SessionEvent::TargetPlayerUuid_Optional`

Player who the event was targetted toward, if relevant.




### `TargetPlayerUuid_IsSet` <a id="structFRHAPI__SessionEvent_1abb6691ca17854d7f8e493c1b51c77603"></a>

`bool FRHAPI_SessionEvent::TargetPlayerUuid_IsSet`

true if TargetPlayerUuid_Optional has been set to a value




### `Instance_Optional` <a id="structFRHAPI__SessionEvent_1ab3d4a6169c5cfab343dd8ceca08bd611"></a>

`FString FRHAPI_SessionEvent::Instance_Optional`

Instance that was active at the time of the event.




### `Instance_IsSet` <a id="structFRHAPI__SessionEvent_1afea379dd4bd02b5f977e25ddc6d3cb98"></a>

`bool FRHAPI_SessionEvent::Instance_IsSet`

true if Instance_Optional has been set to a value




### `Match_Optional` <a id="structFRHAPI__SessionEvent_1ae1014951cb8bbb932d680d3f0d5b9e4d"></a>

`FString FRHAPI_SessionEvent::Match_Optional`

Match that was active at the time of the event.




### `Match_IsSet` <a id="structFRHAPI__SessionEvent_1a5916e2315556f522e63401bcfcc3010c"></a>

`bool FRHAPI_SessionEvent::Match_IsSet`

true if Match_Optional has been set to a value




### `Platform_Optional` <a id="structFRHAPI__SessionEvent_1a5b711158057defc2182c719e549a79f5"></a>

`ERHAPI_Platform FRHAPI_SessionEvent::Platform_Optional`

Relevant platform.




### `Platform_IsSet` <a id="structFRHAPI__SessionEvent_1a2cf1f03e58d1a987849317cec3d8ad2b"></a>

`bool FRHAPI_SessionEvent::Platform_IsSet`

true if Platform_Optional has been set to a value




### `PlatformSessionIdBase64_Optional` <a id="structFRHAPI__SessionEvent_1a5d17415a482fd903435bfcf767c76aef"></a>

`FString FRHAPI_SessionEvent::PlatformSessionIdBase64_Optional`

Relevant platform session id.




### `PlatformSessionIdBase64_IsSet` <a id="structFRHAPI__SessionEvent_1a86c10008c5c3f1d467da3e722c88a173"></a>

`bool FRHAPI_SessionEvent::PlatformSessionIdBase64_IsSet`

true if PlatformSessionIdBase64_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SessionEvent_1a93a98860d513d172f40664eb623ae400"></a>

`TMap<FString, FString> FRHAPI_SessionEvent::CustomData_Optional`

custom data about this event




### `CustomData_IsSet` <a id="structFRHAPI__SessionEvent_1a4f59e4b523724ef75c3108f6594daf99"></a>

`bool FRHAPI_SessionEvent::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Timestamp` <a id="structFRHAPI__SessionEvent_1ac6341064f04e3ae7cf02057c3518a8ca"></a>

`FDateTime FRHAPI_SessionEvent::Timestamp`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionEvent_1a8e1449cf19336e0f466a4cb77804c3fe"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionEvent_1a02c391532110c5bdae07e6bd7a19a5c0"></a>

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



### `GetEventCode` <a id="structFRHAPI__SessionEvent_1a48e43b1cf126641984694824cdc8e4b0"></a>

FString & GetEventCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventCode.




### `GetEventCode` <a id="structFRHAPI__SessionEvent_1a85a297de3b90425c68633750fb2f5eae"></a>

const FString & GetEventCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventCode.




### `SetEventCode` <a id="structFRHAPI__SessionEvent_1a789e2a8a080c080170f7ad4829131399"></a>

void SetEventCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of EventCode.




### `GetDescription` <a id="structFRHAPI__SessionEvent_1a033023a3e9abf89505a6be54559396b9"></a>

FString & GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Description_Optional, regardless of it having been set.




### `GetDescription` <a id="structFRHAPI__SessionEvent_1a7d333fe0a6751d4f20ae73a179b5c85f"></a>

const FString & GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Description_Optional, regardless of it having been set.




### `GetDescription` <a id="structFRHAPI__SessionEvent_1aec79544001384ffee489c8f930827768"></a>

const FString & GetDescription(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDescription` <a id="structFRHAPI__SessionEvent_1a38b4cfaaa4f5f219541ff824521dbeb5"></a>

bool GetDescription(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.




### `GetDescriptionOrNull` <a id="structFRHAPI__SessionEvent_1aafb644bf8803129c7356244af2018fff"></a>

FString * GetDescriptionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.




### `GetDescriptionOrNull` <a id="structFRHAPI__SessionEvent_1ade42b301beb4933a43055aa326040417"></a>

const FString * GetDescriptionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.




### `SetDescription` <a id="structFRHAPI__SessionEvent_1aabf164cf96ed14c239ad7497de37a9fe"></a>

void SetDescription(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Description_Optional and also sets Description_IsSet to true.




### `ClearDescription` <a id="structFRHAPI__SessionEvent_1a19ece9a45c4e554101aab849c2821874"></a>

void ClearDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Description_Optional and sets Description_IsSet to false.




### `IsDescriptionDefaultValue` <a id="structFRHAPI__SessionEvent_1a1ce8014002624b1c161d52155345a846"></a>

bool IsDescriptionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Description_Optional is set and matches the default value.




### `SetDescriptionToDefault` <a id="structFRHAPI__SessionEvent_1adad6f2848d11f0294c377c6ab07010f1"></a>

void SetDescriptionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Description_Optional to its default and also sets Description_IsSet to true.




### `GetSourcePlayerId` <a id="structFRHAPI__SessionEvent_1a0edce9f8136bbe02ac3b480fdfbb61f9"></a>

int32 & GetSourcePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SourcePlayerId_Optional, regardless of it having been set.




### `GetSourcePlayerId` <a id="structFRHAPI__SessionEvent_1aa52dbf1ddd3f8a203025bc7aec1a3457"></a>

const int32 & GetSourcePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SourcePlayerId_Optional, regardless of it having been set.




### `GetSourcePlayerId` <a id="structFRHAPI__SessionEvent_1a63aa0eba0a565a00efc366512e76aa6b"></a>

const int32 & GetSourcePlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSourcePlayerId` <a id="structFRHAPI__SessionEvent_1afdd3517c381a2d9780d7aa0f3508fa7d"></a>

bool GetSourcePlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetSourcePlayerIdOrNull` <a id="structFRHAPI__SessionEvent_1a2aef94777a867498dfdf8211f4631fe0"></a>

int32 * GetSourcePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetSourcePlayerIdOrNull` <a id="structFRHAPI__SessionEvent_1a0e083bcd446710c3b0d89d8d69b79a96"></a>

const int32 * GetSourcePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetSourcePlayerId` <a id="structFRHAPI__SessionEvent_1af97d102fc73644bc426c58f6fa02b89c"></a>

void SetSourcePlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.




### `ClearSourcePlayerId` <a id="structFRHAPI__SessionEvent_1a26f36471920a06291f2c73192a7ed0fe"></a>

void ClearSourcePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.




### `IsSourcePlayerIdDefaultValue` <a id="structFRHAPI__SessionEvent_1a16cec2cfd4335037e242e3a8ea52781a"></a>

bool IsSourcePlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SourcePlayerId_Optional is set and matches the default value.




### `SetSourcePlayerIdToDefault` <a id="structFRHAPI__SessionEvent_1a2cefa3bde4a551c7154b48c2cc9f49eb"></a>

void SetSourcePlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.




### `GetSourcePlayerUuid` <a id="structFRHAPI__SessionEvent_1aca377a2417000d257cc373187eacfbfd"></a>

FGuid & GetSourcePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.




### `GetSourcePlayerUuid` <a id="structFRHAPI__SessionEvent_1a217dbbe0b364666e926f27e17fc256f9"></a>

const FGuid & GetSourcePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.




### `GetSourcePlayerUuid` <a id="structFRHAPI__SessionEvent_1af324fe03c397dde0d0ec08be5d9e0050"></a>

const FGuid & GetSourcePlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSourcePlayerUuid` <a id="structFRHAPI__SessionEvent_1a6dc6260c477267f2e961bf1ebee9ab8c"></a>

bool GetSourcePlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetSourcePlayerUuidOrNull` <a id="structFRHAPI__SessionEvent_1a9893bd75b442af4c97e2fad15b93aabd"></a>

FGuid * GetSourcePlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetSourcePlayerUuidOrNull` <a id="structFRHAPI__SessionEvent_1ab24ee9854cd771ac7fba908ea9859f5e"></a>

const FGuid * GetSourcePlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetSourcePlayerUuid` <a id="structFRHAPI__SessionEvent_1a729d1b1c2f9d1a62babe731db3dd3e61"></a>

void SetSourcePlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.




### `ClearSourcePlayerUuid` <a id="structFRHAPI__SessionEvent_1a12f0e25853a85ef30397e1936f793de7"></a>

void ClearSourcePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.




### `GetTargetPlayerId` <a id="structFRHAPI__SessionEvent_1a151bfac77d3b8110e617ae1ec97d2911"></a>

int32 & GetTargetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TargetPlayerId_Optional, regardless of it having been set.




### `GetTargetPlayerId` <a id="structFRHAPI__SessionEvent_1a29987296af40ce965e22edb2a7566904"></a>

const int32 & GetTargetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TargetPlayerId_Optional, regardless of it having been set.




### `GetTargetPlayerId` <a id="structFRHAPI__SessionEvent_1a48308a30ef35648888fc9a850961d0c1"></a>

const int32 & GetTargetPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTargetPlayerId` <a id="structFRHAPI__SessionEvent_1aba78bcf538a7a8abb78bd2d0e224baf1"></a>

bool GetTargetPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetTargetPlayerIdOrNull` <a id="structFRHAPI__SessionEvent_1a6928c161f79f64328bc4a827be28e3b1"></a>

int32 * GetTargetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetTargetPlayerIdOrNull` <a id="structFRHAPI__SessionEvent_1aae6aae8bd68a90c502f8d1c6bf6117b5"></a>

const int32 * GetTargetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetTargetPlayerId` <a id="structFRHAPI__SessionEvent_1ab2a9aa6c7d967b0a79e861770041e4b1"></a>

void SetTargetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.




### `ClearTargetPlayerId` <a id="structFRHAPI__SessionEvent_1ad4615f30b862210d543982105389cfe8"></a>

void ClearTargetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.




### `IsTargetPlayerIdDefaultValue` <a id="structFRHAPI__SessionEvent_1a52449a0671a6dde6f70d64378defaf45"></a>

bool IsTargetPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TargetPlayerId_Optional is set and matches the default value.




### `SetTargetPlayerIdToDefault` <a id="structFRHAPI__SessionEvent_1ad61b0ff6814801ac2f73e333d6268999"></a>

void SetTargetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.




### `GetTargetPlayerUuid` <a id="structFRHAPI__SessionEvent_1a697c3282519a043aefe742d1e27891e5"></a>

FGuid & GetTargetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.




### `GetTargetPlayerUuid` <a id="structFRHAPI__SessionEvent_1a0118de113410611342f22e0d9e96dc27"></a>

const FGuid & GetTargetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.




### `GetTargetPlayerUuid` <a id="structFRHAPI__SessionEvent_1ae374456134407e7fc1b22a1787ab2f74"></a>

const FGuid & GetTargetPlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of TargetPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTargetPlayerUuid` <a id="structFRHAPI__SessionEvent_1a9d9878b8c04b80a9c04f0cc25d297267"></a>

bool GetTargetPlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of TargetPlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetTargetPlayerUuidOrNull` <a id="structFRHAPI__SessionEvent_1a92eda87a198a2940820c8d805e9d9737"></a>

FGuid * GetTargetPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetTargetPlayerUuidOrNull` <a id="structFRHAPI__SessionEvent_1a5af70d7f9129c70a8bffd6e36723a296"></a>

const FGuid * GetTargetPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetTargetPlayerUuid` <a id="structFRHAPI__SessionEvent_1a9d7c0d8ae0b02170afe01616b99183a4"></a>

void SetTargetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true.




### `ClearTargetPlayerUuid` <a id="structFRHAPI__SessionEvent_1a3d7be30fb52bf33409cbb22e9b460f76"></a>

void ClearTargetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TargetPlayerUuid_Optional and sets TargetPlayerUuid_IsSet to false.




### `GetInstance` <a id="structFRHAPI__SessionEvent_1a3dd350bdbbaeb755df5ab7b1e9af681e"></a>

FString & GetInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Instance_Optional, regardless of it having been set.




### `GetInstance` <a id="structFRHAPI__SessionEvent_1a3ddae4387223ebb350ab06be9bb1c461"></a>

const FString & GetInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Instance_Optional, regardless of it having been set.




### `GetInstance` <a id="structFRHAPI__SessionEvent_1a746eebbfa8b40a5c03977bf18510e8eb"></a>

const FString & GetInstance(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstance` <a id="structFRHAPI__SessionEvent_1a2e1560e398eae2b00e8573db3cdcdcb3"></a>

bool GetInstance(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceOrNull` <a id="structFRHAPI__SessionEvent_1a4b2720106407519e96691dcb0a1c7385"></a>

FString * GetInstanceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceOrNull` <a id="structFRHAPI__SessionEvent_1aa756214fe8522c875df5dc0bb0e2d69e"></a>

const FString * GetInstanceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.




### `SetInstance` <a id="structFRHAPI__SessionEvent_1ab0b3f269ba0b694bff399cbcaa496cd0"></a>

void SetInstance(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Instance_Optional and also sets Instance_IsSet to true.




### `ClearInstance` <a id="structFRHAPI__SessionEvent_1ac8e8ef1f82940116cc9f97baa138b8c2"></a>

void ClearInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Instance_Optional and sets Instance_IsSet to false.




### `GetMatch` <a id="structFRHAPI__SessionEvent_1a747e0795519b5209b105de36cbc16488"></a>

FString & GetMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Match_Optional, regardless of it having been set.




### `GetMatch` <a id="structFRHAPI__SessionEvent_1a8864d5ae078e6a43c55240f6e86d25fc"></a>

const FString & GetMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Match_Optional, regardless of it having been set.




### `GetMatch` <a id="structFRHAPI__SessionEvent_1a8f956797bd60e4f0f28a4efa909f638f"></a>

const FString & GetMatch(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatch` <a id="structFRHAPI__SessionEvent_1a46c161e6fd0669edf4f057c8c21de4ef"></a>

bool GetMatch(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchOrNull` <a id="structFRHAPI__SessionEvent_1af33f2b327a4d5a352e66d47913053061"></a>

FString * GetMatchOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchOrNull` <a id="structFRHAPI__SessionEvent_1ad4ce66a8bdb00e0e94a6270600b99e71"></a>

const FString * GetMatchOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.




### `SetMatch` <a id="structFRHAPI__SessionEvent_1a9c2a5edaf4fb50aa9130d990cb65bbfe"></a>

void SetMatch(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Match_Optional and also sets Match_IsSet to true.




### `ClearMatch` <a id="structFRHAPI__SessionEvent_1a23cff6a6b125c9324e73844a4d0c5a10"></a>

void ClearMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Match_Optional and sets Match_IsSet to false.




### `GetPlatform` <a id="structFRHAPI__SessionEvent_1a28648ea8318ec7159e59ee016620fa8b"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__SessionEvent_1a03390fb91786da9a1a4dfd947e9f4bc7"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__SessionEvent_1a3e9f684ca118e881cf8110790ed781b5"></a>

const ERHAPI_Platform & GetPlatform(const ERHAPI_Platform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|DefaultValue|

#### Description

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatform` <a id="structFRHAPI__SessionEvent_1aa5273494fc37655cdfb15816dc2fc393"></a>

bool GetPlatform(ERHAPI_Platform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform &|OutValue|

#### Description

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformOrNull` <a id="structFRHAPI__SessionEvent_1ada359d0f9c9b81f712bde222c9a8297c"></a>

ERHAPI_Platform * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformOrNull` <a id="structFRHAPI__SessionEvent_1a0f2afecce301a0610bf5a31ded5d6a87"></a>

const ERHAPI_Platform * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatform` <a id="structFRHAPI__SessionEvent_1a09c789b858549ca9a17ab4635ed63562"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform_Optional and also sets Platform_IsSet to true.




### `ClearPlatform` <a id="structFRHAPI__SessionEvent_1a7343f450b956b0bc34c4c60d2eaa0c6a"></a>

void ClearPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Platform_Optional and sets Platform_IsSet to false.




### `GetPlatformSessionIdBase64` <a id="structFRHAPI__SessionEvent_1abee51da3b1d68174f35599befe5f682e"></a>

FString & GetPlatformSessionIdBase64()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.




### `GetPlatformSessionIdBase64` <a id="structFRHAPI__SessionEvent_1ad1ee4a584a5399abefd5fb17d3320faa"></a>

const FString & GetPlatformSessionIdBase64()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.




### `GetPlatformSessionIdBase64` <a id="structFRHAPI__SessionEvent_1a5dc45cf48e994ebdcf3db7d76a9b5782"></a>

const FString & GetPlatformSessionIdBase64(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PlatformSessionIdBase64_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatformSessionIdBase64` <a id="structFRHAPI__SessionEvent_1a6aacef8490050f6a6652c0c0e5f2d2ae"></a>

bool GetPlatformSessionIdBase64(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PlatformSessionIdBase64_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformSessionIdBase64OrNull` <a id="structFRHAPI__SessionEvent_1a872f522ee36f1bcd6948f240a99c8014"></a>

FString * GetPlatformSessionIdBase64OrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformSessionIdBase64OrNull` <a id="structFRHAPI__SessionEvent_1a6b15ed5a98dd9492ca9f9f7a22ef0e96"></a>

const FString * GetPlatformSessionIdBase64OrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatformSessionIdBase64` <a id="structFRHAPI__SessionEvent_1af2b26e13296277b72dde4f45ac36851f"></a>

void SetPlatformSessionIdBase64(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformSessionIdBase64_Optional and also sets PlatformSessionIdBase64_IsSet to true.




### `ClearPlatformSessionIdBase64` <a id="structFRHAPI__SessionEvent_1a797529d65f280b7a5a00e8f5fe91774f"></a>

void ClearPlatformSessionIdBase64()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlatformSessionIdBase64_Optional and sets PlatformSessionIdBase64_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__SessionEvent_1ac3c70d0562b9b7e6dacb07626fbe57c1"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionEvent_1a45c2eac1c630d8b32a1abb0cf9d55e6f"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionEvent_1ae3e9b18849b48078a5cf4c9f3858d68b"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionEvent_1aed6d29f8d1ecb72ab1d614b5c3e39c14"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionEvent_1ad34a53a1ee2735394f05d6e66d0da3e8"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionEvent_1a8e2745134d60000e1fa7028e504bedcb"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionEvent_1aba198835b5f9f817b6de83a7f5ab4908"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionEvent_1a2b10f31ef9cefc481f1dc7f453cd6d35"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetTimestamp` <a id="structFRHAPI__SessionEvent_1a0285624bc44a30f13d72ccf1ae59e473"></a>

FDateTime & GetTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Timestamp.




### `GetTimestamp` <a id="structFRHAPI__SessionEvent_1a58da8a09c35351006be38a4bf1792d1a"></a>

const FDateTime & GetTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Timestamp.




### `SetTimestamp` <a id="structFRHAPI__SessionEvent_1a8b445eb1d0f8fdddc20b9760e3431545"></a>

void SetTimestamp(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Timestamp.





