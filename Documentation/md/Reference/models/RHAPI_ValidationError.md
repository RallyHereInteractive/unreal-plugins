---
title: RHAPI_ValidationError
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ValidationError`](#structFRHAPI__ValidationError) | 

## struct `FRHAPI_ValidationError` <a id="structFRHAPI__ValidationError"></a>

```
struct FRHAPI_ValidationError
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > `[`Loc`](#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095) | 
`public FString `[`Msg`](#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c) | 
`public FString `[`Type`](#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18) | 
`public virtual bool `[`FromJson`](#structFRHAPI__ValidationError_1a5292552a28b325837314a85273c37612)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ValidationError_1a5771c3c64fe11f17422786eef8d3f9f2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1a5d5c72662f0996c0774b4a168feeecae)`()` | Gets the value of Loc.
`public inline const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1a0cf931bb84a4cd6e99ce0c2701ebbaee)`() const` | Gets the value of Loc.
`public inline void `[`SetLoc`](#structFRHAPI__ValidationError_1af21480c81ac669bd963361807082dc17)`(const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & NewValue)` | Sets the value of Loc.
`public inline void `[`SetLoc`](#structFRHAPI__ValidationError_1afdb49da714dbbe1b0c69169e998c883c)`(TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > && NewValue)` | Sets the value of Loc using move semantics.
`public inline FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a831959c1218a93d4373b03baee26afd6)`()` | Gets the value of Msg.
`public inline const FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a50f2f86e5cc08bde8cb25f512c844cca)`() const` | Gets the value of Msg.
`public inline void `[`SetMsg`](#structFRHAPI__ValidationError_1a0bcdb73934d686e5aafaee2832f78e58)`(const FString & NewValue)` | Sets the value of Msg.
`public inline void `[`SetMsg`](#structFRHAPI__ValidationError_1a64ef8810e9829c350b2496da1f724bcf)`(FString && NewValue)` | Sets the value of Msg using move semantics.
`public inline FString & `[`GetType`](#structFRHAPI__ValidationError_1a3d53651b300780ed410d38ca90b9c68c)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__ValidationError_1af45b784006d4080398d3ebc639697ca5)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__ValidationError_1a78392f271dd7cdaf162aa11b1625d0df)`(const FString & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__ValidationError_1adc9a82d4bbe035c68a23e59125f18112)`(FString && NewValue)` | Sets the value of Type using move semantics.

### Members

#### `public TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > `[`Loc`](#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095) <a id="structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095"></a>

#### `public FString `[`Msg`](#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c) <a id="structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c"></a>

#### `public FString `[`Type`](#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18) <a id="structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__ValidationError_1a5292552a28b325837314a85273c37612)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ValidationError_1a5292552a28b325837314a85273c37612"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ValidationError_1a5771c3c64fe11f17422786eef8d3f9f2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ValidationError_1a5771c3c64fe11f17422786eef8d3f9f2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1a5d5c72662f0996c0774b4a168feeecae)`()` <a id="structFRHAPI__ValidationError_1a5d5c72662f0996c0774b4a168feeecae"></a>

Gets the value of Loc.

#### `public inline const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1a0cf931bb84a4cd6e99ce0c2701ebbaee)`() const` <a id="structFRHAPI__ValidationError_1a0cf931bb84a4cd6e99ce0c2701ebbaee"></a>

Gets the value of Loc.

#### `public inline void `[`SetLoc`](#structFRHAPI__ValidationError_1af21480c81ac669bd963361807082dc17)`(const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & NewValue)` <a id="structFRHAPI__ValidationError_1af21480c81ac669bd963361807082dc17"></a>

Sets the value of Loc.

#### `public inline void `[`SetLoc`](#structFRHAPI__ValidationError_1afdb49da714dbbe1b0c69169e998c883c)`(TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > && NewValue)` <a id="structFRHAPI__ValidationError_1afdb49da714dbbe1b0c69169e998c883c"></a>

Sets the value of Loc using move semantics.

#### `public inline FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a831959c1218a93d4373b03baee26afd6)`()` <a id="structFRHAPI__ValidationError_1a831959c1218a93d4373b03baee26afd6"></a>

Gets the value of Msg.

#### `public inline const FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a50f2f86e5cc08bde8cb25f512c844cca)`() const` <a id="structFRHAPI__ValidationError_1a50f2f86e5cc08bde8cb25f512c844cca"></a>

Gets the value of Msg.

#### `public inline void `[`SetMsg`](#structFRHAPI__ValidationError_1a0bcdb73934d686e5aafaee2832f78e58)`(const FString & NewValue)` <a id="structFRHAPI__ValidationError_1a0bcdb73934d686e5aafaee2832f78e58"></a>

Sets the value of Msg.

#### `public inline void `[`SetMsg`](#structFRHAPI__ValidationError_1a64ef8810e9829c350b2496da1f724bcf)`(FString && NewValue)` <a id="structFRHAPI__ValidationError_1a64ef8810e9829c350b2496da1f724bcf"></a>

Sets the value of Msg using move semantics.

#### `public inline FString & `[`GetType`](#structFRHAPI__ValidationError_1a3d53651b300780ed410d38ca90b9c68c)`()` <a id="structFRHAPI__ValidationError_1a3d53651b300780ed410d38ca90b9c68c"></a>

Gets the value of Type.

#### `public inline const FString & `[`GetType`](#structFRHAPI__ValidationError_1af45b784006d4080398d3ebc639697ca5)`() const` <a id="structFRHAPI__ValidationError_1af45b784006d4080398d3ebc639697ca5"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__ValidationError_1a78392f271dd7cdaf162aa11b1625d0df)`(const FString & NewValue)` <a id="structFRHAPI__ValidationError_1a78392f271dd7cdaf162aa11b1625d0df"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__ValidationError_1adc9a82d4bbe035c68a23e59125f18112)`(FString && NewValue)` <a id="structFRHAPI__ValidationError_1adc9a82d4bbe035c68a23e59125f18112"></a>

Sets the value of Type using move semantics.

