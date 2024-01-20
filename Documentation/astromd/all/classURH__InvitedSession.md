---
title: URH_InvitedSession Class
---Inherits from [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView)

Invited Sessions are sessions that the player has been invited to.

## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[IsOffline](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b)()|Gets that an invited session is not an offline session.|
|void|[Join](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Accepts to join the session.|
|void|[BLUEPRINT_Join](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of Join.|
|void|[Leave](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession_1ac9e1131d672b7e6f7dd4a476d54e80aa)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Declines to join the session.|
|void|[BLUEPRINT_Leave](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession_1a5710f9c6987179ca0489029cb3bced79)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of Leave.|
## Public Functions



### `IsOffline` <a id="classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b"></a>

bool IsOffline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets that an invited session is not an offline session.




### `Join` <a id="classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e"></a>

void Join(const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Accepts to join the session.


#### Parameters

Delegate
: The callback delegate for the session being updated by the join. 



### `BLUEPRINT_Join` <a id="classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b"></a>

void BLUEPRINT_Join(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of Join.


#### Parameters

Delegate
: The callback delegate for the session being updated by the join. 



### `Leave` <a id="classURH__InvitedSession_1ac9e1131d672b7e6f7dd4a476d54e80aa"></a>

void Leave(const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Declines to join the session.


#### Parameters

Delegate
: The callback delegate for the session being updated by the leave. 



### `BLUEPRINT_Leave` <a id="classURH__InvitedSession_1a5710f9c6987179ca0489029cb3bced79"></a>

void BLUEPRINT_Leave(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of Leave.


#### Parameters

Delegate
: The callback delegate for the session being updated by the leave. 




