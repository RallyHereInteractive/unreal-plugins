---
title: RHAPI_FileListResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FileListResponse`](#structFRHAPI__FileListResponse) | 

## struct `FRHAPI_FileListResponse` <a id="structFRHAPI__FileListResponse"></a>

```
struct FRHAPI_FileListResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > `[`Files`](#structFRHAPI__FileListResponse_1a63b019ed0ecc338c10bc3cdb9a280212) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FileListResponse_1a34bbb5182135a5a7eea5da61bac1f2d8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FileListResponse_1a5d58dc884d5c07bee111472d0cc36508)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1af47b4cfbe508a6a3477fffaeddfcc336)`()` | Gets the value of Files.
`public inline FORCEINLINE const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1a2c90a2640478e8c8ff425b26c1e45f2b)`() const` | Gets the value of Files.
`public inline FORCEINLINE void `[`SetFiles`](#structFRHAPI__FileListResponse_1a2eaebacddef7fb91947d46db85d90856)`(const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & NewValue)` | Sets the value of Files.
`public inline FORCEINLINE void `[`SetFiles`](#structFRHAPI__FileListResponse_1a1abfc7fec1136b65b1a9584a16706bc6)`(TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > && NewValue)` | Sets the value of Files using move semantics.

### Members

#### `public TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > `[`Files`](#structFRHAPI__FileListResponse_1a63b019ed0ecc338c10bc3cdb9a280212) <a id="structFRHAPI__FileListResponse_1a63b019ed0ecc338c10bc3cdb9a280212"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FileListResponse_1a34bbb5182135a5a7eea5da61bac1f2d8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FileListResponse_1a34bbb5182135a5a7eea5da61bac1f2d8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FileListResponse_1a5d58dc884d5c07bee111472d0cc36508)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FileListResponse_1a5d58dc884d5c07bee111472d0cc36508"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1af47b4cfbe508a6a3477fffaeddfcc336)`()` <a id="structFRHAPI__FileListResponse_1af47b4cfbe508a6a3477fffaeddfcc336"></a>

Gets the value of Files.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1a2c90a2640478e8c8ff425b26c1e45f2b)`() const` <a id="structFRHAPI__FileListResponse_1a2c90a2640478e8c8ff425b26c1e45f2b"></a>

Gets the value of Files.

#### `public inline FORCEINLINE void `[`SetFiles`](#structFRHAPI__FileListResponse_1a2eaebacddef7fb91947d46db85d90856)`(const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & NewValue)` <a id="structFRHAPI__FileListResponse_1a2eaebacddef7fb91947d46db85d90856"></a>

Sets the value of Files.

#### `public inline FORCEINLINE void `[`SetFiles`](#structFRHAPI__FileListResponse_1a1abfc7fec1136b65b1a9584a16706bc6)`(TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > && NewValue)` <a id="structFRHAPI__FileListResponse_1a1abfc7fec1136b65b1a9584a16706bc6"></a>

Sets the value of Files using move semantics.

