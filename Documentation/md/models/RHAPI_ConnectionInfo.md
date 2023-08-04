# RHAPI_ConnectionInfo <a id="group__RHAPI__ConnectionInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ConnectionInfo`](#structFRHAPI__ConnectionInfo) | 

## struct `FRHAPI_ConnectionInfo` <a id="structFRHAPI__ConnectionInfo"></a>

```
struct FRHAPI_ConnectionInfo
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Ip`](#structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6) | IP that sent the request.
`public virtual bool `[`FromJson`](#structFRHAPI__ConnectionInfo_1a8163d13a92ed5ca0a8292e3269a5b7d1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ConnectionInfo_1a194e39da068ff951effe98a6b0a36a56)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a35cdcfa371719695f1ad4fe00c86db75)`()` | Gets the value of Ip.
`public inline const FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1add13d7706711b691a3dbf9bbd504a749)`() const` | Gets the value of Ip.
`public inline void `[`SetIp`](#structFRHAPI__ConnectionInfo_1ab2a203deb1501471c2ff86bcfd6ae3b3)`(FString NewValue)` | Sets the value of Ip.

#### Members

#### `public FString `[`Ip`](#structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6) <a id="structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6"></a>

IP that sent the request.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__ConnectionInfo_1a8163d13a92ed5ca0a8292e3269a5b7d1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ConnectionInfo_1a8163d13a92ed5ca0a8292e3269a5b7d1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__ConnectionInfo_1a194e39da068ff951effe98a6b0a36a56)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__ConnectionInfo_1a194e39da068ff951effe98a6b0a36a56"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1a35cdcfa371719695f1ad4fe00c86db75)`()` <a id="structFRHAPI__ConnectionInfo_1a35cdcfa371719695f1ad4fe00c86db75"></a>

Gets the value of Ip.

<br>
#### `public inline const FString & `[`GetIp`](#structFRHAPI__ConnectionInfo_1add13d7706711b691a3dbf9bbd504a749)`() const` <a id="structFRHAPI__ConnectionInfo_1add13d7706711b691a3dbf9bbd504a749"></a>

Gets the value of Ip.

<br>
#### `public inline void `[`SetIp`](#structFRHAPI__ConnectionInfo_1ab2a203deb1501471c2ff86bcfd6ae3b3)`(FString NewValue)` <a id="structFRHAPI__ConnectionInfo_1ab2a203deb1501471c2ff86bcfd6ae3b3"></a>

Sets the value of Ip.

<br>
