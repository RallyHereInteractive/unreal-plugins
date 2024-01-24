# RHAPI_ValidationError <a id="group__RHAPI__ValidationError"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ValidationError`](#structFRHAPI__ValidationError) | 

## struct `FRHAPI_ValidationError` <a id="structFRHAPI__ValidationError"></a>

```
struct FRHAPI_ValidationError
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > `[`Loc`](#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095) | 
`public FString `[`Msg`](#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c) | 
`public FString `[`Type`](#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18) | 
`public virtual bool `[`FromJson`](#structFRHAPI__ValidationError_1ab3562d087a66613270f2c2108ff79b78)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ValidationError_1a6ad60c5e03c830506b58887849fa43db)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1abf1227d9ef5b4a4238422c016c0859da)`()` | Gets the value of Loc.
`public inline const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1afee16f1cb4b4b1cff3be2fb367b9194b)`() const` | Gets the value of Loc.
`public inline void `[`SetLoc`](#structFRHAPI__ValidationError_1a790dc5f32c3159f3c633eb0edb85edd7)`(TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > NewValue)` | Sets the value of Loc.
`public inline FString & `[`GetMsg`](#structFRHAPI__ValidationError_1af87c82841237f79052cce426ba7c8f4e)`()` | Gets the value of Msg.
`public inline const FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a033c4d3989361b189cbe719e9e3ada43)`() const` | Gets the value of Msg.
`public inline void `[`SetMsg`](#structFRHAPI__ValidationError_1a7025c8b35b61d2523cf426fd577cddae)`(FString NewValue)` | Sets the value of Msg.
`public inline FString & `[`GetType`](#structFRHAPI__ValidationError_1a1d00a847b3b555ad080655ebe0b5c261)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__ValidationError_1a03c34fe18e8cbc74092d32accdc5d041)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__ValidationError_1a4a714bf3a474e5ee8407c274514ae753)`(FString NewValue)` | Sets the value of Type.

#### Members

#### `public TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > `[`Loc`](#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095) <a id="structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095"></a>

<br>
#### `public FString `[`Msg`](#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c) <a id="structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c"></a>

<br>
#### `public FString `[`Type`](#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18) <a id="structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__ValidationError_1ab3562d087a66613270f2c2108ff79b78)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ValidationError_1ab3562d087a66613270f2c2108ff79b78"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__ValidationError_1a6ad60c5e03c830506b58887849fa43db)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__ValidationError_1a6ad60c5e03c830506b58887849fa43db"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1abf1227d9ef5b4a4238422c016c0859da)`()` <a id="structFRHAPI__ValidationError_1abf1227d9ef5b4a4238422c016c0859da"></a>

Gets the value of Loc.

<br>
#### `public inline const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1afee16f1cb4b4b1cff3be2fb367b9194b)`() const` <a id="structFRHAPI__ValidationError_1afee16f1cb4b4b1cff3be2fb367b9194b"></a>

Gets the value of Loc.

<br>
#### `public inline void `[`SetLoc`](#structFRHAPI__ValidationError_1a790dc5f32c3159f3c633eb0edb85edd7)`(TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > NewValue)` <a id="structFRHAPI__ValidationError_1a790dc5f32c3159f3c633eb0edb85edd7"></a>

Sets the value of Loc.

<br>
#### `public inline FString & `[`GetMsg`](#structFRHAPI__ValidationError_1af87c82841237f79052cce426ba7c8f4e)`()` <a id="structFRHAPI__ValidationError_1af87c82841237f79052cce426ba7c8f4e"></a>

Gets the value of Msg.

<br>
#### `public inline const FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a033c4d3989361b189cbe719e9e3ada43)`() const` <a id="structFRHAPI__ValidationError_1a033c4d3989361b189cbe719e9e3ada43"></a>

Gets the value of Msg.

<br>
#### `public inline void `[`SetMsg`](#structFRHAPI__ValidationError_1a7025c8b35b61d2523cf426fd577cddae)`(FString NewValue)` <a id="structFRHAPI__ValidationError_1a7025c8b35b61d2523cf426fd577cddae"></a>

Sets the value of Msg.

<br>
#### `public inline FString & `[`GetType`](#structFRHAPI__ValidationError_1a1d00a847b3b555ad080655ebe0b5c261)`()` <a id="structFRHAPI__ValidationError_1a1d00a847b3b555ad080655ebe0b5c261"></a>

Gets the value of Type.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__ValidationError_1a03c34fe18e8cbc74092d32accdc5d041)`() const` <a id="structFRHAPI__ValidationError_1a03c34fe18e8cbc74092d32accdc5d041"></a>

Gets the value of Type.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__ValidationError_1a4a714bf3a474e5ee8407c274514ae753)`(FString NewValue)` <a id="structFRHAPI__ValidationError_1a4a714bf3a474e5ee8407c274514ae753"></a>

Sets the value of Type.

<br>
