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
`public inline FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a689733d01e17358c7c337d73bf7960d1)`()` | Gets the value of Ip.
`public inline const FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a1c1f4b18ee2ab28ca3cc9a92969281f3)`() const` | Gets the value of Ip.
`public inline void `[`SetIp`](#structFRHAPI__ConnectionInfo_1acb1790c26e5fbd79624f96465738f064)`(const FString & NewValue)` | Sets the value of Ip.
`public inline void `[`SetIp`](#structFRHAPI__ConnectionInfo_1a88e597b9901f485cbda8ebb5272ecf82)`(FString && NewValue)` | Sets the value of Ip using move semantics.

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

#### `public inline FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a689733d01e17358c7c337d73bf7960d1)`()` <a id="structFRHAPI__ConnectionInfo_1a689733d01e17358c7c337d73bf7960d1"></a>

Gets the value of Ip.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a1c1f4b18ee2ab28ca3cc9a92969281f3)`() const` <a id="structFRHAPI__ConnectionInfo_1a1c1f4b18ee2ab28ca3cc9a92969281f3"></a>

Gets the value of Ip.

#### `public inline void `[`SetIp`](#structFRHAPI__ConnectionInfo_1acb1790c26e5fbd79624f96465738f064)`(const FString & NewValue)` <a id="structFRHAPI__ConnectionInfo_1acb1790c26e5fbd79624f96465738f064"></a>

Sets the value of Ip.

#### `public inline void `[`SetIp`](#structFRHAPI__ConnectionInfo_1a88e597b9901f485cbda8ebb5272ecf82)`(FString && NewValue)` <a id="structFRHAPI__ConnectionInfo_1a88e597b9901f485cbda8ebb5272ecf82"></a>

Sets the value of Ip using move semantics.

