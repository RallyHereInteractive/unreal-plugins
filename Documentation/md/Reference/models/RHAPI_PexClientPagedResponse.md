---
title: RHAPI_PexClientPagedResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexClientPagedResponse`](#structFRHAPI__PexClientPagedResponse) | 

## struct `FRHAPI_PexClientPagedResponse` <a id="structFRHAPI__PexClientPagedResponse"></a>

```
struct FRHAPI_PexClientPagedResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > `[`Results_Optional`](#structFRHAPI__PexClientPagedResponse_1adad47f8bed21a4ae239f87f17c6d995f) | List of PEX reports for this match.
`public bool `[`Results_IsSet`](#structFRHAPI__PexClientPagedResponse_1ad2860220052c79c8bd663d2552c5356a) | true if Results_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PexClientPagedResponse_1ae98a62c93ed61bea927f23ed7b3267ac) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PexClientPagedResponse_1a520b3c1c0b03311b5c74e09a5fdde2d9) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__PexClientPagedResponse_1abb88fc05ab34683e4122f862682700b9) | true if Cursor_Optional has been explicitly set to null
`public `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` `[`Filters_Optional`](#structFRHAPI__PexClientPagedResponse_1a70a2f02deee5d82ec2a902eb9f9edcbd) | 
`public bool `[`Filters_IsSet`](#structFRHAPI__PexClientPagedResponse_1ab94b2e8681290b3a40ed40d6f201fc56) | true if Filters_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PexClientPagedResponse_1a241138d9dd5b7bb529760e66a1289729)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexClientPagedResponse_1a2b8a81fecd20ba524569e367f3607989)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1acc6bbaed76b21798bf6546694e735176)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1a1f7f4829bd01e222898ce958daf428e3)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1af38621c88ae3b0d1e33f4fc425092ffe)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1aa8a52b3f2ed1ae19750e15a88aa07611)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1a3dd8045f596e7123f8f0a9eb5b8e0fd5)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1abe851a1ec2d6eb1169307639a53e1912)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1af3d013fb87efe5811040cc9460549444)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1aace99e0eb6bf3f394c4477b1fd525b58)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__PexClientPagedResponse_1afef41ea10dc074cd8227daaf1679a28c)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline bool `[`IsResultsSet`](#structFRHAPI__PexClientPagedResponse_1a64c4772c56cf39a414097279bcfb5d05)`() const` | Checks whether Results_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a531a833bfa98629fb0ebf88b86edd5c7)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1ae3af02154ccba51ff0546eeec6af32a0)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a32291be49c093a239938caa20fb83640)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1aff1b60f4ed3cf08acd59b3afb655540e)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a9ff9e8d344e34feef51da7365292f456)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a5bc366f3d2d101314f348986940b8488)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1a52af8696d39be3e0977a914801e48d33)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1a604eef08a8e7c935a599fd56354f22b5)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PexClientPagedResponse_1a8f801d75747c90bdea767648f86446d9)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__PexClientPagedResponse_1a2c577ceafa9ea76f7c047653474f01b1)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__PexClientPagedResponse_1a372d4da391d965b88ef89b3ff63bc888)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__PexClientPagedResponse_1a5cd2fd392020fd0018385409a4a60e84)`() const` | Checks whether Cursor_Optional is set to null.
`public inline `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1ac1e1cdc6b291193b9db15a9b33a25b60)`()` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a5b5ffa6335d3d43143962b87de187a4b)`() const` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1ae196fa13e661f710863f2afb65c5b386)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & DefaultValue) const` | Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a3814dca46da1ae2cc50314a10a31078f)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & OutValue) const` | Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1a26554a99bae22fe03ee9cd23b82e306c)`()` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1af656d34475810376ff4cfdf22325efd6)`() const` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a5886836d894686c43b891b04130d6ff8)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true.
`public inline void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a52b87f48f84d711085c7599d3b8ff485)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` && NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.
`public inline void `[`ClearFilters`](#structFRHAPI__PexClientPagedResponse_1a4b428256793bec82e14173ad92e0e483)`()` | Clears the value of Filters_Optional and sets Filters_IsSet to false.
`public inline bool `[`IsFiltersSet`](#structFRHAPI__PexClientPagedResponse_1ad74d506eb03802f49a6426bbbd5cf143)`() const` | Checks whether Filters_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > `[`Results_Optional`](#structFRHAPI__PexClientPagedResponse_1adad47f8bed21a4ae239f87f17c6d995f) <a id="structFRHAPI__PexClientPagedResponse_1adad47f8bed21a4ae239f87f17c6d995f"></a>

List of PEX reports for this match.

#### `public bool `[`Results_IsSet`](#structFRHAPI__PexClientPagedResponse_1ad2860220052c79c8bd663d2552c5356a) <a id="structFRHAPI__PexClientPagedResponse_1ad2860220052c79c8bd663d2552c5356a"></a>

true if Results_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PexClientPagedResponse_1ae98a62c93ed61bea927f23ed7b3267ac) <a id="structFRHAPI__PexClientPagedResponse_1ae98a62c93ed61bea927f23ed7b3267ac"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PexClientPagedResponse_1a520b3c1c0b03311b5c74e09a5fdde2d9) <a id="structFRHAPI__PexClientPagedResponse_1a520b3c1c0b03311b5c74e09a5fdde2d9"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__PexClientPagedResponse_1abb88fc05ab34683e4122f862682700b9) <a id="structFRHAPI__PexClientPagedResponse_1abb88fc05ab34683e4122f862682700b9"></a>

true if Cursor_Optional has been explicitly set to null

#### `public `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` `[`Filters_Optional`](#structFRHAPI__PexClientPagedResponse_1a70a2f02deee5d82ec2a902eb9f9edcbd) <a id="structFRHAPI__PexClientPagedResponse_1a70a2f02deee5d82ec2a902eb9f9edcbd"></a>

#### `public bool `[`Filters_IsSet`](#structFRHAPI__PexClientPagedResponse_1ab94b2e8681290b3a40ed40d6f201fc56) <a id="structFRHAPI__PexClientPagedResponse_1ab94b2e8681290b3a40ed40d6f201fc56"></a>

true if Filters_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexClientPagedResponse_1a241138d9dd5b7bb529760e66a1289729)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexClientPagedResponse_1a241138d9dd5b7bb529760e66a1289729"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexClientPagedResponse_1a2b8a81fecd20ba524569e367f3607989)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PexClientPagedResponse_1a2b8a81fecd20ba524569e367f3607989"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1acc6bbaed76b21798bf6546694e735176)`()` <a id="structFRHAPI__PexClientPagedResponse_1acc6bbaed76b21798bf6546694e735176"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1a1f7f4829bd01e222898ce958daf428e3)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a1f7f4829bd01e222898ce958daf428e3"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1af38621c88ae3b0d1e33f4fc425092ffe)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & DefaultValue) const` <a id="structFRHAPI__PexClientPagedResponse_1af38621c88ae3b0d1e33f4fc425092ffe"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1aa8a52b3f2ed1ae19750e15a88aa07611)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & OutValue) const` <a id="structFRHAPI__PexClientPagedResponse_1aa8a52b3f2ed1ae19750e15a88aa07611"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1a3dd8045f596e7123f8f0a9eb5b8e0fd5)`()` <a id="structFRHAPI__PexClientPagedResponse_1a3dd8045f596e7123f8f0a9eb5b8e0fd5"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1abe851a1ec2d6eb1169307639a53e1912)`() const` <a id="structFRHAPI__PexClientPagedResponse_1abe851a1ec2d6eb1169307639a53e1912"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1af3d013fb87efe5811040cc9460549444)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1af3d013fb87efe5811040cc9460549444"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1aace99e0eb6bf3f394c4477b1fd525b58)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > && NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1aace99e0eb6bf3f394c4477b1fd525b58"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__PexClientPagedResponse_1afef41ea10dc074cd8227daaf1679a28c)`()` <a id="structFRHAPI__PexClientPagedResponse_1afef41ea10dc074cd8227daaf1679a28c"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline bool `[`IsResultsSet`](#structFRHAPI__PexClientPagedResponse_1a64c4772c56cf39a414097279bcfb5d05)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a64c4772c56cf39a414097279bcfb5d05"></a>

Checks whether Results_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a531a833bfa98629fb0ebf88b86edd5c7)`()` <a id="structFRHAPI__PexClientPagedResponse_1a531a833bfa98629fb0ebf88b86edd5c7"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1ae3af02154ccba51ff0546eeec6af32a0)`() const` <a id="structFRHAPI__PexClientPagedResponse_1ae3af02154ccba51ff0546eeec6af32a0"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a32291be49c093a239938caa20fb83640)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientPagedResponse_1a32291be49c093a239938caa20fb83640"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1aff1b60f4ed3cf08acd59b3afb655540e)`(FString & OutValue) const` <a id="structFRHAPI__PexClientPagedResponse_1aff1b60f4ed3cf08acd59b3afb655540e"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a9ff9e8d344e34feef51da7365292f456)`()` <a id="structFRHAPI__PexClientPagedResponse_1a9ff9e8d344e34feef51da7365292f456"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a5bc366f3d2d101314f348986940b8488)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a5bc366f3d2d101314f348986940b8488"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1a52af8696d39be3e0977a914801e48d33)`(const FString & NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a52af8696d39be3e0977a914801e48d33"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1a604eef08a8e7c935a599fd56354f22b5)`(FString && NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a604eef08a8e7c935a599fd56354f22b5"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PexClientPagedResponse_1a8f801d75747c90bdea767648f86446d9)`()` <a id="structFRHAPI__PexClientPagedResponse_1a8f801d75747c90bdea767648f86446d9"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__PexClientPagedResponse_1a2c577ceafa9ea76f7c047653474f01b1)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a2c577ceafa9ea76f7c047653474f01b1"></a>

Checks whether Cursor_Optional has been set.

#### `public inline void `[`SetCursorToNull`](#structFRHAPI__PexClientPagedResponse_1a372d4da391d965b88ef89b3ff63bc888)`()` <a id="structFRHAPI__PexClientPagedResponse_1a372d4da391d965b88ef89b3ff63bc888"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCursorNull`](#structFRHAPI__PexClientPagedResponse_1a5cd2fd392020fd0018385409a4a60e84)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a5cd2fd392020fd0018385409a4a60e84"></a>

Checks whether Cursor_Optional is set to null.

#### `public inline `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1ac1e1cdc6b291193b9db15a9b33a25b60)`()` <a id="structFRHAPI__PexClientPagedResponse_1ac1e1cdc6b291193b9db15a9b33a25b60"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a5b5ffa6335d3d43143962b87de187a4b)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a5b5ffa6335d3d43143962b87de187a4b"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1ae196fa13e661f710863f2afb65c5b386)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & DefaultValue) const` <a id="structFRHAPI__PexClientPagedResponse_1ae196fa13e661f710863f2afb65c5b386"></a>

Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a3814dca46da1ae2cc50314a10a31078f)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & OutValue) const` <a id="structFRHAPI__PexClientPagedResponse_1a3814dca46da1ae2cc50314a10a31078f"></a>

Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1a26554a99bae22fe03ee9cd23b82e306c)`()` <a id="structFRHAPI__PexClientPagedResponse_1a26554a99bae22fe03ee9cd23b82e306c"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1af656d34475810376ff4cfdf22325efd6)`() const` <a id="structFRHAPI__PexClientPagedResponse_1af656d34475810376ff4cfdf22325efd6"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a5886836d894686c43b891b04130d6ff8)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a5886836d894686c43b891b04130d6ff8"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true.

#### `public inline void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a52b87f48f84d711085c7599d3b8ff485)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` && NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a52b87f48f84d711085c7599d3b8ff485"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.

#### `public inline void `[`ClearFilters`](#structFRHAPI__PexClientPagedResponse_1a4b428256793bec82e14173ad92e0e483)`()` <a id="structFRHAPI__PexClientPagedResponse_1a4b428256793bec82e14173ad92e0e483"></a>

Clears the value of Filters_Optional and sets Filters_IsSet to false.

#### `public inline bool `[`IsFiltersSet`](#structFRHAPI__PexClientPagedResponse_1ad74d506eb03802f49a6426bbbd5cf143)`() const` <a id="structFRHAPI__PexClientPagedResponse_1ad74d506eb03802f49a6426bbbd5cf143"></a>

Checks whether Filters_Optional has been set.

