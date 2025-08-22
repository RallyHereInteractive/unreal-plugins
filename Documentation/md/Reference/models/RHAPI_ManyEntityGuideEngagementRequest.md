---
title: RHAPI_ManyEntityGuideEngagementRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ManyEntityGuideEngagementRequest`](#structFRHAPI__ManyEntityGuideEngagementRequest) | 

## struct `FRHAPI_ManyEntityGuideEngagementRequest` <a id="structFRHAPI__ManyEntityGuideEngagementRequest"></a>

```
struct FRHAPI_ManyEntityGuideEngagementRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FGuid > `[`Guides_Optional`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a0ef6686c7b099d93b320a9f4a81f70a9) | 
`public bool `[`Guides_IsSet`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a9398a64aa4879ad3202068c01f5b9829) | true if Guides_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a395648d11784acf45d68b7a6546d4623)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a1a3207e6758c7c233a4dc5b440f00a52)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1ab30325cbaa557402d17d51eb11166dc0)`()` | Gets the value of Guides_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a9d042841c7e273181be9fec571b909ee)`() const` | Gets the value of Guides_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a6d23ddaa3a387ef5c465ec57f57af151)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of Guides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a94d0a899973011071808f322992a8181)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of Guides_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1abb75af464159a218be6cad92f0e5803f)`()` | Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1aec464936a5b8bb528f747c96192c735f)`() const` | Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a26dab15e859a4fc0f02e09bb5c08b246)`(const TArray< FGuid > & NewValue)` | Sets the value of Guides_Optional and also sets Guides_IsSet to true.
`public inline FORCEINLINE void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a1a35609df3d065f3ad87fce62e862ebe)`(TArray< FGuid > && NewValue)` | Sets the value of Guides_Optional and also sets Guides_IsSet to true using move semantics.
`public inline void `[`ClearGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a245df2c67f0559c1d909ca4128fe0024)`()` | Clears the value of Guides_Optional and sets Guides_IsSet to false.

### Members

#### `public TArray< FGuid > `[`Guides_Optional`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a0ef6686c7b099d93b320a9f4a81f70a9) <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a0ef6686c7b099d93b320a9f4a81f70a9"></a>

#### `public bool `[`Guides_IsSet`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a9398a64aa4879ad3202068c01f5b9829) <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a9398a64aa4879ad3202068c01f5b9829"></a>

true if Guides_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a395648d11784acf45d68b7a6546d4623)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a395648d11784acf45d68b7a6546d4623"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a1a3207e6758c7c233a4dc5b440f00a52)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a1a3207e6758c7c233a4dc5b440f00a52"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1ab30325cbaa557402d17d51eb11166dc0)`()` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1ab30325cbaa557402d17d51eb11166dc0"></a>

Gets the value of Guides_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a9d042841c7e273181be9fec571b909ee)`() const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a9d042841c7e273181be9fec571b909ee"></a>

Gets the value of Guides_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a6d23ddaa3a387ef5c465ec57f57af151)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a6d23ddaa3a387ef5c465ec57f57af151"></a>

Gets the value of Guides_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a94d0a899973011071808f322992a8181)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a94d0a899973011071808f322992a8181"></a>

Fills OutValue with the value of Guides_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1abb75af464159a218be6cad92f0e5803f)`()` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1abb75af464159a218be6cad92f0e5803f"></a>

Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1aec464936a5b8bb528f747c96192c735f)`() const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1aec464936a5b8bb528f747c96192c735f"></a>

Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a26dab15e859a4fc0f02e09bb5c08b246)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a26dab15e859a4fc0f02e09bb5c08b246"></a>

Sets the value of Guides_Optional and also sets Guides_IsSet to true.

#### `public inline FORCEINLINE void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a1a35609df3d065f3ad87fce62e862ebe)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a1a35609df3d065f3ad87fce62e862ebe"></a>

Sets the value of Guides_Optional and also sets Guides_IsSet to true using move semantics.

#### `public inline void `[`ClearGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a245df2c67f0559c1d909ca4128fe0024)`()` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a245df2c67f0559c1d909ca4128fe0024"></a>

Clears the value of Guides_Optional and sets Guides_IsSet to false.

