# RHAPI_BrowserInfo <a id="group__RHAPI__BrowserInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserInfo`](#structFRHAPI__BrowserInfo) | Information about the browser resource in a session.

## struct `FRHAPI_BrowserInfo` <a id="structFRHAPI__BrowserInfo"></a>

```
struct FRHAPI_BrowserInfo
  : public FRHAPI_Model
```

Information about the browser resource in a session.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed) | Custom data with the listing of the instance in the Session browser.
`public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserInfo_1ad11253948831f090100b3b505e24e0b0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserInfo_1a5d6eb17971e4cf1f2d75309a87872efd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ab768e1e96e417faad6b3ecea7af5cae7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a9200ab98c941059ea8446b3d7a9cd43e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ac0dedffa4d7fd9b85ffdae4e68d8ec85)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a839964c99508071de3dac7c7d2705ea6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a1b453c2ac8b666a3c3e0ce3acdf0726d)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a6fe9c0b681f3646f18791398c90206a7)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed) <a id="structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed"></a>

Custom data with the listing of the instance in the Session browser.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604) <a id="structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserInfo_1ad11253948831f090100b3b505e24e0b0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserInfo_1ad11253948831f090100b3b505e24e0b0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserInfo_1a5d6eb17971e4cf1f2d75309a87872efd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BrowserInfo_1a5d6eb17971e4cf1f2d75309a87872efd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ab768e1e96e417faad6b3ecea7af5cae7)`()` <a id="structFRHAPI__BrowserInfo_1ab768e1e96e417faad6b3ecea7af5cae7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a9200ab98c941059ea8446b3d7a9cd43e)`() const` <a id="structFRHAPI__BrowserInfo_1a9200ab98c941059ea8446b3d7a9cd43e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ac0dedffa4d7fd9b85ffdae4e68d8ec85)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserInfo_1ac0dedffa4d7fd9b85ffdae4e68d8ec85"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a839964c99508071de3dac7c7d2705ea6)`()` <a id="structFRHAPI__BrowserInfo_1a839964c99508071de3dac7c7d2705ea6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a1b453c2ac8b666a3c3e0ce3acdf0726d)`() const` <a id="structFRHAPI__BrowserInfo_1a1b453c2ac8b666a3c3e0ce3acdf0726d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a6fe9c0b681f3646f18791398c90206a7)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__BrowserInfo_1a6fe9c0b681f3646f18791398c90206a7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)`()` <a id="structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
