# group `RHAPI_LoginHistoryPage` <a id="group__RHAPI__LoginHistoryPage"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginHistoryPage`](#structFRHAPI__LoginHistoryPage) | 

---
title: FRHAPI_LoginHistoryPage
---

```
struct FRHAPI_LoginHistoryPage
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > `[`Entries`](#structFRHAPI__LoginHistoryPage_1ab49054edc49807c4285bbbd0b4bfc747) | The login history entries.
`public FString `[`ContinuationToken_Optional`](#structFRHAPI__LoginHistoryPage_1a7f15192e09602cfab9b46bbd8a882260) | Token to retrieve the next page of results.
`public bool `[`ContinuationToken_IsSet`](#structFRHAPI__LoginHistoryPage_1aa7efa46fc736debb688497937a2930ed) | true if ContinuationToken_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LoginHistoryPage_1a9320e1edf84affdb1e680ccab65de6e9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryPage_1ab883a6c0ac45551f15a670fa4b8a0f7d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1ada05a2055110bde2ffbbdc471a08a945)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1a3ab6fe984b9b54340ff6d0366ba7d0a0)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1af2b61d09cdd51caa038820292645723d)`(const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1a628687d0dac31727c65dab6cb792a056)`(TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a4e21a51b6db0c5fd24e0df19eceb4a0b)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a96ff587bd15a62f721838bb4d0fe5d64)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a97a2954904ffb85931b7a0e10f78efcd)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a079a293895338cac8631b597714efd76)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1ad900d1c99205342055827692df272db3)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1ad02a4642ecb4f20fae1b546be2dba4a0)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a781b011aa9422a2e9140a0bb6047cdae)`(const FString & NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.
`public inline void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a404c404e0186e776bd2c8e92b964f813)`(FString && NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.
`public inline void `[`ClearContinuationToken`](#structFRHAPI__LoginHistoryPage_1a0aadae52cf25417902e09c1378374209)`()` | Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.
`public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__LoginHistoryPage_1a556005273c3001a10dfb17feba6f2084)`() const` | Checks whether ContinuationToken_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > `[`Entries`](#structFRHAPI__LoginHistoryPage_1ab49054edc49807c4285bbbd0b4bfc747) <a id="structFRHAPI__LoginHistoryPage_1ab49054edc49807c4285bbbd0b4bfc747"></a>

The login history entries.

#### `public FString `[`ContinuationToken_Optional`](#structFRHAPI__LoginHistoryPage_1a7f15192e09602cfab9b46bbd8a882260) <a id="structFRHAPI__LoginHistoryPage_1a7f15192e09602cfab9b46bbd8a882260"></a>

Token to retrieve the next page of results.

#### `public bool `[`ContinuationToken_IsSet`](#structFRHAPI__LoginHistoryPage_1aa7efa46fc736debb688497937a2930ed) <a id="structFRHAPI__LoginHistoryPage_1aa7efa46fc736debb688497937a2930ed"></a>

true if ContinuationToken_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginHistoryPage_1a9320e1edf84affdb1e680ccab65de6e9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginHistoryPage_1a9320e1edf84affdb1e680ccab65de6e9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryPage_1ab883a6c0ac45551f15a670fa4b8a0f7d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LoginHistoryPage_1ab883a6c0ac45551f15a670fa4b8a0f7d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1ada05a2055110bde2ffbbdc471a08a945)`()` <a id="structFRHAPI__LoginHistoryPage_1ada05a2055110bde2ffbbdc471a08a945"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1a3ab6fe984b9b54340ff6d0366ba7d0a0)`() const` <a id="structFRHAPI__LoginHistoryPage_1a3ab6fe984b9b54340ff6d0366ba7d0a0"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1af2b61d09cdd51caa038820292645723d)`(const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & NewValue)` <a id="structFRHAPI__LoginHistoryPage_1af2b61d09cdd51caa038820292645723d"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1a628687d0dac31727c65dab6cb792a056)`(TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > && NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a628687d0dac31727c65dab6cb792a056"></a>

Sets the value of Entries using move semantics.

#### `public inline FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a4e21a51b6db0c5fd24e0df19eceb4a0b)`()` <a id="structFRHAPI__LoginHistoryPage_1a4e21a51b6db0c5fd24e0df19eceb4a0b"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a96ff587bd15a62f721838bb4d0fe5d64)`() const` <a id="structFRHAPI__LoginHistoryPage_1a96ff587bd15a62f721838bb4d0fe5d64"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a97a2954904ffb85931b7a0e10f78efcd)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryPage_1a97a2954904ffb85931b7a0e10f78efcd"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a079a293895338cac8631b597714efd76)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryPage_1a079a293895338cac8631b597714efd76"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1ad900d1c99205342055827692df272db3)`()` <a id="structFRHAPI__LoginHistoryPage_1ad900d1c99205342055827692df272db3"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1ad02a4642ecb4f20fae1b546be2dba4a0)`() const` <a id="structFRHAPI__LoginHistoryPage_1ad02a4642ecb4f20fae1b546be2dba4a0"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a781b011aa9422a2e9140a0bb6047cdae)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a781b011aa9422a2e9140a0bb6047cdae"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a404c404e0186e776bd2c8e92b964f813)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a404c404e0186e776bd2c8e92b964f813"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__LoginHistoryPage_1a0aadae52cf25417902e09c1378374209)`()` <a id="structFRHAPI__LoginHistoryPage_1a0aadae52cf25417902e09c1378374209"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

#### `public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__LoginHistoryPage_1a556005273c3001a10dfb17feba6f2084)`() const` <a id="structFRHAPI__LoginHistoryPage_1a556005273c3001a10dfb17feba6f2084"></a>

Checks whether ContinuationToken_Optional has been set.

