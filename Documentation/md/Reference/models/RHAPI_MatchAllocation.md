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
`public inline FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a82b46d897983362e947f31735657d799)`()` | Gets the value of AllocationId.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1ad6f7876c6e2d466e74063c50be154091)`() const` | Gets the value of AllocationId.
`public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a280e4d2923e0a42fb40d4ad6cd8cd674)`(const FString & NewValue)` | Sets the value of AllocationId.
`public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a5ed79863fa36e9af70ad7100629239bc)`(FString && NewValue)` | Sets the value of AllocationId using move semantics.

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

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a82b46d897983362e947f31735657d799)`()` <a id="structFRHAPI__MatchAllocation_1a82b46d897983362e947f31735657d799"></a>

Gets the value of AllocationId.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1ad6f7876c6e2d466e74063c50be154091)`() const` <a id="structFRHAPI__MatchAllocation_1ad6f7876c6e2d466e74063c50be154091"></a>

Gets the value of AllocationId.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a280e4d2923e0a42fb40d4ad6cd8cd674)`(const FString & NewValue)` <a id="structFRHAPI__MatchAllocation_1a280e4d2923e0a42fb40d4ad6cd8cd674"></a>

Sets the value of AllocationId.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a5ed79863fa36e9af70ad7100629239bc)`(FString && NewValue)` <a id="structFRHAPI__MatchAllocation_1a5ed79863fa36e9af70ad7100629239bc"></a>

Sets the value of AllocationId using move semantics.

