---
title: RH_Diagnostics.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions)||
|class|[FRH_DiagnosticReportGenerator](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator)||
|class|[URH_Diagnostics](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics)||
||[DECLARE_DELEGATE_RetVal](/unreal-plugins/group__diagnostics/#group__Diagnostics_1ga5c0e0f7ab52220c28ea3c2013a8d01ab)(TSharedPtr< FJsonObject > , FGetCustomDiagnosticMetadata )||
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/group__diagnostics/#group__Diagnostics_1gaca3c1dd67b5858439ff6ba89a1098a40)(FRH_OnDiagnosticReportComplete , const TSharedRef< const [FRH_DiagnosticReportGenerator](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator) > & )||
## Functions



### `DECLARE_DELEGATE_RetVal` <a id="group__Diagnostics_1ga5c0e0f7ab52220c28ea3c2013a8d01ab"></a>

 DECLARE_DELEGATE_RetVal(TSharedPtr< FJsonObject > , FGetCustomDiagnosticMetadata )

#### Parameters

| Type | Name |
|------|------|
|TSharedPtr< FJsonObject >||
|FGetCustomDiagnosticMetadata||

#### Description



Bindable delegate to get custom metadata to add to diagnostic reports. Can be used by a project to add data to the Metadata section. 



### `DECLARE_DELEGATE_OneParam` <a id="group__Diagnostics_1gaca3c1dd67b5858439ff6ba89a1098a40"></a>

 DECLARE_DELEGATE_OneParam(FRH_OnDiagnosticReportComplete , const TSharedRef< const [FRH_DiagnosticReportGenerator](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator) > & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnDiagnosticReportComplete||
|const TSharedRef< const [FRH_DiagnosticReportGenerator](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator) > &||

#### Description



Bindable delegate to notify that a report generation is complete 




