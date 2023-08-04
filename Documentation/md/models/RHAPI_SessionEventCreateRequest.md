# RHAPI_SessionEventCreateRequest <a id="group__RHAPI__SessionEventCreateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionEventCreateRequest`](#structFRHAPI__SessionEventCreateRequest) | 

## struct `FRHAPI_SessionEventCreateRequest` <a id="structFRHAPI__SessionEventCreateRequest"></a>

```
struct FRHAPI_SessionEventCreateRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventCode`](#structFRHAPI__SessionEventCreateRequest_1a0a088eb67435fd519970257762db77b0) | Code that identifies this type of event. See CommonEventCode for common examples.
`public FString `[`Description_Optional`](#structFRHAPI__SessionEventCreateRequest_1a22cd2ddf3e866e8c0fd5171ce77fc5e3) | Description metadata about the event.
`public bool `[`Description_IsSet`](#structFRHAPI__SessionEventCreateRequest_1a61cbf5337a4b5a51372211cec2bec0fe) | true if Description_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionEventCreateRequest_1ac6022d6a306fa7e90cbb39dbd6554326) | custom data about this event
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionEventCreateRequest_1a6bffc766ccf7912b450f7773c6eb991c) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Timestamp`](#structFRHAPI__SessionEventCreateRequest_1ae8f81eac20ff79d17ec39a9ab3d6e593) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionEventCreateRequest_1ae5f5949ce9a1d96fe83c51db743a5397)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionEventCreateRequest_1a69f2d48bbb56e132641694827ff4115c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventCode`](#structFRHAPI__SessionEventCreateRequest_1a7597023b1ad889362a4a502fbf2e370d)`()` | Gets the value of EventCode.
`public inline const FString & `[`GetEventCode`](#structFRHAPI__SessionEventCreateRequest_1a0a67ab088cdfefe276388581e3b42929)`() const` | Gets the value of EventCode.
`public inline void `[`SetEventCode`](#structFRHAPI__SessionEventCreateRequest_1aa761b707ef797aaa3b20a2b293170d22)`(FString NewValue)` | Sets the value of EventCode.
`public inline FString & `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1a7ddec8d78b2771680b1263ef050909da)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1ae652e2047507c4a9e368455c3f02a78f)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1a9b1518707ece6325f8358dd6b5f8be42)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1af677f3b39304253dbc32647073802e60)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEventCreateRequest_1ac6ef64606f83edece564a9279dae51e0)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEventCreateRequest_1a381670f63f7864cfbfd29d6f83b496c7)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__SessionEventCreateRequest_1a8a7e7bb1f1d1057a5d7dc455f81d72a1)`(FString NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`ClearDescription`](#structFRHAPI__SessionEventCreateRequest_1aa2889c51a60923847829c1c365fcb0d7)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionDefaultValue`](#structFRHAPI__SessionEventCreateRequest_1a0fca4deba5677f5c4a7e496fc91b01a1)`() const` | Returns true if Description_Optional is set and matches the default value.
`public inline void `[`SetDescriptionToDefault`](#structFRHAPI__SessionEventCreateRequest_1a95451ceddeaecc7d77b11d3fc72d9b25)`()` | Sets the value of Description_Optional to its default and also sets Description_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a4fda2b95a6632f199be516381282543c)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a7312a5cdac682df6cdc677266b1e2522)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a4b82f9f9bc257ea30c064e7c25c3bf47)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1aad6833748bec6860a1d59006d773a587)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEventCreateRequest_1ab1d32d5ba9907479657e4edb9f3d8daa)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEventCreateRequest_1a4aca4ec68effbaf9af9ecae53e5b506c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a060a7f03d2c4df23cb399dc503e1759d)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionEventCreateRequest_1a7fee47567b6fb44b26d592664a968a34)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEventCreateRequest_1a17c8380763441eed82b89b7866769c5e)`()` | Gets the value of Timestamp.
`public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEventCreateRequest_1ad236dd3ae31ee88278c6606b3062b68d)`() const` | Gets the value of Timestamp.
`public inline void `[`SetTimestamp`](#structFRHAPI__SessionEventCreateRequest_1af95aa3b94dbc76c3c13bf7d13b80d82e)`(FDateTime NewValue)` | Sets the value of Timestamp.

#### Members

#### `public FString `[`EventCode`](#structFRHAPI__SessionEventCreateRequest_1a0a088eb67435fd519970257762db77b0) <a id="structFRHAPI__SessionEventCreateRequest_1a0a088eb67435fd519970257762db77b0"></a>

Code that identifies this type of event. See CommonEventCode for common examples.

<br>
#### `public FString `[`Description_Optional`](#structFRHAPI__SessionEventCreateRequest_1a22cd2ddf3e866e8c0fd5171ce77fc5e3) <a id="structFRHAPI__SessionEventCreateRequest_1a22cd2ddf3e866e8c0fd5171ce77fc5e3"></a>

Description metadata about the event.

<br>
#### `public bool `[`Description_IsSet`](#structFRHAPI__SessionEventCreateRequest_1a61cbf5337a4b5a51372211cec2bec0fe) <a id="structFRHAPI__SessionEventCreateRequest_1a61cbf5337a4b5a51372211cec2bec0fe"></a>

true if Description_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionEventCreateRequest_1ac6022d6a306fa7e90cbb39dbd6554326) <a id="structFRHAPI__SessionEventCreateRequest_1ac6022d6a306fa7e90cbb39dbd6554326"></a>

custom data about this event

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionEventCreateRequest_1a6bffc766ccf7912b450f7773c6eb991c) <a id="structFRHAPI__SessionEventCreateRequest_1a6bffc766ccf7912b450f7773c6eb991c"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FDateTime `[`Timestamp`](#structFRHAPI__SessionEventCreateRequest_1ae8f81eac20ff79d17ec39a9ab3d6e593) <a id="structFRHAPI__SessionEventCreateRequest_1ae8f81eac20ff79d17ec39a9ab3d6e593"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionEventCreateRequest_1ae5f5949ce9a1d96fe83c51db743a5397)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionEventCreateRequest_1ae5f5949ce9a1d96fe83c51db743a5397"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionEventCreateRequest_1a69f2d48bbb56e132641694827ff4115c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionEventCreateRequest_1a69f2d48bbb56e132641694827ff4115c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetEventCode`](#structFRHAPI__SessionEventCreateRequest_1a7597023b1ad889362a4a502fbf2e370d)`()` <a id="structFRHAPI__SessionEventCreateRequest_1a7597023b1ad889362a4a502fbf2e370d"></a>

Gets the value of EventCode.

<br>
#### `public inline const FString & `[`GetEventCode`](#structFRHAPI__SessionEventCreateRequest_1a0a67ab088cdfefe276388581e3b42929)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1a0a67ab088cdfefe276388581e3b42929"></a>

Gets the value of EventCode.

<br>
#### `public inline void `[`SetEventCode`](#structFRHAPI__SessionEventCreateRequest_1aa761b707ef797aaa3b20a2b293170d22)`(FString NewValue)` <a id="structFRHAPI__SessionEventCreateRequest_1aa761b707ef797aaa3b20a2b293170d22"></a>

Sets the value of EventCode.

<br>
#### `public inline FString & `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1a7ddec8d78b2771680b1263ef050909da)`()` <a id="structFRHAPI__SessionEventCreateRequest_1a7ddec8d78b2771680b1263ef050909da"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1ae652e2047507c4a9e368455c3f02a78f)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1ae652e2047507c4a9e368455c3f02a78f"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1a9b1518707ece6325f8358dd6b5f8be42)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionEventCreateRequest_1a9b1518707ece6325f8358dd6b5f8be42"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDescription`](#structFRHAPI__SessionEventCreateRequest_1af677f3b39304253dbc32647073802e60)`(FString & OutValue) const` <a id="structFRHAPI__SessionEventCreateRequest_1af677f3b39304253dbc32647073802e60"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEventCreateRequest_1ac6ef64606f83edece564a9279dae51e0)`()` <a id="structFRHAPI__SessionEventCreateRequest_1ac6ef64606f83edece564a9279dae51e0"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__SessionEventCreateRequest_1a381670f63f7864cfbfd29d6f83b496c7)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1a381670f63f7864cfbfd29d6f83b496c7"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDescription`](#structFRHAPI__SessionEventCreateRequest_1a8a7e7bb1f1d1057a5d7dc455f81d72a1)`(FString NewValue)` <a id="structFRHAPI__SessionEventCreateRequest_1a8a7e7bb1f1d1057a5d7dc455f81d72a1"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

<br>
#### `public inline void `[`ClearDescription`](#structFRHAPI__SessionEventCreateRequest_1aa2889c51a60923847829c1c365fcb0d7)`()` <a id="structFRHAPI__SessionEventCreateRequest_1aa2889c51a60923847829c1c365fcb0d7"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

<br>
#### `public inline bool `[`IsDescriptionDefaultValue`](#structFRHAPI__SessionEventCreateRequest_1a0fca4deba5677f5c4a7e496fc91b01a1)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1a0fca4deba5677f5c4a7e496fc91b01a1"></a>

Returns true if Description_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDescriptionToDefault`](#structFRHAPI__SessionEventCreateRequest_1a95451ceddeaecc7d77b11d3fc72d9b25)`()` <a id="structFRHAPI__SessionEventCreateRequest_1a95451ceddeaecc7d77b11d3fc72d9b25"></a>

Sets the value of Description_Optional to its default and also sets Description_IsSet to true.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a4fda2b95a6632f199be516381282543c)`()` <a id="structFRHAPI__SessionEventCreateRequest_1a4fda2b95a6632f199be516381282543c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a7312a5cdac682df6cdc677266b1e2522)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1a7312a5cdac682df6cdc677266b1e2522"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a4b82f9f9bc257ea30c064e7c25c3bf47)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionEventCreateRequest_1a4b82f9f9bc257ea30c064e7c25c3bf47"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionEventCreateRequest_1aad6833748bec6860a1d59006d773a587)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionEventCreateRequest_1aad6833748bec6860a1d59006d773a587"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEventCreateRequest_1ab1d32d5ba9907479657e4edb9f3d8daa)`()` <a id="structFRHAPI__SessionEventCreateRequest_1ab1d32d5ba9907479657e4edb9f3d8daa"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionEventCreateRequest_1a4aca4ec68effbaf9af9ecae53e5b506c)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1a4aca4ec68effbaf9af9ecae53e5b506c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionEventCreateRequest_1a060a7f03d2c4df23cb399dc503e1759d)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionEventCreateRequest_1a060a7f03d2c4df23cb399dc503e1759d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionEventCreateRequest_1a7fee47567b6fb44b26d592664a968a34)`()` <a id="structFRHAPI__SessionEventCreateRequest_1a7fee47567b6fb44b26d592664a968a34"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEventCreateRequest_1a17c8380763441eed82b89b7866769c5e)`()` <a id="structFRHAPI__SessionEventCreateRequest_1a17c8380763441eed82b89b7866769c5e"></a>

Gets the value of Timestamp.

<br>
#### `public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__SessionEventCreateRequest_1ad236dd3ae31ee88278c6606b3062b68d)`() const` <a id="structFRHAPI__SessionEventCreateRequest_1ad236dd3ae31ee88278c6606b3062b68d"></a>

Gets the value of Timestamp.

<br>
#### `public inline void `[`SetTimestamp`](#structFRHAPI__SessionEventCreateRequest_1af95aa3b94dbc76c3c13bf7d13b80d82e)`(FDateTime NewValue)` <a id="structFRHAPI__SessionEventCreateRequest_1af95aa3b94dbc76c3c13bf7d13b80d82e"></a>

Sets the value of Timestamp.

<br>
