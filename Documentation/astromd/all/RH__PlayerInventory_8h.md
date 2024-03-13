---
title: RH_PlayerInventory.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[URH_PendingOrder](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder)||
|class|[URH_PendingPromoCodeOrder](/unreal-plugins/all/classurh__pendingpromocodeorder/#classURH__PendingPromoCodeOrder)||
|class|[URH_PendingInventoryUpdateOrder](/unreal-plugins/all/classurh__pendinginventoryupdateorder/#classURH__PendingInventoryUpdateOrder)||
|class|[URH_PendingPlayerOrder](/unreal-plugins/all/classurh__pendingplayerorder/#classURH__PendingPlayerOrder)||
|class|[URH_PendingOrderDetailsOrder](/unreal-plugins/all/classurh__pendingorderdetailsorder/#classURH__PendingOrderDetailsOrder)||
|class|[URH_PlayerOrderWatch](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch)||
|class|[URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry)||
|struct|[FRH_InventorySession](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession)||
|struct|[FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory)||
|struct|[FRH_BaseInventoryOperation](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation)||
|struct|[FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory)||
|struct|[FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory)||
|class|[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory)||
|class|[URH_InventoryBlueprintLibrary](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary)||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1aec1d21ffef94bab47307c39bd74fd88e)(FRH_OnInventoryUpdateDynamicDelegate , bool , bSuccess )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a0f9eda2c6fe2ad7168e8db28fa831f46)(FRH_OnInventoryUpdateDelegate , bool )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1ab2732f0c43fc647ba04b213bce3f8c65)(FRH_OnInventoryUpdateDelegateBlock , FRH_OnInventoryUpdateDelegate , FRH_OnInventoryUpdateDynamicDelegate , bool )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a0ea4b0fa7ed550e13cce081b38456671)(FRH_PromoCodeResultDynamicDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , PlayerInfo , const FString & , PromoCode , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & , OrderResult )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1aa6ffcdf1d0ae03d30f1b1d8a23c5f449)(FRH_PromoCodeResultDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , const FString & , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a70e75e3883d39564c8555b9c37157010)(FRH_OrderResultDynamicDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , PlayerInfo , TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > , OrderEntries , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & , OrderResult )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1ab494070d116f44f62704cef1687edb81)(FRH_OrderResultDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & )||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1af8b59785b194a1e0c5e498a9751c2ce3)(FRH_OrderDetailsDynamicDelegate , const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & , OrderResults )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a89ddacb25f2c2fefcea7a4b811142108)(FRH_OrderDetailsDelegate , const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & )||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a71271db914c9f6a8923e4bc0c29a51b7)(FRH_GetInventoryCountDynamicDelegate , int32 , InstanceCount )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a5386435a2aae2931f0c0ce7605faf566)(FRH_GetInventoryCountDelegate , int32 )||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a264f9e6206dd52714636afc11c7b6f2d)(FRH_GetInventoryStateDynamicDelegate , bool , IsValid )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1aef23fcd1aaa959bdf5c73045b7b4dd23)(FRH_GetInventoryStateDelegate , bool )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1a92ad82a203aa9e368a9c0d2617c364b6)(FRH_InventoryUpdatedDynamicDelegate , const TArray< int32 > & , ItemIds )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1afce394d544a8df9cc56f4719e000ca54)(FRH_InventoryUpdatedDelegate , const TArray< int32 > & , [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * )||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1af114e049079f7b212f8a4c210080df2f)(FRH_OnInventorySessionUpdateDynamicDelegate , bool , bSuccess )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1aaa039e9c811f68b783aec7c1c284d5b9)(FRH_OnInventorySessionUpdateDelegate , bool )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__playerinventory_8h/#RH__PlayerInventory_8h_1af2903889040da69fc11c968d48d7566d)(FRH_OnInventorySessionUpdateDelegateBlock , FRH_OnInventorySessionUpdateDelegate , FRH_OnInventorySessionUpdateDynamicDelegate , bool )||
## Functions



### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1aec1d21ffef94bab47307c39bd74fd88e"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OnInventoryUpdateDynamicDelegate , bool , bSuccess )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnInventoryUpdateDynamicDelegate||
|bool||
|bSuccess||

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1a0f9eda2c6fe2ad7168e8db28fa831f46"></a>

 DECLARE_DELEGATE_OneParam(FRH_OnInventoryUpdateDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnInventoryUpdateDelegate||
|bool||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerInventory_8h_1ab2732f0c43fc647ba04b213bce3f8c65"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnInventoryUpdateDelegateBlock , FRH_OnInventoryUpdateDelegate , FRH_OnInventoryUpdateDynamicDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnInventoryUpdateDelegateBlock||
|FRH_OnInventoryUpdateDelegate||
|FRH_OnInventoryUpdateDynamicDelegate||
|bool||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__PlayerInventory_8h_1a0ea4b0fa7ed550e13cce081b38456671"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_PromoCodeResultDynamicDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , PlayerInfo , const FString & , PromoCode , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & , OrderResult )

#### Parameters

| Type | Name |
|------|------|
|FRH_PromoCodeResultDynamicDelegate||
|const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *||
|PlayerInfo||
|const FString &||
|PromoCode||
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &||
|OrderResult||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__PlayerInventory_8h_1aa6ffcdf1d0ae03d30f1b1d8a23c5f449"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_PromoCodeResultDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , const FString & , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PromoCodeResultDelegate||
|const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *||
|const FString &||
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__PlayerInventory_8h_1a70e75e3883d39564c8555b9c37157010"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OrderResultDynamicDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , PlayerInfo , TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > , OrderEntries , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & , OrderResult )

#### Parameters

| Type | Name |
|------|------|
|FRH_OrderResultDynamicDelegate||
|const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *||
|PlayerInfo||
|TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * >||
|OrderEntries||
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &||
|OrderResult||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__PlayerInventory_8h_1ab494070d116f44f62704cef1687edb81"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OrderResultDelegate , const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * , TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > , const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OrderResultDelegate||
|const [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *||
|TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * >||
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1af8b59785b194a1e0c5e498a9751c2ce3"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OrderDetailsDynamicDelegate , const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & , OrderResults )

#### Parameters

| Type | Name |
|------|------|
|FRH_OrderDetailsDynamicDelegate||
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &||
|OrderResults||

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1a89ddacb25f2c2fefcea7a4b811142108"></a>

 DECLARE_DELEGATE_OneParam(FRH_OrderDetailsDelegate , const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OrderDetailsDelegate||
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1a71271db914c9f6a8923e4bc0c29a51b7"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GetInventoryCountDynamicDelegate , int32 , InstanceCount )

#### Parameters

| Type | Name |
|------|------|
|FRH_GetInventoryCountDynamicDelegate||
|int32||
|InstanceCount||

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1a5386435a2aae2931f0c0ce7605faf566"></a>

 DECLARE_DELEGATE_OneParam(FRH_GetInventoryCountDelegate , int32 )

#### Parameters

| Type | Name |
|------|------|
|FRH_GetInventoryCountDelegate||
|int32||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1a264f9e6206dd52714636afc11c7b6f2d"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GetInventoryStateDynamicDelegate , bool , IsValid )

#### Parameters

| Type | Name |
|------|------|
|FRH_GetInventoryStateDynamicDelegate||
|bool||
|IsValid||

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1aef23fcd1aaa959bdf5c73045b7b4dd23"></a>

 DECLARE_DELEGATE_OneParam(FRH_GetInventoryStateDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_GetInventoryStateDelegate||
|bool||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1a92ad82a203aa9e368a9c0d2617c364b6"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_InventoryUpdatedDynamicDelegate , const TArray< int32 > & , ItemIds )

#### Parameters

| Type | Name |
|------|------|
|FRH_InventoryUpdatedDynamicDelegate||
|const TArray< int32 > &||
|ItemIds||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__PlayerInventory_8h_1afce394d544a8df9cc56f4719e000ca54"></a>

 DECLARE_DELEGATE_TwoParams(FRH_InventoryUpdatedDelegate , const TArray< int32 > & , [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * )

#### Parameters

| Type | Name |
|------|------|
|FRH_InventoryUpdatedDelegate||
|const TArray< int32 > &||
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1af114e049079f7b212f8a4c210080df2f"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OnInventorySessionUpdateDynamicDelegate , bool , bSuccess )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnInventorySessionUpdateDynamicDelegate||
|bool||
|bSuccess||

#### Description






### `DECLARE_DELEGATE_OneParam` <a id="RH__PlayerInventory_8h_1aaa039e9c811f68b783aec7c1c284d5b9"></a>

 DECLARE_DELEGATE_OneParam(FRH_OnInventorySessionUpdateDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnInventorySessionUpdateDelegate||
|bool||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__PlayerInventory_8h_1af2903889040da69fc11c968d48d7566d"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnInventorySessionUpdateDelegateBlock , FRH_OnInventorySessionUpdateDelegate , FRH_OnInventorySessionUpdateDynamicDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnInventorySessionUpdateDelegateBlock||
|FRH_OnInventorySessionUpdateDelegate||
|FRH_OnInventorySessionUpdateDynamicDelegate||
|bool||

#### Description







