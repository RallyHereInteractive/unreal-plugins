// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_Diagnostics.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_ConfigSubsystem.h"

#include "RH_WebRequests.h"

#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/GameViewportClient.h"
#include "Misc/DateTime.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformMemoryHelpers.h"

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHCreateDiagnosticReport(
	TEXT("rh.RunDiagnostic"),
	TEXT("Logs diagnostics to a file"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			if (!FRallyHereIntegrationModule::Get().GetDiagnostics())
			{
				Ar.Logf(TEXT("Diagnostics is not available"));
				return;
			}

			FString File = (Args.Num() > 0) ? Args[0] : FString();

			FRH_DiagnosticReportOptions Options;
			Options.World = World;
			Options.bWriteToFile = true;

			FRallyHereIntegrationModule::Get().GetDiagnostics()->GenerateReport(Options);
		}));

void FRH_DiagnosticReportGenerator::GenerateMetadata()
{
	if (!Options.bIncludeMetadata)
	{
		StageComplete();
		return;
	}

	Metadata = MakeShareable(new FJsonObject);

	Metadata->SetStringField(TEXT("Application-Name"), FApp::GetName());
	Metadata->SetStringField(TEXT("Project-Name"), FApp::HasProjectName() ? FApp::GetProjectName() : FString());
	Metadata->SetStringField(TEXT("Build-Version"), FApp::GetBuildVersion());
	bool isInEditor = GEngine != nullptr ? GEngine->IsEditor() : false;
	Metadata->SetBoolField(TEXT("Is-In-Editor"), isInEditor);
	Metadata->SetStringField(TEXT("CommandLine"), FCommandLine::Get());

	FString Mode = FGenericPlatformMisc::GetEngineMode();
	Metadata->SetStringField(TEXT("Mode"), Mode);

	auto& IntegrationObject = FRallyHereIntegrationModule::Get();

	Metadata->SetStringField(TEXT("RH-Environment"), IntegrationObject.GetEnvironmentId());
	Metadata->SetStringField(TEXT("RH-BaseURL"), IntegrationObject.GetBaseURL());
	Metadata->SetStringField(TEXT("RH-ClientId"), IntegrationObject.GetClientId());

	bool hasLocalTime = false;
	bool hasServerTime = false;
	FDateTime LocalTime;
	FDateTime ServerTime;
	if (Options.World.IsValid())
	{
		if (UGameInstance* GI = Options.World->GetGameInstance())
		{
			if (URH_GameInstanceSubsystem* pGISS = GI->GetSubsystem<URH_GameInstanceSubsystem>())
			{
				if (URH_ConfigSubsystem* pRH_ConfigSubsystem = pGISS->GetConfigSubsystem())
				{
					const FRH_ServerTimeCache& ServerTimeCache = pRH_ConfigSubsystem->GetServerTimeCache();
					hasLocalTime = true;
					LocalTime = ServerTimeCache.GetLocalTime();
					hasServerTime = ServerTimeCache.GetServerTime(ServerTime);
				}
			}
		}
	}
	Metadata->SetStringField(TEXT("Cached-Local-Time-UTC"), hasLocalTime ? LocalTime.ToIso8601() : FString());
	Metadata->SetStringField(TEXT("Cached-Server-Time-UTC"), hasServerTime ? ServerTime.ToIso8601() : FString());

	// deep copy the input custom metadata so we can alter it
	FRHAPI_JsonObject CustomMetadata;
	RHJsonUtilities::Duplicate(Options.CustomMetadata.GetObject(), CustomMetadata.GetObject());

	// invoke global delegate to add more data
	auto* Diagnostics = FRallyHereIntegrationModule::Get().GetDiagnostics();
	if (Diagnostics != nullptr)
	{
		Diagnostics->CustomDiagnosticMetadataDelegate.ExecuteIfBound(CustomMetadata);
	}

	// add the custom metadata to the report
	Metadata->SetObjectField(TEXT("Custom-Metadata"), CustomMetadata.GetObject());


	StageComplete();
}

void FRH_DiagnosticReportGenerator::GenerateWebRequests()
{
	if (!Options.bIncludeWebRequests)
	{
		StageComplete();
		return;
	}

	auto Tracker = FRallyHereIntegrationModule::Get().GetWebRequestTracker();
	if (Tracker != nullptr)
	{
		WebRequests = MakeShareable(new FJsonObject);
		WebRequests->SetObjectField(TEXT("Web-Requests-Data"), Tracker->LogTrackedWebRequestsToJSON());

		// call count all time
		const TMap<FName, int32> APINameCountAllTimeMap = Tracker->GetAPINameToCallCountMap();
		const TMap<FName, int32> URLCountAllTimeMap = Tracker->GetSimplifiedPathToCallCountMap();

		// call count for last 60s
		TMap<FName, int32> APINameCountRecentMap;
		TMap<FName, int32> URLCountRecentMap;
		Tracker->GetRecentCallCountMaps(&APINameCountRecentMap, &URLCountRecentMap);

		// Bursts in last 60s
		TMap<FName, TTuple<int32, int32>> APINameBurstsMap; // API name -> <num bursts, largest burst>
		TMap<FName, TTuple<int32, int32>> URLBurstsMap; // Simplified Path -> <num bursts, largest burst>
		Tracker->DetectRecentBursts(&APINameBurstsMap, &URLBurstsMap);

		auto PopulateJsonWithMap = [](TSharedPtr<FJsonObject> JsonObject, const TMap<FName, int32> Map)
		{
			for (auto Pair : Map)
			{
				JsonObject->SetNumberField(Pair.Key.ToString(), Pair.Value);
			}
		};

		TSharedPtr<FJsonObject> APINameCountAllTime = MakeShareable(new FJsonObject);
		PopulateJsonWithMap(APINameCountAllTime, APINameCountAllTimeMap);
		TSharedPtr<FJsonObject> URLCountAllTime = MakeShareable(new FJsonObject);
		PopulateJsonWithMap(URLCountAllTime, URLCountAllTimeMap);
		TSharedPtr<FJsonObject> APINameCountRecent = MakeShareable(new FJsonObject);
		PopulateJsonWithMap(APINameCountRecent, APINameCountRecentMap);
		TSharedPtr<FJsonObject> URLCountRecent = MakeShareable(new FJsonObject);
		PopulateJsonWithMap(URLCountRecent, URLCountRecentMap);

		auto PopulateJsonWithTupleMap = [](TSharedPtr<FJsonObject> JsonObject, const TMap<FName, TTuple<int32, int32>> Map)
		{
			for (auto Pair : Map)
			{
				TSharedPtr<FJsonObject> Inner = MakeShareable(new FJsonObject);
				Inner->SetNumberField(TEXT("Burst-Count"), Pair.Value.Key);
				Inner->SetNumberField(TEXT("Largest-Burst"), Pair.Value.Value);
				JsonObject->SetObjectField(Pair.Key.ToString(), Inner);
			}
		};

		TSharedPtr<FJsonObject> APINameBurst = MakeShareable(new FJsonObject);
		PopulateJsonWithTupleMap(APINameBurst, APINameBurstsMap);
		TSharedPtr<FJsonObject> URLBurst = MakeShareable(new FJsonObject);
		PopulateJsonWithTupleMap(URLBurst, URLBurstsMap);

		TSharedPtr<FJsonObject> ByAPIName = MakeShareable(new FJsonObject);
		ByAPIName->SetObjectField(TEXT("Call-Count-All-Time"), APINameCountAllTime);
		ByAPIName->SetObjectField(TEXT("Call-Count-Last-60s"), APINameCountRecent);
		ByAPIName->SetObjectField(TEXT("Bursts"), APINameBurst);

		TSharedPtr<FJsonObject> ByURL = MakeShareable(new FJsonObject);
		ByURL->SetObjectField(TEXT("Call-Count-All-Time"), URLCountAllTime);
		ByURL->SetObjectField(TEXT("Call-Count-Last-60s"), URLCountRecent);
		ByURL->SetObjectField(TEXT("Bursts"), URLBurst);

		TSharedPtr<FJsonObject> Analytics = MakeShareable(new FJsonObject);
		Analytics->SetObjectField(TEXT("By-API-Name"), ByAPIName);
		Analytics->SetObjectField(TEXT("By-Simplified-Path"), ByURL);

		WebRequests->SetObjectField(TEXT("Analytics"), Analytics);
	}

	StageComplete();
}

void FRH_DiagnosticReportGenerator::GenerateDeviceData()
{
	if (!Options.bIncludeDeviceData)
	{
		StageComplete();
		return;
	}

	DeviceData = MakeShareable(new FJsonObject);

	// for now, match standard client event data
	DeviceData->SetStringField(TEXT("CpuType"), FPlatformMisc::GetCPUBrand());
	DeviceData->SetNumberField(TEXT("CpuCores"), FPlatformMisc::NumberOfCores());
	DeviceData->SetStringField(TEXT("GpuType"), FPlatformMisc::GetPrimaryGPUBrand());

	if (Options.World.IsValid())
	{
		auto pGameInstance = Options.World->GetGameInstance();
		if (pGameInstance != nullptr)
		{
			const auto GameViewportClient = pGameInstance->GetGameViewportClient();
			if (GameViewportClient != nullptr)
			{
				FVector2D ViewportSize;
				GameViewportClient->GetViewportSize(ViewportSize);

				DeviceData->SetNumberField(TEXT("ScreenHeight"), ViewportSize.Y);
				DeviceData->SetNumberField(TEXT("ScreenWidth"), ViewportSize.X);
			}
		}
	}
	

	{
		FPlatformMemoryStats MemoryStats = PlatformMemoryHelpers::GetFrameMemoryStats();
		DeviceData->SetNumberField(TEXT("RamTotal"), MemoryStats.TotalPhysicalGB);
		DeviceData->SetNumberField(TEXT("RamAvailable"), ((float)MemoryStats.AvailablePhysical) / (1024.f * 1024.f * 1024.f));	// convert to GB
	}

	DeviceData->SetStringField(TEXT("DeviceType"), FPlatformProperties::PlatformName());

	StageComplete();
}

void FRH_DiagnosticReportGenerator::GenerateErrorsData()
{
	if (!Options.bIncludeErrors)
	{
		StageComplete();
		return;
	}

	Errors = MakeShareable(new FJsonObject);

	if (Options.DiagnosticsTracker.IsValid())
	{
		auto Tracker = Options.DiagnosticsTracker.Pin();
		TArray<TSharedPtr<FJsonValue>> NetworkErrorsArray;
		for (const auto& Error : Tracker->NetworkFailures)
		{
			// do not check current world vs options world, as world is changed during travel and will likely mismatch on an error
			//if (Options.World == Error.World)
			{
				TSharedRef<FJsonValueObject> ErrorValue = MakeShareable(new FJsonValueObject(Error.ToJsonObject()));
				NetworkErrorsArray.Add(ErrorValue);
			}
		}
		Errors->SetArrayField(TEXT("Network-Failures"), NetworkErrorsArray);

		TArray<TSharedPtr<FJsonValue>> TravelErrorsArray;
		for (const auto& Error : Tracker->TravelFailures)
		{
			// do not check current world vs options world, as world is changed during travel and will likely mismatch on an error
			//if (Options.World == Error.World)
			{
				TSharedRef<FJsonValueObject> ErrorValue = MakeShareable(new FJsonValueObject(Error.ToJsonObject()));
				TravelErrorsArray.Add(ErrorValue);
			}
		}
		Errors->SetArrayField(TEXT("Travel-Failures"), TravelErrorsArray);
	}

	StageComplete();
}


void FRH_DiagnosticReportGenerator::GenerateFinalReport()
{
	FinalReport = MakeShareable(new FJsonObject);

	// add all the subobjects to the report
	if (Metadata.IsValid())
	{
		FinalReport->SetObjectField(TEXT("Metadata"), Metadata);
	}

	if (WebRequests.IsValid())
	{
		FinalReport->SetObjectField(TEXT("Web-Requests"), WebRequests);
	}

	if (DeviceData.IsValid())
	{
		FinalReport->SetObjectField(TEXT("Device-Data"), DeviceData);
	}

	if (Errors.IsValid())
	{
		FinalReport->SetObjectField(TEXT("Errors"), Errors);
	}
	
	// serialize to string
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&FinalReportString);
	FJsonSerializer::Serialize(FinalReport.ToSharedRef(), Writer);

	StageComplete();
}

void FRH_DiagnosticReportGenerator::WriteToFile()
{
	if (!Options.bWriteToFile)
	{
		StageComplete();
		return;
	}

	FString Filename;
	if (Options.OutputFilename.IsEmpty())
	{
		Filename = TEXT("Diagnostics-") + FDateTime::Now().ToString() + TEXT(".json");
	}
	else
	{
		Filename = Options.OutputFilename;
	}

	// Make dir
	FString ProjectLogDir = FPaths::ProjectLogDir();
	if (FPaths::IsRelative(ProjectLogDir))
	{
		ProjectLogDir = FPaths::ConvertRelativePathToFull(ProjectLogDir);
	}
	IFileManager::Get().MakeDirectory(*ProjectLogDir, true);

	FString FullFilename = Filename;
	if (FullFilename == FPaths::GetCleanFilename(FullFilename))
	{
		FullFilename = FPaths::Combine(ProjectLogDir, FullFilename);
	}

	if (FFileHelper::SaveStringToFile(FinalReportString, *FullFilename, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Saved diagnostic report to %s"), *FullFilename);
		ReportFilename = FullFilename;
	}

	StageComplete();
}

void FRH_DiagnosticReportGenerator::WriteToCloud()
{
	if (!Options.bWriteToCloud)
	{
		StageComplete();
		return;
	}

	// TODO - cloud write of report
	//auto& IntegrationObject = FRallyHereIntegrationModule::Get();

	//auto BaseURL = IntegrationObject.GetBaseUrl();

	StageComplete();
}

FRH_Diagnostics::FRH_Diagnostics()
{
	ClearCache();
}

void FRH_Diagnostics::Initialize()
{
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().AddSP(this, &FRH_Diagnostics::OnNetworkFailure);
		GEngine->OnTravelFailure().AddSP(this, &FRH_Diagnostics::OnTravelFailure);
	}
}

void FRH_Diagnostics::Uninitialize()
{
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().RemoveAll(this);
		GEngine->OnTravelFailure().RemoveAll(this);
	}
}

void FRH_Diagnostics::GenerateReport(const FRH_DiagnosticReportOptions& Options) const
{
	auto Helper = MakeShared<FRH_DiagnosticReportGenerator>();

	auto OptionsCopy = Options;
	OptionsCopy.DiagnosticsTracker = AsShared();

	Helper->Start(OptionsCopy);
}

void URH_DiagnosticsBlueprintLibrary::GenerateReport(const FRH_DiagnosticReportOptions& Options)
{
	if (FRallyHereIntegrationModule::IsAvailable())
	{
		if (auto Diagnostics = FRallyHereIntegrationModule::Get().GetDiagnostics())
		{
			Diagnostics->GenerateReport(Options);
		}
	}
}
