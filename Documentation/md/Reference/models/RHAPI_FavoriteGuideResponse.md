---
title: RHAPI_FavoriteGuideResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FavoriteGuideResponse`](#structFRHAPI__FavoriteGuideResponse) | 

## struct `FRHAPI_FavoriteGuideResponse` <a id="structFRHAPI__FavoriteGuideResponse"></a>

```
struct FRHAPI_FavoriteGuideResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`GuideId`](#structFRHAPI__FavoriteGuideResponse_1abff00b6b3254f3fa75d0a47e25b5dc7d) | 
`public FDateTime `[`FavoritedAt_Optional`](#structFRHAPI__FavoriteGuideResponse_1ae5be731b8594b54e7ca907c820b7e50b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`FavoritedAt_IsSet`](#structFRHAPI__FavoriteGuideResponse_1aaf7d1515c87314e6c17c5df14cb67b48) | true if FavoritedAt_Optional has been set to a value
`public bool `[`FavoritedAt_IsNull`](#structFRHAPI__FavoriteGuideResponse_1ac5076702811eabf7a4dcb0f5a1d40b16) | true if FavoritedAt_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__FavoriteGuideResponse_1af1b7de362a1cab5242e4aad3c8cb0ad3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FavoriteGuideResponse_1a970dd4d074bae653015e7fba66fe4cf0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1ad975f2ef2fb4ef1c8219a7f8dadc503e)`()` | Gets the value of GuideId.
`public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1a97ca0124bb506f294274fea8e82fa64b)`() const` | Gets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1ac7d4b3a89b7424f24cf1725f6c3b8634)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1a3ce325e056ae517f71ae41ab78bdeb29)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a1909fa3dafd496ff4435af67b9f8a504)`()` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a4f51ebf0589a74f4831209c32a67f1ef)`() const` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a44bdd8387ed2ca6e6f77d3cf80715d30)`(const FDateTime & DefaultValue) const` | Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a3d6a1446679f775b5240e04fcbada7d9)`(FDateTime & OutValue) const` | Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1adbd871a642c70d829e776f0d2156bc31)`()` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1a983ee2d9e34a796794fa7103492e62a4)`() const` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a14e50c5f587dab9b990859c2f7b51154)`(const FDateTime & NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.
`public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a8969d5d7e3fa954b9446c189546170e7)`(FDateTime && NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.
`public inline void `[`ClearFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a161e976b0f90a8e4e8d073421e6308b3)`()` | Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.
`public inline FORCEINLINE void `[`SetFavoritedAtToNull`](#structFRHAPI__FavoriteGuideResponse_1adb0aa17b34f682a308806a0affec2baf)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsFavoritedAtNull`](#structFRHAPI__FavoriteGuideResponse_1aeb99bd3b8248a8a982a42ac7b1029134)`() const` | Checks whether FavoritedAt_Optional is set to null.

### Members

#### `public FGuid `[`GuideId`](#structFRHAPI__FavoriteGuideResponse_1abff00b6b3254f3fa75d0a47e25b5dc7d) <a id="structFRHAPI__FavoriteGuideResponse_1abff00b6b3254f3fa75d0a47e25b5dc7d"></a>

#### `public FDateTime `[`FavoritedAt_Optional`](#structFRHAPI__FavoriteGuideResponse_1ae5be731b8594b54e7ca907c820b7e50b) <a id="structFRHAPI__FavoriteGuideResponse_1ae5be731b8594b54e7ca907c820b7e50b"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`FavoritedAt_IsSet`](#structFRHAPI__FavoriteGuideResponse_1aaf7d1515c87314e6c17c5df14cb67b48) <a id="structFRHAPI__FavoriteGuideResponse_1aaf7d1515c87314e6c17c5df14cb67b48"></a>

true if FavoritedAt_Optional has been set to a value

#### `public bool `[`FavoritedAt_IsNull`](#structFRHAPI__FavoriteGuideResponse_1ac5076702811eabf7a4dcb0f5a1d40b16) <a id="structFRHAPI__FavoriteGuideResponse_1ac5076702811eabf7a4dcb0f5a1d40b16"></a>

true if FavoritedAt_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__FavoriteGuideResponse_1af1b7de362a1cab5242e4aad3c8cb0ad3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FavoriteGuideResponse_1af1b7de362a1cab5242e4aad3c8cb0ad3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FavoriteGuideResponse_1a970dd4d074bae653015e7fba66fe4cf0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FavoriteGuideResponse_1a970dd4d074bae653015e7fba66fe4cf0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1ad975f2ef2fb4ef1c8219a7f8dadc503e)`()` <a id="structFRHAPI__FavoriteGuideResponse_1ad975f2ef2fb4ef1c8219a7f8dadc503e"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1a97ca0124bb506f294274fea8e82fa64b)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1a97ca0124bb506f294274fea8e82fa64b"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1ac7d4b3a89b7424f24cf1725f6c3b8634)`(const FGuid & NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1ac7d4b3a89b7424f24cf1725f6c3b8634"></a>

Sets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1a3ce325e056ae517f71ae41ab78bdeb29)`(FGuid && NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1a3ce325e056ae517f71ae41ab78bdeb29"></a>

Sets the value of GuideId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a1909fa3dafd496ff4435af67b9f8a504)`()` <a id="structFRHAPI__FavoriteGuideResponse_1a1909fa3dafd496ff4435af67b9f8a504"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a4f51ebf0589a74f4831209c32a67f1ef)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1a4f51ebf0589a74f4831209c32a67f1ef"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a44bdd8387ed2ca6e6f77d3cf80715d30)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__FavoriteGuideResponse_1a44bdd8387ed2ca6e6f77d3cf80715d30"></a>

Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a3d6a1446679f775b5240e04fcbada7d9)`(FDateTime & OutValue) const` <a id="structFRHAPI__FavoriteGuideResponse_1a3d6a1446679f775b5240e04fcbada7d9"></a>

Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1adbd871a642c70d829e776f0d2156bc31)`()` <a id="structFRHAPI__FavoriteGuideResponse_1adbd871a642c70d829e776f0d2156bc31"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1a983ee2d9e34a796794fa7103492e62a4)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1a983ee2d9e34a796794fa7103492e62a4"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a14e50c5f587dab9b990859c2f7b51154)`(const FDateTime & NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1a14e50c5f587dab9b990859c2f7b51154"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a8969d5d7e3fa954b9446c189546170e7)`(FDateTime && NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1a8969d5d7e3fa954b9446c189546170e7"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.

#### `public inline void `[`ClearFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a161e976b0f90a8e4e8d073421e6308b3)`()` <a id="structFRHAPI__FavoriteGuideResponse_1a161e976b0f90a8e4e8d073421e6308b3"></a>

Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.

#### `public inline FORCEINLINE void `[`SetFavoritedAtToNull`](#structFRHAPI__FavoriteGuideResponse_1adb0aa17b34f682a308806a0affec2baf)`()` <a id="structFRHAPI__FavoriteGuideResponse_1adb0aa17b34f682a308806a0affec2baf"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsFavoritedAtNull`](#structFRHAPI__FavoriteGuideResponse_1aeb99bd3b8248a8a982a42ac7b1029134)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1aeb99bd3b8248a8a982a42ac7b1029134"></a>

Checks whether FavoritedAt_Optional is set to null.

