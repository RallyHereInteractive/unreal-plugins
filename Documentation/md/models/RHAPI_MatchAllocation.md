# group `RHAPI_MatchAllocation` <a id="group__RHAPI__MatchAllocation"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__MatchAllocation_1a46cfe8ba3c79eeb2a6d2497515319dcc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a73f7061eded6be56a570e700437ba7bf)`()` | Gets the value of AllocationId.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a1914dff0951bd239fc38b0c943432842)`() const` | Gets the value of AllocationId.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchAllocation_1a46cfe8ba3c79eeb2a6d2497515319dcc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchAllocation_1a46cfe8ba3c79eeb2a6d2497515319dcc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a73f7061eded6be56a570e700437ba7bf)`()` <a id="structFRHAPI__MatchAllocation_1a73f7061eded6be56a570e700437ba7bf"></a>

Gets the value of AllocationId.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a1914dff0951bd239fc38b0c943432842)`() const` <a id="structFRHAPI__MatchAllocation_1a1914dff0951bd239fc38b0c943432842"></a>

Gets the value of AllocationId.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a280e4d2923e0a42fb40d4ad6cd8cd674)`(const FString & NewValue)` <a id="structFRHAPI__MatchAllocation_1a280e4d2923e0a42fb40d4ad6cd8cd674"></a>

Sets the value of AllocationId.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a5ed79863fa36e9af70ad7100629239bc)`(FString && NewValue)` <a id="structFRHAPI__MatchAllocation_1a5ed79863fa36e9af70ad7100629239bc"></a>

Sets the value of AllocationId using move semantics.

