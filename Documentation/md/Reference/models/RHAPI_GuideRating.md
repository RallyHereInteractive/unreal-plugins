---
title: RHAPI_GuideRating
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_GuideRating`](#structFRHAPI__GuideRating) | 

## struct `FRHAPI_GuideRating` <a id="structFRHAPI__GuideRating"></a>

```
struct FRHAPI_GuideRating
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`GuideId`](#structFRHAPI__GuideRating_1a3ffe327a2acf2dcbec3902f68eb45804) | 
`public int32 `[`Rating`](#structFRHAPI__GuideRating_1ad51fed2e5598f8ec7b605d43278f2ce1) | 
`public virtual bool `[`FromJson`](#structFRHAPI__GuideRating_1a92a4a763ddd7c1821ed16b9d4406eeb1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__GuideRating_1a9f1de6c608f3da9aee9daf90871cd59e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1ad36381f2925f212df47c3fec1b0727c8)`()` | Gets the value of GuideId.
`public inline const FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1ad867b27bb6b0ad06cf18b17694b1b6b1)`() const` | Gets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__GuideRating_1ab8f409cd9da69bea4f944ebb58fbe0a9)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__GuideRating_1abd144e5c441edef48f0565a5a8df76ee)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.
`public inline int32 & `[`GetRating`](#structFRHAPI__GuideRating_1ac0763b52d79b0b17c4810ba69ed32ebd)`()` | Gets the value of Rating.
`public inline const int32 & `[`GetRating`](#structFRHAPI__GuideRating_1aa3c7230c58355a222e1b4f5f3fd01a9a)`() const` | Gets the value of Rating.
`public inline void `[`SetRating`](#structFRHAPI__GuideRating_1a2c41338d8f03fd9b3a4b5667760f0c25)`(const int32 & NewValue)` | Sets the value of Rating.
`public inline void `[`SetRating`](#structFRHAPI__GuideRating_1a8bc53b16421470a445454a09fc071dea)`(int32 && NewValue)` | Sets the value of Rating using move semantics.
`public inline bool `[`IsRatingDefaultValue`](#structFRHAPI__GuideRating_1ad4044b6bda0b07088ac877187087d82d)`() const` | Returns true if Rating matches the default value.
`public inline void `[`SetRatingToDefault`](#structFRHAPI__GuideRating_1a172907e408d545d1fcb53a74172f2a60)`()` | Sets the value of Rating to its default

### Members

#### `public FGuid `[`GuideId`](#structFRHAPI__GuideRating_1a3ffe327a2acf2dcbec3902f68eb45804) <a id="structFRHAPI__GuideRating_1a3ffe327a2acf2dcbec3902f68eb45804"></a>

#### `public int32 `[`Rating`](#structFRHAPI__GuideRating_1ad51fed2e5598f8ec7b605d43278f2ce1) <a id="structFRHAPI__GuideRating_1ad51fed2e5598f8ec7b605d43278f2ce1"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__GuideRating_1a92a4a763ddd7c1821ed16b9d4406eeb1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__GuideRating_1a92a4a763ddd7c1821ed16b9d4406eeb1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__GuideRating_1a9f1de6c608f3da9aee9daf90871cd59e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__GuideRating_1a9f1de6c608f3da9aee9daf90871cd59e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1ad36381f2925f212df47c3fec1b0727c8)`()` <a id="structFRHAPI__GuideRating_1ad36381f2925f212df47c3fec1b0727c8"></a>

Gets the value of GuideId.

#### `public inline const FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1ad867b27bb6b0ad06cf18b17694b1b6b1)`() const` <a id="structFRHAPI__GuideRating_1ad867b27bb6b0ad06cf18b17694b1b6b1"></a>

Gets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__GuideRating_1ab8f409cd9da69bea4f944ebb58fbe0a9)`(const FGuid & NewValue)` <a id="structFRHAPI__GuideRating_1ab8f409cd9da69bea4f944ebb58fbe0a9"></a>

Sets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__GuideRating_1abd144e5c441edef48f0565a5a8df76ee)`(FGuid && NewValue)` <a id="structFRHAPI__GuideRating_1abd144e5c441edef48f0565a5a8df76ee"></a>

Sets the value of GuideId using move semantics.

#### `public inline int32 & `[`GetRating`](#structFRHAPI__GuideRating_1ac0763b52d79b0b17c4810ba69ed32ebd)`()` <a id="structFRHAPI__GuideRating_1ac0763b52d79b0b17c4810ba69ed32ebd"></a>

Gets the value of Rating.

#### `public inline const int32 & `[`GetRating`](#structFRHAPI__GuideRating_1aa3c7230c58355a222e1b4f5f3fd01a9a)`() const` <a id="structFRHAPI__GuideRating_1aa3c7230c58355a222e1b4f5f3fd01a9a"></a>

Gets the value of Rating.

#### `public inline void `[`SetRating`](#structFRHAPI__GuideRating_1a2c41338d8f03fd9b3a4b5667760f0c25)`(const int32 & NewValue)` <a id="structFRHAPI__GuideRating_1a2c41338d8f03fd9b3a4b5667760f0c25"></a>

Sets the value of Rating.

#### `public inline void `[`SetRating`](#structFRHAPI__GuideRating_1a8bc53b16421470a445454a09fc071dea)`(int32 && NewValue)` <a id="structFRHAPI__GuideRating_1a8bc53b16421470a445454a09fc071dea"></a>

Sets the value of Rating using move semantics.

#### `public inline bool `[`IsRatingDefaultValue`](#structFRHAPI__GuideRating_1ad4044b6bda0b07088ac877187087d82d)`() const` <a id="structFRHAPI__GuideRating_1ad4044b6bda0b07088ac877187087d82d"></a>

Returns true if Rating matches the default value.

#### `public inline void `[`SetRatingToDefault`](#structFRHAPI__GuideRating_1a172907e408d545d1fcb53a74172f2a60)`()` <a id="structFRHAPI__GuideRating_1a172907e408d545d1fcb53a74172f2a60"></a>

Sets the value of Rating to its default

