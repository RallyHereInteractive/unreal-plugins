---
title: URH_Diagnostics Class
---Inherits from UObject

Class to handle initializing and running a diagnostic (blueprint compatible). Tracks and stores local state from the running engine for tracking previous errors.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGetCustomDiagnosticMetadata|[CustomDiagnosticMetadataDelegate](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics_1ab860df08eb6095f4f5f43444e8d7c11d)|Delegate to bind to to add extra custom data to the diagnostic report.|
|void|[Initialize](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics_1a09db63ade24dff6ca72fa074123e2ae4)()|Initialize the system.|
|void|[Uninitialize](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics_1aef532309fb4b7286c73b1d13e28ec724)()|Safely tears down the system.|
|void|[ClearCache](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics_1ae4b65389f97cffb4688e812dbbfe1299)()|Clears the diagnostics cache.|
|void|[GenerateReport](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics_1a9a78e0f94f71290018966989baed3988)(const [FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions) & Options)|Generates a report in JSON format.|
## Public Attributes



### `CustomDiagnosticMetadataDelegate` <a id="classURH__Diagnostics_1ab860df08eb6095f4f5f43444e8d7c11d"></a>

`FGetCustomDiagnosticMetadata URH_Diagnostics::CustomDiagnosticMetadataDelegate`

Delegate to bind to to add extra custom data to the diagnostic report.





## Public Functions



### `Initialize` <a id="classURH__Diagnostics_1a09db63ade24dff6ca72fa074123e2ae4"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the system.




### `Uninitialize` <a id="classURH__Diagnostics_1aef532309fb4b7286c73b1d13e28ec724"></a>

void Uninitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the system.




### `ClearCache` <a id="classURH__Diagnostics_1ae4b65389f97cffb4688e812dbbfe1299"></a>

void ClearCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the diagnostics cache.




### `GenerateReport` <a id="classURH__Diagnostics_1a9a78e0f94f71290018966989baed3988"></a>

void GenerateReport(const [FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions) & Options)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions) &|Options|

#### Description

Generates a report in JSON format.


#### Parameters

World
: The context world object. 
Options
: Options for the generated report. 

#### Returns
The generated object 




