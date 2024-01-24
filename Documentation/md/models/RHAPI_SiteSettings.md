# RHAPI_SiteSettings <a id="group__RHAPI__SiteSettings"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SiteSettings`](#structFRHAPI__SiteSettings) | Contains information about a site/region.

## struct `FRHAPI_SiteSettings` <a id="structFRHAPI__SiteSettings"></a>

```
struct FRHAPI_SiteSettings
  : public FRHAPI_Model
```

Contains information about a site/region.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`SiteId`](#structFRHAPI__SiteSettings_1a354d7e2e7334dbe823e6532b1ffdd0f9) | The site ID.
`public int32 `[`SortOrder`](#structFRHAPI__SiteSettings_1a21089b77688f2ab396a23bf605160cc5) | The priority order of this site.
`public bool `[`CustomOnly`](#structFRHAPI__SiteSettings_1a6947b3b6d7cb93f2614f056bbe220ec7) | Indicates if the site is a custom games only.
`public FString `[`MessageName_Optional`](#structFRHAPI__SiteSettings_1a8b14f2590d8bbf7753a2c669492575ad) | The message associated with this site.
`public bool `[`MessageName_IsSet`](#structFRHAPI__SiteSettings_1ae00c3cf7fff18dd0f58af4f57d9aceb3) | true if MessageName_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SiteSettings_1ace78f255ad82c35ee77f73d2d22210fa)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SiteSettings_1a9c92f459cdeb3e680ff5e7dd7e0faf63)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetSiteId`](#structFRHAPI__SiteSettings_1ad30c8fc66506f9391d822f14cf34701d)`()` | Gets the value of SiteId.
`public inline const int32 & `[`GetSiteId`](#structFRHAPI__SiteSettings_1aee3e190e01a351e69f777e70a12fb2b6)`() const` | Gets the value of SiteId.
`public inline void `[`SetSiteId`](#structFRHAPI__SiteSettings_1a2097377c9005984c3d8ed7bc8169afd0)`(int32 NewValue)` | Sets the value of SiteId.
`public inline bool `[`IsSiteIdDefaultValue`](#structFRHAPI__SiteSettings_1ac5129582f55f1113caa262fb6f861c50)`() const` | Returns true if SiteId matches the default value.
`public inline void `[`SetSiteIdToDefault`](#structFRHAPI__SiteSettings_1a786e6758c0fa9edc41c670c2fd31ecce)`()` | Sets the value of SiteId to its default
`public inline int32 & `[`GetSortOrder`](#structFRHAPI__SiteSettings_1aee6fdf44a0c96732525fd66abbbd0337)`()` | Gets the value of SortOrder.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__SiteSettings_1a431214f05b8e52d155b6b04439274930)`() const` | Gets the value of SortOrder.
`public inline void `[`SetSortOrder`](#structFRHAPI__SiteSettings_1a52a6c12566564b4ec3785da21196dd74)`(int32 NewValue)` | Sets the value of SortOrder.
`public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__SiteSettings_1aca9913a9fca3d7b84dc6bfde308650f9)`() const` | Returns true if SortOrder matches the default value.
`public inline void `[`SetSortOrderToDefault`](#structFRHAPI__SiteSettings_1a7777c38f950842a330a75eb58d378b7e)`()` | Sets the value of SortOrder to its default
`public inline bool & `[`GetCustomOnly`](#structFRHAPI__SiteSettings_1a13ea7a35bad578f65a78ca97f4421971)`()` | Gets the value of CustomOnly.
`public inline const bool & `[`GetCustomOnly`](#structFRHAPI__SiteSettings_1a0af9fc60dd14cf0003a57428a1640a8d)`() const` | Gets the value of CustomOnly.
`public inline void `[`SetCustomOnly`](#structFRHAPI__SiteSettings_1a96f677b6feaa87a76d05e90db57f1ee9)`(bool NewValue)` | Sets the value of CustomOnly.
`public inline bool `[`IsCustomOnlyDefaultValue`](#structFRHAPI__SiteSettings_1ac704a8d1ec5345247ba3a71075e269ec)`() const` | Returns true if CustomOnly matches the default value.
`public inline void `[`SetCustomOnlyToDefault`](#structFRHAPI__SiteSettings_1a4c3b601e60a7d33c3cfa68d07d24acee)`()` | Sets the value of CustomOnly to its default
`public inline FString & `[`GetMessageName`](#structFRHAPI__SiteSettings_1af8b77273e1aadc41075bb0326e8b47e6)`()` | Gets the value of MessageName_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessageName`](#structFRHAPI__SiteSettings_1a565361792d5824059e54300156e073a2)`() const` | Gets the value of MessageName_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessageName`](#structFRHAPI__SiteSettings_1a9c9dd5b3ff425d05f06798a78fb4bbf6)`(const FString & DefaultValue) const` | Gets the value of MessageName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMessageName`](#structFRHAPI__SiteSettings_1a2bb5fd6ec72c3447582c4caf30411333)`(FString & OutValue) const` | Fills OutValue with the value of MessageName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMessageNameOrNull`](#structFRHAPI__SiteSettings_1a3b8ea072f71f89f068d37912b6c2d688)`()` | Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMessageNameOrNull`](#structFRHAPI__SiteSettings_1a80917bd7ddcc1ea8f99749eeadc43543)`() const` | Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMessageName`](#structFRHAPI__SiteSettings_1ab1a5e0df404208a3defade17055d92c0)`(FString NewValue)` | Sets the value of MessageName_Optional and also sets MessageName_IsSet to true.
`public inline void `[`ClearMessageName`](#structFRHAPI__SiteSettings_1a01eda7e3c25c7152f6e011f906404c6c)`()` | Clears the value of MessageName_Optional and sets MessageName_IsSet to false.

#### Members

#### `public int32 `[`SiteId`](#structFRHAPI__SiteSettings_1a354d7e2e7334dbe823e6532b1ffdd0f9) <a id="structFRHAPI__SiteSettings_1a354d7e2e7334dbe823e6532b1ffdd0f9"></a>

The site ID.

<br>
#### `public int32 `[`SortOrder`](#structFRHAPI__SiteSettings_1a21089b77688f2ab396a23bf605160cc5) <a id="structFRHAPI__SiteSettings_1a21089b77688f2ab396a23bf605160cc5"></a>

The priority order of this site.

<br>
#### `public bool `[`CustomOnly`](#structFRHAPI__SiteSettings_1a6947b3b6d7cb93f2614f056bbe220ec7) <a id="structFRHAPI__SiteSettings_1a6947b3b6d7cb93f2614f056bbe220ec7"></a>

Indicates if the site is a custom games only.

<br>
#### `public FString `[`MessageName_Optional`](#structFRHAPI__SiteSettings_1a8b14f2590d8bbf7753a2c669492575ad) <a id="structFRHAPI__SiteSettings_1a8b14f2590d8bbf7753a2c669492575ad"></a>

The message associated with this site.

<br>
#### `public bool `[`MessageName_IsSet`](#structFRHAPI__SiteSettings_1ae00c3cf7fff18dd0f58af4f57d9aceb3) <a id="structFRHAPI__SiteSettings_1ae00c3cf7fff18dd0f58af4f57d9aceb3"></a>

true if MessageName_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SiteSettings_1ace78f255ad82c35ee77f73d2d22210fa)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SiteSettings_1ace78f255ad82c35ee77f73d2d22210fa"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SiteSettings_1a9c92f459cdeb3e680ff5e7dd7e0faf63)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SiteSettings_1a9c92f459cdeb3e680ff5e7dd7e0faf63"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetSiteId`](#structFRHAPI__SiteSettings_1ad30c8fc66506f9391d822f14cf34701d)`()` <a id="structFRHAPI__SiteSettings_1ad30c8fc66506f9391d822f14cf34701d"></a>

Gets the value of SiteId.

<br>
#### `public inline const int32 & `[`GetSiteId`](#structFRHAPI__SiteSettings_1aee3e190e01a351e69f777e70a12fb2b6)`() const` <a id="structFRHAPI__SiteSettings_1aee3e190e01a351e69f777e70a12fb2b6"></a>

Gets the value of SiteId.

<br>
#### `public inline void `[`SetSiteId`](#structFRHAPI__SiteSettings_1a2097377c9005984c3d8ed7bc8169afd0)`(int32 NewValue)` <a id="structFRHAPI__SiteSettings_1a2097377c9005984c3d8ed7bc8169afd0"></a>

Sets the value of SiteId.

<br>
#### `public inline bool `[`IsSiteIdDefaultValue`](#structFRHAPI__SiteSettings_1ac5129582f55f1113caa262fb6f861c50)`() const` <a id="structFRHAPI__SiteSettings_1ac5129582f55f1113caa262fb6f861c50"></a>

Returns true if SiteId matches the default value.

<br>
#### `public inline void `[`SetSiteIdToDefault`](#structFRHAPI__SiteSettings_1a786e6758c0fa9edc41c670c2fd31ecce)`()` <a id="structFRHAPI__SiteSettings_1a786e6758c0fa9edc41c670c2fd31ecce"></a>

Sets the value of SiteId to its default

<br>
#### `public inline int32 & `[`GetSortOrder`](#structFRHAPI__SiteSettings_1aee6fdf44a0c96732525fd66abbbd0337)`()` <a id="structFRHAPI__SiteSettings_1aee6fdf44a0c96732525fd66abbbd0337"></a>

Gets the value of SortOrder.

<br>
#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__SiteSettings_1a431214f05b8e52d155b6b04439274930)`() const` <a id="structFRHAPI__SiteSettings_1a431214f05b8e52d155b6b04439274930"></a>

Gets the value of SortOrder.

<br>
#### `public inline void `[`SetSortOrder`](#structFRHAPI__SiteSettings_1a52a6c12566564b4ec3785da21196dd74)`(int32 NewValue)` <a id="structFRHAPI__SiteSettings_1a52a6c12566564b4ec3785da21196dd74"></a>

Sets the value of SortOrder.

<br>
#### `public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__SiteSettings_1aca9913a9fca3d7b84dc6bfde308650f9)`() const` <a id="structFRHAPI__SiteSettings_1aca9913a9fca3d7b84dc6bfde308650f9"></a>

Returns true if SortOrder matches the default value.

<br>
#### `public inline void `[`SetSortOrderToDefault`](#structFRHAPI__SiteSettings_1a7777c38f950842a330a75eb58d378b7e)`()` <a id="structFRHAPI__SiteSettings_1a7777c38f950842a330a75eb58d378b7e"></a>

Sets the value of SortOrder to its default

<br>
#### `public inline bool & `[`GetCustomOnly`](#structFRHAPI__SiteSettings_1a13ea7a35bad578f65a78ca97f4421971)`()` <a id="structFRHAPI__SiteSettings_1a13ea7a35bad578f65a78ca97f4421971"></a>

Gets the value of CustomOnly.

<br>
#### `public inline const bool & `[`GetCustomOnly`](#structFRHAPI__SiteSettings_1a0af9fc60dd14cf0003a57428a1640a8d)`() const` <a id="structFRHAPI__SiteSettings_1a0af9fc60dd14cf0003a57428a1640a8d"></a>

Gets the value of CustomOnly.

<br>
#### `public inline void `[`SetCustomOnly`](#structFRHAPI__SiteSettings_1a96f677b6feaa87a76d05e90db57f1ee9)`(bool NewValue)` <a id="structFRHAPI__SiteSettings_1a96f677b6feaa87a76d05e90db57f1ee9"></a>

Sets the value of CustomOnly.

<br>
#### `public inline bool `[`IsCustomOnlyDefaultValue`](#structFRHAPI__SiteSettings_1ac704a8d1ec5345247ba3a71075e269ec)`() const` <a id="structFRHAPI__SiteSettings_1ac704a8d1ec5345247ba3a71075e269ec"></a>

Returns true if CustomOnly matches the default value.

<br>
#### `public inline void `[`SetCustomOnlyToDefault`](#structFRHAPI__SiteSettings_1a4c3b601e60a7d33c3cfa68d07d24acee)`()` <a id="structFRHAPI__SiteSettings_1a4c3b601e60a7d33c3cfa68d07d24acee"></a>

Sets the value of CustomOnly to its default

<br>
#### `public inline FString & `[`GetMessageName`](#structFRHAPI__SiteSettings_1af8b77273e1aadc41075bb0326e8b47e6)`()` <a id="structFRHAPI__SiteSettings_1af8b77273e1aadc41075bb0326e8b47e6"></a>

Gets the value of MessageName_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMessageName`](#structFRHAPI__SiteSettings_1a565361792d5824059e54300156e073a2)`() const` <a id="structFRHAPI__SiteSettings_1a565361792d5824059e54300156e073a2"></a>

Gets the value of MessageName_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMessageName`](#structFRHAPI__SiteSettings_1a9c9dd5b3ff425d05f06798a78fb4bbf6)`(const FString & DefaultValue) const` <a id="structFRHAPI__SiteSettings_1a9c9dd5b3ff425d05f06798a78fb4bbf6"></a>

Gets the value of MessageName_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMessageName`](#structFRHAPI__SiteSettings_1a2bb5fd6ec72c3447582c4caf30411333)`(FString & OutValue) const` <a id="structFRHAPI__SiteSettings_1a2bb5fd6ec72c3447582c4caf30411333"></a>

Fills OutValue with the value of MessageName_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMessageNameOrNull`](#structFRHAPI__SiteSettings_1a3b8ea072f71f89f068d37912b6c2d688)`()` <a id="structFRHAPI__SiteSettings_1a3b8ea072f71f89f068d37912b6c2d688"></a>

Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMessageNameOrNull`](#structFRHAPI__SiteSettings_1a80917bd7ddcc1ea8f99749eeadc43543)`() const` <a id="structFRHAPI__SiteSettings_1a80917bd7ddcc1ea8f99749eeadc43543"></a>

Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMessageName`](#structFRHAPI__SiteSettings_1ab1a5e0df404208a3defade17055d92c0)`(FString NewValue)` <a id="structFRHAPI__SiteSettings_1ab1a5e0df404208a3defade17055d92c0"></a>

Sets the value of MessageName_Optional and also sets MessageName_IsSet to true.

<br>
#### `public inline void `[`ClearMessageName`](#structFRHAPI__SiteSettings_1a01eda7e3c25c7152f6e011f906404c6c)`()` <a id="structFRHAPI__SiteSettings_1a01eda7e3c25c7152f6e011f906404c6c"></a>

Clears the value of MessageName_Optional and sets MessageName_IsSet to false.

<br>
