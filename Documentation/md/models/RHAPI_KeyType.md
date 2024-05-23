# group `RHAPI_KeyType` <a id="group__RHAPI__KeyType"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KeyType`](#structFRHAPI__KeyType) | A Key Type is a type of key that can be claimed from a Marketing Campaign.

## struct `FRHAPI_KeyType` <a id="structFRHAPI__KeyType"></a>

```
struct FRHAPI_KeyType
  : public FRHAPI_Model
```

A Key Type is a type of key that can be claimed from a Marketing Campaign.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type`](#structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde) | The type of key.
`public virtual bool `[`FromJson`](#structFRHAPI__KeyType_1af7191d475c90e3a0816b5d4bf43ae328)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyType_1a2f8918a400e913e9034377d936692548)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__KeyType_1a6246f2efe400fcd0ef63b8cea89b836a)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__KeyType_1ae2f4df1be8a30aa99befe068994848ed)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__KeyType_1a226dd08eb7860a5039e68572698f852b)`(const FString & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__KeyType_1a191abc9192c5780495c18c204b83cdf6)`(FString && NewValue)` | Sets the value of Type using move semantics.

### Members

#### `public FString `[`Type`](#structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde) <a id="structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde"></a>

The type of key.

#### `public virtual bool `[`FromJson`](#structFRHAPI__KeyType_1af7191d475c90e3a0816b5d4bf43ae328)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KeyType_1af7191d475c90e3a0816b5d4bf43ae328"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KeyType_1a2f8918a400e913e9034377d936692548)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KeyType_1a2f8918a400e913e9034377d936692548"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__KeyType_1a6246f2efe400fcd0ef63b8cea89b836a)`()` <a id="structFRHAPI__KeyType_1a6246f2efe400fcd0ef63b8cea89b836a"></a>

Gets the value of Type.

#### `public inline const FString & `[`GetType`](#structFRHAPI__KeyType_1ae2f4df1be8a30aa99befe068994848ed)`() const` <a id="structFRHAPI__KeyType_1ae2f4df1be8a30aa99befe068994848ed"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__KeyType_1a226dd08eb7860a5039e68572698f852b)`(const FString & NewValue)` <a id="structFRHAPI__KeyType_1a226dd08eb7860a5039e68572698f852b"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__KeyType_1a191abc9192c5780495c18c204b83cdf6)`(FString && NewValue)` <a id="structFRHAPI__KeyType_1a191abc9192c5780495c18c204b83cdf6"></a>

Sets the value of Type using move semantics.

