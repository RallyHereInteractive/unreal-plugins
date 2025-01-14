---
title: RHAPI_PlayerDeserterStatus
---

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
`public FDateTime `[`DeserterReset_Optional`](#structFRHAPI__PlayerDeserterStatus_1adcfe9f953c774807a2d357054a646b11) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`DeserterReset_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a0337ce3e6912dd71f16d706d0d1a40cc) | true if DeserterReset_Optional has been set to a value
`public int32 `[`DeserterCount_Optional`](#structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5) | The number of times a player has deserted before the expiration.
`public bool `[`DeserterCount_IsSet`](#structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4) | true if DeserterCount_Optional has been set to a value
`public FDateTime `[`LastUpdated_Optional`](#structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastUpdated_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93) | true if LastUpdated_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641) | Custom data about a players desertion status.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerDeserterStatus_1a908c8d76f794fb7f17ecb0539d8730f9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a7e835aca287af389dd44a18247d91c58)`()` | Gets the value of DeserterId.
`public inline const FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ae7c697cff74ff71c663a327227010fed)`() const` | Gets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a522a754e3536e6ea86881a54ff7940f8)`(const FString & NewValue)` | Sets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1aa08256808fd9664c7d10522bd495a85f)`(FString && NewValue)` | Sets the value of DeserterId using move semantics.
`public inline bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a9845862b72839ae75b33afe8cdf8fc0f)`()` | Gets the value of DeserterStatus.
`public inline const bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ae0297f2250adfca52a3efdbdd7268909)`() const` | Gets the value of DeserterStatus.
`public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ad5e69d472a67a6071fc4d7c63bfebb6a)`(const bool & NewValue)` | Sets the value of DeserterStatus.
`public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1af041daae2f234123e5d27910b09a5f6c)`(bool && NewValue)` | Sets the value of DeserterStatus using move semantics.
`public inline bool `[`IsDeserterStatusDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a4ded598ecc71e1fc96f5fb4541e45213)`() const` | Returns true if DeserterStatus matches the default value.
`public inline void `[`SetDeserterStatusToDefault`](#structFRHAPI__PlayerDeserterStatus_1aa3a0eeadb75723ba236fec4d6030b784)`()` | Sets the value of DeserterStatus to its default
`public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ae9fe0903d27ca0ca51a5b5ad267a479a)`()` | Gets the value of DeserterExpiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1aad4860eaab2c1b22996729cd7ad1802b)`() const` | Gets the value of DeserterExpiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a059fc3c4826dd51c092e7613c84f6355)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterExpiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a4f9276655690ff02f7f0340962132f8a)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterExpiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1acc80f8f0ba49d34932a8167da6d70d82)`()` | Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1a499851829d2956ce6fc455555014807f)`() const` | Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ab78220d8b18d588abe3b451b898a2ae6)`(const FDateTime & NewValue)` | Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a84b3bb6defd3dbe6e054cf67bd3050a5)`(FDateTime && NewValue)` | Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true using move semantics.
`public inline void `[`ClearDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805)`()` | Clears the value of DeserterExpiration_Optional and sets DeserterExpiration_IsSet to false.
`public inline bool `[`IsDeserterExpirationSet`](#structFRHAPI__PlayerDeserterStatus_1a47f854f54b33a5f8066de5598b77c072)`() const` | Checks whether DeserterExpiration_Optional has been set.
`public inline FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a10d8b0f3ec8d8affb2c71a2558423f55)`()` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a12bc0b7396228b8d9c77f0b1607b9502)`() const` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a19cdad1ab4db3d3cfb512e8cc4fda7ab)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a291e214eaf7dedb62cce50ee1d49f6f1)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1afc42bbbade45675bff33abfdb5a9c744)`()` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1a484740370691cc8407b7207f34a23548)`() const` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a461c84d2256674e68a82e5dd7bc5a6df)`(const FDateTime & NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.
`public inline void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1ab87f50a273e88030537eaf9e4d24e7ca)`(FDateTime && NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.
`public inline void `[`ClearDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a52df775528e0a7ba9af986a5d3dffdde)`()` | Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.
`public inline bool `[`IsDeserterResetSet`](#structFRHAPI__PlayerDeserterStatus_1a7f03bd1f7c3f54d11950e97e0268a7d3)`() const` | Checks whether DeserterReset_Optional has been set.
`public inline int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a9ef4e5e276bfc3b9749924d33ceab66f)`()` | Gets the value of DeserterCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a7174c2012420c7fa4f376050dd3d3e3a)`() const` | Gets the value of DeserterCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a7a2da751048fd65cd6f6f5aa5eb7f473)`(const int32 & DefaultValue) const` | Gets the value of DeserterCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a26c1e1ef02121c3422b77dedbad4f17b)`(int32 & OutValue) const` | Fills OutValue with the value of DeserterCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1adaefe86949465d53dc86996091a3d60d)`()` | Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a471b4f5daa6630dae9c50edcd69dfcf1)`() const` | Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a6959789bd0a92187639a7d5dc1e1d337)`(const int32 & NewValue)` | Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true.
`public inline void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a40ebaa63c9c06e27302e1f95709dfd60)`(int32 && NewValue)` | Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true using move semantics.
`public inline void `[`ClearDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d)`()` | Clears the value of DeserterCount_Optional and sets DeserterCount_IsSet to false.
`public inline bool `[`IsDeserterCountSet`](#structFRHAPI__PlayerDeserterStatus_1a57ed9aac63e3e732b19fb878817898b3)`() const` | Checks whether DeserterCount_Optional has been set.
`public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a58c842e3b9440596fc2e305f56ed7cc5)`() const` | Returns true if DeserterCount_Optional is set and matches the default value.
`public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__PlayerDeserterStatus_1a5a663a8d8919402a52a4b0cfd408dddb)`()` | Sets the value of DeserterCount_Optional to its default and also sets DeserterCount_IsSet to true.
`public inline FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aeec0ea6f475c80fee06dac957a29e57b)`()` | Gets the value of LastUpdated_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1adf66fcf4970278f9c874c0159ee762df)`() const` | Gets the value of LastUpdated_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a229b73b6fc36e4e7fe649f9682dee62c)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdated_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1af4b09d507eafc9a9de0f6c77e85b5405)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdated_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a5115a75207cd524110a3cd8cdcb3720c)`()` | Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a407922e1c49e123e2135b681ac5a6841)`() const` | Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a950605fff212b19bd51ff6963cdec34b)`(const FDateTime & NewValue)` | Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true.
`public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1ae9cfd2b9ae7c481695bbc70500f69bc7)`(FDateTime && NewValue)` | Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5)`()` | Clears the value of LastUpdated_Optional and sets LastUpdated_IsSet to false.
`public inline bool `[`IsLastUpdatedSet`](#structFRHAPI__PlayerDeserterStatus_1a32bd0521da49ff6fa5d7ca6905055019)`() const` | Checks whether LastUpdated_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1ad42a98a0e8dad73fb3155e9e21c7f412)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a2ee04290986277dd1cdda8969af1324d)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a714562c6097656ba31ec39a9fea186e8)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a7543db3e6ad3caf856884b1e72618b9c)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1a0641867f16316f9159bd49c7a303d37b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1aa0afeae2ba9efefba933f7c268b43131)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
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

#### `public FDateTime `[`DeserterReset_Optional`](#structFRHAPI__PlayerDeserterStatus_1adcfe9f953c774807a2d357054a646b11) <a id="structFRHAPI__PlayerDeserterStatus_1adcfe9f953c774807a2d357054a646b11"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`DeserterReset_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a0337ce3e6912dd71f16d706d0d1a40cc) <a id="structFRHAPI__PlayerDeserterStatus_1a0337ce3e6912dd71f16d706d0d1a40cc"></a>

true if DeserterReset_Optional has been set to a value

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerDeserterStatus_1a908c8d76f794fb7f17ecb0539d8730f9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerDeserterStatus_1a908c8d76f794fb7f17ecb0539d8730f9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a7e835aca287af389dd44a18247d91c58)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a7e835aca287af389dd44a18247d91c58"></a>

Gets the value of DeserterId.

#### `public inline const FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ae7c697cff74ff71c663a327227010fed)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ae7c697cff74ff71c663a327227010fed"></a>

Gets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a522a754e3536e6ea86881a54ff7940f8)`(const FString & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a522a754e3536e6ea86881a54ff7940f8"></a>

Sets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1aa08256808fd9664c7d10522bd495a85f)`(FString && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1aa08256808fd9664c7d10522bd495a85f"></a>

Sets the value of DeserterId using move semantics.

#### `public inline bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a9845862b72839ae75b33afe8cdf8fc0f)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a9845862b72839ae75b33afe8cdf8fc0f"></a>

Gets the value of DeserterStatus.

#### `public inline const bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ae0297f2250adfca52a3efdbdd7268909)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ae0297f2250adfca52a3efdbdd7268909"></a>

Gets the value of DeserterStatus.

#### `public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ad5e69d472a67a6071fc4d7c63bfebb6a)`(const bool & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ad5e69d472a67a6071fc4d7c63bfebb6a"></a>

Sets the value of DeserterStatus.

#### `public inline void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1af041daae2f234123e5d27910b09a5f6c)`(bool && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1af041daae2f234123e5d27910b09a5f6c"></a>

Sets the value of DeserterStatus using move semantics.

#### `public inline bool `[`IsDeserterStatusDefaultValue`](#structFRHAPI__PlayerDeserterStatus_1a4ded598ecc71e1fc96f5fb4541e45213)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a4ded598ecc71e1fc96f5fb4541e45213"></a>

Returns true if DeserterStatus matches the default value.

#### `public inline void `[`SetDeserterStatusToDefault`](#structFRHAPI__PlayerDeserterStatus_1aa3a0eeadb75723ba236fec4d6030b784)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aa3a0eeadb75723ba236fec4d6030b784"></a>

Sets the value of DeserterStatus to its default

#### `public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ae9fe0903d27ca0ca51a5b5ad267a479a)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ae9fe0903d27ca0ca51a5b5ad267a479a"></a>

Gets the value of DeserterExpiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1aad4860eaab2c1b22996729cd7ad1802b)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1aad4860eaab2c1b22996729cd7ad1802b"></a>

Gets the value of DeserterExpiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a059fc3c4826dd51c092e7613c84f6355)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a059fc3c4826dd51c092e7613c84f6355"></a>

Gets the value of DeserterExpiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a4f9276655690ff02f7f0340962132f8a)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a4f9276655690ff02f7f0340962132f8a"></a>

Fills OutValue with the value of DeserterExpiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1acc80f8f0ba49d34932a8167da6d70d82)`()` <a id="structFRHAPI__PlayerDeserterStatus_1acc80f8f0ba49d34932a8167da6d70d82"></a>

Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1a499851829d2956ce6fc455555014807f)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a499851829d2956ce6fc455555014807f"></a>

Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ab78220d8b18d588abe3b451b898a2ae6)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ab78220d8b18d588abe3b451b898a2ae6"></a>

Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a84b3bb6defd3dbe6e054cf67bd3050a5)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a84b3bb6defd3dbe6e054cf67bd3050a5"></a>

Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805"></a>

Clears the value of DeserterExpiration_Optional and sets DeserterExpiration_IsSet to false.

#### `public inline bool `[`IsDeserterExpirationSet`](#structFRHAPI__PlayerDeserterStatus_1a47f854f54b33a5f8066de5598b77c072)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a47f854f54b33a5f8066de5598b77c072"></a>

Checks whether DeserterExpiration_Optional has been set.

#### `public inline FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a10d8b0f3ec8d8affb2c71a2558423f55)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a10d8b0f3ec8d8affb2c71a2558423f55"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a12bc0b7396228b8d9c77f0b1607b9502)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a12bc0b7396228b8d9c77f0b1607b9502"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a19cdad1ab4db3d3cfb512e8cc4fda7ab)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a19cdad1ab4db3d3cfb512e8cc4fda7ab"></a>

Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a291e214eaf7dedb62cce50ee1d49f6f1)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a291e214eaf7dedb62cce50ee1d49f6f1"></a>

Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1afc42bbbade45675bff33abfdb5a9c744)`()` <a id="structFRHAPI__PlayerDeserterStatus_1afc42bbbade45675bff33abfdb5a9c744"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1a484740370691cc8407b7207f34a23548)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a484740370691cc8407b7207f34a23548"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a461c84d2256674e68a82e5dd7bc5a6df)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a461c84d2256674e68a82e5dd7bc5a6df"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.

#### `public inline void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1ab87f50a273e88030537eaf9e4d24e7ca)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ab87f50a273e88030537eaf9e4d24e7ca"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a52df775528e0a7ba9af986a5d3dffdde)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a52df775528e0a7ba9af986a5d3dffdde"></a>

Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.

#### `public inline bool `[`IsDeserterResetSet`](#structFRHAPI__PlayerDeserterStatus_1a7f03bd1f7c3f54d11950e97e0268a7d3)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a7f03bd1f7c3f54d11950e97e0268a7d3"></a>

Checks whether DeserterReset_Optional has been set.

#### `public inline int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a9ef4e5e276bfc3b9749924d33ceab66f)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a9ef4e5e276bfc3b9749924d33ceab66f"></a>

Gets the value of DeserterCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a7174c2012420c7fa4f376050dd3d3e3a)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a7174c2012420c7fa4f376050dd3d3e3a"></a>

Gets the value of DeserterCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a7a2da751048fd65cd6f6f5aa5eb7f473)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a7a2da751048fd65cd6f6f5aa5eb7f473"></a>

Gets the value of DeserterCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a26c1e1ef02121c3422b77dedbad4f17b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a26c1e1ef02121c3422b77dedbad4f17b"></a>

Fills OutValue with the value of DeserterCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1adaefe86949465d53dc86996091a3d60d)`()` <a id="structFRHAPI__PlayerDeserterStatus_1adaefe86949465d53dc86996091a3d60d"></a>

Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a471b4f5daa6630dae9c50edcd69dfcf1)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a471b4f5daa6630dae9c50edcd69dfcf1"></a>

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

#### `public inline FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aeec0ea6f475c80fee06dac957a29e57b)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aeec0ea6f475c80fee06dac957a29e57b"></a>

Gets the value of LastUpdated_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1adf66fcf4970278f9c874c0159ee762df)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1adf66fcf4970278f9c874c0159ee762df"></a>

Gets the value of LastUpdated_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a229b73b6fc36e4e7fe649f9682dee62c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a229b73b6fc36e4e7fe649f9682dee62c"></a>

Gets the value of LastUpdated_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1af4b09d507eafc9a9de0f6c77e85b5405)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1af4b09d507eafc9a9de0f6c77e85b5405"></a>

Fills OutValue with the value of LastUpdated_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a5115a75207cd524110a3cd8cdcb3720c)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a5115a75207cd524110a3cd8cdcb3720c"></a>

Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a407922e1c49e123e2135b681ac5a6841)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a407922e1c49e123e2135b681ac5a6841"></a>

Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a950605fff212b19bd51ff6963cdec34b)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a950605fff212b19bd51ff6963cdec34b"></a>

Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true.

#### `public inline void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1ae9cfd2b9ae7c481695bbc70500f69bc7)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ae9cfd2b9ae7c481695bbc70500f69bc7"></a>

Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5"></a>

Clears the value of LastUpdated_Optional and sets LastUpdated_IsSet to false.

#### `public inline bool `[`IsLastUpdatedSet`](#structFRHAPI__PlayerDeserterStatus_1a32bd0521da49ff6fa5d7ca6905055019)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a32bd0521da49ff6fa5d7ca6905055019"></a>

Checks whether LastUpdated_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1ad42a98a0e8dad73fb3155e9e21c7f412)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ad42a98a0e8dad73fb3155e9e21c7f412"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a2ee04290986277dd1cdda8969af1324d)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a2ee04290986277dd1cdda8969af1324d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a714562c6097656ba31ec39a9fea186e8)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a714562c6097656ba31ec39a9fea186e8"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a7543db3e6ad3caf856884b1e72618b9c)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a7543db3e6ad3caf856884b1e72618b9c"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1a0641867f16316f9159bd49c7a303d37b)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a0641867f16316f9159bd49c7a303d37b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1aa0afeae2ba9efefba933f7c268b43131)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1aa0afeae2ba9efefba933f7c268b43131"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a1e41046e80fc0723219298d86008784e)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a1e41046e80fc0723219298d86008784e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a9caadcff95f313596aa86dd385489df9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a9caadcff95f313596aa86dd385489df9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700)`()` <a id="structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerDeserterStatus_1af33b4aa8e00604e12d014021213942ce)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1af33b4aa8e00604e12d014021213942ce"></a>

Checks whether CustomData_Optional has been set.

