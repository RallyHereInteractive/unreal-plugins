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
`public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1ad92e8aca5cf3a1d35d250b21294c0139)`()` | Gets the value of GuideId.
`public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1aa7cdf75e25908640a28bc4c2ed2f63f6)`() const` | Gets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a7a8f3113438a6a9c170319c942dc9ddf)`(const FGuid & NewValue)` | Sets the value of GuideId.
`public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1aece53fc4325faeebe262b80dd33c1c3c)`(FGuid && NewValue)` | Sets the value of GuideId using move semantics.

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

#### `public inline FORCEINLINE FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1ad92e8aca5cf3a1d35d250b21294c0139)`()` <a id="structFRHAPI__FavoriteGuideRequest_1ad92e8aca5cf3a1d35d250b21294c0139"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE const FGuid & `[`GetGuideId`](#structFRHAPI__FavoriteGuideRequest_1aa7cdf75e25908640a28bc4c2ed2f63f6)`() const` <a id="structFRHAPI__FavoriteGuideRequest_1aa7cdf75e25908640a28bc4c2ed2f63f6"></a>

Gets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1a7a8f3113438a6a9c170319c942dc9ddf)`(const FGuid & NewValue)` <a id="structFRHAPI__FavoriteGuideRequest_1a7a8f3113438a6a9c170319c942dc9ddf"></a>

Sets the value of GuideId.

#### `public inline FORCEINLINE void `[`SetGuideId`](#structFRHAPI__FavoriteGuideRequest_1aece53fc4325faeebe262b80dd33c1c3c)`(FGuid && NewValue)` <a id="structFRHAPI__FavoriteGuideRequest_1aece53fc4325faeebe262b80dd33c1c3c"></a>

Sets the value of GuideId using move semantics.

