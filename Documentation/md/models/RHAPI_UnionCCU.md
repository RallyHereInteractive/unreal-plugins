# group `RHAPI_UnionCCU` <a id="group__RHAPI__UnionCCU"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UnionCCU`](#structFRHAPI__UnionCCU) | 

## struct `FRHAPI_UnionCCU` <a id="structFRHAPI__UnionCCU"></a>

```
struct FRHAPI_UnionCCU
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Count`](#structFRHAPI__UnionCCU_1a69841a2e7517f0c6b3eb9fc740b06c1e) | 
`public TArray< FDateTime > `[`Timestamps`](#structFRHAPI__UnionCCU_1abae451775e33a1d06d69f056efe9e7bf) | 
`public virtual bool `[`FromJson`](#structFRHAPI__UnionCCU_1a9ae8a0ebe6985bd85599a47cc462c3ab)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UnionCCU_1a8fc5bcc9e138cd70bebb14bc72699888)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1a01121ee141faf15d1cfbc49c6034a752)`()` | Gets the value of Count.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1ae361741146ee7e81d213ff3aa3b8521d)`() const` | Gets the value of Count.
`public inline void `[`SetCount`](#structFRHAPI__UnionCCU_1a43cce3b35d4553f6a8d2a610774d0bc3)`(int32 NewValue)` | Sets the value of Count.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UnionCCU_1adc972d59d8619c1c75819e44608ff9f4)`() const` | Returns true if Count matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__UnionCCU_1abc467e76ff259fec10aedbe23a0609ac)`()` | Sets the value of Count to its default
`public inline TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1ae3adb11b69a930ad9398ebea4ffe6834)`()` | Gets the value of Timestamps.
`public inline const TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1a47117df1eca9fadd348ef751ee922e4e)`() const` | Gets the value of Timestamps.
`public inline void `[`SetTimestamps`](#structFRHAPI__UnionCCU_1ab545006632a4a8c3dcb7705d2aca1235)`(TArray< FDateTime > NewValue)` | Sets the value of Timestamps.

### Members

#### `public int32 `[`Count`](#structFRHAPI__UnionCCU_1a69841a2e7517f0c6b3eb9fc740b06c1e) <a id="structFRHAPI__UnionCCU_1a69841a2e7517f0c6b3eb9fc740b06c1e"></a>

#### `public TArray< FDateTime > `[`Timestamps`](#structFRHAPI__UnionCCU_1abae451775e33a1d06d69f056efe9e7bf) <a id="structFRHAPI__UnionCCU_1abae451775e33a1d06d69f056efe9e7bf"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__UnionCCU_1a9ae8a0ebe6985bd85599a47cc462c3ab)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UnionCCU_1a9ae8a0ebe6985bd85599a47cc462c3ab"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UnionCCU_1a8fc5bcc9e138cd70bebb14bc72699888)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UnionCCU_1a8fc5bcc9e138cd70bebb14bc72699888"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1a01121ee141faf15d1cfbc49c6034a752)`()` <a id="structFRHAPI__UnionCCU_1a01121ee141faf15d1cfbc49c6034a752"></a>

Gets the value of Count.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1ae361741146ee7e81d213ff3aa3b8521d)`() const` <a id="structFRHAPI__UnionCCU_1ae361741146ee7e81d213ff3aa3b8521d"></a>

Gets the value of Count.

#### `public inline void `[`SetCount`](#structFRHAPI__UnionCCU_1a43cce3b35d4553f6a8d2a610774d0bc3)`(int32 NewValue)` <a id="structFRHAPI__UnionCCU_1a43cce3b35d4553f6a8d2a610774d0bc3"></a>

Sets the value of Count.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UnionCCU_1adc972d59d8619c1c75819e44608ff9f4)`() const` <a id="structFRHAPI__UnionCCU_1adc972d59d8619c1c75819e44608ff9f4"></a>

Returns true if Count matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__UnionCCU_1abc467e76ff259fec10aedbe23a0609ac)`()` <a id="structFRHAPI__UnionCCU_1abc467e76ff259fec10aedbe23a0609ac"></a>

Sets the value of Count to its default

#### `public inline TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1ae3adb11b69a930ad9398ebea4ffe6834)`()` <a id="structFRHAPI__UnionCCU_1ae3adb11b69a930ad9398ebea4ffe6834"></a>

Gets the value of Timestamps.

#### `public inline const TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1a47117df1eca9fadd348ef751ee922e4e)`() const` <a id="structFRHAPI__UnionCCU_1a47117df1eca9fadd348ef751ee922e4e"></a>

Gets the value of Timestamps.

#### `public inline void `[`SetTimestamps`](#structFRHAPI__UnionCCU_1ab545006632a4a8c3dcb7705d2aca1235)`(TArray< FDateTime > NewValue)` <a id="structFRHAPI__UnionCCU_1ab545006632a4a8c3dcb7705d2aca1235"></a>

Sets the value of Timestamps.

