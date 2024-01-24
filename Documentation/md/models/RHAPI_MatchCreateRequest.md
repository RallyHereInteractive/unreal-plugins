# RHAPI_MatchCreateRequest <a id="group__RHAPI__MatchCreateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchCreateRequest`](#structFRHAPI__MatchCreateRequest) | A request to create a match resource on a session.

## struct `FRHAPI_MatchCreateRequest` <a id="structFRHAPI__MatchCreateRequest"></a>

```
struct FRHAPI_MatchCreateRequest
  : public FRHAPI_Model
```

A request to create a match resource on a session.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchId`](#structFRHAPI__MatchCreateRequest_1ad8d9a408fa37c4e799fa6c5d7bc7ac83) | Unique ID.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchCreateRequest_1a00ba1aa7b00b4c2d8712108d268e9bc8) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchCreateRequest_1ab895595c7d78c18ab51dadae3ff150a5) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchCreateRequest_1a104c9e01d8801fca4a59a2f875f8577c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchCreateRequest_1a53ef032e68d819118e7ef3b9fbe282ef)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchCreateRequest_1ab95fad88c9324938081892aa21da9702)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchCreateRequest_1ae604a67ed42e161b92abd82bf3a8b9c7)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchCreateRequest_1ab3c7b9cd8f85b6c645414679fa2b1c0c)`(FString NewValue)` | Sets the value of MatchId.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1a2eacd0abafeb9ddddbf706def27a9e58)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1ae76f0e12296ae1053f0268c344bf19f9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1abee56b52b554943eb4650fdfde1453b1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1aaba442e26327a10fb1d3afa07a02e742)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchCreateRequest_1af0cd0624bfc5034beb5c355f320b9781)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchCreateRequest_1aa590dae811bad14336ba8d1e3b79b2ef)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchCreateRequest_1aeee556c13a7be74b7f114a0b4f960a1d)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchCreateRequest_1a34b715446ca4696a633e5aee8e0e9914)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`MatchId`](#structFRHAPI__MatchCreateRequest_1ad8d9a408fa37c4e799fa6c5d7bc7ac83) <a id="structFRHAPI__MatchCreateRequest_1ad8d9a408fa37c4e799fa6c5d7bc7ac83"></a>

Unique ID.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchCreateRequest_1a00ba1aa7b00b4c2d8712108d268e9bc8) <a id="structFRHAPI__MatchCreateRequest_1a00ba1aa7b00b4c2d8712108d268e9bc8"></a>

instance-defined custom data

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchCreateRequest_1ab895595c7d78c18ab51dadae3ff150a5) <a id="structFRHAPI__MatchCreateRequest_1ab895595c7d78c18ab51dadae3ff150a5"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchCreateRequest_1a104c9e01d8801fca4a59a2f875f8577c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchCreateRequest_1a104c9e01d8801fca4a59a2f875f8577c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchCreateRequest_1a53ef032e68d819118e7ef3b9fbe282ef)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchCreateRequest_1a53ef032e68d819118e7ef3b9fbe282ef"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchCreateRequest_1ab95fad88c9324938081892aa21da9702)`()` <a id="structFRHAPI__MatchCreateRequest_1ab95fad88c9324938081892aa21da9702"></a>

Gets the value of MatchId.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchCreateRequest_1ae604a67ed42e161b92abd82bf3a8b9c7)`() const` <a id="structFRHAPI__MatchCreateRequest_1ae604a67ed42e161b92abd82bf3a8b9c7"></a>

Gets the value of MatchId.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchCreateRequest_1ab3c7b9cd8f85b6c645414679fa2b1c0c)`(FString NewValue)` <a id="structFRHAPI__MatchCreateRequest_1ab3c7b9cd8f85b6c645414679fa2b1c0c"></a>

Sets the value of MatchId.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1a2eacd0abafeb9ddddbf706def27a9e58)`()` <a id="structFRHAPI__MatchCreateRequest_1a2eacd0abafeb9ddddbf706def27a9e58"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1ae76f0e12296ae1053f0268c344bf19f9)`() const` <a id="structFRHAPI__MatchCreateRequest_1ae76f0e12296ae1053f0268c344bf19f9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1abee56b52b554943eb4650fdfde1453b1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchCreateRequest_1abee56b52b554943eb4650fdfde1453b1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchCreateRequest_1aaba442e26327a10fb1d3afa07a02e742)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchCreateRequest_1aaba442e26327a10fb1d3afa07a02e742"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchCreateRequest_1af0cd0624bfc5034beb5c355f320b9781)`()` <a id="structFRHAPI__MatchCreateRequest_1af0cd0624bfc5034beb5c355f320b9781"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchCreateRequest_1aa590dae811bad14336ba8d1e3b79b2ef)`() const` <a id="structFRHAPI__MatchCreateRequest_1aa590dae811bad14336ba8d1e3b79b2ef"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchCreateRequest_1aeee556c13a7be74b7f114a0b4f960a1d)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchCreateRequest_1aeee556c13a7be74b7f114a0b4f960a1d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchCreateRequest_1a34b715446ca4696a633e5aee8e0e9914)`()` <a id="structFRHAPI__MatchCreateRequest_1a34b715446ca4696a633e5aee8e0e9914"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
