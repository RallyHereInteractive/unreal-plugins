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
`public inline FORCEINLINE FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a56a14179a9ec48b3294fb6589bb4aeeb)`()` | Gets the value of DeserterExpiration.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a942a159f01868c3795382726c31d88b4)`() const` | Gets the value of DeserterExpiration.
`public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a284feb8a86cfc7135dae16b2e2348c94)`(const FDateTime & NewValue)` | Sets the value of DeserterExpiration.
`public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a48c2639b33cdb1e55bee401a67351fa9)`(FDateTime && NewValue)` | Sets the value of DeserterExpiration using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1ac04319a7292b03a56f65204aa1341b41)`()` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a823ce77a26de49c3f19ccde9b493c39c)`() const` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1add6eeab0c2aa0efb005d1b8902ea0f2d)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a4a49afd29f86ffb27e00a52b7996e980)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1a1f72dbf9fd28395092b0f8c88dd618a4)`()` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1ab449813807e8dab1f14f793ce68e7191)`() const` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a29f83e1b20f09d385471a194fede590c)`(const FDateTime & NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.
`public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1abc4ae004ea05d08e81ccec4bac64d6f6)`(FDateTime && NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.
`public inline void `[`ClearDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a512c11d4217a0f82e1d0e79e1bd0fa6a)`()` | Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a28c665a5de34b30b8e7407ca4a8dba80)`()` | Gets the value of DeserterCount.
`public inline FORCEINLINE const int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1add98d0618f96ea9099597955a5c8e2d1)`() const` | Gets the value of DeserterCount.
`public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a20fb2b2ed2c664e52588b1fc48a5b2ca)`(const int32 & NewValue)` | Sets the value of DeserterCount.
`public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1afbccdad16cdabcc8f5e6e32dc74f1da7)`(int32 && NewValue)` | Sets the value of DeserterCount using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DeserterCount`](#structFRHAPI__DeserterUpdateRequest_1adc5ba18b4913fb7eaec0aca754e2c4b5)`()` | Returns the default value of DeserterCount.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a20bd24a8c98a3def4c03a38c45898d6b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a31eecdfc5b86b1504a76c4dac56c52b3)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a9f130161aea5d4b46c3c2689b9d7755e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1aa5aa35d4dde5f674564ae75d779e9583)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1a74738e2661ed0d59c840e87c3ae26361)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1ae6ade91031fa24658fc011cc7cc828e5)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a3a17c505758f70b4245a1e514e3eba25)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a5967663cf572159e30ed640b600a1b44)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a56a14179a9ec48b3294fb6589bb4aeeb)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a56a14179a9ec48b3294fb6589bb4aeeb"></a>

Gets the value of DeserterExpiration.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a942a159f01868c3795382726c31d88b4)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a942a159f01868c3795382726c31d88b4"></a>

Gets the value of DeserterExpiration.

#### `public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a284feb8a86cfc7135dae16b2e2348c94)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a284feb8a86cfc7135dae16b2e2348c94"></a>

Sets the value of DeserterExpiration.

#### `public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a48c2639b33cdb1e55bee401a67351fa9)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a48c2639b33cdb1e55bee401a67351fa9"></a>

Sets the value of DeserterExpiration using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1ac04319a7292b03a56f65204aa1341b41)`()` <a id="structFRHAPI__DeserterUpdateRequest_1ac04319a7292b03a56f65204aa1341b41"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a823ce77a26de49c3f19ccde9b493c39c)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a823ce77a26de49c3f19ccde9b493c39c"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1add6eeab0c2aa0efb005d1b8902ea0f2d)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1add6eeab0c2aa0efb005d1b8902ea0f2d"></a>

Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a4a49afd29f86ffb27e00a52b7996e980)`(FDateTime & OutValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1a4a49afd29f86ffb27e00a52b7996e980"></a>

Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1a1f72dbf9fd28395092b0f8c88dd618a4)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a1f72dbf9fd28395092b0f8c88dd618a4"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__DeserterUpdateRequest_1ab449813807e8dab1f14f793ce68e7191)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1ab449813807e8dab1f14f793ce68e7191"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a29f83e1b20f09d385471a194fede590c)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a29f83e1b20f09d385471a194fede590c"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1abc4ae004ea05d08e81ccec4bac64d6f6)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1abc4ae004ea05d08e81ccec4bac64d6f6"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterReset`](#structFRHAPI__DeserterUpdateRequest_1a512c11d4217a0f82e1d0e79e1bd0fa6a)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a512c11d4217a0f82e1d0e79e1bd0fa6a"></a>

Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a28c665a5de34b30b8e7407ca4a8dba80)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a28c665a5de34b30b8e7407ca4a8dba80"></a>

Gets the value of DeserterCount.

#### `public inline FORCEINLINE const int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1add98d0618f96ea9099597955a5c8e2d1)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1add98d0618f96ea9099597955a5c8e2d1"></a>

Gets the value of DeserterCount.

#### `public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a20fb2b2ed2c664e52588b1fc48a5b2ca)`(const int32 & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a20fb2b2ed2c664e52588b1fc48a5b2ca"></a>

Sets the value of DeserterCount.

#### `public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1afbccdad16cdabcc8f5e6e32dc74f1da7)`(int32 && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1afbccdad16cdabcc8f5e6e32dc74f1da7"></a>

Sets the value of DeserterCount using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DeserterCount`](#structFRHAPI__DeserterUpdateRequest_1adc5ba18b4913fb7eaec0aca754e2c4b5)`()` <a id="structFRHAPI__DeserterUpdateRequest_1adc5ba18b4913fb7eaec0aca754e2c4b5"></a>

Returns the default value of DeserterCount.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a20bd24a8c98a3def4c03a38c45898d6b)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a20bd24a8c98a3def4c03a38c45898d6b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a31eecdfc5b86b1504a76c4dac56c52b3)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a31eecdfc5b86b1504a76c4dac56c52b3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a9f130161aea5d4b46c3c2689b9d7755e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1a9f130161aea5d4b46c3c2689b9d7755e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1aa5aa35d4dde5f674564ae75d779e9583)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1aa5aa35d4dde5f674564ae75d779e9583"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1a74738e2661ed0d59c840e87c3ae26361)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a74738e2661ed0d59c840e87c3ae26361"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1ae6ade91031fa24658fc011cc7cc828e5)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1ae6ade91031fa24658fc011cc7cc828e5"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a3a17c505758f70b4245a1e514e3eba25)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a3a17c505758f70b4245a1e514e3eba25"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a5967663cf572159e30ed640b600a1b44)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a5967663cf572159e30ed640b600a1b44"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a)`()` <a id="structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

