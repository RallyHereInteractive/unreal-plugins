---
title: RHAPI_MapConfigV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MapConfigV2`](#structFRHAPI__MapConfigV2) | Configuration about a specific map for an instance to load into.

## struct `FRHAPI_MapConfigV2` <a id="structFRHAPI__MapConfigV2"></a>

```
struct FRHAPI_MapConfigV2
  : public FRHAPI_Model
```

Configuration about a specific map for an instance to load into.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MapId`](#structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2) | ID to uniquely identify this map game.
`public FString `[`MapName`](#structFRHAPI__MapConfigV2_1a9f721ff64d45f27297e71c13228a80ea) | Name of the map the instance should load into.
`public FString `[`Mode_Optional`](#structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257) | Game mode for the instance to spawn in.
`public bool `[`Mode_IsSet`](#structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036) | true if Mode_Optional has been set to a value
`public float `[`MapWeight`](#structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719) | Chance that this map will get selected in a rotation list.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3) | Custom data to pass through to the instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae) | true if CustomData_Optional has been set to a value
`public FString `[`Name_Optional`](#structFRHAPI__MapConfigV2_1ac7508987a2b899fc40294d37e1f81c5b) | Human readable name for this map.
`public bool `[`Name_IsSet`](#structFRHAPI__MapConfigV2_1ab7f0473ee626ee99752d7c54a444a274) | true if Name_Optional has been set to a value
`public FString `[`Description_Optional`](#structFRHAPI__MapConfigV2_1a6179723e642c23a19733354d2a01979c) | Description of the map.
`public bool `[`Description_IsSet`](#structFRHAPI__MapConfigV2_1ae98bc8edd823f8531c7881acdf57aba5) | true if Description_Optional has been set to a value
`public FString `[`MiscParams_Optional`](#structFRHAPI__MapConfigV2_1ae2d540e4731432cf6fb3f2fc49064a18) | Misc params to be passed to the instance when using this map.
`public bool `[`MiscParams_IsSet`](#structFRHAPI__MapConfigV2_1aa8ec9eb44ef7861e4a103346a0210fb6) | true if MiscParams_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MapConfigV2_1a2a7a8cefd784d48e0d0e0823865dccd7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapConfigV2_1a1618ebe4f59889fd52dbcad2365a0b20)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1aeb7d1d42962cce6573fe62407945ede2)`()` | Gets the value of MapId.
`public inline FORCEINLINE const FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1a49abb982141bba974036b3847ba03239)`() const` | Gets the value of MapId.
`public inline FORCEINLINE void `[`SetMapId`](#structFRHAPI__MapConfigV2_1abf2e37656ca3399a1dffa29252824f87)`(const FString & NewValue)` | Sets the value of MapId.
`public inline FORCEINLINE void `[`SetMapId`](#structFRHAPI__MapConfigV2_1aed4e782edf527ddcd926183ababe49c4)`(FString && NewValue)` | Sets the value of MapId using move semantics.
`public inline FORCEINLINE FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1a09507bdacc15ae539a33dedcb7a4aae5)`()` | Gets the value of MapName.
`public inline FORCEINLINE const FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1ada6654783ba13951a615b040b006ced1)`() const` | Gets the value of MapName.
`public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a946b81c69f73b73f811f224f0e6df4b9)`(const FString & NewValue)` | Sets the value of MapName.
`public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfigV2_1ab6a655ebbd76cd63465602e918f6fb33)`(FString && NewValue)` | Sets the value of MapName using move semantics.
`public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a40f169d57b94b4bf23ad02c5ea9a3b95)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a43e6fd8f0455ec4fe6d37f8901736fe4)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a778e14c8e8f1db26563cd29f2703d9c7)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__MapConfigV2_1ad3520f8c11a7715a1b19c59c59f5dd36)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a71a1dc68a2cf6ab233ec36816aad6bea)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a8c0b992ed335ea8a55d4937a603833fa)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfigV2_1a9fcdf85dad384271785c3b6dddeed24c)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfigV2_1a6ba89f9f1e16dc360565754ace43ac25)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FORCEINLINE float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a9958a3254516426b65c564862762e36c)`()` | Gets the value of MapWeight.
`public inline FORCEINLINE const float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a67719ee803042b3aaae5b0b67d12414a)`() const` | Gets the value of MapWeight.
`public inline FORCEINLINE void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1aa8cb5b7fa07b11ec9f9b1ec024ad2583)`(const float & NewValue)` | Sets the value of MapWeight.
`public inline FORCEINLINE void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1ab5a711fed80c5ac4682978328b427faf)`(float && NewValue)` | Sets the value of MapWeight using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1ae0244870b4dd816244693395a7bfe51e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a24a9f46246232651030796e7d74b7963)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a87d80b37e7d5147fa0c2148aa90a9ca5)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a74d27dd904beb891d7a5f4a2ea8da754)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1aebbc4f55c6b89499b02b46b8c530a08e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1a109e4a41952b480a0495edfc5dadf797)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1ae52342e5bd10365fc3b2d2d3006e2121)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1ad71b02d245306461bf775dbac8670c18)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a517a8b62f501d3bb170441e10037bc0d)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1ab63ae326b10f83b84e4ce5aab2549e70)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a1623fd4eb8fe0024df764c57e56c9a33)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__MapConfigV2_1a5ae8d4f2a78721c323e52dd0b0226fe9)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1a1bcfa5fb6dbebcd18d3f1f81cd101667)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1a75abbc261e9f428055fabd93c5b9151c)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MapConfigV2_1aeaac720c4af467ef3f8660dc0e00034d)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MapConfigV2_1a30116bdc650eb184fbf0c8d2a17c300b)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__MapConfigV2_1a3c5f900f370ab93b1e86fd830f6a0064)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1ab957f4ae969d9de03340a6adc825f146)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1af3ee03120ccdf480af0263ce64a34bd6)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1ac342105a5a61a81b86df5521b6b4a9bb)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__MapConfigV2_1a60f10fb852e2bec0b75e9e11b395b508)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1a3e3550bb37fcf94fbf7ff1dbdc203496)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1ad3951f30414b358407e395eef9b690cd)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__MapConfigV2_1a3d20c1f034ee2442678a92f9121215ab)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__MapConfigV2_1ad9696fb02a90f6dcc333ebcef5dc5b92)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__MapConfigV2_1a6887c09f5c3b4a23def578232720aede)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1aee5df8f9f310f308b0d3462e8eb8d6ac)`()` | Gets the value of MiscParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1a6c4a9bc966c76c2647017586b5ed3666)`() const` | Gets the value of MiscParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1aa37838f13a396041779ea44baa91dea2)`(const FString & DefaultValue) const` | Gets the value of MiscParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1ab7d8c5191dd771a198549f7657ae75fd)`(FString & OutValue) const` | Fills OutValue with the value of MiscParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1ad31960d4e8e6d6e8facbed8e3709e195)`()` | Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1a23cdd2697922774d0a8fc624a2883827)`() const` | Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1a11f3e2664c4afd6d9ac3d9feffa3c385)`(const FString & NewValue)` | Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true.
`public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1a3cec3502a3aca6b00b3bfd7a1bd50f5e)`(FString && NewValue)` | Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true using move semantics.
`public inline void `[`ClearMiscParams`](#structFRHAPI__MapConfigV2_1a1ecaf6a0ee4229478591db99046b90f4)`()` | Clears the value of MiscParams_Optional and sets MiscParams_IsSet to false.

### Members

#### `public FString `[`MapId`](#structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2) <a id="structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2"></a>

ID to uniquely identify this map game.

#### `public FString `[`MapName`](#structFRHAPI__MapConfigV2_1a9f721ff64d45f27297e71c13228a80ea) <a id="structFRHAPI__MapConfigV2_1a9f721ff64d45f27297e71c13228a80ea"></a>

Name of the map the instance should load into.

#### `public FString `[`Mode_Optional`](#structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257) <a id="structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257"></a>

Game mode for the instance to spawn in.

#### `public bool `[`Mode_IsSet`](#structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036) <a id="structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036"></a>

true if Mode_Optional has been set to a value

#### `public float `[`MapWeight`](#structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719) <a id="structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719"></a>

Chance that this map will get selected in a rotation list.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3) <a id="structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3"></a>

Custom data to pass through to the instance.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae) <a id="structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`Name_Optional`](#structFRHAPI__MapConfigV2_1ac7508987a2b899fc40294d37e1f81c5b) <a id="structFRHAPI__MapConfigV2_1ac7508987a2b899fc40294d37e1f81c5b"></a>

Human readable name for this map.

#### `public bool `[`Name_IsSet`](#structFRHAPI__MapConfigV2_1ab7f0473ee626ee99752d7c54a444a274) <a id="structFRHAPI__MapConfigV2_1ab7f0473ee626ee99752d7c54a444a274"></a>

true if Name_Optional has been set to a value

#### `public FString `[`Description_Optional`](#structFRHAPI__MapConfigV2_1a6179723e642c23a19733354d2a01979c) <a id="structFRHAPI__MapConfigV2_1a6179723e642c23a19733354d2a01979c"></a>

Description of the map.

#### `public bool `[`Description_IsSet`](#structFRHAPI__MapConfigV2_1ae98bc8edd823f8531c7881acdf57aba5) <a id="structFRHAPI__MapConfigV2_1ae98bc8edd823f8531c7881acdf57aba5"></a>

true if Description_Optional has been set to a value

#### `public FString `[`MiscParams_Optional`](#structFRHAPI__MapConfigV2_1ae2d540e4731432cf6fb3f2fc49064a18) <a id="structFRHAPI__MapConfigV2_1ae2d540e4731432cf6fb3f2fc49064a18"></a>

Misc params to be passed to the instance when using this map.

#### `public bool `[`MiscParams_IsSet`](#structFRHAPI__MapConfigV2_1aa8ec9eb44ef7861e4a103346a0210fb6) <a id="structFRHAPI__MapConfigV2_1aa8ec9eb44ef7861e4a103346a0210fb6"></a>

true if MiscParams_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MapConfigV2_1a2a7a8cefd784d48e0d0e0823865dccd7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapConfigV2_1a2a7a8cefd784d48e0d0e0823865dccd7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MapConfigV2_1a1618ebe4f59889fd52dbcad2365a0b20)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MapConfigV2_1a1618ebe4f59889fd52dbcad2365a0b20"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1aeb7d1d42962cce6573fe62407945ede2)`()` <a id="structFRHAPI__MapConfigV2_1aeb7d1d42962cce6573fe62407945ede2"></a>

Gets the value of MapId.

#### `public inline FORCEINLINE const FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1a49abb982141bba974036b3847ba03239)`() const` <a id="structFRHAPI__MapConfigV2_1a49abb982141bba974036b3847ba03239"></a>

Gets the value of MapId.

#### `public inline FORCEINLINE void `[`SetMapId`](#structFRHAPI__MapConfigV2_1abf2e37656ca3399a1dffa29252824f87)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1abf2e37656ca3399a1dffa29252824f87"></a>

Sets the value of MapId.

#### `public inline FORCEINLINE void `[`SetMapId`](#structFRHAPI__MapConfigV2_1aed4e782edf527ddcd926183ababe49c4)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1aed4e782edf527ddcd926183ababe49c4"></a>

Sets the value of MapId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1a09507bdacc15ae539a33dedcb7a4aae5)`()` <a id="structFRHAPI__MapConfigV2_1a09507bdacc15ae539a33dedcb7a4aae5"></a>

Gets the value of MapName.

#### `public inline FORCEINLINE const FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1ada6654783ba13951a615b040b006ced1)`() const` <a id="structFRHAPI__MapConfigV2_1ada6654783ba13951a615b040b006ced1"></a>

Gets the value of MapName.

#### `public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a946b81c69f73b73f811f224f0e6df4b9)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a946b81c69f73b73f811f224f0e6df4b9"></a>

Sets the value of MapName.

#### `public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfigV2_1ab6a655ebbd76cd63465602e918f6fb33)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1ab6a655ebbd76cd63465602e918f6fb33"></a>

Sets the value of MapName using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a40f169d57b94b4bf23ad02c5ea9a3b95)`()` <a id="structFRHAPI__MapConfigV2_1a40f169d57b94b4bf23ad02c5ea9a3b95"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a43e6fd8f0455ec4fe6d37f8901736fe4)`() const` <a id="structFRHAPI__MapConfigV2_1a43e6fd8f0455ec4fe6d37f8901736fe4"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a778e14c8e8f1db26563cd29f2703d9c7)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a778e14c8e8f1db26563cd29f2703d9c7"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__MapConfigV2_1ad3520f8c11a7715a1b19c59c59f5dd36)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1ad3520f8c11a7715a1b19c59c59f5dd36"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a71a1dc68a2cf6ab233ec36816aad6bea)`()` <a id="structFRHAPI__MapConfigV2_1a71a1dc68a2cf6ab233ec36816aad6bea"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a8c0b992ed335ea8a55d4937a603833fa)`() const` <a id="structFRHAPI__MapConfigV2_1a8c0b992ed335ea8a55d4937a603833fa"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfigV2_1a9fcdf85dad384271785c3b6dddeed24c)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a9fcdf85dad384271785c3b6dddeed24c"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfigV2_1a6ba89f9f1e16dc360565754ace43ac25)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a6ba89f9f1e16dc360565754ace43ac25"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)`()` <a id="structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a9958a3254516426b65c564862762e36c)`()` <a id="structFRHAPI__MapConfigV2_1a9958a3254516426b65c564862762e36c"></a>

Gets the value of MapWeight.

#### `public inline FORCEINLINE const float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a67719ee803042b3aaae5b0b67d12414a)`() const` <a id="structFRHAPI__MapConfigV2_1a67719ee803042b3aaae5b0b67d12414a"></a>

Gets the value of MapWeight.

#### `public inline FORCEINLINE void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1aa8cb5b7fa07b11ec9f9b1ec024ad2583)`(const float & NewValue)` <a id="structFRHAPI__MapConfigV2_1aa8cb5b7fa07b11ec9f9b1ec024ad2583"></a>

Sets the value of MapWeight.

#### `public inline FORCEINLINE void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1ab5a711fed80c5ac4682978328b427faf)`(float && NewValue)` <a id="structFRHAPI__MapConfigV2_1ab5a711fed80c5ac4682978328b427faf"></a>

Sets the value of MapWeight using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1ae0244870b4dd816244693395a7bfe51e)`()` <a id="structFRHAPI__MapConfigV2_1ae0244870b4dd816244693395a7bfe51e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a24a9f46246232651030796e7d74b7963)`() const` <a id="structFRHAPI__MapConfigV2_1a24a9f46246232651030796e7d74b7963"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a87d80b37e7d5147fa0c2148aa90a9ca5)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a87d80b37e7d5147fa0c2148aa90a9ca5"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a74d27dd904beb891d7a5f4a2ea8da754)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MapConfigV2_1a74d27dd904beb891d7a5f4a2ea8da754"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1aebbc4f55c6b89499b02b46b8c530a08e)`()` <a id="structFRHAPI__MapConfigV2_1aebbc4f55c6b89499b02b46b8c530a08e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1a109e4a41952b480a0495edfc5dadf797)`() const` <a id="structFRHAPI__MapConfigV2_1a109e4a41952b480a0495edfc5dadf797"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1ae52342e5bd10365fc3b2d2d3006e2121)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MapConfigV2_1ae52342e5bd10365fc3b2d2d3006e2121"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1ad71b02d245306461bf775dbac8670c18)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MapConfigV2_1ad71b02d245306461bf775dbac8670c18"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)`()` <a id="structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a517a8b62f501d3bb170441e10037bc0d)`()` <a id="structFRHAPI__MapConfigV2_1a517a8b62f501d3bb170441e10037bc0d"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1ab63ae326b10f83b84e4ce5aab2549e70)`() const` <a id="structFRHAPI__MapConfigV2_1ab63ae326b10f83b84e4ce5aab2549e70"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a1623fd4eb8fe0024df764c57e56c9a33)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a1623fd4eb8fe0024df764c57e56c9a33"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__MapConfigV2_1a5ae8d4f2a78721c323e52dd0b0226fe9)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1a5ae8d4f2a78721c323e52dd0b0226fe9"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1a1bcfa5fb6dbebcd18d3f1f81cd101667)`()` <a id="structFRHAPI__MapConfigV2_1a1bcfa5fb6dbebcd18d3f1f81cd101667"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1a75abbc261e9f428055fabd93c5b9151c)`() const` <a id="structFRHAPI__MapConfigV2_1a75abbc261e9f428055fabd93c5b9151c"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MapConfigV2_1aeaac720c4af467ef3f8660dc0e00034d)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1aeaac720c4af467ef3f8660dc0e00034d"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MapConfigV2_1a30116bdc650eb184fbf0c8d2a17c300b)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a30116bdc650eb184fbf0c8d2a17c300b"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__MapConfigV2_1a3c5f900f370ab93b1e86fd830f6a0064)`()` <a id="structFRHAPI__MapConfigV2_1a3c5f900f370ab93b1e86fd830f6a0064"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1ab957f4ae969d9de03340a6adc825f146)`()` <a id="structFRHAPI__MapConfigV2_1ab957f4ae969d9de03340a6adc825f146"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1af3ee03120ccdf480af0263ce64a34bd6)`() const` <a id="structFRHAPI__MapConfigV2_1af3ee03120ccdf480af0263ce64a34bd6"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1ac342105a5a61a81b86df5521b6b4a9bb)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1ac342105a5a61a81b86df5521b6b4a9bb"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__MapConfigV2_1a60f10fb852e2bec0b75e9e11b395b508)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1a60f10fb852e2bec0b75e9e11b395b508"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1a3e3550bb37fcf94fbf7ff1dbdc203496)`()` <a id="structFRHAPI__MapConfigV2_1a3e3550bb37fcf94fbf7ff1dbdc203496"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1ad3951f30414b358407e395eef9b690cd)`() const` <a id="structFRHAPI__MapConfigV2_1ad3951f30414b358407e395eef9b690cd"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__MapConfigV2_1a3d20c1f034ee2442678a92f9121215ab)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a3d20c1f034ee2442678a92f9121215ab"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__MapConfigV2_1ad9696fb02a90f6dcc333ebcef5dc5b92)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1ad9696fb02a90f6dcc333ebcef5dc5b92"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__MapConfigV2_1a6887c09f5c3b4a23def578232720aede)`()` <a id="structFRHAPI__MapConfigV2_1a6887c09f5c3b4a23def578232720aede"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1aee5df8f9f310f308b0d3462e8eb8d6ac)`()` <a id="structFRHAPI__MapConfigV2_1aee5df8f9f310f308b0d3462e8eb8d6ac"></a>

Gets the value of MiscParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1a6c4a9bc966c76c2647017586b5ed3666)`() const` <a id="structFRHAPI__MapConfigV2_1a6c4a9bc966c76c2647017586b5ed3666"></a>

Gets the value of MiscParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1aa37838f13a396041779ea44baa91dea2)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1aa37838f13a396041779ea44baa91dea2"></a>

Gets the value of MiscParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1ab7d8c5191dd771a198549f7657ae75fd)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1ab7d8c5191dd771a198549f7657ae75fd"></a>

Fills OutValue with the value of MiscParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1ad31960d4e8e6d6e8facbed8e3709e195)`()` <a id="structFRHAPI__MapConfigV2_1ad31960d4e8e6d6e8facbed8e3709e195"></a>

Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1a23cdd2697922774d0a8fc624a2883827)`() const` <a id="structFRHAPI__MapConfigV2_1a23cdd2697922774d0a8fc624a2883827"></a>

Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1a11f3e2664c4afd6d9ac3d9feffa3c385)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a11f3e2664c4afd6d9ac3d9feffa3c385"></a>

Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1a3cec3502a3aca6b00b3bfd7a1bd50f5e)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a3cec3502a3aca6b00b3bfd7a1bd50f5e"></a>

Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true using move semantics.

#### `public inline void `[`ClearMiscParams`](#structFRHAPI__MapConfigV2_1a1ecaf6a0ee4229478591db99046b90f4)`()` <a id="structFRHAPI__MapConfigV2_1a1ecaf6a0ee4229478591db99046b90f4"></a>

Clears the value of MiscParams_Optional and sets MiscParams_IsSet to false.

