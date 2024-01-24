# RHAPI_SessionEvent <a id="group__RHAPI__SessionEvent"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionEvent`](#structFRHAPI__SessionEvent) | Information about an event that occurred in a session.

## struct `FRHAPI_SessionEvent` <a id="structFRHAPI__SessionEvent"></a>

```
struct FRHAPI_SessionEvent
  : public FRHAPI_Model
```

Information about an event that occurred in a session.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventCode`](#structFRHAPI__SessionEvent_1ada7192668c25eaf79f536942f52ed0b7) | Code that identifies this type of event. See CommonEventCode for common examples.
`public FString `[`Description_Optional`](#structFRHAPI__SessionEvent_1abe8c2502538b58fc383b01f261f883c0) | Description metadata about the event.
`public bool `[`Description_IsSet`](#structFRHAPI__SessionEvent_1a175b0b4ec965516f3b437beb1480bfbb) | true if Description_Optional has been set to a value
`public int32 `[`SourcePlayerId_Optional`](#structFRHAPI__SessionEvent_1aa515b57425a7d7076849029ba5ed7295) | Player who triggered the event.
`public bool `[`SourcePlayerId_IsSet`](#structFRHAPI__SessionEvent_1ae42de2978b5d499c17db28f66cdc2574) | true if SourcePlayerId_Optional has been set to a value
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__SessionEvent_1a81f9e69f07e63785518a74b6324580f4) | Player who triggered the event.
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__SessionEvent_1abe95ddaa05cdc349003086aa387b48cd) | true if SourcePlayerUuid_Optional has been set to a value
`public int32 `[`TargetPlayerId_Optional`](#structFRHAPI__SessionEvent_1a4365a24b63a86dfe383ea3cebf12b5e1) | Player who the event was targetted toward, if relevant.
`public bool `[`TargetPlayerId_IsSet`](#structFRHAPI__SessionEvent_1a6103dbb6e81a8141af54e73cb90d4b9c) | true if TargetPlayerId_Optional has been set to a value
`public FGuid `[`TargetPlayerUuid_Optional`](#structFRHAPI__SessionEvent_1a9261bcec138cb28b7d218736fe96009f) | Player who the event was targetted toward, if relevant.
`public bool `[`TargetPlayerUuid_IsSet`](#structFRHAPI__SessionEvent_1abb6691ca17854d7f8e493c1b51c77603) | true if TargetPlayerUuid_Optional has been set to a value
`public FString `[`Instance_Optional`](#structFRHAPI__SessionEvent_1ab3d4a6169c5cfab343dd8ceca08bd611) | Instance that was active at the time of the event.
`public bool `[`Instance_IsSet`](#structFRHAPI__SessionEvent_1afea379dd4bd02b5f977e25ddc6d3cb98) | true if Instance_Optional has been set to a value
`public FString `[`Match_Optional`](#structFRHAPI__SessionEvent_1ae1014951cb8bbb932d680d3f0d5b9e4d) | Match that was active at the time of the event.
`public bool `[`Match_IsSet`](#structFRHAPI__SessionEvent_1a5916e2315556f522e63401bcfcc3010c) | true if Match_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__SessionEvent_1a5b711158057defc2182c719e549a79f5) | Relevant platform.
`public bool `[`Platform_IsSet`](#structFRHAPI__SessionEvent_1a2cf1f03e58d1a987849317cec3d8ad2b) | true if Platform_Optional has been set to a value
`public FString `[`PlatformSessionIdBase64_Optional`](#structFRHAPI__SessionEvent_1a5d17415a482fd903435bfcf767c76aef) | Relevant platform session id.
`public bool `[`PlatformSessionIdBase64_IsSet`](#structFRHAPI__SessionEvent_1a86c10008c5c3f1d467da3e722c88a173) | true if PlatformSessionIdBase64_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionEvent_1a93a98860d513d172f40664eb623ae400) | custom data about this event
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionEvent_1a4f59e4b523724ef75c3108f6594daf99) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Timestamp`](#structFRHAPI__SessionEvent_1ac6341064f04e3ae7cf02057c3518a8ca) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionEvent_1a8e1449cf19336e0f466a4cb77804c3fe)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionEvent_1a02c391532110c5bdae07e6bd7a19a5c0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventCode`](#structFRHAPI__SessionEvent_1a48e43b1cf126641984694824cdc8e4b0)`()` | Gets the value of EventCode.
`public inline const FString & `[`GetEventCode`](#structFRHAPI__SessionEvent_1a85a297de3b90425c68633750fb2f5eae)`() const` | Gets the value of EventCode.
`public inline void `[`SetEventCode`](#structFRHAPI__SessionEvent_1a789e2a8a080c080170f7ad4829131399)`(FString NewValue)` | Sets the value of EventCode.
`public inline FString & `[`GetDescription`](#structFRHAPI__SessionEvent_1a033023a3e9abf89505a6be54559396b9)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEvent_1a7d333fe0a6751d4f20ae73a179b5c85f)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEvent_1aec79544001384ffee489c8f930827768)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__SessionEvent_1a38b4cfaaa4f5f219541ff824521dbeb5)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEvent_1aafb644bf8803129c7356244af2018fff)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEvent_1ade42b301beb4933a43055aa326040417)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__SessionEvent_1aabf164cf96ed14c239ad7497de37a9fe)`(FString NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`ClearDescription`](#structFRHAPI__SessionEvent_1a19ece9a45c4e554101aab849c2821874)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionDefaultValue`](#structFRHAPI__SessionEvent_1a1ce8014002624b1c161d52155345a846)`() const` | Returns true if Description_Optional is set and matches the default value.
`public inline void `[`SetDescriptionToDefault`](#structFRHAPI__SessionEvent_1adad6f2848d11f0294c377c6ab07010f1)`()` | Sets the value of Description_Optional to its default and also sets Description_IsSet to true.
`public inline int32 & `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1a0edce9f8136bbe02ac3b480fdfbb61f9)`()` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1aa52dbf1ddd3f8a203025bc7aec1a3457)`() const` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1a63aa0eba0a565a00efc366512e76aa6b)`(const int32 & DefaultValue) const` | Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1afdd3517c381a2d9780d7aa0f3508fa7d)`(int32 & OutValue) const` | Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__SessionEvent_1a2aef94777a867498dfdf8211f4631fe0)`()` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__SessionEvent_1a0e083bcd446710c3b0d89d8d69b79a96)`() const` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerId`](#structFRHAPI__SessionEvent_1af97d102fc73644bc426c58f6fa02b89c)`(int32 NewValue)` | Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.
`public inline void `[`ClearSourcePlayerId`](#structFRHAPI__SessionEvent_1a26f36471920a06291f2c73192a7ed0fe)`()` | Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.
`public inline bool `[`IsSourcePlayerIdDefaultValue`](#structFRHAPI__SessionEvent_1a16cec2cfd4335037e242e3a8ea52781a)`() const` | Returns true if SourcePlayerId_Optional is set and matches the default value.
`public inline void `[`SetSourcePlayerIdToDefault`](#structFRHAPI__SessionEvent_1a2cefa3bde4a551c7154b48c2cc9f49eb)`()` | Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.
`public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1aca377a2417000d257cc373187eacfbfd)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a217dbbe0b364666e926f27e17fc256f9)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1af324fe03c397dde0d0ec08be5d9e0050)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a6dc6260c477267f2e961bf1ebee9ab8c)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__SessionEvent_1a9893bd75b442af4c97e2fad15b93aabd)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__SessionEvent_1ab24ee9854cd771ac7fba908ea9859f5e)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a729d1b1c2f9d1a62babe731db3dd3e61)`(FGuid NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a12f0e25853a85ef30397e1936f793de7)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline int32 & `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1a151bfac77d3b8110e617ae1ec97d2911)`()` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1a29987296af40ce965e22edb2a7566904)`() const` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1a48308a30ef35648888fc9a850961d0c1)`(const int32 & DefaultValue) const` | Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1aba78bcf538a7a8abb78bd2d0e224baf1)`(int32 & OutValue) const` | Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__SessionEvent_1a6928c161f79f64328bc4a827be28e3b1)`()` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__SessionEvent_1aae6aae8bd68a90c502f8d1c6bf6117b5)`() const` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetPlayerId`](#structFRHAPI__SessionEvent_1ab2a9aa6c7d967b0a79e861770041e4b1)`(int32 NewValue)` | Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.
`public inline void `[`ClearTargetPlayerId`](#structFRHAPI__SessionEvent_1ad4615f30b862210d543982105389cfe8)`()` | Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.
`public inline bool `[`IsTargetPlayerIdDefaultValue`](#structFRHAPI__SessionEvent_1a52449a0671a6dde6f70d64378defaf45)`() const` | Returns true if TargetPlayerId_Optional is set and matches the default value.
`public inline void `[`SetTargetPlayerIdToDefault`](#structFRHAPI__SessionEvent_1ad61b0ff6814801ac2f73e333d6268999)`()` | Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.
`public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a697c3282519a043aefe742d1e27891e5)`()` | Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a0118de113410611342f22e0d9e96dc27)`() const` | Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1ae374456134407e7fc1b22a1787ab2f74)`(const FGuid & DefaultValue) const` | Gets the value of TargetPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a9d9878b8c04b80a9c04f0cc25d297267)`(FGuid & OutValue) const` | Fills OutValue with the value of TargetPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__SessionEvent_1a92eda87a198a2940820c8d805e9d9737)`()` | Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__SessionEvent_1a5af70d7f9129c70a8bffd6e36723a296)`() const` | Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a9d7c0d8ae0b02170afe01616b99183a4)`(FGuid NewValue)` | Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true.
`public inline void `[`ClearTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a3d7be30fb52bf33409cbb22e9b460f76)`()` | Clears the value of TargetPlayerUuid_Optional and sets TargetPlayerUuid_IsSet to false.
`public inline FString & `[`GetInstance`](#structFRHAPI__SessionEvent_1a3dd350bdbbaeb755df5ab7b1e9af681e)`()` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstance`](#structFRHAPI__SessionEvent_1a3ddae4387223ebb350ab06be9bb1c461)`() const` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstance`](#structFRHAPI__SessionEvent_1a746eebbfa8b40a5c03977bf18510e8eb)`(const FString & DefaultValue) const` | Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstance`](#structFRHAPI__SessionEvent_1a2e1560e398eae2b00e8573db3cdcdcb3)`(FString & OutValue) const` | Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceOrNull`](#structFRHAPI__SessionEvent_1a4b2720106407519e96691dcb0a1c7385)`()` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceOrNull`](#structFRHAPI__SessionEvent_1aa756214fe8522c875df5dc0bb0e2d69e)`() const` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstance`](#structFRHAPI__SessionEvent_1ab0b3f269ba0b694bff399cbcaa496cd0)`(FString NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true.
`public inline void `[`ClearInstance`](#structFRHAPI__SessionEvent_1ac8e8ef1f82940116cc9f97baa138b8c2)`()` | Clears the value of Instance_Optional and sets Instance_IsSet to false.
`public inline FString & `[`GetMatch`](#structFRHAPI__SessionEvent_1a747e0795519b5209b105de36cbc16488)`()` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatch`](#structFRHAPI__SessionEvent_1a8864d5ae078e6a43c55240f6e86d25fc)`() const` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatch`](#structFRHAPI__SessionEvent_1a8f956797bd60e4f0f28a4efa909f638f)`(const FString & DefaultValue) const` | Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatch`](#structFRHAPI__SessionEvent_1a46c161e6fd0669edf4f057c8c21de4ef)`(FString & OutValue) const` | Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchOrNull`](#structFRHAPI__SessionEvent_1af33f2b327a4d5a352e66d47913053061)`()` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchOrNull`](#structFRHAPI__SessionEvent_1ad4ce66a8bdb00e0e94a6270600b99e71)`() const` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatch`](#structFRHAPI__SessionEvent_1a9c2a5edaf4fb50aa9130d990cb65bbfe)`(FString NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true.
`public inline void `[`ClearMatch`](#structFRHAPI__SessionEvent_1a23cff6a6b125c9324e73844a4d0c5a10)`()` | Clears the value of Match_Optional and sets Match_IsSet to false.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SessionEvent_1a28648ea8318ec7159e59ee016620fa8b)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SessionEvent_1a03390fb91786da9a1a4dfd947e9f4bc7)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SessionEvent_1a3e9f684ca118e881cf8110790ed781b5)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__SessionEvent_1aa5273494fc37655cdfb15816dc2fc393)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SessionEvent_1ada359d0f9c9b81f712bde222c9a8297c)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SessionEvent_1a0f2afecce301a0610bf5a31ded5d6a87)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__SessionEvent_1a09c789b858549ca9a17ab4635ed63562)`(ERHAPI_Platform NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`ClearPlatform`](#structFRHAPI__SessionEvent_1a7343f450b956b0bc34c4c60d2eaa0c6a)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1abee51da3b1d68174f35599befe5f682e)`()` | Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1ad1ee4a584a5399abefd5fb17d3320faa)`() const` | Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1a5dc45cf48e994ebdcf3db7d76a9b5782)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionIdBase64_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1a6aacef8490050f6a6652c0c0e5f2d2ae)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionIdBase64_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformSessionIdBase64OrNull`](#structFRHAPI__SessionEvent_1a872f522ee36f1bcd6948f240a99c8014)`()` | Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformSessionIdBase64OrNull`](#structFRHAPI__SessionEvent_1a6b15ed5a98dd9492ca9f9f7a22ef0e96)`() const` | Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1af2b26e13296277b72dde4f45ac36851f)`(FString NewValue)` | Sets the value of PlatformSessionIdBase64_Optional and also sets PlatformSessionIdBase64_IsSet to true.
`public inline void `[`ClearPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1a797529d65f280b7a5a00e8f5fe91774f)`()` | Clears the value of PlatformSessionIdBase64_Optional and sets PlatformSessionIdBase64_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEvent_1ac3c70d0562b9b7e6dacb07626fbe57c1)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEvent_1a45c2eac1c630d8b32a1abb0cf9d55e6f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEvent_1ae3e9b18849b48078a5cf4c9f3858d68b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionEvent_1aed6d29f8d1ecb72ab1d614b5c3e39c14)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEvent_1ad34a53a1ee2735394f05d6e66d0da3e8)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEvent_1a8e2745134d60000e1fa7028e504bedcb)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionEvent_1aba198835b5f9f817b6de83a7f5ab4908)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionEvent_1a2b10f31ef9cefc481f1dc7f453cd6d35)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEvent_1a0285624bc44a30f13d72ccf1ae59e473)`()` | Gets the value of Timestamp.
`public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEvent_1a58da8a09c35351006be38a4bf1792d1a)`() const` | Gets the value of Timestamp.
`public inline void `[`SetTimestamp`](#structFRHAPI__SessionEvent_1a8b445eb1d0f8fdddc20b9760e3431545)`(FDateTime NewValue)` | Sets the value of Timestamp.

#### Members

#### `public FString `[`EventCode`](#structFRHAPI__SessionEvent_1ada7192668c25eaf79f536942f52ed0b7) <a id="structFRHAPI__SessionEvent_1ada7192668c25eaf79f536942f52ed0b7"></a>

Code that identifies this type of event. See CommonEventCode for common examples.

<br>
#### `public FString `[`Description_Optional`](#structFRHAPI__SessionEvent_1abe8c2502538b58fc383b01f261f883c0) <a id="structFRHAPI__SessionEvent_1abe8c2502538b58fc383b01f261f883c0"></a>

Description metadata about the event.

<br>
#### `public bool `[`Description_IsSet`](#structFRHAPI__SessionEvent_1a175b0b4ec965516f3b437beb1480bfbb) <a id="structFRHAPI__SessionEvent_1a175b0b4ec965516f3b437beb1480bfbb"></a>

true if Description_Optional has been set to a value

<br>
#### `public int32 `[`SourcePlayerId_Optional`](#structFRHAPI__SessionEvent_1aa515b57425a7d7076849029ba5ed7295) <a id="structFRHAPI__SessionEvent_1aa515b57425a7d7076849029ba5ed7295"></a>

Player who triggered the event.

<br>
#### `public bool `[`SourcePlayerId_IsSet`](#structFRHAPI__SessionEvent_1ae42de2978b5d499c17db28f66cdc2574) <a id="structFRHAPI__SessionEvent_1ae42de2978b5d499c17db28f66cdc2574"></a>

true if SourcePlayerId_Optional has been set to a value

<br>
#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__SessionEvent_1a81f9e69f07e63785518a74b6324580f4) <a id="structFRHAPI__SessionEvent_1a81f9e69f07e63785518a74b6324580f4"></a>

Player who triggered the event.

<br>
#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__SessionEvent_1abe95ddaa05cdc349003086aa387b48cd) <a id="structFRHAPI__SessionEvent_1abe95ddaa05cdc349003086aa387b48cd"></a>

true if SourcePlayerUuid_Optional has been set to a value

<br>
#### `public int32 `[`TargetPlayerId_Optional`](#structFRHAPI__SessionEvent_1a4365a24b63a86dfe383ea3cebf12b5e1) <a id="structFRHAPI__SessionEvent_1a4365a24b63a86dfe383ea3cebf12b5e1"></a>

Player who the event was targetted toward, if relevant.

<br>
#### `public bool `[`TargetPlayerId_IsSet`](#structFRHAPI__SessionEvent_1a6103dbb6e81a8141af54e73cb90d4b9c) <a id="structFRHAPI__SessionEvent_1a6103dbb6e81a8141af54e73cb90d4b9c"></a>

true if TargetPlayerId_Optional has been set to a value

<br>
#### `public FGuid `[`TargetPlayerUuid_Optional`](#structFRHAPI__SessionEvent_1a9261bcec138cb28b7d218736fe96009f) <a id="structFRHAPI__SessionEvent_1a9261bcec138cb28b7d218736fe96009f"></a>

Player who the event was targetted toward, if relevant.

<br>
#### `public bool `[`TargetPlayerUuid_IsSet`](#structFRHAPI__SessionEvent_1abb6691ca17854d7f8e493c1b51c77603) <a id="structFRHAPI__SessionEvent_1abb6691ca17854d7f8e493c1b51c77603"></a>

true if TargetPlayerUuid_Optional has been set to a value

<br>
#### `public FString `[`Instance_Optional`](#structFRHAPI__SessionEvent_1ab3d4a6169c5cfab343dd8ceca08bd611) <a id="structFRHAPI__SessionEvent_1ab3d4a6169c5cfab343dd8ceca08bd611"></a>

Instance that was active at the time of the event.

<br>
#### `public bool `[`Instance_IsSet`](#structFRHAPI__SessionEvent_1afea379dd4bd02b5f977e25ddc6d3cb98) <a id="structFRHAPI__SessionEvent_1afea379dd4bd02b5f977e25ddc6d3cb98"></a>

true if Instance_Optional has been set to a value

<br>
#### `public FString `[`Match_Optional`](#structFRHAPI__SessionEvent_1ae1014951cb8bbb932d680d3f0d5b9e4d) <a id="structFRHAPI__SessionEvent_1ae1014951cb8bbb932d680d3f0d5b9e4d"></a>

Match that was active at the time of the event.

<br>
#### `public bool `[`Match_IsSet`](#structFRHAPI__SessionEvent_1a5916e2315556f522e63401bcfcc3010c) <a id="structFRHAPI__SessionEvent_1a5916e2315556f522e63401bcfcc3010c"></a>

true if Match_Optional has been set to a value

<br>
#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__SessionEvent_1a5b711158057defc2182c719e549a79f5) <a id="structFRHAPI__SessionEvent_1a5b711158057defc2182c719e549a79f5"></a>

Relevant platform.

<br>
#### `public bool `[`Platform_IsSet`](#structFRHAPI__SessionEvent_1a2cf1f03e58d1a987849317cec3d8ad2b) <a id="structFRHAPI__SessionEvent_1a2cf1f03e58d1a987849317cec3d8ad2b"></a>

true if Platform_Optional has been set to a value

<br>
#### `public FString `[`PlatformSessionIdBase64_Optional`](#structFRHAPI__SessionEvent_1a5d17415a482fd903435bfcf767c76aef) <a id="structFRHAPI__SessionEvent_1a5d17415a482fd903435bfcf767c76aef"></a>

Relevant platform session id.

<br>
#### `public bool `[`PlatformSessionIdBase64_IsSet`](#structFRHAPI__SessionEvent_1a86c10008c5c3f1d467da3e722c88a173) <a id="structFRHAPI__SessionEvent_1a86c10008c5c3f1d467da3e722c88a173"></a>

true if PlatformSessionIdBase64_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionEvent_1a93a98860d513d172f40664eb623ae400) <a id="structFRHAPI__SessionEvent_1a93a98860d513d172f40664eb623ae400"></a>

custom data about this event

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionEvent_1a4f59e4b523724ef75c3108f6594daf99) <a id="structFRHAPI__SessionEvent_1a4f59e4b523724ef75c3108f6594daf99"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FDateTime `[`Timestamp`](#structFRHAPI__SessionEvent_1ac6341064f04e3ae7cf02057c3518a8ca) <a id="structFRHAPI__SessionEvent_1ac6341064f04e3ae7cf02057c3518a8ca"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionEvent_1a8e1449cf19336e0f466a4cb77804c3fe)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionEvent_1a8e1449cf19336e0f466a4cb77804c3fe"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionEvent_1a02c391532110c5bdae07e6bd7a19a5c0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionEvent_1a02c391532110c5bdae07e6bd7a19a5c0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetEventCode`](#structFRHAPI__SessionEvent_1a48e43b1cf126641984694824cdc8e4b0)`()` <a id="structFRHAPI__SessionEvent_1a48e43b1cf126641984694824cdc8e4b0"></a>

Gets the value of EventCode.

<br>
#### `public inline const FString & `[`GetEventCode`](#structFRHAPI__SessionEvent_1a85a297de3b90425c68633750fb2f5eae)`() const` <a id="structFRHAPI__SessionEvent_1a85a297de3b90425c68633750fb2f5eae"></a>

Gets the value of EventCode.

<br>
#### `public inline void `[`SetEventCode`](#structFRHAPI__SessionEvent_1a789e2a8a080c080170f7ad4829131399)`(FString NewValue)` <a id="structFRHAPI__SessionEvent_1a789e2a8a080c080170f7ad4829131399"></a>

Sets the value of EventCode.

<br>
#### `public inline FString & `[`GetDescription`](#structFRHAPI__SessionEvent_1a033023a3e9abf89505a6be54559396b9)`()` <a id="structFRHAPI__SessionEvent_1a033023a3e9abf89505a6be54559396b9"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEvent_1a7d333fe0a6751d4f20ae73a179b5c85f)`() const` <a id="structFRHAPI__SessionEvent_1a7d333fe0a6751d4f20ae73a179b5c85f"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEvent_1aec79544001384ffee489c8f930827768)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1aec79544001384ffee489c8f930827768"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDescription`](#structFRHAPI__SessionEvent_1a38b4cfaaa4f5f219541ff824521dbeb5)`(FString & OutValue) const` <a id="structFRHAPI__SessionEvent_1a38b4cfaaa4f5f219541ff824521dbeb5"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEvent_1aafb644bf8803129c7356244af2018fff)`()` <a id="structFRHAPI__SessionEvent_1aafb644bf8803129c7356244af2018fff"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEvent_1ade42b301beb4933a43055aa326040417)`() const` <a id="structFRHAPI__SessionEvent_1ade42b301beb4933a43055aa326040417"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDescription`](#structFRHAPI__SessionEvent_1aabf164cf96ed14c239ad7497de37a9fe)`(FString NewValue)` <a id="structFRHAPI__SessionEvent_1aabf164cf96ed14c239ad7497de37a9fe"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

<br>
#### `public inline void `[`ClearDescription`](#structFRHAPI__SessionEvent_1a19ece9a45c4e554101aab849c2821874)`()` <a id="structFRHAPI__SessionEvent_1a19ece9a45c4e554101aab849c2821874"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

<br>
#### `public inline bool `[`IsDescriptionDefaultValue`](#structFRHAPI__SessionEvent_1a1ce8014002624b1c161d52155345a846)`() const` <a id="structFRHAPI__SessionEvent_1a1ce8014002624b1c161d52155345a846"></a>

Returns true if Description_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDescriptionToDefault`](#structFRHAPI__SessionEvent_1adad6f2848d11f0294c377c6ab07010f1)`()` <a id="structFRHAPI__SessionEvent_1adad6f2848d11f0294c377c6ab07010f1"></a>

Sets the value of Description_Optional to its default and also sets Description_IsSet to true.

<br>
#### `public inline int32 & `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1a0edce9f8136bbe02ac3b480fdfbb61f9)`()` <a id="structFRHAPI__SessionEvent_1a0edce9f8136bbe02ac3b480fdfbb61f9"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1aa52dbf1ddd3f8a203025bc7aec1a3457)`() const` <a id="structFRHAPI__SessionEvent_1aa52dbf1ddd3f8a203025bc7aec1a3457"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1a63aa0eba0a565a00efc366512e76aa6b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1a63aa0eba0a565a00efc366512e76aa6b"></a>

Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSourcePlayerId`](#structFRHAPI__SessionEvent_1afdd3517c381a2d9780d7aa0f3508fa7d)`(int32 & OutValue) const` <a id="structFRHAPI__SessionEvent_1afdd3517c381a2d9780d7aa0f3508fa7d"></a>

Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__SessionEvent_1a2aef94777a867498dfdf8211f4631fe0)`()` <a id="structFRHAPI__SessionEvent_1a2aef94777a867498dfdf8211f4631fe0"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__SessionEvent_1a0e083bcd446710c3b0d89d8d69b79a96)`() const` <a id="structFRHAPI__SessionEvent_1a0e083bcd446710c3b0d89d8d69b79a96"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSourcePlayerId`](#structFRHAPI__SessionEvent_1af97d102fc73644bc426c58f6fa02b89c)`(int32 NewValue)` <a id="structFRHAPI__SessionEvent_1af97d102fc73644bc426c58f6fa02b89c"></a>

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearSourcePlayerId`](#structFRHAPI__SessionEvent_1a26f36471920a06291f2c73192a7ed0fe)`()` <a id="structFRHAPI__SessionEvent_1a26f36471920a06291f2c73192a7ed0fe"></a>

Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsSourcePlayerIdDefaultValue`](#structFRHAPI__SessionEvent_1a16cec2cfd4335037e242e3a8ea52781a)`() const` <a id="structFRHAPI__SessionEvent_1a16cec2cfd4335037e242e3a8ea52781a"></a>

Returns true if SourcePlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetSourcePlayerIdToDefault`](#structFRHAPI__SessionEvent_1a2cefa3bde4a551c7154b48c2cc9f49eb)`()` <a id="structFRHAPI__SessionEvent_1a2cefa3bde4a551c7154b48c2cc9f49eb"></a>

Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1aca377a2417000d257cc373187eacfbfd)`()` <a id="structFRHAPI__SessionEvent_1aca377a2417000d257cc373187eacfbfd"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a217dbbe0b364666e926f27e17fc256f9)`() const` <a id="structFRHAPI__SessionEvent_1a217dbbe0b364666e926f27e17fc256f9"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1af324fe03c397dde0d0ec08be5d9e0050)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1af324fe03c397dde0d0ec08be5d9e0050"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a6dc6260c477267f2e961bf1ebee9ab8c)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionEvent_1a6dc6260c477267f2e961bf1ebee9ab8c"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__SessionEvent_1a9893bd75b442af4c97e2fad15b93aabd)`()` <a id="structFRHAPI__SessionEvent_1a9893bd75b442af4c97e2fad15b93aabd"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__SessionEvent_1ab24ee9854cd771ac7fba908ea9859f5e)`() const` <a id="structFRHAPI__SessionEvent_1ab24ee9854cd771ac7fba908ea9859f5e"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a729d1b1c2f9d1a62babe731db3dd3e61)`(FGuid NewValue)` <a id="structFRHAPI__SessionEvent_1a729d1b1c2f9d1a62babe731db3dd3e61"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__SessionEvent_1a12f0e25853a85ef30397e1936f793de7)`()` <a id="structFRHAPI__SessionEvent_1a12f0e25853a85ef30397e1936f793de7"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

<br>
#### `public inline int32 & `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1a151bfac77d3b8110e617ae1ec97d2911)`()` <a id="structFRHAPI__SessionEvent_1a151bfac77d3b8110e617ae1ec97d2911"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1a29987296af40ce965e22edb2a7566904)`() const` <a id="structFRHAPI__SessionEvent_1a29987296af40ce965e22edb2a7566904"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1a48308a30ef35648888fc9a850961d0c1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1a48308a30ef35648888fc9a850961d0c1"></a>

Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTargetPlayerId`](#structFRHAPI__SessionEvent_1aba78bcf538a7a8abb78bd2d0e224baf1)`(int32 & OutValue) const` <a id="structFRHAPI__SessionEvent_1aba78bcf538a7a8abb78bd2d0e224baf1"></a>

Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__SessionEvent_1a6928c161f79f64328bc4a827be28e3b1)`()` <a id="structFRHAPI__SessionEvent_1a6928c161f79f64328bc4a827be28e3b1"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__SessionEvent_1aae6aae8bd68a90c502f8d1c6bf6117b5)`() const` <a id="structFRHAPI__SessionEvent_1aae6aae8bd68a90c502f8d1c6bf6117b5"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTargetPlayerId`](#structFRHAPI__SessionEvent_1ab2a9aa6c7d967b0a79e861770041e4b1)`(int32 NewValue)` <a id="structFRHAPI__SessionEvent_1ab2a9aa6c7d967b0a79e861770041e4b1"></a>

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearTargetPlayerId`](#structFRHAPI__SessionEvent_1ad4615f30b862210d543982105389cfe8)`()` <a id="structFRHAPI__SessionEvent_1ad4615f30b862210d543982105389cfe8"></a>

Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsTargetPlayerIdDefaultValue`](#structFRHAPI__SessionEvent_1a52449a0671a6dde6f70d64378defaf45)`() const` <a id="structFRHAPI__SessionEvent_1a52449a0671a6dde6f70d64378defaf45"></a>

Returns true if TargetPlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetTargetPlayerIdToDefault`](#structFRHAPI__SessionEvent_1ad61b0ff6814801ac2f73e333d6268999)`()` <a id="structFRHAPI__SessionEvent_1ad61b0ff6814801ac2f73e333d6268999"></a>

Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a697c3282519a043aefe742d1e27891e5)`()` <a id="structFRHAPI__SessionEvent_1a697c3282519a043aefe742d1e27891e5"></a>

Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a0118de113410611342f22e0d9e96dc27)`() const` <a id="structFRHAPI__SessionEvent_1a0118de113410611342f22e0d9e96dc27"></a>

Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1ae374456134407e7fc1b22a1787ab2f74)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1ae374456134407e7fc1b22a1787ab2f74"></a>

Gets the value of TargetPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a9d9878b8c04b80a9c04f0cc25d297267)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionEvent_1a9d9878b8c04b80a9c04f0cc25d297267"></a>

Fills OutValue with the value of TargetPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__SessionEvent_1a92eda87a198a2940820c8d805e9d9737)`()` <a id="structFRHAPI__SessionEvent_1a92eda87a198a2940820c8d805e9d9737"></a>

Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__SessionEvent_1a5af70d7f9129c70a8bffd6e36723a296)`() const` <a id="structFRHAPI__SessionEvent_1a5af70d7f9129c70a8bffd6e36723a296"></a>

Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a9d7c0d8ae0b02170afe01616b99183a4)`(FGuid NewValue)` <a id="structFRHAPI__SessionEvent_1a9d7c0d8ae0b02170afe01616b99183a4"></a>

Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearTargetPlayerUuid`](#structFRHAPI__SessionEvent_1a3d7be30fb52bf33409cbb22e9b460f76)`()` <a id="structFRHAPI__SessionEvent_1a3d7be30fb52bf33409cbb22e9b460f76"></a>

Clears the value of TargetPlayerUuid_Optional and sets TargetPlayerUuid_IsSet to false.

<br>
#### `public inline FString & `[`GetInstance`](#structFRHAPI__SessionEvent_1a3dd350bdbbaeb755df5ab7b1e9af681e)`()` <a id="structFRHAPI__SessionEvent_1a3dd350bdbbaeb755df5ab7b1e9af681e"></a>

Gets the value of Instance_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstance`](#structFRHAPI__SessionEvent_1a3ddae4387223ebb350ab06be9bb1c461)`() const` <a id="structFRHAPI__SessionEvent_1a3ddae4387223ebb350ab06be9bb1c461"></a>

Gets the value of Instance_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstance`](#structFRHAPI__SessionEvent_1a746eebbfa8b40a5c03977bf18510e8eb)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1a746eebbfa8b40a5c03977bf18510e8eb"></a>

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstance`](#structFRHAPI__SessionEvent_1a2e1560e398eae2b00e8573db3cdcdcb3)`(FString & OutValue) const` <a id="structFRHAPI__SessionEvent_1a2e1560e398eae2b00e8573db3cdcdcb3"></a>

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceOrNull`](#structFRHAPI__SessionEvent_1a4b2720106407519e96691dcb0a1c7385)`()` <a id="structFRHAPI__SessionEvent_1a4b2720106407519e96691dcb0a1c7385"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceOrNull`](#structFRHAPI__SessionEvent_1aa756214fe8522c875df5dc0bb0e2d69e)`() const` <a id="structFRHAPI__SessionEvent_1aa756214fe8522c875df5dc0bb0e2d69e"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstance`](#structFRHAPI__SessionEvent_1ab0b3f269ba0b694bff399cbcaa496cd0)`(FString NewValue)` <a id="structFRHAPI__SessionEvent_1ab0b3f269ba0b694bff399cbcaa496cd0"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true.

<br>
#### `public inline void `[`ClearInstance`](#structFRHAPI__SessionEvent_1ac8e8ef1f82940116cc9f97baa138b8c2)`()` <a id="structFRHAPI__SessionEvent_1ac8e8ef1f82940116cc9f97baa138b8c2"></a>

Clears the value of Instance_Optional and sets Instance_IsSet to false.

<br>
#### `public inline FString & `[`GetMatch`](#structFRHAPI__SessionEvent_1a747e0795519b5209b105de36cbc16488)`()` <a id="structFRHAPI__SessionEvent_1a747e0795519b5209b105de36cbc16488"></a>

Gets the value of Match_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatch`](#structFRHAPI__SessionEvent_1a8864d5ae078e6a43c55240f6e86d25fc)`() const` <a id="structFRHAPI__SessionEvent_1a8864d5ae078e6a43c55240f6e86d25fc"></a>

Gets the value of Match_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatch`](#structFRHAPI__SessionEvent_1a8f956797bd60e4f0f28a4efa909f638f)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1a8f956797bd60e4f0f28a4efa909f638f"></a>

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatch`](#structFRHAPI__SessionEvent_1a46c161e6fd0669edf4f057c8c21de4ef)`(FString & OutValue) const` <a id="structFRHAPI__SessionEvent_1a46c161e6fd0669edf4f057c8c21de4ef"></a>

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchOrNull`](#structFRHAPI__SessionEvent_1af33f2b327a4d5a352e66d47913053061)`()` <a id="structFRHAPI__SessionEvent_1af33f2b327a4d5a352e66d47913053061"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchOrNull`](#structFRHAPI__SessionEvent_1ad4ce66a8bdb00e0e94a6270600b99e71)`() const` <a id="structFRHAPI__SessionEvent_1ad4ce66a8bdb00e0e94a6270600b99e71"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatch`](#structFRHAPI__SessionEvent_1a9c2a5edaf4fb50aa9130d990cb65bbfe)`(FString NewValue)` <a id="structFRHAPI__SessionEvent_1a9c2a5edaf4fb50aa9130d990cb65bbfe"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true.

<br>
#### `public inline void `[`ClearMatch`](#structFRHAPI__SessionEvent_1a23cff6a6b125c9324e73844a4d0c5a10)`()` <a id="structFRHAPI__SessionEvent_1a23cff6a6b125c9324e73844a4d0c5a10"></a>

Clears the value of Match_Optional and sets Match_IsSet to false.

<br>
#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SessionEvent_1a28648ea8318ec7159e59ee016620fa8b)`()` <a id="structFRHAPI__SessionEvent_1a28648ea8318ec7159e59ee016620fa8b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SessionEvent_1a03390fb91786da9a1a4dfd947e9f4bc7)`() const` <a id="structFRHAPI__SessionEvent_1a03390fb91786da9a1a4dfd947e9f4bc7"></a>

Gets the value of Platform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SessionEvent_1a3e9f684ca118e881cf8110790ed781b5)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1a3e9f684ca118e881cf8110790ed781b5"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatform`](#structFRHAPI__SessionEvent_1aa5273494fc37655cdfb15816dc2fc393)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__SessionEvent_1aa5273494fc37655cdfb15816dc2fc393"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SessionEvent_1ada359d0f9c9b81f712bde222c9a8297c)`()` <a id="structFRHAPI__SessionEvent_1ada359d0f9c9b81f712bde222c9a8297c"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SessionEvent_1a0f2afecce301a0610bf5a31ded5d6a87)`() const` <a id="structFRHAPI__SessionEvent_1a0f2afecce301a0610bf5a31ded5d6a87"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatform`](#structFRHAPI__SessionEvent_1a09c789b858549ca9a17ab4635ed63562)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__SessionEvent_1a09c789b858549ca9a17ab4635ed63562"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

<br>
#### `public inline void `[`ClearPlatform`](#structFRHAPI__SessionEvent_1a7343f450b956b0bc34c4c60d2eaa0c6a)`()` <a id="structFRHAPI__SessionEvent_1a7343f450b956b0bc34c4c60d2eaa0c6a"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

<br>
#### `public inline FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1abee51da3b1d68174f35599befe5f682e)`()` <a id="structFRHAPI__SessionEvent_1abee51da3b1d68174f35599befe5f682e"></a>

Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1ad1ee4a584a5399abefd5fb17d3320faa)`() const` <a id="structFRHAPI__SessionEvent_1ad1ee4a584a5399abefd5fb17d3320faa"></a>

Gets the value of PlatformSessionIdBase64_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1a5dc45cf48e994ebdcf3db7d76a9b5782)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1a5dc45cf48e994ebdcf3db7d76a9b5782"></a>

Gets the value of PlatformSessionIdBase64_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1a6aacef8490050f6a6652c0c0e5f2d2ae)`(FString & OutValue) const` <a id="structFRHAPI__SessionEvent_1a6aacef8490050f6a6652c0c0e5f2d2ae"></a>

Fills OutValue with the value of PlatformSessionIdBase64_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetPlatformSessionIdBase64OrNull`](#structFRHAPI__SessionEvent_1a872f522ee36f1bcd6948f240a99c8014)`()` <a id="structFRHAPI__SessionEvent_1a872f522ee36f1bcd6948f240a99c8014"></a>

Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetPlatformSessionIdBase64OrNull`](#structFRHAPI__SessionEvent_1a6b15ed5a98dd9492ca9f9f7a22ef0e96)`() const` <a id="structFRHAPI__SessionEvent_1a6b15ed5a98dd9492ca9f9f7a22ef0e96"></a>

Returns a pointer to PlatformSessionIdBase64_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1af2b26e13296277b72dde4f45ac36851f)`(FString NewValue)` <a id="structFRHAPI__SessionEvent_1af2b26e13296277b72dde4f45ac36851f"></a>

Sets the value of PlatformSessionIdBase64_Optional and also sets PlatformSessionIdBase64_IsSet to true.

<br>
#### `public inline void `[`ClearPlatformSessionIdBase64`](#structFRHAPI__SessionEvent_1a797529d65f280b7a5a00e8f5fe91774f)`()` <a id="structFRHAPI__SessionEvent_1a797529d65f280b7a5a00e8f5fe91774f"></a>

Clears the value of PlatformSessionIdBase64_Optional and sets PlatformSessionIdBase64_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEvent_1ac3c70d0562b9b7e6dacb07626fbe57c1)`()` <a id="structFRHAPI__SessionEvent_1ac3c70d0562b9b7e6dacb07626fbe57c1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEvent_1a45c2eac1c630d8b32a1abb0cf9d55e6f)`() const` <a id="structFRHAPI__SessionEvent_1a45c2eac1c630d8b32a1abb0cf9d55e6f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEvent_1ae3e9b18849b48078a5cf4c9f3858d68b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionEvent_1ae3e9b18849b48078a5cf4c9f3858d68b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionEvent_1aed6d29f8d1ecb72ab1d614b5c3e39c14)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionEvent_1aed6d29f8d1ecb72ab1d614b5c3e39c14"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEvent_1ad34a53a1ee2735394f05d6e66d0da3e8)`()` <a id="structFRHAPI__SessionEvent_1ad34a53a1ee2735394f05d6e66d0da3e8"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEvent_1a8e2745134d60000e1fa7028e504bedcb)`() const` <a id="structFRHAPI__SessionEvent_1a8e2745134d60000e1fa7028e504bedcb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionEvent_1aba198835b5f9f817b6de83a7f5ab4908)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionEvent_1aba198835b5f9f817b6de83a7f5ab4908"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionEvent_1a2b10f31ef9cefc481f1dc7f453cd6d35)`()` <a id="structFRHAPI__SessionEvent_1a2b10f31ef9cefc481f1dc7f453cd6d35"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEvent_1a0285624bc44a30f13d72ccf1ae59e473)`()` <a id="structFRHAPI__SessionEvent_1a0285624bc44a30f13d72ccf1ae59e473"></a>

Gets the value of Timestamp.

<br>
#### `public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEvent_1a58da8a09c35351006be38a4bf1792d1a)`() const` <a id="structFRHAPI__SessionEvent_1a58da8a09c35351006be38a4bf1792d1a"></a>

Gets the value of Timestamp.

<br>
#### `public inline void `[`SetTimestamp`](#structFRHAPI__SessionEvent_1a8b445eb1d0f8fdddc20b9760e3431545)`(FDateTime NewValue)` <a id="structFRHAPI__SessionEvent_1a8b445eb1d0f8fdddc20b9760e3431545"></a>

Sets the value of Timestamp.

<br>
