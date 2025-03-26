---
title: RHAPI_PlatformEntitlementsPrepared
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementsPrepared`](#structFRHAPI__PlatformEntitlementsPrepared) | 

## struct `FRHAPI_PlatformEntitlementsPrepared` <a id="structFRHAPI__PlatformEntitlementsPrepared"></a>

```
struct FRHAPI_PlatformEntitlementsPrepared
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1ada156bb981e57cd308e3c793edb3ca96) | 
`public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1ab9c649bb4f5e1a8207076c54ee656f78) | true if Entitlements_Optional has been set to a value
`public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1a381f21930e7ad241437f9af0d3f72a7c) | 
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1aed9ab9e506618f4659897c0a50835bec) | true if ErrorCode_Optional has been set to a value
`public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a3c10df2d79a70049b12574cfbec21396) | true if ErrorCode_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementsPrepared_1a3b442caf33c2d592869169aa3850ea4c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementsPrepared_1aeff8d57952a2bf8e3646e9b3a3eb57ef)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1abbc50f5149928adb9e3319db91f489db)`()` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a6abe7b70a5b4506103320f1f956bdcfb)`() const` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1abdf19d9c17cee16ec316f76159a8ab1d)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & DefaultValue) const` | Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a04eddac8675e604cb7476f6219e354b1)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & OutValue) const` | Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1ae05e762c324cfc83dd312a1153b0051f)`()` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1afee2f1e9e2ae91d8ff19e758ef60268f)`() const` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1ad8759eebf40a8e54ba7c1fff09afaa26)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.
`public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a8a2dd0c9fd34cec9bff4da6c8a7ab101)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > && NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.
`public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a2cf0f7e124844b6e08a424af8ebdd94f)`()` | Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.
`public inline bool `[`IsEntitlementsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1ad37c839abe94abf260ff863ec930748e)`() const` | Checks whether Entitlements_Optional has been set.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1adf4c65ca9b46ee777080add01c21fb1f)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a4e27e5159c2b53cc8ea7467c7df7f753)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a15f83d0800cbe77a7a68680c64c993e9)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1ae491c7db2a98d105853df0ccfee3a063)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a0f258b190116995dab58b911936b4160)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1ae6b4f875beb2f6b1faa3c5a020016a8b)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1af283bf3974f7f60556842af030783209)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1ad173bf8c1dc361eb29ccdb95a82556e5)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a414c3f05988811d3a6284728b9fed442)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlementsPrepared_1a8d9092618edb69f7f3331105d04e5b88)`() const` | Checks whether ErrorCode_Optional has been set.
`public inline void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementsPrepared_1aa0a6eaede1da7978dbc39518d345048e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a0f6cc8fdc010b9b593c3a391ee07c134)`() const` | Checks whether ErrorCode_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1ada156bb981e57cd308e3c793edb3ca96) <a id="structFRHAPI__PlatformEntitlementsPrepared_1ada156bb981e57cd308e3c793edb3ca96"></a>

#### `public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1ab9c649bb4f5e1a8207076c54ee656f78) <a id="structFRHAPI__PlatformEntitlementsPrepared_1ab9c649bb4f5e1a8207076c54ee656f78"></a>

true if Entitlements_Optional has been set to a value

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1a381f21930e7ad241437f9af0d3f72a7c) <a id="structFRHAPI__PlatformEntitlementsPrepared_1a381f21930e7ad241437f9af0d3f72a7c"></a>

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1aed9ab9e506618f4659897c0a50835bec) <a id="structFRHAPI__PlatformEntitlementsPrepared_1aed9ab9e506618f4659897c0a50835bec"></a>

true if ErrorCode_Optional has been set to a value

#### `public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a3c10df2d79a70049b12574cfbec21396) <a id="structFRHAPI__PlatformEntitlementsPrepared_1a3c10df2d79a70049b12574cfbec21396"></a>

true if ErrorCode_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementsPrepared_1a3b442caf33c2d592869169aa3850ea4c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a3b442caf33c2d592869169aa3850ea4c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementsPrepared_1aeff8d57952a2bf8e3646e9b3a3eb57ef)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1aeff8d57952a2bf8e3646e9b3a3eb57ef"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1abbc50f5149928adb9e3319db91f489db)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1abbc50f5149928adb9e3319db91f489db"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a6abe7b70a5b4506103320f1f956bdcfb)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a6abe7b70a5b4506103320f1f956bdcfb"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1abdf19d9c17cee16ec316f76159a8ab1d)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1abdf19d9c17cee16ec316f76159a8ab1d"></a>

Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a04eddac8675e604cb7476f6219e354b1)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a04eddac8675e604cb7476f6219e354b1"></a>

Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1ae05e762c324cfc83dd312a1153b0051f)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ae05e762c324cfc83dd312a1153b0051f"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1afee2f1e9e2ae91d8ff19e758ef60268f)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1afee2f1e9e2ae91d8ff19e758ef60268f"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1ad8759eebf40a8e54ba7c1fff09afaa26)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ad8759eebf40a8e54ba7c1fff09afaa26"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.

#### `public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a8a2dd0c9fd34cec9bff4da6c8a7ab101)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a8a2dd0c9fd34cec9bff4da6c8a7ab101"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a2cf0f7e124844b6e08a424af8ebdd94f)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a2cf0f7e124844b6e08a424af8ebdd94f"></a>

Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.

#### `public inline bool `[`IsEntitlementsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1ad37c839abe94abf260ff863ec930748e)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ad37c839abe94abf260ff863ec930748e"></a>

Checks whether Entitlements_Optional has been set.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1adf4c65ca9b46ee777080add01c21fb1f)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1adf4c65ca9b46ee777080add01c21fb1f"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a4e27e5159c2b53cc8ea7467c7df7f753)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a4e27e5159c2b53cc8ea7467c7df7f753"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a15f83d0800cbe77a7a68680c64c993e9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a15f83d0800cbe77a7a68680c64c993e9"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1ae491c7db2a98d105853df0ccfee3a063)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ae491c7db2a98d105853df0ccfee3a063"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a0f258b190116995dab58b911936b4160)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a0f258b190116995dab58b911936b4160"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1ae6b4f875beb2f6b1faa3c5a020016a8b)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ae6b4f875beb2f6b1faa3c5a020016a8b"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1af283bf3974f7f60556842af030783209)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1af283bf3974f7f60556842af030783209"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1ad173bf8c1dc361eb29ccdb95a82556e5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ad173bf8c1dc361eb29ccdb95a82556e5"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a414c3f05988811d3a6284728b9fed442)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a414c3f05988811d3a6284728b9fed442"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlementsPrepared_1a8d9092618edb69f7f3331105d04e5b88)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a8d9092618edb69f7f3331105d04e5b88"></a>

Checks whether ErrorCode_Optional has been set.

#### `public inline void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementsPrepared_1aa0a6eaede1da7978dbc39518d345048e)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1aa0a6eaede1da7978dbc39518d345048e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a0f6cc8fdc010b9b593c3a391ee07c134)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a0f6cc8fdc010b9b593c3a391ee07c134"></a>

Checks whether ErrorCode_Optional is set to null.

