---
title: RHAPI_HTTPValidationError
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HTTPValidationError`](#structFRHAPI__HTTPValidationError) | 

## struct `FRHAPI_HTTPValidationError` <a id="structFRHAPI__HTTPValidationError"></a>

```
struct FRHAPI_HTTPValidationError
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > `[`Detail_Optional`](#structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9) | 
`public bool `[`Detail_IsSet`](#structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090) | true if Detail_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__HTTPValidationError_1a60959951088adf8b9e93ee360b07b067)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__HTTPValidationError_1a8087c6dc741c5659b32163f30e2d6ba9)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900)`()` | Gets the value of Detail_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb)`() const` | Gets the value of Detail_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & DefaultValue) const` | Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & OutValue) const` | Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1)`()` | Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed)`() const` | Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1af63be614152fce3a6283029c6aceb4d1)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & NewValue)` | Sets the value of Detail_Optional and also sets Detail_IsSet to true.
`public inline void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1ac73f4df75f7ab26f4ef7cef8b71701d0)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > && NewValue)` | Sets the value of Detail_Optional and also sets Detail_IsSet to true using move semantics.
`public inline void `[`ClearDetail`](#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)`()` | Clears the value of Detail_Optional and sets Detail_IsSet to false.
`public inline bool `[`IsDetailSet`](#structFRHAPI__HTTPValidationError_1a35e2cc9cb95a0885b2db4830e045d690)`() const` | Checks whether Detail_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > `[`Detail_Optional`](#structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9) <a id="structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9"></a>

#### `public bool `[`Detail_IsSet`](#structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090) <a id="structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090"></a>

true if Detail_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__HTTPValidationError_1a60959951088adf8b9e93ee360b07b067)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__HTTPValidationError_1a60959951088adf8b9e93ee360b07b067"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__HTTPValidationError_1a8087c6dc741c5659b32163f30e2d6ba9)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__HTTPValidationError_1a8087c6dc741c5659b32163f30e2d6ba9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900)`()` <a id="structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900"></a>

Gets the value of Detail_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb)`() const` <a id="structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb"></a>

Gets the value of Detail_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & DefaultValue) const` <a id="structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4"></a>

Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & OutValue) const` <a id="structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea"></a>

Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1)`()` <a id="structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1"></a>

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed)`() const` <a id="structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed"></a>

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1af63be614152fce3a6283029c6aceb4d1)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & NewValue)` <a id="structFRHAPI__HTTPValidationError_1af63be614152fce3a6283029c6aceb4d1"></a>

Sets the value of Detail_Optional and also sets Detail_IsSet to true.

#### `public inline void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1ac73f4df75f7ab26f4ef7cef8b71701d0)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > && NewValue)` <a id="structFRHAPI__HTTPValidationError_1ac73f4df75f7ab26f4ef7cef8b71701d0"></a>

Sets the value of Detail_Optional and also sets Detail_IsSet to true using move semantics.

#### `public inline void `[`ClearDetail`](#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)`()` <a id="structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab"></a>

Clears the value of Detail_Optional and sets Detail_IsSet to false.

#### `public inline bool `[`IsDetailSet`](#structFRHAPI__HTTPValidationError_1a35e2cc9cb95a0885b2db4830e045d690)`() const` <a id="structFRHAPI__HTTPValidationError_1a35e2cc9cb95a0885b2db4830e045d690"></a>

Checks whether Detail_Optional has been set.

