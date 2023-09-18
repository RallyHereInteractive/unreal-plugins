# RHAPI_MapConfigV2 <a id="group__RHAPI__MapConfigV2"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MapId`](#structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2) | ID to uniquely identify this map game.
`public FString `[`MapName`](#structFRHAPI__MapConfigV2_1a9f721ff64d45f27297e71c13228a80ea) | Name of the map the instance should load into.
`public FString `[`Mode_Optional`](#structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257) | Game mode for the instance to spawn in.
`public bool `[`Mode_IsSet`](#structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036) | true if Mode_Optional has been set to a value
`public float `[`MapWeight`](#structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719) | Chance that this map will get selected in a rotation list.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3) | Custom data to pass through to the instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MapConfigV2_1a949a198ddd86e878003045d5b425d322)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapConfigV2_1ae53f488100b29693510a7b85914d07fd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1aa60296fd483bfcaca29d9cf95445ada3)`()` | Gets the value of MapId.
`public inline const FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1a9ad900caf5482b0580fb1efafd693a3d)`() const` | Gets the value of MapId.
`public inline void `[`SetMapId`](#structFRHAPI__MapConfigV2_1a8ea16d1956764643215324f48db75683)`(FString NewValue)` | Sets the value of MapId.
`public inline FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1acf13a30e8dfbcee91e9d727a1362cb1d)`()` | Gets the value of MapName.
`public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1a4cea272276f210af5239c7f793f4567e)`() const` | Gets the value of MapName.
`public inline void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a05a7d1ac074562fa0d6b2dc1531c97aa)`(FString NewValue)` | Sets the value of MapName.
`public inline FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1ae67b15a2989c17859855ddaaae913b78)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1af7e2f8eb21b1ce60ab151e31ade56176)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a3180fd0cc52d054f73a6947d7096105a)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a919fd2fff0c80f6405d97edf7ec1999a)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a239583013306e04586f2715c3be93460)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__MapConfigV2_1ace9a7807872924f6bd37f6e054da476a)`(FString NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`ClearMode`](#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a0a475e5f239a4a600c2025ca95c84e12)`()` | Gets the value of MapWeight.
`public inline const float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a5396c93ead6c4f31ee0728cacae5ceb6)`() const` | Gets the value of MapWeight.
`public inline void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1a6712131c97a0bc9f796c43fdfbb205db)`(float NewValue)` | Sets the value of MapWeight.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a6c9d43316b7a0f1ef15493f77eff4053)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1aa41a4671aa3b7d86b62bfcdf95d4fd05)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a7b3ac5cf05cdb8f888cd878c1a5a7b26)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1a741d93c605861a958b2917d2ad488033)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1af0c21202867d759e89c1e45477305b55)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1af68358d7baec18850a42bfd0a5a163cb)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`MapId`](#structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2) <a id="structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2"></a>

ID to uniquely identify this map game.

<br>
#### `public FString `[`MapName`](#structFRHAPI__MapConfigV2_1a9f721ff64d45f27297e71c13228a80ea) <a id="structFRHAPI__MapConfigV2_1a9f721ff64d45f27297e71c13228a80ea"></a>

Name of the map the instance should load into.

<br>
#### `public FString `[`Mode_Optional`](#structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257) <a id="structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257"></a>

Game mode for the instance to spawn in.

<br>
#### `public bool `[`Mode_IsSet`](#structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036) <a id="structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036"></a>

true if Mode_Optional has been set to a value

<br>
#### `public float `[`MapWeight`](#structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719) <a id="structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719"></a>

Chance that this map will get selected in a rotation list.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3) <a id="structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3"></a>

Custom data to pass through to the instance.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae) <a id="structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MapConfigV2_1a949a198ddd86e878003045d5b425d322)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapConfigV2_1a949a198ddd86e878003045d5b425d322"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MapConfigV2_1ae53f488100b29693510a7b85914d07fd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MapConfigV2_1ae53f488100b29693510a7b85914d07fd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1aa60296fd483bfcaca29d9cf95445ada3)`()` <a id="structFRHAPI__MapConfigV2_1aa60296fd483bfcaca29d9cf95445ada3"></a>

Gets the value of MapId.

<br>
#### `public inline const FString & `[`GetMapId`](#structFRHAPI__MapConfigV2_1a9ad900caf5482b0580fb1efafd693a3d)`() const` <a id="structFRHAPI__MapConfigV2_1a9ad900caf5482b0580fb1efafd693a3d"></a>

Gets the value of MapId.

<br>
#### `public inline void `[`SetMapId`](#structFRHAPI__MapConfigV2_1a8ea16d1956764643215324f48db75683)`(FString NewValue)` <a id="structFRHAPI__MapConfigV2_1a8ea16d1956764643215324f48db75683"></a>

Sets the value of MapId.

<br>
#### `public inline FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1acf13a30e8dfbcee91e9d727a1362cb1d)`()` <a id="structFRHAPI__MapConfigV2_1acf13a30e8dfbcee91e9d727a1362cb1d"></a>

Gets the value of MapName.

<br>
#### `public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfigV2_1a4cea272276f210af5239c7f793f4567e)`() const` <a id="structFRHAPI__MapConfigV2_1a4cea272276f210af5239c7f793f4567e"></a>

Gets the value of MapName.

<br>
#### `public inline void `[`SetMapName`](#structFRHAPI__MapConfigV2_1a05a7d1ac074562fa0d6b2dc1531c97aa)`(FString NewValue)` <a id="structFRHAPI__MapConfigV2_1a05a7d1ac074562fa0d6b2dc1531c97aa"></a>

Sets the value of MapName.

<br>
#### `public inline FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1ae67b15a2989c17859855ddaaae913b78)`()` <a id="structFRHAPI__MapConfigV2_1ae67b15a2989c17859855ddaaae913b78"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1af7e2f8eb21b1ce60ab151e31ade56176)`() const` <a id="structFRHAPI__MapConfigV2_1af7e2f8eb21b1ce60ab151e31ade56176"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfigV2_1a3180fd0cc52d054f73a6947d7096105a)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a3180fd0cc52d054f73a6947d7096105a"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMode`](#structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed)`(FString & OutValue) const` <a id="structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a919fd2fff0c80f6405d97edf7ec1999a)`()` <a id="structFRHAPI__MapConfigV2_1a919fd2fff0c80f6405d97edf7ec1999a"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfigV2_1a239583013306e04586f2715c3be93460)`() const` <a id="structFRHAPI__MapConfigV2_1a239583013306e04586f2715c3be93460"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMode`](#structFRHAPI__MapConfigV2_1ace9a7807872924f6bd37f6e054da476a)`(FString NewValue)` <a id="structFRHAPI__MapConfigV2_1ace9a7807872924f6bd37f6e054da476a"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

<br>
#### `public inline void `[`ClearMode`](#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)`()` <a id="structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

<br>
#### `public inline float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a0a475e5f239a4a600c2025ca95c84e12)`()` <a id="structFRHAPI__MapConfigV2_1a0a475e5f239a4a600c2025ca95c84e12"></a>

Gets the value of MapWeight.

<br>
#### `public inline const float & `[`GetMapWeight`](#structFRHAPI__MapConfigV2_1a5396c93ead6c4f31ee0728cacae5ceb6)`() const` <a id="structFRHAPI__MapConfigV2_1a5396c93ead6c4f31ee0728cacae5ceb6"></a>

Gets the value of MapWeight.

<br>
#### `public inline void `[`SetMapWeight`](#structFRHAPI__MapConfigV2_1a6712131c97a0bc9f796c43fdfbb205db)`(float NewValue)` <a id="structFRHAPI__MapConfigV2_1a6712131c97a0bc9f796c43fdfbb205db"></a>

Sets the value of MapWeight.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a6c9d43316b7a0f1ef15493f77eff4053)`()` <a id="structFRHAPI__MapConfigV2_1a6c9d43316b7a0f1ef15493f77eff4053"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1aa41a4671aa3b7d86b62bfcdf95d4fd05)`() const` <a id="structFRHAPI__MapConfigV2_1aa41a4671aa3b7d86b62bfcdf95d4fd05"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a7b3ac5cf05cdb8f888cd878c1a5a7b26)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MapConfigV2_1a7b3ac5cf05cdb8f888cd878c1a5a7b26"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1a741d93c605861a958b2917d2ad488033)`()` <a id="structFRHAPI__MapConfigV2_1a741d93c605861a958b2917d2ad488033"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfigV2_1af0c21202867d759e89c1e45477305b55)`() const` <a id="structFRHAPI__MapConfigV2_1af0c21202867d759e89c1e45477305b55"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MapConfigV2_1af68358d7baec18850a42bfd0a5a163cb)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MapConfigV2_1af68358d7baec18850a42bfd0a5a163cb"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)`()` <a id="structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
