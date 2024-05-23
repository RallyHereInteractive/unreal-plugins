# group `RHAPI_PublicKeyList` <a id="group__RHAPI__PublicKeyList"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PublicKeyList`](#structFRHAPI__PublicKeyList) | List of public keys for verifying Access Token JWTs. This is in the JWK Set format as defined in [https://datatracker.ietf.org/doc/html/rfc7517#section-5](https://datatracker.ietf.org/doc/html/rfc7517#section-5).

## struct `FRHAPI_PublicKeyList` <a id="structFRHAPI__PublicKeyList"></a>

```
struct FRHAPI_PublicKeyList
  : public FRHAPI_Model
```

List of public keys for verifying Access Token JWTs. This is in the JWK Set format as defined in [https://datatracker.ietf.org/doc/html/rfc7517#section-5](https://datatracker.ietf.org/doc/html/rfc7517#section-5).

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > `[`Keys`](#structFRHAPI__PublicKeyList_1a9f2304e8a8edbb03597d352a4a60415a) | List of public keys for verifying Access Token JWTs.
`public virtual bool `[`FromJson`](#structFRHAPI__PublicKeyList_1a18900c214f8cb8ca4164d3f2a2f31012)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PublicKeyList_1a8c25ebaf73ef9daefeab572798243793)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > & `[`GetKeys`](#structFRHAPI__PublicKeyList_1a28b2056cffd0315aa4069ff32bc02e2b)`()` | Gets the value of Keys.
`public inline const TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > & `[`GetKeys`](#structFRHAPI__PublicKeyList_1a13568df60d8f7252b26a2e5b3806b170)`() const` | Gets the value of Keys.
`public inline void `[`SetKeys`](#structFRHAPI__PublicKeyList_1ab7a3175d5e8e2a6ba0e3769d3d7cb411)`(const TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > & NewValue)` | Sets the value of Keys.
`public inline void `[`SetKeys`](#structFRHAPI__PublicKeyList_1a182e86e9abb0c967edded080091d30eb)`(TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > && NewValue)` | Sets the value of Keys using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > `[`Keys`](#structFRHAPI__PublicKeyList_1a9f2304e8a8edbb03597d352a4a60415a) <a id="structFRHAPI__PublicKeyList_1a9f2304e8a8edbb03597d352a4a60415a"></a>

List of public keys for verifying Access Token JWTs.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PublicKeyList_1a18900c214f8cb8ca4164d3f2a2f31012)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PublicKeyList_1a18900c214f8cb8ca4164d3f2a2f31012"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PublicKeyList_1a8c25ebaf73ef9daefeab572798243793)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PublicKeyList_1a8c25ebaf73ef9daefeab572798243793"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > & `[`GetKeys`](#structFRHAPI__PublicKeyList_1a28b2056cffd0315aa4069ff32bc02e2b)`()` <a id="structFRHAPI__PublicKeyList_1a28b2056cffd0315aa4069ff32bc02e2b"></a>

Gets the value of Keys.

#### `public inline const TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > & `[`GetKeys`](#structFRHAPI__PublicKeyList_1a13568df60d8f7252b26a2e5b3806b170)`() const` <a id="structFRHAPI__PublicKeyList_1a13568df60d8f7252b26a2e5b3806b170"></a>

Gets the value of Keys.

#### `public inline void `[`SetKeys`](#structFRHAPI__PublicKeyList_1ab7a3175d5e8e2a6ba0e3769d3d7cb411)`(const TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > & NewValue)` <a id="structFRHAPI__PublicKeyList_1ab7a3175d5e8e2a6ba0e3769d3d7cb411"></a>

Sets the value of Keys.

#### `public inline void `[`SetKeys`](#structFRHAPI__PublicKeyList_1a182e86e9abb0c967edded080091d30eb)`(TArray< `[`FRHAPI_PublicKey`](RHAPI_PublicKey.md#structFRHAPI__PublicKey)` > && NewValue)` <a id="structFRHAPI__PublicKeyList_1a182e86e9abb0c967edded080091d30eb"></a>

Sets the value of Keys using move semantics.

