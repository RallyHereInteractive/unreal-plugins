# group `RHAPI_StorageInformation` <a id="group__RHAPI__StorageInformation"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StorageInformation`](#structFRHAPI__StorageInformation) | 

## struct `FRHAPI_StorageInformation` <a id="structFRHAPI__StorageInformation"></a>

```
struct FRHAPI_StorageInformation
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TotalFiles_Optional`](#structFRHAPI__StorageInformation_1af91d4d2226d8ddcd59770c05238cb53d) | 
`public bool `[`TotalFiles_IsSet`](#structFRHAPI__StorageInformation_1a3fc3f37640700eaccede607125effc1f) | true if TotalFiles_Optional has been set to a value
`public int32 `[`TotalSizeBytes_Optional`](#structFRHAPI__StorageInformation_1a9e8e63f471f0767df2e87d2c721d6fdb) | 
`public bool `[`TotalSizeBytes_IsSet`](#structFRHAPI__StorageInformation_1a226fa50107ca76bffd72e7a848d47777) | true if TotalSizeBytes_Optional has been set to a value
`public int32 `[`TotalSizeMb_Optional`](#structFRHAPI__StorageInformation_1a4267343d47dca2bcd6fa53dd9e587bab) | 
`public bool `[`TotalSizeMb_IsSet`](#structFRHAPI__StorageInformation_1a117986467c7d78a224a6c92bbd89cc65) | true if TotalSizeMb_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__StorageInformation_1a7793692fe65205b831334733652e9f2d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StorageInformation_1a7052f5a052865cd271de4f3f81132eb9)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1ac933e383dc7f2c1ed4b2ecbf680c8767)`()` | Gets the value of TotalFiles_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a184833c83b40f4e63c3e375e00ee2709)`() const` | Gets the value of TotalFiles_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a8916646925496c6769d3e9879d697b5f)`(const int32 & DefaultValue) const` | Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a562e8c74f5ead691c982347308f2b318)`(int32 & OutValue) const` | Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a50a1412b310327165e28618486bc1d62)`()` | Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a32753ddca4e760c3b0a63b564609e28a)`() const` | Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1ad49c03586d5cf29cb11827413b6da4b0)`(int32 NewValue)` | Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true.
`public inline void `[`ClearTotalFiles`](#structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1)`()` | Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false.
`public inline bool `[`IsTotalFilesDefaultValue`](#structFRHAPI__StorageInformation_1acdeb195bfc23e310690f2d28876f6ed0)`() const` | Returns true if TotalFiles_Optional is set and matches the default value.
`public inline void `[`SetTotalFilesToDefault`](#structFRHAPI__StorageInformation_1a0a2971c8a2ce136e075539387806049f)`()` | Sets the value of TotalFiles_Optional to its default and also sets TotalFiles_IsSet to true.
`public inline int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aea80ac3ddfc8b56ee9d4937a122b051e)`()` | Gets the value of TotalSizeBytes_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aeeb598e8d47cc720f38289fbda4b9d7f)`() const` | Gets the value of TotalSizeBytes_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1abc165cfb2560bd86a65e2d622f749477)`(const int32 & DefaultValue) const` | Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ae75422d273a715d725de8bc37b5fc44c)`(int32 & OutValue) const` | Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a384630d9fe4920afd340f281756fb9ce)`()` | Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a75e1e8d683b2e07d037341da3c41407f)`() const` | Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a61471d510657479d7cdd5b46e6431f23)`(int32 NewValue)` | Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true.
`public inline void `[`ClearTotalSizeBytes`](#structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797)`()` | Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false.
`public inline bool `[`IsTotalSizeBytesDefaultValue`](#structFRHAPI__StorageInformation_1a331d2539bd935fd53d1ddfbf66a8524c)`() const` | Returns true if TotalSizeBytes_Optional is set and matches the default value.
`public inline void `[`SetTotalSizeBytesToDefault`](#structFRHAPI__StorageInformation_1a75cd16e0d30fe99cdd90967cbbdeb82c)`()` | Sets the value of TotalSizeBytes_Optional to its default and also sets TotalSizeBytes_IsSet to true.
`public inline int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a5f7ea14254e01d5d2f1a579e138e9ad1)`()` | Gets the value of TotalSizeMb_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa6618cef450b23fc8d9aba8b1b07fae2)`() const` | Gets the value of TotalSizeMb_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a87a3f073ef2f0cf8371f850b927bf5cc)`(const int32 & DefaultValue) const` | Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa7534b56db228463255dc5ad336ad56e)`(int32 & OutValue) const` | Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1acde470e1d5e2397a63d69293667e2721)`()` | Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a1bd4943fd3d255bce8e1a587acd8303b)`() const` | Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1adec8ca9cbe911e0ede198ae38656dcb1)`(int32 NewValue)` | Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true.
`public inline void `[`ClearTotalSizeMb`](#structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4)`()` | Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false.
`public inline bool `[`IsTotalSizeMbDefaultValue`](#structFRHAPI__StorageInformation_1a44b5ab38e3f863a6b1b430490fa2a3de)`() const` | Returns true if TotalSizeMb_Optional is set and matches the default value.
`public inline void `[`SetTotalSizeMbToDefault`](#structFRHAPI__StorageInformation_1a9682073ededa502cb652a0d8557a8f7f)`()` | Sets the value of TotalSizeMb_Optional to its default and also sets TotalSizeMb_IsSet to true.

### Members

#### `public int32 `[`TotalFiles_Optional`](#structFRHAPI__StorageInformation_1af91d4d2226d8ddcd59770c05238cb53d) <a id="structFRHAPI__StorageInformation_1af91d4d2226d8ddcd59770c05238cb53d"></a>

#### `public bool `[`TotalFiles_IsSet`](#structFRHAPI__StorageInformation_1a3fc3f37640700eaccede607125effc1f) <a id="structFRHAPI__StorageInformation_1a3fc3f37640700eaccede607125effc1f"></a>

true if TotalFiles_Optional has been set to a value

#### `public int32 `[`TotalSizeBytes_Optional`](#structFRHAPI__StorageInformation_1a9e8e63f471f0767df2e87d2c721d6fdb) <a id="structFRHAPI__StorageInformation_1a9e8e63f471f0767df2e87d2c721d6fdb"></a>

#### `public bool `[`TotalSizeBytes_IsSet`](#structFRHAPI__StorageInformation_1a226fa50107ca76bffd72e7a848d47777) <a id="structFRHAPI__StorageInformation_1a226fa50107ca76bffd72e7a848d47777"></a>

true if TotalSizeBytes_Optional has been set to a value

#### `public int32 `[`TotalSizeMb_Optional`](#structFRHAPI__StorageInformation_1a4267343d47dca2bcd6fa53dd9e587bab) <a id="structFRHAPI__StorageInformation_1a4267343d47dca2bcd6fa53dd9e587bab"></a>

#### `public bool `[`TotalSizeMb_IsSet`](#structFRHAPI__StorageInformation_1a117986467c7d78a224a6c92bbd89cc65) <a id="structFRHAPI__StorageInformation_1a117986467c7d78a224a6c92bbd89cc65"></a>

true if TotalSizeMb_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__StorageInformation_1a7793692fe65205b831334733652e9f2d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StorageInformation_1a7793692fe65205b831334733652e9f2d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StorageInformation_1a7052f5a052865cd271de4f3f81132eb9)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__StorageInformation_1a7052f5a052865cd271de4f3f81132eb9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1ac933e383dc7f2c1ed4b2ecbf680c8767)`()` <a id="structFRHAPI__StorageInformation_1ac933e383dc7f2c1ed4b2ecbf680c8767"></a>

Gets the value of TotalFiles_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a184833c83b40f4e63c3e375e00ee2709)`() const` <a id="structFRHAPI__StorageInformation_1a184833c83b40f4e63c3e375e00ee2709"></a>

Gets the value of TotalFiles_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a8916646925496c6769d3e9879d697b5f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1a8916646925496c6769d3e9879d697b5f"></a>

Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a562e8c74f5ead691c982347308f2b318)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1a562e8c74f5ead691c982347308f2b318"></a>

Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a50a1412b310327165e28618486bc1d62)`()` <a id="structFRHAPI__StorageInformation_1a50a1412b310327165e28618486bc1d62"></a>

Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a32753ddca4e760c3b0a63b564609e28a)`() const` <a id="structFRHAPI__StorageInformation_1a32753ddca4e760c3b0a63b564609e28a"></a>

Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1ad49c03586d5cf29cb11827413b6da4b0)`(int32 NewValue)` <a id="structFRHAPI__StorageInformation_1ad49c03586d5cf29cb11827413b6da4b0"></a>

Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true.

#### `public inline void `[`ClearTotalFiles`](#structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1)`()` <a id="structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1"></a>

Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false.

#### `public inline bool `[`IsTotalFilesDefaultValue`](#structFRHAPI__StorageInformation_1acdeb195bfc23e310690f2d28876f6ed0)`() const` <a id="structFRHAPI__StorageInformation_1acdeb195bfc23e310690f2d28876f6ed0"></a>

Returns true if TotalFiles_Optional is set and matches the default value.

#### `public inline void `[`SetTotalFilesToDefault`](#structFRHAPI__StorageInformation_1a0a2971c8a2ce136e075539387806049f)`()` <a id="structFRHAPI__StorageInformation_1a0a2971c8a2ce136e075539387806049f"></a>

Sets the value of TotalFiles_Optional to its default and also sets TotalFiles_IsSet to true.

#### `public inline int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aea80ac3ddfc8b56ee9d4937a122b051e)`()` <a id="structFRHAPI__StorageInformation_1aea80ac3ddfc8b56ee9d4937a122b051e"></a>

Gets the value of TotalSizeBytes_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aeeb598e8d47cc720f38289fbda4b9d7f)`() const` <a id="structFRHAPI__StorageInformation_1aeeb598e8d47cc720f38289fbda4b9d7f"></a>

Gets the value of TotalSizeBytes_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1abc165cfb2560bd86a65e2d622f749477)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1abc165cfb2560bd86a65e2d622f749477"></a>

Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ae75422d273a715d725de8bc37b5fc44c)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1ae75422d273a715d725de8bc37b5fc44c"></a>

Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a384630d9fe4920afd340f281756fb9ce)`()` <a id="structFRHAPI__StorageInformation_1a384630d9fe4920afd340f281756fb9ce"></a>

Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a75e1e8d683b2e07d037341da3c41407f)`() const` <a id="structFRHAPI__StorageInformation_1a75e1e8d683b2e07d037341da3c41407f"></a>

Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a61471d510657479d7cdd5b46e6431f23)`(int32 NewValue)` <a id="structFRHAPI__StorageInformation_1a61471d510657479d7cdd5b46e6431f23"></a>

Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true.

#### `public inline void `[`ClearTotalSizeBytes`](#structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797)`()` <a id="structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797"></a>

Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false.

#### `public inline bool `[`IsTotalSizeBytesDefaultValue`](#structFRHAPI__StorageInformation_1a331d2539bd935fd53d1ddfbf66a8524c)`() const` <a id="structFRHAPI__StorageInformation_1a331d2539bd935fd53d1ddfbf66a8524c"></a>

Returns true if TotalSizeBytes_Optional is set and matches the default value.

#### `public inline void `[`SetTotalSizeBytesToDefault`](#structFRHAPI__StorageInformation_1a75cd16e0d30fe99cdd90967cbbdeb82c)`()` <a id="structFRHAPI__StorageInformation_1a75cd16e0d30fe99cdd90967cbbdeb82c"></a>

Sets the value of TotalSizeBytes_Optional to its default and also sets TotalSizeBytes_IsSet to true.

#### `public inline int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a5f7ea14254e01d5d2f1a579e138e9ad1)`()` <a id="structFRHAPI__StorageInformation_1a5f7ea14254e01d5d2f1a579e138e9ad1"></a>

Gets the value of TotalSizeMb_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa6618cef450b23fc8d9aba8b1b07fae2)`() const` <a id="structFRHAPI__StorageInformation_1aa6618cef450b23fc8d9aba8b1b07fae2"></a>

Gets the value of TotalSizeMb_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a87a3f073ef2f0cf8371f850b927bf5cc)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1a87a3f073ef2f0cf8371f850b927bf5cc"></a>

Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa7534b56db228463255dc5ad336ad56e)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1aa7534b56db228463255dc5ad336ad56e"></a>

Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1acde470e1d5e2397a63d69293667e2721)`()` <a id="structFRHAPI__StorageInformation_1acde470e1d5e2397a63d69293667e2721"></a>

Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a1bd4943fd3d255bce8e1a587acd8303b)`() const` <a id="structFRHAPI__StorageInformation_1a1bd4943fd3d255bce8e1a587acd8303b"></a>

Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1adec8ca9cbe911e0ede198ae38656dcb1)`(int32 NewValue)` <a id="structFRHAPI__StorageInformation_1adec8ca9cbe911e0ede198ae38656dcb1"></a>

Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true.

#### `public inline void `[`ClearTotalSizeMb`](#structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4)`()` <a id="structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4"></a>

Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false.

#### `public inline bool `[`IsTotalSizeMbDefaultValue`](#structFRHAPI__StorageInformation_1a44b5ab38e3f863a6b1b430490fa2a3de)`() const` <a id="structFRHAPI__StorageInformation_1a44b5ab38e3f863a6b1b430490fa2a3de"></a>

Returns true if TotalSizeMb_Optional is set and matches the default value.

#### `public inline void `[`SetTotalSizeMbToDefault`](#structFRHAPI__StorageInformation_1a9682073ededa502cb652a0d8557a8f7f)`()` <a id="structFRHAPI__StorageInformation_1a9682073ededa502cb652a0d8557a8f7f"></a>

Sets the value of TotalSizeMb_Optional to its default and also sets TotalSizeMb_IsSet to true.

