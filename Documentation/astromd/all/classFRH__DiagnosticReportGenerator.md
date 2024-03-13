---
title: FRH_DiagnosticReportGenerator Class
---Inherits from [FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper)

Report generator worker, which is responsible for collecting information from various locations, organizing the report, and then writing it to a destination.

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ReportGenerationStage](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a5c19847194bbebf1a2063c7923fff956)||
|[FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions)|[Options](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a7bdb973029e0efe62b485a5196c8dba8)||
|[ReportGenerationStage](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a5c19847194bbebf1a2063c7923fff956)|[Stage](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a571554fe0b1cc312524732393a4c16dc)||
|TSharedPtr< FJsonObject >|[Metadata](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1aa04d4dcef3affcb13c1ba988285ed317)||
|TSharedPtr< FJsonObject >|[WebRequests](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a85b1180f4061f29eab73fb437d0155aa)||
|TSharedPtr< FJsonObject >|[DeviceData](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a133616f3b2dd1346fbc523f5a0d69fa3)||
|TSharedPtr< FJsonObject >|[FinalReport](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a01e3f8bdf942b47e837c37041fdead39)||
|FString|[FinalReportString](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1afc2d4a815c5f764bfe95db525bb9bfaa)||
|FString|[ReportFilename](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a96030bd6e01d0812fa7c5f83290743e4)||
|bool|[bCloudWriteSuccesful](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a1f528842b4366f89d4c3fd2b9e5a5cde)||
||[FRH_DiagnosticReportGenerator](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a3fd53f68b477800cabcb8d46a60e23b3)()||
|bool|[CanStart](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1ab4f3e43ce35b928c9f35369cd6e467e0)()||
|void|[Start](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a77831fc2db09b2125df778a92a2747e8)(const [FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions) & InOptions)||
|void|[StageComplete](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a344b3f8c1f38f4b139ec2a9a845b2bcf)()||
|void|[GenerateMetadata](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a0213e14f6775233d2d605ae202d550d8)()|generates the Metadata object|
|void|[GenerateWebRequests](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a0869b734e91c6cbc4ed9a09b208948b0)()|Generates the WebRequests object.|
|void|[GenerateDeviceData](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1ab74ba7a9a1990c4e76b3c30ae3b2f031)()|Generates the DeviceData object.|
|void|[GenerateFinalReport](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a000d51386a59cd0c935f460b02560c3d)()|Generates a final report in JSON format, stores in Report, and then triggers a delegate.|
|void|[WriteToFile](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a5708e0d28893c26078c858ec2c070f41)()|Writes the current Report value to the filename specified in options (or a default filename if none is specified)|
|void|[WriteToCloud](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a63bb491d9e9569bf314db5f5ad644426)()|Writes the current Report value to the cloud (based on the RallyHere integration settings)|
|FString|[GetName](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a9d5777a96be8b8cf23a749e83694041b)()|Gets the name of this object for reporting and debugging.|
|void|[ExecuteCallback](/unreal-plugins/all/classfrh__diagnosticreportgenerator/#classFRH__DiagnosticReportGenerator_1a3710264b20ae073909f0e7b458b8669b)(bool bSuccess)|Execute completion callback.|
## Public Types




### `ReportGenerationStage` <a id="classFRH__DiagnosticReportGenerator_1a5c19847194bbebf1a2063c7923fff956"></a>


Generation stage for report generation 


| Enumerator | Initializer|
|------------|------------|
|`Unstarted`|``|
|`Metadata`|``|
|`WebRequests`|``|
|`DeviceData`|``|
|`FinalReport`|``|
|`WriteToFile`|``|
|`WriteToCloud`|``|
|`Complete`|``|



## Protected Attributes



### `Options` <a id="classFRH__DiagnosticReportGenerator_1a7bdb973029e0efe62b485a5196c8dba8"></a>

`FRH_DiagnosticReportOptions FRH_DiagnosticReportGenerator::Options`



Options for generating the report 



### `Stage` <a id="classFRH__DiagnosticReportGenerator_1a571554fe0b1cc312524732393a4c16dc"></a>

`ReportGenerationStage FRH_DiagnosticReportGenerator::Stage`



Current stage of report generation 




## Public Attributes



### `Metadata` <a id="classFRH__DiagnosticReportGenerator_1aa04d4dcef3affcb13c1ba988285ed317"></a>

`TSharedPtr<FJsonObject> FRH_DiagnosticReportGenerator::Metadata`



Metadata JSON generated by the report 



### `WebRequests` <a id="classFRH__DiagnosticReportGenerator_1a85b1180f4061f29eab73fb437d0155aa"></a>

`TSharedPtr<FJsonObject> FRH_DiagnosticReportGenerator::WebRequests`



Web Request JSON generated by the report 



### `DeviceData` <a id="classFRH__DiagnosticReportGenerator_1a133616f3b2dd1346fbc523f5a0d69fa3"></a>

`TSharedPtr<FJsonObject> FRH_DiagnosticReportGenerator::DeviceData`



Device Data JSON generated by the report 



### `FinalReport` <a id="classFRH__DiagnosticReportGenerator_1a01e3f8bdf942b47e837c37041fdead39"></a>

`TSharedPtr<FJsonObject> FRH_DiagnosticReportGenerator::FinalReport`



Final combined report 



### `FinalReportString` <a id="classFRH__DiagnosticReportGenerator_1afc2d4a815c5f764bfe95db525bb9bfaa"></a>

`FString FRH_DiagnosticReportGenerator::FinalReportString`



Final combined report (serialized as string) 



### `ReportFilename` <a id="classFRH__DiagnosticReportGenerator_1a96030bd6e01d0812fa7c5f83290743e4"></a>

`FString FRH_DiagnosticReportGenerator::ReportFilename`



Filename the report was written to (if requested) 



### `bCloudWriteSuccesful` <a id="classFRH__DiagnosticReportGenerator_1a1f528842b4366f89d4c3fd2b9e5a5cde"></a>

`bool FRH_DiagnosticReportGenerator::bCloudWriteSuccesful`



Whether the cloud write was successful (if requested) 




## Public Functions



### `FRH_DiagnosticReportGenerator` <a id="classFRH__DiagnosticReportGenerator_1a3fd53f68b477800cabcb8d46a60e23b3"></a>

 FRH_DiagnosticReportGenerator()

#### Parameters

| Type | Name |
|------|------|

#### Description



Default constructor 



### `CanStart` <a id="classFRH__DiagnosticReportGenerator_1ab4f3e43ce35b928c9f35369cd6e467e0"></a>

bool CanStart()

#### Parameters

| Type | Name |
|------|------|

#### Description



Check if report generation can start based on the current stage. 



### `Start` <a id="classFRH__DiagnosticReportGenerator_1a77831fc2db09b2125df778a92a2747e8"></a>

void Start(const [FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions) & InOptions)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_DiagnosticReportOptions](/unreal-plugins/all/structfrh__diagnosticreportoptions/#structFRH__DiagnosticReportOptions) &|InOptions|

#### Description



Start generating a report with the given options 




## Protected Functions



### `StageComplete` <a id="classFRH__DiagnosticReportGenerator_1a344b3f8c1f38f4b139ec2a9a845b2bcf"></a>

void StageComplete()

#### Parameters

| Type | Name |
|------|------|

#### Description



Called when a stage is complete, increments the stage and calls the appropriate function to start the next stage 



### `GenerateMetadata` <a id="classFRH__DiagnosticReportGenerator_1a0213e14f6775233d2d605ae202d550d8"></a>

void GenerateMetadata()

#### Parameters

| Type | Name |
|------|------|

#### Description

generates the Metadata object




### `GenerateWebRequests` <a id="classFRH__DiagnosticReportGenerator_1a0869b734e91c6cbc4ed9a09b208948b0"></a>

void GenerateWebRequests()

#### Parameters

| Type | Name |
|------|------|

#### Description

Generates the WebRequests object.




### `GenerateDeviceData` <a id="classFRH__DiagnosticReportGenerator_1ab74ba7a9a1990c4e76b3c30ae3b2f031"></a>

void GenerateDeviceData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Generates the DeviceData object.




### `GenerateFinalReport` <a id="classFRH__DiagnosticReportGenerator_1a000d51386a59cd0c935f460b02560c3d"></a>

void GenerateFinalReport()

#### Parameters

| Type | Name |
|------|------|

#### Description

Generates a final report in JSON format, stores in Report, and then triggers a delegate.




### `WriteToFile` <a id="classFRH__DiagnosticReportGenerator_1a5708e0d28893c26078c858ec2c070f41"></a>

void WriteToFile()

#### Parameters

| Type | Name |
|------|------|

#### Description

Writes the current Report value to the filename specified in options (or a default filename if none is specified)




### `WriteToCloud` <a id="classFRH__DiagnosticReportGenerator_1a63bb491d9e9569bf314db5f5ad644426"></a>

void WriteToCloud()

#### Parameters

| Type | Name |
|------|------|

#### Description

Writes the current Report value to the cloud (based on the RallyHere integration settings)




### `GetName` <a id="classFRH__DiagnosticReportGenerator_1a9d5777a96be8b8cf23a749e83694041b"></a>

FString GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the name of this object for reporting and debugging.




### `ExecuteCallback` <a id="classFRH__DiagnosticReportGenerator_1a3710264b20ae073909f0e7b458b8669b"></a>

void ExecuteCallback(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Execute completion callback.





