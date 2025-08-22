---
title: RHAPI_ClaimKeyRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ClaimKeyRequest`](#structFRHAPI__ClaimKeyRequest) | Attempt to claim a Key Claim from a Marketing Campaign.

## struct `FRHAPI_ClaimKeyRequest` <a id="structFRHAPI__ClaimKeyRequest"></a>

```
struct FRHAPI_ClaimKeyRequest
  : public FRHAPI_Model
```

Attempt to claim a Key Claim from a Marketing Campaign.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ExternalKeyType_Optional`](#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78) | 
`public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d) | true if ExternalKeyType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ClaimKeyRequest_1adb2423c0daf9e031d02795b9d7aa0ae4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ClaimKeyRequest_1a81f29156ac03599f04eb0b4c1376a161)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a7dac218d9c7d1b42f7f7f8d72f0fecbb)`()` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a96252600c9224525fe34fccbcd457f4e)`() const` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a8755ea7d6d15d41ddbc7831a83efa256)`(const FString & DefaultValue) const` | Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a53082511255921a29992a78b5763e998)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1abc12a5163fddbcd2afccb56487e1de65)`()` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a4ac7807d36498c4ed53e4c135c71c4b3)`() const` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a28eed664735fb284ef297aba9ffb7262)`(const FString & NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a3683bfbe0edfdbc1abe1b4ea1b638208)`(FString && NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)`()` | Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_ExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1aad21fbe6a2190c4e0c06ea022b5059ba)`()` | Returns the default value of ExternalKeyType.

### Members

#### `public FString `[`ExternalKeyType_Optional`](#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78) <a id="structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78"></a>

#### `public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d) <a id="structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d"></a>

true if ExternalKeyType_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ClaimKeyRequest_1adb2423c0daf9e031d02795b9d7aa0ae4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ClaimKeyRequest_1adb2423c0daf9e031d02795b9d7aa0ae4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ClaimKeyRequest_1a81f29156ac03599f04eb0b4c1376a161)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ClaimKeyRequest_1a81f29156ac03599f04eb0b4c1376a161"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a7dac218d9c7d1b42f7f7f8d72f0fecbb)`()` <a id="structFRHAPI__ClaimKeyRequest_1a7dac218d9c7d1b42f7f7f8d72f0fecbb"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a96252600c9224525fe34fccbcd457f4e)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a96252600c9224525fe34fccbcd457f4e"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a8755ea7d6d15d41ddbc7831a83efa256)`(const FString & DefaultValue) const` <a id="structFRHAPI__ClaimKeyRequest_1a8755ea7d6d15d41ddbc7831a83efa256"></a>

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a53082511255921a29992a78b5763e998)`(FString & OutValue) const` <a id="structFRHAPI__ClaimKeyRequest_1a53082511255921a29992a78b5763e998"></a>

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1abc12a5163fddbcd2afccb56487e1de65)`()` <a id="structFRHAPI__ClaimKeyRequest_1abc12a5163fddbcd2afccb56487e1de65"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a4ac7807d36498c4ed53e4c135c71c4b3)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a4ac7807d36498c4ed53e4c135c71c4b3"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a28eed664735fb284ef297aba9ffb7262)`(const FString & NewValue)` <a id="structFRHAPI__ClaimKeyRequest_1a28eed664735fb284ef297aba9ffb7262"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a3683bfbe0edfdbc1abe1b4ea1b638208)`(FString && NewValue)` <a id="structFRHAPI__ClaimKeyRequest_1a3683bfbe0edfdbc1abe1b4ea1b638208"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)`()` <a id="structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1"></a>

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_ExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1aad21fbe6a2190c4e0c06ea022b5059ba)`()` <a id="structFRHAPI__ClaimKeyRequest_1aad21fbe6a2190c4e0c06ea022b5059ba"></a>

Returns the default value of ExternalKeyType.

