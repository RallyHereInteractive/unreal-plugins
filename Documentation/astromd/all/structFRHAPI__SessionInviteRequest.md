---
title: FRHAPI_SessionInviteRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[TeamId_Optional](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c)|Which team the players in the source session should be on.|
|bool|[TeamId_IsSet](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97)|true if TeamId_Optional has been set to a value|
|ERHAPI_TeamOverflowAction|[OverflowAction_Optional](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b)|How we should handle too many players being invited to the chosen team.|
|bool|[OverflowAction_IsSet](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c)|true if OverflowAction_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c)|Custom data for all players being invited.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a5aa01dba6b97bfd230adef6fbe68c4a7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a9d387fbd51eef56c050a8d03e09939b8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a7193949681fea5fd1f2623eba957c9cd)()|Gets the value of TeamId_Optional, regardless of it having been set.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a701b324dd55e64455f340f1e607d8eed)()|Gets the value of TeamId_Optional, regardless of it having been set.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1ab2c978e04175b390ab020c2241c30710)(const int32 & DefaultValue)|Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTeamId](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b)(int32 & OutValue)|Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetTeamIdOrNull](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a358b12458c94df9aa7f5ed2896ea969d)()|Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetTeamIdOrNull](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a579da08f99cfe8a5fbb94cfde91dcc11)()|Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTeamId](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a8f8db984220ab17e00f46c172dd1bbdd)(int32 NewValue)|Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.|
|void|[ClearTeamId](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc)()|Clears the value of TeamId_Optional and sets TeamId_IsSet to false.|
|bool|[IsTeamIdDefaultValue](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf)()|Returns true if TeamId_Optional is set and matches the default value.|
|void|[SetTeamIdToDefault](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729)()|Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.|
|ERHAPI_TeamOverflowAction &|[GetOverflowAction](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a467136114c1c85ff7f46d98696bc76b4)()|Gets the value of OverflowAction_Optional, regardless of it having been set.|
|const ERHAPI_TeamOverflowAction &|[GetOverflowAction](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1af1b47cecb0ede79e0e2d11646d667f94)()|Gets the value of OverflowAction_Optional, regardless of it having been set.|
|const ERHAPI_TeamOverflowAction &|[GetOverflowAction](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a85f07b6777a54a07f5f360dcc926ca65)(const ERHAPI_TeamOverflowAction & DefaultValue)|Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetOverflowAction](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8)(ERHAPI_TeamOverflowAction & OutValue)|Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_TeamOverflowAction *|[GetOverflowActionOrNull](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1afdaced8043e24f44fd14185f2abdf605)()|Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_TeamOverflowAction *|[GetOverflowActionOrNull](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a7a08c4e5e8a2d842f7cbb7b54f38d5fc)()|Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetOverflowAction](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a7cd0f4812dc4862276da0056a52e5da3)(ERHAPI_TeamOverflowAction NewValue)|Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.|
|void|[ClearOverflowAction](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5)()|Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a813e26aa5368ddd0e16a1b24c81a309b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a899274f259affb020bc0f36666847c80)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a27f7196d8ac6aeffe9b5dfd3c0d11d65)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a9c306cedc62cd683032e422ec980e477)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a807eae54e59440e7eb0bec7a82f9bf29)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1a3e89858749deba8535a5ed21cfb7d6c8)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `TeamId_Optional` <a id="structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c"></a>

`int32 FRHAPI_SessionInviteRequest::TeamId_Optional`

Which team the players in the source session should be on.




### `TeamId_IsSet` <a id="structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97"></a>

`bool FRHAPI_SessionInviteRequest::TeamId_IsSet`

true if TeamId_Optional has been set to a value




### `OverflowAction_Optional` <a id="structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b"></a>

`ERHAPI_TeamOverflowAction FRHAPI_SessionInviteRequest::OverflowAction_Optional`

How we should handle too many players being invited to the chosen team.




### `OverflowAction_IsSet` <a id="structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c"></a>

`bool FRHAPI_SessionInviteRequest::OverflowAction_IsSet`

true if OverflowAction_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c"></a>

`TMap<FString, FString> FRHAPI_SessionInviteRequest::CustomData_Optional`

Custom data for all players being invited.




### `CustomData_IsSet` <a id="structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424"></a>

`bool FRHAPI_SessionInviteRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionInviteRequest_1a5aa01dba6b97bfd230adef6fbe68c4a7"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionInviteRequest_1a9d387fbd51eef56c050a8d03e09939b8"></a>

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



### `GetTeamId` <a id="structFRHAPI__SessionInviteRequest_1a7193949681fea5fd1f2623eba957c9cd"></a>

int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId_Optional, regardless of it having been set.




### `GetTeamId` <a id="structFRHAPI__SessionInviteRequest_1a701b324dd55e64455f340f1e607d8eed"></a>

const int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId_Optional, regardless of it having been set.




### `GetTeamId` <a id="structFRHAPI__SessionInviteRequest_1ab2c978e04175b390ab020c2241c30710"></a>

const int32 & GetTeamId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTeamId` <a id="structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b"></a>

bool GetTeamId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.




### `GetTeamIdOrNull` <a id="structFRHAPI__SessionInviteRequest_1a358b12458c94df9aa7f5ed2896ea969d"></a>

int32 * GetTeamIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.




### `GetTeamIdOrNull` <a id="structFRHAPI__SessionInviteRequest_1a579da08f99cfe8a5fbb94cfde91dcc11"></a>

const int32 * GetTeamIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.




### `SetTeamId` <a id="structFRHAPI__SessionInviteRequest_1a8f8db984220ab17e00f46c172dd1bbdd"></a>

void SetTeamId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.




### `ClearTeamId` <a id="structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc"></a>

void ClearTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.




### `IsTeamIdDefaultValue` <a id="structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf"></a>

bool IsTeamIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamId_Optional is set and matches the default value.




### `SetTeamIdToDefault` <a id="structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729"></a>

void SetTeamIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.




### `GetOverflowAction` <a id="structFRHAPI__SessionInviteRequest_1a467136114c1c85ff7f46d98696bc76b4"></a>

ERHAPI_TeamOverflowAction & GetOverflowAction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OverflowAction_Optional, regardless of it having been set.




### `GetOverflowAction` <a id="structFRHAPI__SessionInviteRequest_1af1b47cecb0ede79e0e2d11646d667f94"></a>

const ERHAPI_TeamOverflowAction & GetOverflowAction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OverflowAction_Optional, regardless of it having been set.




### `GetOverflowAction` <a id="structFRHAPI__SessionInviteRequest_1a85f07b6777a54a07f5f360dcc926ca65"></a>

const ERHAPI_TeamOverflowAction & GetOverflowAction(const ERHAPI_TeamOverflowAction & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_TeamOverflowAction &|DefaultValue|

#### Description

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetOverflowAction` <a id="structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8"></a>

bool GetOverflowAction(ERHAPI_TeamOverflowAction & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_TeamOverflowAction &|OutValue|

#### Description

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.




### `GetOverflowActionOrNull` <a id="structFRHAPI__SessionInviteRequest_1afdaced8043e24f44fd14185f2abdf605"></a>

ERHAPI_TeamOverflowAction * GetOverflowActionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.




### `GetOverflowActionOrNull` <a id="structFRHAPI__SessionInviteRequest_1a7a08c4e5e8a2d842f7cbb7b54f38d5fc"></a>

const ERHAPI_TeamOverflowAction * GetOverflowActionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.




### `SetOverflowAction` <a id="structFRHAPI__SessionInviteRequest_1a7cd0f4812dc4862276da0056a52e5da3"></a>

void SetOverflowAction(ERHAPI_TeamOverflowAction NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_TeamOverflowAction|NewValue|

#### Description

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.




### `ClearOverflowAction` <a id="structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5"></a>

void ClearOverflowAction()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__SessionInviteRequest_1a813e26aa5368ddd0e16a1b24c81a309b"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionInviteRequest_1a899274f259affb020bc0f36666847c80"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionInviteRequest_1a27f7196d8ac6aeffe9b5dfd3c0d11d65"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionInviteRequest_1a9c306cedc62cd683032e422ec980e477"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionInviteRequest_1a807eae54e59440e7eb0bec7a82f9bf29"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionInviteRequest_1a3e89858749deba8535a5ed21cfb7d6c8"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





