---
title: RHAPI_DeserterUpdateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_DeserterUpdateRequest`](#structFRHAPI__DeserterUpdateRequest) | 

## struct `FRHAPI_DeserterUpdateRequest` <a id="structFRHAPI__DeserterUpdateRequest"></a>

```
struct FRHAPI_DeserterUpdateRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`DeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1abc5a2bfca5dc0bbcb24059f0b0646e67) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FDateTime `[`DeserterReset_Optional`](#structFRHAPI__DeserterUpdateRequest_1abfce74c562cf4237bfbb45f06b836b04) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`DeserterReset_IsSet`](#structFRHAPI__DeserterUpdateRequest_1af0ce8ab985d9ee1adbaf9386a4c986b3) | true if DeserterReset_Optional has been set to a value
`public int32 `[`DeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ac80af6ecd1fdc8e77afc74bb313fe68c) | The number of times a player has deserted before the expiration.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__DeserterUpdateRequest_1a9d624dd17989a5011d32e545f4c8c83f) | Custom data about a players desertion status.
`public bool `[`CustomData_IsSet`](#structFRHAPI__DeserterUpdateRequest_1ad18fdc843a868e4dfe59153c294d1ec5) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__DeserterUpdateRequest_1a28c8fc915ef9169844490fd6f6b25a12)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DeserterUpdateRequest_1a8ee2253147ff34b3fced82c1b0179cbb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a2ee7188e20d142de3c29a551b2794d8f)`()` | Gets the value of DeserterExpiration.
`public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a4efdc98de6503a2dc6310d20cf4ae54e)`() const` | Gets the value of DeserterExpiration.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a40498a8ddd61dab1f042ef765f2e886e)`(const FDateTime & NewValue)` | Sets the value of DeserterExpiration.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a68aa25df89df4c30fde3371f670b0200)`(FDateTime && NewValue)` | Sets the value of DeserterExpiration using move semantics.
`public inline FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1ab3415b7140478d052a78e8c2fef70fa0)`()` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a76674128a2af16b5284a2e683dc5bd67)`() const` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1ab6bb719d6a55063c14cb10ddc60f2cf6)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1aeae624ec9534bd64f61501c721837b41)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1a494c8ca5e41a9608f3e6f4f38f3d02ce)`()` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1a7ec8a6b96e672004004c9fbf7b51cfe2)`() const` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1aae31c8028363ac1ebe18ba44c76003de)`(const FDateTime & NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.
`public inline void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a9c99a8840750a2c01215af0ffe2f348a)`(FDateTime && NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.
`public inline void `[`ClearDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a512c11d4217a0f82e1d0e79e1bd0fa6a)`()` | Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.
`public inline bool `[`IsDeserterResetSet`](#structFRHAPI__DeserterUpdateRequest_1a3f0a43bfdf14352be03d6911a907f76a)`() const` | Checks whether DeserterReset_Optional has been set.
`public inline int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a56c4fc24eaeed0bacca4d48e5b17417a)`()` | Gets the value of DeserterCount.
`public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ae760a6d77f7cd34981b9677c4b90a2b8)`() const` | Gets the value of DeserterCount.
`public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ab76ae6905d3e80cebcddb8db142477e0)`(const int32 & NewValue)` | Sets the value of DeserterCount.
`public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a53b1365663b095b5a260336b90bbeae4)`(int32 && NewValue)` | Sets the value of DeserterCount using move semantics.
`public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__DeserterUpdateRequest_1a8456762aa88a7fca3e7a16f2ef063a1b)`() const` | Returns true if DeserterCount matches the default value.
`public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__DeserterUpdateRequest_1a7bc74864258e13cbf17ed269c6d150be)`()` | Sets the value of DeserterCount to its default
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a56101aeadeea326f3c3757725968c92f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1acb0ffbd93deaa318743a548c633a29fc)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1ad5a0596ad0f19e831e3fda4a449422a4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a33ffec908a48eadac90bba9bfdf22ce9)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1af859c67d7507f72512a0546304fc5c9c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1a7ea278ab0c9c296557db5a910629444f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a30f9399f7db13b0c0587f35388b14f7e)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a660f3f2dec0b37be51e06c1b5eb6f65b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__DeserterUpdateRequest_1a1adf1430f406588bffef1bdfa550bc96)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FDateTime `[`DeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1abc5a2bfca5dc0bbcb24059f0b0646e67) <a id="structFRHAPI__DeserterUpdateRequest_1abc5a2bfca5dc0bbcb24059f0b0646e67"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FDateTime `[`DeserterReset_Optional`](#structFRHAPI__DeserterUpdateRequest_1abfce74c562cf4237bfbb45f06b836b04) <a id="structFRHAPI__DeserterUpdateRequest_1abfce74c562cf4237bfbb45f06b836b04"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`DeserterReset_IsSet`](#structFRHAPI__DeserterUpdateRequest_1af0ce8ab985d9ee1adbaf9386a4c986b3) <a id="structFRHAPI__DeserterUpdateRequest_1af0ce8ab985d9ee1adbaf9386a4c986b3"></a>

true if DeserterReset_Optional has been set to a value

#### `public int32 `[`DeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ac80af6ecd1fdc8e77afc74bb313fe68c) <a id="structFRHAPI__DeserterUpdateRequest_1ac80af6ecd1fdc8e77afc74bb313fe68c"></a>

The number of times a player has deserted before the expiration.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__DeserterUpdateRequest_1a9d624dd17989a5011d32e545f4c8c83f) <a id="structFRHAPI__DeserterUpdateRequest_1a9d624dd17989a5011d32e545f4c8c83f"></a>

Custom data about a players desertion status.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__DeserterUpdateRequest_1ad18fdc843a868e4dfe59153c294d1ec5) <a id="structFRHAPI__DeserterUpdateRequest_1ad18fdc843a868e4dfe59153c294d1ec5"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__DeserterUpdateRequest_1a28c8fc915ef9169844490fd6f6b25a12)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a28c8fc915ef9169844490fd6f6b25a12"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__DeserterUpdateRequest_1a8ee2253147ff34b3fced82c1b0179cbb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__DeserterUpdateRequest_1a8ee2253147ff34b3fced82c1b0179cbb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a2ee7188e20d142de3c29a551b2794d8f)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a2ee7188e20d142de3c29a551b2794d8f"></a>

Gets the value of DeserterExpiration.

#### `public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a4efdc98de6503a2dc6310d20cf4ae54e)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a4efdc98de6503a2dc6310d20cf4ae54e"></a>

Gets the value of DeserterExpiration.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a40498a8ddd61dab1f042ef765f2e886e)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a40498a8ddd61dab1f042ef765f2e886e"></a>

Sets the value of DeserterExpiration.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a68aa25df89df4c30fde3371f670b0200)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a68aa25df89df4c30fde3371f670b0200"></a>

Sets the value of DeserterExpiration using move semantics.

#### `public inline FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1ab3415b7140478d052a78e8c2fef70fa0)`()` <a id="structFRHAPI__DeserterUpdateRequest_1ab3415b7140478d052a78e8c2fef70fa0"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a76674128a2af16b5284a2e683dc5bd67)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a76674128a2af16b5284a2e683dc5bd67"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1ab6bb719d6a55063c14cb10ddc60f2cf6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1ab6bb719d6a55063c14cb10ddc60f2cf6"></a>

Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1aeae624ec9534bd64f61501c721837b41)`(FDateTime & OutValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1aeae624ec9534bd64f61501c721837b41"></a>

Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1a494c8ca5e41a9608f3e6f4f38f3d02ce)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a494c8ca5e41a9608f3e6f4f38f3d02ce"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1a7ec8a6b96e672004004c9fbf7b51cfe2)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a7ec8a6b96e672004004c9fbf7b51cfe2"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1aae31c8028363ac1ebe18ba44c76003de)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1aae31c8028363ac1ebe18ba44c76003de"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.

#### `public inline void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a9c99a8840750a2c01215af0ffe2f348a)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a9c99a8840750a2c01215af0ffe2f348a"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a512c11d4217a0f82e1d0e79e1bd0fa6a)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a512c11d4217a0f82e1d0e79e1bd0fa6a"></a>

Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.

#### `public inline bool `[`IsDeserterResetSet`](#structFRHAPI__DeserterUpdateRequest_1a3f0a43bfdf14352be03d6911a907f76a)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a3f0a43bfdf14352be03d6911a907f76a"></a>

Checks whether DeserterReset_Optional has been set.

#### `public inline int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a56c4fc24eaeed0bacca4d48e5b17417a)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a56c4fc24eaeed0bacca4d48e5b17417a"></a>

Gets the value of DeserterCount.

#### `public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ae760a6d77f7cd34981b9677c4b90a2b8)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1ae760a6d77f7cd34981b9677c4b90a2b8"></a>

Gets the value of DeserterCount.

#### `public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ab76ae6905d3e80cebcddb8db142477e0)`(const int32 & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1ab76ae6905d3e80cebcddb8db142477e0"></a>

Sets the value of DeserterCount.

#### `public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a53b1365663b095b5a260336b90bbeae4)`(int32 && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a53b1365663b095b5a260336b90bbeae4"></a>

Sets the value of DeserterCount using move semantics.

#### `public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__DeserterUpdateRequest_1a8456762aa88a7fca3e7a16f2ef063a1b)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a8456762aa88a7fca3e7a16f2ef063a1b"></a>

Returns true if DeserterCount matches the default value.

#### `public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__DeserterUpdateRequest_1a7bc74864258e13cbf17ed269c6d150be)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a7bc74864258e13cbf17ed269c6d150be"></a>

Sets the value of DeserterCount to its default

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a56101aeadeea326f3c3757725968c92f)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a56101aeadeea326f3c3757725968c92f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1acb0ffbd93deaa318743a548c633a29fc)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1acb0ffbd93deaa318743a548c633a29fc"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1ad5a0596ad0f19e831e3fda4a449422a4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1ad5a0596ad0f19e831e3fda4a449422a4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a33ffec908a48eadac90bba9bfdf22ce9)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1a33ffec908a48eadac90bba9bfdf22ce9"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1af859c67d7507f72512a0546304fc5c9c)`()` <a id="structFRHAPI__DeserterUpdateRequest_1af859c67d7507f72512a0546304fc5c9c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1a7ea278ab0c9c296557db5a910629444f)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a7ea278ab0c9c296557db5a910629444f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a30f9399f7db13b0c0587f35388b14f7e)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a30f9399f7db13b0c0587f35388b14f7e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a660f3f2dec0b37be51e06c1b5eb6f65b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a660f3f2dec0b37be51e06c1b5eb6f65b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a)`()` <a id="structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__DeserterUpdateRequest_1a1adf1430f406588bffef1bdfa550bc96)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a1adf1430f406588bffef1bdfa550bc96"></a>

Checks whether CustomData_Optional has been set.

