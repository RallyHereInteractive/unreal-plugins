# RHAPI_BlockedPlayerV1 <a id="group__RHAPI__BlockedPlayerV1"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BlockedPlayerV1`](#structFRHAPI__BlockedPlayerV1) | The player that is being blocked. V1 includes player_id and player_uuid.

## struct `FRHAPI_BlockedPlayerV1` <a id="structFRHAPI__BlockedPlayerV1"></a>

```
struct FRHAPI_BlockedPlayerV1
  : public FRHAPI_Model
```

The player that is being blocked. V1 includes player_id and player_uuid.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`BlockedPlayerId_Optional`](#structFRHAPI__BlockedPlayerV1_1a2c0a8dc3a7a9c10eebed6a6ec6566199) | 
`public bool `[`BlockedPlayerId_IsSet`](#structFRHAPI__BlockedPlayerV1_1a54dbc01c6c7e00ac91846fece6f7d104) | true if BlockedPlayerId_Optional has been set to a value
`public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1a5d4cb32109c33c54a9f78b78051d1f7b) | 
`public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1a0dd41d0ff26e497bc7c0296d8427b77f) | 
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayerV1_1a6f64351fbbc1c96c9826085b98d384a9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayerV1_1a840a2d478851d5cac96982d47636466e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a14e1175346fa416207d7c93dc9ea9edd)`()` | Gets the value of BlockedPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a43af2c3ac8226d61e7b499088f254a0d)`() const` | Gets the value of BlockedPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a24ddb71f53adc353474ff6d4386971f2)`(const int32 & DefaultValue) const` | Gets the value of BlockedPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a205bd3351c53e2302c6cc1248a728eaa)`(int32 & OutValue) const` | Fills OutValue with the value of BlockedPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetBlockedPlayerIdOrNull`](#structFRHAPI__BlockedPlayerV1_1a9e11a950a8516599fee0b407ac1fedee)`()` | Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetBlockedPlayerIdOrNull`](#structFRHAPI__BlockedPlayerV1_1ad5963fa5d1ffe8ed94d4b497079c2a0c)`() const` | Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a755fc2d828b8734851a73da798c8875c)`(int32 NewValue)` | Sets the value of BlockedPlayerId_Optional and also sets BlockedPlayerId_IsSet to true.
`public inline void `[`ClearBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a2e7d44afaa128e42642207f7ca8942d0)`()` | Clears the value of BlockedPlayerId_Optional and sets BlockedPlayerId_IsSet to false.
`public inline bool `[`IsBlockedPlayerIdDefaultValue`](#structFRHAPI__BlockedPlayerV1_1a569e9403d985c563dc2520420d7d0678)`() const` | Returns true if BlockedPlayerId_Optional is set and matches the default value.
`public inline void `[`SetBlockedPlayerIdToDefault`](#structFRHAPI__BlockedPlayerV1_1ae7d25bb29a63de671f8b98d10dcd1f21)`()` | Sets the value of BlockedPlayerId_Optional to its default and also sets BlockedPlayerId_IsSet to true.
`public inline FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1ac42f806a7777f546ffd6ab133c6a2e5c)`()` | Gets the value of BlockedPlayerUuid.
`public inline const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1a2202ee54fdde82fceb495fef30d0e937)`() const` | Gets the value of BlockedPlayerUuid.
`public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1ab379b9ecaf5ada4a5ba827f686930e27)`(FGuid NewValue)` | Sets the value of BlockedPlayerUuid.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1adb166e94801e68f9f9b781bf3e47135d)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1a6ac3224bec707ae8bb7cb49c3ddb1c59)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1aee5bfec8464fb07e11c36a60a03ce35e)`(FDateTime NewValue)` | Sets the value of LastModifiedOn.

#### Members

#### `public int32 `[`BlockedPlayerId_Optional`](#structFRHAPI__BlockedPlayerV1_1a2c0a8dc3a7a9c10eebed6a6ec6566199) <a id="structFRHAPI__BlockedPlayerV1_1a2c0a8dc3a7a9c10eebed6a6ec6566199"></a>

#### `public bool `[`BlockedPlayerId_IsSet`](#structFRHAPI__BlockedPlayerV1_1a54dbc01c6c7e00ac91846fece6f7d104) <a id="structFRHAPI__BlockedPlayerV1_1a54dbc01c6c7e00ac91846fece6f7d104"></a>

true if BlockedPlayerId_Optional has been set to a value

#### `public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1a5d4cb32109c33c54a9f78b78051d1f7b) <a id="structFRHAPI__BlockedPlayerV1_1a5d4cb32109c33c54a9f78b78051d1f7b"></a>

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1a0dd41d0ff26e497bc7c0296d8427b77f) <a id="structFRHAPI__BlockedPlayerV1_1a0dd41d0ff26e497bc7c0296d8427b77f"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayerV1_1a6f64351fbbc1c96c9826085b98d384a9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedPlayerV1_1a6f64351fbbc1c96c9826085b98d384a9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayerV1_1a840a2d478851d5cac96982d47636466e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BlockedPlayerV1_1a840a2d478851d5cac96982d47636466e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a14e1175346fa416207d7c93dc9ea9edd)`()` <a id="structFRHAPI__BlockedPlayerV1_1a14e1175346fa416207d7c93dc9ea9edd"></a>

Gets the value of BlockedPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a43af2c3ac8226d61e7b499088f254a0d)`() const` <a id="structFRHAPI__BlockedPlayerV1_1a43af2c3ac8226d61e7b499088f254a0d"></a>

Gets the value of BlockedPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a24ddb71f53adc353474ff6d4386971f2)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BlockedPlayerV1_1a24ddb71f53adc353474ff6d4386971f2"></a>

Gets the value of BlockedPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a205bd3351c53e2302c6cc1248a728eaa)`(int32 & OutValue) const` <a id="structFRHAPI__BlockedPlayerV1_1a205bd3351c53e2302c6cc1248a728eaa"></a>

Fills OutValue with the value of BlockedPlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetBlockedPlayerIdOrNull`](#structFRHAPI__BlockedPlayerV1_1a9e11a950a8516599fee0b407ac1fedee)`()` <a id="structFRHAPI__BlockedPlayerV1_1a9e11a950a8516599fee0b407ac1fedee"></a>

Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetBlockedPlayerIdOrNull`](#structFRHAPI__BlockedPlayerV1_1ad5963fa5d1ffe8ed94d4b497079c2a0c)`() const` <a id="structFRHAPI__BlockedPlayerV1_1ad5963fa5d1ffe8ed94d4b497079c2a0c"></a>

Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a755fc2d828b8734851a73da798c8875c)`(int32 NewValue)` <a id="structFRHAPI__BlockedPlayerV1_1a755fc2d828b8734851a73da798c8875c"></a>

Sets the value of BlockedPlayerId_Optional and also sets BlockedPlayerId_IsSet to true.

#### `public inline void `[`ClearBlockedPlayerId`](#structFRHAPI__BlockedPlayerV1_1a2e7d44afaa128e42642207f7ca8942d0)`()` <a id="structFRHAPI__BlockedPlayerV1_1a2e7d44afaa128e42642207f7ca8942d0"></a>

Clears the value of BlockedPlayerId_Optional and sets BlockedPlayerId_IsSet to false.

#### `public inline bool `[`IsBlockedPlayerIdDefaultValue`](#structFRHAPI__BlockedPlayerV1_1a569e9403d985c563dc2520420d7d0678)`() const` <a id="structFRHAPI__BlockedPlayerV1_1a569e9403d985c563dc2520420d7d0678"></a>

Returns true if BlockedPlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetBlockedPlayerIdToDefault`](#structFRHAPI__BlockedPlayerV1_1ae7d25bb29a63de671f8b98d10dcd1f21)`()` <a id="structFRHAPI__BlockedPlayerV1_1ae7d25bb29a63de671f8b98d10dcd1f21"></a>

Sets the value of BlockedPlayerId_Optional to its default and also sets BlockedPlayerId_IsSet to true.

#### `public inline FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1ac42f806a7777f546ffd6ab133c6a2e5c)`()` <a id="structFRHAPI__BlockedPlayerV1_1ac42f806a7777f546ffd6ab133c6a2e5c"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1a2202ee54fdde82fceb495fef30d0e937)`() const` <a id="structFRHAPI__BlockedPlayerV1_1a2202ee54fdde82fceb495fef30d0e937"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayerV1_1ab379b9ecaf5ada4a5ba827f686930e27)`(FGuid NewValue)` <a id="structFRHAPI__BlockedPlayerV1_1ab379b9ecaf5ada4a5ba827f686930e27"></a>

Sets the value of BlockedPlayerUuid.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1adb166e94801e68f9f9b781bf3e47135d)`()` <a id="structFRHAPI__BlockedPlayerV1_1adb166e94801e68f9f9b781bf3e47135d"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1a6ac3224bec707ae8bb7cb49c3ddb1c59)`() const` <a id="structFRHAPI__BlockedPlayerV1_1a6ac3224bec707ae8bb7cb49c3ddb1c59"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayerV1_1aee5bfec8464fb07e11c36a60a03ce35e)`(FDateTime NewValue)` <a id="structFRHAPI__BlockedPlayerV1_1aee5bfec8464fb07e11c36a60a03ce35e"></a>

Sets the value of LastModifiedOn.

