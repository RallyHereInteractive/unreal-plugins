---
title: FRH_DiagnosticReportOptions Struct
---
Options for generating a diagnostic report.

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[DiagnosticReportPreset](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1aead5a36dfae81a332c860b913bce9b98)||
|bool|[bIncludeMetadata](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1a681cc68047b1cdb66c8f132f6c2e7ee7)||
|bool|[bIncludeWebRequests](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1ab1ebb42b4f10ebd632720851eb654541)||
|bool|[bIncludeDeviceData](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1a260c471a4f8f96e1b636bae274bec475)||
|bool|[bWriteToFile](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1a0f74b39a745c22ca3ab9ca2152d78276)||
|FString|[OutputFilename](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1a8847fb4f97e1594947ae2a9c60377d33)||
|bool|[bWriteToCloud](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1ac9a9923d332c7e2ba7b4948dc5b4597c)||
|TWeakObjectPtr< UWorld >|[World](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1aeb72d652bae819e6eca21c94b2841d88)||
|FRH_OnDiagnosticReportComplete|[OnReportComplete](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1a05d9cecaa07d18d9fb062ecb6a81d2fd)||
||[FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1acefb18f18b91ec97ed54c1867116a1ae)()||
||[FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1a19bb2c3d86a3a1b362865d8d6113f584)([DiagnosticReportPreset](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1aead5a36dfae81a332c860b913bce9b98) Preset)||
## Public Types




### `DiagnosticReportPreset` <a id="structFRH__DiagnosticReportOptions_1aead5a36dfae81a332c860b913bce9b98"></a>


Preset for enabling/disabling various diagnostic report options 


| Enumerator | Initializer|
|------------|------------|
|`AllEnabled`|``|
|`AllDisabled`|``|



## Public Attributes



### `bIncludeMetadata` <a id="structFRH__DiagnosticReportOptions_1a681cc68047b1cdb66c8f132f6c2e7ee7"></a>

`bool FRH_DiagnosticReportOptions::bIncludeMetadata`



Whether to include metadata in the report 



### `bIncludeWebRequests` <a id="structFRH__DiagnosticReportOptions_1ab1ebb42b4f10ebd632720851eb654541"></a>

`bool FRH_DiagnosticReportOptions::bIncludeWebRequests`



Whether to include web request data in the report 



### `bIncludeDeviceData` <a id="structFRH__DiagnosticReportOptions_1a260c471a4f8f96e1b636bae274bec475"></a>

`bool FRH_DiagnosticReportOptions::bIncludeDeviceData`



Whether to include device data in the report 



### `bWriteToFile` <a id="structFRH__DiagnosticReportOptions_1a0f74b39a745c22ca3ab9ca2152d78276"></a>

`bool FRH_DiagnosticReportOptions::bWriteToFile`



Whether to write to a file when the report is complete 



### `OutputFilename` <a id="structFRH__DiagnosticReportOptions_1a8847fb4f97e1594947ae2a9c60377d33"></a>

`FString FRH_DiagnosticReportOptions::OutputFilename`



Optional filename to write the report to if bWiteToFile is set (otherwise, generates a name) 



### `bWriteToCloud` <a id="structFRH__DiagnosticReportOptions_1ac9a9923d332c7e2ba7b4948dc5b4597c"></a>

`bool FRH_DiagnosticReportOptions::bWriteToCloud`



Whether to write to cloud when the report is complete 



### `World` <a id="structFRH__DiagnosticReportOptions_1aeb72d652bae819e6eca21c94b2841d88"></a>

`TWeakObjectPtr<UWorld> FRH_DiagnosticReportOptions::World`



World to use to acquire RH subsystems and information 



### `OnReportComplete` <a id="structFRH__DiagnosticReportOptions_1a05d9cecaa07d18d9fb062ecb6a81d2fd"></a>

`FRH_OnDiagnosticReportComplete FRH_DiagnosticReportOptions::OnReportComplete`



Delegate fired when report is complete 




## Public Functions



### `FRH_DiagnosticReportOptions` <a id="structFRH__DiagnosticReportOptions_1acefb18f18b91ec97ed54c1867116a1ae"></a>

 FRH_DiagnosticReportOptions()

#### Parameters

| Type | Name |
|------|------|

#### Description



Default constructor, defaults to everything enabled 



### `FRH_DiagnosticReportOptions` <a id="structFRH__DiagnosticReportOptions_1a19bb2c3d86a3a1b362865d8d6113f584"></a>

 FRH_DiagnosticReportOptions([DiagnosticReportPreset](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1aead5a36dfae81a332c860b913bce9b98) Preset)

#### Parameters

| Type | Name |
|------|------|
|[DiagnosticReportPreset](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions_1aead5a36dfae81a332c860b913bce9b98)|Preset|

#### Description



Preset constructor, for ease of use 




