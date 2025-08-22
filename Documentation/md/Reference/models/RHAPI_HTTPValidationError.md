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
`public virtual void `[`WriteJson`](#structFRHAPI__HTTPValidationError_1a714ca73759eb65c8f623381fde20c3f1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1afa7d82fef3125c43855816242cc1e8d6)`()` | Gets the value of Detail_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a752c3358403ff01e925c9c9e892f0ea0)`() const` | Gets the value of Detail_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a0ca0e5fd7009c81d7c656587d696f71f)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & DefaultValue) const` | Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a70c16cc82c9dfa3f9a8a58ba0edf402a)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & OutValue) const` | Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1a2474c1ee53fc07938c488a7dfd0745bd)`()` | Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1a66a316cee830bd008ac319921c20e741)`() const` | Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1ad65903c799e9baeb50654c2d6cbf82e6)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & NewValue)` | Sets the value of Detail_Optional and also sets Detail_IsSet to true.
`public inline FORCEINLINE void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1a7ee540627c25aa6c05c1557f6217ef4d)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > && NewValue)` | Sets the value of Detail_Optional and also sets Detail_IsSet to true using move semantics.
`public inline void `[`ClearDetail`](#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)`()` | Clears the value of Detail_Optional and sets Detail_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__HTTPValidationError_1a714ca73759eb65c8f623381fde20c3f1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__HTTPValidationError_1a714ca73759eb65c8f623381fde20c3f1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1afa7d82fef3125c43855816242cc1e8d6)`()` <a id="structFRHAPI__HTTPValidationError_1afa7d82fef3125c43855816242cc1e8d6"></a>

Gets the value of Detail_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a752c3358403ff01e925c9c9e892f0ea0)`() const` <a id="structFRHAPI__HTTPValidationError_1a752c3358403ff01e925c9c9e892f0ea0"></a>

Gets the value of Detail_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a0ca0e5fd7009c81d7c656587d696f71f)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & DefaultValue) const` <a id="structFRHAPI__HTTPValidationError_1a0ca0e5fd7009c81d7c656587d696f71f"></a>

Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a70c16cc82c9dfa3f9a8a58ba0edf402a)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & OutValue) const` <a id="structFRHAPI__HTTPValidationError_1a70c16cc82c9dfa3f9a8a58ba0edf402a"></a>

Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1a2474c1ee53fc07938c488a7dfd0745bd)`()` <a id="structFRHAPI__HTTPValidationError_1a2474c1ee53fc07938c488a7dfd0745bd"></a>

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1a66a316cee830bd008ac319921c20e741)`() const` <a id="structFRHAPI__HTTPValidationError_1a66a316cee830bd008ac319921c20e741"></a>

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1ad65903c799e9baeb50654c2d6cbf82e6)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & NewValue)` <a id="structFRHAPI__HTTPValidationError_1ad65903c799e9baeb50654c2d6cbf82e6"></a>

Sets the value of Detail_Optional and also sets Detail_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1a7ee540627c25aa6c05c1557f6217ef4d)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > && NewValue)` <a id="structFRHAPI__HTTPValidationError_1a7ee540627c25aa6c05c1557f6217ef4d"></a>

Sets the value of Detail_Optional and also sets Detail_IsSet to true using move semantics.

#### `public inline void `[`ClearDetail`](#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)`()` <a id="structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab"></a>

Clears the value of Detail_Optional and sets Detail_IsSet to false.

