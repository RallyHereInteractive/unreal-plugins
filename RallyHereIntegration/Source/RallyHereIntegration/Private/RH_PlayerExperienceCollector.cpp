
#include "RH_PlayerExperienceCollector.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"
#include "PerfCountersModule.h"
#include "RH_Common.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayer.h"
#include "RH_RemoteFileSubsystem.h"
#include "Net/NetPing.h"
#include "Net/PerfCountersHelpers.h"
#include "RenderTimer.h"
#include "Serialization/AsyncPackageLoader.h"

URH_PEXCollector::URH_PEXCollector()
    : bHasBeenInitialized(false)
	, bHasBeenClosed(false)
	, bHasWrittenSummary(false)
	, TimeTracker(0.0f)
	, bFirstInterval(false)
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

bool URH_PEXCollector::Init(IRH_PEXOwnerInterface* InOwner)
{
	Owner = InOwner;

	if (!Owner.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector owner is invalid (may not implement IRH_PEXOwnerInterface)"));
		return false;
	}
	else if (bHasBeenInitialized)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector has already been initialized"));
		return false;
	}
	else if (StatGroupsToCapture.IsEmpty())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector has no stat groups to capture"));
		return false;
	}
	
	// cache off values from the owner
	CachedMatchId = Owner->GetPEXMatchId();
	CachedRemoteFileDirectory = Owner->GetPEXRemoteFileDirectory();
	CachedPlayerId = Owner->GetPEXPlayerId();
	bCachedIsHost = Owner->GetPEXIsHost();
	
	// cache which config class to use
	if (IsRunningDedicatedServer())
	{
		CachedConfig = GetDefault<URH_PEXCollectorConfig_DedicatedServer>();
	}
	else if (bCachedIsHost)
	{
		CachedConfig = GetDefault<URH_PEXCollectorConfig_Host>();
	}
	else
	{
		CachedConfig = GetDefault<URH_PEXCollectorConfig_Client>();		
	}
	
	// validate cached values
	if (!GetConfig()->WantsEnabled())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector is disabled"));
		return false;
	}
	else if (CachedMatchId.IsEmpty())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector cannot be initialized without a match id"));
		return false;
	}
	else if (!bCachedIsHost && !CachedPlayerId.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector cannot be initialized without a player id for non-hosts"));
		return false;
	}

	// flag as initialized, at this point we are committed to running
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
	
    // create timeline file if configured
    if (GetConfig()->bWriteTimelineFile)
    {
		// Create the file name
    	FString TimelineFileName = FString::Printf(TEXT("%s_%s.csv"), *GetConfig()->TimelineFilePrefix, *CachedMatchId);
    	if (CachedPlayerId.IsValid())
    	{
    		TimelineFileName = FString::Printf(TEXT("%s_%s_%s.csv"), *GetConfig()->TimelineFilePrefix, *CachedMatchId, *CachedPlayerId.ToString(EGuidFormats::DigitsWithHyphens));
    	}
    	
		TimelineFilePath = FPaths::ProjectLogDir() / TimelineFileName;

		// Create a file writer
		TimelineFileCSV = IFileManager::Get().CreateFileWriter(*TimelineFilePath, FILEWRITE_AllowRead);

    	// write the CSV header
    	if (TimelineFileCSV != nullptr)
    	{
    		FString CSVHeaderString;
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
	const bool bIsSecond = NewSeconds != OldSeconds;
	const bool bIsInterval = bIsSecond && (NewSeconds % GetConfig()->StatInterval == 0);

	// right now, intervals must be second aligned
	check (!bIsInterval || (bIsInterval && bIsSecond));

    // collect any stats that need to be tracked per frame (ex: longest frametime)
	for (const auto StatGroup : StatGroups)
	{
		StatGroup->CapturePerFrameStats(OwnerInterface);
	}

	if (bIsSecond)
	{
		// collect any stats that need to be tracked per second (ex: longest frametime)
		for (const auto StatGroup : StatGroups)
		{
			StatGroup->CapturePerSecondStats(OwnerInterface);
		}	
	}
	
    if (bIsInterval)
    {
    	// check if this was a partial interval
    	bool bPartialInterval = bFirstInterval;
    	bFirstInterval = false;
    	
    	for (const auto StatGroup : StatGroups)
    	{
    		// collect any stats that need to be tracked once per second (ex: pawn count)
    		StatGroup->CapturePerIntervalStats(OwnerInterface);
    	}
    	
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

    	// update the summary and reset the capture state so we can start accumulating a new interval of data
    	for (const auto StatGroup : StatGroups)
    	{
    		// update the summary with the data from the interval, but only if we are not in a partial interval which could affect min, max, etc
    		if (GetConfig()->WantsSummary() && !bPartialInterval)
    		{
    			StatGroup->UpdateSummary();
    		}
    		
    		StatGroup->ResetCapture();
    	}
    }
}

void URH_PEXCollector::WriteSummary()
{
	// if summary data is not configured, do not write it
	if (!GetConfig()->WantsSummary())
	{
		return;
	}
	else if (bHasWrittenSummary)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Summary already written"));
		return;
	}

	bHasWrittenSummary = true;
	
	if (GetConfig()->bWriteSummaryFile)
	{
		FString FileName = FString::Printf(TEXT("%s_%s.json"), *GetConfig()->SummaryFilePrefix, *CachedMatchId);
		if (CachedPlayerId.IsValid())
		{
			FileName = FString::Printf(TEXT("%s_%s_%s.json"), *GetConfig()->SummaryFilePrefix, *CachedMatchId, *CachedPlayerId.ToString(EGuidFormats::DigitsWithHyphens));
		}
		FString FilePath = FPaths::ProjectLogDir() / FileName;

		auto Document = MakeShared<FJsonObject>();
		
		for (const auto StatGroup : StatGroups)
		{
			auto SummaryData = StatGroup->GetSummary();

			if (SummaryData.IsValid())
			{
				Document->SetObjectField(StatGroup->GroupName.ToString(), SummaryData);
			}
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
		if (Owner.IsValid())
		{
			if (bCachedIsHost)
			{
				// fill in basic data
				FRHAPI_PexHostRequest HostRequest;
				HostRequest.SetMatchId(CachedMatchId);

				// add stats
				for (const auto StatGroup : StatGroups)
				{
					StatGroup->GetPEXHostSummary(HostRequest);
				}

				// let owner do actual submit, so they can fill in facet data
				Owner->SubmitPEXHostSummary(MoveTemp(HostRequest));
			}
			if (!IsRunningDedicatedServer())
			{
				// fill in basic data
				FRHAPI_PexClientRequest ClientRequest;
				ClientRequest.SetMatchId(CachedMatchId);
				ClientRequest.SetPlayerUuid(CachedPlayerId);

				// add stats
				for (const auto StatGroup : StatGroups)
				{
					StatGroup->GetPEXClientSummary(ClientRequest);
				}

				// let owner do actual submit, so they can fill in facet data
				Owner->SubmitPEXClientSummary(MoveTemp(ClientRequest));
			}
		}
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

#define SECONDS_TO_MILLISECONDS(a) (1000*(a))
#define CYCLES_TO_MILLISECONDS(a) (FPlatformTime::ToMilliseconds(a))

URH_PEXPrimaryStats::URH_PEXPrimaryStats()
{
	GroupName = TEXT("Primary");
	
	Stats.Reserve(Max);
	
	int32 Check = 0;
	Check = Stats.Emplace(TEXT("FrameTime"), ERH_PEXValueType::Max);
	check(Check == FrameTime);
	Check = Stats.Emplace(TEXT("GameThreadTime"), ERH_PEXValueType::Max);
	check(Check == GameThreadTime);
	Check = Stats.Emplace(TEXT("RenderThreadTime"), ERH_PEXValueType::Max);
	check(Check == RenderThreadTime);
	Check = Stats.Emplace(TEXT("RHIThreadTime"), ERH_PEXValueType::Max);
	check(Check == RHIThreadTime);
	Check = Stats.Emplace(TEXT("GPUTime"), ERH_PEXValueType::Max);
	check(Check == GPUTime);
	Check = Stats.Emplace(TEXT("DeltaTime"), ERH_PEXValueType::Max);
	check(Check == DeltaTime);
	Check = Stats.Emplace(TEXT("GameThreadWaitTime"), ERH_PEXValueType::Max);
	check(Check == GameThreadWaitTime);
	Check = Stats.Emplace(TEXT("FlushLoadingTime"), ERH_PEXValueType::Max);
	check(Check == FlushLoadingTime);

	Check = Stats.Emplace(TEXT("TickCount"), ERH_PEXValueType::Current);
	check(Check == TickCount);
	Check = Stats.Emplace(TEXT("DelayedTickCount"), ERH_PEXValueType::Current);
	check(Check == DelayedTickCount);
	
	Check = Stats.Emplace(TEXT("MemoryWS"), ERH_PEXValueType::Max);
	check(Check == MemoryWS);
	Check = Stats.Emplace(TEXT("MemoryVB"), ERH_PEXValueType::Max);
	check(Check == MemoryVB);
	Check = Stats.Emplace(TEXT("CPUProcess"), ERH_PEXValueType::Max);
	check(Check == CPUProcess);
	Check = Stats.Emplace(TEXT("CPUMachine"), ERH_PEXValueType::Max);
	check(Check == CPUMachine);
}

void URH_PEXPrimaryStats::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	if (Owner == nullptr)
	{
		return;
	}
	auto ParentWorld = Owner->GetPEXWorld();
	
	Stats[GameThreadTime].CaptureValue(CYCLES_TO_MILLISECONDS(GGameThreadTime));
	Stats[GameThreadWaitTime].CaptureValue(CYCLES_TO_MILLISECONDS(GGameThreadWaitTime));

	// note this is recorded in seconds, not cycles
	Stats[FlushLoadingTime].CaptureValue(SECONDS_TO_MILLISECONDS(GFlushAsyncLoadingTime));
	
	if (!IsRunningDedicatedServer())
	{
		Stats[RenderThreadTime].CaptureValue(CYCLES_TO_MILLISECONDS(GRenderThreadTime));
		Stats[RHIThreadTime].CaptureValue(CYCLES_TO_MILLISECONDS(GRHIThreadTime));
		Stats[GPUTime].CaptureValue(CYCLES_TO_MILLISECONDS(GGPUFrameTime));

		// calculate overall frametime
		Stats[FrameTime].CaptureValue(FMath::Max3(
			CYCLES_TO_MILLISECONDS(GameThreadTime),
			CYCLES_TO_MILLISECONDS(GRenderThreadTime),
			CYCLES_TO_MILLISECONDS(GRHIThreadTime)
			));
	}
	else
	{
		// on servers, we only have game thread time
		Stats[FrameTime].CaptureValue(CYCLES_TO_MILLISECONDS(GameThreadTime));
	}
	
    if (ParentWorld != nullptr && ParentWorld->GetGameViewport() != nullptr && ParentWorld->GetGameViewport()->GetStatUnitData())
    {
        FStatUnitData* pData = ParentWorld->GetGameViewport()->GetStatUnitData();
    	
    }
    else
    {
    	auto MainThreadValue = SECONDS_TO_MILLISECONDS(FApp::GetDeltaTime() - FApp::GetIdleTime());
    	Stats[FrameTime].CaptureValue(MainThreadValue);
        Stats[GameThreadTime].CaptureValue(MainThreadValue);
    }

	auto DeltaSeconds = FApp::GetDeltaTime();
    Stats[DeltaTime].CaptureValue(SECONDS_TO_MILLISECONDS(DeltaSeconds));

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

void URH_PEXPrimaryStats::CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	const auto MemoryStats = FPlatformMemory::GetStats();
	Stats[MemoryWS].CaptureValue(MemoryStats.UsedPhysical >> 20);
	Stats[MemoryVB].CaptureValue(MemoryStats.UsedVirtual >> 20);
	Stats[CPUProcess].CaptureValue(FPlatformTime::GetCPUTime().CPUTimePctRelative);

	LastCaptureTime = FDateTime::UtcNow();
}

URH_PEXNetworkStats_Base::URH_PEXNetworkStats_Base()
{
	GroupName = TEXT("BaseNetwork");
	
	Stats.Reserve(Max);
	
	int32 Check = 0;
	Check = Stats.Emplace(TEXT("ConnectionCount"), ERH_PEXValueType::Max);
	check(Check == ConnectionCount);
	Check = Stats.Emplace(TEXT("Ping"), ERH_PEXValueType::Max);
	check(Check == Ping);
	Check = Stats.Emplace(TEXT("InPackets"), ERH_PEXValueType::Max);
	check(Check == InPackets);
	Check = Stats.Emplace(TEXT("OutPackets"), ERH_PEXValueType::Max);
	check(Check == OutPackets);
	Check = Stats.Emplace(TEXT("TotalPackets"), ERH_PEXValueType::Max);
	check(Check == TotalPackets);
	Check = Stats.Emplace(TEXT("InPacketsLost"), ERH_PEXValueType::Max);
	check(Check == InPacketsLost);
	Check = Stats.Emplace(TEXT("OutPacketsLost"), ERH_PEXValueType::Max);
	check(Check == OutPacketsLost);
	Check = Stats.Emplace(TEXT("TotalPacketsLost"), ERH_PEXValueType::Max);
	check(Check == TotalPacketsLost);
	Check = Stats.Emplace(TEXT("InPacketLossPct"), ERH_PEXValueType::Max);
	check(Check == InPacketLossPct);
	Check = Stats.Emplace(TEXT("OutPacketLossPct"), ERH_PEXValueType::Max);
	check(Check == OutPacketLossPct);
	Check = Stats.Emplace(TEXT("TotalPacketLossPct"), ERH_PEXValueType::Max);
	check(Check == TotalPacketLossPct);
}


void URH_PEXNetworkStats_Global::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
}

void URH_PEXNetworkStats_Global::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	// network
	const auto ValueNumConnections  = PerfCountersGet(TEXT("NumConnections"), 0);
	const auto ValueAvgPing = PerfCountersGet(TEXT("AvgPing"), 0.f);
	const auto ValueInPackets = PerfCountersGet(TEXT("InPackets"), 0);
	const auto ValueOutPackets = PerfCountersGet(TEXT("OutPackets"), 0);
	const auto ValueInPacketsLost = PerfCountersGet(TEXT("InPacketsLost"), 0);
	const auto ValueOutPacketsLost = PerfCountersGet(TEXT("OutPacketsLost"), 0);

	// this assumes that the stat interval for the network system is 1.0 seconds, which is the default
		
	Stats[ConnectionCount].CaptureValue(ValueNumConnections);
	Stats[Ping].CaptureValue(ValueAvgPing);
	Stats[InPackets].CaptureValue(ValueInPackets);
	Stats[OutPackets].CaptureValue(ValueOutPackets);
	Stats[TotalPackets].CaptureValue(ValueInPackets + ValueOutPackets);
	
	Stats[InPacketsLost].CaptureValue(ValueInPacketsLost);
	Stats[OutPacketsLost].CaptureValue(ValueOutPacketsLost);
	Stats[TotalPacketsLost].CaptureValue(ValueInPacketsLost + ValueOutPacketsLost);

	Stats[InPacketLossPct].CaptureValue(((float)(ValueInPacketsLost)) / FMath::Max<float>(1.0f, (float)(ValueInPackets + ValueInPacketsLost)));
	Stats[OutPacketLossPct].CaptureValue(((float)(ValueOutPacketsLost)) / FMath::Max<float>(1.0f, (float)(ValueOutPackets + ValueOutPacketsLost)));
	Stats[TotalPacketLossPct].CaptureValue(((float)(ValueInPacketsLost + ValueOutPacketsLost)) / FMath::Max<float>(1.0f, (float)(ValueInPackets + ValueInPacketsLost + ValueOutPackets + ValueOutPacketsLost)));
}

void URH_PEXNetworkStats_Connection::InitForConnection(const class UNetConnection* InConnection)
{
	Connection = InConnection;
}


void URH_PEXNetworkStats_Connection::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{

}
void URH_PEXNetworkStats_Connection::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	if (ensure(Connection.IsValid()))
	{
		Stats[ConnectionCount].CaptureValue(1.0 + Connection->Children.Num());

		// use the ping value displayed and sent via the playerstate
		if (Connection->PlayerController != nullptr && Connection->PlayerController->PlayerState != nullptr)
		{
			float ConnPing = Connection->PlayerController->PlayerState->ExactPing;
			Stats[Ping].CaptureValue(ConnPing);
		}

		// this assumes that the stat interval for the network system is 1.0 seconds, which is the default
		// if this is not the case, then implementing the capture as a per-interval stat is required, with the capture interval matching the stat interval
		check (Connection->StatPeriod == 1.0f);
		
		Stats[InPackets].CaptureValue(Connection->InPackets);
		Stats[OutPackets].CaptureValue(Connection->OutPackets);
		Stats[TotalPackets].CaptureValue(Connection->InPackets + Connection->OutPackets);
		
		Stats[InPacketsLost].CaptureValue(Connection->InPacketsLost);
		Stats[OutPacketsLost].CaptureValue(Connection->OutPacketsLost);
		Stats[TotalPacketsLost].CaptureValue(Connection->InPacketsLost + Connection->OutPacketsLost);

		Stats[InPacketLossPct].CaptureValue(((float)(Connection->InPacketsLost)) / FMath::Max<float>(1.0f, (float)(Connection->InPackets + Connection->InPacketsLost)));
		Stats[OutPacketLossPct].CaptureValue(((float)(Connection->OutPacketsLost)) / FMath::Max<float>(1.0f, (float)(Connection->OutPackets + Connection->OutPacketsLost)));
		Stats[TotalPacketLossPct].CaptureValue(((float)(Connection->InPacketsLost + Connection->OutPacketsLost)) / FMath::Max<float>(1.0f, (float)(Connection->InPackets + Connection->InPacketsLost + Connection->OutPackets + Connection->OutPacketsLost)));
	}
}

URH_PEXNetworkStats::URH_PEXNetworkStats()
{
	GroupName = TEXT("NetworkStats");
	GlobalNetworkStats = CreateDefaultSubobject<URH_PEXNetworkStats_Global>(TEXT("GlobalNetworkStats"));
	ServerNetworkStats = CreateDefaultSubobject<URH_PEXNetworkStats_Connection>(TEXT("ServerNetworkStats"));
}

void URH_PEXNetworkStats::GetOrCreatePlayerNetworkStats(const UNetConnection* Connection, URH_PEXNetworkStats_Connection*& OutPlayerNetworkStats)
{
	OutPlayerNetworkStats = nullptr;
	
	const IRH_IpConnectionInterface* RHIpConnection = Cast<const IRH_IpConnectionInterface>(Connection);
	if (RHIpConnection != nullptr && RHIpConnection->GetRHPlayerUuid().IsValid())
	{
		auto Existing = PlayerNetworkStats.Find(RHIpConnection->GetRHPlayerUuid());
		if (Existing != nullptr)
		{
			OutPlayerNetworkStats = *Existing;
		}
		else
		{
			OutPlayerNetworkStats = NewObject<URH_PEXNetworkStats_Connection>(this);
			PlayerNetworkStats.Add(RHIpConnection->GetRHPlayerUuid(), OutPlayerNetworkStats);
		}
	}
}
	
void URH_PEXNetworkStats::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	Super::CapturePerFrameStats(Owner);

	if (GlobalNetworkStats)
	{
		GlobalNetworkStats->CapturePerFrameStats(Owner);
	}
	
	const auto World = Owner->GetPEXWorld();
	if (World != nullptr && World->GetNetDriver() != nullptr)
	{
		const auto NetDriver = World->GetNetDriver();
		
		// trace server connection to all clients
		for (auto Connection : NetDriver->ClientConnections)
		{
			URH_PEXNetworkStats_Connection* PlayerTracker = nullptr;
			GetOrCreatePlayerNetworkStats(Connection, PlayerTracker);
			if (PlayerTracker != nullptr)
			{
				// make sure the tracker is initialized for this connection
				PlayerTracker->InitForConnection(Connection);
				
				PlayerTracker->CapturePerFrameStats(Owner);
			}
		}

		// trace client connection to server
		if (NetDriver->ServerConnection != nullptr)
		{
			// make sure the tracker is initialized for this connection
			ServerNetworkStats->InitForConnection(NetDriver->ServerConnection);
			
			ServerNetworkStats->CapturePerFrameStats(Owner);
		}
	}
}
void URH_PEXNetworkStats::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	Super::CapturePerSecondStats(Owner);

	if (GlobalNetworkStats)
	{
		GlobalNetworkStats->CapturePerSecondStats(Owner);
	}
	
	const auto World = Owner->GetPEXWorld();
	if (World != nullptr && World->GetNetDriver() != nullptr)
	{
		const auto NetDriver = World->GetNetDriver();

		// trace server connection to all clients
		for (auto Connection : NetDriver->ClientConnections)
		{
			URH_PEXNetworkStats_Connection* PlayerTracker = nullptr;
			GetOrCreatePlayerNetworkStats(Connection, PlayerTracker);
			if (PlayerTracker != nullptr)
			{
				// make sure the tracker is initialized for this connection
				PlayerTracker->InitForConnection(Connection);
				
				PlayerTracker->CapturePerSecondStats(Owner);
			}
		}

		// trace client connection to server
		if (NetDriver->ServerConnection != nullptr)
		{
			// make sure the tracker is initialized for this connection
			ServerNetworkStats->InitForConnection(NetDriver->ServerConnection);
			
			ServerNetworkStats->CapturePerSecondStats(Owner);
		}
	}
}

void URH_PEXNetworkStats::CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	Super::CapturePerIntervalStats(Owner);

	if (GlobalNetworkStats)
	{
		GlobalNetworkStats->CapturePerIntervalStats(Owner);
	}
	
	const auto World = Owner->GetPEXWorld();
	if (World != nullptr && World->GetNetDriver() != nullptr)
	{
		const auto NetDriver = World->GetNetDriver();

		// trace server connection to all clients
		for (auto Connection : NetDriver->ClientConnections)
		{
			URH_PEXNetworkStats_Connection* PlayerTracker = nullptr;
			GetOrCreatePlayerNetworkStats(Connection, PlayerTracker);
			if (PlayerTracker != nullptr)
			{
				// make sure the tracker is initialized for this connection
				PlayerTracker->InitForConnection(Connection);
				
				PlayerTracker->CapturePerIntervalStats(Owner);
			}
		}

		// trace client connection to server
		if (NetDriver->ServerConnection != nullptr)
		{
			// make sure the tracker is initialized for this connection
			ServerNetworkStats->InitForConnection(NetDriver->ServerConnection);
			
			ServerNetworkStats->CapturePerIntervalStats(Owner);
		}
	}
}

URH_PEXGameStats::URH_PEXGameStats()
{
	GroupName = TEXT("Game");
	
	Stats.Reserve(Max);
	
	int32 Check = 0;
	Check = Stats.Emplace(TEXT("PlayerControllerCount"), ERH_PEXValueType::Max);
	check(Check == PlayerControllerCount);
	Check = Stats.Emplace(TEXT("AIControllerCount"), ERH_PEXValueType::Max);
	check(Check == AIControllerCount);
	Check = Stats.Emplace(TEXT("PawnCount"), ERH_PEXValueType::Max);
	check(Check == PawnCount);
}

void URH_PEXGameStats::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
}

void URH_PEXGameStats::CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
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


