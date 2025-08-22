---
title: RHAPI_ManyPlayerOrderResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ManyPlayerOrderResponse`](#structFRHAPI__ManyPlayerOrderResponse) | Response listing order IDs for a bulk order request.

## struct `FRHAPI_ManyPlayerOrderResponse` <a id="structFRHAPI__ManyPlayerOrderResponse"></a>

```
struct FRHAPI_ManyPlayerOrderResponse
  : public FRHAPI_Model
```

Response listing order IDs for a bulk order request.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FString > `[`OrderIds_Optional`](#structFRHAPI__ManyPlayerOrderResponse_1af5e0d38b84bcf2a1d25e4cac805bdbe3) | Order IDs submitted in the request.
`public bool `[`OrderIds_IsSet`](#structFRHAPI__ManyPlayerOrderResponse_1a4d8d90b7d725daeec9bc9fffe92f2412) | true if OrderIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ManyPlayerOrderResponse_1ad55b99fcc8514cb1c03cd0e455f9bcd0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ManyPlayerOrderResponse_1a14672c2bc550d634a32a83df3f260fa6)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1ad183e9c35ef3bb2d1c0ce4c3c65ba94a)`()` | Gets the value of OrderIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a4b5989a13c157a9e88f4c14f4e85a408)`() const` | Gets the value of OrderIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a0572ab0d33bf50b57613a1cf664ddd7a)`(const TArray< FString > & DefaultValue) const` | Gets the value of OrderIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1adf1cb6e170d91c0e78190c06c19d6143)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of OrderIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1a231c7c7a90c782870a348801b85ea96f)`()` | Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1a369755bb4e489a9c74e75726f9585af9)`() const` | Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a41f34e323dadf10f2ba06332d9ca157f)`(const TArray< FString > & NewValue)` | Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a6b9cb00b7a632570a90e4e8a0766529d)`(TArray< FString > && NewValue)` | Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true using move semantics.
`public inline void `[`ClearOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a972f2d1cdac042f5f23a55c1bb0125fb)`()` | Clears the value of OrderIds_Optional and sets OrderIds_IsSet to false.

### Members

#### `public TArray< FString > `[`OrderIds_Optional`](#structFRHAPI__ManyPlayerOrderResponse_1af5e0d38b84bcf2a1d25e4cac805bdbe3) <a id="structFRHAPI__ManyPlayerOrderResponse_1af5e0d38b84bcf2a1d25e4cac805bdbe3"></a>

Order IDs submitted in the request.

#### `public bool `[`OrderIds_IsSet`](#structFRHAPI__ManyPlayerOrderResponse_1a4d8d90b7d725daeec9bc9fffe92f2412) <a id="structFRHAPI__ManyPlayerOrderResponse_1a4d8d90b7d725daeec9bc9fffe92f2412"></a>

true if OrderIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ManyPlayerOrderResponse_1ad55b99fcc8514cb1c03cd0e455f9bcd0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ManyPlayerOrderResponse_1ad55b99fcc8514cb1c03cd0e455f9bcd0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ManyPlayerOrderResponse_1a14672c2bc550d634a32a83df3f260fa6)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a14672c2bc550d634a32a83df3f260fa6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1ad183e9c35ef3bb2d1c0ce4c3c65ba94a)`()` <a id="structFRHAPI__ManyPlayerOrderResponse_1ad183e9c35ef3bb2d1c0ce4c3c65ba94a"></a>

Gets the value of OrderIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a4b5989a13c157a9e88f4c14f4e85a408)`() const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a4b5989a13c157a9e88f4c14f4e85a408"></a>

Gets the value of OrderIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a0572ab0d33bf50b57613a1cf664ddd7a)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a0572ab0d33bf50b57613a1cf664ddd7a"></a>

Gets the value of OrderIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1adf1cb6e170d91c0e78190c06c19d6143)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__ManyPlayerOrderResponse_1adf1cb6e170d91c0e78190c06c19d6143"></a>

Fills OutValue with the value of OrderIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1a231c7c7a90c782870a348801b85ea96f)`()` <a id="structFRHAPI__ManyPlayerOrderResponse_1a231c7c7a90c782870a348801b85ea96f"></a>

Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1a369755bb4e489a9c74e75726f9585af9)`() const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a369755bb4e489a9c74e75726f9585af9"></a>

Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a41f34e323dadf10f2ba06332d9ca157f)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__ManyPlayerOrderResponse_1a41f34e323dadf10f2ba06332d9ca157f"></a>

Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a6b9cb00b7a632570a90e4e8a0766529d)`(TArray< FString > && NewValue)` <a id="structFRHAPI__ManyPlayerOrderResponse_1a6b9cb00b7a632570a90e4e8a0766529d"></a>

Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a972f2d1cdac042f5f23a55c1bb0125fb)`()` <a id="structFRHAPI__ManyPlayerOrderResponse_1a972f2d1cdac042f5f23a55c1bb0125fb"></a>

Clears the value of OrderIds_Optional and sets OrderIds_IsSet to false.

