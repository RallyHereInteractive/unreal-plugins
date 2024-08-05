
#include "RH_PlayerExperienceCollector.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"
#include "EngineGlobals.h"
#include "PerfCountersModule.h"
#include "RH_Common.h"
#include "Misc/FileHelper.h"
#include "Engine/GameInstance.h"
#include "Engine/GameViewportClient.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayer.h"
#include "RH_RemoteFileSubsystem.h"
#include "RH_SessionData.h"
#include "HAL/FileManager.h"
#include "Net/NetPing.h"
#include "Net/PerfCountersHelpers.h"
#include "Misc/App.h"
#include "GameFramework/Pawn.h"
#include "RenderTimer.h"
#include "GameFramework/GameModeBase.h"
#include "Serialization/AsyncPackageLoader.h"

FString FRH_StatAccumulator::SummaryFields::Name = TEXT("Name");
FString FRH_StatAccumulator::SummaryFields::Last = TEXT("Last");
FString FRH_StatAccumulator::SummaryFields::Min = TEXT("Min");
FString FRH_StatAccumulator::SummaryFields::Max = TEXT("Max");
FString FRH_StatAccumulator::SummaryFields::Avg = TEXT("Avg");
FString FRH_StatAccumulator::SummaryFields::Sum = TEXT("Sum");
FString FRH_StatAccumulator::SummaryFields::StdDev = TEXT("Standard Deviation");
FString FRH_StatAccumulator::SummaryFields::Count = TEXT("Count");

FString URH_PEXStatGroup::SummaryFields::Name = TEXT("Name");
FString URH_PEXStatGroup::SummaryFields::Stats = TEXT("Stats");
FString URH_PEXStatGroup::SummaryFields::Counters = TEXT("Counters");
FString URH_PEXStatGroup::SummaryFields::Children = TEXT("Children");

URH_PEXCollectorConfig::URH_PEXCollectorConfig()
{
	bEnabled = true;
		
	bWriteSummaryFile = false;
	bUploadSummaryToPEXAPI = true;
	bUploadSummaryToFileAPI = false;

	bWriteTimelineFile = false;
	bUploadTimelineToFileAPI = false;
		
	StatInterval = 1;
	TimelineFilePrefix = TEXT("PEX_Timeline");
	SummaryFilePrefix = TEXT("PEX_Summary");

	StatGroupsToCapture.Add(URH_PEXPrimaryStats::StaticClass());
	StatGroupsToCapture.Add(URH_PEXNetworkStats::StaticClass());
	StatGroupsToCapture.Add(URH_PEXGameStats::StaticClass());
}

URH_PEXStatGroupsTopLevel::URH_PEXStatGroupsTopLevel()
{
	GroupName = TEXT("TopLevel");
}

void URH_PEXStatGroupsTopLevel::Init(const URH_PEXCollectorConfig* InConfig)
{
	// instantiate the list of stat groups to capture from the configured list
	for (auto StatGroupClass : InConfig->StatGroupsToCapture)
	{
		auto StatGroup = NewObject<URH_PEXStatGroup>(this, StatGroupClass);
		if (StatGroup != nullptr)
		{
			Children.Add(StatGroup);
		}
	}

	// super will initialize the children
	Super::Init(InConfig);
}

URH_PEXCollector::URH_PEXCollector()
	: CachedConfig(nullptr)
	, bCachedIsHost(false)
	, bHasBeenInitialized(false)
	, bHasBeenClosed(false)
	, bHasWrittenSummary(false)
	, TimeTracker(0.0f)
	, bFirstInterval(false)
	, TimelineFileCSV(nullptr)
{
	TopLevelStatGroup = CreateDefaultSubobject<URH_PEXStatGroupsTopLevel>(TEXT("TopLevelStats"));
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
	// automatically determine which config class to use
	const URH_PEXCollectorConfig* Config = GetDefault<URH_PEXCollectorConfig_Client>();
	if (IsRunningDedicatedServer())
	{
		Config = GetDefault<URH_PEXCollectorConfig_DedicatedServer>();
	}
	else if (InOwner != nullptr && InOwner->GetPEXIsHost())
	{
		Config = GetDefault<URH_PEXCollectorConfig_Host>();
	}

	return InitWithConfig(InOwner, Config);
}

bool URH_PEXCollector::InitWithConfig(IRH_PEXOwnerInterface* InOwner, const URH_PEXCollectorConfig* InConfig)
{
	if (bHasBeenInitialized)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector has already been initialized"));
		return false;
	}

	// cache off the owner
	Owner = InOwner;

	if (!Owner.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector owner is invalid (may not implement IRH_PEXOwnerInterface)"));
		return false;
	}

	// cache off the config
	CachedConfig = InConfig;

	if (CachedConfig == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Player Experience Collector config is invalid"));
		return false;
	}
	
	// cache off values from the owner
	CachedMatchId = Owner->GetPEXMatchId();
	CachedRemoteFileDirectory = Owner->GetPEXRemoteFileDirectory();
	CachedPlayerId = Owner->GetPEXPlayerId();
	bCachedIsHost = Owner->GetPEXIsHost();
	
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

	// register for end frame delegate so we can record per frame values
	FCoreDelegates::OnEndFrame.AddUObject(this, &URH_PEXCollector::OnEndFrame);

	// initialize the top level stat group
	TopLevelStatGroup->Init(GetConfig());
	
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
    		FString CSVHeaderString = TopLevelStatGroup->GetTimelineCSVHeader();
    		
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
	else if (TopLevelStatGroup == nullptr)
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
	TopLevelStatGroup->CapturePerFrameStats(OwnerInterface);

	if (bIsSecond)
	{
		// collect any stats that need to be tracked per second (ex: longest frametime)
		TopLevelStatGroup->CapturePerSecondStats(OwnerInterface);
	}
	
    if (bIsInterval)
    {
    	// check if this was a partial interval
    	const bool bPartialInterval = bFirstInterval;
    	bFirstInterval = false;
    	
    	// collect any stats that need to be tracked once per second (ex: pawn count)
    	TopLevelStatGroup->CapturePerIntervalStats(OwnerInterface);
    	
		if (GetConfig()->bWriteTimelineFile && TimelineFileCSV != nullptr)
		{
			FString CSVStatsString = TopLevelStatGroup->GetTimelineCSVValues();
			
			if (CSVStatsString.Len() > 0)
			{
				TimelineFileCSV->Logf(TEXT("%s"), *CSVStatsString);
			}
		}
    	
    	// update the summary with the data from the interval, but only if we are not in a partial interval which could affect min, max, etc
    	if (GetConfig()->WantsSummary() && !bPartialInterval)
    	{
    		TopLevelStatGroup->UpdateSummary();
    	}

    	// reset the capture state so we can start accumulating a new interval of data
    	TopLevelStatGroup->ResetCapture();
    }
}

TSharedRef<FJsonObject> URH_PEXCollector::GetSummaryJson() const
{
	auto Document = TopLevelStatGroup->GetSummary();

	return Document;
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
		SummaryFilePath = FPaths::ProjectLogDir() / FileName;

		auto Document = GetSummaryJson();

		// serialize to string
		FString DocumentString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&DocumentString);
		if (FJsonSerializer::Serialize(Document, Writer))
		{
			if (FFileHelper::SaveStringToFile(DocumentString, *SummaryFilePath))
			{
				// upload the file if requested
				if (GetConfig()->bUploadSummaryToFileAPI)
				{
					UploadFile(SummaryFilePath, FPaths::GetCleanFilename(SummaryFilePath));
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
				TopLevelStatGroup->GetPEXHostSummary(HostRequest);

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
				TopLevelStatGroup->GetPEXClientSummary(ClientRequest);

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
					RHGI->GetRemoteFileSubsystem()->UploadFromFile(UploadDirectory, RemoteFileName, FilePath, true);
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
	Super::CapturePerFrameStats(Owner);
	
	if (Owner == nullptr)
	{
		return;
	}
	
	auto ParentWorld = Owner->GetPEXWorld();
	
	Stats[GameThreadTime].CaptureValue(CYCLES_TO_MILLISECONDS(GGameThreadTime));
#if RH_FROM_ENGINE_VERSION(5, 3)
	Stats[GameThreadWaitTime].CaptureValue(CYCLES_TO_MILLISECONDS(GGameThreadWaitTime));
#endif

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
	Super::CapturePerIntervalStats(Owner);
	
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

void URH_PEXNetworkStats_Global::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	Super::CapturePerSecondStats(Owner);
	
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

	Stats[InPacketLossPct].CaptureValue(((ValueInPacketsLost * 100.f)) / FMath::Max<float>(1.0f, (float)(ValueInPackets + ValueInPacketsLost)));
	Stats[OutPacketLossPct].CaptureValue(((ValueOutPacketsLost * 100.f)) / FMath::Max<float>(1.0f, (float)(ValueOutPackets + ValueOutPacketsLost)));
	Stats[TotalPacketLossPct].CaptureValue(((ValueInPacketsLost + ValueOutPacketsLost) * 100.f) / FMath::Max<float>(1.0f, (float)(ValueInPackets + ValueInPacketsLost + ValueOutPackets + ValueOutPacketsLost)));
}

void URH_PEXNetworkStats_Connection::InitForConnection(const class UNetConnection* InConnection)
{
	Connection = InConnection;
}

void URH_PEXNetworkStats_Connection::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	Super::CapturePerSecondStats(Owner);
	
	if (Connection.IsValid())
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

		Stats[InPacketLossPct].CaptureValue(((Connection->InPacketsLost * 100.f)) / FMath::Max<float>(1.0f, (float)(Connection->InPackets + Connection->InPacketsLost)));
		Stats[OutPacketLossPct].CaptureValue(((Connection->OutPacketsLost * 100.f)) / FMath::Max<float>(1.0f, (float)(Connection->OutPackets + Connection->OutPacketsLost)));
		Stats[TotalPacketLossPct].CaptureValue(((Connection->InPacketsLost + Connection->OutPacketsLost) * 100.f) / FMath::Max<float>(1.0f, (float)(Connection->InPackets + Connection->InPacketsLost + Connection->OutPackets + Connection->OutPacketsLost)));
	}
}

void URH_PEXNetworkStats_Host::EnsureConnectionTrackersExist(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	const auto World = Owner->GetPEXWorld();
	if (World != nullptr && World->GetNetDriver() != nullptr)
	{
		const auto NetDriver = World->GetNetDriver();
		
		// trace connection to all clients
		for (auto Connection : NetDriver->ClientConnections)
		{
			URH_PEXNetworkStats_Connection* PlayerTracker = nullptr;
			GetOrCreatePlayerNetworkStats(Connection, PlayerTracker);
			if (PlayerTracker != nullptr)
			{
				// make sure the tracker is initialized for this connection
				PlayerTracker->InitForConnection(Connection);
			}
		}
	}
}

void URH_PEXNetworkStats_Host::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	EnsureConnectionTrackersExist(Owner);
	Super::CapturePerFrameStats(Owner);
}

void URH_PEXNetworkStats_Host::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	EnsureConnectionTrackersExist(Owner);
	Super::CapturePerSecondStats(Owner);
}

void URH_PEXNetworkStats_Host::CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	EnsureConnectionTrackersExist(Owner);
	Super::CapturePerIntervalStats(Owner);
}

void URH_PEXNetworkStats_Host::GetOrCreatePlayerNetworkStats(const UNetConnection* Connection, URH_PEXNetworkStats_Connection*& OutPlayerNetworkStats)
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
			OutPlayerNetworkStats->bDynamic = true;
			OutPlayerNetworkStats->GroupName = FName(FString::Printf(TEXT("Player_%s"), *RHIpConnection->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
			PlayerNetworkStats.Add(RHIpConnection->GetRHPlayerUuid(), OutPlayerNetworkStats);
			Children.Add(OutPlayerNetworkStats);
		}
	}
}


void URH_PEXNetworkStats_Client::EnsureConnectionTrackersExist(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	const auto World = Owner->GetPEXWorld();
	if (World != nullptr && World->GetNetDriver() != nullptr)
	{
		const auto NetDriver = World->GetNetDriver();

		// trace client connection to host
		if (NetDriver->ServerConnection != nullptr)
		{
			// make sure the tracker is initialized for this connection
			InitForConnection(NetDriver->ServerConnection);
		}
	}
}

void URH_PEXNetworkStats_Client::CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	EnsureConnectionTrackersExist(Owner);
	Super::CapturePerFrameStats(Owner);
}

void URH_PEXNetworkStats_Client::CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	EnsureConnectionTrackersExist(Owner);
	Super::CapturePerSecondStats(Owner);
}

void URH_PEXNetworkStats_Client::CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	EnsureConnectionTrackersExist(Owner);
	Super::CapturePerIntervalStats(Owner);
}

URH_PEXNetworkStats::URH_PEXNetworkStats()
{
	GroupName = TEXT("NetworkStats");

	GlobalNetworkStats = CreateDefaultSubobject<URH_PEXNetworkStats_Global>(TEXT("GlobalNetworkStats"));
	Children.Add(GlobalNetworkStats);

	ClientNetworkStats = CreateDefaultSubobject<URH_PEXNetworkStats_Client>(TEXT("ClientNetworkStats"));
	ClientNetworkStats->bNotForTimeline = true; // exclude from timeline to prevent collisions
	Children.Add(ClientNetworkStats);
	
	HostNetworkStats = CreateDefaultSubobject<URH_PEXNetworkStats_Host>(TEXT("HostNetworkStats"));
	HostNetworkStats->bNotForTimeline = true; // exclude from timeline to prevent collisions
	Children.Add(HostNetworkStats);
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

void URH_PEXGameStats::CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
{
	Super::CapturePerIntervalStats(Owner);
	
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

///////////////////////////////////////////////////////////////////////////////////////////////////////

void URH_TestPEXOwner::SubmitPEXHostSummary(FRHAPI_PexHostRequest&& Report) const
{
	// match id should have been set before calling this function!
	check (Report.MatchId.Len() > 0);
	
	Report.SetServerId(FPlatformProcess::ComputerName());
	
	const auto HostUuid = GetPEXPlayerId();
	if (HostUuid.IsValid())
	{
		Report.SetHostPlayerUuid(HostUuid);
	}
			
	Report.SetVersion(URH_JoinedSession::GetClientVersionForSession());

	auto World = GetWorld();
	if (World != nullptr)
	{
		Report.SetMapName(World->GetMapName());
		auto GameMode = World->GetAuthGameMode();
		if (GameMode != nullptr)
		{
			Report.SetGameMode(GameMode->GetClass()->GetPathName());
		}

		// only send the report if configured to do so
		if (bSendReportsToAPI)
		{
			auto GameInstance = World->GetGameInstance();
			if (GameInstance != nullptr)
			{
				auto RHGameInstance = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
				if (RHGameInstance != nullptr)
				{
					
					typedef RallyHereAPI::Traits_CreatePexHost BaseType;
					BaseType::Request Request;
					Request.AuthContext = RHGameInstance->GetAuthContext();
					Request.PexHostRequest = Report;

					auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
						BaseType::Delegate(),
						FRH_GenericSuccessWithErrorDelegate::CreateLambda([](bool bSucess, const FRH_ErrorInfo& ErrorInfo)
							{
								if (!bSucess)
								{
									if (ErrorInfo.bIsRHCommonError)
									{
										UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX host summary.  Error Code: %s"), *ErrorInfo.RHCommonError.ErrorCode);
									}
									else
									{
										UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX host summary: %s"), *ErrorInfo.ResponseContent);
									}
								}
								else
								{
									UE_LOG(LogRallyHereIntegration, Error, TEXT("Submitted PEX host summary successfully"));
								}
							}),
						GetDefault<URH_IntegrationSettings>()->PexReportPriority
					);
			
					Helper->Start(RH_APIs::GetAPIs().GetPex(), Request);
				}
			}
		}
	}
	
	HostReport = Report;
}
void URH_TestPEXOwner::SubmitPEXClientSummary(FRHAPI_PexClientRequest&& Report) const
{
	// match id should have been set before calling this function!
	check (Report.MatchId.Len() > 0);
	
	Report.SetVersion(URH_JoinedSession::GetClientVersionForSession());

	auto World = GetWorld();
	if (World != nullptr)
	{
		Report.SetMapName(World->GetMapName());
		auto GameMode = World->GetAuthGameMode();
		if (GameMode != nullptr)
		{
			Report.SetGameMode(GameMode->GetClass()->GetPathName());
		}

		if (bSendReportsToAPI)
		{
			auto GameInstance = World->GetGameInstance();
			if (GameInstance != nullptr)
			{
				auto RHGameInstance = Cast<URH_GameInstanceSubsystem>(GameInstance);
				if (RHGameInstance != nullptr)
				{
					typedef RallyHereAPI::Traits_CreatePexPlayer BaseType;
					BaseType::Request Request;
					Request.AuthContext = RHGameInstance->GetAuthContext();
					Request.PexClientRequest = Report;

					auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
						BaseType::Delegate(),
						FRH_GenericSuccessWithErrorDelegate::CreateLambda([](bool bSucess, const FRH_ErrorInfo& ErrorInfo)
							{
								if (!bSucess)
								{
									if (ErrorInfo.bIsRHCommonError)
									{
										UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX player summary.  Error Code: %s"), *ErrorInfo.RHCommonError.ErrorCode);
									}
									else
									{
										UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX player summary: %s"), *ErrorInfo.ResponseContent);
									}
								}
								else
								{
									UE_LOG(LogRallyHereIntegration, Error, TEXT("Submitted PEX player summary successfully"));
								}
							}),
						GetDefault<URH_IntegrationSettings>()->PexReportPriority
					);
				
					Helper->Start(RH_APIs::GetAPIs().GetPex(), Request);
				}
			}
		}
	}

	ClientReport = Report;
}

void URH_TestPEXOwner::ValidateReports(FAutomationTestBase* Test, const URH_PEXCollectorConfig* Config) const
{
	// if reports are disabled, verify none were generated
	if (!Config->bUploadSummaryToPEXAPI)
	{
		Test->TestTrue(TEXT("HostReport is empty when reports are disabled"), !HostReport.IsSet());
		Test->TestTrue(TEXT("ClientReport is empty when reports are disabled"), !ClientReport.IsSet());
		return;
	}
	
	// validate the reports
	if (HostReport.IsSet())
	{
		Test->TestTrue(TEXT("Host Report has a match id"), HostReport->GetMatchId().Len() > 0);
	}
	else if (GetPEXIsHost())
	{
		Test->AddError(TEXT("Was expecting a host report, but none was generated"));
	}

	if (ClientReport.IsSet())
	{
		Test->TestTrue(TEXT("Client Report has a match id"), HostReport->GetMatchId().Len() > 0);
	}
	else if (!IsRunningDedicatedServer())
	{
		Test->AddError(TEXT("Was expecting a client report, but none was generated"));
	}
}

#if WITH_DEV_AUTOMATION_TESTS

#include "RH_AutomationTests.h"
#include "Misc/AutomationTest.h"
#include "TimerManager.h"

BEGIN_DEFINE_SPEC(FRH_PEXCollectorTest, "RHAutomation.PEXCollector", EAutomationTestFlags::ClientContext | EAutomationTestFlags::ServerContext | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::MediumPriority)
END_DEFINE_SPEC(FRH_PEXCollectorTest)

void FRH_PEXCollectorTest::Define()
{
    LatentIt(TEXT("should run the PEX collector for 10 seconds"), [this](const FDoneDelegate& Done)
    {
        // Use the utility function to get the game world
        UWorld* World = RHAutomationTestUtils::GetWorld(this);
        TestNotNull(TEXT("World should not be null"), World);

        // Create a test owner implementing the IRH_PEXOwnerInterface
        TWeakObjectPtr<URH_TestPEXOwner> TestOwner = NewObject<URH_TestPEXOwner>();
        TestOwner->AddToRoot();

        // Instantiate the PEX collector
        TWeakObjectPtr<URH_PEXCollector> PEXCollector = NewObject<URH_PEXCollector>();
        PEXCollector->AddToRoot();

        // Initialize the collector with the test owner and test config
        bool bInitialized = PEXCollector->InitWithConfig(TestOwner.Get(), GetDefault<URH_PEXCollectorConfig_Test>());
        TestTrue(TEXT("PEXCollector should initialize successfully"), bInitialized);

        // Run the collector for 10 seconds
        FTimerHandle TimerHandle;
        World->GetTimerManager().SetTimer(TimerHandle, [this, PEXCollector, TestOwner, Done]()
        {
            if (PEXCollector.IsValid())
            {
                PEXCollector->Close();
                PEXCollector->RemoveFromRoot();

            	if (PEXCollector->GetConfig()->WantsTimeline() && PEXCollector->GetConfig()->bWriteTimelineFile)
            	{
					TestTrue(TEXT("Timeline File Exists"), FPaths::FileExists(PEXCollector->GetTimelineFilePath()));
				}
				if (PEXCollector->GetConfig()->WantsSummary() && PEXCollector->GetConfig()->bWriteSummaryFile)
				{
					TestTrue(TEXT("Summary File Exists"), FPaths::FileExists(PEXCollector->GetSummaryFilePath()));
				}
            }
            if (TestOwner.IsValid())
            {
                TestOwner->RemoveFromRoot();
            	
            	TestOwner->ValidateReports(this, PEXCollector->GetConfig());
            }
        	
            Done.Execute();
        }, 10.0f, false);
    });

	LatentIt(TEXT("should run the PEX collector for 10 seconds, and inject game thread hitches that are detected as delayed ticks"), [this](const FDoneDelegate& Done)
	{
		// Use the utility function to get the game world
		UWorld* World = RHAutomationTestUtils::GetWorld(this);
		TestNotNull(TEXT("World should not be null"), World);

		// Create a test owner implementing the IRH_PEXOwnerInterface
		TWeakObjectPtr<URH_TestPEXOwner> TestOwner = NewObject<URH_TestPEXOwner>();
		TestOwner->AddToRoot();

		// Instantiate the PEX collector
		TWeakObjectPtr<URH_PEXCollector> PEXCollector = NewObject<URH_PEXCollector>();
		PEXCollector->AddToRoot();

		// Initialize the collector with the test owner and test config
		bool bInitialized = PEXCollector->InitWithConfig(TestOwner.Get(), GetDefault<URH_PEXCollectorConfig_Test>());
		TestTrue(TEXT("PEXCollector should initialize successfully"), bInitialized);

		// Inject a hitch into the game thread.  Every 0.5 seconds, sleep for 0.15 seconds
		FTimerHandle InjectionTimerHandle;
		World->GetTimerManager().SetTimer(InjectionTimerHandle, []()
		{
			FPlatformProcess::Sleep(0.15f);
		}
		, 0.5f, true);

		TestTrue(TEXT("Injection Timer should be valid"), InjectionTimerHandle.IsValid() );
		
		// Run the collector for 10 seconds
		FTimerHandle TimerHandle;
		World->GetTimerManager().SetTimer(TimerHandle, [this, InjectionTimerHandle, PEXCollector, TestOwner, Done]()
		{
			// stop the injection timer
			auto World = RHAutomationTestUtils::GetWorld(this);
			auto InjectionTimerHandleCopy = InjectionTimerHandle;
			World->GetTimerManager().ClearTimer(InjectionTimerHandleCopy);
			
			if (PEXCollector.IsValid())
			{
				PEXCollector->Close();
				PEXCollector->RemoveFromRoot();

				if (PEXCollector->GetConfig()->WantsTimeline() && PEXCollector->GetConfig()->bWriteTimelineFile)
				{
					TestTrue(TEXT("Timeline File Exists"), FPaths::FileExists(PEXCollector->GetTimelineFilePath()));
				}
				if (PEXCollector->GetConfig()->WantsSummary() && PEXCollector->GetConfig()->bWriteSummaryFile)
				{
					TestTrue(TEXT("Summary File Exists"), FPaths::FileExists(PEXCollector->GetSummaryFilePath()));
				}

				if (PEXCollector->GetConfig()->WantsSummary())
				{
					const auto ReportJson = PEXCollector->GetSummaryJson();
					const TSharedPtr<FJsonObject>* TopLevelChildren = nullptr;
					ReportJson->TryGetObjectField(URH_PEXStatGroup::SummaryFields::Children, TopLevelChildren);
					TestNotNull(TEXT("TopLevelChildren should be non-null"), TopLevelChildren);
					TestValid(TEXT("TopLevelChildren should be valid"), TopLevelChildren ? *TopLevelChildren : nullptr);
					
					if (TopLevelChildren != nullptr && TopLevelChildren->IsValid())
					{
						const auto DefaultPrimaryStats = GetDefault<URH_PEXPrimaryStats>();
						const TSharedPtr<FJsonObject>* PrimaryStats = nullptr;
						(*TopLevelChildren)->TryGetObjectField(DefaultPrimaryStats->GroupName.ToString(), PrimaryStats);
						TestNotNull(TEXT("PrimaryStats should be non-null"), PrimaryStats);
						TestValid(TEXT("PrimaryStats should be valid"), PrimaryStats ? *PrimaryStats : nullptr);

						if (PrimaryStats != nullptr && PrimaryStats->IsValid())
						{
							const TSharedPtr<FJsonObject>* Stats = nullptr;
							(*PrimaryStats)->TryGetObjectField(URH_PEXPrimaryStats::SummaryFields::Stats, Stats);
							TestNotNull(TEXT("Stats should be non-null"), Stats);
							TestValid(TEXT("Stats should be valid"), Stats ? *Stats : nullptr);

							if (Stats != nullptr && Stats->IsValid())
							{
								const TSharedPtr<FJsonObject>* DelayedTickCount = nullptr;
								(*Stats)->TryGetObjectField(DefaultPrimaryStats->Stats[URH_PEXPrimaryStats::DelayedTickCount].Name.ToString(), DelayedTickCount);
								TestNotNull(TEXT("DelayedTickCount should be non-null"), DelayedTickCount);
								TestValid(TEXT("DelayedTickCount should be valid"), DelayedTickCount ? *DelayedTickCount : nullptr);
							
								if (DelayedTickCount != nullptr && (*DelayedTickCount).IsValid())
								{
									const auto DelayedTickCountMax = (*DelayedTickCount)->GetNumberField(TEXT("Max"));
									TestNotEqual(TEXT("DelayedTickCount should be non-zero"), DelayedTickCountMax, 0.0);
									AddInfo(FString::Printf(TEXT("DelayedTickCount Max: %0.f"), DelayedTickCountMax));
								}
							}
						}
					}
				}
				
			}
			if (TestOwner.IsValid())
			{
				TestOwner->RemoveFromRoot();
			}

			if (PEXCollector.IsValid() && TestOwner.IsValid())
			{
				// validate the reports
				TestOwner->ValidateReports(this, PEXCollector->GetConfig());
			}
        	
			Done.Execute();
		}, 10.0f, false);
	});
}

#endif // WITH_DEV_AUTOMATION_TESTS


