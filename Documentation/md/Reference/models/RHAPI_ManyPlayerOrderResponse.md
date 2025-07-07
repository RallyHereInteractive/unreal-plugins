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
`public inline TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a9e52cc176830014671131d1dc9655f39)`()` | Gets the value of OrderIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a8b45ba49556d36c67576e7120a1116e6)`() const` | Gets the value of OrderIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1ad379578c3a6fa58d4f9bed912078eee0)`(const TArray< FString > & DefaultValue) const` | Gets the value of OrderIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a0db0a7f02a878519f6a0b77cdf66526e)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of OrderIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1ae26b55bafb0a06bd06003127c886419e)`()` | Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1ad8bf352a735b8ea06369d77e450ef398)`() const` | Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a2f3efcdf9026ed79d30e0a7d4a44a2c4)`(const TArray< FString > & NewValue)` | Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true.
`public inline void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a060a025a50943cbae8b849384331ce1e)`(TArray< FString > && NewValue)` | Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true using move semantics.
`public inline void `[`ClearOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a972f2d1cdac042f5f23a55c1bb0125fb)`()` | Clears the value of OrderIds_Optional and sets OrderIds_IsSet to false.
`public inline bool `[`IsOrderIdsSet`](#structFRHAPI__ManyPlayerOrderResponse_1a1905d2a4ba1db58094ff04767516c988)`() const` | Checks whether OrderIds_Optional has been set.

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

#### `public inline TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a9e52cc176830014671131d1dc9655f39)`()` <a id="structFRHAPI__ManyPlayerOrderResponse_1a9e52cc176830014671131d1dc9655f39"></a>

Gets the value of OrderIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a8b45ba49556d36c67576e7120a1116e6)`() const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a8b45ba49556d36c67576e7120a1116e6"></a>

Gets the value of OrderIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1ad379578c3a6fa58d4f9bed912078eee0)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__ManyPlayerOrderResponse_1ad379578c3a6fa58d4f9bed912078eee0"></a>

Gets the value of OrderIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a0db0a7f02a878519f6a0b77cdf66526e)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a0db0a7f02a878519f6a0b77cdf66526e"></a>

Fills OutValue with the value of OrderIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1ae26b55bafb0a06bd06003127c886419e)`()` <a id="structFRHAPI__ManyPlayerOrderResponse_1ae26b55bafb0a06bd06003127c886419e"></a>

Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetOrderIdsOrNull`](#structFRHAPI__ManyPlayerOrderResponse_1ad8bf352a735b8ea06369d77e450ef398)`() const` <a id="structFRHAPI__ManyPlayerOrderResponse_1ad8bf352a735b8ea06369d77e450ef398"></a>

Returns a pointer to OrderIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a2f3efcdf9026ed79d30e0a7d4a44a2c4)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__ManyPlayerOrderResponse_1a2f3efcdf9026ed79d30e0a7d4a44a2c4"></a>

Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true.

#### `public inline void `[`SetOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a060a025a50943cbae8b849384331ce1e)`(TArray< FString > && NewValue)` <a id="structFRHAPI__ManyPlayerOrderResponse_1a060a025a50943cbae8b849384331ce1e"></a>

Sets the value of OrderIds_Optional and also sets OrderIds_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderIds`](#structFRHAPI__ManyPlayerOrderResponse_1a972f2d1cdac042f5f23a55c1bb0125fb)`()` <a id="structFRHAPI__ManyPlayerOrderResponse_1a972f2d1cdac042f5f23a55c1bb0125fb"></a>

Clears the value of OrderIds_Optional and sets OrderIds_IsSet to false.

#### `public inline bool `[`IsOrderIdsSet`](#structFRHAPI__ManyPlayerOrderResponse_1a1905d2a4ba1db58094ff04767516c988)`() const` <a id="structFRHAPI__ManyPlayerOrderResponse_1a1905d2a4ba1db58094ff04767516c988"></a>

Checks whether OrderIds_Optional has been set.

