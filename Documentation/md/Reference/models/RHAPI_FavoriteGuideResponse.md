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
`public inline FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1adeb09cedc1331824b675e2bbed3ff681)`()` | Gets the value of GuideId.
`public inline const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1a2d395f1a2337a3dbe5c773f0925e5c80)`() const` | Gets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1af5a7d2f5446de07385b87095b5f3337c)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1ab260ef936ca3a07a45fd15ede9093024)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.
`public inline FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a979e995fd0acda9834e4eeb99127837a)`()` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1aecc2479e9e35e7f7d67871e3c388e3eb)`() const` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a97d503728c6684d805d9aaca9cd35091)`(const FDateTime & DefaultValue) const` | Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a2927dfe0ab2a2e5a0163d69149826da6)`(FDateTime & OutValue) const` | Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1a51fc78134832d5fad079b8373312b5b2)`()` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1a017336a66c9cf55c711f82746c563ffe)`() const` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a310fc92d3386ae1d3e6d8f84459fa09b)`(const FDateTime & NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.
`public inline void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1ac2527893232b634ba4a2823982fe7c76)`(FDateTime && NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.
`public inline void `[`ClearFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a161e976b0f90a8e4e8d073421e6308b3)`()` | Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.
`public inline bool `[`IsFavoritedAtSet`](#structFRHAPI__FavoriteGuideResponse_1af384be3f3c8ef7bf5c81603c1be37efb)`() const` | Checks whether FavoritedAt_Optional has been set.
`public inline void `[`SetFavoritedAtToNull`](#structFRHAPI__FavoriteGuideResponse_1ad24e087e14d3cb52942932acb4a3cab9)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFavoritedAtNull`](#structFRHAPI__FavoriteGuideResponse_1af8418c65cc11e623715e4dcbf03c6391)`() const` | Checks whether FavoritedAt_Optional is set to null.

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

#### `public inline FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1adeb09cedc1331824b675e2bbed3ff681)`()` <a id="structFRHAPI__FavoriteGuideResponse_1adeb09cedc1331824b675e2bbed3ff681"></a>

Gets the value of GuideId.

#### `public inline const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideResponse_1a2d395f1a2337a3dbe5c773f0925e5c80)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1a2d395f1a2337a3dbe5c773f0925e5c80"></a>

Gets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1af5a7d2f5446de07385b87095b5f3337c)`(const FGuid & NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1af5a7d2f5446de07385b87095b5f3337c"></a>

Sets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideResponse_1ab260ef936ca3a07a45fd15ede9093024)`(FGuid && NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1ab260ef936ca3a07a45fd15ede9093024"></a>

Sets the value of GuideId using move semantics.

#### `public inline FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a979e995fd0acda9834e4eeb99127837a)`()` <a id="structFRHAPI__FavoriteGuideResponse_1a979e995fd0acda9834e4eeb99127837a"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1aecc2479e9e35e7f7d67871e3c388e3eb)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1aecc2479e9e35e7f7d67871e3c388e3eb"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a97d503728c6684d805d9aaca9cd35091)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__FavoriteGuideResponse_1a97d503728c6684d805d9aaca9cd35091"></a>

Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a2927dfe0ab2a2e5a0163d69149826da6)`(FDateTime & OutValue) const` <a id="structFRHAPI__FavoriteGuideResponse_1a2927dfe0ab2a2e5a0163d69149826da6"></a>

Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1a51fc78134832d5fad079b8373312b5b2)`()` <a id="structFRHAPI__FavoriteGuideResponse_1a51fc78134832d5fad079b8373312b5b2"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__FavoriteGuideResponse_1a017336a66c9cf55c711f82746c563ffe)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1a017336a66c9cf55c711f82746c563ffe"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a310fc92d3386ae1d3e6d8f84459fa09b)`(const FDateTime & NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1a310fc92d3386ae1d3e6d8f84459fa09b"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.

#### `public inline void `[`SetFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1ac2527893232b634ba4a2823982fe7c76)`(FDateTime && NewValue)` <a id="structFRHAPI__FavoriteGuideResponse_1ac2527893232b634ba4a2823982fe7c76"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.

#### `public inline void `[`ClearFavoritedAt`](#structFRHAPI__FavoriteGuideResponse_1a161e976b0f90a8e4e8d073421e6308b3)`()` <a id="structFRHAPI__FavoriteGuideResponse_1a161e976b0f90a8e4e8d073421e6308b3"></a>

Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.

#### `public inline bool `[`IsFavoritedAtSet`](#structFRHAPI__FavoriteGuideResponse_1af384be3f3c8ef7bf5c81603c1be37efb)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1af384be3f3c8ef7bf5c81603c1be37efb"></a>

Checks whether FavoritedAt_Optional has been set.

#### `public inline void `[`SetFavoritedAtToNull`](#structFRHAPI__FavoriteGuideResponse_1ad24e087e14d3cb52942932acb4a3cab9)`()` <a id="structFRHAPI__FavoriteGuideResponse_1ad24e087e14d3cb52942932acb4a3cab9"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFavoritedAtNull`](#structFRHAPI__FavoriteGuideResponse_1af8418c65cc11e623715e4dcbf03c6391)`() const` <a id="structFRHAPI__FavoriteGuideResponse_1af8418c65cc11e623715e4dcbf03c6391"></a>

Checks whether FavoritedAt_Optional is set to null.

