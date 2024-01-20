---
title: FRHAPI_PlayerSession Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about the sessions of a specific type that a player is currently a member of, or invited to.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Type](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25)|template type|
|TSet< FString >|[SessionIds_Optional](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1)|Sessions the player is currently a part of for this session type, if any.|
|bool|[SessionIds_IsSet](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce)|true if SessionIds_Optional has been set to a value|
|TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) >|[PendingInvites_Optional](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0)|Pending invites, if any, for the current player in this session type.|
|bool|[PendingInvites_IsSet](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2)|true if PendingInvites_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a8b06f282829c1099c858758efac216dd)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a49a41127e076ba0e320cf7307dc44c6b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetType](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a7ff94c4a2229b98fed3c43e0374cb306)()|Gets the value of Type.|
|const FString &|[GetType](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1af43796b74a5b4e504393de65bbc87e08)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1ac6cac54fcd54ff70ad8baab8a2702812)(FString NewValue)|Sets the value of Type.|
|TSet< FString > &|[GetSessionIds](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a3492dac1e3143a75d71904b7fe0270b4)()|Gets the value of SessionIds_Optional, regardless of it having been set.|
|const TSet< FString > &|[GetSessionIds](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1af7a7654f4962a561c033213a3aef3014)()|Gets the value of SessionIds_Optional, regardless of it having been set.|
|const TSet< FString > &|[GetSessionIds](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a506de0cb93d4d38cfa8e0c1298d2a0c8)(const TSet< FString > & DefaultValue)|Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSessionIds](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83)(TSet< FString > & OutValue)|Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.|
|TSet< FString > *|[GetSessionIdsOrNull](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a2714e18100166776d2ffd8042130c212)()|Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.|
|const TSet< FString > *|[GetSessionIdsOrNull](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a29a9311b33aaeef061c148f6b2656e09)()|Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSessionIds](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1ae9ac31312fff18ddc97c4472819b3d32)(TSet< FString > NewValue)|Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.|
|void|[ClearSessionIds](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)()|Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.|
|TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > &|[GetPendingInvites](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a0883615754858962e6e6b8fce19eac66)()|Gets the value of PendingInvites_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > &|[GetPendingInvites](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a16a9e22d7bbd01a609bcf1bc10a4abf0)()|Gets the value of PendingInvites_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > &|[GetPendingInvites](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a8d1c57d9d0813cf2d8ae6649be140c0b)(const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & DefaultValue)|Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPendingInvites](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e)(TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & OutValue)|Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > *|[GetPendingInvitesOrNull](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a2a4ddbcedea8f15335c9c7351ce3c0d8)()|Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > *|[GetPendingInvitesOrNull](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a906a1eb7cdc4ef0f3af1db441b2b6465)()|Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPendingInvites](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1ace21c7105d0a173a71bebac0af8e4434)(TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > NewValue)|Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.|
|void|[ClearPendingInvites](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)()|Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.|
## Public Attributes



### `Type` <a id="structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25"></a>

`FString FRHAPI_PlayerSession::Type`

template type




### `SessionIds_Optional` <a id="structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1"></a>

`TSet<FString> FRHAPI_PlayerSession::SessionIds_Optional`

Sessions the player is currently a part of for this session type, if any.




### `SessionIds_IsSet` <a id="structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce"></a>

`bool FRHAPI_PlayerSession::SessionIds_IsSet`

true if SessionIds_Optional has been set to a value




### `PendingInvites_Optional` <a id="structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0"></a>

`TMap<FString, FRHAPI_PlayerSessionInvite> FRHAPI_PlayerSession::PendingInvites_Optional`

Pending invites, if any, for the current player in this session type.




### `PendingInvites_IsSet` <a id="structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2"></a>

`bool FRHAPI_PlayerSession::PendingInvites_IsSet`

true if PendingInvites_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerSession_1a8b06f282829c1099c858758efac216dd"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerSession_1a49a41127e076ba0e320cf7307dc44c6b"></a>

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



### `GetType` <a id="structFRHAPI__PlayerSession_1a7ff94c4a2229b98fed3c43e0374cb306"></a>

FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__PlayerSession_1af43796b74a5b4e504393de65bbc87e08"></a>

const FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__PlayerSession_1ac6cac54fcd54ff70ad8baab8a2702812"></a>

void SetType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Type.




### `GetSessionIds` <a id="structFRHAPI__PlayerSession_1a3492dac1e3143a75d71904b7fe0270b4"></a>

TSet< FString > & GetSessionIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionIds_Optional, regardless of it having been set.




### `GetSessionIds` <a id="structFRHAPI__PlayerSession_1af7a7654f4962a561c033213a3aef3014"></a>

const TSet< FString > & GetSessionIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionIds_Optional, regardless of it having been set.




### `GetSessionIds` <a id="structFRHAPI__PlayerSession_1a506de0cb93d4d38cfa8e0c1298d2a0c8"></a>

const TSet< FString > & GetSessionIds(const TSet< FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TSet< FString > &|DefaultValue|

#### Description

Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSessionIds` <a id="structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83"></a>

bool GetSessionIds(TSet< FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TSet< FString > &|OutValue|

#### Description

Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.




### `GetSessionIdsOrNull` <a id="structFRHAPI__PlayerSession_1a2714e18100166776d2ffd8042130c212"></a>

TSet< FString > * GetSessionIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.




### `GetSessionIdsOrNull` <a id="structFRHAPI__PlayerSession_1a29a9311b33aaeef061c148f6b2656e09"></a>

const TSet< FString > * GetSessionIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.




### `SetSessionIds` <a id="structFRHAPI__PlayerSession_1ae9ac31312fff18ddc97c4472819b3d32"></a>

void SetSessionIds(TSet< FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TSet< FString >|NewValue|

#### Description

Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.




### `ClearSessionIds` <a id="structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7"></a>

void ClearSessionIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.




### `GetPendingInvites` <a id="structFRHAPI__PlayerSession_1a0883615754858962e6e6b8fce19eac66"></a>

TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & GetPendingInvites()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PendingInvites_Optional, regardless of it having been set.




### `GetPendingInvites` <a id="structFRHAPI__PlayerSession_1a16a9e22d7bbd01a609bcf1bc10a4abf0"></a>

const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & GetPendingInvites()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PendingInvites_Optional, regardless of it having been set.




### `GetPendingInvites` <a id="structFRHAPI__PlayerSession_1a8d1c57d9d0813cf2d8ae6649be140c0b"></a>

const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & GetPendingInvites(const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > &|DefaultValue|

#### Description

Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPendingInvites` <a id="structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e"></a>

bool GetPendingInvites(TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > &|OutValue|

#### Description

Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.




### `GetPendingInvitesOrNull` <a id="structFRHAPI__PlayerSession_1a2a4ddbcedea8f15335c9c7351ce3c0d8"></a>

TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > * GetPendingInvitesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.




### `GetPendingInvitesOrNull` <a id="structFRHAPI__PlayerSession_1a906a1eb7cdc4ef0f3af1db441b2b6465"></a>

const TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > * GetPendingInvitesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.




### `SetPendingInvites` <a id="structFRHAPI__PlayerSession_1ace21c7105d0a173a71bebac0af8e4434"></a>

void SetPendingInvites(TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlayerSessionInvite](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite) >|NewValue|

#### Description

Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.




### `ClearPendingInvites` <a id="structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692"></a>

void ClearPendingInvites()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.





