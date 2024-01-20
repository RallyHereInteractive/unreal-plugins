---
title: FRHAPI_PlayerPresence Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_OnlineStatus|[Status_Optional](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d)|Is the player currently online?|
|bool|[Status_IsSet](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ac2cfaf558b7093be96de8c74df7ff4e6)|true if Status_Optional has been set to a value|
|FString|[Message_Optional](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a6de69297573f9e67cc38443e291212a4)|Optional custom message to display alongside the user's online status.|
|bool|[Message_IsSet](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a975c5550a2028f883ef00c8ce7c6caa1)|true if Message_Optional has been set to a value|
|FString|[Platform](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a45a64b190b76d0a19c84e88881c14880)|Platform the user was online in.|
|FString|[DisplayName](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a6cdfa2feb98abb294bc0540fc32474eb)|Player Display Name.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ab66e42868ff9f7338e096ed18b83dbe8)|custom fields for the player to update about their presence|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1af7d071d4606396805a4ca2dccd524ec4)|true if CustomData_Optional has been set to a value|
|int32|[PlayerId_Optional](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a781961b1549e3533b06f3116caab4d64)|Player ID for the player if it was provided as part of the request.|
|bool|[PlayerId_IsSet](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717)|true if PlayerId_Optional has been set to a value|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431)|UUID of the player whose presence this represents.|
|bool|[DoNotDisturb_Optional](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a)|Disables notifications and invites. Only set for self or admin.|
|bool|[DoNotDisturb_IsSet](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841)|true if DoNotDisturb_Optional has been set to a value|
|FDateTime|[LastSeen_Optional](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9)|Info about the player the last time they reported their status. Only set for self or admin.|
|bool|[LastSeen_IsSet](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d)|true if LastSeen_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1aa27bd5a54fc9bcc3c915dbc96e1b415b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ac123af2bcd0911c1c8cf175a16de9d3f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_OnlineStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a473d46c4a2e703d8571fbcbb00ac3cdd)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_OnlineStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a6b60dec13ad2b7f219d6f98e805794d9)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_OnlineStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1aca18edf90012f769b2bcc29ca3b40df4)(const ERHAPI_OnlineStatus & DefaultValue)|Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1adea031eb81aec6f7043520c4c586bca0)(ERHAPI_OnlineStatus & OutValue)|Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_OnlineStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a044702b723618a9b9d2f897940b7d66d)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_OnlineStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a33f0d8285cf65ccf1ce9eadf4aada605)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1af21ab3a0131c9bf4e9cd59c6898c57c9)(ERHAPI_OnlineStatus NewValue)|Sets the value of Status_Optional and also sets Status_IsSet to true.|
|void|[ClearStatus](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc)()|Clears the value of Status_Optional and sets Status_IsSet to false.|
|FString &|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1add36421a99e312644f8316fd17401b72)()|Gets the value of Message_Optional, regardless of it having been set.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1acbae44684a48df96db6a35004cff3b60)()|Gets the value of Message_Optional, regardless of it having been set.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a9ff10d9ac5b710f3308402f1b85f8c2c)(const FString & DefaultValue)|Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ada4f2e295049f1e30151516903f3ab6f)(FString & OutValue)|Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMessageOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a95670351ca506e30b24f0f3e5b0d38a6)()|Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMessageOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1af0d4496639eeae9b5a231b98853ebc0f)()|Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMessage](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a1b31173e0ea892359d5420dfb6fcd4ee)(FString NewValue)|Sets the value of Message_Optional and also sets Message_IsSet to true.|
|void|[ClearMessage](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0)()|Clears the value of Message_Optional and sets Message_IsSet to false.|
|bool|[IsMessageDefaultValue](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a5a3d667ba5ef3d3130efdb69e6a51155)()|Returns true if Message_Optional is set and matches the default value.|
|void|[SetMessageToDefault](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a078a7a0fb3f082514bdef5358853bcea)()|Sets the value of Message_Optional to its default and also sets Message_IsSet to true.|
|FString &|[GetPlatform](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1afa3fbb31521f90c2649039085ac8ca74)()|Gets the value of Platform.|
|const FString &|[GetPlatform](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a3bfe24a76d0aeb51a3eedfcd37b787f5)()|Gets the value of Platform.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a751c7826f191c8fd3286462949561aa9)(FString NewValue)|Sets the value of Platform.|
|FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ae934ada98b02ca91bab8dc830a9ba46c)()|Gets the value of DisplayName.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a62da764c5431679c88a7ad7864b9ddb8)()|Gets the value of DisplayName.|
|void|[SetDisplayName](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a90e1fb8374ea4a54dcb4bcb4973a5456)(FString NewValue)|Sets the value of DisplayName.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a5492cf596aa36be2f533c4c240903ef0)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ab41fed2fcaf5323ac24ce794453f7813)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a198ed956b9b5e9921653c24d1be1cbaa)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a896aea88f0ec3676b8afad170912f59a)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1abaacd9775156b5074248c22959e78b91)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a70fd6b7b3e73c5a6a25e25dfeaa93621)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a38b2b8e7ef74eb43ab3119ec25a468be)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a2b181d388d305173059663c6a331dcfd)()|Gets the value of PlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a9ee0f0e8afab428308fff0f54260db2e)()|Gets the value of PlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a1bfd00126c1f2f5eb6bce511cb0a39e6)(const int32 & DefaultValue)|Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a7f68f8b7f151ac2afb8f17da9436c0a1)(int32 & OutValue)|Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a1b4b965c68ef61240f8cc31bd8d2788f)()|Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a7237e95e3877554c235bbe2c356173bb)()|Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1aac8fc9d82d491e498f81c71838d9306a)(int32 NewValue)|Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.|
|void|[ClearPlayerId](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472)()|Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a5b3dd414fe5c6d32baa1127a75ffed39)()|Returns true if PlayerId_Optional is set and matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a84700c474f339d6330b4686549a35544)()|Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a44031e6912d1af9431f33a8578d6c94d)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1acf8c72181140262bd5821c024c63e378)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a90fc55c6d1ff341608490395921d339b)(FGuid NewValue)|Sets the value of PlayerUuid.|
|bool &|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a42392c89efa95f52edb03ac535cfa7fa)()|Gets the value of DoNotDisturb_Optional, regardless of it having been set.|
|const bool &|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ab442dcc0422848eb0759107646faebc1)()|Gets the value of DoNotDisturb_Optional, regardless of it having been set.|
|const bool &|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a54f55d5094aee26c5fe572ae72cc95f9)(const bool & DefaultValue)|Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a5b75719ef4431ed80c4266eb4241e0a1)(bool & OutValue)|Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetDoNotDisturbOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a0bf10e2585288c867b13de021a1a0797)()|Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetDoNotDisturbOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ac73e551f66242714c699b475c0e960ca)()|Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1aedaca4d771c51657d68beae4c5aea98c)(bool NewValue)|Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.|
|void|[ClearDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61)()|Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.|
|bool|[IsDoNotDisturbDefaultValue](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a56d37e6ea10b4fa8a5c3560ff60addbd)()|Returns true if DoNotDisturb_Optional is set and matches the default value.|
|void|[SetDoNotDisturbToDefault](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1ac87c1590c6b65784ca85545477e3f03b)()|Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.|
|FDateTime &|[GetLastSeen](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1afa3a632d15db87a111e32f99823b46e8)()|Gets the value of LastSeen_Optional, regardless of it having been set.|
|const FDateTime &|[GetLastSeen](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1acf1147e75882917549334f3b231baf63)()|Gets the value of LastSeen_Optional, regardless of it having been set.|
|const FDateTime &|[GetLastSeen](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1afb0aa86b2e9b5141479c08400ecf64be)(const FDateTime & DefaultValue)|Gets the value of LastSeen_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLastSeen](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a6d87af0eee94b42e0031cc0dbdc74c5f)(FDateTime & OutValue)|Fills OutValue with the value of LastSeen_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetLastSeenOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a24e183efe22ee78f5f3cd1c479aea551)()|Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetLastSeenOrNull](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a877485d262325de64db5d5c94f6ebc86)()|Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLastSeen](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1a8f309150585037b7c1594436aac13ace)(FDateTime NewValue)|Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true.|
|void|[ClearLastSeen](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844)()|Clears the value of LastSeen_Optional and sets LastSeen_IsSet to false.|
## Public Attributes



### `Status_Optional` <a id="structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d"></a>

`ERHAPI_OnlineStatus FRHAPI_PlayerPresence::Status_Optional`

Is the player currently online?




### `Status_IsSet` <a id="structFRHAPI__PlayerPresence_1ac2cfaf558b7093be96de8c74df7ff4e6"></a>

`bool FRHAPI_PlayerPresence::Status_IsSet`

true if Status_Optional has been set to a value




### `Message_Optional` <a id="structFRHAPI__PlayerPresence_1a6de69297573f9e67cc38443e291212a4"></a>

`FString FRHAPI_PlayerPresence::Message_Optional`

Optional custom message to display alongside the user's online status.




### `Message_IsSet` <a id="structFRHAPI__PlayerPresence_1a975c5550a2028f883ef00c8ce7c6caa1"></a>

`bool FRHAPI_PlayerPresence::Message_IsSet`

true if Message_Optional has been set to a value




### `Platform` <a id="structFRHAPI__PlayerPresence_1a45a64b190b76d0a19c84e88881c14880"></a>

`FString FRHAPI_PlayerPresence::Platform`

Platform the user was online in.




### `DisplayName` <a id="structFRHAPI__PlayerPresence_1a6cdfa2feb98abb294bc0540fc32474eb"></a>

`FString FRHAPI_PlayerPresence::DisplayName`

Player Display Name.




### `CustomData_Optional` <a id="structFRHAPI__PlayerPresence_1ab66e42868ff9f7338e096ed18b83dbe8"></a>

`TMap<FString, FString> FRHAPI_PlayerPresence::CustomData_Optional`

custom fields for the player to update about their presence




### `CustomData_IsSet` <a id="structFRHAPI__PlayerPresence_1af7d071d4606396805a4ca2dccd524ec4"></a>

`bool FRHAPI_PlayerPresence::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `PlayerId_Optional` <a id="structFRHAPI__PlayerPresence_1a781961b1549e3533b06f3116caab4d64"></a>

`int32 FRHAPI_PlayerPresence::PlayerId_Optional`

Player ID for the player if it was provided as part of the request.




### `PlayerId_IsSet` <a id="structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717"></a>

`bool FRHAPI_PlayerPresence::PlayerId_IsSet`

true if PlayerId_Optional has been set to a value




### `PlayerUuid` <a id="structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431"></a>

`FGuid FRHAPI_PlayerPresence::PlayerUuid`

UUID of the player whose presence this represents.




### `DoNotDisturb_Optional` <a id="structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a"></a>

`bool FRHAPI_PlayerPresence::DoNotDisturb_Optional`

Disables notifications and invites. Only set for self or admin.




### `DoNotDisturb_IsSet` <a id="structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841"></a>

`bool FRHAPI_PlayerPresence::DoNotDisturb_IsSet`

true if DoNotDisturb_Optional has been set to a value




### `LastSeen_Optional` <a id="structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9"></a>

`FDateTime FRHAPI_PlayerPresence::LastSeen_Optional`

Info about the player the last time they reported their status. Only set for self or admin.




### `LastSeen_IsSet` <a id="structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d"></a>

`bool FRHAPI_PlayerPresence::LastSeen_IsSet`

true if LastSeen_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerPresence_1aa27bd5a54fc9bcc3c915dbc96e1b415b"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__PlayerPresence_1ac123af2bcd0911c1c8cf175a16de9d3f"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetStatus` <a id="structFRHAPI__PlayerPresence_1a473d46c4a2e703d8571fbcbb00ac3cdd"></a>

ERHAPI_OnlineStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlayerPresence_1a6b60dec13ad2b7f219d6f98e805794d9"></a>

const ERHAPI_OnlineStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlayerPresence_1aca18edf90012f769b2bcc29ca3b40df4"></a>

const ERHAPI_OnlineStatus & GetStatus(const ERHAPI_OnlineStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OnlineStatus &|DefaultValue|

#### Description

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStatus` <a id="structFRHAPI__PlayerPresence_1adea031eb81aec6f7043520c4c586bca0"></a>

bool GetStatus(ERHAPI_OnlineStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OnlineStatus &|OutValue|

#### Description

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.




### `GetStatusOrNull` <a id="structFRHAPI__PlayerPresence_1a044702b723618a9b9d2f897940b7d66d"></a>

ERHAPI_OnlineStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `GetStatusOrNull` <a id="structFRHAPI__PlayerPresence_1a33f0d8285cf65ccf1ce9eadf4aada605"></a>

const ERHAPI_OnlineStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `SetStatus` <a id="structFRHAPI__PlayerPresence_1af21ab3a0131c9bf4e9cd59c6898c57c9"></a>

void SetStatus(ERHAPI_OnlineStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OnlineStatus|NewValue|

#### Description

Sets the value of Status_Optional and also sets Status_IsSet to true.




### `ClearStatus` <a id="structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc"></a>

void ClearStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Status_Optional and sets Status_IsSet to false.




### `GetMessage` <a id="structFRHAPI__PlayerPresence_1add36421a99e312644f8316fd17401b72"></a>

FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message_Optional, regardless of it having been set.




### `GetMessage` <a id="structFRHAPI__PlayerPresence_1acbae44684a48df96db6a35004cff3b60"></a>

const FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message_Optional, regardless of it having been set.




### `GetMessage` <a id="structFRHAPI__PlayerPresence_1a9ff10d9ac5b710f3308402f1b85f8c2c"></a>

const FString & GetMessage(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMessage` <a id="structFRHAPI__PlayerPresence_1ada4f2e295049f1e30151516903f3ab6f"></a>

bool GetMessage(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.




### `GetMessageOrNull` <a id="structFRHAPI__PlayerPresence_1a95670351ca506e30b24f0f3e5b0d38a6"></a>

FString * GetMessageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.




### `GetMessageOrNull` <a id="structFRHAPI__PlayerPresence_1af0d4496639eeae9b5a231b98853ebc0f"></a>

const FString * GetMessageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.




### `SetMessage` <a id="structFRHAPI__PlayerPresence_1a1b31173e0ea892359d5420dfb6fcd4ee"></a>

void SetMessage(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Message_Optional and also sets Message_IsSet to true.




### `ClearMessage` <a id="structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0"></a>

void ClearMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Message_Optional and sets Message_IsSet to false.




### `IsMessageDefaultValue` <a id="structFRHAPI__PlayerPresence_1a5a3d667ba5ef3d3130efdb69e6a51155"></a>

bool IsMessageDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Message_Optional is set and matches the default value.




### `SetMessageToDefault` <a id="structFRHAPI__PlayerPresence_1a078a7a0fb3f082514bdef5358853bcea"></a>

void SetMessageToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Message_Optional to its default and also sets Message_IsSet to true.




### `GetPlatform` <a id="structFRHAPI__PlayerPresence_1afa3fbb31521f90c2649039085ac8ca74"></a>

FString & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `GetPlatform` <a id="structFRHAPI__PlayerPresence_1a3bfe24a76d0aeb51a3eedfcd37b787f5"></a>

const FString & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `SetPlatform` <a id="structFRHAPI__PlayerPresence_1a751c7826f191c8fd3286462949561aa9"></a>

void SetPlatform(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Platform.




### `GetDisplayName` <a id="structFRHAPI__PlayerPresence_1ae934ada98b02ca91bab8dc830a9ba46c"></a>

FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName.




### `GetDisplayName` <a id="structFRHAPI__PlayerPresence_1a62da764c5431679c88a7ad7864b9ddb8"></a>

const FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName.




### `SetDisplayName` <a id="structFRHAPI__PlayerPresence_1a90e1fb8374ea4a54dcb4bcb4973a5456"></a>

void SetDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DisplayName.




### `GetCustomData` <a id="structFRHAPI__PlayerPresence_1a5492cf596aa36be2f533c4c240903ef0"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerPresence_1ab41fed2fcaf5323ac24ce794453f7813"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerPresence_1a198ed956b9b5e9921653c24d1be1cbaa"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PlayerPresence_1a896aea88f0ec3676b8afad170912f59a"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerPresence_1abaacd9775156b5074248c22959e78b91"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerPresence_1a70fd6b7b3e73c5a6a25e25dfeaa93621"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PlayerPresence_1a38b2b8e7ef74eb43ab3119ec25a468be"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetPlayerId` <a id="structFRHAPI__PlayerPresence_1a2b181d388d305173059663c6a331dcfd"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId_Optional, regardless of it having been set.




### `GetPlayerId` <a id="structFRHAPI__PlayerPresence_1a9ee0f0e8afab428308fff0f54260db2e"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId_Optional, regardless of it having been set.




### `GetPlayerId` <a id="structFRHAPI__PlayerPresence_1a1bfd00126c1f2f5eb6bce511cb0a39e6"></a>

const int32 & GetPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerId` <a id="structFRHAPI__PlayerPresence_1a7f68f8b7f151ac2afb8f17da9436c0a1"></a>

bool GetPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerIdOrNull` <a id="structFRHAPI__PlayerPresence_1a1b4b965c68ef61240f8cc31bd8d2788f"></a>

int32 * GetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerIdOrNull` <a id="structFRHAPI__PlayerPresence_1a7237e95e3877554c235bbe2c356173bb"></a>

const int32 * GetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerId` <a id="structFRHAPI__PlayerPresence_1aac8fc9d82d491e498f81c71838d9306a"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.




### `ClearPlayerId` <a id="structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472"></a>

void ClearPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__PlayerPresence_1a5b3dd414fe5c6d32baa1127a75ffed39"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId_Optional is set and matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__PlayerPresence_1a84700c474f339d6330b4686549a35544"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerPresence_1a44031e6912d1af9431f33a8578d6c94d"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerPresence_1acf8c72181140262bd5821c024c63e378"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlayerPresence_1a90fc55c6d1ff341608490395921d339b"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresence_1a42392c89efa95f52edb03ac535cfa7fa"></a>

bool & GetDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DoNotDisturb_Optional, regardless of it having been set.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresence_1ab442dcc0422848eb0759107646faebc1"></a>

const bool & GetDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DoNotDisturb_Optional, regardless of it having been set.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresence_1a54f55d5094aee26c5fe572ae72cc95f9"></a>

const bool & GetDoNotDisturb(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresence_1a5b75719ef4431ed80c4266eb4241e0a1"></a>

bool GetDoNotDisturb(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.




### `GetDoNotDisturbOrNull` <a id="structFRHAPI__PlayerPresence_1a0bf10e2585288c867b13de021a1a0797"></a>

bool * GetDoNotDisturbOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.




### `GetDoNotDisturbOrNull` <a id="structFRHAPI__PlayerPresence_1ac73e551f66242714c699b475c0e960ca"></a>

const bool * GetDoNotDisturbOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.




### `SetDoNotDisturb` <a id="structFRHAPI__PlayerPresence_1aedaca4d771c51657d68beae4c5aea98c"></a>

void SetDoNotDisturb(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.




### `ClearDoNotDisturb` <a id="structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61"></a>

void ClearDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.




### `IsDoNotDisturbDefaultValue` <a id="structFRHAPI__PlayerPresence_1a56d37e6ea10b4fa8a5c3560ff60addbd"></a>

bool IsDoNotDisturbDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if DoNotDisturb_Optional is set and matches the default value.




### `SetDoNotDisturbToDefault` <a id="structFRHAPI__PlayerPresence_1ac87c1590c6b65784ca85545477e3f03b"></a>

void SetDoNotDisturbToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.




### `GetLastSeen` <a id="structFRHAPI__PlayerPresence_1afa3a632d15db87a111e32f99823b46e8"></a>

FDateTime & GetLastSeen()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastSeen_Optional, regardless of it having been set.




### `GetLastSeen` <a id="structFRHAPI__PlayerPresence_1acf1147e75882917549334f3b231baf63"></a>

const FDateTime & GetLastSeen()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastSeen_Optional, regardless of it having been set.




### `GetLastSeen` <a id="structFRHAPI__PlayerPresence_1afb0aa86b2e9b5141479c08400ecf64be"></a>

const FDateTime & GetLastSeen(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of LastSeen_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLastSeen` <a id="structFRHAPI__PlayerPresence_1a6d87af0eee94b42e0031cc0dbdc74c5f"></a>

bool GetLastSeen(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of LastSeen_Optional and returns true if it has been set, otherwise returns false.




### `GetLastSeenOrNull` <a id="structFRHAPI__PlayerPresence_1a24e183efe22ee78f5f3cd1c479aea551"></a>

FDateTime * GetLastSeenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.




### `GetLastSeenOrNull` <a id="structFRHAPI__PlayerPresence_1a877485d262325de64db5d5c94f6ebc86"></a>

const FDateTime * GetLastSeenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.




### `SetLastSeen` <a id="structFRHAPI__PlayerPresence_1a8f309150585037b7c1594436aac13ace"></a>

void SetLastSeen(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true.




### `ClearLastSeen` <a id="structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844"></a>

void ClearLastSeen()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LastSeen_Optional and sets LastSeen_IsSet to false.





