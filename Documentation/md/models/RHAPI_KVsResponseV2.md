# RHAPI_KVsResponseV2 <a id="group__RHAPI__KVsResponseV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KVsResponseV2`](#structFRHAPI__KVsResponseV2) | 

## struct `FRHAPI_KVsResponseV2` <a id="structFRHAPI__KVsResponseV2"></a>

```
struct FRHAPI_KVsResponseV2
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`Kvs_Optional`](#structFRHAPI__KVsResponseV2_1a82becbf26311d31710b9a8565790b750) | The list of key/value pairs.
`public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponseV2_1a2472e7743cd7526c7660eb4e3f013a85) | true if Kvs_Optional has been set to a value
`public TMap< FString, FString > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponseV2_1aec975fc79d0ab06c9a350336fc4e4890) | The list of secret key/value pairs.
`public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponseV2_1ab81590821f474549e20e936b43490aed) | true if SecretKvs_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV2_1afe7b35f511ed17b3190ea02d2a3af66e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV2_1acf1330b9370dcf8d9c3955029a2d2a79)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a805b192903a3d77acb16adc1c3c06d4c)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1abd4d41efec65e990026363e68cd87f3f)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1aad3d321cd8ace9aaf491aaaf71c1dea1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a1a71151b149264d149a91f50e8e9f9e4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1ab7793ec6478bc293efbd506f84945727)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1a6e04dd037f69c481f45411c240042941)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1a2f681d332fc5baf74bcf3b39ed707892)`(TMap< FString, FString > NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a81cd82fb9b2da0778444a748eae40c88)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1ad210dbd7182922231a12c971086e5b73)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a172ff1b4f67547c107b424a469ce7ea6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a4c060960fdd938171b48f81fd8023af4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a7b3179143300d24a14c3e1411c64e4c1)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a0557b9d9e655ea2dc50dcb21e30d5b2a)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1a2de15bc30b0339a61ed24487624f3361)`(TMap< FString, FString > NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473)`()` | Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

#### Members

#### `public TMap< FString, FString > `[`Kvs_Optional`](#structFRHAPI__KVsResponseV2_1a82becbf26311d31710b9a8565790b750) <a id="structFRHAPI__KVsResponseV2_1a82becbf26311d31710b9a8565790b750"></a>

The list of key/value pairs.

<br>
#### `public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponseV2_1a2472e7743cd7526c7660eb4e3f013a85) <a id="structFRHAPI__KVsResponseV2_1a2472e7743cd7526c7660eb4e3f013a85"></a>

true if Kvs_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponseV2_1aec975fc79d0ab06c9a350336fc4e4890) <a id="structFRHAPI__KVsResponseV2_1aec975fc79d0ab06c9a350336fc4e4890"></a>

The list of secret key/value pairs.

<br>
#### `public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponseV2_1ab81590821f474549e20e936b43490aed) <a id="structFRHAPI__KVsResponseV2_1ab81590821f474549e20e936b43490aed"></a>

true if SecretKvs_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV2_1afe7b35f511ed17b3190ea02d2a3af66e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVsResponseV2_1afe7b35f511ed17b3190ea02d2a3af66e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV2_1acf1330b9370dcf8d9c3955029a2d2a79)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KVsResponseV2_1acf1330b9370dcf8d9c3955029a2d2a79"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a805b192903a3d77acb16adc1c3c06d4c)`()` <a id="structFRHAPI__KVsResponseV2_1a805b192903a3d77acb16adc1c3c06d4c"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1abd4d41efec65e990026363e68cd87f3f)`() const` <a id="structFRHAPI__KVsResponseV2_1abd4d41efec65e990026363e68cd87f3f"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1aad3d321cd8ace9aaf491aaaf71c1dea1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1aad3d321cd8ace9aaf491aaaf71c1dea1"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a1a71151b149264d149a91f50e8e9f9e4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1a1a71151b149264d149a91f50e8e9f9e4"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1ab7793ec6478bc293efbd506f84945727)`()` <a id="structFRHAPI__KVsResponseV2_1ab7793ec6478bc293efbd506f84945727"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1a6e04dd037f69c481f45411c240042941)`() const` <a id="structFRHAPI__KVsResponseV2_1a6e04dd037f69c481f45411c240042941"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1a2f681d332fc5baf74bcf3b39ed707892)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__KVsResponseV2_1a2f681d332fc5baf74bcf3b39ed707892"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

<br>
#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2)`()` <a id="structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a81cd82fb9b2da0778444a748eae40c88)`()` <a id="structFRHAPI__KVsResponseV2_1a81cd82fb9b2da0778444a748eae40c88"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1ad210dbd7182922231a12c971086e5b73)`() const` <a id="structFRHAPI__KVsResponseV2_1ad210dbd7182922231a12c971086e5b73"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a172ff1b4f67547c107b424a469ce7ea6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1a172ff1b4f67547c107b424a469ce7ea6"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a4c060960fdd938171b48f81fd8023af4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1a4c060960fdd938171b48f81fd8023af4"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a7b3179143300d24a14c3e1411c64e4c1)`()` <a id="structFRHAPI__KVsResponseV2_1a7b3179143300d24a14c3e1411c64e4c1"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a0557b9d9e655ea2dc50dcb21e30d5b2a)`() const` <a id="structFRHAPI__KVsResponseV2_1a0557b9d9e655ea2dc50dcb21e30d5b2a"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1a2de15bc30b0339a61ed24487624f3361)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__KVsResponseV2_1a2de15bc30b0339a61ed24487624f3361"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

<br>
#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473)`()` <a id="structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

<br>
