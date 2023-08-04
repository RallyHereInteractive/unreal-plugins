# RHAPI_SessionPlayerUpdateResponse <a id="group__RHAPI__SessionPlayerUpdateResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionPlayerUpdateResponse`](#structFRHAPI__SessionPlayerUpdateResponse) | 

## struct `FRHAPI_SessionPlayerUpdateResponse` <a id="structFRHAPI__SessionPlayerUpdateResponse"></a>

```
struct FRHAPI_SessionPlayerUpdateResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76) | Status of the player after the request is completed.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1) | Resulting custom data about the player.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a022836b19e964a142c582bedf3029335)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateResponse_1aa3d1846e019c5cb83d6b70a2a5e9eefd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818)`()` | Gets the value of Status.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a4fc96450ff368d273556f7f3ba07c6d0)`(ERHAPI_SessionPlayerStatus NewValue)` | Sets the value of Status.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a2ff7004bde77929d76718821735ee5cb)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76) <a id="structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76"></a>

Status of the player after the request is completed.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1) <a id="structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1"></a>

Resulting custom data about the player.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1) <a id="structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a022836b19e964a142c582bedf3029335)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a022836b19e964a142c582bedf3029335"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateResponse_1aa3d1846e019c5cb83d6b70a2a5e9eefd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aa3d1846e019c5cb83d6b70a2a5e9eefd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818"></a>

Gets the value of Status.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231"></a>

Gets the value of Status.

<br>
#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a4fc96450ff368d273556f7f3ba07c6d0)`(ERHAPI_SessionPlayerStatus NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a4fc96450ff368d273556f7f3ba07c6d0"></a>

Sets the value of Status.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a2ff7004bde77929d76718821735ee5cb)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a2ff7004bde77929d76718821735ee5cb"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
