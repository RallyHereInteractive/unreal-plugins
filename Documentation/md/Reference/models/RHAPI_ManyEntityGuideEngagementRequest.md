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
`public inline TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a0b56b87af0a2c868597d6aa2aa956ebf)`()` | Gets the value of Guides_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a9d571227b76694220830e79948a34c6e)`() const` | Gets the value of Guides_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1aa484692e02227bd0f5591003c4bf8d24)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of Guides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a5945bd572e5e93c02a45b483f98e3909)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of Guides_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a1be0a13862b2186a836820e6d4c146c5)`()` | Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a6c6d407f04f15d7047bb2913da2d616f)`() const` | Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a4762848e1bc4a100c37e3100c095fae6)`(const TArray< FGuid > & NewValue)` | Sets the value of Guides_Optional and also sets Guides_IsSet to true.
`public inline void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a7eaf5b66d53c0c7ca833797a94e91184)`(TArray< FGuid > && NewValue)` | Sets the value of Guides_Optional and also sets Guides_IsSet to true using move semantics.
`public inline void `[`ClearGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a245df2c67f0559c1d909ca4128fe0024)`()` | Clears the value of Guides_Optional and sets Guides_IsSet to false.
`public inline bool `[`IsGuidesSet`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a3a0bce50ce434a6b3d04515c75869bb4)`() const` | Checks whether Guides_Optional has been set.

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

#### `public inline TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a0b56b87af0a2c868597d6aa2aa956ebf)`()` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a0b56b87af0a2c868597d6aa2aa956ebf"></a>

Gets the value of Guides_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a9d571227b76694220830e79948a34c6e)`() const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a9d571227b76694220830e79948a34c6e"></a>

Gets the value of Guides_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1aa484692e02227bd0f5591003c4bf8d24)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1aa484692e02227bd0f5591003c4bf8d24"></a>

Gets the value of Guides_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a5945bd572e5e93c02a45b483f98e3909)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a5945bd572e5e93c02a45b483f98e3909"></a>

Fills OutValue with the value of Guides_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a1be0a13862b2186a836820e6d4c146c5)`()` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a1be0a13862b2186a836820e6d4c146c5"></a>

Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FGuid > * `[`GetGuidesOrNull`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a6c6d407f04f15d7047bb2913da2d616f)`() const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a6c6d407f04f15d7047bb2913da2d616f"></a>

Returns a pointer to Guides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a4762848e1bc4a100c37e3100c095fae6)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a4762848e1bc4a100c37e3100c095fae6"></a>

Sets the value of Guides_Optional and also sets Guides_IsSet to true.

#### `public inline void `[`SetGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a7eaf5b66d53c0c7ca833797a94e91184)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a7eaf5b66d53c0c7ca833797a94e91184"></a>

Sets the value of Guides_Optional and also sets Guides_IsSet to true using move semantics.

#### `public inline void `[`ClearGuides`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a245df2c67f0559c1d909ca4128fe0024)`()` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a245df2c67f0559c1d909ca4128fe0024"></a>

Clears the value of Guides_Optional and sets Guides_IsSet to false.

#### `public inline bool `[`IsGuidesSet`](#structFRHAPI__ManyEntityGuideEngagementRequest_1a3a0bce50ce434a6b3d04515c75869bb4)`() const` <a id="structFRHAPI__ManyEntityGuideEngagementRequest_1a3a0bce50ce434a6b3d04515c75869bb4"></a>

Checks whether Guides_Optional has been set.

