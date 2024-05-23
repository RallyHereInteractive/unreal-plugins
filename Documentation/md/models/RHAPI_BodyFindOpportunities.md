# group `RHAPI_BodyFindOpportunities` <a id="group__RHAPI__BodyFindOpportunities"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BodyFindOpportunities`](#structFRHAPI__BodyFindOpportunities) | 

## struct `FRHAPI_BodyFindOpportunities` <a id="structFRHAPI__BodyFindOpportunities"></a>

```
struct FRHAPI_BodyFindOpportunities
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`ScreenPixelWidth_Optional`](#structFRHAPI__BodyFindOpportunities_1a2f24ade1385dc3a8b41426ad2bac08a1) | Width of the screen in pixels.
`public bool `[`ScreenPixelWidth_IsSet`](#structFRHAPI__BodyFindOpportunities_1a9187fe5415e2f1cea7c949e0ef45bb8a) | true if ScreenPixelWidth_Optional has been set to a value
`public int32 `[`ScreenPixelHeight_Optional`](#structFRHAPI__BodyFindOpportunities_1a203a01830ae46eff931e59f8d14af089) | Height of the screen in pixels.
`public bool `[`ScreenPixelHeight_IsSet`](#structFRHAPI__BodyFindOpportunities_1a7e3d5e46c85439c7148a09d953b37691) | true if ScreenPixelHeight_Optional has been set to a value
`public FString `[`CountryCode`](#structFRHAPI__BodyFindOpportunities_1a7a792bb346c548d6b51ddfa97dbd4b7a) | [ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user
`public FString `[`LanguageCode`](#structFRHAPI__BodyFindOpportunities_1acda52cb7b0b82e80fa9f7726eb4923f0) | [ISO 639-2](https://www.loc.gov/standards/iso639-2/php/code_list.php) language code
`public FString `[`DeviceId_Optional`](#structFRHAPI__BodyFindOpportunities_1aecddbe9ef61c93765612120f22d809cb) | Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.
`public bool `[`DeviceId_IsSet`](#structFRHAPI__BodyFindOpportunities_1a62d71d9c70891074895910f1cdbea6d2) | true if DeviceId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BodyFindOpportunities_1aeb49f34b2783c3d98f64a6f29765bced)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BodyFindOpportunities_1ad9495a9e4dd6eb290b4497476cd27983)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a8800010d4d58b46142fc581eecc44452)`()` | Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1aefefa4eb30b57b14b9c33da8559aa7bf)`() const` | Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a5746301bb09b65f849326fbd2e3121b4)`(const int32 & DefaultValue) const` | Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d)`(int32 & OutValue) const` | Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a8c9bc39b971859ddbeb80556492c0fc6)`()` | Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a74fed5f63eef8c9cd4a35f2b1f3a0631)`() const` | Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4a473293db607d5367fda9debbbddb40)`(const int32 & NewValue)` | Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.
`public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4fe4e4d36d6912b2dc52aaa44b6bd233)`(int32 && NewValue)` | Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics.
`public inline void `[`ClearScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)`()` | Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.
`public inline bool `[`IsScreenPixelWidthDefaultValue`](#structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a)`() const` | Returns true if ScreenPixelWidth_Optional is set and matches the default value.
`public inline void `[`SetScreenPixelWidthToDefault`](#structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c)`()` | Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true.
`public inline int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a42bc8a43f564f849371215ae65ac87f4)`()` | Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a201d4dd5f694ab82dd95fc238c595801)`() const` | Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1ac5d4b8d7731a89ae0ee33c8c24e49288)`(const int32 & DefaultValue) const` | Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476)`(int32 & OutValue) const` | Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a8831af1b2f1f4151aeafb4c3704d1cf6)`()` | Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a148e76eb5c80318d7bada5ccb17b0d83)`() const` | Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5c4817f4d0d8a8261b52f50be1da556a)`(const int32 & NewValue)` | Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.
`public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a63cd7bc32854976762cbb1015dfbf140)`(int32 && NewValue)` | Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics.
`public inline void `[`ClearScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)`()` | Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.
`public inline bool `[`IsScreenPixelHeightDefaultValue`](#structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c)`() const` | Returns true if ScreenPixelHeight_Optional is set and matches the default value.
`public inline void `[`SetScreenPixelHeightToDefault`](#structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc)`()` | Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true.
`public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a1ecbe536baf4fd61c4828d6ba39b65f1)`()` | Gets the value of CountryCode.
`public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a7eae910423db2956866ea4955f23a205)`() const` | Gets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1af3f613ad705be75f5eb186d067bad2ec)`(const FString & NewValue)` | Sets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1aa4c36a18ae5fb9c64018b3e7f31dd895)`(FString && NewValue)` | Sets the value of CountryCode using move semantics.
`public inline FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a4d0b86e4faad731905c5db2a7ba9d213)`()` | Gets the value of LanguageCode.
`public inline const FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a0ff0d1a37dbb3f09955f382fef8607e3)`() const` | Gets the value of LanguageCode.
`public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1aba0c4e19fe30668d4af9a411f42c6805)`(const FString & NewValue)` | Sets the value of LanguageCode.
`public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a965aa093d5a53a88d66c9374dea7dee9)`(FString && NewValue)` | Sets the value of LanguageCode using move semantics.
`public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a99721c0a584f18326ec89bc1ff892f4b)`()` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a0091f17eb436e8fd318aafd99c15b84f)`() const` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a4fb6a5815305678edf7d607236d9996c)`(const FString & DefaultValue) const` | Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15)`(FString & OutValue) const` | Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1ad2ba474615210b658b077aa89a80ccc3)`()` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1a4cb9b21ae9e0cde5d141057915f7e417)`() const` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1adba3a2227fef489360c52b50eb9fc9ea)`(const FString & NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1af995107060547cef908951c8b551c147)`(FString && NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.
`public inline void `[`ClearDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186)`()` | Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

### Members

#### `public int32 `[`ScreenPixelWidth_Optional`](#structFRHAPI__BodyFindOpportunities_1a2f24ade1385dc3a8b41426ad2bac08a1) <a id="structFRHAPI__BodyFindOpportunities_1a2f24ade1385dc3a8b41426ad2bac08a1"></a>

Width of the screen in pixels.

#### `public bool `[`ScreenPixelWidth_IsSet`](#structFRHAPI__BodyFindOpportunities_1a9187fe5415e2f1cea7c949e0ef45bb8a) <a id="structFRHAPI__BodyFindOpportunities_1a9187fe5415e2f1cea7c949e0ef45bb8a"></a>

true if ScreenPixelWidth_Optional has been set to a value

#### `public int32 `[`ScreenPixelHeight_Optional`](#structFRHAPI__BodyFindOpportunities_1a203a01830ae46eff931e59f8d14af089) <a id="structFRHAPI__BodyFindOpportunities_1a203a01830ae46eff931e59f8d14af089"></a>

Height of the screen in pixels.

#### `public bool `[`ScreenPixelHeight_IsSet`](#structFRHAPI__BodyFindOpportunities_1a7e3d5e46c85439c7148a09d953b37691) <a id="structFRHAPI__BodyFindOpportunities_1a7e3d5e46c85439c7148a09d953b37691"></a>

true if ScreenPixelHeight_Optional has been set to a value

#### `public FString `[`CountryCode`](#structFRHAPI__BodyFindOpportunities_1a7a792bb346c548d6b51ddfa97dbd4b7a) <a id="structFRHAPI__BodyFindOpportunities_1a7a792bb346c548d6b51ddfa97dbd4b7a"></a>

[ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user

#### `public FString `[`LanguageCode`](#structFRHAPI__BodyFindOpportunities_1acda52cb7b0b82e80fa9f7726eb4923f0) <a id="structFRHAPI__BodyFindOpportunities_1acda52cb7b0b82e80fa9f7726eb4923f0"></a>

[ISO 639-2](https://www.loc.gov/standards/iso639-2/php/code_list.php) language code

#### `public FString `[`DeviceId_Optional`](#structFRHAPI__BodyFindOpportunities_1aecddbe9ef61c93765612120f22d809cb) <a id="structFRHAPI__BodyFindOpportunities_1aecddbe9ef61c93765612120f22d809cb"></a>

Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.

#### `public bool `[`DeviceId_IsSet`](#structFRHAPI__BodyFindOpportunities_1a62d71d9c70891074895910f1cdbea6d2) <a id="structFRHAPI__BodyFindOpportunities_1a62d71d9c70891074895910f1cdbea6d2"></a>

true if DeviceId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BodyFindOpportunities_1aeb49f34b2783c3d98f64a6f29765bced)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BodyFindOpportunities_1aeb49f34b2783c3d98f64a6f29765bced"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BodyFindOpportunities_1ad9495a9e4dd6eb290b4497476cd27983)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BodyFindOpportunities_1ad9495a9e4dd6eb290b4497476cd27983"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a8800010d4d58b46142fc581eecc44452)`()` <a id="structFRHAPI__BodyFindOpportunities_1a8800010d4d58b46142fc581eecc44452"></a>

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1aefefa4eb30b57b14b9c33da8559aa7bf)`() const` <a id="structFRHAPI__BodyFindOpportunities_1aefefa4eb30b57b14b9c33da8559aa7bf"></a>

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a5746301bb09b65f849326fbd2e3121b4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a5746301bb09b65f849326fbd2e3121b4"></a>

Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d)`(int32 & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d"></a>

Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a8c9bc39b971859ddbeb80556492c0fc6)`()` <a id="structFRHAPI__BodyFindOpportunities_1a8c9bc39b971859ddbeb80556492c0fc6"></a>

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a74fed5f63eef8c9cd4a35f2b1f3a0631)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a74fed5f63eef8c9cd4a35f2b1f3a0631"></a>

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4a473293db607d5367fda9debbbddb40)`(const int32 & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a4a473293db607d5367fda9debbbddb40"></a>

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.

#### `public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4fe4e4d36d6912b2dc52aaa44b6bd233)`(int32 && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a4fe4e4d36d6912b2dc52aaa44b6bd233"></a>

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics.

#### `public inline void `[`ClearScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)`()` <a id="structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2"></a>

Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.

#### `public inline bool `[`IsScreenPixelWidthDefaultValue`](#structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a"></a>

Returns true if ScreenPixelWidth_Optional is set and matches the default value.

#### `public inline void `[`SetScreenPixelWidthToDefault`](#structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c)`()` <a id="structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c"></a>

Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true.

#### `public inline int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a42bc8a43f564f849371215ae65ac87f4)`()` <a id="structFRHAPI__BodyFindOpportunities_1a42bc8a43f564f849371215ae65ac87f4"></a>

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a201d4dd5f694ab82dd95fc238c595801)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a201d4dd5f694ab82dd95fc238c595801"></a>

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1ac5d4b8d7731a89ae0ee33c8c24e49288)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1ac5d4b8d7731a89ae0ee33c8c24e49288"></a>

Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476)`(int32 & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476"></a>

Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a8831af1b2f1f4151aeafb4c3704d1cf6)`()` <a id="structFRHAPI__BodyFindOpportunities_1a8831af1b2f1f4151aeafb4c3704d1cf6"></a>

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a148e76eb5c80318d7bada5ccb17b0d83)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a148e76eb5c80318d7bada5ccb17b0d83"></a>

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5c4817f4d0d8a8261b52f50be1da556a)`(const int32 & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a5c4817f4d0d8a8261b52f50be1da556a"></a>

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.

#### `public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a63cd7bc32854976762cbb1015dfbf140)`(int32 && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a63cd7bc32854976762cbb1015dfbf140"></a>

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics.

#### `public inline void `[`ClearScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)`()` <a id="structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509"></a>

Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.

#### `public inline bool `[`IsScreenPixelHeightDefaultValue`](#structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c)`() const` <a id="structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c"></a>

Returns true if ScreenPixelHeight_Optional is set and matches the default value.

#### `public inline void `[`SetScreenPixelHeightToDefault`](#structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc)`()` <a id="structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc"></a>

Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true.

#### `public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a1ecbe536baf4fd61c4828d6ba39b65f1)`()` <a id="structFRHAPI__BodyFindOpportunities_1a1ecbe536baf4fd61c4828d6ba39b65f1"></a>

Gets the value of CountryCode.

#### `public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a7eae910423db2956866ea4955f23a205)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a7eae910423db2956866ea4955f23a205"></a>

Gets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1af3f613ad705be75f5eb186d067bad2ec)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1af3f613ad705be75f5eb186d067bad2ec"></a>

Sets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1aa4c36a18ae5fb9c64018b3e7f31dd895)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1aa4c36a18ae5fb9c64018b3e7f31dd895"></a>

Sets the value of CountryCode using move semantics.

#### `public inline FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a4d0b86e4faad731905c5db2a7ba9d213)`()` <a id="structFRHAPI__BodyFindOpportunities_1a4d0b86e4faad731905c5db2a7ba9d213"></a>

Gets the value of LanguageCode.

#### `public inline const FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a0ff0d1a37dbb3f09955f382fef8607e3)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a0ff0d1a37dbb3f09955f382fef8607e3"></a>

Gets the value of LanguageCode.

#### `public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1aba0c4e19fe30668d4af9a411f42c6805)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1aba0c4e19fe30668d4af9a411f42c6805"></a>

Sets the value of LanguageCode.

#### `public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a965aa093d5a53a88d66c9374dea7dee9)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a965aa093d5a53a88d66c9374dea7dee9"></a>

Sets the value of LanguageCode using move semantics.

#### `public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a99721c0a584f18326ec89bc1ff892f4b)`()` <a id="structFRHAPI__BodyFindOpportunities_1a99721c0a584f18326ec89bc1ff892f4b"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a0091f17eb436e8fd318aafd99c15b84f)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a0091f17eb436e8fd318aafd99c15b84f"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a4fb6a5815305678edf7d607236d9996c)`(const FString & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a4fb6a5815305678edf7d607236d9996c"></a>

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15)`(FString & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15"></a>

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1ad2ba474615210b658b077aa89a80ccc3)`()` <a id="structFRHAPI__BodyFindOpportunities_1ad2ba474615210b658b077aa89a80ccc3"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1a4cb9b21ae9e0cde5d141057915f7e417)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a4cb9b21ae9e0cde5d141057915f7e417"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1adba3a2227fef489360c52b50eb9fc9ea)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1adba3a2227fef489360c52b50eb9fc9ea"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1af995107060547cef908951c8b551c147)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1af995107060547cef908951c8b551c147"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186)`()` <a id="structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186"></a>

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

