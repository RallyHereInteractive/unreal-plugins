---
title: RHAPI_PublicKey
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__PublicKey_1a14a6917d6575c499aa940737b388d1f5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetKid`](#structFRHAPI__PublicKey_1a16db2436208193c2b4240bd7e6d530a0)`()` | Gets the value of Kid.
`public inline FORCEINLINE const FString & `[`GetKid`](#structFRHAPI__PublicKey_1a6890db5bdecc84b824e5172326ec1d49)`() const` | Gets the value of Kid.
`public inline FORCEINLINE void `[`SetKid`](#structFRHAPI__PublicKey_1a023e478d5bfa930c1c6eafbe03e4d198)`(const FString & NewValue)` | Sets the value of Kid.
`public inline FORCEINLINE void `[`SetKid`](#structFRHAPI__PublicKey_1a67f50876bfc3442e40525cd8efa12805)`(FString && NewValue)` | Sets the value of Kid using move semantics.
`public inline FORCEINLINE FString & `[`GetKty`](#structFRHAPI__PublicKey_1a7568d55ee3a30df65869c48cf11c2144)`()` | Gets the value of Kty.
`public inline FORCEINLINE const FString & `[`GetKty`](#structFRHAPI__PublicKey_1ab1777a99af938ac5b6cd7799a7990fb6)`() const` | Gets the value of Kty.
`public inline FORCEINLINE void `[`SetKty`](#structFRHAPI__PublicKey_1aa34c160bb7862a3989b7c9e1c38784db)`(const FString & NewValue)` | Sets the value of Kty.
`public inline FORCEINLINE void `[`SetKty`](#structFRHAPI__PublicKey_1af9fd4fb6fa660df427cec6cd0cdbe65c)`(FString && NewValue)` | Sets the value of Kty using move semantics.
`public inline FORCEINLINE FString & `[`GetN`](#structFRHAPI__PublicKey_1a3a21dac74427dd93875272bc997a5753)`()` | Gets the value of N.
`public inline FORCEINLINE const FString & `[`GetN`](#structFRHAPI__PublicKey_1a2562baf0793d8877e058a00fad8a4099)`() const` | Gets the value of N.
`public inline FORCEINLINE void `[`SetN`](#structFRHAPI__PublicKey_1aff6225a4c2f9043b6d1215ae32f277a7)`(const FString & NewValue)` | Sets the value of N.
`public inline FORCEINLINE void `[`SetN`](#structFRHAPI__PublicKey_1a069d9f960937233ac6546b35f69eedfe)`(FString && NewValue)` | Sets the value of N using move semantics.
`public inline FORCEINLINE FString & `[`GetE`](#structFRHAPI__PublicKey_1a11c8b306fd0198f47e8da9d6a908c1a7)`()` | Gets the value of E.
`public inline FORCEINLINE const FString & `[`GetE`](#structFRHAPI__PublicKey_1abd6cfb4879060190e16708826966b956)`() const` | Gets the value of E.
`public inline FORCEINLINE void `[`SetE`](#structFRHAPI__PublicKey_1a9718c2897c6f0fffa813046efb674827)`(const FString & NewValue)` | Sets the value of E.
`public inline FORCEINLINE void `[`SetE`](#structFRHAPI__PublicKey_1acb997d0f8d886a9c1dda3b48056b7fad)`(FString && NewValue)` | Sets the value of E using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PublicKey_1a14a6917d6575c499aa940737b388d1f5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PublicKey_1a14a6917d6575c499aa940737b388d1f5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetKid`](#structFRHAPI__PublicKey_1a16db2436208193c2b4240bd7e6d530a0)`()` <a id="structFRHAPI__PublicKey_1a16db2436208193c2b4240bd7e6d530a0"></a>

Gets the value of Kid.

#### `public inline FORCEINLINE const FString & `[`GetKid`](#structFRHAPI__PublicKey_1a6890db5bdecc84b824e5172326ec1d49)`() const` <a id="structFRHAPI__PublicKey_1a6890db5bdecc84b824e5172326ec1d49"></a>

Gets the value of Kid.

#### `public inline FORCEINLINE void `[`SetKid`](#structFRHAPI__PublicKey_1a023e478d5bfa930c1c6eafbe03e4d198)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1a023e478d5bfa930c1c6eafbe03e4d198"></a>

Sets the value of Kid.

#### `public inline FORCEINLINE void `[`SetKid`](#structFRHAPI__PublicKey_1a67f50876bfc3442e40525cd8efa12805)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1a67f50876bfc3442e40525cd8efa12805"></a>

Sets the value of Kid using move semantics.

#### `public inline FORCEINLINE FString & `[`GetKty`](#structFRHAPI__PublicKey_1a7568d55ee3a30df65869c48cf11c2144)`()` <a id="structFRHAPI__PublicKey_1a7568d55ee3a30df65869c48cf11c2144"></a>

Gets the value of Kty.

#### `public inline FORCEINLINE const FString & `[`GetKty`](#structFRHAPI__PublicKey_1ab1777a99af938ac5b6cd7799a7990fb6)`() const` <a id="structFRHAPI__PublicKey_1ab1777a99af938ac5b6cd7799a7990fb6"></a>

Gets the value of Kty.

#### `public inline FORCEINLINE void `[`SetKty`](#structFRHAPI__PublicKey_1aa34c160bb7862a3989b7c9e1c38784db)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1aa34c160bb7862a3989b7c9e1c38784db"></a>

Sets the value of Kty.

#### `public inline FORCEINLINE void `[`SetKty`](#structFRHAPI__PublicKey_1af9fd4fb6fa660df427cec6cd0cdbe65c)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1af9fd4fb6fa660df427cec6cd0cdbe65c"></a>

Sets the value of Kty using move semantics.

#### `public inline FORCEINLINE FString & `[`GetN`](#structFRHAPI__PublicKey_1a3a21dac74427dd93875272bc997a5753)`()` <a id="structFRHAPI__PublicKey_1a3a21dac74427dd93875272bc997a5753"></a>

Gets the value of N.

#### `public inline FORCEINLINE const FString & `[`GetN`](#structFRHAPI__PublicKey_1a2562baf0793d8877e058a00fad8a4099)`() const` <a id="structFRHAPI__PublicKey_1a2562baf0793d8877e058a00fad8a4099"></a>

Gets the value of N.

#### `public inline FORCEINLINE void `[`SetN`](#structFRHAPI__PublicKey_1aff6225a4c2f9043b6d1215ae32f277a7)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1aff6225a4c2f9043b6d1215ae32f277a7"></a>

Sets the value of N.

#### `public inline FORCEINLINE void `[`SetN`](#structFRHAPI__PublicKey_1a069d9f960937233ac6546b35f69eedfe)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1a069d9f960937233ac6546b35f69eedfe"></a>

Sets the value of N using move semantics.

#### `public inline FORCEINLINE FString & `[`GetE`](#structFRHAPI__PublicKey_1a11c8b306fd0198f47e8da9d6a908c1a7)`()` <a id="structFRHAPI__PublicKey_1a11c8b306fd0198f47e8da9d6a908c1a7"></a>

Gets the value of E.

#### `public inline FORCEINLINE const FString & `[`GetE`](#structFRHAPI__PublicKey_1abd6cfb4879060190e16708826966b956)`() const` <a id="structFRHAPI__PublicKey_1abd6cfb4879060190e16708826966b956"></a>

Gets the value of E.

#### `public inline FORCEINLINE void `[`SetE`](#structFRHAPI__PublicKey_1a9718c2897c6f0fffa813046efb674827)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1a9718c2897c6f0fffa813046efb674827"></a>

Sets the value of E.

#### `public inline FORCEINLINE void `[`SetE`](#structFRHAPI__PublicKey_1acb997d0f8d886a9c1dda3b48056b7fad)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1acb997d0f8d886a9c1dda3b48056b7fad"></a>

Sets the value of E using move semantics.

