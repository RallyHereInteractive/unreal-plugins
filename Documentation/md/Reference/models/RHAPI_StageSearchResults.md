---
title: RHAPI_StageSearchResults
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StageSearchResults`](#structFRHAPI__StageSearchResults) | 

## struct `FRHAPI_StageSearchResults` <a id="structFRHAPI__StageSearchResults"></a>

```
struct FRHAPI_StageSearchResults
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > `[`Stages`](#structFRHAPI__StageSearchResults_1a6bd32bcd0152689a95a16437fa770410) | 
`public FString `[`Cursor_Optional`](#structFRHAPI__StageSearchResults_1a45abd955ba057f1224c2d869a41eef80) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__StageSearchResults_1a4e29fe9488d1d5c85670c2d2249c0a66) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__StageSearchResults_1aa02ca4caa7b13337a5075ed5aeed5200) | true if Cursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__StageSearchResults_1a7ba73ddd88835859837d9efee9cf4a39)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StageSearchResults_1a23816120cc577029aa69166e1b7a96c7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > & `[`GetStages`](#structFRHAPI__StageSearchResults_1a74b378ceebc82ba891a976e4fb906763)`()` | Gets the value of Stages.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > & `[`GetStages`](#structFRHAPI__StageSearchResults_1ad97c8d6e768fd53ace617d1ebbe2745b)`() const` | Gets the value of Stages.
`public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageSearchResults_1a6fead26a6a4692127923d3637f2edf02)`(const TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > & NewValue)` | Sets the value of Stages.
`public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageSearchResults_1a883004f515b255907ef12eec15194e3a)`(TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > && NewValue)` | Sets the value of Stages using move semantics.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__StageSearchResults_1aab4e6bd06c0aebadf9d3f4a2a880ca3e)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__StageSearchResults_1a864d6c8bc209da27b8378ef811c86e45)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__StageSearchResults_1a15af79a9387758bd683a34ab87b415d5)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__StageSearchResults_1ac92d8421f614338f7407a97b5ee78249)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__StageSearchResults_1a249406ef05183e59abc6c55fd198f39c)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__StageSearchResults_1a6be248f670c782a19d62aad8cdfbeb45)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__StageSearchResults_1aff895c8981542b061412debe44716864)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__StageSearchResults_1a3c722528e0325e508582d680ccc41f0e)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__StageSearchResults_1a84578679d844767358dfdc93b929d03f)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__StageSearchResults_1a87c0f4dfcf2f18d10d3d861e55c8e4b7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__StageSearchResults_1a063785424cc6d781f6e61065f4df0f78)`() const` | Checks whether Cursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > `[`Stages`](#structFRHAPI__StageSearchResults_1a6bd32bcd0152689a95a16437fa770410) <a id="structFRHAPI__StageSearchResults_1a6bd32bcd0152689a95a16437fa770410"></a>

#### `public FString `[`Cursor_Optional`](#structFRHAPI__StageSearchResults_1a45abd955ba057f1224c2d869a41eef80) <a id="structFRHAPI__StageSearchResults_1a45abd955ba057f1224c2d869a41eef80"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__StageSearchResults_1a4e29fe9488d1d5c85670c2d2249c0a66) <a id="structFRHAPI__StageSearchResults_1a4e29fe9488d1d5c85670c2d2249c0a66"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__StageSearchResults_1aa02ca4caa7b13337a5075ed5aeed5200) <a id="structFRHAPI__StageSearchResults_1aa02ca4caa7b13337a5075ed5aeed5200"></a>

true if Cursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__StageSearchResults_1a7ba73ddd88835859837d9efee9cf4a39)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StageSearchResults_1a7ba73ddd88835859837d9efee9cf4a39"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StageSearchResults_1a23816120cc577029aa69166e1b7a96c7)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__StageSearchResults_1a23816120cc577029aa69166e1b7a96c7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > & `[`GetStages`](#structFRHAPI__StageSearchResults_1a74b378ceebc82ba891a976e4fb906763)`()` <a id="structFRHAPI__StageSearchResults_1a74b378ceebc82ba891a976e4fb906763"></a>

Gets the value of Stages.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > & `[`GetStages`](#structFRHAPI__StageSearchResults_1ad97c8d6e768fd53ace617d1ebbe2745b)`() const` <a id="structFRHAPI__StageSearchResults_1ad97c8d6e768fd53ace617d1ebbe2745b"></a>

Gets the value of Stages.

#### `public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageSearchResults_1a6fead26a6a4692127923d3637f2edf02)`(const TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > & NewValue)` <a id="structFRHAPI__StageSearchResults_1a6fead26a6a4692127923d3637f2edf02"></a>

Sets the value of Stages.

#### `public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageSearchResults_1a883004f515b255907ef12eec15194e3a)`(TArray< `[`FRHAPI_Stage`](RHAPI_Stage.md#structFRHAPI__Stage)` > && NewValue)` <a id="structFRHAPI__StageSearchResults_1a883004f515b255907ef12eec15194e3a"></a>

Sets the value of Stages using move semantics.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__StageSearchResults_1aab4e6bd06c0aebadf9d3f4a2a880ca3e)`()` <a id="structFRHAPI__StageSearchResults_1aab4e6bd06c0aebadf9d3f4a2a880ca3e"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__StageSearchResults_1a864d6c8bc209da27b8378ef811c86e45)`() const` <a id="structFRHAPI__StageSearchResults_1a864d6c8bc209da27b8378ef811c86e45"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__StageSearchResults_1a15af79a9387758bd683a34ab87b415d5)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageSearchResults_1a15af79a9387758bd683a34ab87b415d5"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__StageSearchResults_1ac92d8421f614338f7407a97b5ee78249)`(FString & OutValue) const` <a id="structFRHAPI__StageSearchResults_1ac92d8421f614338f7407a97b5ee78249"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__StageSearchResults_1a249406ef05183e59abc6c55fd198f39c)`()` <a id="structFRHAPI__StageSearchResults_1a249406ef05183e59abc6c55fd198f39c"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__StageSearchResults_1a6be248f670c782a19d62aad8cdfbeb45)`() const` <a id="structFRHAPI__StageSearchResults_1a6be248f670c782a19d62aad8cdfbeb45"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__StageSearchResults_1aff895c8981542b061412debe44716864)`(const FString & NewValue)` <a id="structFRHAPI__StageSearchResults_1aff895c8981542b061412debe44716864"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__StageSearchResults_1a3c722528e0325e508582d680ccc41f0e)`(FString && NewValue)` <a id="structFRHAPI__StageSearchResults_1a3c722528e0325e508582d680ccc41f0e"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__StageSearchResults_1a84578679d844767358dfdc93b929d03f)`()` <a id="structFRHAPI__StageSearchResults_1a84578679d844767358dfdc93b929d03f"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__StageSearchResults_1a87c0f4dfcf2f18d10d3d861e55c8e4b7)`()` <a id="structFRHAPI__StageSearchResults_1a87c0f4dfcf2f18d10d3d861e55c8e4b7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__StageSearchResults_1a063785424cc6d781f6e61065f4df0f78)`() const` <a id="structFRHAPI__StageSearchResults_1a063785424cc6d781f6e61065f4df0f78"></a>

Checks whether Cursor_Optional is set to null.

