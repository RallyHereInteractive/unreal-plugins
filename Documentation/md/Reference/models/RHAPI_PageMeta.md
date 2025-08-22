---
title: RHAPI_PageMeta
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PageMeta`](#structFRHAPI__PageMeta) | 

## struct `FRHAPI_PageMeta` <a id="structFRHAPI__PageMeta"></a>

```
struct FRHAPI_PageMeta
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Page`](#structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67) | 
`public int32 `[`Limit`](#structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546) | 
`public int32 `[`Total`](#structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PageMeta_1a3a6c36c80d941d3803312fdd3396c4b5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PageMeta_1a53f5dc92abc0b7edbf4e5a8cdda6795a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a2028df9c22bc42ae1045220ce2256da7)`()` | Gets the value of Page.
`public inline FORCEINLINE const int32 & `[`GetPage`](#structFRHAPI__PageMeta_1aa1e4e5ea1f7496d68ba145e9a1b29336)`() const` | Gets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PageMeta_1a9285a65eb32c3b03ceb60697bbb50c1d)`(const int32 & NewValue)` | Sets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PageMeta_1afe26154929c982afef5d0e28fa6e91f7)`(int32 && NewValue)` | Sets the value of Page using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Page`](#structFRHAPI__PageMeta_1a001cbb6c9df88352134fb31c06f5c0d5)`()` | Returns the default value of Page.
`public inline FORCEINLINE int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a3b59d4c5b7b2e60bcebd8c6d4707c439)`()` | Gets the value of Limit.
`public inline FORCEINLINE const int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a7d8cb4898fbab3fc90a88bfdf647978d)`() const` | Gets the value of Limit.
`public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__PageMeta_1a930a9a0d26f3060d4f9825536bcca724)`(const int32 & NewValue)` | Sets the value of Limit.
`public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__PageMeta_1a6b257699da805285aee4ab3331657455)`(int32 && NewValue)` | Sets the value of Limit using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Limit`](#structFRHAPI__PageMeta_1a92ce76f859d933f230f418868c4b6313)`()` | Returns the default value of Limit.
`public inline FORCEINLINE int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a0979456f0923b0bdbb44e5cd660fad3a)`()` | Gets the value of Total.
`public inline FORCEINLINE const int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a2b45f5dec9f982c38337c37e15354b3a)`() const` | Gets the value of Total.
`public inline FORCEINLINE void `[`SetTotal`](#structFRHAPI__PageMeta_1a15856897c50256d04c8d3de8805ceb99)`(const int32 & NewValue)` | Sets the value of Total.
`public inline FORCEINLINE void `[`SetTotal`](#structFRHAPI__PageMeta_1a32eda26aed4271119bdbdea6a05d42fa)`(int32 && NewValue)` | Sets the value of Total using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Total`](#structFRHAPI__PageMeta_1ac124485f7a9a398f621000b010baf4c5)`()` | Returns the default value of Total.

### Members

#### `public int32 `[`Page`](#structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67) <a id="structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67"></a>

#### `public int32 `[`Limit`](#structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546) <a id="structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546"></a>

#### `public int32 `[`Total`](#structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859) <a id="structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PageMeta_1a3a6c36c80d941d3803312fdd3396c4b5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PageMeta_1a3a6c36c80d941d3803312fdd3396c4b5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PageMeta_1a53f5dc92abc0b7edbf4e5a8cdda6795a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PageMeta_1a53f5dc92abc0b7edbf4e5a8cdda6795a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a2028df9c22bc42ae1045220ce2256da7)`()` <a id="structFRHAPI__PageMeta_1a2028df9c22bc42ae1045220ce2256da7"></a>

Gets the value of Page.

#### `public inline FORCEINLINE const int32 & `[`GetPage`](#structFRHAPI__PageMeta_1aa1e4e5ea1f7496d68ba145e9a1b29336)`() const` <a id="structFRHAPI__PageMeta_1aa1e4e5ea1f7496d68ba145e9a1b29336"></a>

Gets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PageMeta_1a9285a65eb32c3b03ceb60697bbb50c1d)`(const int32 & NewValue)` <a id="structFRHAPI__PageMeta_1a9285a65eb32c3b03ceb60697bbb50c1d"></a>

Sets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PageMeta_1afe26154929c982afef5d0e28fa6e91f7)`(int32 && NewValue)` <a id="structFRHAPI__PageMeta_1afe26154929c982afef5d0e28fa6e91f7"></a>

Sets the value of Page using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Page`](#structFRHAPI__PageMeta_1a001cbb6c9df88352134fb31c06f5c0d5)`()` <a id="structFRHAPI__PageMeta_1a001cbb6c9df88352134fb31c06f5c0d5"></a>

Returns the default value of Page.

#### `public inline FORCEINLINE int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a3b59d4c5b7b2e60bcebd8c6d4707c439)`()` <a id="structFRHAPI__PageMeta_1a3b59d4c5b7b2e60bcebd8c6d4707c439"></a>

Gets the value of Limit.

#### `public inline FORCEINLINE const int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a7d8cb4898fbab3fc90a88bfdf647978d)`() const` <a id="structFRHAPI__PageMeta_1a7d8cb4898fbab3fc90a88bfdf647978d"></a>

Gets the value of Limit.

#### `public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__PageMeta_1a930a9a0d26f3060d4f9825536bcca724)`(const int32 & NewValue)` <a id="structFRHAPI__PageMeta_1a930a9a0d26f3060d4f9825536bcca724"></a>

Sets the value of Limit.

#### `public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__PageMeta_1a6b257699da805285aee4ab3331657455)`(int32 && NewValue)` <a id="structFRHAPI__PageMeta_1a6b257699da805285aee4ab3331657455"></a>

Sets the value of Limit using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Limit`](#structFRHAPI__PageMeta_1a92ce76f859d933f230f418868c4b6313)`()` <a id="structFRHAPI__PageMeta_1a92ce76f859d933f230f418868c4b6313"></a>

Returns the default value of Limit.

#### `public inline FORCEINLINE int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a0979456f0923b0bdbb44e5cd660fad3a)`()` <a id="structFRHAPI__PageMeta_1a0979456f0923b0bdbb44e5cd660fad3a"></a>

Gets the value of Total.

#### `public inline FORCEINLINE const int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a2b45f5dec9f982c38337c37e15354b3a)`() const` <a id="structFRHAPI__PageMeta_1a2b45f5dec9f982c38337c37e15354b3a"></a>

Gets the value of Total.

#### `public inline FORCEINLINE void `[`SetTotal`](#structFRHAPI__PageMeta_1a15856897c50256d04c8d3de8805ceb99)`(const int32 & NewValue)` <a id="structFRHAPI__PageMeta_1a15856897c50256d04c8d3de8805ceb99"></a>

Sets the value of Total.

#### `public inline FORCEINLINE void `[`SetTotal`](#structFRHAPI__PageMeta_1a32eda26aed4271119bdbdea6a05d42fa)`(int32 && NewValue)` <a id="structFRHAPI__PageMeta_1a32eda26aed4271119bdbdea6a05d42fa"></a>

Sets the value of Total using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Total`](#structFRHAPI__PageMeta_1ac124485f7a9a398f621000b010baf4c5)`()` <a id="structFRHAPI__PageMeta_1ac124485f7a9a398f621000b010baf4c5"></a>

Returns the default value of Total.

