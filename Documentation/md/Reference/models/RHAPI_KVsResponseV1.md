---
title: RHAPI_KVsResponseV1
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KVsResponseV1`](#structFRHAPI__KVsResponseV1) | 

## struct `FRHAPI_KVsResponseV1` <a id="structFRHAPI__KVsResponseV1"></a>

```
struct FRHAPI_KVsResponseV1
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > `[`Kvs_Optional`](#structFRHAPI__KVsResponseV1_1a0c81cf618408d139c5e2a32521ee2d86) | The list of key/value pairs.
`public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponseV1_1ac74ddfb8d6d3a75bfd9f1267380790b4) | true if Kvs_Optional has been set to a value
`public TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponseV1_1aeaf4e42d75bb2c22939063c4ece1d22e) | The list of secret key/value pairs.
`public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponseV1_1a1e80a2c6accd456e8d993cba8b74f704) | true if SecretKvs_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV1_1ad50aed82c32961cc5f6489b5c9e1f5d8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV1_1a6b160f1257de46c458371037daadb343)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a44a983a502cf1163e95379f4f1e0853b)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a5f5c352f91ccbbe32af4122b5c1c0110)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aca2902b656833629e65e6e29cf65390a)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetKvs`](#structFRHAPI__KVsResponseV1_1adb57832560e64e4f3b4151d04f47e4fd)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a46dbec1936564fecec82b584cf1ea11e)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a7e52f2be2a92f0beb17a67beb0e4939c)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1a1ad9e4c85fc61b184beb3dd2c0409bd8)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1ad5e69561ae45930fc48e2211e51015ff)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1ab2013908afdb7ba3c4fc2d9b4ee51de2)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a646ca843efa986b2d9532bacd72391c2)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a2a47a11c1a4c0620dee527d06c254b30)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a2d51ebe07432094cd25a95af32eb5da8)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1ab711584d33eb1b20f3e09389dc4f52c3)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a1dd65d6116b48143fda6e1f74dc91ad1)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1a8200c25afaede42166b5cf21d3a77b34)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1acc1abfa08d9ab049ad4a1d144e960ff1)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.
`public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902)`()` | Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > `[`Kvs_Optional`](#structFRHAPI__KVsResponseV1_1a0c81cf618408d139c5e2a32521ee2d86) <a id="structFRHAPI__KVsResponseV1_1a0c81cf618408d139c5e2a32521ee2d86"></a>

The list of key/value pairs.

#### `public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponseV1_1ac74ddfb8d6d3a75bfd9f1267380790b4) <a id="structFRHAPI__KVsResponseV1_1ac74ddfb8d6d3a75bfd9f1267380790b4"></a>

true if Kvs_Optional has been set to a value

#### `public TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponseV1_1aeaf4e42d75bb2c22939063c4ece1d22e) <a id="structFRHAPI__KVsResponseV1_1aeaf4e42d75bb2c22939063c4ece1d22e"></a>

The list of secret key/value pairs.

#### `public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponseV1_1a1e80a2c6accd456e8d993cba8b74f704) <a id="structFRHAPI__KVsResponseV1_1a1e80a2c6accd456e8d993cba8b74f704"></a>

true if SecretKvs_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV1_1ad50aed82c32961cc5f6489b5c9e1f5d8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVsResponseV1_1ad50aed82c32961cc5f6489b5c9e1f5d8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV1_1a6b160f1257de46c458371037daadb343)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__KVsResponseV1_1a6b160f1257de46c458371037daadb343"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a44a983a502cf1163e95379f4f1e0853b)`()` <a id="structFRHAPI__KVsResponseV1_1a44a983a502cf1163e95379f4f1e0853b"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a5f5c352f91ccbbe32af4122b5c1c0110)`() const` <a id="structFRHAPI__KVsResponseV1_1a5f5c352f91ccbbe32af4122b5c1c0110"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aca2902b656833629e65e6e29cf65390a)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV1_1aca2902b656833629e65e6e29cf65390a"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetKvs`](#structFRHAPI__KVsResponseV1_1adb57832560e64e4f3b4151d04f47e4fd)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` <a id="structFRHAPI__KVsResponseV1_1adb57832560e64e4f3b4151d04f47e4fd"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a46dbec1936564fecec82b584cf1ea11e)`()` <a id="structFRHAPI__KVsResponseV1_1a46dbec1936564fecec82b584cf1ea11e"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a7e52f2be2a92f0beb17a67beb0e4939c)`() const` <a id="structFRHAPI__KVsResponseV1_1a7e52f2be2a92f0beb17a67beb0e4939c"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1a1ad9e4c85fc61b184beb3dd2c0409bd8)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` <a id="structFRHAPI__KVsResponseV1_1a1ad9e4c85fc61b184beb3dd2c0409bd8"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

#### `public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1ad5e69561ae45930fc48e2211e51015ff)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` <a id="structFRHAPI__KVsResponseV1_1ad5e69561ae45930fc48e2211e51015ff"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.

#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59)`()` <a id="structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1ab2013908afdb7ba3c4fc2d9b4ee51de2)`()` <a id="structFRHAPI__KVsResponseV1_1ab2013908afdb7ba3c4fc2d9b4ee51de2"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a646ca843efa986b2d9532bacd72391c2)`() const` <a id="structFRHAPI__KVsResponseV1_1a646ca843efa986b2d9532bacd72391c2"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a2a47a11c1a4c0620dee527d06c254b30)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV1_1a2a47a11c1a4c0620dee527d06c254b30"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a2d51ebe07432094cd25a95af32eb5da8)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` <a id="structFRHAPI__KVsResponseV1_1a2d51ebe07432094cd25a95af32eb5da8"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1ab711584d33eb1b20f3e09389dc4f52c3)`()` <a id="structFRHAPI__KVsResponseV1_1ab711584d33eb1b20f3e09389dc4f52c3"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a1dd65d6116b48143fda6e1f74dc91ad1)`() const` <a id="structFRHAPI__KVsResponseV1_1a1dd65d6116b48143fda6e1f74dc91ad1"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1a8200c25afaede42166b5cf21d3a77b34)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` <a id="structFRHAPI__KVsResponseV1_1a8200c25afaede42166b5cf21d3a77b34"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1acc1abfa08d9ab049ad4a1d144e960ff1)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` <a id="structFRHAPI__KVsResponseV1_1acc1abfa08d9ab049ad4a1d144e960ff1"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.

#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902)`()` <a id="structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

