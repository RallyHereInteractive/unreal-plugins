---
title: RHAPI_ConnectionInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ConnectionInfo`](#structFRHAPI__ConnectionInfo) | Connection info about the requesting client.

## struct `FRHAPI_ConnectionInfo` <a id="structFRHAPI__ConnectionInfo"></a>

```
struct FRHAPI_ConnectionInfo
  : public FRHAPI_Model
```

Connection info about the requesting client.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Ip`](#structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6) | IP that sent the request.
`public virtual bool `[`FromJson`](#structFRHAPI__ConnectionInfo_1a7a97518174b88d40de444e69caccd7b5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ConnectionInfo_1aec514341f0d2a170773f8ee93f34cc07)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a301eedd862745404ca8821025a67a43b)`()` | Gets the value of Ip.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1ab3bb2af226dbf6d33b174548f5c9e63e)`() const` | Gets the value of Ip.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__ConnectionInfo_1a40d64d32f4144e0031cd9eb08078c53c)`(const FString & NewValue)` | Sets the value of Ip.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__ConnectionInfo_1abe0ee3e5d129d9ee8da90d2e0bfb7c75)`(FString && NewValue)` | Sets the value of Ip using move semantics.

### Members

#### `public FString `[`Ip`](#structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6) <a id="structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6"></a>

IP that sent the request.

#### `public virtual bool `[`FromJson`](#structFRHAPI__ConnectionInfo_1a7a97518174b88d40de444e69caccd7b5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ConnectionInfo_1a7a97518174b88d40de444e69caccd7b5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ConnectionInfo_1aec514341f0d2a170773f8ee93f34cc07)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ConnectionInfo_1aec514341f0d2a170773f8ee93f34cc07"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a301eedd862745404ca8821025a67a43b)`()` <a id="structFRHAPI__ConnectionInfo_1a301eedd862745404ca8821025a67a43b"></a>

Gets the value of Ip.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1ab3bb2af226dbf6d33b174548f5c9e63e)`() const` <a id="structFRHAPI__ConnectionInfo_1ab3bb2af226dbf6d33b174548f5c9e63e"></a>

Gets the value of Ip.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__ConnectionInfo_1a40d64d32f4144e0031cd9eb08078c53c)`(const FString & NewValue)` <a id="structFRHAPI__ConnectionInfo_1a40d64d32f4144e0031cd9eb08078c53c"></a>

Sets the value of Ip.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__ConnectionInfo_1abe0ee3e5d129d9ee8da90d2e0bfb7c75)`(FString && NewValue)` <a id="structFRHAPI__ConnectionInfo_1abe0ee3e5d129d9ee8da90d2e0bfb7c75"></a>

Sets the value of Ip using move semantics.

