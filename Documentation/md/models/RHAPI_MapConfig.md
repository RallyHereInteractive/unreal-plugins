# RHAPI_MapConfig <a id="group__RHAPI__MapConfig"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MapConfig`](#structFRHAPI__MapConfig) | DEPRECATED Configuration about a specific map for an instance to load into.

## struct `FRHAPI_MapConfig` <a id="structFRHAPI__MapConfig"></a>

```
struct FRHAPI_MapConfig
  : public FRHAPI_Model
```

DEPRECATED Configuration about a specific map for an instance to load into.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`MapGameId_Optional`](#structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3) | ID to uniquely identify this map game.
`public bool `[`MapGameId_IsSet`](#structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5) | true if MapGameId_Optional has been set to a value
`public FString `[`MapName`](#structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7) | Name of the map the instance should load into.
`public FString `[`Mode_Optional`](#structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a) | Game mode for the instance to spawn in.
`public bool `[`Mode_IsSet`](#structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e) | true if Mode_Optional has been set to a value
`public float `[`SelectionChance_Optional`](#structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c) | Chance that this map will get selected in a rotation list.
`public bool `[`SelectionChance_IsSet`](#structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c) | true if SelectionChance_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1) | Custom data to pass through to the instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MapConfig_1a3de7214c500186260bf974e68095261d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapConfig_1accd3f9cf0e110a050df727587d58e4e9)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1ae6c61d0fdd1981491193c42ac31eb607)`()` | Gets the value of MapGameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a80ea786abbcbcbb4b3f42c306284284a)`() const` | Gets the value of MapGameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1aaaab76f8077d4e4eb71d4c8cba8cae7b)`(const int32 & DefaultValue) const` | Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapGameId`](#structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc)`(int32 & OutValue) const` | Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a9a16306f3216e53b717a8593c718eaea)`()` | Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a69e7bcdd3a16264fabdc8937dd7760c3)`() const` | Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapGameId`](#structFRHAPI__MapConfig_1ab203a8dcc999b1d5340158933adbc19a)`(int32 NewValue)` | Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.
`public inline void `[`ClearMapGameId`](#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)`()` | Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.
`public inline bool `[`IsMapGameIdDefaultValue`](#structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123)`() const` | Returns true if MapGameId_Optional is set and matches the default value.
`public inline void `[`SetMapGameIdToDefault`](#structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c)`()` | Sets the value of MapGameId_Optional to its default and also sets MapGameId_IsSet to true.
`public inline FString & `[`GetMapName`](#structFRHAPI__MapConfig_1a9613f874dcf15fefac1c813ae30c6d47)`()` | Gets the value of MapName.
`public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfig_1aee0cef5d97250f3d8746b13af9f48cf4)`() const` | Gets the value of MapName.
`public inline void `[`SetMapName`](#structFRHAPI__MapConfig_1a68f3defa870cdfba61629ed92da5fd34)`(FString NewValue)` | Sets the value of MapName.
`public inline FString & `[`GetMode`](#structFRHAPI__MapConfig_1ac275535c7ec8edce5041767344c1e2cf)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a73caf694c9a79e1b662cca0544e0bcb5)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a4f63168976803cd4ffbce38d26be26dd)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1ac53050ede4b6af673aec47771cf64c09)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1a8f94dc4ad559d6b7f1b152b81d70750a)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__MapConfig_1a98ba8cb631f678c20950a83339532a18)`(FString NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`ClearMode`](#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1adff47451ba8cb1bc858eb86a705dee18)`()` | Gets the value of SelectionChance_Optional, regardless of it having been set.
`public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a77948a14fc86712b0da6c6089fb55435)`() const` | Gets the value of SelectionChance_Optional, regardless of it having been set.
`public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a5d02d77a96b0eadca36a6468dd1c5244)`(const float & DefaultValue) const` | Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3)`(float & OutValue) const` | Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a6067e02d5d174e61188d346aef5825ed)`()` | Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a174cd841783dbb5d1c27c18a6f4829af)`() const` | Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1aeaa12a9139b006b16e45a02e52fd94d3)`(float NewValue)` | Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.
`public inline void `[`ClearSelectionChance`](#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)`()` | Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1aa21d7c490044213da89e8d7b46e3b563)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1adb5864db78f92ecec60c5826a505bbff)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a32d1d42b213c9d44d3cc0200163f4633)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1abe51517c32a9e215dccce6b8d6f9105b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1ab0fa35c32c6caf71441ac496bb4357ad)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MapConfig_1ae7a5fe2266db4784b236b2ce9a39e4e8)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public int32 `[`MapGameId_Optional`](#structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3) <a id="structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3"></a>

ID to uniquely identify this map game.

<br>
#### `public bool `[`MapGameId_IsSet`](#structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5) <a id="structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5"></a>

true if MapGameId_Optional has been set to a value

<br>
#### `public FString `[`MapName`](#structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7) <a id="structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7"></a>

Name of the map the instance should load into.

<br>
#### `public FString `[`Mode_Optional`](#structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a) <a id="structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a"></a>

Game mode for the instance to spawn in.

<br>
#### `public bool `[`Mode_IsSet`](#structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e) <a id="structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e"></a>

true if Mode_Optional has been set to a value

<br>
#### `public float `[`SelectionChance_Optional`](#structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c) <a id="structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c"></a>

Chance that this map will get selected in a rotation list.

<br>
#### `public bool `[`SelectionChance_IsSet`](#structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c) <a id="structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c"></a>

true if SelectionChance_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1) <a id="structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1"></a>

Custom data to pass through to the instance.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5) <a id="structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MapConfig_1a3de7214c500186260bf974e68095261d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapConfig_1a3de7214c500186260bf974e68095261d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MapConfig_1accd3f9cf0e110a050df727587d58e4e9)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MapConfig_1accd3f9cf0e110a050df727587d58e4e9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1ae6c61d0fdd1981491193c42ac31eb607)`()` <a id="structFRHAPI__MapConfig_1ae6c61d0fdd1981491193c42ac31eb607"></a>

Gets the value of MapGameId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a80ea786abbcbcbb4b3f42c306284284a)`() const` <a id="structFRHAPI__MapConfig_1a80ea786abbcbcbb4b3f42c306284284a"></a>

Gets the value of MapGameId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1aaaab76f8077d4e4eb71d4c8cba8cae7b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MapConfig_1aaaab76f8077d4e4eb71d4c8cba8cae7b"></a>

Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMapGameId`](#structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc)`(int32 & OutValue) const` <a id="structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc"></a>

Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a9a16306f3216e53b717a8593c718eaea)`()` <a id="structFRHAPI__MapConfig_1a9a16306f3216e53b717a8593c718eaea"></a>

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a69e7bcdd3a16264fabdc8937dd7760c3)`() const` <a id="structFRHAPI__MapConfig_1a69e7bcdd3a16264fabdc8937dd7760c3"></a>

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMapGameId`](#structFRHAPI__MapConfig_1ab203a8dcc999b1d5340158933adbc19a)`(int32 NewValue)` <a id="structFRHAPI__MapConfig_1ab203a8dcc999b1d5340158933adbc19a"></a>

Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.

<br>
#### `public inline void `[`ClearMapGameId`](#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)`()` <a id="structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05"></a>

Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.

<br>
#### `public inline bool `[`IsMapGameIdDefaultValue`](#structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123)`() const` <a id="structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123"></a>

Returns true if MapGameId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetMapGameIdToDefault`](#structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c)`()` <a id="structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c"></a>

Sets the value of MapGameId_Optional to its default and also sets MapGameId_IsSet to true.

<br>
#### `public inline FString & `[`GetMapName`](#structFRHAPI__MapConfig_1a9613f874dcf15fefac1c813ae30c6d47)`()` <a id="structFRHAPI__MapConfig_1a9613f874dcf15fefac1c813ae30c6d47"></a>

Gets the value of MapName.

<br>
#### `public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfig_1aee0cef5d97250f3d8746b13af9f48cf4)`() const` <a id="structFRHAPI__MapConfig_1aee0cef5d97250f3d8746b13af9f48cf4"></a>

Gets the value of MapName.

<br>
#### `public inline void `[`SetMapName`](#structFRHAPI__MapConfig_1a68f3defa870cdfba61629ed92da5fd34)`(FString NewValue)` <a id="structFRHAPI__MapConfig_1a68f3defa870cdfba61629ed92da5fd34"></a>

Sets the value of MapName.

<br>
#### `public inline FString & `[`GetMode`](#structFRHAPI__MapConfig_1ac275535c7ec8edce5041767344c1e2cf)`()` <a id="structFRHAPI__MapConfig_1ac275535c7ec8edce5041767344c1e2cf"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a73caf694c9a79e1b662cca0544e0bcb5)`() const` <a id="structFRHAPI__MapConfig_1a73caf694c9a79e1b662cca0544e0bcb5"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a4f63168976803cd4ffbce38d26be26dd)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a4f63168976803cd4ffbce38d26be26dd"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMode`](#structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087)`(FString & OutValue) const` <a id="structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1ac53050ede4b6af673aec47771cf64c09)`()` <a id="structFRHAPI__MapConfig_1ac53050ede4b6af673aec47771cf64c09"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1a8f94dc4ad559d6b7f1b152b81d70750a)`() const` <a id="structFRHAPI__MapConfig_1a8f94dc4ad559d6b7f1b152b81d70750a"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMode`](#structFRHAPI__MapConfig_1a98ba8cb631f678c20950a83339532a18)`(FString NewValue)` <a id="structFRHAPI__MapConfig_1a98ba8cb631f678c20950a83339532a18"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

<br>
#### `public inline void `[`ClearMode`](#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)`()` <a id="structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

<br>
#### `public inline float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1adff47451ba8cb1bc858eb86a705dee18)`()` <a id="structFRHAPI__MapConfig_1adff47451ba8cb1bc858eb86a705dee18"></a>

Gets the value of SelectionChance_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a77948a14fc86712b0da6c6089fb55435)`() const` <a id="structFRHAPI__MapConfig_1a77948a14fc86712b0da6c6089fb55435"></a>

Gets the value of SelectionChance_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a5d02d77a96b0eadca36a6468dd1c5244)`(const float & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a5d02d77a96b0eadca36a6468dd1c5244"></a>

Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3)`(float & OutValue) const` <a id="structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3"></a>

Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a6067e02d5d174e61188d346aef5825ed)`()` <a id="structFRHAPI__MapConfig_1a6067e02d5d174e61188d346aef5825ed"></a>

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a174cd841783dbb5d1c27c18a6f4829af)`() const` <a id="structFRHAPI__MapConfig_1a174cd841783dbb5d1c27c18a6f4829af"></a>

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1aeaa12a9139b006b16e45a02e52fd94d3)`(float NewValue)` <a id="structFRHAPI__MapConfig_1aeaa12a9139b006b16e45a02e52fd94d3"></a>

Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.

<br>
#### `public inline void `[`ClearSelectionChance`](#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)`()` <a id="structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb"></a>

Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1aa21d7c490044213da89e8d7b46e3b563)`()` <a id="structFRHAPI__MapConfig_1aa21d7c490044213da89e8d7b46e3b563"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1adb5864db78f92ecec60c5826a505bbff)`() const` <a id="structFRHAPI__MapConfig_1adb5864db78f92ecec60c5826a505bbff"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a32d1d42b213c9d44d3cc0200163f4633)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a32d1d42b213c9d44d3cc0200163f4633"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1abe51517c32a9e215dccce6b8d6f9105b)`()` <a id="structFRHAPI__MapConfig_1abe51517c32a9e215dccce6b8d6f9105b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1ab0fa35c32c6caf71441ac496bb4357ad)`() const` <a id="structFRHAPI__MapConfig_1ab0fa35c32c6caf71441ac496bb4357ad"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MapConfig_1ae7a5fe2266db4784b236b2ce9a39e4e8)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MapConfig_1ae7a5fe2266db4784b236b2ce9a39e4e8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)`()` <a id="structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
