---
title: RHAPI_PlayerReportList
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReportList`](#structFRHAPI__PlayerReportList) | 

## struct `FRHAPI_PlayerReportList` <a id="structFRHAPI__PlayerReportList"></a>

```
struct FRHAPI_PlayerReportList
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`Reports`](#structFRHAPI__PlayerReportList_1a2aa38535b7e7f169fe8618b8f73f6b23) | A list of player reports.
`public FString `[`NextCursor_Optional`](#structFRHAPI__PlayerReportList_1a4d45b8f1bb857affbfb798b0cceb5eca) | 
`public bool `[`NextCursor_IsSet`](#structFRHAPI__PlayerReportList_1a816afdbdd1ed75fdb91b846d256ccff7) | true if NextCursor_Optional has been set to a value
`public bool `[`NextCursor_IsNull`](#structFRHAPI__PlayerReportList_1abf992401cebfea5e5e8ff2e01e281059) | true if NextCursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportList_1a1e3d553a7d6beb07fd4fde3191df0177)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportList_1a9c90b1c71484c9ff6a966d287473ba7f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a934affeff580c059f156642f2cd41206)`()` | Gets the value of Reports.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a84befbd3470431fc49d82e925a138ceb)`() const` | Gets the value of Reports.
`public inline FORCEINLINE void `[`SetReports`](#structFRHAPI__PlayerReportList_1a5622cea416fb43055d4067d15b3bde6d)`(const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & NewValue)` | Sets the value of Reports.
`public inline FORCEINLINE void `[`SetReports`](#structFRHAPI__PlayerReportList_1ac66d4eb9b05ed85dd0a61b14d59526df)`(TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > && NewValue)` | Sets the value of Reports using move semantics.
`public inline FORCEINLINE FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1aeb06c190acebb1bcae4f1c9be82207b5)`()` | Gets the value of NextCursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1aaa84caa2f9e94d372ed98cae62d6493c)`() const` | Gets the value of NextCursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1addd0f687522dbeeaf59e7a6f76efefa6)`(const FString & DefaultValue) const` | Gets the value of NextCursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a8c6abf9ab7b902fc54482aeca1673ed5)`(FString & OutValue) const` | Fills OutValue with the value of NextCursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a848e4fcf369f9f02e2eff67c25f4d3ac)`()` | Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a7e85570ff6292e86786cf1632742ff95)`() const` | Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1a96ba563b9d673784a699d0d1c1a9ee51)`(const FString & NewValue)` | Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true.
`public inline FORCEINLINE void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1ac23ca6bc5435c9d80eb5a600a39a35ba)`(FString && NewValue)` | Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true using move semantics.
`public inline void `[`ClearNextCursor`](#structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127)`()` | Clears the value of NextCursor_Optional and sets NextCursor_IsSet to false.
`public inline FORCEINLINE void `[`SetNextCursorToNull`](#structFRHAPI__PlayerReportList_1a16da06565bc5f321e56e2aa3146f9ad6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsNextCursorNull`](#structFRHAPI__PlayerReportList_1ac4cb503147749ae17baaf9a7cf5e3585)`() const` | Checks whether NextCursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`Reports`](#structFRHAPI__PlayerReportList_1a2aa38535b7e7f169fe8618b8f73f6b23) <a id="structFRHAPI__PlayerReportList_1a2aa38535b7e7f169fe8618b8f73f6b23"></a>

A list of player reports.

#### `public FString `[`NextCursor_Optional`](#structFRHAPI__PlayerReportList_1a4d45b8f1bb857affbfb798b0cceb5eca) <a id="structFRHAPI__PlayerReportList_1a4d45b8f1bb857affbfb798b0cceb5eca"></a>

#### `public bool `[`NextCursor_IsSet`](#structFRHAPI__PlayerReportList_1a816afdbdd1ed75fdb91b846d256ccff7) <a id="structFRHAPI__PlayerReportList_1a816afdbdd1ed75fdb91b846d256ccff7"></a>

true if NextCursor_Optional has been set to a value

#### `public bool `[`NextCursor_IsNull`](#structFRHAPI__PlayerReportList_1abf992401cebfea5e5e8ff2e01e281059) <a id="structFRHAPI__PlayerReportList_1abf992401cebfea5e5e8ff2e01e281059"></a>

true if NextCursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportList_1a1e3d553a7d6beb07fd4fde3191df0177)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReportList_1a1e3d553a7d6beb07fd4fde3191df0177"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportList_1a9c90b1c71484c9ff6a966d287473ba7f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReportList_1a9c90b1c71484c9ff6a966d287473ba7f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a934affeff580c059f156642f2cd41206)`()` <a id="structFRHAPI__PlayerReportList_1a934affeff580c059f156642f2cd41206"></a>

Gets the value of Reports.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a84befbd3470431fc49d82e925a138ceb)`() const` <a id="structFRHAPI__PlayerReportList_1a84befbd3470431fc49d82e925a138ceb"></a>

Gets the value of Reports.

#### `public inline FORCEINLINE void `[`SetReports`](#structFRHAPI__PlayerReportList_1a5622cea416fb43055d4067d15b3bde6d)`(const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & NewValue)` <a id="structFRHAPI__PlayerReportList_1a5622cea416fb43055d4067d15b3bde6d"></a>

Sets the value of Reports.

#### `public inline FORCEINLINE void `[`SetReports`](#structFRHAPI__PlayerReportList_1ac66d4eb9b05ed85dd0a61b14d59526df)`(TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > && NewValue)` <a id="structFRHAPI__PlayerReportList_1ac66d4eb9b05ed85dd0a61b14d59526df"></a>

Sets the value of Reports using move semantics.

#### `public inline FORCEINLINE FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1aeb06c190acebb1bcae4f1c9be82207b5)`()` <a id="structFRHAPI__PlayerReportList_1aeb06c190acebb1bcae4f1c9be82207b5"></a>

Gets the value of NextCursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1aaa84caa2f9e94d372ed98cae62d6493c)`() const` <a id="structFRHAPI__PlayerReportList_1aaa84caa2f9e94d372ed98cae62d6493c"></a>

Gets the value of NextCursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1addd0f687522dbeeaf59e7a6f76efefa6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportList_1addd0f687522dbeeaf59e7a6f76efefa6"></a>

Gets the value of NextCursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a8c6abf9ab7b902fc54482aeca1673ed5)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportList_1a8c6abf9ab7b902fc54482aeca1673ed5"></a>

Fills OutValue with the value of NextCursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a848e4fcf369f9f02e2eff67c25f4d3ac)`()` <a id="structFRHAPI__PlayerReportList_1a848e4fcf369f9f02e2eff67c25f4d3ac"></a>

Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a7e85570ff6292e86786cf1632742ff95)`() const` <a id="structFRHAPI__PlayerReportList_1a7e85570ff6292e86786cf1632742ff95"></a>

Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1a96ba563b9d673784a699d0d1c1a9ee51)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportList_1a96ba563b9d673784a699d0d1c1a9ee51"></a>

Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1ac23ca6bc5435c9d80eb5a600a39a35ba)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportList_1ac23ca6bc5435c9d80eb5a600a39a35ba"></a>

Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true using move semantics.

#### `public inline void `[`ClearNextCursor`](#structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127)`()` <a id="structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127"></a>

Clears the value of NextCursor_Optional and sets NextCursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetNextCursorToNull`](#structFRHAPI__PlayerReportList_1a16da06565bc5f321e56e2aa3146f9ad6)`()` <a id="structFRHAPI__PlayerReportList_1a16da06565bc5f321e56e2aa3146f9ad6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsNextCursorNull`](#structFRHAPI__PlayerReportList_1ac4cb503147749ae17baaf9a7cf5e3585)`() const` <a id="structFRHAPI__PlayerReportList_1ac4cb503147749ae17baaf9a7cf5e3585"></a>

Checks whether NextCursor_Optional is set to null.

