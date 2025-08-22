---
title: RHAPI_MatchAllocation
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchAllocation`](#structFRHAPI__MatchAllocation) | 

## struct `FRHAPI_MatchAllocation` <a id="structFRHAPI__MatchAllocation"></a>

```
struct FRHAPI_MatchAllocation
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AllocationId`](#structFRHAPI__MatchAllocation_1a7246bc5564bcd98726ff94a1f212fbb4) | Allocation ID.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchAllocation_1aa8fc29ab9b0a2ee4e49d623bd3ac5e25)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchAllocation_1a22cb5501bf243494e26ce6e46b8316a0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1ab9319c228c2097d0de6697dbfc360c87)`()` | Gets the value of AllocationId.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a39251dfc089e673a9a14c02c179fcc04)`() const` | Gets the value of AllocationId.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1ac57cd353b7b76887124a1a0d48267f9a)`(const FString & NewValue)` | Sets the value of AllocationId.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a42b7cd58726e2e0aa08ccd2af5d53f3b)`(FString && NewValue)` | Sets the value of AllocationId using move semantics.

### Members

#### `public FString `[`AllocationId`](#structFRHAPI__MatchAllocation_1a7246bc5564bcd98726ff94a1f212fbb4) <a id="structFRHAPI__MatchAllocation_1a7246bc5564bcd98726ff94a1f212fbb4"></a>

Allocation ID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchAllocation_1aa8fc29ab9b0a2ee4e49d623bd3ac5e25)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchAllocation_1aa8fc29ab9b0a2ee4e49d623bd3ac5e25"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchAllocation_1a22cb5501bf243494e26ce6e46b8316a0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchAllocation_1a22cb5501bf243494e26ce6e46b8316a0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1ab9319c228c2097d0de6697dbfc360c87)`()` <a id="structFRHAPI__MatchAllocation_1ab9319c228c2097d0de6697dbfc360c87"></a>

Gets the value of AllocationId.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a39251dfc089e673a9a14c02c179fcc04)`() const` <a id="structFRHAPI__MatchAllocation_1a39251dfc089e673a9a14c02c179fcc04"></a>

Gets the value of AllocationId.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1ac57cd353b7b76887124a1a0d48267f9a)`(const FString & NewValue)` <a id="structFRHAPI__MatchAllocation_1ac57cd353b7b76887124a1a0d48267f9a"></a>

Sets the value of AllocationId.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a42b7cd58726e2e0aa08ccd2af5d53f3b)`(FString && NewValue)` <a id="structFRHAPI__MatchAllocation_1a42b7cd58726e2e0aa08ccd2af5d53f3b"></a>

Sets the value of AllocationId using move semantics.

