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
`public inline FString & `[`GetKid`](#structFRHAPI__PublicKey_1aca4eece9beb47065f7ccab956dc0dbaf)`()` | Gets the value of Kid.
`public inline const FString & `[`GetKid`](#structFRHAPI__PublicKey_1adc06b9eb3bbcc393e1623caf74586a39)`() const` | Gets the value of Kid.
`public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae7421daf261659b770dc322143a06ea0)`(const FString & NewValue)` | Sets the value of Kid.
`public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae68b732c26aca2b928e2b30006309ca5)`(FString && NewValue)` | Sets the value of Kid using move semantics.
`public inline FString & `[`GetKty`](#structFRHAPI__PublicKey_1a54f8d2bcfac7211ac036de60178c220e)`()` | Gets the value of Kty.
`public inline const FString & `[`GetKty`](#structFRHAPI__PublicKey_1ad087bb0d62b3f76e0f1879d0aa308860)`() const` | Gets the value of Kty.
`public inline void `[`SetKty`](#structFRHAPI__PublicKey_1a16c1162f8cf9157058dda2f2bbe8c5a7)`(const FString & NewValue)` | Sets the value of Kty.
`public inline void `[`SetKty`](#structFRHAPI__PublicKey_1aea924bd0baa85466f0cf0afc42e90ad9)`(FString && NewValue)` | Sets the value of Kty using move semantics.
`public inline FString & `[`GetN`](#structFRHAPI__PublicKey_1a2f00fabc32632d67c21e7f91a29dae03)`()` | Gets the value of N.
`public inline const FString & `[`GetN`](#structFRHAPI__PublicKey_1ae761440b7801caf8afdd2a823c37880d)`() const` | Gets the value of N.
`public inline void `[`SetN`](#structFRHAPI__PublicKey_1a5afdae0606801fe31f511a2218d5db74)`(const FString & NewValue)` | Sets the value of N.
`public inline void `[`SetN`](#structFRHAPI__PublicKey_1af1dc6469856f3025c7790fd59bdf6196)`(FString && NewValue)` | Sets the value of N using move semantics.
`public inline FString & `[`GetE`](#structFRHAPI__PublicKey_1a0f3c25db2940811397eb845e50b5549d)`()` | Gets the value of E.
`public inline const FString & `[`GetE`](#structFRHAPI__PublicKey_1aa3931930e329e908a5dd42282c19d4db)`() const` | Gets the value of E.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PublicKey_1a14a6917d6575c499aa940737b388d1f5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PublicKey_1a14a6917d6575c499aa940737b388d1f5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetKid`](#structFRHAPI__PublicKey_1aca4eece9beb47065f7ccab956dc0dbaf)`()` <a id="structFRHAPI__PublicKey_1aca4eece9beb47065f7ccab956dc0dbaf"></a>

Gets the value of Kid.

#### `public inline const FString & `[`GetKid`](#structFRHAPI__PublicKey_1adc06b9eb3bbcc393e1623caf74586a39)`() const` <a id="structFRHAPI__PublicKey_1adc06b9eb3bbcc393e1623caf74586a39"></a>

Gets the value of Kid.

#### `public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae7421daf261659b770dc322143a06ea0)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1ae7421daf261659b770dc322143a06ea0"></a>

Sets the value of Kid.

#### `public inline void `[`SetKid`](#structFRHAPI__PublicKey_1ae68b732c26aca2b928e2b30006309ca5)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1ae68b732c26aca2b928e2b30006309ca5"></a>

Sets the value of Kid using move semantics.

#### `public inline FString & `[`GetKty`](#structFRHAPI__PublicKey_1a54f8d2bcfac7211ac036de60178c220e)`()` <a id="structFRHAPI__PublicKey_1a54f8d2bcfac7211ac036de60178c220e"></a>

Gets the value of Kty.

#### `public inline const FString & `[`GetKty`](#structFRHAPI__PublicKey_1ad087bb0d62b3f76e0f1879d0aa308860)`() const` <a id="structFRHAPI__PublicKey_1ad087bb0d62b3f76e0f1879d0aa308860"></a>

Gets the value of Kty.

#### `public inline void `[`SetKty`](#structFRHAPI__PublicKey_1a16c1162f8cf9157058dda2f2bbe8c5a7)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1a16c1162f8cf9157058dda2f2bbe8c5a7"></a>

Sets the value of Kty.

#### `public inline void `[`SetKty`](#structFRHAPI__PublicKey_1aea924bd0baa85466f0cf0afc42e90ad9)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1aea924bd0baa85466f0cf0afc42e90ad9"></a>

Sets the value of Kty using move semantics.

#### `public inline FString & `[`GetN`](#structFRHAPI__PublicKey_1a2f00fabc32632d67c21e7f91a29dae03)`()` <a id="structFRHAPI__PublicKey_1a2f00fabc32632d67c21e7f91a29dae03"></a>

Gets the value of N.

#### `public inline const FString & `[`GetN`](#structFRHAPI__PublicKey_1ae761440b7801caf8afdd2a823c37880d)`() const` <a id="structFRHAPI__PublicKey_1ae761440b7801caf8afdd2a823c37880d"></a>

Gets the value of N.

#### `public inline void `[`SetN`](#structFRHAPI__PublicKey_1a5afdae0606801fe31f511a2218d5db74)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1a5afdae0606801fe31f511a2218d5db74"></a>

Sets the value of N.

#### `public inline void `[`SetN`](#structFRHAPI__PublicKey_1af1dc6469856f3025c7790fd59bdf6196)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1af1dc6469856f3025c7790fd59bdf6196"></a>

Sets the value of N using move semantics.

#### `public inline FString & `[`GetE`](#structFRHAPI__PublicKey_1a0f3c25db2940811397eb845e50b5549d)`()` <a id="structFRHAPI__PublicKey_1a0f3c25db2940811397eb845e50b5549d"></a>

Gets the value of E.

#### `public inline const FString & `[`GetE`](#structFRHAPI__PublicKey_1aa3931930e329e908a5dd42282c19d4db)`() const` <a id="structFRHAPI__PublicKey_1aa3931930e329e908a5dd42282c19d4db"></a>

Gets the value of E.

#### `public inline void `[`SetE`](#structFRHAPI__PublicKey_1ad018d48e96651b8283cb071b1c6475f0)`(const FString & NewValue)` <a id="structFRHAPI__PublicKey_1ad018d48e96651b8283cb071b1c6475f0"></a>

Sets the value of E.

#### `public inline void `[`SetE`](#structFRHAPI__PublicKey_1a4b1b5f31e9690405b40a4af5694d702b)`(FString && NewValue)` <a id="structFRHAPI__PublicKey_1a4b1b5f31e9690405b40a4af5694d702b"></a>

Sets the value of E using move semantics.

