---
title: RHAPI_SupportLogPageResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SupportLogPageResponse`](#structFRHAPI__SupportLogPageResponse) | Response containing a page of support log entries.

## struct `FRHAPI_SupportLogPageResponse` <a id="structFRHAPI__SupportLogPageResponse"></a>

```
struct FRHAPI_SupportLogPageResponse
  : public FRHAPI_Model
```

Response containing a page of support log entries.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > `[`Logs`](#structFRHAPI__SupportLogPageResponse_1ada8fe5638001a88f52e6992317d0231a) | List of support log entries.
`public int32 `[`Page`](#structFRHAPI__SupportLogPageResponse_1ac86a1cf26a5f5a337f14a467be718582) | Current page number.
`public int32 `[`TotalPages`](#structFRHAPI__SupportLogPageResponse_1af8c476d8d737bf867c88772985c231c3) | Total number of pages available.
`public int32 `[`TotalEntries`](#structFRHAPI__SupportLogPageResponse_1a5faea2be383e5d3c2cc77e1a1db7cabb) | Total number of log entries available.
`public virtual bool `[`FromJson`](#structFRHAPI__SupportLogPageResponse_1a3a3d6f7ff79fe358137c5a7bbbe662af)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SupportLogPageResponse_1ad74faaf4f33a4e6ba2b9ef64d16338e0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1ac8b9b4f0f1f31047ef3dc09efea8b6d7)`()` | Gets the value of Logs.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1ab05b646df0e89598d64aa21ccaa9ae5d)`() const` | Gets the value of Logs.
`public inline FORCEINLINE void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1aca0b8bf6a99caad387b99a174f10199d)`(const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & NewValue)` | Sets the value of Logs.
`public inline FORCEINLINE void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1ab933acdfa6c465f51c9bb12979b7ab12)`(TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > && NewValue)` | Sets the value of Logs using move semantics.
`public inline FORCEINLINE int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1a6bbc6b17ed6faa7646d69dfbf9bd39f1)`()` | Gets the value of Page.
`public inline FORCEINLINE const int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1aa7351e7422e9093514bf7110c32a4c31)`() const` | Gets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1a45f3b8c1b264264baba86a7267302452)`(const int32 & NewValue)` | Sets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1a9731d88de3d57485ada5e2a94641a074)`(int32 && NewValue)` | Sets the value of Page using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Page`](#structFRHAPI__SupportLogPageResponse_1aae87d259614c237fe2c120afdb268290)`()` | Returns the default value of Page.
`public inline FORCEINLINE int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a1f78c166374e3dbdce9ab75688245c9c)`()` | Gets the value of TotalPages.
`public inline FORCEINLINE const int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1ac9aa62b8e4a663982cbdbbcfea061538)`() const` | Gets the value of TotalPages.
`public inline FORCEINLINE void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a3dba57c3d6c84256b7cc026855aeac55)`(const int32 & NewValue)` | Sets the value of TotalPages.
`public inline FORCEINLINE void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1ac54194c61aa40da239e5ad39d5687c48)`(int32 && NewValue)` | Sets the value of TotalPages using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalPages`](#structFRHAPI__SupportLogPageResponse_1a2ca09f1cac10aaef68466d8c6f7e0530)`()` | Returns the default value of TotalPages.
`public inline FORCEINLINE int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1a76ecb8381548a23131632787df8c875f)`()` | Gets the value of TotalEntries.
`public inline FORCEINLINE const int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1aafe5bb449682c294738f3e25b0c994a5)`() const` | Gets the value of TotalEntries.
`public inline FORCEINLINE void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1ac1a1b80243b2e20df9180832aaf58d69)`(const int32 & NewValue)` | Sets the value of TotalEntries.
`public inline FORCEINLINE void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1a19c0a66c922f276f6b6bbc3ab02c0171)`(int32 && NewValue)` | Sets the value of TotalEntries using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalEntries`](#structFRHAPI__SupportLogPageResponse_1a6d94e84af6aed5714a10f6c0007a4899)`()` | Returns the default value of TotalEntries.

### Members

#### `public TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > `[`Logs`](#structFRHAPI__SupportLogPageResponse_1ada8fe5638001a88f52e6992317d0231a) <a id="structFRHAPI__SupportLogPageResponse_1ada8fe5638001a88f52e6992317d0231a"></a>

List of support log entries.

#### `public int32 `[`Page`](#structFRHAPI__SupportLogPageResponse_1ac86a1cf26a5f5a337f14a467be718582) <a id="structFRHAPI__SupportLogPageResponse_1ac86a1cf26a5f5a337f14a467be718582"></a>

Current page number.

#### `public int32 `[`TotalPages`](#structFRHAPI__SupportLogPageResponse_1af8c476d8d737bf867c88772985c231c3) <a id="structFRHAPI__SupportLogPageResponse_1af8c476d8d737bf867c88772985c231c3"></a>

Total number of pages available.

#### `public int32 `[`TotalEntries`](#structFRHAPI__SupportLogPageResponse_1a5faea2be383e5d3c2cc77e1a1db7cabb) <a id="structFRHAPI__SupportLogPageResponse_1a5faea2be383e5d3c2cc77e1a1db7cabb"></a>

Total number of log entries available.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SupportLogPageResponse_1a3a3d6f7ff79fe358137c5a7bbbe662af)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SupportLogPageResponse_1a3a3d6f7ff79fe358137c5a7bbbe662af"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SupportLogPageResponse_1ad74faaf4f33a4e6ba2b9ef64d16338e0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SupportLogPageResponse_1ad74faaf4f33a4e6ba2b9ef64d16338e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1ac8b9b4f0f1f31047ef3dc09efea8b6d7)`()` <a id="structFRHAPI__SupportLogPageResponse_1ac8b9b4f0f1f31047ef3dc09efea8b6d7"></a>

Gets the value of Logs.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1ab05b646df0e89598d64aa21ccaa9ae5d)`() const` <a id="structFRHAPI__SupportLogPageResponse_1ab05b646df0e89598d64aa21ccaa9ae5d"></a>

Gets the value of Logs.

#### `public inline FORCEINLINE void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1aca0b8bf6a99caad387b99a174f10199d)`(const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1aca0b8bf6a99caad387b99a174f10199d"></a>

Sets the value of Logs.

#### `public inline FORCEINLINE void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1ab933acdfa6c465f51c9bb12979b7ab12)`(TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1ab933acdfa6c465f51c9bb12979b7ab12"></a>

Sets the value of Logs using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1a6bbc6b17ed6faa7646d69dfbf9bd39f1)`()` <a id="structFRHAPI__SupportLogPageResponse_1a6bbc6b17ed6faa7646d69dfbf9bd39f1"></a>

Gets the value of Page.

#### `public inline FORCEINLINE const int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1aa7351e7422e9093514bf7110c32a4c31)`() const` <a id="structFRHAPI__SupportLogPageResponse_1aa7351e7422e9093514bf7110c32a4c31"></a>

Gets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1a45f3b8c1b264264baba86a7267302452)`(const int32 & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a45f3b8c1b264264baba86a7267302452"></a>

Sets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1a9731d88de3d57485ada5e2a94641a074)`(int32 && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a9731d88de3d57485ada5e2a94641a074"></a>

Sets the value of Page using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Page`](#structFRHAPI__SupportLogPageResponse_1aae87d259614c237fe2c120afdb268290)`()` <a id="structFRHAPI__SupportLogPageResponse_1aae87d259614c237fe2c120afdb268290"></a>

Returns the default value of Page.

#### `public inline FORCEINLINE int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a1f78c166374e3dbdce9ab75688245c9c)`()` <a id="structFRHAPI__SupportLogPageResponse_1a1f78c166374e3dbdce9ab75688245c9c"></a>

Gets the value of TotalPages.

#### `public inline FORCEINLINE const int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1ac9aa62b8e4a663982cbdbbcfea061538)`() const` <a id="structFRHAPI__SupportLogPageResponse_1ac9aa62b8e4a663982cbdbbcfea061538"></a>

Gets the value of TotalPages.

#### `public inline FORCEINLINE void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a3dba57c3d6c84256b7cc026855aeac55)`(const int32 & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a3dba57c3d6c84256b7cc026855aeac55"></a>

Sets the value of TotalPages.

#### `public inline FORCEINLINE void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1ac54194c61aa40da239e5ad39d5687c48)`(int32 && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1ac54194c61aa40da239e5ad39d5687c48"></a>

Sets the value of TotalPages using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalPages`](#structFRHAPI__SupportLogPageResponse_1a2ca09f1cac10aaef68466d8c6f7e0530)`()` <a id="structFRHAPI__SupportLogPageResponse_1a2ca09f1cac10aaef68466d8c6f7e0530"></a>

Returns the default value of TotalPages.

#### `public inline FORCEINLINE int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1a76ecb8381548a23131632787df8c875f)`()` <a id="structFRHAPI__SupportLogPageResponse_1a76ecb8381548a23131632787df8c875f"></a>

Gets the value of TotalEntries.

#### `public inline FORCEINLINE const int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1aafe5bb449682c294738f3e25b0c994a5)`() const` <a id="structFRHAPI__SupportLogPageResponse_1aafe5bb449682c294738f3e25b0c994a5"></a>

Gets the value of TotalEntries.

#### `public inline FORCEINLINE void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1ac1a1b80243b2e20df9180832aaf58d69)`(const int32 & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1ac1a1b80243b2e20df9180832aaf58d69"></a>

Sets the value of TotalEntries.

#### `public inline FORCEINLINE void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1a19c0a66c922f276f6b6bbc3ab02c0171)`(int32 && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a19c0a66c922f276f6b6bbc3ab02c0171"></a>

Sets the value of TotalEntries using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalEntries`](#structFRHAPI__SupportLogPageResponse_1a6d94e84af6aed5714a10f6c0007a4899)`()` <a id="structFRHAPI__SupportLogPageResponse_1a6d94e84af6aed5714a10f6c0007a4899"></a>

Returns the default value of TotalEntries.

