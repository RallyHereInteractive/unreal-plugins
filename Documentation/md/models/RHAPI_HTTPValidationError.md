# RHAPI_HTTPValidationError <a id="group__RHAPI__HTTPValidationError"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HTTPValidationError`](#structFRHAPI__HTTPValidationError) | 

## struct `FRHAPI_HTTPValidationError` <a id="structFRHAPI__HTTPValidationError"></a>

```
struct FRHAPI_HTTPValidationError
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > `[`Detail_Optional`](#structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9) | 
`public bool `[`Detail_IsSet`](#structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090) | true if Detail_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__HTTPValidationError_1a1b14f96f3b555573c6a8a0427591684b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__HTTPValidationError_1ada9fc3bd658abc6828ba3a33dc4dba0b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900)`()` | Gets the value of Detail_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb)`() const` | Gets the value of Detail_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & DefaultValue) const` | Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & OutValue) const` | Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1)`()` | Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed)`() const` | Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1ab5da2c3ae56e603b3f130829b8fbabb5)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > NewValue)` | Sets the value of Detail_Optional and also sets Detail_IsSet to true.
`public inline void `[`ClearDetail`](#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)`()` | Clears the value of Detail_Optional and sets Detail_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > `[`Detail_Optional`](#structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9) <a id="structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9"></a>

<br>
#### `public bool `[`Detail_IsSet`](#structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090) <a id="structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090"></a>

true if Detail_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__HTTPValidationError_1a1b14f96f3b555573c6a8a0427591684b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__HTTPValidationError_1a1b14f96f3b555573c6a8a0427591684b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__HTTPValidationError_1ada9fc3bd658abc6828ba3a33dc4dba0b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__HTTPValidationError_1ada9fc3bd658abc6828ba3a33dc4dba0b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900)`()` <a id="structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900"></a>

Gets the value of Detail_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb)`() const` <a id="structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb"></a>

Gets the value of Detail_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4)`(const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & DefaultValue) const` <a id="structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4"></a>

Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDetail`](#structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > & OutValue) const` <a id="structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea"></a>

Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1)`()` <a id="structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1"></a>

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > * `[`GetDetailOrNull`](#structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed)`() const` <a id="structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed"></a>

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDetail`](#structFRHAPI__HTTPValidationError_1ab5da2c3ae56e603b3f130829b8fbabb5)`(TArray< `[`FRHAPI_ValidationError`](RHAPI_ValidationError.md#structFRHAPI__ValidationError)` > NewValue)` <a id="structFRHAPI__HTTPValidationError_1ab5da2c3ae56e603b3f130829b8fbabb5"></a>

Sets the value of Detail_Optional and also sets Detail_IsSet to true.

<br>
#### `public inline void `[`ClearDetail`](#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)`()` <a id="structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab"></a>

Clears the value of Detail_Optional and sets Detail_IsSet to false.

<br>
