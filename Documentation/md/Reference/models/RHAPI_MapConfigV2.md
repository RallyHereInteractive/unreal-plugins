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
`public inline FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1ad3fdc2275c0c8f9b95c7c3457a0af8a5)`()` | Gets the value of MapId.
`public inline const FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1ae8999ed442735cf1709e9d4efbc9814c)`() const` | Gets the value of MapId.
`public inline void `[`SetMapId`](#structFRHAPI__MapConfigV2_1ad6ac6f4ff62909ebbf34242d7c223298)`(const FString & NewValue)` | Sets the value of MapId.
`public inline void `[`SetMapId`](#structFRHAPI__MapConfigV2_1a96d3291c3239d206acfd0bcaab69b095)`(FString && NewValue)` | Sets the value of MapId using move semantics.
`public inline FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1ad62383958d5b5429747a91fcc27116bb)`()` | Gets the value of MapName.
`public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1a675bd536f179eb7b64312f70c9e0af43)`() const` | Gets the value of MapName.
`public inline void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a1a025e4c5cb479daa8be1f7211dd2eb6)`(const FString & NewValue)` | Sets the value of MapName.
`public inline void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a521fca157ad4e70fa160d121e4ad879d)`(FString && NewValue)` | Sets the value of MapName using move semantics.
`public inline FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a9884f50010d78d4c31a7212ca3225ce1)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a5a9fec2469999b4ea56a60f5609d876e)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a0122fcc929b6559554588d7d159558a2)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a1183183471dee6c969cea9cc16c9f5e2)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a22a8f11a67a4720a9a365a6e3865b7ff)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__MapConfigV2_1a0f11102b3cc1976d7f7301f56e3105bf)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__MapConfigV2_1a1827ca66a0a584ad6a0cd367d9b9b269)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__MapConfigV2_1a0e372c33a3d2da2fccbbf3f5e60b80ad)`() const` | Checks whether Mode_Optional has been set.
`public inline float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1abdce05e944869b980ccd6b9c7909c220)`()` | Gets the value of MapWeight.
`public inline const float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a40e4141ba01591625d9d18a967d8ec0e)`() const` | Gets the value of MapWeight.
`public inline void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1a541b5b7f54215d02cd665d00e526ad43)`(const float & NewValue)` | Sets the value of MapWeight.
`public inline void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1aa57e4ab61c60d0428707dec346d46264)`(float && NewValue)` | Sets the value of MapWeight using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a24712f31dd2b0304201ac3bc2bc4978c)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a242cd838cd8df550a641962e6ec0ebb8)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1abca05b62462aa18cda1a1e80784383c9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1a70a896b25af29041b1772426c6ae6600)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1aaff00f3ae310bbe20b17fa13a478cfa1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1a0d68035540fdb8d85f094fd69bd9db4c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1a21356e0161cea94bd383418fc8fb5c12)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MapConfigV2_1ad8297c7314db785e27f628e4af23f901)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a223961104a02d3e3f63735f4d3cff2c7)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1ab95e929004f1239ac74d21574214ebf7)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a0ad0fe5219d81bc4dece51d38c093be4)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__MapConfigV2_1aa513caa5969b53ab21530f5c09bb0e96)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1a1256682332f09c0042ac88d6343f8800)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1afc66368d62aa85166ebe464e1a74fc13)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__MapConfigV2_1a35eb5169b7c9c5ba5ebdc9b00fc65882)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`SetName`](#structFRHAPI__MapConfigV2_1a76fd21aa01e1bdebcfb1a29fcc14bcd1)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__MapConfigV2_1a3c5f900f370ab93b1e86fd830f6a0064)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline bool `[`IsNameSet`](#structFRHAPI__MapConfigV2_1ab15e35784c06937dd5f23f317f70c875)`() const` | Checks whether Name_Optional has been set.
`public inline FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1a6d3db6d0695374194e6484a67199b586)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1a41f04540e6cf43da72259bfb56709364)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1a389c22309ba324a1aab741b91a9c038e)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__MapConfigV2_1aef46009891d297dad50f0a8843dd3dad)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1af724db960939f3741077aef94a3df619)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1a63fbed817b1774cbdbfa5f831a030cb7)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__MapConfigV2_1ad557c8d0cf2f83e4c8ff2631b753e6c5)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`SetDescription`](#structFRHAPI__MapConfigV2_1a88eb99e17d8ac3317a657cb4412c8984)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__MapConfigV2_1a6887c09f5c3b4a23def578232720aede)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionSet`](#structFRHAPI__MapConfigV2_1af8da579a0715c26177ca352ab61a4f27)`() const` | Checks whether Description_Optional has been set.
`public inline FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1a21d97fbcebfbdc7cfb4d53b5b15d383d)`()` | Gets the value of MiscParams_Optional, regardless of it having been set.
`public inline const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1ad3510692639466b2889fa9b6f34243cb)`() const` | Gets the value of MiscParams_Optional, regardless of it having been set.
`public inline const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1aa72f35952311e820ce1d74d4019b7e56)`(const FString & DefaultValue) const` | Gets the value of MiscParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1abb75a20952ca6bef6471d98ede2583b0)`(FString & OutValue) const` | Fills OutValue with the value of MiscParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1aa195884573010aca1816c84b9a44ffcc)`()` | Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1ac4abd3121337062da25ca504ae31e318)`() const` | Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1af95464e7160ab423ecb915e4144fbe9c)`(const FString & NewValue)` | Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true.
`public inline void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1a18068cca0821d7e525417e1983b8368f)`(FString && NewValue)` | Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true using move semantics.
`public inline void `[`ClearMiscParams`](#structFRHAPI__MapConfigV2_1a1ecaf6a0ee4229478591db99046b90f4)`()` | Clears the value of MiscParams_Optional and sets MiscParams_IsSet to false.
`public inline bool `[`IsMiscParamsSet`](#structFRHAPI__MapConfigV2_1a06ed66aff709d08f61fb942348f568b2)`() const` | Checks whether MiscParams_Optional has been set.

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

#### `public inline FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1ad3fdc2275c0c8f9b95c7c3457a0af8a5)`()` <a id="structFRHAPI__MapConfigV2_1ad3fdc2275c0c8f9b95c7c3457a0af8a5"></a>

Gets the value of MapId.

#### `public inline const FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1ae8999ed442735cf1709e9d4efbc9814c)`() const` <a id="structFRHAPI__MapConfigV2_1ae8999ed442735cf1709e9d4efbc9814c"></a>

Gets the value of MapId.

#### `public inline void `[`SetMapId`](#structFRHAPI__MapConfigV2_1ad6ac6f4ff62909ebbf34242d7c223298)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1ad6ac6f4ff62909ebbf34242d7c223298"></a>

Sets the value of MapId.

#### `public inline void `[`SetMapId`](#structFRHAPI__MapConfigV2_1a96d3291c3239d206acfd0bcaab69b095)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a96d3291c3239d206acfd0bcaab69b095"></a>

Sets the value of MapId using move semantics.

#### `public inline FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1ad62383958d5b5429747a91fcc27116bb)`()` <a id="structFRHAPI__MapConfigV2_1ad62383958d5b5429747a91fcc27116bb"></a>

Gets the value of MapName.

#### `public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1a675bd536f179eb7b64312f70c9e0af43)`() const` <a id="structFRHAPI__MapConfigV2_1a675bd536f179eb7b64312f70c9e0af43"></a>

Gets the value of MapName.

#### `public inline void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a1a025e4c5cb479daa8be1f7211dd2eb6)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a1a025e4c5cb479daa8be1f7211dd2eb6"></a>

Sets the value of MapName.

#### `public inline void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a521fca157ad4e70fa160d121e4ad879d)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a521fca157ad4e70fa160d121e4ad879d"></a>

Sets the value of MapName using move semantics.

#### `public inline FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a9884f50010d78d4c31a7212ca3225ce1)`()` <a id="structFRHAPI__MapConfigV2_1a9884f50010d78d4c31a7212ca3225ce1"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a5a9fec2469999b4ea56a60f5609d876e)`() const` <a id="structFRHAPI__MapConfigV2_1a5a9fec2469999b4ea56a60f5609d876e"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a0122fcc929b6559554588d7d159558a2)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a0122fcc929b6559554588d7d159558a2"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a1183183471dee6c969cea9cc16c9f5e2)`()` <a id="structFRHAPI__MapConfigV2_1a1183183471dee6c969cea9cc16c9f5e2"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a22a8f11a67a4720a9a365a6e3865b7ff)`() const` <a id="structFRHAPI__MapConfigV2_1a22a8f11a67a4720a9a365a6e3865b7ff"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__MapConfigV2_1a0f11102b3cc1976d7f7301f56e3105bf)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a0f11102b3cc1976d7f7301f56e3105bf"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__MapConfigV2_1a1827ca66a0a584ad6a0cd367d9b9b269)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a1827ca66a0a584ad6a0cd367d9b9b269"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)`()` <a id="structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__MapConfigV2_1a0e372c33a3d2da2fccbbf3f5e60b80ad)`() const` <a id="structFRHAPI__MapConfigV2_1a0e372c33a3d2da2fccbbf3f5e60b80ad"></a>

Checks whether Mode_Optional has been set.

#### `public inline float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1abdce05e944869b980ccd6b9c7909c220)`()` <a id="structFRHAPI__MapConfigV2_1abdce05e944869b980ccd6b9c7909c220"></a>

Gets the value of MapWeight.

#### `public inline const float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a40e4141ba01591625d9d18a967d8ec0e)`() const` <a id="structFRHAPI__MapConfigV2_1a40e4141ba01591625d9d18a967d8ec0e"></a>

Gets the value of MapWeight.

#### `public inline void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1a541b5b7f54215d02cd665d00e526ad43)`(const float & NewValue)` <a id="structFRHAPI__MapConfigV2_1a541b5b7f54215d02cd665d00e526ad43"></a>

Sets the value of MapWeight.

#### `public inline void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1aa57e4ab61c60d0428707dec346d46264)`(float && NewValue)` <a id="structFRHAPI__MapConfigV2_1aa57e4ab61c60d0428707dec346d46264"></a>

Sets the value of MapWeight using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a24712f31dd2b0304201ac3bc2bc4978c)`()` <a id="structFRHAPI__MapConfigV2_1a24712f31dd2b0304201ac3bc2bc4978c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a242cd838cd8df550a641962e6ec0ebb8)`() const` <a id="structFRHAPI__MapConfigV2_1a242cd838cd8df550a641962e6ec0ebb8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1abca05b62462aa18cda1a1e80784383c9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1abca05b62462aa18cda1a1e80784383c9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1a70a896b25af29041b1772426c6ae6600)`()` <a id="structFRHAPI__MapConfigV2_1a70a896b25af29041b1772426c6ae6600"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1aaff00f3ae310bbe20b17fa13a478cfa1)`() const` <a id="structFRHAPI__MapConfigV2_1aaff00f3ae310bbe20b17fa13a478cfa1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1a0d68035540fdb8d85f094fd69bd9db4c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MapConfigV2_1a0d68035540fdb8d85f094fd69bd9db4c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1a21356e0161cea94bd383418fc8fb5c12)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MapConfigV2_1a21356e0161cea94bd383418fc8fb5c12"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)`()` <a id="structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MapConfigV2_1ad8297c7314db785e27f628e4af23f901)`() const` <a id="structFRHAPI__MapConfigV2_1ad8297c7314db785e27f628e4af23f901"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a223961104a02d3e3f63735f4d3cff2c7)`()` <a id="structFRHAPI__MapConfigV2_1a223961104a02d3e3f63735f4d3cff2c7"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1ab95e929004f1239ac74d21574214ebf7)`() const` <a id="structFRHAPI__MapConfigV2_1ab95e929004f1239ac74d21574214ebf7"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__MapConfigV2_1a0ad0fe5219d81bc4dece51d38c093be4)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a0ad0fe5219d81bc4dece51d38c093be4"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetName`](#structFRHAPI__MapConfigV2_1aa513caa5969b53ab21530f5c09bb0e96)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1aa513caa5969b53ab21530f5c09bb0e96"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1a1256682332f09c0042ac88d6343f8800)`()` <a id="structFRHAPI__MapConfigV2_1a1256682332f09c0042ac88d6343f8800"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__MapConfigV2_1afc66368d62aa85166ebe464e1a74fc13)`() const` <a id="structFRHAPI__MapConfigV2_1afc66368d62aa85166ebe464e1a74fc13"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetName`](#structFRHAPI__MapConfigV2_1a35eb5169b7c9c5ba5ebdc9b00fc65882)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1a35eb5169b7c9c5ba5ebdc9b00fc65882"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline void `[`SetName`](#structFRHAPI__MapConfigV2_1a76fd21aa01e1bdebcfb1a29fcc14bcd1)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a76fd21aa01e1bdebcfb1a29fcc14bcd1"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__MapConfigV2_1a3c5f900f370ab93b1e86fd830f6a0064)`()` <a id="structFRHAPI__MapConfigV2_1a3c5f900f370ab93b1e86fd830f6a0064"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline bool `[`IsNameSet`](#structFRHAPI__MapConfigV2_1ab15e35784c06937dd5f23f317f70c875)`() const` <a id="structFRHAPI__MapConfigV2_1ab15e35784c06937dd5f23f317f70c875"></a>

Checks whether Name_Optional has been set.

#### `public inline FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1a6d3db6d0695374194e6484a67199b586)`()` <a id="structFRHAPI__MapConfigV2_1a6d3db6d0695374194e6484a67199b586"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1a41f04540e6cf43da72259bfb56709364)`() const` <a id="structFRHAPI__MapConfigV2_1a41f04540e6cf43da72259bfb56709364"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__MapConfigV2_1a389c22309ba324a1aab741b91a9c038e)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a389c22309ba324a1aab741b91a9c038e"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDescription`](#structFRHAPI__MapConfigV2_1aef46009891d297dad50f0a8843dd3dad)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1aef46009891d297dad50f0a8843dd3dad"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1af724db960939f3741077aef94a3df619)`()` <a id="structFRHAPI__MapConfigV2_1af724db960939f3741077aef94a3df619"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__MapConfigV2_1a63fbed817b1774cbdbfa5f831a030cb7)`() const` <a id="structFRHAPI__MapConfigV2_1a63fbed817b1774cbdbfa5f831a030cb7"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDescription`](#structFRHAPI__MapConfigV2_1ad557c8d0cf2f83e4c8ff2631b753e6c5)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1ad557c8d0cf2f83e4c8ff2631b753e6c5"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline void `[`SetDescription`](#structFRHAPI__MapConfigV2_1a88eb99e17d8ac3317a657cb4412c8984)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a88eb99e17d8ac3317a657cb4412c8984"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__MapConfigV2_1a6887c09f5c3b4a23def578232720aede)`()` <a id="structFRHAPI__MapConfigV2_1a6887c09f5c3b4a23def578232720aede"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline bool `[`IsDescriptionSet`](#structFRHAPI__MapConfigV2_1af8da579a0715c26177ca352ab61a4f27)`() const` <a id="structFRHAPI__MapConfigV2_1af8da579a0715c26177ca352ab61a4f27"></a>

Checks whether Description_Optional has been set.

#### `public inline FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1a21d97fbcebfbdc7cfb4d53b5b15d383d)`()` <a id="structFRHAPI__MapConfigV2_1a21d97fbcebfbdc7cfb4d53b5b15d383d"></a>

Gets the value of MiscParams_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1ad3510692639466b2889fa9b6f34243cb)`() const` <a id="structFRHAPI__MapConfigV2_1ad3510692639466b2889fa9b6f34243cb"></a>

Gets the value of MiscParams_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1aa72f35952311e820ce1d74d4019b7e56)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1aa72f35952311e820ce1d74d4019b7e56"></a>

Gets the value of MiscParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMiscParams`](#structFRHAPI__MapConfigV2_1abb75a20952ca6bef6471d98ede2583b0)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1abb75a20952ca6bef6471d98ede2583b0"></a>

Fills OutValue with the value of MiscParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1aa195884573010aca1816c84b9a44ffcc)`()` <a id="structFRHAPI__MapConfigV2_1aa195884573010aca1816c84b9a44ffcc"></a>

Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMiscParamsOrNull`](#structFRHAPI__MapConfigV2_1ac4abd3121337062da25ca504ae31e318)`() const` <a id="structFRHAPI__MapConfigV2_1ac4abd3121337062da25ca504ae31e318"></a>

Returns a pointer to MiscParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1af95464e7160ab423ecb915e4144fbe9c)`(const FString & NewValue)` <a id="structFRHAPI__MapConfigV2_1af95464e7160ab423ecb915e4144fbe9c"></a>

Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true.

#### `public inline void `[`SetMiscParams`](#structFRHAPI__MapConfigV2_1a18068cca0821d7e525417e1983b8368f)`(FString && NewValue)` <a id="structFRHAPI__MapConfigV2_1a18068cca0821d7e525417e1983b8368f"></a>

Sets the value of MiscParams_Optional and also sets MiscParams_IsSet to true using move semantics.

#### `public inline void `[`ClearMiscParams`](#structFRHAPI__MapConfigV2_1a1ecaf6a0ee4229478591db99046b90f4)`()` <a id="structFRHAPI__MapConfigV2_1a1ecaf6a0ee4229478591db99046b90f4"></a>

Clears the value of MiscParams_Optional and sets MiscParams_IsSet to false.

#### `public inline bool `[`IsMiscParamsSet`](#structFRHAPI__MapConfigV2_1a06ed66aff709d08f61fb942348f568b2)`() const` <a id="structFRHAPI__MapConfigV2_1a06ed66aff709d08f61fb942348f568b2"></a>

Checks whether MiscParams_Optional has been set.

