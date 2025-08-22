---
title: RHAPI_PurgeRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PurgeRequest`](#structFRHAPI__PurgeRequest) | Purge request to purge a person from the system. This will remove all data about that player from the system.

## struct `FRHAPI_PurgeRequest` <a id="structFRHAPI__PurgeRequest"></a>

```
struct FRHAPI_PurgeRequest
  : public FRHAPI_Model
```

Purge request to purge a person from the system. This will remove all data about that player from the system.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`SuggestedPurgeTime_Optional`](#structFRHAPI__PurgeRequest_1a4bf9b1063d210902a3f01fcc374debef) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`SuggestedPurgeTime_IsSet`](#structFRHAPI__PurgeRequest_1aeebdf2921a2e20d78da7649f9942d975) | true if SuggestedPurgeTime_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PurgeRequest_1ac94f370231a16bea2ba179c10ce96820)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurgeRequest_1a837db5fbfd21a93fa01344efbe8f7feb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a3c8d01197e0e6da4e9d2a5b04e12d6e4)`()` | Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1ac197416e977daa9842e11882618bead2)`() const` | Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a5231811413ca50826a74f47ecf4c8923)`(const FDateTime & DefaultValue) const` | Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a28929720aba1df7baebcc983be217391)`(FDateTime & OutValue) const` | Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1a28a78b908adadc91d5223077f1c3898a)`()` | Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1a7bce72dcba7ae3c826ba5dba0da9a8f4)`() const` | Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a9523ce84a8293933c3522d7cbcbd5f5c)`(const FDateTime & NewValue)` | Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true.
`public inline FORCEINLINE void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1aa9b65e20f2eea5cd05226a44e9c9c4e5)`(FDateTime && NewValue)` | Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true using move semantics.
`public inline void `[`ClearSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990)`()` | Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false.

### Members

#### `public FDateTime `[`SuggestedPurgeTime_Optional`](#structFRHAPI__PurgeRequest_1a4bf9b1063d210902a3f01fcc374debef) <a id="structFRHAPI__PurgeRequest_1a4bf9b1063d210902a3f01fcc374debef"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`SuggestedPurgeTime_IsSet`](#structFRHAPI__PurgeRequest_1aeebdf2921a2e20d78da7649f9942d975) <a id="structFRHAPI__PurgeRequest_1aeebdf2921a2e20d78da7649f9942d975"></a>

true if SuggestedPurgeTime_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurgeRequest_1ac94f370231a16bea2ba179c10ce96820)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurgeRequest_1ac94f370231a16bea2ba179c10ce96820"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurgeRequest_1a837db5fbfd21a93fa01344efbe8f7feb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PurgeRequest_1a837db5fbfd21a93fa01344efbe8f7feb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a3c8d01197e0e6da4e9d2a5b04e12d6e4)`()` <a id="structFRHAPI__PurgeRequest_1a3c8d01197e0e6da4e9d2a5b04e12d6e4"></a>

Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1ac197416e977daa9842e11882618bead2)`() const` <a id="structFRHAPI__PurgeRequest_1ac197416e977daa9842e11882618bead2"></a>

Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a5231811413ca50826a74f47ecf4c8923)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PurgeRequest_1a5231811413ca50826a74f47ecf4c8923"></a>

Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a28929720aba1df7baebcc983be217391)`(FDateTime & OutValue) const` <a id="structFRHAPI__PurgeRequest_1a28929720aba1df7baebcc983be217391"></a>

Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1a28a78b908adadc91d5223077f1c3898a)`()` <a id="structFRHAPI__PurgeRequest_1a28a78b908adadc91d5223077f1c3898a"></a>

Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1a7bce72dcba7ae3c826ba5dba0da9a8f4)`() const` <a id="structFRHAPI__PurgeRequest_1a7bce72dcba7ae3c826ba5dba0da9a8f4"></a>

Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a9523ce84a8293933c3522d7cbcbd5f5c)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeRequest_1a9523ce84a8293933c3522d7cbcbd5f5c"></a>

Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1aa9b65e20f2eea5cd05226a44e9c9c4e5)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeRequest_1aa9b65e20f2eea5cd05226a44e9c9c4e5"></a>

Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true using move semantics.

#### `public inline void `[`ClearSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990)`()` <a id="structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990"></a>

Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false.

