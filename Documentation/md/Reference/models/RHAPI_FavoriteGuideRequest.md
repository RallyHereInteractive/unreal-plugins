---
title: RHAPI_FavoriteGuideRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FavoriteGuideRequest`](#structFRHAPI__FavoriteGuideRequest) | 

## struct `FRHAPI_FavoriteGuideRequest` <a id="structFRHAPI__FavoriteGuideRequest"></a>

```
struct FRHAPI_FavoriteGuideRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`GuideId`](#structFRHAPI__FavoriteGuideRequest_1aa370d898375edd7d4538b17c9e336c86) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FavoriteGuideRequest_1a79683df03bc359738093786dc855ccf3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FavoriteGuideRequest_1ad4d20e5e5a29ef7fc19791cd8e2ebf00)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1acda732d6cb1748be0b899b87aa12b410)`()` | Gets the value of GuideId.
`public inline const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a455d1b8c5aee268e91ddcd1c15a96455)`() const` | Gets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a5bb24ed6ea05eb780bb452c59d7ad3d1)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a20ff60e6c34ce4702bd6ea1227542941)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.

### Members

#### `public FGuid `[`GuideId`](#structFRHAPI__FavoriteGuideRequest_1aa370d898375edd7d4538b17c9e336c86) <a id="structFRHAPI__FavoriteGuideRequest_1aa370d898375edd7d4538b17c9e336c86"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FavoriteGuideRequest_1a79683df03bc359738093786dc855ccf3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FavoriteGuideRequest_1a79683df03bc359738093786dc855ccf3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FavoriteGuideRequest_1ad4d20e5e5a29ef7fc19791cd8e2ebf00)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FavoriteGuideRequest_1ad4d20e5e5a29ef7fc19791cd8e2ebf00"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1acda732d6cb1748be0b899b87aa12b410)`()` <a id="structFRHAPI__FavoriteGuideRequest_1acda732d6cb1748be0b899b87aa12b410"></a>

Gets the value of GuideId.

#### `public inline const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a455d1b8c5aee268e91ddcd1c15a96455)`() const` <a id="structFRHAPI__FavoriteGuideRequest_1a455d1b8c5aee268e91ddcd1c15a96455"></a>

Gets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a5bb24ed6ea05eb780bb452c59d7ad3d1)`(const FGuid & NewValue)` <a id="structFRHAPI__FavoriteGuideRequest_1a5bb24ed6ea05eb780bb452c59d7ad3d1"></a>

Sets the value of GuideId.

#### `public inline void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a20ff60e6c34ce4702bd6ea1227542941)`(FGuid && NewValue)` <a id="structFRHAPI__FavoriteGuideRequest_1a20ff60e6c34ce4702bd6ea1227542941"></a>

Sets the value of GuideId using move semantics.

