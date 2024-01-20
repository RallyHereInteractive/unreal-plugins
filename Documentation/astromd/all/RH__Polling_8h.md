---
title: RH_Polling.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_PollTimerSetting](/unreal-plugins/all/structfrh__polltimersetting/#structFRH__PollTimerSetting)||
|class|[URH_PollingSettings](/unreal-plugins/all/classurh__pollingsettings/#classURH__PollingSettings)||
|struct|[FRH_PollControl](/unreal-plugins/all/structfrh__pollcontrol/#structFRH__PollControl)||
|struct|[FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller)||
|typedef|[FRH_AutoPollerPtr](/unreal-plugins/all/rh__polling_8h/#RH__Polling_8h_1a28a0c2a0b8156c2e33000744bd5db336)||
|typedef|[FRH_AutoPollerWeakPtr](/unreal-plugins/all/rh__polling_8h/#RH__Polling_8h_1abfa5639f23d9a147358de447bb69c3c7)||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__polling_8h/#RH__Polling_8h_1a06e09a08a35c79c19e62f6eae8cc3b2e)(FRH_PollCompleteFunc , bool , bool )|delegate to notify that a poll is complete|
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__polling_8h/#RH__Polling_8h_1a2e107bc809b0d69fd194127f407357eb)(FRH_PollFunc , const FRH_PollCompleteFunc & )|delegate to notify that a poll should execute|
## Typedefs



### `FRH_AutoPollerPtr` <a id="RH__Polling_8h_1a28a0c2a0b8156c2e33000744bd5db336"></a>

typedef TSharedPtr< [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > FRH_AutoPollerPtr




### `FRH_AutoPollerWeakPtr` <a id="RH__Polling_8h_1abfa5639f23d9a147358de447bb69c3c7"></a>

typedef TWeakPtr< [FRH_AutoPoller](/unreal-plugins/all/structfrh__autopoller/#structFRH__AutoPoller) > FRH_AutoPollerWeakPtr





## Functions



### `DECLARE_DELEGATE_TwoParams` <a id="RH__Polling_8h_1a06e09a08a35c79c19e62f6eae8cc3b2e"></a>

 DECLARE_DELEGATE_TwoParams(FRH_PollCompleteFunc , bool , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_PollCompleteFunc||
|bool||
|bool||

#### Description

delegate to notify that a poll is complete


#### Parameters

bSuccess
: If the poll was successful. 
bResetTimer
: If the timer should be reset. 



### `DECLARE_DELEGATE_OneParam` <a id="RH__Polling_8h_1a2e107bc809b0d69fd194127f407357eb"></a>

 DECLARE_DELEGATE_OneParam(FRH_PollFunc , const FRH_PollCompleteFunc & )

#### Parameters

| Type | Name |
|------|------|
|FRH_PollFunc||
|const FRH_PollCompleteFunc &||

#### Description

delegate to notify that a poll should execute


#### Parameters

PollCompleteFunc
: Delegate to call when the poll is complete. 




