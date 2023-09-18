# RHAPI_KVsResponse <a id="group__RHAPI__KVsResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KVsResponse`](#structFRHAPI__KVsResponse) | 

## struct `FRHAPI_KVsResponse` <a id="structFRHAPI__KVsResponse"></a>

```
struct FRHAPI_KVsResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > `[`Kvs_Optional`](#structFRHAPI__KVsResponse_1a23c8a086c879a75d8a952c3488b1d918) | The list of key/value pairs.
`public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponse_1ad6fa29ad0978eb9732f25ab213953c30) | true if Kvs_Optional has been set to a value
`public TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponse_1af63ae829af8a15d99069b6cd79572b33) | The list of secret key/value pairs.
`public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponse_1a6657f5ba8a24b0a449e8d5edff7d9ec6) | true if SecretKvs_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__KVsResponse_1afb8e0b14abceded9fd850defcbf1a35f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVsResponse_1ae39b61dfbbae303147faa03e574b1419)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetKvs`](#structFRHAPI__KVsResponse_1a89088c89a016fb0a7a61c8319d27c015)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetKvs`](#structFRHAPI__KVsResponse_1aa8691628be3e612a49c6fab688ae4618)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetKvs`](#structFRHAPI__KVsResponse_1a1db5f7f60d4c5aa2c5188ef462b1e136)`(const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKvs`](#structFRHAPI__KVsResponse_1a4fc3634a4c7053ebd828999729e21b64)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponse_1a4ef08d350364df38ddd5dcea1f2264cf)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponse_1a24fb7cbc1e621e21ae332ad73400f5f6)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponse_1ab6cbfbbd3cb494aa73503d5c7d08e04e)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponse_1a3dd1cd2619fd12e0ba2ae5c55fa83022)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1a7bce7dc5b2d80c7040c503979e68acef)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1a9d799237d733889498ddb16e5a3bd758)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1a5c56ba563e4e3cad3ec1538fc3ef1740)`(const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1ae7f5bc4bc91895b5cfb879447c31d0d3)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponse_1a1a7c21a46cd22c9c8ec9ab2f8439b19a)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponse_1abbab1521243e292457957d06f6f86d5c)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponse_1ad0d654d300ed8e4d24956fb8379abdc4)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponse_1a2449a19a3578451c008d6eeba8628fdb)`()` | Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > `[`Kvs_Optional`](#structFRHAPI__KVsResponse_1a23c8a086c879a75d8a952c3488b1d918) <a id="structFRHAPI__KVsResponse_1a23c8a086c879a75d8a952c3488b1d918"></a>

The list of key/value pairs.

<br>
#### `public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponse_1ad6fa29ad0978eb9732f25ab213953c30) <a id="structFRHAPI__KVsResponse_1ad6fa29ad0978eb9732f25ab213953c30"></a>

true if Kvs_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponse_1af63ae829af8a15d99069b6cd79572b33) <a id="structFRHAPI__KVsResponse_1af63ae829af8a15d99069b6cd79572b33"></a>

The list of secret key/value pairs.

<br>
#### `public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponse_1a6657f5ba8a24b0a449e8d5edff7d9ec6) <a id="structFRHAPI__KVsResponse_1a6657f5ba8a24b0a449e8d5edff7d9ec6"></a>

true if SecretKvs_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__KVsResponse_1afb8e0b14abceded9fd850defcbf1a35f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVsResponse_1afb8e0b14abceded9fd850defcbf1a35f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__KVsResponse_1ae39b61dfbbae303147faa03e574b1419)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KVsResponse_1ae39b61dfbbae303147faa03e574b1419"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetKvs`](#structFRHAPI__KVsResponse_1a89088c89a016fb0a7a61c8319d27c015)`()` <a id="structFRHAPI__KVsResponse_1a89088c89a016fb0a7a61c8319d27c015"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetKvs`](#structFRHAPI__KVsResponse_1aa8691628be3e612a49c6fab688ae4618)`() const` <a id="structFRHAPI__KVsResponse_1aa8691628be3e612a49c6fab688ae4618"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetKvs`](#structFRHAPI__KVsResponse_1a1db5f7f60d4c5aa2c5188ef462b1e136)`(const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponse_1a1db5f7f60d4c5aa2c5188ef462b1e136"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetKvs`](#structFRHAPI__KVsResponse_1a4fc3634a4c7053ebd828999729e21b64)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & OutValue) const` <a id="structFRHAPI__KVsResponse_1a4fc3634a4c7053ebd828999729e21b64"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponse_1a4ef08d350364df38ddd5dcea1f2264cf)`()` <a id="structFRHAPI__KVsResponse_1a4ef08d350364df38ddd5dcea1f2264cf"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponse_1a24fb7cbc1e621e21ae332ad73400f5f6)`() const` <a id="structFRHAPI__KVsResponse_1a24fb7cbc1e621e21ae332ad73400f5f6"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponse_1ab6cbfbbd3cb494aa73503d5c7d08e04e)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > NewValue)` <a id="structFRHAPI__KVsResponse_1ab6cbfbbd3cb494aa73503d5c7d08e04e"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

<br>
#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponse_1a3dd1cd2619fd12e0ba2ae5c55fa83022)`()` <a id="structFRHAPI__KVsResponse_1a3dd1cd2619fd12e0ba2ae5c55fa83022"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1a7bce7dc5b2d80c7040c503979e68acef)`()` <a id="structFRHAPI__KVsResponse_1a7bce7dc5b2d80c7040c503979e68acef"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1a9d799237d733889498ddb16e5a3bd758)`() const` <a id="structFRHAPI__KVsResponse_1a9d799237d733889498ddb16e5a3bd758"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1a5c56ba563e4e3cad3ec1538fc3ef1740)`(const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & DefaultValue) const` <a id="structFRHAPI__KVsResponse_1a5c56ba563e4e3cad3ec1538fc3ef1740"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponse_1ae7f5bc4bc91895b5cfb879447c31d0d3)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > & OutValue) const` <a id="structFRHAPI__KVsResponse_1ae7f5bc4bc91895b5cfb879447c31d0d3"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponse_1a1a7c21a46cd22c9c8ec9ab2f8439b19a)`()` <a id="structFRHAPI__KVsResponse_1a1a7c21a46cd22c9c8ec9ab2f8439b19a"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponse_1abbab1521243e292457957d06f6f86d5c)`() const` <a id="structFRHAPI__KVsResponse_1abbab1521243e292457957d06f6f86d5c"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponse_1ad0d654d300ed8e4d24956fb8379abdc4)`(TArray< `[`FRHAPI_AppSetting`](RHAPI_AppSetting.md#structFRHAPI__AppSetting)` > NewValue)` <a id="structFRHAPI__KVsResponse_1ad0d654d300ed8e4d24956fb8379abdc4"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

<br>
#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponse_1a2449a19a3578451c008d6eeba8628fdb)`()` <a id="structFRHAPI__KVsResponse_1a2449a19a3578451c008d6eeba8628fdb"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

<br>
