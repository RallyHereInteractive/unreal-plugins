
#include "RH_PlayerExperienceCollector.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"
#include "PerfCountersModule.h"
#include "RH_Common.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_RemoteFileSubsystem.h"
#include "Net/PerfCountersHelpers.h"

URH_PEXCollector::URH_PEXCollector()
    : bHasBeenInitialized(false)
	, bHasBeenClosed(false)
	, bHasWrittenSummary(false)
	, TimeTracker(0.0f)
	, TimelineFileCSV(nullptr)
{
	StatGroupsToCapture.Add(URH_PEXPrimaryStats::StaticClass());
	StatGroupsToCapture.Add(URH_PEXNetworkStats::StaticClass());
	StatGroupsToCapture.Add(URH_PEXGameStats::StaticClass());
}

URH_PEXCollector::~URH_PEXCollector()
{
	Close();
}

void URH_PEXCollector::Close()
{
	// if we have never been initialized, or have already been closed, do nothing
	if (!bHasBeenInitialized || bHasBeenClosed)
	{
		return;
	}

	bHasBeenClosed = true;
	
	// close out the timeline file, if it exists
	if (TimelineFileCSV != nullptr)
	{
		delete TimelineFileCSV;
		TimelineFileCSV = nullptr;

		// upload the file if requested
		if (GetConfig()->bUploadTimelineToFileAPI && FPaths::FileExists(TimelineFilePath))
		{
			UploadFile(TimelineFilePath, FPaths::GetCleanFilename(TimelineFilePath));
		}
	}

	// write final summaries if not complete already, and upload if needed
	if (!bHasWrittenSummary)
	{
		WriteSummary();
	}

	FCoreDelegates::OnEndFrame.RemoveAll(this);
}

bool URH_PEXCollector::Init()
{
	Owner = TWeakInterfacePtr<IRH_PEXOwnerInterface>(GetOuter());

	if (!GetConfig()->WantsEnabled())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector is disabled"));
		return false;
	}
	else if (!Owner.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector owner is invalid (may not implement IRH_PEXOwnerInterface)"));
		return false;
	}
	else if (bHasBeenInitialized)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector has already been initialized"));
		return false;
	}

	bHasBeenInitialized = true;
	
	// instantiate the list of stat groups to capture
	StatGroups.Empty(StatGroupsToCapture.Num());
	for (auto StatGroupClass : StatGroupsToCapture)
	{
		auto StatGroup = NewObject<URH_PEXStatGroup>(this, StatGroupClass);
		if (StatGroup != nullptr)
		{
			StatGroups.Add(StatGroup);
		}
	}

	// register for end frame delegate so we can record per frame values
	FCoreDelegates::OnEndFrame.AddUObject(this, &URH_PEXCollector::OnEndFrame);

	// cache off the match id and upload directories
	CachedMatchId = Owner->GetPEXMatchId();
	CachedRemoteFileDirectory = Owner->GetPEXRemoteFileDirectory();
	
    // create log file
    if (GetConfig()->bWriteTimelineFile)
    {
		// Create the file name		
		TimelineFilePath = FPaths::ProjectLogDir() / FString::Printf(TEXT("%s_%s.csv"), *GetConfig()->TimelineFilePrefix, *CachedMatchId);

		// Create a file writer
		TimelineFileCSV = IFileManager::Get().CreateFileWriter(*TimelineFilePath, FILEWRITE_AllowRead);

    	// write the CSV header
    	if (TimelineFileCSV != nullptr)
    	{
    		FString CSVHeaderString;
    		bool bIsFirst = true;
    		for(const auto StatGroup : StatGroups)
			{
    			const FString CSVStats = StatGroup->GetTimelineCSVHeader();
    			if (CSVStats.Len() > 0)
				{
    				if (CSVHeaderString.Len() > 0)
    				{
    					CSVHeaderString += TEXT(",");
    				}
					CSVHeaderString += CSVStats;
				}
			}

    		if (CSVHeaderString.Len() > 0)
			{
				TimelineFileCSV->Logf(TEXT("%s"), *CSVHeaderString);
			}
		    else
		    {
		    	// if we failed to write the header, close the file and delete it, as it wont have any data
			    TimelineFileCSV->Close();
		    	delete TimelineFileCSV;
		    	TimelineFileCSV = nullptr;
		    	IFileManager::Get().Delete(*TimelineFilePath);

		    	TimelineFilePath.Empty();
		    }
    	}
    }

#if USE_SERVER_PERF_COUNTERS
    // create performance counters for use in network tracking
    IPerfCountersModule::Get().CreatePerformanceCounters();
#endif

    return true;
}

// ticked just after main engine tick!
void URH_PEXCollector::OnEndFrame()
{
    // if logging was disabled, exit
    if (!GetConfig()->WantsEnabled())
    {
        return;
    }
	else if (!Owner.IsValid())
	{
		return;
	}

	auto OwnerInterface = Owner.ToScriptInterface();
	
	const auto OldTimeTracker = TimeTracker;
	const auto OldSeconds = FMath::FloorToInt(OldTimeTracker);
    TimeTracker = FApp::GetCurrentTime();
	const auto NewSeconds = FMath::FloorToInt(TimeTracker);
	const bool bIsNewSecond = NewSeconds != OldSeconds;

    // collect any stats that need to be tracked per frame (ex: longest frametime)
	for (const auto StatGroup : StatGroups)
	{
		StatGroup->CapturePerFrameStats(OwnerInterface);
	}

    if (bIsNewSecond)
    {
    	for (const auto StatGroup : StatGroups)
    	{
    		// collect any stats that need to be tracked once per second (ex: pawn count)
    		StatGroup->CapturePerSecondStats(OwnerInterface);

    		if (GetConfig()->WantsSummary())
    		{
    			// update the summary with the data from the last second (both per second capture and per frame capture)
    			StatGroup->UpdateSummary();
    		}
    	}

		if (NewSeconds % GetConfig()->TimelineWriteInterval == 0)
		{
			if (GetConfig()->bWriteTimelineFile && TimelineFileCSV != nullptr)
			{
				FString CSVStatsString;
				bool bIsFirst = true;

				for(const auto StatGroup : StatGroups)
				{
					FString CSVStats = StatGroup->GetTimelineCSVValues();
					if (CSVStats.Len() > 0)
					{
						if (CSVStatsString.Len() > 0)
						{
							CSVStatsString += TEXT(",");
						}
						CSVStatsString += CSVStats;
					}
				}

				if (CSVStatsString.Len() > 0)
				{
					TimelineFileCSV->Logf(TEXT("%s"), *CSVStatsString);
				}
			}
		}

    	// reset the capture state so we can start accumulating a new second of data
    	for (const auto StatGroup : StatGroups)
    	{
    		StatGroup->ResetCapture();
    	}
    }
}

void URH_PEXCollector::WriteSummary()
{
	if (bHasWrittenSummary)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Summary already written"));
		return;
	}

	bHasWrittenSummary = true;
	
	if (GetConfig()->bWriteSummaryFile)
	{
		FString FilePath = FPaths::ProjectLogDir() / FString::Printf(TEXT("%s_%s.json"), *GetConfig()->SummaryFilePrefix, *CachedMatchId);

		auto Document = MakeShared<FJsonObject>();
		
		for (const auto StatGroup : StatGroups)
		{
			StatGroup->WriteSummary(Document);
		}

		// serialize to string
		FString DocumentString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&DocumentString);
		if (FJsonSerializer::Serialize(Document, Writer))
		{
			if (FFileHelper::SaveStringToFile(DocumentString, *FilePath))
			{
				// upload the file if requested
				if (GetConfig()->bUploadSummaryToFileAPI)
				{
					UploadFile(FilePath, FPaths::GetCleanFilename(FilePath));
				}
			}
		}
	}
	
	if (GetConfig()->bUploadSummaryToPEXAPI)
	{
		
	}
}

void URH_PEXCollector::UploadFile(const FString& FilePath, const FString& RemoteFileName) const
{
	if (Owner.IsValid())
	{
		auto UploadDirectory = CachedRemoteFileDirectory;
		if (UploadDirectory.IsValid())
		{
			auto World = Owner->GetPEXWorld();
			if (World != nullptr && World->GetGameInstance() != nullptr)
			{
				auto RHGI = World->GetGameInstance()->GetSubsystem<URH_GameInstanceSubsystem>();
				if (RHGI != nullptr && RHGI->GetRemoteFileSubsystem() != nullptr)
				{
					RHGI->GetRemoteFileSubsystem()->UploadFile(UploadDirectory, RemoteFileName, FilePath);
				}
			}
		}
	}
}

#define TO_MS(a) (1000*(a))

URH_PEXPrimaryStats::URH_PEXPrimaryStats()
{
	Name = TEXT("Primary");
	
	Stats.Reserve(Max);
	
	int32 Check = 0;
	Check = Stats.Emplace(TEXT("FrameTime"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == FrameTime);
	Check = Stats.Emplace(TEXT("GameThreadTime"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == GameThreadTime);
	Check = Stats.Emplace(TEXT("RenderThreadTime"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == RenderThreadTime);
	Check = Stats.Emplace(TEXT("RHIThreadTime"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == RHIThreadTime);
	Check = Stats.Emplace(TEXT("GPUTime"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == GPUTime);
	Check = Stats.Emplace(TEXT("DeltaTime"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == DeltaTime);

	Check = Stats.Emplace(TEXT("TickCount"), ERH_PEXValueType::Current, ERH_PEXValueType::Current);
	check(Check == TickCount);
	Check = Stats.Emplace(TEXT("DelayedTickCount"), ERH_PEXValueType::Current, ERH_PEXValueType::Current);
	check(Check == DelayedTickCount);
	
	Check = Stats.Emplace(TEXT("MemoryWS"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == MemoryWS);
	Check = Stats.Emplace(TEXT("MemoryVB"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == MemoryVB);
	Check = Stats.Emplace(TEXT("CPUProcess"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == CPUProcess);
	Check = Stats.Emplace(TEXT("CPUMachine"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == CPUMachine);
}

void URH_PEXPrimaryStats::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	if (Owner == nullptr)
	{
		return;
	}
	auto ParentWorld = Owner->GetPEXWorld();
	
    // if we have access to stat unit data, prefer it
    if (ParentWorld != nullptr && ParentWorld->GetGameViewport() != nullptr && ParentWorld->GetGameViewport()->GetStatUnitData())
    {
        FStatUnitData* pData = ParentWorld->GetGameViewport()->GetStatUnitData();
    	Stats[FrameTime].CaptureValue(pData->FrameTime);
    	Stats[GameThreadTime].CaptureValue(pData->GameThreadTime);
    	Stats[RenderThreadTime].CaptureValue(pData->RenderThreadTime);
    	Stats[RHIThreadTime].CaptureValue(pData->RHITTime);
    	Stats[GPUTime].CaptureValue(pData->GPUFrameTime[0]);
    }
    else
    {
    	auto MainThreadValue = TO_MS(FApp::GetDeltaTime() - FApp::GetIdleTime());
    	Stats[FrameTime].CaptureValue(MainThreadValue);
        Stats[GameThreadTime].CaptureValue(MainThreadValue);
    }

	auto DeltaSeconds = FApp::GetDeltaTime();
    Stats[DeltaTime].CaptureValue(TO_MS(DeltaSeconds));

    // accumulators
	Stats[TickCount].IncrementCaptureValue();

	auto ParentEngine = Owner->GetPEXEngine();
    if (ParentEngine != nullptr)
    {
        float MaxTickRate = ParentEngine->GetMaxTickRate(DeltaSeconds, false);
        if (MaxTickRate > 0 && DeltaSeconds > (1.1f / MaxTickRate))    // note 1.1 on purpose, 10% overage
        {
        	Stats[DelayedTickCount].IncrementCaptureValue();
        }
    }
}

void URH_PEXPrimaryStats::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	const auto MemoryStats = FPlatformMemory::GetStats();
	Stats[MemoryWS].CaptureValue(MemoryStats.UsedPhysical >> 20);
	Stats[MemoryVB].CaptureValue(MemoryStats.UsedVirtual >> 20);
	Stats[CPUProcess].CaptureValue(FPlatformTime::GetCPUTime().CPUTimePctRelative);
}

URH_PEXNetworkStats::URH_PEXNetworkStats()
{
	Name = TEXT("Network");
	
	Stats.Reserve(Max);
	
	int32 Check = 0;
	Check = Stats.Emplace(TEXT("ConnectionCount"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == ConnectionCount);
	Check = Stats.Emplace(TEXT("AvgPing"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == AvgPing);
	Check = Stats.Emplace(TEXT("InPackets"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == InPackets);
	Check = Stats.Emplace(TEXT("OutPackets"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == OutPackets);
	Check = Stats.Emplace(TEXT("TotalPackets"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == TotalPackets);
	Check = Stats.Emplace(TEXT("InPacketsLost"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == InPacketsLost);
	Check = Stats.Emplace(TEXT("OutPacketsLost"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == OutPacketsLost);
	Check = Stats.Emplace(TEXT("TotalPacketsLost"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == TotalPacketsLost);
	Check = Stats.Emplace(TEXT("PacketLoss"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == PacketLoss);
}


void URH_PEXNetworkStats::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
}

void URH_PEXNetworkStats::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	// network
	const auto ValueNumConnections  = PerfCountersGet(TEXT("NumConnections"), 0);
	const auto ValueAvgPing = PerfCountersGet(TEXT("AvgPing"), 0.f);
	const auto ValueInPackets = PerfCountersGet(TEXT("InPackets"), 0);
	const auto ValueOutPackets = PerfCountersGet(TEXT("OutPackets"), 0);
	const auto ValueInPacketsLost = PerfCountersGet(TEXT("InPacketsLost"), 0);
	const auto ValueOutPacketsLost = PerfCountersGet(TEXT("OutPacketsLost"), 0);
		
	Stats[ConnectionCount].CaptureValue(ValueNumConnections);
	Stats[AvgPing].CaptureValue(ValueAvgPing);
	Stats[InPackets].CaptureValue(ValueInPackets);
	Stats[OutPackets].CaptureValue(ValueOutPackets);
	Stats[TotalPackets].CaptureValue(ValueInPackets + ValueOutPackets);
	Stats[InPacketsLost].CaptureValue(ValueInPacketsLost);
	Stats[OutPacketsLost].CaptureValue(ValueOutPacketsLost);
	Stats[TotalPacketsLost].CaptureValue(ValueInPacketsLost + ValueOutPacketsLost);
	Stats[PacketLoss].CaptureValue(((float)(ValueInPacketsLost + ValueOutPacketsLost)) / FMath::Max<float>(1.0f, (float)(ValueInPackets + ValueOutPackets)));
}

URH_PEXGameStats::URH_PEXGameStats()
{
	Name = TEXT("Game");
	
	Stats.Reserve(Max);
	
	int32 Check = 0;
	Check = Stats.Emplace(TEXT("PlayerControllerCount"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == PlayerControllerCount);
	Check = Stats.Emplace(TEXT("AIControllerCount"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == AIControllerCount);
	Check = Stats.Emplace(TEXT("PawnCount"), ERH_PEXValueType::Max, ERH_PEXValueType::Max);
	check(Check == PawnCount);
}

void URH_PEXGameStats::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
}

void URH_PEXGameStats::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	if (Owner == nullptr)
	{
		return;
	}
	auto ParentWorld = Owner->GetPEXWorld();

	// gamestate
	if (ParentWorld != nullptr)
	{
		// samples for per-second stats should not be carried over in current implementation, but ensure we are counting from zero as the implementation may change
		int32 ValueAIControllerCount = 0;
		int32 ValuePlayerControllerCount = 0;
		int32 ValuePawnCount = 0;

		for (auto It = ParentWorld->GetControllerIterator(); It; ++It)
		{
			const AController* Controller = It->Get();
			if (Controller != nullptr)
			{
				if (Controller->IsPlayerController())
				{
					++ValuePlayerControllerCount;
				}
				else
				{
					++ValueAIControllerCount;
				}
			}
		}

		for (APawn* Pawn : TActorRange<APawn>(ParentWorld)) // For backwards compat GetNumPawns needs to remain const, but TActorRange can't use a const UWorld.
		{
			++ValuePawnCount;
		}

		Stats[AIControllerCount].CaptureValue(ValueAIControllerCount);
		Stats[PlayerControllerCount].CaptureValue(ValuePlayerControllerCount);
		Stats[PawnCount].CaptureValue(ValuePawnCount);
	}
}


