# group `RHAPI_FriendsApiConfig` <a id="group__RHAPI__FriendsApiConfig"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FriendsApiConfig`](#structFRHAPI__FriendsApiConfig) | 

## struct `FRHAPI_FriendsApiConfig` <a id="structFRHAPI__FriendsApiConfig"></a>

```
struct FRHAPI_FriendsApiConfig
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`FriendLimit_Optional`](#structFRHAPI__FriendsApiConfig_1a1b1dcb1ea05e871ddb0e9aff8c1e53b8) | Maximum number of friends a user can have.
`public bool `[`FriendLimit_IsSet`](#structFRHAPI__FriendsApiConfig_1a4dadb896dc58a2e4337e82fb5badb867) | true if FriendLimit_Optional has been set to a value
`public int32 `[`BlockLimit_Optional`](#structFRHAPI__FriendsApiConfig_1afb3858ccf8f703a9c54cd9cdf225122d) | Maximum number of blocked users a user can have.
`public bool `[`BlockLimit_IsSet`](#structFRHAPI__FriendsApiConfig_1a4479801d5ac1ba074b482bd2a5eb6ff0) | true if BlockLimit_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__FriendsApiConfig_1a6514e754adb903404a45be3e17bf09a6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FriendsApiConfig_1a245323a07f74aba1ea09a4a751b41bbd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1ae9a4a3218dbac9aa7446dc933710bf82)`()` | Gets the value of FriendLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1ae672f30acddb8405c9f0958a4267bc2a)`() const` | Gets the value of FriendLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a04267e658fddb08beeb18e9e5a2491f8)`(const int32 & DefaultValue) const` | Gets the value of FriendLimit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a7b78efd3a914e2573ed53c5ca534ff63)`(int32 & OutValue) const` | Fills OutValue with the value of FriendLimit_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetFriendLimitOrNull`](#structFRHAPI__FriendsApiConfig_1aa2a7f053ea26ea6aaa4bd7aee282ddee)`()` | Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetFriendLimitOrNull`](#structFRHAPI__FriendsApiConfig_1a08ca443c142685db1b2992f2cbb1dda3)`() const` | Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a7f0b81b78b6b2e7c772dbad2f57adfff)`(const int32 & NewValue)` | Sets the value of FriendLimit_Optional and also sets FriendLimit_IsSet to true.
`public inline void `[`SetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a780c93a0447afbcd803d83424a237125)`(int32 && NewValue)` | Sets the value of FriendLimit_Optional and also sets FriendLimit_IsSet to true using move semantics.
`public inline void `[`ClearFriendLimit`](#structFRHAPI__FriendsApiConfig_1a60aa7aa4cfa84c0f671909ae7b175a0b)`()` | Clears the value of FriendLimit_Optional and sets FriendLimit_IsSet to false.
`public inline bool `[`IsFriendLimitSet`](#structFRHAPI__FriendsApiConfig_1ac6c02cc898fe802e4a690ea11a091a6e)`() const` | Checks whether FriendLimit_Optional has been set.
`public inline bool `[`IsFriendLimitDefaultValue`](#structFRHAPI__FriendsApiConfig_1ac72c7c55e3903f85f2e14cb155514b42)`() const` | Returns true if FriendLimit_Optional is set and matches the default value.
`public inline void `[`SetFriendLimitToDefault`](#structFRHAPI__FriendsApiConfig_1a65eface867cb58994c712fa3dd43fa83)`()` | Sets the value of FriendLimit_Optional to its default and also sets FriendLimit_IsSet to true.
`public inline int32 & `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a03d48f2c7dc47d6a53f6c30de8dff58e)`()` | Gets the value of BlockLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a89ba8195ddd65ac63c5725afa35e19b0)`() const` | Gets the value of BlockLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a9052c87bb5b6ff9d9228dc6e03f926e0)`(const int32 & DefaultValue) const` | Gets the value of BlockLimit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1af601208b5269a541f1389e9506569317)`(int32 & OutValue) const` | Fills OutValue with the value of BlockLimit_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetBlockLimitOrNull`](#structFRHAPI__FriendsApiConfig_1a3f7accd9cf22e2431740ba424b3fec1a)`()` | Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetBlockLimitOrNull`](#structFRHAPI__FriendsApiConfig_1a988918b5df52c1e25572782bd8ae53b1)`() const` | Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a4b2a5a79a1f2020a79fcf8b86a8c70d2)`(const int32 & NewValue)` | Sets the value of BlockLimit_Optional and also sets BlockLimit_IsSet to true.
`public inline void `[`SetBlockLimit`](#structFRHAPI__FriendsApiConfig_1aace58dc39ea228a9c268107126fdcc15)`(int32 && NewValue)` | Sets the value of BlockLimit_Optional and also sets BlockLimit_IsSet to true using move semantics.
`public inline void `[`ClearBlockLimit`](#structFRHAPI__FriendsApiConfig_1ae1a531df74e704ff9a5d5df27eecd439)`()` | Clears the value of BlockLimit_Optional and sets BlockLimit_IsSet to false.
`public inline bool `[`IsBlockLimitSet`](#structFRHAPI__FriendsApiConfig_1a4a2083bdf97b0967ef5bb32da1ce8f51)`() const` | Checks whether BlockLimit_Optional has been set.
`public inline bool `[`IsBlockLimitDefaultValue`](#structFRHAPI__FriendsApiConfig_1ace5bbfa806e7314b7b8781eec0fdac77)`() const` | Returns true if BlockLimit_Optional is set and matches the default value.
`public inline void `[`SetBlockLimitToDefault`](#structFRHAPI__FriendsApiConfig_1a31550ce0b44294881608c3f7caf124cf)`()` | Sets the value of BlockLimit_Optional to its default and also sets BlockLimit_IsSet to true.

### Members

#### `public int32 `[`FriendLimit_Optional`](#structFRHAPI__FriendsApiConfig_1a1b1dcb1ea05e871ddb0e9aff8c1e53b8) <a id="structFRHAPI__FriendsApiConfig_1a1b1dcb1ea05e871ddb0e9aff8c1e53b8"></a>

Maximum number of friends a user can have.

#### `public bool `[`FriendLimit_IsSet`](#structFRHAPI__FriendsApiConfig_1a4dadb896dc58a2e4337e82fb5badb867) <a id="structFRHAPI__FriendsApiConfig_1a4dadb896dc58a2e4337e82fb5badb867"></a>

true if FriendLimit_Optional has been set to a value

#### `public int32 `[`BlockLimit_Optional`](#structFRHAPI__FriendsApiConfig_1afb3858ccf8f703a9c54cd9cdf225122d) <a id="structFRHAPI__FriendsApiConfig_1afb3858ccf8f703a9c54cd9cdf225122d"></a>

Maximum number of blocked users a user can have.

#### `public bool `[`BlockLimit_IsSet`](#structFRHAPI__FriendsApiConfig_1a4479801d5ac1ba074b482bd2a5eb6ff0) <a id="structFRHAPI__FriendsApiConfig_1a4479801d5ac1ba074b482bd2a5eb6ff0"></a>

true if BlockLimit_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__FriendsApiConfig_1a6514e754adb903404a45be3e17bf09a6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FriendsApiConfig_1a6514e754adb903404a45be3e17bf09a6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendsApiConfig_1a245323a07f74aba1ea09a4a751b41bbd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FriendsApiConfig_1a245323a07f74aba1ea09a4a751b41bbd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1ae9a4a3218dbac9aa7446dc933710bf82)`()` <a id="structFRHAPI__FriendsApiConfig_1ae9a4a3218dbac9aa7446dc933710bf82"></a>

Gets the value of FriendLimit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1ae672f30acddb8405c9f0958a4267bc2a)`() const` <a id="structFRHAPI__FriendsApiConfig_1ae672f30acddb8405c9f0958a4267bc2a"></a>

Gets the value of FriendLimit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a04267e658fddb08beeb18e9e5a2491f8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__FriendsApiConfig_1a04267e658fddb08beeb18e9e5a2491f8"></a>

Gets the value of FriendLimit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a7b78efd3a914e2573ed53c5ca534ff63)`(int32 & OutValue) const` <a id="structFRHAPI__FriendsApiConfig_1a7b78efd3a914e2573ed53c5ca534ff63"></a>

Fills OutValue with the value of FriendLimit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetFriendLimitOrNull`](#structFRHAPI__FriendsApiConfig_1aa2a7f053ea26ea6aaa4bd7aee282ddee)`()` <a id="structFRHAPI__FriendsApiConfig_1aa2a7f053ea26ea6aaa4bd7aee282ddee"></a>

Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetFriendLimitOrNull`](#structFRHAPI__FriendsApiConfig_1a08ca443c142685db1b2992f2cbb1dda3)`() const` <a id="structFRHAPI__FriendsApiConfig_1a08ca443c142685db1b2992f2cbb1dda3"></a>

Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a7f0b81b78b6b2e7c772dbad2f57adfff)`(const int32 & NewValue)` <a id="structFRHAPI__FriendsApiConfig_1a7f0b81b78b6b2e7c772dbad2f57adfff"></a>

Sets the value of FriendLimit_Optional and also sets FriendLimit_IsSet to true.

#### `public inline void `[`SetFriendLimit`](#structFRHAPI__FriendsApiConfig_1a780c93a0447afbcd803d83424a237125)`(int32 && NewValue)` <a id="structFRHAPI__FriendsApiConfig_1a780c93a0447afbcd803d83424a237125"></a>

Sets the value of FriendLimit_Optional and also sets FriendLimit_IsSet to true using move semantics.

#### `public inline void `[`ClearFriendLimit`](#structFRHAPI__FriendsApiConfig_1a60aa7aa4cfa84c0f671909ae7b175a0b)`()` <a id="structFRHAPI__FriendsApiConfig_1a60aa7aa4cfa84c0f671909ae7b175a0b"></a>

Clears the value of FriendLimit_Optional and sets FriendLimit_IsSet to false.

#### `public inline bool `[`IsFriendLimitSet`](#structFRHAPI__FriendsApiConfig_1ac6c02cc898fe802e4a690ea11a091a6e)`() const` <a id="structFRHAPI__FriendsApiConfig_1ac6c02cc898fe802e4a690ea11a091a6e"></a>

Checks whether FriendLimit_Optional has been set.

#### `public inline bool `[`IsFriendLimitDefaultValue`](#structFRHAPI__FriendsApiConfig_1ac72c7c55e3903f85f2e14cb155514b42)`() const` <a id="structFRHAPI__FriendsApiConfig_1ac72c7c55e3903f85f2e14cb155514b42"></a>

Returns true if FriendLimit_Optional is set and matches the default value.

#### `public inline void `[`SetFriendLimitToDefault`](#structFRHAPI__FriendsApiConfig_1a65eface867cb58994c712fa3dd43fa83)`()` <a id="structFRHAPI__FriendsApiConfig_1a65eface867cb58994c712fa3dd43fa83"></a>

Sets the value of FriendLimit_Optional to its default and also sets FriendLimit_IsSet to true.

#### `public inline int32 & `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a03d48f2c7dc47d6a53f6c30de8dff58e)`()` <a id="structFRHAPI__FriendsApiConfig_1a03d48f2c7dc47d6a53f6c30de8dff58e"></a>

Gets the value of BlockLimit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a89ba8195ddd65ac63c5725afa35e19b0)`() const` <a id="structFRHAPI__FriendsApiConfig_1a89ba8195ddd65ac63c5725afa35e19b0"></a>

Gets the value of BlockLimit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a9052c87bb5b6ff9d9228dc6e03f926e0)`(const int32 & DefaultValue) const` <a id="structFRHAPI__FriendsApiConfig_1a9052c87bb5b6ff9d9228dc6e03f926e0"></a>

Gets the value of BlockLimit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBlockLimit`](#structFRHAPI__FriendsApiConfig_1af601208b5269a541f1389e9506569317)`(int32 & OutValue) const` <a id="structFRHAPI__FriendsApiConfig_1af601208b5269a541f1389e9506569317"></a>

Fills OutValue with the value of BlockLimit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetBlockLimitOrNull`](#structFRHAPI__FriendsApiConfig_1a3f7accd9cf22e2431740ba424b3fec1a)`()` <a id="structFRHAPI__FriendsApiConfig_1a3f7accd9cf22e2431740ba424b3fec1a"></a>

Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetBlockLimitOrNull`](#structFRHAPI__FriendsApiConfig_1a988918b5df52c1e25572782bd8ae53b1)`() const` <a id="structFRHAPI__FriendsApiConfig_1a988918b5df52c1e25572782bd8ae53b1"></a>

Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBlockLimit`](#structFRHAPI__FriendsApiConfig_1a4b2a5a79a1f2020a79fcf8b86a8c70d2)`(const int32 & NewValue)` <a id="structFRHAPI__FriendsApiConfig_1a4b2a5a79a1f2020a79fcf8b86a8c70d2"></a>

Sets the value of BlockLimit_Optional and also sets BlockLimit_IsSet to true.

#### `public inline void `[`SetBlockLimit`](#structFRHAPI__FriendsApiConfig_1aace58dc39ea228a9c268107126fdcc15)`(int32 && NewValue)` <a id="structFRHAPI__FriendsApiConfig_1aace58dc39ea228a9c268107126fdcc15"></a>

Sets the value of BlockLimit_Optional and also sets BlockLimit_IsSet to true using move semantics.

#### `public inline void `[`ClearBlockLimit`](#structFRHAPI__FriendsApiConfig_1ae1a531df74e704ff9a5d5df27eecd439)`()` <a id="structFRHAPI__FriendsApiConfig_1ae1a531df74e704ff9a5d5df27eecd439"></a>

Clears the value of BlockLimit_Optional and sets BlockLimit_IsSet to false.

#### `public inline bool `[`IsBlockLimitSet`](#structFRHAPI__FriendsApiConfig_1a4a2083bdf97b0967ef5bb32da1ce8f51)`() const` <a id="structFRHAPI__FriendsApiConfig_1a4a2083bdf97b0967ef5bb32da1ce8f51"></a>

Checks whether BlockLimit_Optional has been set.

#### `public inline bool `[`IsBlockLimitDefaultValue`](#structFRHAPI__FriendsApiConfig_1ace5bbfa806e7314b7b8781eec0fdac77)`() const` <a id="structFRHAPI__FriendsApiConfig_1ace5bbfa806e7314b7b8781eec0fdac77"></a>

Returns true if BlockLimit_Optional is set and matches the default value.

#### `public inline void `[`SetBlockLimitToDefault`](#structFRHAPI__FriendsApiConfig_1a31550ce0b44294881608c3f7caf124cf)`()` <a id="structFRHAPI__FriendsApiConfig_1a31550ce0b44294881608c3f7caf124cf"></a>

Sets the value of BlockLimit_Optional to its default and also sets BlockLimit_IsSet to true.

