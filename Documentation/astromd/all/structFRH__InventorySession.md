---
title: FRH_InventorySession Struct
---
Struct for tracking an inventory session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionId](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession_1a24cbb7a17c13037c75e24731da912bb8)|The Session Id.|
|ERHAPI_Platform|[SessionPlatform](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession_1a376394ddb2a62d134f0b92804bbaad87)|The platform associated with the session.|
|FString|[OrderId](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession_1a622e147f47d7de6bc2af119d6951a38a)|The Order Id associated with any loot that may have been created when the session was created.|
|TArray< int32 >|[AppliedDurableLoot](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession_1a0da0d0385b4703e6d2ca0cd666eda224)|Array of durable loot that was applied to the inventory by the session.|
||[FRH_InventorySession](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession_1a042cdfe82bab92315f5e6e1bd4e461be)()|Default constructor.|
## Public Attributes



### `SessionId` <a id="structFRH__InventorySession_1a24cbb7a17c13037c75e24731da912bb8"></a>

`FString FRH_InventorySession::SessionId`

The Session Id.




### `SessionPlatform` <a id="structFRH__InventorySession_1a376394ddb2a62d134f0b92804bbaad87"></a>

`ERHAPI_Platform FRH_InventorySession::SessionPlatform`

The platform associated with the session.




### `OrderId` <a id="structFRH__InventorySession_1a622e147f47d7de6bc2af119d6951a38a"></a>

`FString FRH_InventorySession::OrderId`

The Order Id associated with any loot that may have been created when the session was created.




### `AppliedDurableLoot` <a id="structFRH__InventorySession_1a0da0d0385b4703e6d2ca0cd666eda224"></a>

`TArray<int32> FRH_InventorySession::AppliedDurableLoot`

Array of durable loot that was applied to the inventory by the session.





## Public Functions



### `FRH_InventorySession` <a id="structFRH__InventorySession_1a042cdfe82bab92315f5e6e1bd4e461be"></a>

 FRH_InventorySession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.





