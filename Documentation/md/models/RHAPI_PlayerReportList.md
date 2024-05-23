# group `RHAPI_PlayerReportList` <a id="group__RHAPI__PlayerReportList"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportList_1a35c3b7d3bf0a1200a5e3b7766e9d6791)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportList_1af52fdacc5ab1edb915ff30eca7971f9a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a87faa5f2a1978aa23154bd3799bcc58c)`()` | Gets the value of Reports.
`public inline const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a2c771f452dc175ad3ded707c81e84d46)`() const` | Gets the value of Reports.
`public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a8940641b4941728f428fdf15d3e6b5bd)`(const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & NewValue)` | Sets the value of Reports.
`public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a27f6c87b64e042b64290037f747a1e81)`(TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > && NewValue)` | Sets the value of Reports using move semantics.
`public inline FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a6cd14617f35a73d16d0459839cfb3628)`()` | Gets the value of NextCursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1aa7aea1554c08eaebaf53291262b25065)`() const` | Gets the value of NextCursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1af907510cb4338e2d639000f4e93ea437)`(const FString & DefaultValue) const` | Gets the value of NextCursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a056873628b3064f690b0e3b3b95e2a82)`(FString & OutValue) const` | Fills OutValue with the value of NextCursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a5fcb509d158e73cf0d8f2c1241734915)`()` | Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a86273133028498b69add4b7e4f1561f0)`() const` | Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1a71055ba7d14a00d592706d38b4919959)`(const FString & NewValue)` | Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true.
`public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1ad36da1e9f842712316b2991aa074d0a7)`(FString && NewValue)` | Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true using move semantics.
`public inline void `[`ClearNextCursor`](#structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127)`()` | Clears the value of NextCursor_Optional and sets NextCursor_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`Reports`](#structFRHAPI__PlayerReportList_1a2aa38535b7e7f169fe8618b8f73f6b23) <a id="structFRHAPI__PlayerReportList_1a2aa38535b7e7f169fe8618b8f73f6b23"></a>

A list of player reports.

#### `public FString `[`NextCursor_Optional`](#structFRHAPI__PlayerReportList_1a4d45b8f1bb857affbfb798b0cceb5eca) <a id="structFRHAPI__PlayerReportList_1a4d45b8f1bb857affbfb798b0cceb5eca"></a>

#### `public bool `[`NextCursor_IsSet`](#structFRHAPI__PlayerReportList_1a816afdbdd1ed75fdb91b846d256ccff7) <a id="structFRHAPI__PlayerReportList_1a816afdbdd1ed75fdb91b846d256ccff7"></a>

true if NextCursor_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportList_1a35c3b7d3bf0a1200a5e3b7766e9d6791)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReportList_1a35c3b7d3bf0a1200a5e3b7766e9d6791"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportList_1af52fdacc5ab1edb915ff30eca7971f9a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerReportList_1af52fdacc5ab1edb915ff30eca7971f9a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a87faa5f2a1978aa23154bd3799bcc58c)`()` <a id="structFRHAPI__PlayerReportList_1a87faa5f2a1978aa23154bd3799bcc58c"></a>

Gets the value of Reports.

#### `public inline const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & `[`GetReports`](#structFRHAPI__PlayerReportList_1a2c771f452dc175ad3ded707c81e84d46)`() const` <a id="structFRHAPI__PlayerReportList_1a2c771f452dc175ad3ded707c81e84d46"></a>

Gets the value of Reports.

#### `public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a8940641b4941728f428fdf15d3e6b5bd)`(const TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > & NewValue)` <a id="structFRHAPI__PlayerReportList_1a8940641b4941728f428fdf15d3e6b5bd"></a>

Sets the value of Reports.

#### `public inline void `[`SetReports`](#structFRHAPI__PlayerReportList_1a27f6c87b64e042b64290037f747a1e81)`(TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > && NewValue)` <a id="structFRHAPI__PlayerReportList_1a27f6c87b64e042b64290037f747a1e81"></a>

Sets the value of Reports using move semantics.

#### `public inline FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a6cd14617f35a73d16d0459839cfb3628)`()` <a id="structFRHAPI__PlayerReportList_1a6cd14617f35a73d16d0459839cfb3628"></a>

Gets the value of NextCursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1aa7aea1554c08eaebaf53291262b25065)`() const` <a id="structFRHAPI__PlayerReportList_1aa7aea1554c08eaebaf53291262b25065"></a>

Gets the value of NextCursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1af907510cb4338e2d639000f4e93ea437)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportList_1af907510cb4338e2d639000f4e93ea437"></a>

Gets the value of NextCursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNextCursor`](#structFRHAPI__PlayerReportList_1a056873628b3064f690b0e3b3b95e2a82)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportList_1a056873628b3064f690b0e3b3b95e2a82"></a>

Fills OutValue with the value of NextCursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a5fcb509d158e73cf0d8f2c1241734915)`()` <a id="structFRHAPI__PlayerReportList_1a5fcb509d158e73cf0d8f2c1241734915"></a>

Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNextCursorOrNull`](#structFRHAPI__PlayerReportList_1a86273133028498b69add4b7e4f1561f0)`() const` <a id="structFRHAPI__PlayerReportList_1a86273133028498b69add4b7e4f1561f0"></a>

Returns a pointer to NextCursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1a71055ba7d14a00d592706d38b4919959)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportList_1a71055ba7d14a00d592706d38b4919959"></a>

Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true.

#### `public inline void `[`SetNextCursor`](#structFRHAPI__PlayerReportList_1ad36da1e9f842712316b2991aa074d0a7)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportList_1ad36da1e9f842712316b2991aa074d0a7"></a>

Sets the value of NextCursor_Optional and also sets NextCursor_IsSet to true using move semantics.

#### `public inline void `[`ClearNextCursor`](#structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127)`()` <a id="structFRHAPI__PlayerReportList_1ac1b15032630eadb1e319eebebaa19127"></a>

Clears the value of NextCursor_Optional and sets NextCursor_IsSet to false.

