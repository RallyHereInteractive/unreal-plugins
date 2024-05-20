# RHAPI_RankUpdateRequest <a id="group__RHAPI__RankUpdateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankUpdateRequest`](#structFRHAPI__RankUpdateRequest) | DEPRECATED A request body to calculate and update players&#39; ratings from a match.

## struct `FRHAPI_RankUpdateRequest` <a id="structFRHAPI__RankUpdateRequest"></a>

```
struct FRHAPI_RankUpdateRequest
  : public FRHAPI_Model
```

DEPRECATED A request body to calculate and update players&#39; ratings from a match.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequest_1a4477171ba14b69eb70af581edef93e48) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequest_1aa8deba01925f301c876175fc18b4f7be) | true if InstanceId_Optional has been set to a value
`public int32 `[`RankId`](#structFRHAPI__RankUpdateRequest_1ab9ce37215c4e7070a1a676f767e078dc) | ID for the rank type used in this match.
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1adae1542db62db6b7689c428aa14e4692) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequest_1a5df6b65300c1e31bc647d0bc8f1ab7eb) | List of teams that participated in this match.
`public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequest_1ad07807033b1c34300bb454b20e4e6152)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequest_1adfd80782f4915996120f962a25809ed7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a59e9769e02bf85fad053d49bd81168e5)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a69935ac6780c45d40fa8c15e07366035)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a27007ef16eb3b6177c6521b0777a677e)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a1b5f91160b122d8e2249f932f63e12b0)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1a34ce0581bdbdef086c3bf046fde9c11e)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1aa56fed83b86bcc8880d0e6d0a18ee9af)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequest_1a0a2a656b10a1999116087146e5c78f20)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequest_1aa84c3fd36883c09c7587d4db5455e84b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1a086ceba2c60a0d6c3c66890f56ea748e)`()` | Gets the value of RankId.
`public inline const int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1afb5c7a89156d6ed273fd1db6d25588f7)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequest_1abe44a1f9351d09e4d861446fe4e0be26)`(int32 NewValue)` | Sets the value of RankId.
`public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__RankUpdateRequest_1a342621f5d30ef21a69bec7360111d74c)`() const` | Returns true if RankId matches the default value.
`public inline void `[`SetRankIdToDefault`](#structFRHAPI__RankUpdateRequest_1a91a134a09c1b040bd21f2806af48c2a3)`()` | Sets the value of RankId to its default
`public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a6a17e2ddfbd826a6f5017864c5fd3cee)`()` | Gets the value of MatchLengthSeconds.
`public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a74d8db5e5acfbccf54605736f4f3c1a9)`() const` | Gets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a3028ac1d71c603a9cc63af5e01ca0347)`(int32 NewValue)` | Sets the value of MatchLengthSeconds.
`public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__RankUpdateRequest_1a00b04cc5981ff066d2e73dd2a847211a)`() const` | Returns true if MatchLengthSeconds matches the default value.
`public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__RankUpdateRequest_1a801591c0ec4eacf814460e8647ea5991)`()` | Sets the value of MatchLengthSeconds to its default
`public inline TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1af4cc28bd916f32502783b35e03deacd4)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1ae798a54aeb82fc9c65cdfe870cf34f91)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequest_1a174cb8e6da945030adc1f62549210340)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > NewValue)` | Sets the value of Teams.

#### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequest_1a4477171ba14b69eb70af581edef93e48) <a id="structFRHAPI__RankUpdateRequest_1a4477171ba14b69eb70af581edef93e48"></a>

ID for the instance the match took place on.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequest_1aa8deba01925f301c876175fc18b4f7be) <a id="structFRHAPI__RankUpdateRequest_1aa8deba01925f301c876175fc18b4f7be"></a>

true if InstanceId_Optional has been set to a value

#### `public int32 `[`RankId`](#structFRHAPI__RankUpdateRequest_1ab9ce37215c4e7070a1a676f767e078dc) <a id="structFRHAPI__RankUpdateRequest_1ab9ce37215c4e7070a1a676f767e078dc"></a>

ID for the rank type used in this match.

#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1adae1542db62db6b7689c428aa14e4692) <a id="structFRHAPI__RankUpdateRequest_1adae1542db62db6b7689c428aa14e4692"></a>

How many seconds the match lasted.

#### `public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequest_1a5df6b65300c1e31bc647d0bc8f1ab7eb) <a id="structFRHAPI__RankUpdateRequest_1a5df6b65300c1e31bc647d0bc8f1ab7eb"></a>

List of teams that participated in this match.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequest_1ad07807033b1c34300bb454b20e4e6152)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankUpdateRequest_1ad07807033b1c34300bb454b20e4e6152"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequest_1adfd80782f4915996120f962a25809ed7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankUpdateRequest_1adfd80782f4915996120f962a25809ed7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a59e9769e02bf85fad053d49bd81168e5)`()` <a id="structFRHAPI__RankUpdateRequest_1a59e9769e02bf85fad053d49bd81168e5"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a69935ac6780c45d40fa8c15e07366035)`() const` <a id="structFRHAPI__RankUpdateRequest_1a69935ac6780c45d40fa8c15e07366035"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a27007ef16eb3b6177c6521b0777a677e)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankUpdateRequest_1a27007ef16eb3b6177c6521b0777a677e"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a1b5f91160b122d8e2249f932f63e12b0)`(FString & OutValue) const` <a id="structFRHAPI__RankUpdateRequest_1a1b5f91160b122d8e2249f932f63e12b0"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1a34ce0581bdbdef086c3bf046fde9c11e)`()` <a id="structFRHAPI__RankUpdateRequest_1a34ce0581bdbdef086c3bf046fde9c11e"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1aa56fed83b86bcc8880d0e6d0a18ee9af)`() const` <a id="structFRHAPI__RankUpdateRequest_1aa56fed83b86bcc8880d0e6d0a18ee9af"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequest_1a0a2a656b10a1999116087146e5c78f20)`(FString NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a0a2a656b10a1999116087146e5c78f20"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequest_1aa84c3fd36883c09c7587d4db5455e84b)`()` <a id="structFRHAPI__RankUpdateRequest_1aa84c3fd36883c09c7587d4db5455e84b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1a086ceba2c60a0d6c3c66890f56ea748e)`()` <a id="structFRHAPI__RankUpdateRequest_1a086ceba2c60a0d6c3c66890f56ea748e"></a>

Gets the value of RankId.

#### `public inline const int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1afb5c7a89156d6ed273fd1db6d25588f7)`() const` <a id="structFRHAPI__RankUpdateRequest_1afb5c7a89156d6ed273fd1db6d25588f7"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequest_1abe44a1f9351d09e4d861446fe4e0be26)`(int32 NewValue)` <a id="structFRHAPI__RankUpdateRequest_1abe44a1f9351d09e4d861446fe4e0be26"></a>

Sets the value of RankId.

#### `public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__RankUpdateRequest_1a342621f5d30ef21a69bec7360111d74c)`() const` <a id="structFRHAPI__RankUpdateRequest_1a342621f5d30ef21a69bec7360111d74c"></a>

Returns true if RankId matches the default value.

#### `public inline void `[`SetRankIdToDefault`](#structFRHAPI__RankUpdateRequest_1a91a134a09c1b040bd21f2806af48c2a3)`()` <a id="structFRHAPI__RankUpdateRequest_1a91a134a09c1b040bd21f2806af48c2a3"></a>

Sets the value of RankId to its default

#### `public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a6a17e2ddfbd826a6f5017864c5fd3cee)`()` <a id="structFRHAPI__RankUpdateRequest_1a6a17e2ddfbd826a6f5017864c5fd3cee"></a>

Gets the value of MatchLengthSeconds.

#### `public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a74d8db5e5acfbccf54605736f4f3c1a9)`() const` <a id="structFRHAPI__RankUpdateRequest_1a74d8db5e5acfbccf54605736f4f3c1a9"></a>

Gets the value of MatchLengthSeconds.

#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a3028ac1d71c603a9cc63af5e01ca0347)`(int32 NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a3028ac1d71c603a9cc63af5e01ca0347"></a>

Sets the value of MatchLengthSeconds.

#### `public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__RankUpdateRequest_1a00b04cc5981ff066d2e73dd2a847211a)`() const` <a id="structFRHAPI__RankUpdateRequest_1a00b04cc5981ff066d2e73dd2a847211a"></a>

Returns true if MatchLengthSeconds matches the default value.

#### `public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__RankUpdateRequest_1a801591c0ec4eacf814460e8647ea5991)`()` <a id="structFRHAPI__RankUpdateRequest_1a801591c0ec4eacf814460e8647ea5991"></a>

Sets the value of MatchLengthSeconds to its default

#### `public inline TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1af4cc28bd916f32502783b35e03deacd4)`()` <a id="structFRHAPI__RankUpdateRequest_1af4cc28bd916f32502783b35e03deacd4"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1ae798a54aeb82fc9c65cdfe870cf34f91)`() const` <a id="structFRHAPI__RankUpdateRequest_1ae798a54aeb82fc9c65cdfe870cf34f91"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequest_1a174cb8e6da945030adc1f62549210340)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a174cb8e6da945030adc1f62549210340"></a>

Sets the value of Teams.

