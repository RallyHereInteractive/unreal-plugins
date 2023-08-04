# RHAPI_SessionUpdate <a id="group__RHAPI__SessionUpdate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionUpdate`](#structFRHAPI__SessionUpdate) | 

## struct `FRHAPI_SessionUpdate` <a id="structFRHAPI__SessionUpdate"></a>

```
struct FRHAPI_SessionUpdate
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RegionId_Optional`](#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333) | true if RegionId_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816) | Leader Player or instance defined custom data about this session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1afa43baf74e0c17d38ef79d73a9101d5d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1ac9074a03cedc50aa8525fadaa378bf75)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1af3738baba2b55dd312a464d2cd2cb5b2)`(FString NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1a067b23e769c67dbef812810ef33038fd)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`RegionId_Optional`](#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb) <a id="structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb"></a>

Preferred region for the instance and match to take place in.

<br>
#### `public bool `[`RegionId_IsSet`](#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333) <a id="structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333"></a>

true if RegionId_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816) <a id="structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816"></a>

Leader Player or instance defined custom data about this session.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6) <a id="structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1afa43baf74e0c17d38ef79d73a9101d5d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionUpdate_1afa43baf74e0c17d38ef79d73a9101d5d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1ac9074a03cedc50aa8525fadaa378bf75)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionUpdate_1ac9074a03cedc50aa8525fadaa378bf75"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab)`()` <a id="structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9)`() const` <a id="structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)`(FString & OutValue) const` <a id="structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9)`()` <a id="structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec)`() const` <a id="structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1af3738baba2b55dd312a464d2cd2cb5b2)`(FString NewValue)` <a id="structFRHAPI__SessionUpdate_1af3738baba2b55dd312a464d2cd2cb5b2"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

<br>
#### `public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` <a id="structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7)`()` <a id="structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe)`() const` <a id="structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553)`()` <a id="structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e)`() const` <a id="structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1a067b23e769c67dbef812810ef33038fd)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionUpdate_1a067b23e769c67dbef812810ef33038fd"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` <a id="structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
