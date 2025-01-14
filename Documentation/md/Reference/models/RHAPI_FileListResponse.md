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
`public inline TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1acc3b180ea67c3960ef5052a8a8d16a8d)`()` | Gets the value of Files.
`public inline const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1aa37c72e6396bf0c5e491d302e5af18a0)`() const` | Gets the value of Files.
`public inline void `[`SetFiles`](#structFRHAPI__FileListResponse_1a3bf8aef0b547a26a38003cc648e3fd3e)`(const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & NewValue)` | Sets the value of Files.
`public inline void `[`SetFiles`](#structFRHAPI__FileListResponse_1aba38b494070b386a9016018c0195f408)`(TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > && NewValue)` | Sets the value of Files using move semantics.

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

#### `public inline TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1acc3b180ea67c3960ef5052a8a8d16a8d)`()` <a id="structFRHAPI__FileListResponse_1acc3b180ea67c3960ef5052a8a8d16a8d"></a>

Gets the value of Files.

#### `public inline const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1aa37c72e6396bf0c5e491d302e5af18a0)`() const` <a id="structFRHAPI__FileListResponse_1aa37c72e6396bf0c5e491d302e5af18a0"></a>

Gets the value of Files.

#### `public inline void `[`SetFiles`](#structFRHAPI__FileListResponse_1a3bf8aef0b547a26a38003cc648e3fd3e)`(const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & NewValue)` <a id="structFRHAPI__FileListResponse_1a3bf8aef0b547a26a38003cc648e3fd3e"></a>

Sets the value of Files.

#### `public inline void `[`SetFiles`](#structFRHAPI__FileListResponse_1aba38b494070b386a9016018c0195f408)`(TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > && NewValue)` <a id="structFRHAPI__FileListResponse_1aba38b494070b386a9016018c0195f408"></a>

Sets the value of Files using move semantics.

