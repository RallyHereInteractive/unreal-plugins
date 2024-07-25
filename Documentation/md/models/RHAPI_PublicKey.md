# group `RHAPI_PublicKey` <a id="group__RHAPI__PublicKey"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PublicKey`](#structFRHAPI__PublicKey) | Public key for verifying Access Token JWTs This is in the JWK format as defined in [https://datatracker.ietf.org/doc/html/rfc7517#section-4](https://datatracker.ietf.org/doc/html/rfc7517#section-4).

## struct `FRHAPI_PublicKey` <a id="structFRHAPI__PublicKey"></a>

```
struct FRHAPI_PublicKey
  : public FRHAPI_Model
```

Public key for verifying Access Token JWTs This is in the JWK format as defined in [https://datatracker.ietf.org/doc/html/rfc7517#section-4](https://datatracker.ietf.org/doc/html/rfc7517#section-4).

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Kid`](#structFRHAPI__PublicKey_1a985410114ab7cd588e0d558f7fbfbf9a) | Key ID - see [https://datatracker.ietf.org/doc/html/rfc7517#section-4.5](https://datatracker.ietf.org/doc/html/rfc7517#section-4.5).
`public FString `[`Kty`](#structFRHAPI__PublicKey_1a5e3b2f22a39f6191ffeef87b61815224) | Key Type - see [https://datatracker.ietf.org/doc/html/rfc7517#section-4.1](https://datatracker.ietf.org/doc/html/rfc7517#section-4.1).
`public FString `[`N`](#structFRHAPI__PublicKey_1a1544c7fa9e970f9cdea72dca9f7278af) | Modulus - see [https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1](https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1).
`public FString `[`E`](#structFRHAPI__PublicKey_1ab0b9192d5c959bfef2be40a31dd112d3) | Exponent - see [https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1](https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1).
`public virtual bool `[`FromJson`](#structFRHAPI__PublicKey_1a74bd676552685bda8614b22ecd20c718)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PublicKey_1ae8974f18e6d1ab41af0bf3ff53772026)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetKid`](#structFRHAPI__PublicKey_1a60335aab0338252e58f6c5685ef338f0)`()` | Gets the value of Kid.
`public inline const FString & `[`GetKid`](#structFRHAPI__PublicKey_1a6c78913f542bed2ac985f8a4c42860f7)`() const` | Gets the value of Kid.
`public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae7421daf261659b770dc322143a06ea0)`(const FString & NewValue)` | Sets the value of Kid.
`public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae68b732c26aca2b928e2b30006309ca5)`(FString && NewValue)` | Sets the value of Kid using move semantics.
`public inline FString & `[`GetKty`](#structFRHAPI__PublicKey_1a79925594fdedf7e4ef6a7ecace06535c)`()` | Gets the value of Kty.
`public inline const FString & `[`GetKty`](#structFRHAPI__PublicKey_1aa5681183d52a03df416cf243d208ea25)`() const` | Gets the value of Kty.
`public inline void `[`SetKty`](#structFRHAPI__PublicKey_1a16c1162f8cf9157058dda2f2bbe8c5a7)`(const FString & NewValue)` | Sets the value of Kty.
`public inline void `[`SetKty`](#structFRHAPI__PublicKey_1aea924bd0baa85466f0cf0afc42e90ad9)`(FString && NewValue)` | Sets the value of Kty using move semantics.
`public inline FString & `[`GetN`](#structFRHAPI__PublicKey_1a99ec123987afff8a97cb4299b0e7b1ae)`()` | Gets the value of N.
`public inline const FString & `[`GetN`](#structFRHAPI__PublicKey_1a5ed9ccc83530f2d2ceb797742ee42477)`() const` | Gets the value of N.
`public inline void `[`SetN`](#structFRHAPI__PublicKey_1a5afdae0606801fe31f511a2218d5db74)`(const FString & NewValue)` | Sets the value of N.
`public inline void `[`SetN`](#structFRHAPI__PublicKey_1af1dc6469856f3025c7790fd59bdf6196)`(FString && NewValue)` | Sets the value of N using move semantics.
`public inline FString & `[`GetE`](#structFRHAPI__PublicKey_1ad23e8627ed6d0f3acf51ae00f3a291b9)`()` | Gets the value of E.
`public inline const FString & `[`GetE`](#structFRHAPI__PublicKey_1ad6e984160eb9de3a3fe4cda34b837827)`() const` | Gets the value of E.
`public inline void `[`SetE`](#structFRHAPI__PublicKey_1ad018d48e96651b8283cb071b1c6475f0)`(const FString & NewValue)` | Sets the value of E.
`public inline void `[`SetE`](#structFRHAPI__PublicKey_1a4b1b5f31e9690405b40a4af5694d702b)`(FString && NewValue)` | Sets the value of E using move semantics.

### Members

#### `public FString `[`Kid`](#structFRHAPI__PublicKey_1a985410114ab7cd588e0d558f7fbfbf9a) <a id="structFRHAPI__PublicKey_1a985410114ab7cd588e0d558f7fbfbf9a"></a>

Key ID - see [https://datatracker.ietf.org/doc/html/rfc7517#section-4.5](https://datatracker.ietf.org/doc/html/rfc7517#section-4.5).

#### `public FString `[`Kty`](#structFRHAPI__PublicKey_1a5e3b2f22a39f6191ffeef87b61815224) <a id="structFRHAPI__PublicKey_1a5e3b2f22a39f6191ffeef87b61815224"></a>

Key Type - see [https://datatracker.ietf.org/doc/html/rfc7517#section-4.1](https://datatracker.ietf.org/doc/html/rfc7517#section-4.1).

#### `public FString `[`N`](#structFRHAPI__PublicKey_1a1544c7fa9e970f9cdea72dca9f7278af) <a id="structFRHAPI__PublicKey_1a1544c7fa9e970f9cdea72dca9f7278af"></a>

Modulus - see [https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1](https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1).

#### `public FString `[`E`](#structFRHAPI__PublicKey_1ab0b9192d5c959bfef2be40a31dd112d3) <a id="structFRHAPI__PublicKey_1ab0b9192d5c959bfef2be40a31dd112d3"></a>

Exponent - see [https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1](https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1).

#### `public virtual bool `[`FromJson`](#structFRHAPI__PublicKey_1a74bd676552685bda8614b22ecd20c718)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PublicKey_1a74bd676552685bda8614b22ecd20c718"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PublicKey_1ae8974f18e6d1ab41af0bf3ff53772026)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PublicKey_1ae8974f18e6d1ab41af0bf3ff53772026"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetKid`](#structFRHAPI__PublicKey_1a60335aab0338252e58f6c5685ef338f0)`()` <a id="structFRHAPI__PublicKey_1a60335aab0338252e58f6c5685ef338f0"></a>

Gets the value of Kid.

#### `public inline const FString & `[`GetKid`](#structFRHAPI__PublicKey_1a6c78913f542bed2ac985f8a4c42860f7)`() const` <a id="structFRHAPI__PublicKey_1a6c78913f542bed2ac985f8a4c42860f7"></a>

Gets the value of Kid.

#### `public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae7421daf261659b770dc322143a06ea0)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1ae7421daf261659b770dc322143a06ea0"></a>

Sets the value of Kid.

#### `public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae68b732c26aca2b928e2b30006309ca5)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1ae68b732c26aca2b928e2b30006309ca5"></a>

Sets the value of Kid using move semantics.

#### `public inline FString & `[`GetKty`](#structFRHAPI__PublicKey_1a79925594fdedf7e4ef6a7ecace06535c)`()` <a id="structFRHAPI__PublicKey_1a79925594fdedf7e4ef6a7ecace06535c"></a>

Gets the value of Kty.

#### `public inline const FString & `[`GetKty`](#structFRHAPI__PublicKey_1aa5681183d52a03df416cf243d208ea25)`() const` <a id="structFRHAPI__PublicKey_1aa5681183d52a03df416cf243d208ea25"></a>

Gets the value of Kty.

#### `public inline void `[`SetKty`](#structFRHAPI__PublicKey_1a16c1162f8cf9157058dda2f2bbe8c5a7)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1a16c1162f8cf9157058dda2f2bbe8c5a7"></a>

Sets the value of Kty.

#### `public inline void `[`SetKty`](#structFRHAPI__PublicKey_1aea924bd0baa85466f0cf0afc42e90ad9)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1aea924bd0baa85466f0cf0afc42e90ad9"></a>

Sets the value of Kty using move semantics.

#### `public inline FString & `[`GetN`](#structFRHAPI__PublicKey_1a99ec123987afff8a97cb4299b0e7b1ae)`()` <a id="structFRHAPI__PublicKey_1a99ec123987afff8a97cb4299b0e7b1ae"></a>

Gets the value of N.

#### `public inline const FString & `[`GetN`](#structFRHAPI__PublicKey_1a5ed9ccc83530f2d2ceb797742ee42477)`() const` <a id="structFRHAPI__PublicKey_1a5ed9ccc83530f2d2ceb797742ee42477"></a>

Gets the value of N.

#### `public inline void `[`SetN`](#structFRHAPI__PublicKey_1a5afdae0606801fe31f511a2218d5db74)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1a5afdae0606801fe31f511a2218d5db74"></a>

Sets the value of N.

#### `public inline void `[`SetN`](#structFRHAPI__PublicKey_1af1dc6469856f3025c7790fd59bdf6196)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1af1dc6469856f3025c7790fd59bdf6196"></a>

Sets the value of N using move semantics.

#### `public inline FString & `[`GetE`](#structFRHAPI__PublicKey_1ad23e8627ed6d0f3acf51ae00f3a291b9)`()` <a id="structFRHAPI__PublicKey_1ad23e8627ed6d0f3acf51ae00f3a291b9"></a>

Gets the value of E.

#### `public inline const FString & `[`GetE`](#structFRHAPI__PublicKey_1ad6e984160eb9de3a3fe4cda34b837827)`() const` <a id="structFRHAPI__PublicKey_1ad6e984160eb9de3a3fe4cda34b837827"></a>

Gets the value of E.

#### `public inline void `[`SetE`](#structFRHAPI__PublicKey_1ad018d48e96651b8283cb071b1c6475f0)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1ad018d48e96651b8283cb071b1c6475f0"></a>

Sets the value of E.

#### `public inline void `[`SetE`](#structFRHAPI__PublicKey_1a4b1b5f31e9690405b40a4af5694d702b)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1a4b1b5f31e9690405b40a4af5694d702b"></a>

Sets the value of E using move semantics.

