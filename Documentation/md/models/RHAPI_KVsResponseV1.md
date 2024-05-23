# group `RHAPI_KVsResponseV1` <a id="group__RHAPI__KVsResponseV1"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV1_1a652b39727a8f973113da7d83fe9969aa)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV1_1a25765fb93d1f23014ce2ade5b965f1c8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aebc7e45e43b9e866220239c093744296)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1ad66953bc728790daffa11dbb9e9f8609)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a007312b70175dba0a4500ef787252cf9)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aeee2d48feb2370e712b6e6258a07c876)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a29965b25025a882e7395cd7d108bd21f)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a0f710dbfb580aa1bac7ddcdb7519a4fa)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1a06ec866582f72b0508fc8c89de9404a1)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1aa386c4a0412fe7baa7fdd5b974fbe468)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a4046e4bda45db1b8b03fb8d38f821137)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a64235bf384336afe0d2ea6e424a0a139)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a6b8db2c5703fcdc1745466c4d3a3a748)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a95742a3d2773f721e29ceb36c9133e9d)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a06db24079416f7b9e4e34b256a8ad733)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1ae63980bc3f9f4ca4433a0e6b7bca9bec)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1ab1d67394c13286d2f111d5c0d1ba8ec6)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1a576192ef45052a4efb24463b40da06a2)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV1_1a652b39727a8f973113da7d83fe9969aa)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVsResponseV1_1a652b39727a8f973113da7d83fe9969aa"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV1_1a25765fb93d1f23014ce2ade5b965f1c8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KVsResponseV1_1a25765fb93d1f23014ce2ade5b965f1c8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aebc7e45e43b9e866220239c093744296)`()` <a id="structFRHAPI__KVsResponseV1_1aebc7e45e43b9e866220239c093744296"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1ad66953bc728790daffa11dbb9e9f8609)`() const` <a id="structFRHAPI__KVsResponseV1_1ad66953bc728790daffa11dbb9e9f8609"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a007312b70175dba0a4500ef787252cf9)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV1_1a007312b70175dba0a4500ef787252cf9"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aeee2d48feb2370e712b6e6258a07c876)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` <a id="structFRHAPI__KVsResponseV1_1aeee2d48feb2370e712b6e6258a07c876"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a29965b25025a882e7395cd7d108bd21f)`()` <a id="structFRHAPI__KVsResponseV1_1a29965b25025a882e7395cd7d108bd21f"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a0f710dbfb580aa1bac7ddcdb7519a4fa)`() const` <a id="structFRHAPI__KVsResponseV1_1a0f710dbfb580aa1bac7ddcdb7519a4fa"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1a06ec866582f72b0508fc8c89de9404a1)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` <a id="structFRHAPI__KVsResponseV1_1a06ec866582f72b0508fc8c89de9404a1"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1aa386c4a0412fe7baa7fdd5b974fbe468)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` <a id="structFRHAPI__KVsResponseV1_1aa386c4a0412fe7baa7fdd5b974fbe468"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.

#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59)`()` <a id="structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a4046e4bda45db1b8b03fb8d38f821137)`()` <a id="structFRHAPI__KVsResponseV1_1a4046e4bda45db1b8b03fb8d38f821137"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a64235bf384336afe0d2ea6e424a0a139)`() const` <a id="structFRHAPI__KVsResponseV1_1a64235bf384336afe0d2ea6e424a0a139"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a6b8db2c5703fcdc1745466c4d3a3a748)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV1_1a6b8db2c5703fcdc1745466c4d3a3a748"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a95742a3d2773f721e29ceb36c9133e9d)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` <a id="structFRHAPI__KVsResponseV1_1a95742a3d2773f721e29ceb36c9133e9d"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a06db24079416f7b9e4e34b256a8ad733)`()` <a id="structFRHAPI__KVsResponseV1_1a06db24079416f7b9e4e34b256a8ad733"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1ae63980bc3f9f4ca4433a0e6b7bca9bec)`() const` <a id="structFRHAPI__KVsResponseV1_1ae63980bc3f9f4ca4433a0e6b7bca9bec"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1ab1d67394c13286d2f111d5c0d1ba8ec6)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` <a id="structFRHAPI__KVsResponseV1_1ab1d67394c13286d2f111d5c0d1ba8ec6"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1a576192ef45052a4efb24463b40da06a2)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` <a id="structFRHAPI__KVsResponseV1_1a576192ef45052a4efb24463b40da06a2"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.

#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902)`()` <a id="structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

