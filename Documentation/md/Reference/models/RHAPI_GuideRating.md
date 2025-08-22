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
`public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1a7a0f274e9f2674907d6e65d7bf6028f4)`()` | Gets the value of GuideId.
`public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1ae4e2d6b3b7003163b0958cf267ff1d6c)`() const` | Gets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__GuideRating_1aa4d6c5e630b9c834e0411683484d466f)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__GuideRating_1a8bf427ef687cddfdf6b1cf75eb87aebf)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.
`public inline FORCEINLINE int32 & `[`GetRating`](#structFRHAPI__GuideRating_1ad5321ba6452fc97a41cff035b3da52e7)`()` | Gets the value of Rating.
`public inline FORCEINLINE const int32 & `[`GetRating`](#structFRHAPI__GuideRating_1acfc3a146dfb1215c6d202ebab59c4229)`() const` | Gets the value of Rating.
`public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__GuideRating_1aacc4c9865296394bb510d67b6a540cbd)`(const int32 & NewValue)` | Sets the value of Rating.
`public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__GuideRating_1ac04239bc31b4bbad2423a04b0ad8ef20)`(int32 && NewValue)` | Sets the value of Rating using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Rating`](#structFRHAPI__GuideRating_1aa31730efb7ab163858d7a3d59ff99699)`()` | Returns the default value of Rating.

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

#### `public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1a7a0f274e9f2674907d6e65d7bf6028f4)`()` <a id="structFRHAPI__GuideRating_1a7a0f274e9f2674907d6e65d7bf6028f4"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__GuideRating_1ae4e2d6b3b7003163b0958cf267ff1d6c)`() const` <a id="structFRHAPI__GuideRating_1ae4e2d6b3b7003163b0958cf267ff1d6c"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__GuideRating_1aa4d6c5e630b9c834e0411683484d466f)`(const FGuid & NewValue)` <a id="structFRHAPI__GuideRating_1aa4d6c5e630b9c834e0411683484d466f"></a>

Sets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__GuideRating_1a8bf427ef687cddfdf6b1cf75eb87aebf)`(FGuid && NewValue)` <a id="structFRHAPI__GuideRating_1a8bf427ef687cddfdf6b1cf75eb87aebf"></a>

Sets the value of GuideId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetRating`](#structFRHAPI__GuideRating_1ad5321ba6452fc97a41cff035b3da52e7)`()` <a id="structFRHAPI__GuideRating_1ad5321ba6452fc97a41cff035b3da52e7"></a>

Gets the value of Rating.

#### `public inline FORCEINLINE const int32 & `[`GetRating`](#structFRHAPI__GuideRating_1acfc3a146dfb1215c6d202ebab59c4229)`() const` <a id="structFRHAPI__GuideRating_1acfc3a146dfb1215c6d202ebab59c4229"></a>

Gets the value of Rating.

#### `public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__GuideRating_1aacc4c9865296394bb510d67b6a540cbd)`(const int32 & NewValue)` <a id="structFRHAPI__GuideRating_1aacc4c9865296394bb510d67b6a540cbd"></a>

Sets the value of Rating.

#### `public inline FORCEINLINE void `[`SetRating`](#structFRHAPI__GuideRating_1ac04239bc31b4bbad2423a04b0ad8ef20)`(int32 && NewValue)` <a id="structFRHAPI__GuideRating_1ac04239bc31b4bbad2423a04b0ad8ef20"></a>

Sets the value of Rating using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Rating`](#structFRHAPI__GuideRating_1aa31730efb7ab163858d7a3d59ff99699)`()` <a id="structFRHAPI__GuideRating_1aa31730efb7ab163858d7a3d59ff99699"></a>

Returns the default value of Rating.

