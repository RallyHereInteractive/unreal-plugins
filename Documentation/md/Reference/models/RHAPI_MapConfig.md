---
title: RHAPI_MapConfig
---

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

### Summary

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
`public virtual bool `[`FromJson`](#structFRHAPI__MapConfig_1a13f29ac7373a2621b9077dbd52a6a3ed)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapConfig_1a8dc36bf51131ed55f9d52599d6913b67)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a75a6d295e40c522f8ab09aa26a2ffcc6)`()` | Gets the value of MapGameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a1b8205779496cc55ef81ead9538075a3)`() const` | Gets the value of MapGameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a8598a7f283e90ba4874b6f23869902d6)`(const int32 & DefaultValue) const` | Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapGameId`](#structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc)`(int32 & OutValue) const` | Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a6d8843e17ed2dbb0f795e3c087b7b649)`()` | Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a8fbe6c50cc8935c8bcda4bc5b6e0d48f)`() const` | Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapGameId`](#structFRHAPI__MapConfig_1a555ef18ebfe1199105223887ef10a79e)`(const int32 & NewValue)` | Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.
`public inline void `[`SetMapGameId`](#structFRHAPI__MapConfig_1a381bd2eacf46dc123c2c2e6a68df0bb4)`(int32 && NewValue)` | Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true using move semantics.
`public inline void `[`ClearMapGameId`](#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)`()` | Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.
`public inline bool `[`IsMapGameIdSet`](#structFRHAPI__MapConfig_1a3d3afebd6bb2b6e3b09a72a7620c08d7)`() const` | Checks whether MapGameId_Optional has been set.
`public inline bool `[`IsMapGameIdDefaultValue`](#structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123)`() const` | Returns true if MapGameId_Optional is set and matches the default value.
`public inline void `[`SetMapGameIdToDefault`](#structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c)`()` | Sets the value of MapGameId_Optional to its default and also sets MapGameId_IsSet to true.
`public inline FString & `[`GetMapName`](#structFRHAPI__MapConfig_1a7a4846bf7afca24f81f23cac924d6e6b)`()` | Gets the value of MapName.
`public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfig_1a1088a4a6308558b0b7e56acb2f6b9392)`() const` | Gets the value of MapName.
`public inline void `[`SetMapName`](#structFRHAPI__MapConfig_1a33575bbba06af5f80ed6c4b900ab7240)`(const FString & NewValue)` | Sets the value of MapName.
`public inline void `[`SetMapName`](#structFRHAPI__MapConfig_1a1d01cdabf2406c29ed1b9ed23540a035)`(FString && NewValue)` | Sets the value of MapName using move semantics.
`public inline FString & `[`GetMode`](#structFRHAPI__MapConfig_1a35c94b945d75ec7bf1227d93ae55512a)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a6c3b1a1635d1ed121611a759c0818947)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a097b292dc688a9d922a00a5806fc699f)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1a2e0b380ae1f428f4091fb64ca5e4294a)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1ab9cc3b38a061c51a19126d76e5623f3d)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__MapConfig_1a9bb5b7ae32eff47e0526c155870d7300)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__MapConfig_1a884904324fba5324d02d04cb638949fb)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__MapConfig_1a5a8e7e3b96a6915f72e52c08c283e38e)`() const` | Checks whether Mode_Optional has been set.
`public inline float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1aacacc30af00c87a38c82f4977c14cb71)`()` | Gets the value of SelectionChance_Optional, regardless of it having been set.
`public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a5a50694911d272f8da835af889ba516a)`() const` | Gets the value of SelectionChance_Optional, regardless of it having been set.
`public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a7bf401c78390f7d483d4714d4d667b8a)`(const float & DefaultValue) const` | Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3)`(float & OutValue) const` | Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a5af1193660f06c61f706f5ca34d45563)`()` | Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a062bd0a764d984eb156832965ed03c46)`() const` | Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a59c91a0dbf932d04b80c96c185038f33)`(const float & NewValue)` | Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.
`public inline void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a4e5a9e2f65dc8604df605409fc358385)`(float && NewValue)` | Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true using move semantics.
`public inline void `[`ClearSelectionChance`](#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)`()` | Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.
`public inline bool `[`IsSelectionChanceSet`](#structFRHAPI__MapConfig_1a190238eee53e28e1950809331823d9af)`() const` | Checks whether SelectionChance_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1aa809b176fa1b4977d204182c07219b09)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a4a740d7ca9ff67aabb2f0e4eb96c04be)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a849533429a08647db0443b14ff561caa)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1ae868675a5990bdf06194c5bb9760c924)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1ade4f2a529b6a6b3f51ed914bef088e87)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MapConfig_1a67d51a0f6481ccc2f5555006c9a9217b)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MapConfig_1a6297d9446c9c2b3ede12b70f856b5679)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MapConfig_1abc72ecca66e834d5fa2ce64f5b94bac2)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public int32 `[`MapGameId_Optional`](#structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3) <a id="structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3"></a>

ID to uniquely identify this map game.

#### `public bool `[`MapGameId_IsSet`](#structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5) <a id="structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5"></a>

true if MapGameId_Optional has been set to a value

#### `public FString `[`MapName`](#structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7) <a id="structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7"></a>

Name of the map the instance should load into.

#### `public FString `[`Mode_Optional`](#structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a) <a id="structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a"></a>

Game mode for the instance to spawn in.

#### `public bool `[`Mode_IsSet`](#structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e) <a id="structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e"></a>

true if Mode_Optional has been set to a value

#### `public float `[`SelectionChance_Optional`](#structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c) <a id="structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c"></a>

Chance that this map will get selected in a rotation list.

#### `public bool `[`SelectionChance_IsSet`](#structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c) <a id="structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c"></a>

true if SelectionChance_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1) <a id="structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1"></a>

Custom data to pass through to the instance.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5) <a id="structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MapConfig_1a13f29ac7373a2621b9077dbd52a6a3ed)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapConfig_1a13f29ac7373a2621b9077dbd52a6a3ed"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MapConfig_1a8dc36bf51131ed55f9d52599d6913b67)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MapConfig_1a8dc36bf51131ed55f9d52599d6913b67"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a75a6d295e40c522f8ab09aa26a2ffcc6)`()` <a id="structFRHAPI__MapConfig_1a75a6d295e40c522f8ab09aa26a2ffcc6"></a>

Gets the value of MapGameId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a1b8205779496cc55ef81ead9538075a3)`() const` <a id="structFRHAPI__MapConfig_1a1b8205779496cc55ef81ead9538075a3"></a>

Gets the value of MapGameId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1a8598a7f283e90ba4874b6f23869902d6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a8598a7f283e90ba4874b6f23869902d6"></a>

Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapGameId`](#structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc)`(int32 & OutValue) const` <a id="structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc"></a>

Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a6d8843e17ed2dbb0f795e3c087b7b649)`()` <a id="structFRHAPI__MapConfig_1a6d8843e17ed2dbb0f795e3c087b7b649"></a>

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a8fbe6c50cc8935c8bcda4bc5b6e0d48f)`() const` <a id="structFRHAPI__MapConfig_1a8fbe6c50cc8935c8bcda4bc5b6e0d48f"></a>

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapGameId`](#structFRHAPI__MapConfig_1a555ef18ebfe1199105223887ef10a79e)`(const int32 & NewValue)` <a id="structFRHAPI__MapConfig_1a555ef18ebfe1199105223887ef10a79e"></a>

Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.

#### `public inline void `[`SetMapGameId`](#structFRHAPI__MapConfig_1a381bd2eacf46dc123c2c2e6a68df0bb4)`(int32 && NewValue)` <a id="structFRHAPI__MapConfig_1a381bd2eacf46dc123c2c2e6a68df0bb4"></a>

Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true using move semantics.

#### `public inline void `[`ClearMapGameId`](#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)`()` <a id="structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05"></a>

Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.

#### `public inline bool `[`IsMapGameIdSet`](#structFRHAPI__MapConfig_1a3d3afebd6bb2b6e3b09a72a7620c08d7)`() const` <a id="structFRHAPI__MapConfig_1a3d3afebd6bb2b6e3b09a72a7620c08d7"></a>

Checks whether MapGameId_Optional has been set.

#### `public inline bool `[`IsMapGameIdDefaultValue`](#structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123)`() const` <a id="structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123"></a>

Returns true if MapGameId_Optional is set and matches the default value.

#### `public inline void `[`SetMapGameIdToDefault`](#structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c)`()` <a id="structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c"></a>

Sets the value of MapGameId_Optional to its default and also sets MapGameId_IsSet to true.

#### `public inline FString & `[`GetMapName`](#structFRHAPI__MapConfig_1a7a4846bf7afca24f81f23cac924d6e6b)`()` <a id="structFRHAPI__MapConfig_1a7a4846bf7afca24f81f23cac924d6e6b"></a>

Gets the value of MapName.

#### `public inline const FString & `[`GetMapName`](#structFRHAPI__MapConfig_1a1088a4a6308558b0b7e56acb2f6b9392)`() const` <a id="structFRHAPI__MapConfig_1a1088a4a6308558b0b7e56acb2f6b9392"></a>

Gets the value of MapName.

#### `public inline void `[`SetMapName`](#structFRHAPI__MapConfig_1a33575bbba06af5f80ed6c4b900ab7240)`(const FString & NewValue)` <a id="structFRHAPI__MapConfig_1a33575bbba06af5f80ed6c4b900ab7240"></a>

Sets the value of MapName.

#### `public inline void `[`SetMapName`](#structFRHAPI__MapConfig_1a1d01cdabf2406c29ed1b9ed23540a035)`(FString && NewValue)` <a id="structFRHAPI__MapConfig_1a1d01cdabf2406c29ed1b9ed23540a035"></a>

Sets the value of MapName using move semantics.

#### `public inline FString & `[`GetMode`](#structFRHAPI__MapConfig_1a35c94b945d75ec7bf1227d93ae55512a)`()` <a id="structFRHAPI__MapConfig_1a35c94b945d75ec7bf1227d93ae55512a"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a6c3b1a1635d1ed121611a759c0818947)`() const` <a id="structFRHAPI__MapConfig_1a6c3b1a1635d1ed121611a759c0818947"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a097b292dc688a9d922a00a5806fc699f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a097b292dc688a9d922a00a5806fc699f"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087)`(FString & OutValue) const` <a id="structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1a2e0b380ae1f428f4091fb64ca5e4294a)`()` <a id="structFRHAPI__MapConfig_1a2e0b380ae1f428f4091fb64ca5e4294a"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1ab9cc3b38a061c51a19126d76e5623f3d)`() const` <a id="structFRHAPI__MapConfig_1ab9cc3b38a061c51a19126d76e5623f3d"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__MapConfig_1a9bb5b7ae32eff47e0526c155870d7300)`(const FString & NewValue)` <a id="structFRHAPI__MapConfig_1a9bb5b7ae32eff47e0526c155870d7300"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__MapConfig_1a884904324fba5324d02d04cb638949fb)`(FString && NewValue)` <a id="structFRHAPI__MapConfig_1a884904324fba5324d02d04cb638949fb"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)`()` <a id="structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__MapConfig_1a5a8e7e3b96a6915f72e52c08c283e38e)`() const` <a id="structFRHAPI__MapConfig_1a5a8e7e3b96a6915f72e52c08c283e38e"></a>

Checks whether Mode_Optional has been set.

#### `public inline float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1aacacc30af00c87a38c82f4977c14cb71)`()` <a id="structFRHAPI__MapConfig_1aacacc30af00c87a38c82f4977c14cb71"></a>

Gets the value of SelectionChance_Optional, regardless of it having been set.

#### `public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a5a50694911d272f8da835af889ba516a)`() const` <a id="structFRHAPI__MapConfig_1a5a50694911d272f8da835af889ba516a"></a>

Gets the value of SelectionChance_Optional, regardless of it having been set.

#### `public inline const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a7bf401c78390f7d483d4714d4d667b8a)`(const float & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a7bf401c78390f7d483d4714d4d667b8a"></a>

Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3)`(float & OutValue) const` <a id="structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3"></a>

Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a5af1193660f06c61f706f5ca34d45563)`()` <a id="structFRHAPI__MapConfig_1a5af1193660f06c61f706f5ca34d45563"></a>

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a062bd0a764d984eb156832965ed03c46)`() const` <a id="structFRHAPI__MapConfig_1a062bd0a764d984eb156832965ed03c46"></a>

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a59c91a0dbf932d04b80c96c185038f33)`(const float & NewValue)` <a id="structFRHAPI__MapConfig_1a59c91a0dbf932d04b80c96c185038f33"></a>

Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.

#### `public inline void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a4e5a9e2f65dc8604df605409fc358385)`(float && NewValue)` <a id="structFRHAPI__MapConfig_1a4e5a9e2f65dc8604df605409fc358385"></a>

Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true using move semantics.

#### `public inline void `[`ClearSelectionChance`](#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)`()` <a id="structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb"></a>

Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.

#### `public inline bool `[`IsSelectionChanceSet`](#structFRHAPI__MapConfig_1a190238eee53e28e1950809331823d9af)`() const` <a id="structFRHAPI__MapConfig_1a190238eee53e28e1950809331823d9af"></a>

Checks whether SelectionChance_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1aa809b176fa1b4977d204182c07219b09)`()` <a id="structFRHAPI__MapConfig_1aa809b176fa1b4977d204182c07219b09"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a4a740d7ca9ff67aabb2f0e4eb96c04be)`() const` <a id="structFRHAPI__MapConfig_1a4a740d7ca9ff67aabb2f0e4eb96c04be"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a849533429a08647db0443b14ff561caa)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a849533429a08647db0443b14ff561caa"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1ae868675a5990bdf06194c5bb9760c924)`()` <a id="structFRHAPI__MapConfig_1ae868675a5990bdf06194c5bb9760c924"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1ade4f2a529b6a6b3f51ed914bef088e87)`() const` <a id="structFRHAPI__MapConfig_1ade4f2a529b6a6b3f51ed914bef088e87"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MapConfig_1a67d51a0f6481ccc2f5555006c9a9217b)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MapConfig_1a67d51a0f6481ccc2f5555006c9a9217b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MapConfig_1a6297d9446c9c2b3ede12b70f856b5679)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MapConfig_1a6297d9446c9c2b3ede12b70f856b5679"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)`()` <a id="structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MapConfig_1abc72ecca66e834d5fa2ce64f5b94bac2)`() const` <a id="structFRHAPI__MapConfig_1abc72ecca66e834d5fa2ce64f5b94bac2"></a>

Checks whether CustomData_Optional has been set.

