---
title: RHAPI_BodyFindOpportunities
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__BodyFindOpportunities_1af93b0749dd02a53a6290535c5a990286)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BodyFindOpportunities_1a9675722a64237f7c7f1bd9d656c4043a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a6b09cec5b09f58b10c904cfdef0ea127)`()` | Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ad77e06dbf64af74ad03cbd38f4a68b9a)`() const` | Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1aa7d73b6635b6cdd34e995dbf6de02206)`(const int32 & DefaultValue) const` | Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d)`(int32 & OutValue) const` | Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a6a67035a33d14d45562cde64993efc3c)`()` | Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a8c799811014e3a3451bf4246a7328659)`() const` | Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4a473293db607d5367fda9debbbddb40)`(const int32 & NewValue)` | Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.
`public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4fe4e4d36d6912b2dc52aaa44b6bd233)`(int32 && NewValue)` | Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics.
`public inline void `[`ClearScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)`()` | Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.
`public inline bool `[`IsScreenPixelWidthSet`](#structFRHAPI__BodyFindOpportunities_1a26c4b3bdac2a5f5d3ef0df1fde439c8f)`() const` | Checks whether ScreenPixelWidth_Optional has been set.
`public inline bool `[`IsScreenPixelWidthDefaultValue`](#structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a)`() const` | Returns true if ScreenPixelWidth_Optional is set and matches the default value.
`public inline void `[`SetScreenPixelWidthToDefault`](#structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c)`()` | Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true.
`public inline int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a1101a30dd6e292a17cd51890824ba845)`()` | Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a35b3a63cb0bea9fe7717e9270b00309a)`() const` | Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a3bcd8019e75b1d0fbde7645d0d13f76d)`(const int32 & DefaultValue) const` | Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476)`(int32 & OutValue) const` | Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1ad76cee6f05701c58007b9d755bd7a531)`()` | Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1ad61359794df3b32445239c1c35bd7467)`() const` | Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5c4817f4d0d8a8261b52f50be1da556a)`(const int32 & NewValue)` | Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.
`public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a63cd7bc32854976762cbb1015dfbf140)`(int32 && NewValue)` | Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics.
`public inline void `[`ClearScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)`()` | Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.
`public inline bool `[`IsScreenPixelHeightSet`](#structFRHAPI__BodyFindOpportunities_1aacdbdc8aa8da16666cfb2ff21174b775)`() const` | Checks whether ScreenPixelHeight_Optional has been set.
`public inline bool `[`IsScreenPixelHeightDefaultValue`](#structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c)`() const` | Returns true if ScreenPixelHeight_Optional is set and matches the default value.
`public inline void `[`SetScreenPixelHeightToDefault`](#structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc)`()` | Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true.
`public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a03295bf590c57a86be3c21d19dd63516)`()` | Gets the value of CountryCode.
`public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a6ce3f41927b600d57715a473124ec19b)`() const` | Gets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1af3f613ad705be75f5eb186d067bad2ec)`(const FString & NewValue)` | Sets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1aa4c36a18ae5fb9c64018b3e7f31dd895)`(FString && NewValue)` | Sets the value of CountryCode using move semantics.
`public inline FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a3b09f4492aabddc6a6ab147f343862f0)`()` | Gets the value of LanguageCode.
`public inline const FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1ab0fae64c6776745425f6cd2779bfd679)`() const` | Gets the value of LanguageCode.
`public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1aba0c4e19fe30668d4af9a411f42c6805)`(const FString & NewValue)` | Sets the value of LanguageCode.
`public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a965aa093d5a53a88d66c9374dea7dee9)`(FString && NewValue)` | Sets the value of LanguageCode using move semantics.
`public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a9365fef6c1c1b5fc4473d0c89950351d)`()` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a0005a5db4dd0ef8932c9c1acba539b8a)`() const` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a8a70162198674198a32e26654db02a22)`(const FString & DefaultValue) const` | Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15)`(FString & OutValue) const` | Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1aa8b16dac6e6b06e4223525365122b49d)`()` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1ae5b810f438a781be9e1bedae0af91f2d)`() const` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1adba3a2227fef489360c52b50eb9fc9ea)`(const FString & NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1af995107060547cef908951c8b551c147)`(FString && NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.
`public inline void `[`ClearDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186)`()` | Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.
`public inline bool `[`IsDeviceIdSet`](#structFRHAPI__BodyFindOpportunities_1aeb8fb5a3195baf5b54f36c5fff927e2d)`() const` | Checks whether DeviceId_Optional has been set.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__BodyFindOpportunities_1af93b0749dd02a53a6290535c5a990286)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BodyFindOpportunities_1af93b0749dd02a53a6290535c5a990286"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BodyFindOpportunities_1a9675722a64237f7c7f1bd9d656c4043a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BodyFindOpportunities_1a9675722a64237f7c7f1bd9d656c4043a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a6b09cec5b09f58b10c904cfdef0ea127)`()` <a id="structFRHAPI__BodyFindOpportunities_1a6b09cec5b09f58b10c904cfdef0ea127"></a>

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ad77e06dbf64af74ad03cbd38f4a68b9a)`() const` <a id="structFRHAPI__BodyFindOpportunities_1ad77e06dbf64af74ad03cbd38f4a68b9a"></a>

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1aa7d73b6635b6cdd34e995dbf6de02206)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1aa7d73b6635b6cdd34e995dbf6de02206"></a>

Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d)`(int32 & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d"></a>

Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a6a67035a33d14d45562cde64993efc3c)`()` <a id="structFRHAPI__BodyFindOpportunities_1a6a67035a33d14d45562cde64993efc3c"></a>

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a8c799811014e3a3451bf4246a7328659)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a8c799811014e3a3451bf4246a7328659"></a>

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4a473293db607d5367fda9debbbddb40)`(const int32 & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a4a473293db607d5367fda9debbbddb40"></a>

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.

#### `public inline void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4fe4e4d36d6912b2dc52aaa44b6bd233)`(int32 && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a4fe4e4d36d6912b2dc52aaa44b6bd233"></a>

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics.

#### `public inline void `[`ClearScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)`()` <a id="structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2"></a>

Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.

#### `public inline bool `[`IsScreenPixelWidthSet`](#structFRHAPI__BodyFindOpportunities_1a26c4b3bdac2a5f5d3ef0df1fde439c8f)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a26c4b3bdac2a5f5d3ef0df1fde439c8f"></a>

Checks whether ScreenPixelWidth_Optional has been set.

#### `public inline bool `[`IsScreenPixelWidthDefaultValue`](#structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a"></a>

Returns true if ScreenPixelWidth_Optional is set and matches the default value.

#### `public inline void `[`SetScreenPixelWidthToDefault`](#structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c)`()` <a id="structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c"></a>

Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true.

#### `public inline int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a1101a30dd6e292a17cd51890824ba845)`()` <a id="structFRHAPI__BodyFindOpportunities_1a1101a30dd6e292a17cd51890824ba845"></a>

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a35b3a63cb0bea9fe7717e9270b00309a)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a35b3a63cb0bea9fe7717e9270b00309a"></a>

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a3bcd8019e75b1d0fbde7645d0d13f76d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a3bcd8019e75b1d0fbde7645d0d13f76d"></a>

Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476)`(int32 & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476"></a>

Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1ad76cee6f05701c58007b9d755bd7a531)`()` <a id="structFRHAPI__BodyFindOpportunities_1ad76cee6f05701c58007b9d755bd7a531"></a>

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1ad61359794df3b32445239c1c35bd7467)`() const` <a id="structFRHAPI__BodyFindOpportunities_1ad61359794df3b32445239c1c35bd7467"></a>

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5c4817f4d0d8a8261b52f50be1da556a)`(const int32 & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a5c4817f4d0d8a8261b52f50be1da556a"></a>

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.

#### `public inline void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a63cd7bc32854976762cbb1015dfbf140)`(int32 && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a63cd7bc32854976762cbb1015dfbf140"></a>

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics.

#### `public inline void `[`ClearScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)`()` <a id="structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509"></a>

Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.

#### `public inline bool `[`IsScreenPixelHeightSet`](#structFRHAPI__BodyFindOpportunities_1aacdbdc8aa8da16666cfb2ff21174b775)`() const` <a id="structFRHAPI__BodyFindOpportunities_1aacdbdc8aa8da16666cfb2ff21174b775"></a>

Checks whether ScreenPixelHeight_Optional has been set.

#### `public inline bool `[`IsScreenPixelHeightDefaultValue`](#structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c)`() const` <a id="structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c"></a>

Returns true if ScreenPixelHeight_Optional is set and matches the default value.

#### `public inline void `[`SetScreenPixelHeightToDefault`](#structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc)`()` <a id="structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc"></a>

Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true.

#### `public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a03295bf590c57a86be3c21d19dd63516)`()` <a id="structFRHAPI__BodyFindOpportunities_1a03295bf590c57a86be3c21d19dd63516"></a>

Gets the value of CountryCode.

#### `public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a6ce3f41927b600d57715a473124ec19b)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a6ce3f41927b600d57715a473124ec19b"></a>

Gets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1af3f613ad705be75f5eb186d067bad2ec)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1af3f613ad705be75f5eb186d067bad2ec"></a>

Sets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1aa4c36a18ae5fb9c64018b3e7f31dd895)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1aa4c36a18ae5fb9c64018b3e7f31dd895"></a>

Sets the value of CountryCode using move semantics.

#### `public inline FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a3b09f4492aabddc6a6ab147f343862f0)`()` <a id="structFRHAPI__BodyFindOpportunities_1a3b09f4492aabddc6a6ab147f343862f0"></a>

Gets the value of LanguageCode.

#### `public inline const FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1ab0fae64c6776745425f6cd2779bfd679)`() const` <a id="structFRHAPI__BodyFindOpportunities_1ab0fae64c6776745425f6cd2779bfd679"></a>

Gets the value of LanguageCode.

#### `public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1aba0c4e19fe30668d4af9a411f42c6805)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1aba0c4e19fe30668d4af9a411f42c6805"></a>

Sets the value of LanguageCode.

#### `public inline void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a965aa093d5a53a88d66c9374dea7dee9)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a965aa093d5a53a88d66c9374dea7dee9"></a>

Sets the value of LanguageCode using move semantics.

#### `public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a9365fef6c1c1b5fc4473d0c89950351d)`()` <a id="structFRHAPI__BodyFindOpportunities_1a9365fef6c1c1b5fc4473d0c89950351d"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a0005a5db4dd0ef8932c9c1acba539b8a)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a0005a5db4dd0ef8932c9c1acba539b8a"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a8a70162198674198a32e26654db02a22)`(const FString & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a8a70162198674198a32e26654db02a22"></a>

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15)`(FString & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15"></a>

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1aa8b16dac6e6b06e4223525365122b49d)`()` <a id="structFRHAPI__BodyFindOpportunities_1aa8b16dac6e6b06e4223525365122b49d"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1ae5b810f438a781be9e1bedae0af91f2d)`() const` <a id="structFRHAPI__BodyFindOpportunities_1ae5b810f438a781be9e1bedae0af91f2d"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1adba3a2227fef489360c52b50eb9fc9ea)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1adba3a2227fef489360c52b50eb9fc9ea"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1af995107060547cef908951c8b551c147)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1af995107060547cef908951c8b551c147"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186)`()` <a id="structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186"></a>

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

#### `public inline bool `[`IsDeviceIdSet`](#structFRHAPI__BodyFindOpportunities_1aeb8fb5a3195baf5b54f36c5fff927e2d)`() const` <a id="structFRHAPI__BodyFindOpportunities_1aeb8fb5a3195baf5b54f36c5fff927e2d"></a>

Checks whether DeviceId_Optional has been set.

