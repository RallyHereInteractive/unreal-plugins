# group `RHAPI_SettingType` <a id="group__RHAPI__SettingType"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingType`](#structFRHAPI__SettingType) | 

## struct `FRHAPI_SettingType` <a id="structFRHAPI__SettingType"></a>

```
struct FRHAPI_SettingType
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > `[`Versions`](#structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1) | Map of setting type version ids to the version.
`public virtual bool `[`FromJson`](#structFRHAPI__SettingType_1aceab82a3fc5d56e8469b3c7053be6330)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingType_1a274f8e9b15db0cff2780a3ddd7a5e3fb)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1a187afb11a54ff15041642bb3aa31bcb9)`()` | Gets the value of Versions.
`public inline const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1a0e2c33862b30c54b7acc43560f9eff0c)`() const` | Gets the value of Versions.
`public inline void `[`SetVersions`](#structFRHAPI__SettingType_1a5f3c6c20cd553b0601ec0ac82c709b76)`(TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > NewValue)` | Sets the value of Versions.

### Members

#### `public TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > `[`Versions`](#structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1) <a id="structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1"></a>

Map of setting type version ids to the version.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingType_1aceab82a3fc5d56e8469b3c7053be6330)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingType_1aceab82a3fc5d56e8469b3c7053be6330"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingType_1a274f8e9b15db0cff2780a3ddd7a5e3fb)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SettingType_1a274f8e9b15db0cff2780a3ddd7a5e3fb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1a187afb11a54ff15041642bb3aa31bcb9)`()` <a id="structFRHAPI__SettingType_1a187afb11a54ff15041642bb3aa31bcb9"></a>

Gets the value of Versions.

#### `public inline const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1a0e2c33862b30c54b7acc43560f9eff0c)`() const` <a id="structFRHAPI__SettingType_1a0e2c33862b30c54b7acc43560f9eff0c"></a>

Gets the value of Versions.

#### `public inline void `[`SetVersions`](#structFRHAPI__SettingType_1a5f3c6c20cd553b0601ec0ac82c709b76)`(TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > NewValue)` <a id="structFRHAPI__SettingType_1a5f3c6c20cd553b0601ec0ac82c709b76"></a>

Sets the value of Versions.

