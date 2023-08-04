# RHAPI_Rule <a id="group__RHAPI__Rule"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Rule`](#structFRHAPI__Rule) | 

## struct `FRHAPI_Rule` <a id="structFRHAPI__Rule"></a>

```
struct FRHAPI_Rule
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Operation `[`Operation`](#structFRHAPI__Rule_1aba2b22969b3382e3295779adf6872ccc) | Comparison operation to be performed.
`public int32 `[`Value`](#structFRHAPI__Rule_1a18109916cb0c64c98ab2890d19cf3cc5) | Value to compare to.
`public virtual bool `[`FromJson`](#structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Operation & `[`GetOperation`](#structFRHAPI__Rule_1a85c84338d3c43881b2fe03163139acf6)`()` | Gets the value of Operation.
`public inline const ERHAPI_Operation & `[`GetOperation`](#structFRHAPI__Rule_1ac65e3612c50e55295e515c4a2cf0caa6)`() const` | Gets the value of Operation.
`public inline void `[`SetOperation`](#structFRHAPI__Rule_1abe21a40eccbf8b3a5addb3b50da50fbf)`(ERHAPI_Operation NewValue)` | Sets the value of Operation.
`public inline int32 & `[`GetValue`](#structFRHAPI__Rule_1ae64894f7798acb490635b2c24afa5147)`()` | Gets the value of Value.
`public inline const int32 & `[`GetValue`](#structFRHAPI__Rule_1a0712e274cd6105ca945aa68d76fef3fd)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__Rule_1a736775753efcc0d0155701c59a4297a2)`(int32 NewValue)` | Sets the value of Value.
`public inline bool `[`IsValueDefaultValue`](#structFRHAPI__Rule_1a4695205c26e2245054d7b26109210191)`() const` | Returns true if Value matches the default value.
`public inline void `[`SetValueToDefault`](#structFRHAPI__Rule_1a334147bd6a2736b1ea5de0786e755868)`()` | Sets the value of Value to its default

#### Members

#### `public ERHAPI_Operation `[`Operation`](#structFRHAPI__Rule_1aba2b22969b3382e3295779adf6872ccc) <a id="structFRHAPI__Rule_1aba2b22969b3382e3295779adf6872ccc"></a>

Comparison operation to be performed.

<br>
#### `public int32 `[`Value`](#structFRHAPI__Rule_1a18109916cb0c64c98ab2890d19cf3cc5) <a id="structFRHAPI__Rule_1a18109916cb0c64c98ab2890d19cf3cc5"></a>

Value to compare to.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Rule_1ae84ce1919bd28b54bcb6179bd9bf6665"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Rule_1ab4368b3cd531f6b628b167305c52748e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_Operation & `[`GetOperation`](#structFRHAPI__Rule_1a85c84338d3c43881b2fe03163139acf6)`()` <a id="structFRHAPI__Rule_1a85c84338d3c43881b2fe03163139acf6"></a>

Gets the value of Operation.

<br>
#### `public inline const ERHAPI_Operation & `[`GetOperation`](#structFRHAPI__Rule_1ac65e3612c50e55295e515c4a2cf0caa6)`() const` <a id="structFRHAPI__Rule_1ac65e3612c50e55295e515c4a2cf0caa6"></a>

Gets the value of Operation.

<br>
#### `public inline void `[`SetOperation`](#structFRHAPI__Rule_1abe21a40eccbf8b3a5addb3b50da50fbf)`(ERHAPI_Operation NewValue)` <a id="structFRHAPI__Rule_1abe21a40eccbf8b3a5addb3b50da50fbf"></a>

Sets the value of Operation.

<br>
#### `public inline int32 & `[`GetValue`](#structFRHAPI__Rule_1ae64894f7798acb490635b2c24afa5147)`()` <a id="structFRHAPI__Rule_1ae64894f7798acb490635b2c24afa5147"></a>

Gets the value of Value.

<br>
#### `public inline const int32 & `[`GetValue`](#structFRHAPI__Rule_1a0712e274cd6105ca945aa68d76fef3fd)`() const` <a id="structFRHAPI__Rule_1a0712e274cd6105ca945aa68d76fef3fd"></a>

Gets the value of Value.

<br>
#### `public inline void `[`SetValue`](#structFRHAPI__Rule_1a736775753efcc0d0155701c59a4297a2)`(int32 NewValue)` <a id="structFRHAPI__Rule_1a736775753efcc0d0155701c59a4297a2"></a>

Sets the value of Value.

<br>
#### `public inline bool `[`IsValueDefaultValue`](#structFRHAPI__Rule_1a4695205c26e2245054d7b26109210191)`() const` <a id="structFRHAPI__Rule_1a4695205c26e2245054d7b26109210191"></a>

Returns true if Value matches the default value.

<br>
#### `public inline void `[`SetValueToDefault`](#structFRHAPI__Rule_1a334147bd6a2736b1ea5de0786e755868)`()` <a id="structFRHAPI__Rule_1a334147bd6a2736b1ea5de0786e755868"></a>

Sets the value of Value to its default

<br>
