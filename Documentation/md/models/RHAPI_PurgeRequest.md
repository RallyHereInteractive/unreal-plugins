# group `RHAPI_PurgeRequest` <a id="group__RHAPI__PurgeRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PurgeRequest`](#structFRHAPI__PurgeRequest) | Purge request to purge a person from the system. This will remove all data about that player from the system.

---
title: FRHAPI_PurgeRequest
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__PurgeRequest_1aff49d3ae97dfc558c1b21444c698f64b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a90f105ad324cb69521d1fb64afccdb9d)`()` | Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1aa373f9ebde40d495c28fd2d85fec7e08)`() const` | Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1aa77827115c501ea8218a1feb85aa1168)`(const FDateTime & DefaultValue) const` | Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a809a8c516d3eddc8691bd59e3bdae36a)`(FDateTime & OutValue) const` | Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1ada5179545649871f9f6f1f67241de802)`()` | Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1a8c060bac1f0fb9d171a069be84fd27a6)`() const` | Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a1f73e6419e4b8eada594472b95bdfbf7)`(const FDateTime & NewValue)` | Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true.
`public inline void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a8964cd9ad30dd3597c15da06e2e82a21)`(FDateTime && NewValue)` | Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true using move semantics.
`public inline void `[`ClearSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990)`()` | Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false.
`public inline bool `[`IsSuggestedPurgeTimeSet`](#structFRHAPI__PurgeRequest_1aafcc854a211fd0b7079d3e491476613f)`() const` | Checks whether SuggestedPurgeTime_Optional has been set.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurgeRequest_1aff49d3ae97dfc558c1b21444c698f64b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PurgeRequest_1aff49d3ae97dfc558c1b21444c698f64b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a90f105ad324cb69521d1fb64afccdb9d)`()` <a id="structFRHAPI__PurgeRequest_1a90f105ad324cb69521d1fb64afccdb9d"></a>

Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1aa373f9ebde40d495c28fd2d85fec7e08)`() const` <a id="structFRHAPI__PurgeRequest_1aa373f9ebde40d495c28fd2d85fec7e08"></a>

Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1aa77827115c501ea8218a1feb85aa1168)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PurgeRequest_1aa77827115c501ea8218a1feb85aa1168"></a>

Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a809a8c516d3eddc8691bd59e3bdae36a)`(FDateTime & OutValue) const` <a id="structFRHAPI__PurgeRequest_1a809a8c516d3eddc8691bd59e3bdae36a"></a>

Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1ada5179545649871f9f6f1f67241de802)`()` <a id="structFRHAPI__PurgeRequest_1ada5179545649871f9f6f1f67241de802"></a>

Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetSuggestedPurgeTimeOrNull`](#structFRHAPI__PurgeRequest_1a8c060bac1f0fb9d171a069be84fd27a6)`() const` <a id="structFRHAPI__PurgeRequest_1a8c060bac1f0fb9d171a069be84fd27a6"></a>

Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a1f73e6419e4b8eada594472b95bdfbf7)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeRequest_1a1f73e6419e4b8eada594472b95bdfbf7"></a>

Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true.

#### `public inline void `[`SetSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a8964cd9ad30dd3597c15da06e2e82a21)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeRequest_1a8964cd9ad30dd3597c15da06e2e82a21"></a>

Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true using move semantics.

#### `public inline void `[`ClearSuggestedPurgeTime`](#structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990)`()` <a id="structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990"></a>

Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false.

#### `public inline bool `[`IsSuggestedPurgeTimeSet`](#structFRHAPI__PurgeRequest_1aafcc854a211fd0b7079d3e491476613f)`() const` <a id="structFRHAPI__PurgeRequest_1aafcc854a211fd0b7079d3e491476613f"></a>

Checks whether SuggestedPurgeTime_Optional has been set.

