---
title: RHAPI_JoinParams
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_JoinParams`](#structFRHAPI__JoinParams) | Parameters provided by the allocation system or an instance on how to connect.

## struct `FRHAPI_JoinParams` <a id="structFRHAPI__JoinParams"></a>

```
struct FRHAPI_JoinParams
  : public FRHAPI_Model
```

Parameters provided by the allocation system or an instance on how to connect.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PublicConnStr`](#structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00) | Public connection string for instance.
`public FString `[`PrivateConnStr`](#structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8) | Private connection string for instance.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328) | Custom data to join a instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__JoinParams_1ad3621724eee0f43d0cebcc60d49b08dc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__JoinParams_1a774f72a84ffc95d6654d2ea28727f89e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1a19202e21479c6ca4c3359fb926fb9747)`()` | Gets the value of PublicConnStr.
`public inline FORCEINLINE const FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1ac27b31b96ae7ce105633031959a9f02d)`() const` | Gets the value of PublicConnStr.
`public inline FORCEINLINE void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a42b88cd3b60fb64be3fffb2fa49b1625)`(const FString & NewValue)` | Sets the value of PublicConnStr.
`public inline FORCEINLINE void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a37a1983b9143c6f102f7a9e9c956500c)`(FString && NewValue)` | Sets the value of PublicConnStr using move semantics.
`public inline FORCEINLINE FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1a8c7b7429746b6fd209397ac2efd1ebb1)`()` | Gets the value of PrivateConnStr.
`public inline FORCEINLINE const FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1ae457bcf0f4efb53ca65268096234a40c)`() const` | Gets the value of PrivateConnStr.
`public inline FORCEINLINE void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1ab687f2e4e84439a76f5183577b18a384)`(const FString & NewValue)` | Sets the value of PrivateConnStr.
`public inline FORCEINLINE void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1acbc2576d791096b107130cedbe831270)`(FString && NewValue)` | Sets the value of PrivateConnStr using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1ad12d3c7c015ae9ef51df00fdbddc4068)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a4aadb84aaef330d295af87b05769720c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a0a6f846fcd675b7b439d488e80a00d4f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__JoinParams_1a8a1b3c8787a611fa31583c8b24582cf6)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1a18b0514f8919a7aabecec9ef3e5d0efd)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1ad6ecc0cc9abfe16e101bf7e3c1203f05)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__JoinParams_1a51b4960f8173f7e4931b8b2782ee0a19)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__JoinParams_1a8275ac53a8df6c477ac10a7d36bcb1c8)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`PublicConnStr`](#structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00) <a id="structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00"></a>

Public connection string for instance.

#### `public FString `[`PrivateConnStr`](#structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8) <a id="structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8"></a>

Private connection string for instance.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328) <a id="structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328"></a>

Custom data to join a instance.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f) <a id="structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__JoinParams_1ad3621724eee0f43d0cebcc60d49b08dc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__JoinParams_1ad3621724eee0f43d0cebcc60d49b08dc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__JoinParams_1a774f72a84ffc95d6654d2ea28727f89e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__JoinParams_1a774f72a84ffc95d6654d2ea28727f89e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1a19202e21479c6ca4c3359fb926fb9747)`()` <a id="structFRHAPI__JoinParams_1a19202e21479c6ca4c3359fb926fb9747"></a>

Gets the value of PublicConnStr.

#### `public inline FORCEINLINE const FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1ac27b31b96ae7ce105633031959a9f02d)`() const` <a id="structFRHAPI__JoinParams_1ac27b31b96ae7ce105633031959a9f02d"></a>

Gets the value of PublicConnStr.

#### `public inline FORCEINLINE void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a42b88cd3b60fb64be3fffb2fa49b1625)`(const FString & NewValue)` <a id="structFRHAPI__JoinParams_1a42b88cd3b60fb64be3fffb2fa49b1625"></a>

Sets the value of PublicConnStr.

#### `public inline FORCEINLINE void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a37a1983b9143c6f102f7a9e9c956500c)`(FString && NewValue)` <a id="structFRHAPI__JoinParams_1a37a1983b9143c6f102f7a9e9c956500c"></a>

Sets the value of PublicConnStr using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1a8c7b7429746b6fd209397ac2efd1ebb1)`()` <a id="structFRHAPI__JoinParams_1a8c7b7429746b6fd209397ac2efd1ebb1"></a>

Gets the value of PrivateConnStr.

#### `public inline FORCEINLINE const FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1ae457bcf0f4efb53ca65268096234a40c)`() const` <a id="structFRHAPI__JoinParams_1ae457bcf0f4efb53ca65268096234a40c"></a>

Gets the value of PrivateConnStr.

#### `public inline FORCEINLINE void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1ab687f2e4e84439a76f5183577b18a384)`(const FString & NewValue)` <a id="structFRHAPI__JoinParams_1ab687f2e4e84439a76f5183577b18a384"></a>

Sets the value of PrivateConnStr.

#### `public inline FORCEINLINE void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1acbc2576d791096b107130cedbe831270)`(FString && NewValue)` <a id="structFRHAPI__JoinParams_1acbc2576d791096b107130cedbe831270"></a>

Sets the value of PrivateConnStr using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1ad12d3c7c015ae9ef51df00fdbddc4068)`()` <a id="structFRHAPI__JoinParams_1ad12d3c7c015ae9ef51df00fdbddc4068"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a4aadb84aaef330d295af87b05769720c)`() const` <a id="structFRHAPI__JoinParams_1a4aadb84aaef330d295af87b05769720c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a0a6f846fcd675b7b439d488e80a00d4f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__JoinParams_1a0a6f846fcd675b7b439d488e80a00d4f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__JoinParams_1a8a1b3c8787a611fa31583c8b24582cf6)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__JoinParams_1a8a1b3c8787a611fa31583c8b24582cf6"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1a18b0514f8919a7aabecec9ef3e5d0efd)`()` <a id="structFRHAPI__JoinParams_1a18b0514f8919a7aabecec9ef3e5d0efd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1ad6ecc0cc9abfe16e101bf7e3c1203f05)`() const` <a id="structFRHAPI__JoinParams_1ad6ecc0cc9abfe16e101bf7e3c1203f05"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__JoinParams_1a51b4960f8173f7e4931b8b2782ee0a19)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__JoinParams_1a51b4960f8173f7e4931b8b2782ee0a19"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__JoinParams_1a8275ac53a8df6c477ac10a7d36bcb1c8)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__JoinParams_1a8275ac53a8df6c477ac10a7d36bcb1c8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb)`()` <a id="structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

