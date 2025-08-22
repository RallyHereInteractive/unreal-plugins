---
title: RHAPI_LoginHistoryPage
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginHistoryPage`](#structFRHAPI__LoginHistoryPage) | 

## struct `FRHAPI_LoginHistoryPage` <a id="structFRHAPI__LoginHistoryPage"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryPage_1a81e7af4eeb918870bd207dea0080bfbb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1afaacf8b5fc958e86e3471a5c4ed1f281)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1ae61c0e0d173563c63abca9c564de4975)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1a2e101a1247b74ec4120c7c5174b9de61)`(const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1a752201c17a084f9b94f47a88411ea331)`(TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FORCEINLINE FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a90f8e14526de8afab3fc3b871ac243de)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a120e1f9e770523cc42caa0f4f3853177)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1ae8f4f452af49b420286130fa31aaa515)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a066e4d93f7d798e067eb1723c5d409c4)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1a396147db62b18011ba99fbd71e08378e)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1a18a03ce26c27b114657f4f19e41b3426)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a9395d4a21780f1df542a469972ace59c)`(const FString & NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.
`public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a58c874fd294b7befa1a2dbbfb640b44f)`(FString && NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.
`public inline void `[`ClearContinuationToken`](#structFRHAPI__LoginHistoryPage_1a0aadae52cf25417902e09c1378374209)`()` | Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryPage_1a81e7af4eeb918870bd207dea0080bfbb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LoginHistoryPage_1a81e7af4eeb918870bd207dea0080bfbb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1afaacf8b5fc958e86e3471a5c4ed1f281)`()` <a id="structFRHAPI__LoginHistoryPage_1afaacf8b5fc958e86e3471a5c4ed1f281"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__LoginHistoryPage_1ae61c0e0d173563c63abca9c564de4975)`() const` <a id="structFRHAPI__LoginHistoryPage_1ae61c0e0d173563c63abca9c564de4975"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1a2e101a1247b74ec4120c7c5174b9de61)`(const TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > & NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a2e101a1247b74ec4120c7c5174b9de61"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LoginHistoryPage_1a752201c17a084f9b94f47a88411ea331)`(TArray< `[`FRHAPI_LoginHistoryEntry`](RHAPI_LoginHistoryEntry.md#structFRHAPI__LoginHistoryEntry)` > && NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a752201c17a084f9b94f47a88411ea331"></a>

Sets the value of Entries using move semantics.

#### `public inline FORCEINLINE FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a90f8e14526de8afab3fc3b871ac243de)`()` <a id="structFRHAPI__LoginHistoryPage_1a90f8e14526de8afab3fc3b871ac243de"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a120e1f9e770523cc42caa0f4f3853177)`() const` <a id="structFRHAPI__LoginHistoryPage_1a120e1f9e770523cc42caa0f4f3853177"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1ae8f4f452af49b420286130fa31aaa515)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryPage_1ae8f4f452af49b420286130fa31aaa515"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a066e4d93f7d798e067eb1723c5d409c4)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryPage_1a066e4d93f7d798e067eb1723c5d409c4"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1a396147db62b18011ba99fbd71e08378e)`()` <a id="structFRHAPI__LoginHistoryPage_1a396147db62b18011ba99fbd71e08378e"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__LoginHistoryPage_1a18a03ce26c27b114657f4f19e41b3426)`() const` <a id="structFRHAPI__LoginHistoryPage_1a18a03ce26c27b114657f4f19e41b3426"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a9395d4a21780f1df542a469972ace59c)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a9395d4a21780f1df542a469972ace59c"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__LoginHistoryPage_1a58c874fd294b7befa1a2dbbfb640b44f)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryPage_1a58c874fd294b7befa1a2dbbfb640b44f"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__LoginHistoryPage_1a0aadae52cf25417902e09c1378374209)`()` <a id="structFRHAPI__LoginHistoryPage_1a0aadae52cf25417902e09c1378374209"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

