# RHAPI_BrowserSessionInfo <a id="group__RHAPI__BrowserSessionInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserSessionInfo`](#structFRHAPI__BrowserSessionInfo) | 

## struct `FRHAPI_BrowserSessionInfo` <a id="structFRHAPI__BrowserSessionInfo"></a>

```
struct FRHAPI_BrowserSessionInfo
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a) | ID for the session.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d) | Custom data with the listing of the instance in the Session browser.
`public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1adda53283e5c9709509eb99376cab0d5d)`(FString NewValue)` | Sets the value of SessionId.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a35ebc4fc8566513ff72476b165e53875)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`SessionId`](#structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a) <a id="structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a"></a>

ID for the session.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d) <a id="structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d"></a>

Custom data with the listing of the instance in the Session browser.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3) <a id="structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e)`()` <a id="structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e"></a>

Gets the value of SessionId.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3"></a>

Gets the value of SessionId.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1adda53283e5c9709509eb99376cab0d5d)`(FString NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1adda53283e5c9709509eb99376cab0d5d"></a>

Sets the value of SessionId.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380)`()` <a id="structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a35ebc4fc8566513ff72476b165e53875)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a35ebc4fc8566513ff72476b165e53875"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` <a id="structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
