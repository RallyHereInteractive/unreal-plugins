// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_Diagnostics.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_ConfigSubsystem.h"

#include "RH_WebRequests.h"

#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Misc/DateTime.h"
#include "HAL/FileManager.h"

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

	FString Mode;
	if (IsRunningDedicatedServer())
	{
		Mode = TEXT("Dedicated-Server");
	}
	else if (IsRunningClientOnly())
	{
		Mode = TEXT("Client-Only");
	}
	else if (IsRunningGame())
	{
		Mode = TEXT("Game");
	}
	else
	{
		Mode = TEXT("Unknown");
	}
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
	Metadata->SetStringField(TEXT("Cached-Local-Time-UTC"), hasLocalTime ? LocalTime.ToString() : FString());
	Metadata->SetStringField(TEXT("Cached-Server-Time-UTC"), hasServerTime ? ServerTime.ToString() : FString());

	auto* Diagnostics = FRallyHereIntegrationModule::Get().GetDiagnostics();
	if (Diagnostics != nullptr && Diagnostics->CustomDiagnosticMetadataDelegate.IsBound())
	{
		auto CustomData = Diagnostics->CustomDiagnosticMetadataDelegate.Execute();
		if (CustomData.IsValid())
		{
			Metadata->SetObjectField(TEXT("Custom-Data"), CustomData);
		}
	}

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

	const auto ReportJson = FinalReport;

	FString FileOutput;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&FileOutput);
	FJsonSerializer::Serialize(ReportJson.ToSharedRef(), Writer);

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

	if (FFileHelper::SaveStringToFile(FileOutput, *FullFilename, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
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

void URH_Diagnostics::Initialize()
{
}

void URH_Diagnostics::Uninitialize()
{
}

void URH_Diagnostics::GenerateReport(const FRH_DiagnosticReportOptions& Options) const
{
	auto Helper = MakeShared<FRH_DiagnosticReportGenerator>();

	Helper->Start(Options);
}
