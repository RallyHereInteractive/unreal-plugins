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
`public inline FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1a2d618abc8369a964080c90784e247c48)`()` | Gets the value of GuideId.
`public inline const FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1abedf920a680aa9249e24e42ecba5e8e0)`() const` | Gets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1a4517d1fe5c25ed8d09387fae4361ac6e)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1a0d049a66bb31a7085b5356f3f3a88d4b)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.
`public inline int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a60c08c7dd9c854f26a7a4a11400c690d)`()` | Gets the value of Rating_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a2d8e3a3a1d7a548094437d2f6d0287dd)`() const` | Gets the value of Rating_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a3ba49845b12a1a4778f4cce7c4e33c64)`(const int32 & DefaultValue) const` | Gets the value of Rating_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a69777597ca79d57940b9666ce1a397c3)`(int32 & OutValue) const` | Fills OutValue with the value of Rating_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1a6ef366c1217d3a6d88a2a429fed295c1)`()` | Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1a11a4cc3311a16ca5ce2a4334f5e9ef3a)`() const` | Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1aa3b580a82cb1f02dda3cd1cb77528ae6)`(const int32 & NewValue)` | Sets the value of Rating_Optional and also sets Rating_IsSet to true.
`public inline void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1a79d66f9f1a268ccfc089721fa9192660)`(int32 && NewValue)` | Sets the value of Rating_Optional and also sets Rating_IsSet to true using move semantics.
`public inline void `[`ClearRating`](#structFRHAPI__EntityGuideEngagement_1aac063050132db453de745ba84f5a59ff)`()` | Clears the value of Rating_Optional and sets Rating_IsSet to false.
`public inline bool `[`IsRatingSet`](#structFRHAPI__EntityGuideEngagement_1a6db79e07c2295bd2577a608eba1fcb0a)`() const` | Checks whether Rating_Optional has been set.
`public inline bool `[`IsRatingDefaultValue`](#structFRHAPI__EntityGuideEngagement_1a4b15040cd004a34c234065bfc0c70072)`() const` | Returns true if Rating_Optional is set and matches the default value.
`public inline void `[`SetRatingToDefault`](#structFRHAPI__EntityGuideEngagement_1ae0ce5b1ae0c7bc5279e6f9bd91b174ce)`()` | Sets the value of Rating_Optional to its default and also sets Rating_IsSet to true.
`public inline FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a550305735e740e3b8474e98565c1eab8)`()` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a8992801209ecd049ea8f4f4778553b63)`() const` | Gets the value of FavoritedAt_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a4871d8faf773daaaf0b1048b9372877d)`(const FDateTime & DefaultValue) const` | Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1abe00f340dedea7ce555c357d85c42486)`(FDateTime & OutValue) const` | Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a619897593a26c618f915f1346bdc28af)`()` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a1475e91e35b6c6a8f6c77fe8d13e1c2b)`() const` | Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a09510d23af6071db9234fba301ea1715)`(const FDateTime & NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.
`public inline void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a064633b00d42217bd7e015ab0f69b0df)`(FDateTime && NewValue)` | Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.
`public inline void `[`ClearFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a2c068f54358d6d5296478d9e2b43845e)`()` | Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.
`public inline bool `[`IsFavoritedAtSet`](#structFRHAPI__EntityGuideEngagement_1a3f7c95133de829f31dc33b019fccfb5c)`() const` | Checks whether FavoritedAt_Optional has been set.
`public inline void `[`SetFavoritedAtToNull`](#structFRHAPI__EntityGuideEngagement_1a10a76044cb55de61d4f03bc40818aff5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFavoritedAtNull`](#structFRHAPI__EntityGuideEngagement_1a83af5eb109672e5f5110cb12333abf1a)`() const` | Checks whether FavoritedAt_Optional is set to null.

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

#### `public inline FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1a2d618abc8369a964080c90784e247c48)`()` <a id="structFRHAPI__EntityGuideEngagement_1a2d618abc8369a964080c90784e247c48"></a>

Gets the value of GuideId.

#### `public inline const FGuid & `[`GetGuideId`](#structFRHAPI__EntityGuideEngagement_1abedf920a680aa9249e24e42ecba5e8e0)`() const` <a id="structFRHAPI__EntityGuideEngagement_1abedf920a680aa9249e24e42ecba5e8e0"></a>

Gets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1a4517d1fe5c25ed8d09387fae4361ac6e)`(const FGuid & NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a4517d1fe5c25ed8d09387fae4361ac6e"></a>

Sets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__EntityGuideEngagement_1a0d049a66bb31a7085b5356f3f3a88d4b)`(FGuid && NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a0d049a66bb31a7085b5356f3f3a88d4b"></a>

Sets the value of GuideId using move semantics.

#### `public inline int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a60c08c7dd9c854f26a7a4a11400c690d)`()` <a id="structFRHAPI__EntityGuideEngagement_1a60c08c7dd9c854f26a7a4a11400c690d"></a>

Gets the value of Rating_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a2d8e3a3a1d7a548094437d2f6d0287dd)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a2d8e3a3a1d7a548094437d2f6d0287dd"></a>

Gets the value of Rating_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a3ba49845b12a1a4778f4cce7c4e33c64)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntityGuideEngagement_1a3ba49845b12a1a4778f4cce7c4e33c64"></a>

Gets the value of Rating_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRating`](#structFRHAPI__EntityGuideEngagement_1a69777597ca79d57940b9666ce1a397c3)`(int32 & OutValue) const` <a id="structFRHAPI__EntityGuideEngagement_1a69777597ca79d57940b9666ce1a397c3"></a>

Fills OutValue with the value of Rating_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1a6ef366c1217d3a6d88a2a429fed295c1)`()` <a id="structFRHAPI__EntityGuideEngagement_1a6ef366c1217d3a6d88a2a429fed295c1"></a>

Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRatingOrNull`](#structFRHAPI__EntityGuideEngagement_1a11a4cc3311a16ca5ce2a4334f5e9ef3a)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a11a4cc3311a16ca5ce2a4334f5e9ef3a"></a>

Returns a pointer to Rating_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1aa3b580a82cb1f02dda3cd1cb77528ae6)`(const int32 & NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1aa3b580a82cb1f02dda3cd1cb77528ae6"></a>

Sets the value of Rating_Optional and also sets Rating_IsSet to true.

#### `public inline void `[`SetRating`](#structFRHAPI__EntityGuideEngagement_1a79d66f9f1a268ccfc089721fa9192660)`(int32 && NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a79d66f9f1a268ccfc089721fa9192660"></a>

Sets the value of Rating_Optional and also sets Rating_IsSet to true using move semantics.

#### `public inline void `[`ClearRating`](#structFRHAPI__EntityGuideEngagement_1aac063050132db453de745ba84f5a59ff)`()` <a id="structFRHAPI__EntityGuideEngagement_1aac063050132db453de745ba84f5a59ff"></a>

Clears the value of Rating_Optional and sets Rating_IsSet to false.

#### `public inline bool `[`IsRatingSet`](#structFRHAPI__EntityGuideEngagement_1a6db79e07c2295bd2577a608eba1fcb0a)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a6db79e07c2295bd2577a608eba1fcb0a"></a>

Checks whether Rating_Optional has been set.

#### `public inline bool `[`IsRatingDefaultValue`](#structFRHAPI__EntityGuideEngagement_1a4b15040cd004a34c234065bfc0c70072)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a4b15040cd004a34c234065bfc0c70072"></a>

Returns true if Rating_Optional is set and matches the default value.

#### `public inline void `[`SetRatingToDefault`](#structFRHAPI__EntityGuideEngagement_1ae0ce5b1ae0c7bc5279e6f9bd91b174ce)`()` <a id="structFRHAPI__EntityGuideEngagement_1ae0ce5b1ae0c7bc5279e6f9bd91b174ce"></a>

Sets the value of Rating_Optional to its default and also sets Rating_IsSet to true.

#### `public inline FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a550305735e740e3b8474e98565c1eab8)`()` <a id="structFRHAPI__EntityGuideEngagement_1a550305735e740e3b8474e98565c1eab8"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a8992801209ecd049ea8f4f4778553b63)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a8992801209ecd049ea8f4f4778553b63"></a>

Gets the value of FavoritedAt_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a4871d8faf773daaaf0b1048b9372877d)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__EntityGuideEngagement_1a4871d8faf773daaaf0b1048b9372877d"></a>

Gets the value of FavoritedAt_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1abe00f340dedea7ce555c357d85c42486)`(FDateTime & OutValue) const` <a id="structFRHAPI__EntityGuideEngagement_1abe00f340dedea7ce555c357d85c42486"></a>

Fills OutValue with the value of FavoritedAt_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a619897593a26c618f915f1346bdc28af)`()` <a id="structFRHAPI__EntityGuideEngagement_1a619897593a26c618f915f1346bdc28af"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetFavoritedAtOrNull`](#structFRHAPI__EntityGuideEngagement_1a1475e91e35b6c6a8f6c77fe8d13e1c2b)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a1475e91e35b6c6a8f6c77fe8d13e1c2b"></a>

Returns a pointer to FavoritedAt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a09510d23af6071db9234fba301ea1715)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a09510d23af6071db9234fba301ea1715"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true.

#### `public inline void `[`SetFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a064633b00d42217bd7e015ab0f69b0df)`(FDateTime && NewValue)` <a id="structFRHAPI__EntityGuideEngagement_1a064633b00d42217bd7e015ab0f69b0df"></a>

Sets the value of FavoritedAt_Optional and also sets FavoritedAt_IsSet to true using move semantics.

#### `public inline void `[`ClearFavoritedAt`](#structFRHAPI__EntityGuideEngagement_1a2c068f54358d6d5296478d9e2b43845e)`()` <a id="structFRHAPI__EntityGuideEngagement_1a2c068f54358d6d5296478d9e2b43845e"></a>

Clears the value of FavoritedAt_Optional and sets FavoritedAt_IsSet to false.

#### `public inline bool `[`IsFavoritedAtSet`](#structFRHAPI__EntityGuideEngagement_1a3f7c95133de829f31dc33b019fccfb5c)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a3f7c95133de829f31dc33b019fccfb5c"></a>

Checks whether FavoritedAt_Optional has been set.

#### `public inline void `[`SetFavoritedAtToNull`](#structFRHAPI__EntityGuideEngagement_1a10a76044cb55de61d4f03bc40818aff5)`()` <a id="structFRHAPI__EntityGuideEngagement_1a10a76044cb55de61d4f03bc40818aff5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFavoritedAtNull`](#structFRHAPI__EntityGuideEngagement_1a83af5eb109672e5f5110cb12333abf1a)`() const` <a id="structFRHAPI__EntityGuideEngagement_1a83af5eb109672e5f5110cb12333abf1a"></a>

Checks whether FavoritedAt_Optional is set to null.

