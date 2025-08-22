---
title: RHAPI_EntityGuideEngagement
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntityGuideEngagement`](#structFRHAPI__EntityGuideEngagement) | 

## struct `FRHAPI_EntityGuideEngagement` <a id="structFRHAPI__EntityGuideEngagement"></a>

```
struct FRHAPI_EntityGuideEngagement
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`GuideId`](#structFRHAPI__EntityGuideEngagement_1a185469777d8ee1d3fbf168752829b732) | 
`public int32 `[`Rating_Optional`](#structFRHAPI__EntityGuideEngagement_1a6f9ea332d3648c8241844319ab73adb3) | 
`public bool `[`Rating_IsSet`](#structFRHAPI__EntityGuideEngagement_1ac167d34e4073e42a71f48f1d189d29b1) | true if Rating_Optional has been set to a value
`public FDateTime `[`FavoritedAt_Optional`](#structFRHAPI__EntityGuideEngagement_1af73aa16518a43c596561f4c27fd1ce8e) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`FavoritedAt_IsSet`](#structFRHAPI__EntityGuideEngagement_1a77a7e99a3fa90358ac3f04c9c75c2d0a) | true if FavoritedAt_Optional has been set to a value
`public bool `[`FavoritedAt_IsNull`](#structFRHAPI__EntityGuideEngagement_1a60854b86c711e90da1baaf52fcca32ca) | true if FavoritedAt_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__EntityGuideEngagement_1ab33b34db075b82b0c0faef3eb4ac2885)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntityGuideEngagement_1a46dcf254a9b788b9fd1e76e94e0c3b8b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1a33ce7df1635c595e27069c13e9453991)`()` | Gets the value of GuideId.
`public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1aa8dd68b4bda586aabcd4ccee7a65f625)`() const` | Gets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1abe7995323add2713ccdd299432a31ab3)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1a8e999fd009d7fd1b541cfd3bf2ed4827)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.
`public inline FORCEINLINE int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1aa31f2d8a82fd87b5539bde206c56bcdd)`()` | Gets the value of Rating_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a4a1352dded096febef9769a196316e20)`() const` | Gets the value of Rating_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a47c29c80915475f4f953b7b88ed48bce)`(const int32 & DefaultValue) const` | Gets the value of Rating_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1ab2dae51e2224a4ba976d0bb0d03a5d5f)`(int32 & OutValue) const` | Fills OutValue with the value of Rating_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1af436ac5efd06366f700d2fbf683de0fc)`()` | Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1ad9a6b5c93449c223722f8142f9614e67)`() const` | Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1a4aeb02dac5fccebfbf3e26696e7a0d86)`(const int32 & NewValue)` | Sets the value of Rating_Optional and also sets Rating_IsSet to true.
`public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1af6cc477a940a7fc9866abefc1efae36d)`(int32 && NewValue)` | Sets the value of Rating_Optional and also sets Rating_IsSet to true using move semantics.
`public inline void `[`ClearRating`](#structFRHAPI__EntityGuideEngagement_1aac063050132db453de745ba84f5a59ff)`()` | Clears the value of Rating_Optional and sets Rating_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Rating`](#structFRHAPI__EntityGuideEngagement_1a2e8bde4ce6d13dedc9e328cc5d9752b7)`()` | Returns the default value of Rating.
`public inline FORCEINLINE FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1ab539fc20b7f5e544f2336ac7b1be1cb1)`()` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1ade1e660a01730bdea6efa5403505bc36)`() const` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1ace8e866d6dd3824902f0bb8c0917496f)`(const FDateTime & DefaultValue) const` | Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a67744afa893a9d84893a18f428015a31)`(FDateTime & OutValue) const` | Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a6c21ba916c1a7ec9027283fb32ea17b2)`()` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a847f024bf6e91c3da70321500792ef46)`() const` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a75b350359084f9768cac1b61712e59e1)`(const FDateTime & NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.
`public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a54b668a76f9fdd2c730f5980f1801040)`(FDateTime && NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.
`public inline void `[`ClearFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a2c068f54358d6d5296478d9e2b43845e)`()` | Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.
`public inline FORCEINLINE void `[`SetFavoritedAtToNull`](#structFRHAPI__EntityGuideEngagement_1afd92e3b8ed750181a27f32669c98bb5f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsFavoritedAtNull`](#structFRHAPI__EntityGuideEngagement_1a20db103fde770a60f6b995d005598aea)`() const` | Checks whether FavoritedAt_Optional is set to null.

### Members

#### `public FGuid `[`GuideId`](#structFRHAPI__EntityGuideEngagement_1a185469777d8ee1d3fbf168752829b732) <a id="structFRHAPI__EntityGuideEngagement_1a185469777d8ee1d3fbf168752829b732"></a>

#### `public int32 `[`Rating_Optional`](#structFRHAPI__EntityGuideEngagement_1a6f9ea332d3648c8241844319ab73adb3) <a id="structFRHAPI__EntityGuideEngagement_1a6f9ea332d3648c8241844319ab73adb3"></a>

#### `public bool `[`Rating_IsSet`](#structFRHAPI__EntityGuideEngagement_1ac167d34e4073e42a71f48f1d189d29b1) <a id="structFRHAPI__EntityGuideEngagement_1ac167d34e4073e42a71f48f1d189d29b1"></a>

true if Rating_Optional has been set to a value

#### `public FDateTime `[`FavoritedAt_Optional`](#structFRHAPI__EntityGuideEngagement_1af73aa16518a43c596561f4c27fd1ce8e) <a id="structFRHAPI__EntityGuideEngagement_1af73aa16518a43c596561f4c27fd1ce8e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`FavoritedAt_IsSet`](#structFRHAPI__EntityGuideEngagement_1a77a7e99a3fa90358ac3f04c9c75c2d0a) <a id="structFRHAPI__EntityGuideEngagement_1a77a7e99a3fa90358ac3f04c9c75c2d0a"></a>

true if FavoritedAt_Optional has been set to a value

#### `public bool `[`FavoritedAt_IsNull`](#structFRHAPI__EntityGuideEngagement_1a60854b86c711e90da1baaf52fcca32ca) <a id="structFRHAPI__EntityGuideEngagement_1a60854b86c711e90da1baaf52fcca32ca"></a>

true if FavoritedAt_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntityGuideEngagement_1ab33b34db075b82b0c0faef3eb4ac2885)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntityGuideEngagement_1ab33b34db075b82b0c0faef3eb4ac2885"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntityGuideEngagement_1a46dcf254a9b788b9fd1e76e94e0c3b8b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EntityGuideEngagement_1a46dcf254a9b788b9fd1e76e94e0c3b8b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1a33ce7df1635c595e27069c13e9453991)`()` <a id="structFRHAPI__EntityGuideEngagement_1a33ce7df1635c595e27069c13e9453991"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1aa8dd68b4bda586aabcd4ccee7a65f625)`() const` <a id="structFRHAPI__EntityGuideEngagement_1aa8dd68b4bda586aabcd4ccee7a65f625"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1abe7995323add2713ccdd299432a31ab3)`(const FGuid & NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1abe7995323add2713ccdd299432a31ab3"></a>

Sets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1a8e999fd009d7fd1b541cfd3bf2ed4827)`(FGuid && NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a8e999fd009d7fd1b541cfd3bf2ed4827"></a>

Sets the value of GuideId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1aa31f2d8a82fd87b5539bde206c56bcdd)`()` <a id="structFRHAPI__EntityGuideEngagement_1aa31f2d8a82fd87b5539bde206c56bcdd"></a>

Gets the value of Rating_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a4a1352dded096febef9769a196316e20)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a4a1352dded096febef9769a196316e20"></a>

Gets the value of Rating_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a47c29c80915475f4f953b7b88ed48bce)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntityGuideEngagement_1a47c29c80915475f4f953b7b88ed48bce"></a>

Gets the value of Rating_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1ab2dae51e2224a4ba976d0bb0d03a5d5f)`(int32 & OutValue) const` <a id="structFRHAPI__EntityGuideEngagement_1ab2dae51e2224a4ba976d0bb0d03a5d5f"></a>

Fills OutValue with the value of Rating_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1af436ac5efd06366f700d2fbf683de0fc)`()` <a id="structFRHAPI__EntityGuideEngagement_1af436ac5efd06366f700d2fbf683de0fc"></a>

Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1ad9a6b5c93449c223722f8142f9614e67)`() const` <a id="structFRHAPI__EntityGuideEngagement_1ad9a6b5c93449c223722f8142f9614e67"></a>

Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1a4aeb02dac5fccebfbf3e26696e7a0d86)`(const int32 & NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a4aeb02dac5fccebfbf3e26696e7a0d86"></a>

Sets the value of Rating_Optional and also sets Rating_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1af6cc477a940a7fc9866abefc1efae36d)`(int32 && NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1af6cc477a940a7fc9866abefc1efae36d"></a>

Sets the value of Rating_Optional and also sets Rating_IsSet to true using move semantics.

#### `public inline void `[`ClearRating`](#structFRHAPI__EntityGuideEngagement_1aac063050132db453de745ba84f5a59ff)`()` <a id="structFRHAPI__EntityGuideEngagement_1aac063050132db453de745ba84f5a59ff"></a>

Clears the value of Rating_Optional and sets Rating_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Rating`](#structFRHAPI__EntityGuideEngagement_1a2e8bde4ce6d13dedc9e328cc5d9752b7)`()` <a id="structFRHAPI__EntityGuideEngagement_1a2e8bde4ce6d13dedc9e328cc5d9752b7"></a>

Returns the default value of Rating.

#### `public inline FORCEINLINE FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1ab539fc20b7f5e544f2336ac7b1be1cb1)`()` <a id="structFRHAPI__EntityGuideEngagement_1ab539fc20b7f5e544f2336ac7b1be1cb1"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1ade1e660a01730bdea6efa5403505bc36)`() const` <a id="structFRHAPI__EntityGuideEngagement_1ade1e660a01730bdea6efa5403505bc36"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1ace8e866d6dd3824902f0bb8c0917496f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__EntityGuideEngagement_1ace8e866d6dd3824902f0bb8c0917496f"></a>

Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a67744afa893a9d84893a18f428015a31)`(FDateTime & OutValue) const` <a id="structFRHAPI__EntityGuideEngagement_1a67744afa893a9d84893a18f428015a31"></a>

Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a6c21ba916c1a7ec9027283fb32ea17b2)`()` <a id="structFRHAPI__EntityGuideEngagement_1a6c21ba916c1a7ec9027283fb32ea17b2"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a847f024bf6e91c3da70321500792ef46)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a847f024bf6e91c3da70321500792ef46"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a75b350359084f9768cac1b61712e59e1)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a75b350359084f9768cac1b61712e59e1"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a54b668a76f9fdd2c730f5980f1801040)`(FDateTime && NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a54b668a76f9fdd2c730f5980f1801040"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.

#### `public inline void `[`ClearFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a2c068f54358d6d5296478d9e2b43845e)`()` <a id="structFRHAPI__EntityGuideEngagement_1a2c068f54358d6d5296478d9e2b43845e"></a>

Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.

#### `public inline FORCEINLINE void `[`SetFavoritedAtToNull`](#structFRHAPI__EntityGuideEngagement_1afd92e3b8ed750181a27f32669c98bb5f)`()` <a id="structFRHAPI__EntityGuideEngagement_1afd92e3b8ed750181a27f32669c98bb5f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsFavoritedAtNull`](#structFRHAPI__EntityGuideEngagement_1a20db103fde770a60f6b995d005598aea)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a20db103fde770a60f6b995d005598aea"></a>

Checks whether FavoritedAt_Optional is set to null.

