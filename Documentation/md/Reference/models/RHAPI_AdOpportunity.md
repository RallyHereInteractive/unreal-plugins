---
title: RHAPI_AdOpportunity
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdOpportunity`](#structFRHAPI__AdOpportunity) | 

## struct `FRHAPI_AdOpportunity` <a id="structFRHAPI__AdOpportunity"></a>

```
struct FRHAPI_AdOpportunity
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AdUrl`](#structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761) | The URL to the ad.
`public int32 `[`Seconds`](#structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2) | The number of seconds the ad is.
`public FString `[`OpportunityId`](#structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049) | The ID of the ad opportunity.
`public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunity_1a3ad321b7b639f2f168664c3c9e1232d9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunity_1a15e0e0ce190cd9e710a8b2a745d724e9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a5db6f0b60fb3584ca00bdf66747b598b)`()` | Gets the value of AdUrl.
`public inline FORCEINLINE const FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1aa217d0738a8eae9937755fefb7739529)`() const` | Gets the value of AdUrl.
`public inline FORCEINLINE void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a0086b500dcf8ac5e81d3c38ab58ebe94)`(const FString & NewValue)` | Sets the value of AdUrl.
`public inline FORCEINLINE void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a483c654cd1b5597373f929f191ad8254)`(FString && NewValue)` | Sets the value of AdUrl using move semantics.
`public inline FORCEINLINE int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1ad02c653b4e099820d6c95a2751969911)`()` | Gets the value of Seconds.
`public inline FORCEINLINE const int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a5c5dd3870cba415b52eeb924908507db)`() const` | Gets the value of Seconds.
`public inline FORCEINLINE void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1a65855d0e369a1fcc8d5cdab4a313ed8c)`(const int32 & NewValue)` | Sets the value of Seconds.
`public inline FORCEINLINE void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1a2ffc047a2343cbf26336cbde03251c16)`(int32 && NewValue)` | Sets the value of Seconds using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Seconds`](#structFRHAPI__AdOpportunity_1a7a9b280d2807e4dfa22432da9e7afb94)`()` | Returns the default value of Seconds.
`public inline FORCEINLINE FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a2273edc94c7b07e20fb17815b6b39220)`()` | Gets the value of OpportunityId.
`public inline FORCEINLINE const FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a5c52786d6fc5b2599d289415deedea51)`() const` | Gets the value of OpportunityId.
`public inline FORCEINLINE void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a471d888e0f0ce253cf522cf13d1a27ba)`(const FString & NewValue)` | Sets the value of OpportunityId.
`public inline FORCEINLINE void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a02a4138143c221d3dbaae0c89a06742a)`(FString && NewValue)` | Sets the value of OpportunityId using move semantics.

### Members

#### `public FString `[`AdUrl`](#structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761) <a id="structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761"></a>

The URL to the ad.

#### `public int32 `[`Seconds`](#structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2) <a id="structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2"></a>

The number of seconds the ad is.

#### `public FString `[`OpportunityId`](#structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049) <a id="structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049"></a>

The ID of the ad opportunity.

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunity_1a3ad321b7b639f2f168664c3c9e1232d9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdOpportunity_1a3ad321b7b639f2f168664c3c9e1232d9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunity_1a15e0e0ce190cd9e710a8b2a745d724e9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AdOpportunity_1a15e0e0ce190cd9e710a8b2a745d724e9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a5db6f0b60fb3584ca00bdf66747b598b)`()` <a id="structFRHAPI__AdOpportunity_1a5db6f0b60fb3584ca00bdf66747b598b"></a>

Gets the value of AdUrl.

#### `public inline FORCEINLINE const FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1aa217d0738a8eae9937755fefb7739529)`() const` <a id="structFRHAPI__AdOpportunity_1aa217d0738a8eae9937755fefb7739529"></a>

Gets the value of AdUrl.

#### `public inline FORCEINLINE void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a0086b500dcf8ac5e81d3c38ab58ebe94)`(const FString & NewValue)` <a id="structFRHAPI__AdOpportunity_1a0086b500dcf8ac5e81d3c38ab58ebe94"></a>

Sets the value of AdUrl.

#### `public inline FORCEINLINE void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a483c654cd1b5597373f929f191ad8254)`(FString && NewValue)` <a id="structFRHAPI__AdOpportunity_1a483c654cd1b5597373f929f191ad8254"></a>

Sets the value of AdUrl using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1ad02c653b4e099820d6c95a2751969911)`()` <a id="structFRHAPI__AdOpportunity_1ad02c653b4e099820d6c95a2751969911"></a>

Gets the value of Seconds.

#### `public inline FORCEINLINE const int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a5c5dd3870cba415b52eeb924908507db)`() const` <a id="structFRHAPI__AdOpportunity_1a5c5dd3870cba415b52eeb924908507db"></a>

Gets the value of Seconds.

#### `public inline FORCEINLINE void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1a65855d0e369a1fcc8d5cdab4a313ed8c)`(const int32 & NewValue)` <a id="structFRHAPI__AdOpportunity_1a65855d0e369a1fcc8d5cdab4a313ed8c"></a>

Sets the value of Seconds.

#### `public inline FORCEINLINE void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1a2ffc047a2343cbf26336cbde03251c16)`(int32 && NewValue)` <a id="structFRHAPI__AdOpportunity_1a2ffc047a2343cbf26336cbde03251c16"></a>

Sets the value of Seconds using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Seconds`](#structFRHAPI__AdOpportunity_1a7a9b280d2807e4dfa22432da9e7afb94)`()` <a id="structFRHAPI__AdOpportunity_1a7a9b280d2807e4dfa22432da9e7afb94"></a>

Returns the default value of Seconds.

#### `public inline FORCEINLINE FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a2273edc94c7b07e20fb17815b6b39220)`()` <a id="structFRHAPI__AdOpportunity_1a2273edc94c7b07e20fb17815b6b39220"></a>

Gets the value of OpportunityId.

#### `public inline FORCEINLINE const FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a5c52786d6fc5b2599d289415deedea51)`() const` <a id="structFRHAPI__AdOpportunity_1a5c52786d6fc5b2599d289415deedea51"></a>

Gets the value of OpportunityId.

#### `public inline FORCEINLINE void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a471d888e0f0ce253cf522cf13d1a27ba)`(const FString & NewValue)` <a id="structFRHAPI__AdOpportunity_1a471d888e0f0ce253cf522cf13d1a27ba"></a>

Sets the value of OpportunityId.

#### `public inline FORCEINLINE void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a02a4138143c221d3dbaae0c89a06742a)`(FString && NewValue)` <a id="structFRHAPI__AdOpportunity_1a02a4138143c221d3dbaae0c89a06742a"></a>

Sets the value of OpportunityId using move semantics.

