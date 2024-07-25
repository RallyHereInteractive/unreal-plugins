# group `RHAPI_PlayerDeserterStatus` <a id="group__RHAPI__PlayerDeserterStatus"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerDeserterStatus`](#structFRHAPI__PlayerDeserterStatus) | 

## struct `FRHAPI_PlayerDeserterStatus` <a id="structFRHAPI__PlayerDeserterStatus"></a>

```
struct FRHAPI_PlayerDeserterStatus
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`DeserterId`](#structFRHAPI__PlayerDeserterStatus_1a2e94ff1712e6c03ad044e6c80824e422) | ID for which type of deserter this is.
`public bool `[`DeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a0b9b6e02cc73cfcfb7e0ad3e54924d1e) | Flag of whether or not the player is a deserter.
`public FDateTime `[`DeserterExpiration_Optional`](#structFRHAPI__PlayerDeserterStatus_1a634163e27e36eb0490e11b908a79e12a) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`DeserterExpiration_IsSet`](#structFRHAPI__PlayerDeserterStatus_1aec5ec90e840054b4a283fa5fd46998f6) | true if DeserterExpiration_Optional has been set to a value
`public int32 `[`DeserterCount_Optional`](#structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5) | The number of times a player has deserted before the expiration.
`public bool `[`DeserterCount_IsSet`](#structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4) | true if DeserterCount_Optional has been set to a value
`public FDateTime `[`LastUpdated_Optional`](#structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastUpdated_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93) | true if LastUpdated_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641) | Custom data about a players desertion status.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerDeserterStatus_1ab8ab3442f15ce745cb811c3c0795a0dd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a7cea54fde0eeb1245d3a554f9ed23ef6)`()` | Gets the value of DeserterId.
`public inline const FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ac6f03d69ec9e6fcf678afa2ac62a4e9d)`() const` | Gets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a522a754e3536e6ea86881a54ff7940f8)`(const FString & NewValue)` | Sets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1aa08256808fd9664c7d10522bd495a85f)`(FString && NewValue)` | Sets the value of DeserterId using move semantics.
`public inline bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a811da36876eccc04e83a6c9a9c830654)`()` | Gets the value of DeserterStatus.
`public inline const bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a76a7800fb436c6c6fe44a3c343226b8d)`() const` | Gets the value of DeserterStatus.
`public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ad5e69d472a67a6071fc4d7c63bfebb6a)`(const bool & NewValue)` | Sets the value of DeserterStatus.
`public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1af041daae2f234123e5d27910b09a5f6c)`(bool && NewValue)` | Sets the value of DeserterStatus using move semantics.
`public inline bool `[`IsDeserterStatusDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a4ded598ecc71e1fc96f5fb4541e45213)`() const` | Returns true if DeserterStatus matches the default value.
`public inline void `[`SetDeserterStatusToDefault`](#structFRHAPI__PlayerDeserterStatus_1aa3a0eeadb75723ba236fec4d6030b784)`()` | Sets the value of DeserterStatus to its default
`public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a4f47e9c02e1a9c4883cfa56f15feb372)`()` | Gets the value of DeserterExpiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a5bf39faf7d5ea5f7e58126f59e2c136c)`() const` | Gets the value of DeserterExpiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1aa2b672c95f58f6570d8af7be57a0a46c)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterExpiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a4f9276655690ff02f7f0340962132f8a)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterExpiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1a0e9b84b0fc29251122a4b93bc70f5c11)`()` | Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1ae75396509b45cbf7153625e93152aeb4)`() const` | Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ab78220d8b18d588abe3b451b898a2ae6)`(const FDateTime & NewValue)` | Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a84b3bb6defd3dbe6e054cf67bd3050a5)`(FDateTime && NewValue)` | Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true using move semantics.
`public inline void `[`ClearDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805)`()` | Clears the value of DeserterExpiration_Optional and sets DeserterExpiration_IsSet to false.
`public inline bool `[`IsDeserterExpirationSet`](#structFRHAPI__PlayerDeserterStatus_1a47f854f54b33a5f8066de5598b77c072)`() const` | Checks whether DeserterExpiration_Optional has been set.
`public inline int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1acb0e2db74dc731b8b4f55971c54d91c9)`()` | Gets the value of DeserterCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1aee17b26ad0fbc03ad2b0b670ce25788e)`() const` | Gets the value of DeserterCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a10a7d266f06f3e1ce91257f5ea3e9eb5)`(const int32 & DefaultValue) const` | Gets the value of DeserterCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a26c1e1ef02121c3422b77dedbad4f17b)`(int32 & OutValue) const` | Fills OutValue with the value of DeserterCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a6884d3f2d5c5a4b3a9e4597fb69e41ad)`()` | Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a116d0eb070bbf6bea3acb882be63069f)`() const` | Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a6959789bd0a92187639a7d5dc1e1d337)`(const int32 & NewValue)` | Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true.
`public inline void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a40ebaa63c9c06e27302e1f95709dfd60)`(int32 && NewValue)` | Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true using move semantics.
`public inline void `[`ClearDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d)`()` | Clears the value of DeserterCount_Optional and sets DeserterCount_IsSet to false.
`public inline bool `[`IsDeserterCountSet`](#structFRHAPI__PlayerDeserterStatus_1a57ed9aac63e3e732b19fb878817898b3)`() const` | Checks whether DeserterCount_Optional has been set.
`public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a58c842e3b9440596fc2e305f56ed7cc5)`() const` | Returns true if DeserterCount_Optional is set and matches the default value.
`public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__PlayerDeserterStatus_1a5a663a8d8919402a52a4b0cfd408dddb)`()` | Sets the value of DeserterCount_Optional to its default and also sets DeserterCount_IsSet to true.
`public inline FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a9db82463de5e4e64845316473df0290b)`()` | Gets the value of LastUpdated_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a3e98aae36bfa4963f1a4573cc66c8202)`() const` | Gets the value of LastUpdated_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa5fecdfc729bce9b54bdbde1cbc3e6cf)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdated_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1af4b09d507eafc9a9de0f6c77e85b5405)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdated_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a19d31a0d04cd20e6e5fab2a0b8089e31)`()` | Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1abe3062b8c897bbd66946cbc137e9a0cf)`() const` | Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a950605fff212b19bd51ff6963cdec34b)`(const FDateTime & NewValue)` | Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true.
`public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1ae9cfd2b9ae7c481695bbc70500f69bc7)`(FDateTime && NewValue)` | Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5)`()` | Clears the value of LastUpdated_Optional and sets LastUpdated_IsSet to false.
`public inline bool `[`IsLastUpdatedSet`](#structFRHAPI__PlayerDeserterStatus_1a32bd0521da49ff6fa5d7ca6905055019)`() const` | Checks whether LastUpdated_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a46474b781a7cb6dacf64697f1b0ec44f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1ad9e45bba0216771e4d7d26cd074cda3f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a394541f6c26faef6267f5abf168f18f4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a7543db3e6ad3caf856884b1e72618b9c)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1abdf5521e47cfb6ce412d169db9df640a)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1ac50437b4c40b1efb60be1e507a58927f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a1e41046e80fc0723219298d86008784e)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a9caadcff95f313596aa86dd385489df9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerDeserterStatus_1af33b4aa8e00604e12d014021213942ce)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FString `[`DeserterId`](#structFRHAPI__PlayerDeserterStatus_1a2e94ff1712e6c03ad044e6c80824e422) <a id="structFRHAPI__PlayerDeserterStatus_1a2e94ff1712e6c03ad044e6c80824e422"></a>

ID for which type of deserter this is.

#### `public bool `[`DeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a0b9b6e02cc73cfcfb7e0ad3e54924d1e) <a id="structFRHAPI__PlayerDeserterStatus_1a0b9b6e02cc73cfcfb7e0ad3e54924d1e"></a>

Flag of whether or not the player is a deserter.

#### `public FDateTime `[`DeserterExpiration_Optional`](#structFRHAPI__PlayerDeserterStatus_1a634163e27e36eb0490e11b908a79e12a) <a id="structFRHAPI__PlayerDeserterStatus_1a634163e27e36eb0490e11b908a79e12a"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`DeserterExpiration_IsSet`](#structFRHAPI__PlayerDeserterStatus_1aec5ec90e840054b4a283fa5fd46998f6) <a id="structFRHAPI__PlayerDeserterStatus_1aec5ec90e840054b4a283fa5fd46998f6"></a>

true if DeserterExpiration_Optional has been set to a value

#### `public int32 `[`DeserterCount_Optional`](#structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5) <a id="structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5"></a>

The number of times a player has deserted before the expiration.

#### `public bool `[`DeserterCount_IsSet`](#structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4) <a id="structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4"></a>

true if DeserterCount_Optional has been set to a value

#### `public FDateTime `[`LastUpdated_Optional`](#structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03) <a id="structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LastUpdated_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93) <a id="structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93"></a>

true if LastUpdated_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641) <a id="structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641"></a>

Custom data about a players desertion status.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c) <a id="structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerDeserterStatus_1ab8ab3442f15ce745cb811c3c0795a0dd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerDeserterStatus_1ab8ab3442f15ce745cb811c3c0795a0dd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a7cea54fde0eeb1245d3a554f9ed23ef6)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a7cea54fde0eeb1245d3a554f9ed23ef6"></a>

Gets the value of DeserterId.

#### `public inline const FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ac6f03d69ec9e6fcf678afa2ac62a4e9d)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ac6f03d69ec9e6fcf678afa2ac62a4e9d"></a>

Gets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a522a754e3536e6ea86881a54ff7940f8)`(const FString & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a522a754e3536e6ea86881a54ff7940f8"></a>

Sets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1aa08256808fd9664c7d10522bd495a85f)`(FString && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1aa08256808fd9664c7d10522bd495a85f"></a>

Sets the value of DeserterId using move semantics.

#### `public inline bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a811da36876eccc04e83a6c9a9c830654)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a811da36876eccc04e83a6c9a9c830654"></a>

Gets the value of DeserterStatus.

#### `public inline const bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a76a7800fb436c6c6fe44a3c343226b8d)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a76a7800fb436c6c6fe44a3c343226b8d"></a>

Gets the value of DeserterStatus.

#### `public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ad5e69d472a67a6071fc4d7c63bfebb6a)`(const bool & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ad5e69d472a67a6071fc4d7c63bfebb6a"></a>

Sets the value of DeserterStatus.

#### `public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1af041daae2f234123e5d27910b09a5f6c)`(bool && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1af041daae2f234123e5d27910b09a5f6c"></a>

Sets the value of DeserterStatus using move semantics.

#### `public inline bool `[`IsDeserterStatusDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a4ded598ecc71e1fc96f5fb4541e45213)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a4ded598ecc71e1fc96f5fb4541e45213"></a>

Returns true if DeserterStatus matches the default value.

#### `public inline void `[`SetDeserterStatusToDefault`](#structFRHAPI__PlayerDeserterStatus_1aa3a0eeadb75723ba236fec4d6030b784)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aa3a0eeadb75723ba236fec4d6030b784"></a>

Sets the value of DeserterStatus to its default

#### `public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a4f47e9c02e1a9c4883cfa56f15feb372)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a4f47e9c02e1a9c4883cfa56f15feb372"></a>

Gets the value of DeserterExpiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a5bf39faf7d5ea5f7e58126f59e2c136c)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a5bf39faf7d5ea5f7e58126f59e2c136c"></a>

Gets the value of DeserterExpiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1aa2b672c95f58f6570d8af7be57a0a46c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1aa2b672c95f58f6570d8af7be57a0a46c"></a>

Gets the value of DeserterExpiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a4f9276655690ff02f7f0340962132f8a)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a4f9276655690ff02f7f0340962132f8a"></a>

Fills OutValue with the value of DeserterExpiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1a0e9b84b0fc29251122a4b93bc70f5c11)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a0e9b84b0fc29251122a4b93bc70f5c11"></a>

Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1ae75396509b45cbf7153625e93152aeb4)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ae75396509b45cbf7153625e93152aeb4"></a>

Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ab78220d8b18d588abe3b451b898a2ae6)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ab78220d8b18d588abe3b451b898a2ae6"></a>

Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a84b3bb6defd3dbe6e054cf67bd3050a5)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a84b3bb6defd3dbe6e054cf67bd3050a5"></a>

Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805"></a>

Clears the value of DeserterExpiration_Optional and sets DeserterExpiration_IsSet to false.

#### `public inline bool `[`IsDeserterExpirationSet`](#structFRHAPI__PlayerDeserterStatus_1a47f854f54b33a5f8066de5598b77c072)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a47f854f54b33a5f8066de5598b77c072"></a>

Checks whether DeserterExpiration_Optional has been set.

#### `public inline int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1acb0e2db74dc731b8b4f55971c54d91c9)`()` <a id="structFRHAPI__PlayerDeserterStatus_1acb0e2db74dc731b8b4f55971c54d91c9"></a>

Gets the value of DeserterCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1aee17b26ad0fbc03ad2b0b670ce25788e)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1aee17b26ad0fbc03ad2b0b670ce25788e"></a>

Gets the value of DeserterCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a10a7d266f06f3e1ce91257f5ea3e9eb5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a10a7d266f06f3e1ce91257f5ea3e9eb5"></a>

Gets the value of DeserterCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a26c1e1ef02121c3422b77dedbad4f17b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a26c1e1ef02121c3422b77dedbad4f17b"></a>

Fills OutValue with the value of DeserterCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a6884d3f2d5c5a4b3a9e4597fb69e41ad)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a6884d3f2d5c5a4b3a9e4597fb69e41ad"></a>

Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a116d0eb070bbf6bea3acb882be63069f)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a116d0eb070bbf6bea3acb882be63069f"></a>

Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a6959789bd0a92187639a7d5dc1e1d337)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a6959789bd0a92187639a7d5dc1e1d337"></a>

Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true.

#### `public inline void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a40ebaa63c9c06e27302e1f95709dfd60)`(int32 && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a40ebaa63c9c06e27302e1f95709dfd60"></a>

Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d"></a>

Clears the value of DeserterCount_Optional and sets DeserterCount_IsSet to false.

#### `public inline bool `[`IsDeserterCountSet`](#structFRHAPI__PlayerDeserterStatus_1a57ed9aac63e3e732b19fb878817898b3)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a57ed9aac63e3e732b19fb878817898b3"></a>

Checks whether DeserterCount_Optional has been set.

#### `public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a58c842e3b9440596fc2e305f56ed7cc5)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a58c842e3b9440596fc2e305f56ed7cc5"></a>

Returns true if DeserterCount_Optional is set and matches the default value.

#### `public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__PlayerDeserterStatus_1a5a663a8d8919402a52a4b0cfd408dddb)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a5a663a8d8919402a52a4b0cfd408dddb"></a>

Sets the value of DeserterCount_Optional to its default and also sets DeserterCount_IsSet to true.

#### `public inline FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a9db82463de5e4e64845316473df0290b)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a9db82463de5e4e64845316473df0290b"></a>

Gets the value of LastUpdated_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a3e98aae36bfa4963f1a4573cc66c8202)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a3e98aae36bfa4963f1a4573cc66c8202"></a>

Gets the value of LastUpdated_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa5fecdfc729bce9b54bdbde1cbc3e6cf)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1aa5fecdfc729bce9b54bdbde1cbc3e6cf"></a>

Gets the value of LastUpdated_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1af4b09d507eafc9a9de0f6c77e85b5405)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1af4b09d507eafc9a9de0f6c77e85b5405"></a>

Fills OutValue with the value of LastUpdated_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a19d31a0d04cd20e6e5fab2a0b8089e31)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a19d31a0d04cd20e6e5fab2a0b8089e31"></a>

Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1abe3062b8c897bbd66946cbc137e9a0cf)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1abe3062b8c897bbd66946cbc137e9a0cf"></a>

Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a950605fff212b19bd51ff6963cdec34b)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a950605fff212b19bd51ff6963cdec34b"></a>

Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true.

#### `public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1ae9cfd2b9ae7c481695bbc70500f69bc7)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ae9cfd2b9ae7c481695bbc70500f69bc7"></a>

Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5"></a>

Clears the value of LastUpdated_Optional and sets LastUpdated_IsSet to false.

#### `public inline bool `[`IsLastUpdatedSet`](#structFRHAPI__PlayerDeserterStatus_1a32bd0521da49ff6fa5d7ca6905055019)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a32bd0521da49ff6fa5d7ca6905055019"></a>

Checks whether LastUpdated_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a46474b781a7cb6dacf64697f1b0ec44f)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a46474b781a7cb6dacf64697f1b0ec44f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1ad9e45bba0216771e4d7d26cd074cda3f)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ad9e45bba0216771e4d7d26cd074cda3f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a394541f6c26faef6267f5abf168f18f4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a394541f6c26faef6267f5abf168f18f4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a7543db3e6ad3caf856884b1e72618b9c)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a7543db3e6ad3caf856884b1e72618b9c"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1abdf5521e47cfb6ce412d169db9df640a)`()` <a id="structFRHAPI__PlayerDeserterStatus_1abdf5521e47cfb6ce412d169db9df640a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1ac50437b4c40b1efb60be1e507a58927f)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ac50437b4c40b1efb60be1e507a58927f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a1e41046e80fc0723219298d86008784e)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a1e41046e80fc0723219298d86008784e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a9caadcff95f313596aa86dd385489df9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a9caadcff95f313596aa86dd385489df9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700)`()` <a id="structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerDeserterStatus_1af33b4aa8e00604e12d014021213942ce)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1af33b4aa8e00604e12d014021213942ce"></a>

Checks whether CustomData_Optional has been set.

