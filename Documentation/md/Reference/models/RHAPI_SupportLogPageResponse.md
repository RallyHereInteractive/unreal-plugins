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
`public inline TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1a11a242440b3e4f056eee2ae2e2c2f393)`()` | Gets the value of Logs.
`public inline const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1abc663e8dbed09310fe00671bb88731c0)`() const` | Gets the value of Logs.
`public inline void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1a2f99b20d288aa0edd6b167632e0df05d)`(const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & NewValue)` | Sets the value of Logs.
`public inline void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1a0d6a257f65582ec6ccd105ad542f7ee3)`(TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > && NewValue)` | Sets the value of Logs using move semantics.
`public inline int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1a252b7e23b95f7d9b0aa8a02f80f8df4a)`()` | Gets the value of Page.
`public inline const int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1af5dabbfef2ba1d9098a8eb392307385c)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1ac4046126190ac95661b7bfe9f56864bb)`(const int32 & NewValue)` | Sets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1a2679438275e77b56bf95e41d30ae50c2)`(int32 && NewValue)` | Sets the value of Page using move semantics.
`public inline bool `[`IsPageDefaultValue`](#structFRHAPI__SupportLogPageResponse_1af70fbe8e96ef68a95efde1c28adad3ad)`() const` | Returns true if Page matches the default value.
`public inline void `[`SetPageToDefault`](#structFRHAPI__SupportLogPageResponse_1a6f761c9616887194503e8ff3723d8d8d)`()` | Sets the value of Page to its default
`public inline int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a94103535e1a78eb58f2140e95003660d)`()` | Gets the value of TotalPages.
`public inline const int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a2da90640418a77cfc0873a815c192ddf)`() const` | Gets the value of TotalPages.
`public inline void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1ac6ce10a7ff69251fbd98ee809cd21e71)`(const int32 & NewValue)` | Sets the value of TotalPages.
`public inline void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a279e58e1116df59418fa252207664539)`(int32 && NewValue)` | Sets the value of TotalPages using move semantics.
`public inline bool `[`IsTotalPagesDefaultValue`](#structFRHAPI__SupportLogPageResponse_1ae15d6891cea46c5dcf063631feb4d225)`() const` | Returns true if TotalPages matches the default value.
`public inline void `[`SetTotalPagesToDefault`](#structFRHAPI__SupportLogPageResponse_1ab4afe19fa948bf6972edfc8bab51519d)`()` | Sets the value of TotalPages to its default
`public inline int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1ada3c41424f8742e2bdab186bc5f0171f)`()` | Gets the value of TotalEntries.
`public inline const int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1aec93a8448d388616b2a9f4c10e022019)`() const` | Gets the value of TotalEntries.
`public inline void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1ab454da75b7ad3a1c863ad2e2e467ac59)`(const int32 & NewValue)` | Sets the value of TotalEntries.
`public inline void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1a17b83f5203efd17625efec8804f754a3)`(int32 && NewValue)` | Sets the value of TotalEntries using move semantics.
`public inline bool `[`IsTotalEntriesDefaultValue`](#structFRHAPI__SupportLogPageResponse_1a62e4b7db47238cff71406ed5bc4ef017)`() const` | Returns true if TotalEntries matches the default value.
`public inline void `[`SetTotalEntriesToDefault`](#structFRHAPI__SupportLogPageResponse_1aa73ef8e1d09ef4a82da1380dd53206f4)`()` | Sets the value of TotalEntries to its default

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

#### `public inline TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1a11a242440b3e4f056eee2ae2e2c2f393)`()` <a id="structFRHAPI__SupportLogPageResponse_1a11a242440b3e4f056eee2ae2e2c2f393"></a>

Gets the value of Logs.

#### `public inline const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & `[`GetLogs`](#structFRHAPI__SupportLogPageResponse_1abc663e8dbed09310fe00671bb88731c0)`() const` <a id="structFRHAPI__SupportLogPageResponse_1abc663e8dbed09310fe00671bb88731c0"></a>

Gets the value of Logs.

#### `public inline void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1a2f99b20d288aa0edd6b167632e0df05d)`(const TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a2f99b20d288aa0edd6b167632e0df05d"></a>

Sets the value of Logs.

#### `public inline void `[`SetLogs`](#structFRHAPI__SupportLogPageResponse_1a0d6a257f65582ec6ccd105ad542f7ee3)`(TArray< `[`FRHAPI_SupportLogEntry`](RHAPI_SupportLogEntry.md#structFRHAPI__SupportLogEntry)` > && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a0d6a257f65582ec6ccd105ad542f7ee3"></a>

Sets the value of Logs using move semantics.

#### `public inline int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1a252b7e23b95f7d9b0aa8a02f80f8df4a)`()` <a id="structFRHAPI__SupportLogPageResponse_1a252b7e23b95f7d9b0aa8a02f80f8df4a"></a>

Gets the value of Page.

#### `public inline const int32 & `[`GetPage`](#structFRHAPI__SupportLogPageResponse_1af5dabbfef2ba1d9098a8eb392307385c)`() const` <a id="structFRHAPI__SupportLogPageResponse_1af5dabbfef2ba1d9098a8eb392307385c"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1ac4046126190ac95661b7bfe9f56864bb)`(const int32 & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1ac4046126190ac95661b7bfe9f56864bb"></a>

Sets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__SupportLogPageResponse_1a2679438275e77b56bf95e41d30ae50c2)`(int32 && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a2679438275e77b56bf95e41d30ae50c2"></a>

Sets the value of Page using move semantics.

#### `public inline bool `[`IsPageDefaultValue`](#structFRHAPI__SupportLogPageResponse_1af70fbe8e96ef68a95efde1c28adad3ad)`() const` <a id="structFRHAPI__SupportLogPageResponse_1af70fbe8e96ef68a95efde1c28adad3ad"></a>

Returns true if Page matches the default value.

#### `public inline void `[`SetPageToDefault`](#structFRHAPI__SupportLogPageResponse_1a6f761c9616887194503e8ff3723d8d8d)`()` <a id="structFRHAPI__SupportLogPageResponse_1a6f761c9616887194503e8ff3723d8d8d"></a>

Sets the value of Page to its default

#### `public inline int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a94103535e1a78eb58f2140e95003660d)`()` <a id="structFRHAPI__SupportLogPageResponse_1a94103535e1a78eb58f2140e95003660d"></a>

Gets the value of TotalPages.

#### `public inline const int32 & `[`GetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a2da90640418a77cfc0873a815c192ddf)`() const` <a id="structFRHAPI__SupportLogPageResponse_1a2da90640418a77cfc0873a815c192ddf"></a>

Gets the value of TotalPages.

#### `public inline void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1ac6ce10a7ff69251fbd98ee809cd21e71)`(const int32 & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1ac6ce10a7ff69251fbd98ee809cd21e71"></a>

Sets the value of TotalPages.

#### `public inline void `[`SetTotalPages`](#structFRHAPI__SupportLogPageResponse_1a279e58e1116df59418fa252207664539)`(int32 && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a279e58e1116df59418fa252207664539"></a>

Sets the value of TotalPages using move semantics.

#### `public inline bool `[`IsTotalPagesDefaultValue`](#structFRHAPI__SupportLogPageResponse_1ae15d6891cea46c5dcf063631feb4d225)`() const` <a id="structFRHAPI__SupportLogPageResponse_1ae15d6891cea46c5dcf063631feb4d225"></a>

Returns true if TotalPages matches the default value.

#### `public inline void `[`SetTotalPagesToDefault`](#structFRHAPI__SupportLogPageResponse_1ab4afe19fa948bf6972edfc8bab51519d)`()` <a id="structFRHAPI__SupportLogPageResponse_1ab4afe19fa948bf6972edfc8bab51519d"></a>

Sets the value of TotalPages to its default

#### `public inline int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1ada3c41424f8742e2bdab186bc5f0171f)`()` <a id="structFRHAPI__SupportLogPageResponse_1ada3c41424f8742e2bdab186bc5f0171f"></a>

Gets the value of TotalEntries.

#### `public inline const int32 & `[`GetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1aec93a8448d388616b2a9f4c10e022019)`() const` <a id="structFRHAPI__SupportLogPageResponse_1aec93a8448d388616b2a9f4c10e022019"></a>

Gets the value of TotalEntries.

#### `public inline void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1ab454da75b7ad3a1c863ad2e2e467ac59)`(const int32 & NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1ab454da75b7ad3a1c863ad2e2e467ac59"></a>

Sets the value of TotalEntries.

#### `public inline void `[`SetTotalEntries`](#structFRHAPI__SupportLogPageResponse_1a17b83f5203efd17625efec8804f754a3)`(int32 && NewValue)` <a id="structFRHAPI__SupportLogPageResponse_1a17b83f5203efd17625efec8804f754a3"></a>

Sets the value of TotalEntries using move semantics.

#### `public inline bool `[`IsTotalEntriesDefaultValue`](#structFRHAPI__SupportLogPageResponse_1a62e4b7db47238cff71406ed5bc4ef017)`() const` <a id="structFRHAPI__SupportLogPageResponse_1a62e4b7db47238cff71406ed5bc4ef017"></a>

Returns true if TotalEntries matches the default value.

#### `public inline void `[`SetTotalEntriesToDefault`](#structFRHAPI__SupportLogPageResponse_1aa73ef8e1d09ef4a82da1380dd53206f4)`()` <a id="structFRHAPI__SupportLogPageResponse_1aa73ef8e1d09ef4a82da1380dd53206f4"></a>

Sets the value of TotalEntries to its default

