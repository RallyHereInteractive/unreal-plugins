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
`public inline TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1ab6edd7ea578698c8f0090a0186e583c8)`()` | Gets the value of Reports.
`public inline const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1af98d91c7a1bab97e33b54042747fb4c3)`() const` | Gets the value of Reports.
`public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a8940641b4941728f428fdf15d3e6b5bd)`(const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & NewValue)` | Sets the value of Reports.
`public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a27f6c87b64e042b64290037f747a1e81)`(TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > && NewValue)` | Sets the value of Reports using move semantics.
`public inline FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a3c2eb0e0690f746319be79df03489e9d)`()` | Gets the value of NextCursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a98bda83e44bef5db3236e5f034db3d25)`() const` | Gets the value of NextCursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a420250a38561c6a137c144127017f107)`(const FString & DefaultValue) const` | Gets the value of NextCursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a056873628b3064f690b0e3b3b95e2a82)`(FString & OutValue) const` | Fills OutValue with the value of NextCursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a66b2cc56b1e616faaff4d20ad7c27b51)`()` | Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1aaaa51a99f338bdb396576f651f6e3fee)`() const` | Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1a71055ba7d14a00d592706d38b4919959)`(const FString & NewValue)` | Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true.
`public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1ad36da1e9f842712316b2991aa074d0a7)`(FString && NewValue)` | Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true using move semantics.
`public inline void `[`ClearNextCursor`](#structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127)`()` | Clears the value of NextCursor_Optional and sets NextCursor_IsSet to false.
`public inline bool `[`IsNextCursorSet`](#structFRHAPI__PlayerReportList_1aed5bf702967bc137744497327c8003ad)`() const` | Checks whether NextCursor_Optional has been set.
`public inline void `[`SetNextCursorToNull`](#structFRHAPI__PlayerReportList_1aba15104e70e2f7429a0d0d781b86f10c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsNextCursorNull`](#structFRHAPI__PlayerReportList_1adb418722a21db90c5020bc8a5b430221)`() const` | Checks whether NextCursor_Optional is set to null.

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

#### `public inline TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1ab6edd7ea578698c8f0090a0186e583c8)`()` <a id="structFRHAPI__PlayerReportList_1ab6edd7ea578698c8f0090a0186e583c8"></a>

Gets the value of Reports.

#### `public inline const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1af98d91c7a1bab97e33b54042747fb4c3)`() const` <a id="structFRHAPI__PlayerReportList_1af98d91c7a1bab97e33b54042747fb4c3"></a>

Gets the value of Reports.

#### `public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a8940641b4941728f428fdf15d3e6b5bd)`(const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & NewValue)` <a id="structFRHAPI__PlayerReportList_1a8940641b4941728f428fdf15d3e6b5bd"></a>

Sets the value of Reports.

#### `public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a27f6c87b64e042b64290037f747a1e81)`(TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > && NewValue)` <a id="structFRHAPI__PlayerReportList_1a27f6c87b64e042b64290037f747a1e81"></a>

Sets the value of Reports using move semantics.

#### `public inline FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a3c2eb0e0690f746319be79df03489e9d)`()` <a id="structFRHAPI__PlayerReportList_1a3c2eb0e0690f746319be79df03489e9d"></a>

Gets the value of NextCursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a98bda83e44bef5db3236e5f034db3d25)`() const` <a id="structFRHAPI__PlayerReportList_1a98bda83e44bef5db3236e5f034db3d25"></a>

Gets the value of NextCursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a420250a38561c6a137c144127017f107)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportList_1a420250a38561c6a137c144127017f107"></a>

Gets the value of NextCursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a056873628b3064f690b0e3b3b95e2a82)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportList_1a056873628b3064f690b0e3b3b95e2a82"></a>

Fills OutValue with the value of NextCursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a66b2cc56b1e616faaff4d20ad7c27b51)`()` <a id="structFRHAPI__PlayerReportList_1a66b2cc56b1e616faaff4d20ad7c27b51"></a>

Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1aaaa51a99f338bdb396576f651f6e3fee)`() const` <a id="structFRHAPI__PlayerReportList_1aaaa51a99f338bdb396576f651f6e3fee"></a>

Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1a71055ba7d14a00d592706d38b4919959)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportList_1a71055ba7d14a00d592706d38b4919959"></a>

Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true.

#### `public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1ad36da1e9f842712316b2991aa074d0a7)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportList_1ad36da1e9f842712316b2991aa074d0a7"></a>

Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true using move semantics.

#### `public inline void `[`ClearNextCursor`](#structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127)`()` <a id="structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127"></a>

Clears the value of NextCursor_Optional and sets NextCursor_IsSet to false.

#### `public inline bool `[`IsNextCursorSet`](#structFRHAPI__PlayerReportList_1aed5bf702967bc137744497327c8003ad)`() const` <a id="structFRHAPI__PlayerReportList_1aed5bf702967bc137744497327c8003ad"></a>

Checks whether NextCursor_Optional has been set.

#### `public inline void `[`SetNextCursorToNull`](#structFRHAPI__PlayerReportList_1aba15104e70e2f7429a0d0d781b86f10c)`()` <a id="structFRHAPI__PlayerReportList_1aba15104e70e2f7429a0d0d781b86f10c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsNextCursorNull`](#structFRHAPI__PlayerReportList_1adb418722a21db90c5020bc8a5b430221)`() const` <a id="structFRHAPI__PlayerReportList_1adb418722a21db90c5020bc8a5b430221"></a>

Checks whether NextCursor_Optional is set to null.

