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
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aa2631501520625ebd432a20bc9c53fd4)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a6e4d45523665c06ad62e6a499dd6d35e)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a71729a1cc766643f29eff4d40451f0e4)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aeee2d48feb2370e712b6e6258a07c876)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1abe0d4a451ae4fbb230ba34ef755a77e8)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a36d574df1e5faeb7f6cc89e2819ad6d4)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1a06ec866582f72b0508fc8c89de9404a1)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1aa386c4a0412fe7baa7fdd5b974fbe468)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline bool `[`IsKvsSet`](#structFRHAPI__KVsResponseV1_1aeafe07793dc565852f5f1769bcc7c0d6)`() const` | Checks whether Kvs_Optional has been set.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a3759cd00edffac7fb51cbcfc50b528ca)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1aca6c2382fb3d3cbb95183170c2d5bffa)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1af57ffe5c673d280bdb9ea24a45996287)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a95742a3d2773f721e29ceb36c9133e9d)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a5592dbb2bce13f69a5d0f4d7f7fdbe07)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a0439a44f2dcc40b4b39f7a69bf2d86a8)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1ab1d67394c13286d2f111d5c0d1ba8ec6)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1a576192ef45052a4efb24463b40da06a2)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.
`public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902)`()` | Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.
`public inline bool `[`IsSecretKvsSet`](#structFRHAPI__KVsResponseV1_1aea72a3b91a1e14271af201720b97f070)`() const` | Checks whether SecretKvs_Optional has been set.

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

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aa2631501520625ebd432a20bc9c53fd4)`()` <a id="structFRHAPI__KVsResponseV1_1aa2631501520625ebd432a20bc9c53fd4"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a6e4d45523665c06ad62e6a499dd6d35e)`() const` <a id="structFRHAPI__KVsResponseV1_1a6e4d45523665c06ad62e6a499dd6d35e"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetKvs`](#structFRHAPI__KVsResponseV1_1a71729a1cc766643f29eff4d40451f0e4)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV1_1a71729a1cc766643f29eff4d40451f0e4"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV1_1aeee2d48feb2370e712b6e6258a07c876)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` <a id="structFRHAPI__KVsResponseV1_1aeee2d48feb2370e712b6e6258a07c876"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1abe0d4a451ae4fbb230ba34ef755a77e8)`()` <a id="structFRHAPI__KVsResponseV1_1abe0d4a451ae4fbb230ba34ef755a77e8"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV1_1a36d574df1e5faeb7f6cc89e2819ad6d4)`() const` <a id="structFRHAPI__KVsResponseV1_1a36d574df1e5faeb7f6cc89e2819ad6d4"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1a06ec866582f72b0508fc8c89de9404a1)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` <a id="structFRHAPI__KVsResponseV1_1a06ec866582f72b0508fc8c89de9404a1"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV1_1aa386c4a0412fe7baa7fdd5b974fbe468)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` <a id="structFRHAPI__KVsResponseV1_1aa386c4a0412fe7baa7fdd5b974fbe468"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.

#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59)`()` <a id="structFRHAPI__KVsResponseV1_1a7465f01d1c4c2984037bcb54bf40cf59"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

#### `public inline bool `[`IsKvsSet`](#structFRHAPI__KVsResponseV1_1aeafe07793dc565852f5f1769bcc7c0d6)`() const` <a id="structFRHAPI__KVsResponseV1_1aeafe07793dc565852f5f1769bcc7c0d6"></a>

Checks whether Kvs_Optional has been set.

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a3759cd00edffac7fb51cbcfc50b528ca)`()` <a id="structFRHAPI__KVsResponseV1_1a3759cd00edffac7fb51cbcfc50b528ca"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1aca6c2382fb3d3cbb95183170c2d5bffa)`() const` <a id="structFRHAPI__KVsResponseV1_1aca6c2382fb3d3cbb95183170c2d5bffa"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1af57ffe5c673d280bdb9ea24a45996287)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV1_1af57ffe5c673d280bdb9ea24a45996287"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV1_1a95742a3d2773f721e29ceb36c9133e9d)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & OutValue) const` <a id="structFRHAPI__KVsResponseV1_1a95742a3d2773f721e29ceb36c9133e9d"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a5592dbb2bce13f69a5d0f4d7f7fdbe07)`()` <a id="structFRHAPI__KVsResponseV1_1a5592dbb2bce13f69a5d0f4d7f7fdbe07"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV1_1a0439a44f2dcc40b4b39f7a69bf2d86a8)`() const` <a id="structFRHAPI__KVsResponseV1_1a0439a44f2dcc40b4b39f7a69bf2d86a8"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1ab1d67394c13286d2f111d5c0d1ba8ec6)`(const TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > & NewValue)` <a id="structFRHAPI__KVsResponseV1_1ab1d67394c13286d2f111d5c0d1ba8ec6"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV1_1a576192ef45052a4efb24463b40da06a2)`(TArray< `[`FRHAPI_KVV1`](RHAPI_KVV1.md#structFRHAPI__KVV1)` > && NewValue)` <a id="structFRHAPI__KVsResponseV1_1a576192ef45052a4efb24463b40da06a2"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.

#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902)`()` <a id="structFRHAPI__KVsResponseV1_1a025ac2d03f64ce986ac5b4ea9acd4902"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

#### `public inline bool `[`IsSecretKvsSet`](#structFRHAPI__KVsResponseV1_1aea72a3b91a1e14271af201720b97f070)`() const` <a id="structFRHAPI__KVsResponseV1_1aea72a3b91a1e14271af201720b97f070"></a>

Checks whether SecretKvs_Optional has been set.

