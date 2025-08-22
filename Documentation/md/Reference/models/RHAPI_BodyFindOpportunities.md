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
`public inline FORCEINLINE int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a6f440e1413cc73984efa4c655798cc59)`()` | Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a627681ddde1a689629c5cc6b4ccbd7b0)`() const` | Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4b47284c7369e6ea06cb0486b8769e01)`(const int32 & DefaultValue) const` | Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1acfdd4a4ccd9e4f8d86d7307dc183c521)`(int32 & OutValue) const` | Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1ab0ac1a424dc39fe37d4fdca34aa0a9a8)`()` | Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a612dd3d6533335b2d0b38d8ed15261ff)`() const` | Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1aff34a7f87c77fb2f5da7adf5611a066e)`(const int32 & NewValue)` | Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.
`public inline FORCEINLINE void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a95889e7e51b3a85f10f88f93f15edc2b)`(int32 && NewValue)` | Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics.
`public inline void `[`ClearScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)`()` | Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4f0a5cf82a42e1cdd47c2bd6cf23a6fa)`()` | Returns the default value of ScreenPixelWidth.
`public inline FORCEINLINE int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a25c75f5f929656afbb25ed0fcde6ca49)`()` | Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a829bfc659f83b42219468b6dd7a36f57)`() const` | Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a8120d43e640dbac358352d222574730f)`(const int32 & DefaultValue) const` | Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5c7f641b5975ade2e97604c10e930a4e)`(int32 & OutValue) const` | Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a2a5cb6e4559f2d9a807a2da1f854db94)`()` | Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a9ef2069d13f26b020540f046c875abdc)`() const` | Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a8fa02022a23110cf10020b3d31564aa1)`(const int32 & NewValue)` | Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.
`public inline FORCEINLINE void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5486c41ca73c046773f4d2d97dcb265c)`(int32 && NewValue)` | Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics.
`public inline void `[`ClearScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)`()` | Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a0d726b53f2bb4d82728e3d978ff49d82)`()` | Returns the default value of ScreenPixelHeight.
`public inline FORCEINLINE FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a10dae8c7a42a99c8a5a96e8ae8888e26)`()` | Gets the value of CountryCode.
`public inline FORCEINLINE const FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a29507f32994dfb599fbb17483a125c80)`() const` | Gets the value of CountryCode.
`public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1ad97e2a0ef44976b3bdb29bad1ca6292f)`(const FString & NewValue)` | Sets the value of CountryCode.
`public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a805ecf759e24d7d1dd2ceb90cc803ccc)`(FString && NewValue)` | Sets the value of CountryCode using move semantics.
`public inline FORCEINLINE FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a44376d10957af8f6dd62739fab85adef)`()` | Gets the value of LanguageCode.
`public inline FORCEINLINE const FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a3a332a21c3177dea08c6131888a3f119)`() const` | Gets the value of LanguageCode.
`public inline FORCEINLINE void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a911259b23f798fa4c419ea6add5c8aa1)`(const FString & NewValue)` | Sets the value of LanguageCode.
`public inline FORCEINLINE void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a1e1b7d3ed9bb6d691be41888784b9091)`(FString && NewValue)` | Sets the value of LanguageCode using move semantics.
`public inline FORCEINLINE FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a02a623581c864b063367868bd9ed9c5b)`()` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a803feee4aa8d5dc1af37355e9851ac68)`() const` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7626669aacc5296fb73e3348ab3267fb)`(const FString & DefaultValue) const` | Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a272606706d78315a8eb27af52cf0d608)`(FString & OutValue) const` | Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1a73a034ec7cc61efdc16aaacccb127d94)`()` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1a8442c17b4e169d68d1b7736536465550)`() const` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a872b0a3ead9021bff2ca5bd0b7e34b93)`(const FString & NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.
`public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a405308f77d46eeef4a381e3e62f565ef)`(FString && NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.
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

#### `public inline FORCEINLINE int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a6f440e1413cc73984efa4c655798cc59)`()` <a id="structFRHAPI__BodyFindOpportunities_1a6f440e1413cc73984efa4c655798cc59"></a>

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a627681ddde1a689629c5cc6b4ccbd7b0)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a627681ddde1a689629c5cc6b4ccbd7b0"></a>

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4b47284c7369e6ea06cb0486b8769e01)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a4b47284c7369e6ea06cb0486b8769e01"></a>

Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1acfdd4a4ccd9e4f8d86d7307dc183c521)`(int32 & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1acfdd4a4ccd9e4f8d86d7307dc183c521"></a>

Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1ab0ac1a424dc39fe37d4fdca34aa0a9a8)`()` <a id="structFRHAPI__BodyFindOpportunities_1ab0ac1a424dc39fe37d4fdca34aa0a9a8"></a>

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetScreenPixelWidthOrNull`](#structFRHAPI__BodyFindOpportunities_1a612dd3d6533335b2d0b38d8ed15261ff)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a612dd3d6533335b2d0b38d8ed15261ff"></a>

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1aff34a7f87c77fb2f5da7adf5611a066e)`(const int32 & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1aff34a7f87c77fb2f5da7adf5611a066e"></a>

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.

#### `public inline FORCEINLINE void `[`SetScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a95889e7e51b3a85f10f88f93f15edc2b)`(int32 && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a95889e7e51b3a85f10f88f93f15edc2b"></a>

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics.

#### `public inline void `[`ClearScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)`()` <a id="structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2"></a>

Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ScreenPixelWidth`](#structFRHAPI__BodyFindOpportunities_1a4f0a5cf82a42e1cdd47c2bd6cf23a6fa)`()` <a id="structFRHAPI__BodyFindOpportunities_1a4f0a5cf82a42e1cdd47c2bd6cf23a6fa"></a>

Returns the default value of ScreenPixelWidth.

#### `public inline FORCEINLINE int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a25c75f5f929656afbb25ed0fcde6ca49)`()` <a id="structFRHAPI__BodyFindOpportunities_1a25c75f5f929656afbb25ed0fcde6ca49"></a>

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a829bfc659f83b42219468b6dd7a36f57)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a829bfc659f83b42219468b6dd7a36f57"></a>

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a8120d43e640dbac358352d222574730f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a8120d43e640dbac358352d222574730f"></a>

Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5c7f641b5975ade2e97604c10e930a4e)`(int32 & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a5c7f641b5975ade2e97604c10e930a4e"></a>

Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a2a5cb6e4559f2d9a807a2da1f854db94)`()` <a id="structFRHAPI__BodyFindOpportunities_1a2a5cb6e4559f2d9a807a2da1f854db94"></a>

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetScreenPixelHeightOrNull`](#structFRHAPI__BodyFindOpportunities_1a9ef2069d13f26b020540f046c875abdc)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a9ef2069d13f26b020540f046c875abdc"></a>

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a8fa02022a23110cf10020b3d31564aa1)`(const int32 & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a8fa02022a23110cf10020b3d31564aa1"></a>

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.

#### `public inline FORCEINLINE void `[`SetScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a5486c41ca73c046773f4d2d97dcb265c)`(int32 && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a5486c41ca73c046773f4d2d97dcb265c"></a>

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics.

#### `public inline void `[`ClearScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)`()` <a id="structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509"></a>

Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ScreenPixelHeight`](#structFRHAPI__BodyFindOpportunities_1a0d726b53f2bb4d82728e3d978ff49d82)`()` <a id="structFRHAPI__BodyFindOpportunities_1a0d726b53f2bb4d82728e3d978ff49d82"></a>

Returns the default value of ScreenPixelHeight.

#### `public inline FORCEINLINE FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a10dae8c7a42a99c8a5a96e8ae8888e26)`()` <a id="structFRHAPI__BodyFindOpportunities_1a10dae8c7a42a99c8a5a96e8ae8888e26"></a>

Gets the value of CountryCode.

#### `public inline FORCEINLINE const FString & `[`GetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a29507f32994dfb599fbb17483a125c80)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a29507f32994dfb599fbb17483a125c80"></a>

Gets the value of CountryCode.

#### `public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1ad97e2a0ef44976b3bdb29bad1ca6292f)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1ad97e2a0ef44976b3bdb29bad1ca6292f"></a>

Sets the value of CountryCode.

#### `public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyFindOpportunities_1a805ecf759e24d7d1dd2ceb90cc803ccc)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a805ecf759e24d7d1dd2ceb90cc803ccc"></a>

Sets the value of CountryCode using move semantics.

#### `public inline FORCEINLINE FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a44376d10957af8f6dd62739fab85adef)`()` <a id="structFRHAPI__BodyFindOpportunities_1a44376d10957af8f6dd62739fab85adef"></a>

Gets the value of LanguageCode.

#### `public inline FORCEINLINE const FString & `[`GetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a3a332a21c3177dea08c6131888a3f119)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a3a332a21c3177dea08c6131888a3f119"></a>

Gets the value of LanguageCode.

#### `public inline FORCEINLINE void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a911259b23f798fa4c419ea6add5c8aa1)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a911259b23f798fa4c419ea6add5c8aa1"></a>

Sets the value of LanguageCode.

#### `public inline FORCEINLINE void `[`SetLanguageCode`](#structFRHAPI__BodyFindOpportunities_1a1e1b7d3ed9bb6d691be41888784b9091)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a1e1b7d3ed9bb6d691be41888784b9091"></a>

Sets the value of LanguageCode using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a02a623581c864b063367868bd9ed9c5b)`()` <a id="structFRHAPI__BodyFindOpportunities_1a02a623581c864b063367868bd9ed9c5b"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a803feee4aa8d5dc1af37355e9851ac68)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a803feee4aa8d5dc1af37355e9851ac68"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7626669aacc5296fb73e3348ab3267fb)`(const FString & DefaultValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a7626669aacc5296fb73e3348ab3267fb"></a>

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a272606706d78315a8eb27af52cf0d608)`(FString & OutValue) const` <a id="structFRHAPI__BodyFindOpportunities_1a272606706d78315a8eb27af52cf0d608"></a>

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1a73a034ec7cc61efdc16aaacccb127d94)`()` <a id="structFRHAPI__BodyFindOpportunities_1a73a034ec7cc61efdc16aaacccb127d94"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyFindOpportunities_1a8442c17b4e169d68d1b7736536465550)`() const` <a id="structFRHAPI__BodyFindOpportunities_1a8442c17b4e169d68d1b7736536465550"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a872b0a3ead9021bff2ca5bd0b7e34b93)`(const FString & NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a872b0a3ead9021bff2ca5bd0b7e34b93"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyFindOpportunities_1a405308f77d46eeef4a381e3e62f565ef)`(FString && NewValue)` <a id="structFRHAPI__BodyFindOpportunities_1a405308f77d46eeef4a381e3e62f565ef"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceId`](#structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186)`()` <a id="structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186"></a>

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

