# RHAPI_MatchAllocation <a id="group__RHAPI__MatchAllocation"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchAllocation`](#structFRHAPI__MatchAllocation) | 

## struct `FRHAPI_MatchAllocation` <a id="structFRHAPI__MatchAllocation"></a>

```
struct FRHAPI_MatchAllocation
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AllocationId`](#structFRHAPI__MatchAllocation_1a7246bc5564bcd98726ff94a1f212fbb4) | Allocation ID.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchAllocation_1a707da5cff61584fe431566c6c4c3601a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchAllocation_1ab828cb823e2e08717f526f2f7f1ce61e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a73f7061eded6be56a570e700437ba7bf)`()` | Gets the value of AllocationId.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a1914dff0951bd239fc38b0c943432842)`() const` | Gets the value of AllocationId.
`public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a81566654cc39d8728c1b8215506c7b9f)`(FString NewValue)` | Sets the value of AllocationId.

#### Members

#### `public FString `[`AllocationId`](#structFRHAPI__MatchAllocation_1a7246bc5564bcd98726ff94a1f212fbb4) <a id="structFRHAPI__MatchAllocation_1a7246bc5564bcd98726ff94a1f212fbb4"></a>

Allocation ID.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchAllocation_1a707da5cff61584fe431566c6c4c3601a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchAllocation_1a707da5cff61584fe431566c6c4c3601a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchAllocation_1ab828cb823e2e08717f526f2f7f1ce61e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchAllocation_1ab828cb823e2e08717f526f2f7f1ce61e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a73f7061eded6be56a570e700437ba7bf)`()` <a id="structFRHAPI__MatchAllocation_1a73f7061eded6be56a570e700437ba7bf"></a>

Gets the value of AllocationId.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__MatchAllocation_1a1914dff0951bd239fc38b0c943432842)`() const` <a id="structFRHAPI__MatchAllocation_1a1914dff0951bd239fc38b0c943432842"></a>

Gets the value of AllocationId.

<br>
#### `public inline void `[`SetAllocationId`](#structFRHAPI__MatchAllocation_1a81566654cc39d8728c1b8215506c7b9f)`(FString NewValue)` <a id="structFRHAPI__MatchAllocation_1a81566654cc39d8728c1b8215506c7b9f"></a>

Sets the value of AllocationId.

<br>
