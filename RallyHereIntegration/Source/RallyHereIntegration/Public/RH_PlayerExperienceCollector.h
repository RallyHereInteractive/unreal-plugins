// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Engine/GameEngine.h"
#include "UObject/WeakInterfacePtr.h"
#include "RH_Common.h"

#include "RH_PlayerExperienceCollector.generated.h"

/** @defgroup PlayerExperience RallyHere PlayerExperience
 *  @{
 */

UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_PEXCollectorConfig : public UObject
{
	GENERATED_BODY()
public:
	URH_PEXCollectorConfig()
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
	}

	/** Enable tracking of PEX data */
	UPROPERTY(Config)
	bool bEnabled;

	/** Whether to write summary data to file */
	UPROPERTY(Config)
	bool bWriteSummaryFile;

	/** Whether to send summary data to the PEX API */
	UPROPERTY(Config)
	bool bUploadSummaryToPEXAPI;

	/** Whether to send summary data to the File API (Requires bWriteSummaryFile) */
	UPROPERTY(Config, meta=(EditCondition=bWriteSummaryFile))
	bool bUploadSummaryToFileAPI;

	/** Whether to write timeline data to file */
	UPROPERTY(Config)
	bool bWriteTimelineFile;

	/** Whether to send timeline data to the File API (Requires bWriteTimelineFile) */
	UPROPERTY(Config, meta=(EditCondition=bWriteTimelineFile))
	bool bUploadTimelineToFileAPI;

	/** Interval of updating summary and writing timeline, in seconds */
	UPROPERTY(Config)
	int32 StatInterval;

	/** Prefix for timeline file name */
	UPROPERTY(Config)
	FString TimelineFilePrefix;

	/** Prefix for summary file name */
	UPROPERTY(Config)
	FString SummaryFilePrefix;

	/** Helper function for whether tracking should be enabled */
	bool WantsEnabled() const
	{
		return bEnabled && (WantsSummary() || WantsTimeline());
	}
	
	/** Helper function for whether summary data should be tracked */
	bool WantsSummary() const
	{
		return bUploadSummaryToPEXAPI || bUploadSummaryToFileAPI || bWriteSummaryFile;
	}

	/** Helper function for whether timeline data should be tracked */
	bool WantsTimeline() const
	{
		return bUploadTimelineToFileAPI || bWriteTimelineFile;
	}
	
};

UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_PEXCollectorConfig_Client : public URH_PEXCollectorConfig
{
	GENERATED_BODY()
public:
	URH_PEXCollectorConfig_Client()
	{
		bEnabled = true;
		bUploadSummaryToPEXAPI = true;
		bUploadSummaryToFileAPI = false;
		bWriteSummaryFile = false;
		bUploadTimelineToFileAPI = false;
		bWriteTimelineFile = false;

		TimelineFilePrefix = TEXT("PEX_Timeline_Client");
		SummaryFilePrefix = TEXT("PEX_Summary_Client");
	}
};


UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_PEXCollectorConfig_Host : public URH_PEXCollectorConfig
{
	GENERATED_BODY()
public:
	URH_PEXCollectorConfig_Host()
	{
		bEnabled = true;
		bUploadSummaryToPEXAPI = true;
		bUploadSummaryToFileAPI = true;
		bWriteSummaryFile = true;
		bUploadTimelineToFileAPI = false;
		bWriteTimelineFile = true;
	}
};

UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_PEXCollectorConfig_DedicatedServer : public URH_PEXCollectorConfig_Host
{
	GENERATED_BODY()
public:
	URH_PEXCollectorConfig_DedicatedServer()
	{
	}
};

/**
 * @brief PlayerExperience Owner Interface class.
 */
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class URH_PEXOwnerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief PlayerExperience Owner Interface.
 */
class RALLYHEREINTEGRATION_API IRH_PEXOwnerInterface
{
	GENERATED_BODY()

public:
	// RUNTIME VALUES - called during collection
	/** @brief Get the engine to use for PEX calls */
	virtual UEngine* GetPEXEngine() const PURE_VIRTUAL(IRH_PEXOwnerInterface::GetPEXEngine, return nullptr;)
	/** @brief Get the world to use for PEX calls */
	virtual UWorld* GetPEXWorld() const PURE_VIRTUAL(IRH_PEXOwnerInterface::GetPEXWorld, return nullptr;)

	// CACHED VALUES - called during init
	/** @brief Get the match id to use for PEX calls */
	virtual FString GetPEXMatchId() const PURE_VIRTUAL(IRH_PEXOwnerInterface::GetPEXMatchId, return FString();)
	/** @brief Get the player id to use for PEX calls */
	virtual FGuid GetPEXPlayerId() const PURE_VIRTUAL(IRH_PEXOwnerInterface::GetPEXPlayerId, return FGuid();)
	/** @brief Get the remote file directory to use for PEX calls */
	virtual FRH_RemoteFileApiDirectory GetPEXRemoteFileDirectory() const PURE_VIRTUAL(IRH_PEXOwnerInterface::GetPEXRemoteFileDirectory, return FRH_RemoteFileApiDirectory();)
	/** @brief Whether or not this owner represents the host of the match */
	virtual bool GetPEXIsHost() const PURE_VIRTUAL(IRH_PEXOwnerInterface::GetPEXIsHost, return false;)
};


/** @brief Enum representing what value should be recorded when only a single value is requested for display or logging */
UENUM(BlueprintType)
enum class ERH_PEXValueType : uint8
{
	Current,
	Min,
	Max,
	Avg,
	Sum,
	Count
};

/** @brief State of the accumulated stat */
USTRUCT(BlueprintType)
struct FRH_PEXStatState
{
	GENERATED_BODY()
	
	/** @brief Current value */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Current;
	/** @brief Minimum value */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Min;
	/** @brief Maximum value */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Max;
	/** @brief Average value */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Avg;
	/** @brief Sum of values */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Sum;
	/** @brief Sum of squared values */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float SumOfSquares;
	/** @brief Variance of values */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Variance;
	/** @brief Count of values */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	int32 Count;

	FRH_PEXStatState()
		: Current(0.0f)
		, Min(TNumericLimits<float>::Max())
		, Max(TNumericLimits<float>::Lowest())
		, Avg(0.0f)
		, Sum(0.0f)
		, SumOfSquares(0.0f)
		, Variance(0.0f)
		, Count(0)
	{}

	/** @brief Reset the state to defaults */
	void Reset()
	{
		Current = 0.0f;
		Min = TNumericLimits<float>::Max();
		Max = TNumericLimits<float>::Lowest();
		Avg = 0.0f;
		Sum = 0.0f;
		SumOfSquares = 0.0f;
		Variance = 0.0f;
		Count = 0;
	}

	/** @brief Add a value to the accumulator */
	void AddValue(float Value)
	{
		Current = Value;
		Min = FMath::Min(Min, Value);
		Max = FMath::Max(Max, Value);
		Sum += Value;
		SumOfSquares += Value * Value;
		Count++;
		
		Avg = Sum / Count;
		Variance = (SumOfSquares / Count) - (Avg * Avg);
	}

	/** @brief Update the summary state with the current state */
	void UpdateSummary(const FRH_PEXStatState& CurrentState, ERH_PEXValueType CurrentValueType)
	{
		Min = FMath::Min(Min, CurrentState.Min);
		Max = FMath::Max(Max, CurrentState.Max);
		Sum += CurrentState.Sum;
		SumOfSquares += CurrentState.SumOfSquares;
		Count += CurrentState.Count;

		Avg = Sum / Count;
		Variance = (SumOfSquares / Count) - (Avg * Avg);
		
		switch (CurrentValueType)
		{
		case ERH_PEXValueType::Min:
			Current = Min;
			break;
		case ERH_PEXValueType::Max:
			Current = Max;
			break;
		case ERH_PEXValueType::Avg:
			Current = Avg;
			break;
		case ERH_PEXValueType::Sum:
			Current = Sum;
			break;
		case ERH_PEXValueType::Count:
			Current = Count;
			break;
		case ERH_PEXValueType::Current:
		default:
			Current = CurrentState.Current;
			break;
		}
	}
};

/** @brief Simple accumulator that represents a captured statistic. Tracks min, max, average, and other values internally without having to store all values. */
USTRUCT(BlueprintType)
struct FRH_StatAccumulator
{
	GENERATED_BODY()
	
public:
	/** @brief Name of the stat */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	FName Name;
	/** @brief Type of value to record for timeline file (which value from the capture state is used to build the timeline data) */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	ERH_PEXValueType TimelineValueType;
	/** @brief Type of value to record for summary current value (which value from the capture state is used to build the summary data) */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	ERH_PEXValueType SummaryCurrentValueType;

	/** @brief State of the stat for the current capture */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	FRH_PEXStatState CaptureState;
	/** @brief State of the stat for the summary */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	FRH_PEXStatState SummaryState;

	/** @brief Constructor */
	FRH_StatAccumulator()
		: Name(NAME_None)
		, TimelineValueType(ERH_PEXValueType::Max)
		, SummaryCurrentValueType(ERH_PEXValueType::Max)
	{}
	
	/** @brief Constructor */
	FRH_StatAccumulator(FName InName, ERH_PEXValueType InTimelineValueType=ERH_PEXValueType::Current, ERH_PEXValueType InSummaryValueType=ERH_PEXValueType::Current)
		: Name(InName)
		, TimelineValueType(InTimelineValueType)
		, SummaryCurrentValueType(InSummaryValueType)
	{}

	/** @brief Reset the capture state */
	void ResetCapture()
	{
		CaptureState.Reset();
	}
	/** @brief Reset the summary state */
	void ResetSummary()
	{
		SummaryState.Reset();
	}

	/** @brief Add a value to the accumulator */
	void CaptureValue(float Value)
	{
		CaptureState.AddValue(Value);
	}
	/**
	 * @brief Increment the capture state's current value by 1 and recapture
	 * @param [in] IncrementBy The amount to increment the current value by (default is 1.0)
	 */
	void IncrementCaptureValue(float IncrementBy = 1.0f)
	{
		CaptureState.AddValue(CaptureState.Current + IncrementBy);
	}
	/** @brief Capture the current value into the summary state */
	void CaptureSummaryValue()
	{
		// if we failed to capture any values, don't add anything to the summary as we could potentially add default values (like TNumericLimits<float>::Max())
		if (CaptureState.Count == 0)
		{
			return;
		}

		SummaryState.UpdateSummary(CaptureState, SummaryCurrentValueType);
	}

	/** @brief Get the name of the stat */
	FName GetName() const
	{
		return Name;
	}
	/** @brief Get the value of the stat to be recorded in the timeline */
	float GetTimelineValue() const
	{
		// if we failed to capture any values, rather than writing default values (like TNumericLimits<float>::Max()), just return 0.0f
		if (CaptureState.Count == 0)
		{
			return 0.0f;
		}
		
		switch (TimelineValueType)
		{
		case ERH_PEXValueType::Min:
			return CaptureState.Min;
		case ERH_PEXValueType::Max:
			return CaptureState.Max;
		case ERH_PEXValueType::Avg:
			return CaptureState.Avg;
		case ERH_PEXValueType::Sum:
			return CaptureState.Sum;
		case ERH_PEXValueType::Count:
			return CaptureState.Count;
		case ERH_PEXValueType::Current:
		default:
			return CaptureState.Current;
		}
	}

	/** @brief Get a JSON object representing the summary data */
	TSharedPtr<FJsonObject> GetSummaryJson(bool bIncludeName) const
	{
		if (SummaryState.Count == 0)
		{
			return nullptr;
		};
		
		TSharedPtr<FJsonObject> SummaryJson = MakeShared<FJsonObject>();
		if (bIncludeName)
		{
			SummaryJson->SetStringField(TEXT("Name"), Name.ToString());
		}
		SummaryJson->SetNumberField(TEXT("Min"), SummaryState.Min);
		SummaryJson->SetNumberField(TEXT("Max"), SummaryState.Max);
		SummaryJson->SetNumberField(TEXT("Avg"), SummaryState.Avg);
		SummaryJson->SetNumberField(TEXT("Sum"), SummaryState.Sum);
		SummaryJson->SetNumberField(TEXT("Standard Deviation"), FMath::Sqrt(SummaryState.Variance));
		SummaryJson->SetNumberField(TEXT("Count"), SummaryState.Count);
		return SummaryJson;
	}
};

/** @brief Base class for a group of stats */
UCLASS(BlueprintType)
class URH_PEXStatGroup : public UObject
{
	GENERATED_BODY()
public:

	/** @brief Name of the stat group */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	FName GroupName;
	/** @brief Array of stats to track */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	TArray<FRH_StatAccumulator> Stats;

	/** @brief Capture once-per-frame stats */
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) {}
	/** @brief Capture once-per-second stats */
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) {}
	/** @brief Capture once-per-interval stats */
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) {}
	
	/** @brief Reset the capture state of all stats */
	virtual void ResetCapture()
	{
		for (int i = 0; i < Stats.Num(); ++i)
		{
			Stats[i].ResetCapture();
		}
	}
	/** @brief Reset the summary state of all stats */
	virtual void ResetSummary()
	{
		for (int i = 0; i < Stats.Num(); ++i)
		{
			Stats[i].ResetSummary();
		}
	}
	/** @brief Reset both the capture and summary states of all stats */
	virtual void ResetStats()
	{
		ResetCapture();
		ResetSummary();
	}

	/** @brief Update the summary state of all stats */
	virtual void UpdateSummary()
	{
		for (int i = 0; i < Stats.Num(); ++i)
		{
			Stats[i].CaptureSummaryValue();
		}
	}

	/**
	 * @brief Write the summary data to a JSON object
	 * @return The JSON object containing the summary data
	 */
	virtual TSharedPtr<FJsonObject> GetSummary() const
	{
		auto StatGroupJsonData = MakeShared<FJsonObject>();
		for (int i = 0; i < Stats.Num(); ++i)
		{
			const auto& Stat = Stats[i];
			const auto& StatName = Stat.GetName();
			
			// if we have any summary data, add it to the stat group
			auto SummaryData = Stat.GetSummaryJson(true);
			if (SummaryData.IsValid() && SummaryData->Values.Num() > 0)
			{
				StatGroupJsonData->SetObjectField(StatName.ToString(), SummaryData);
			}
		}

		// if we have any stats, add the stat group to the document
		if (StatGroupJsonData->Values.Num() > 0)
		{
			return StatGroupJsonData.ToSharedPtr();
		}
		return nullptr;
	}

	/** @brief Write the timeline data header to a CSV file for all stats */
	virtual FString GetTimelineCSVHeader() const
	{
		FString HeaderString;
		for (int i = 0; i < Stats.Num(); ++i)
		{
			if (!HeaderString.IsEmpty())
			{
				HeaderString += TEXT(",");
			}
			HeaderString += Stats[i].GetName().ToString();
		}

		return HeaderString;
	}
	/** @brief Write the timeline data values to a CSV file for all stats */
	virtual FString GetTimelineCSVValues() const
	{
		FString ValueString;
		for (int i = 0; i < Stats.Num(); ++i)
		{
			if (!ValueString.IsEmpty())
			{
				ValueString += TEXT(",");
			}

			// if the value is close to an integer, round it
			float Value = Stats[i].GetTimelineValue();
			int Rounded = FMath::RoundToInt(Value);
			if (FMath::IsNearlyZero(Value - Rounded))
			{
				ValueString += FString::Printf(TEXT("%d"), Rounded);
			}
			else
			{
				ValueString += FString::Printf(TEXT("%f"), Value);
			}
		}
		
		return ValueString;
	}
};

/**
 * @brief PlayerExperience Collector class, responsible for collecting and tracking PEX data via PEX Stat Groups.
 */
UCLASS(Config=RallyHereIntegration)
class URH_PEXCollector : public UObject
{
	GENERATED_BODY()
public:
    URH_PEXCollector();
    virtual ~URH_PEXCollector() override;

	/** @brief Initialize the collector.  Can only be done once */
    virtual bool Init(IRH_PEXOwnerInterface* InOwner);
	/** @brief Tick the collector, updating per frame stats and potentially per second stats. */
    virtual void OnEndFrame();

	/** @brief Retrieve the config to use for this collector instance */
	const URH_PEXCollectorConfig* GetConfig() const
    {
		return CachedConfig;
    }

	/** Closes state, writes summary if needed, and uploads data if needed.  Can only be done once. */
	void Close();
	
	/** Writes summary data to file and/or API, and uploads any data requested, can only be called once */
	void WriteSummary();
	
protected:
	/** Cached owner of the collector */
    TWeakInterfacePtr<IRH_PEXOwnerInterface> Owner;

	/** Cached file path for timeline file */
	UPROPERTY(BlueprintReadOnly, Transient, Category="PlayerExperience")
	const URH_PEXCollectorConfig* CachedConfig;

	/** Cached match id to use for routing the captured data to storage.  Cached so it does not change mid-capture */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	FString CachedMatchId;
	/** Cached remote file directory to use for routing the captured data to storage.  Cached so it does not change mid-capture */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	FRH_RemoteFileApiDirectory CachedRemoteFileDirectory;
	/** Cached player id to use for routing the captured data to storage.  Cached so it does not change mid-capture */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	FGuid CachedPlayerId;
	/** Cached whether this owner is the host of the match.  Cached so it does not change mid-capture */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	bool bCachedIsHost;

	/** Whether the collector has been initialized, to guard against it being initialized multiple times. */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	bool bHasBeenInitialized;

	/** Whether the collector has been closed, to guard against it being closed multiple times. */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	bool bHasBeenClosed;
	
	/** Whether the summary data has been written, to guard against it being written multiple times. */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	bool bHasWrittenSummary;

	/** Time accumulator so that time is always monotonic */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	double TimeTracker;

	/** Array of StatGroups to capture */
	UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, Category="PlayerExperience")
	TSet<TSubclassOf<URH_PEXStatGroup>> StatGroupsToCapture;
	
	UPROPERTY(BlueprintReadOnly, Transient, Category="PlayerExperience")
	TArray<URH_PEXStatGroup*> StatGroups;

	/** Internal helper to upload a file to remote file storage */
	void UploadFile(const FString& FilePath, const FString& RemoteFileName) const;

	/** Local file archive to write timeline data to */
	class FArchive* TimelineFileCSV;

	/** Cached file path for timeline file */
	UPROPERTY(BlueprintReadOnly, Transient, Category="PlayerExperience")
	FString TimelineFilePath;
};

//////////////////////////////////////////////////////////////////////////////////////

/** @brief Stat group for capturing primary stats */
UCLASS()
class URH_PEXPrimaryStats : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	enum ECaptureStat
	{
		FrameTime,
		GameThreadTime,
		RenderThreadTime,
		RHIThreadTime,
		GPUTime,
		DeltaTime,
		GameThreadWaitTime,
		FlushLoadingTime,

		TickCount,
		DelayedTickCount,
	
		MemoryWS,
		MemoryVB,
		CPUProcess,
		CPUMachine,

		Max
	};

	URH_PEXPrimaryStats();

	/** @brief The timetamp for the last capture */
	FDateTime LastCaptureTime;
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	
	/** @brief Reset the capture state of all stats */
	virtual void ResetCapture() override
	{
		Super::ResetCapture();

		LastCaptureTime = FDateTime();
	}
	/** @brief Write the timeline data header to a CSV file for all stats */
	virtual FString GetTimelineCSVHeader() const override
	{
		FString HeaderString = Super::GetTimelineCSVHeader();

		HeaderString = TEXT("Timestamp,") + HeaderString;

		return HeaderString;
	}
	/** @brief Write the timeline data values to a CSV file for all stats */
	virtual FString GetTimelineCSVValues() const override
	{
		FString ValueString = Super::GetTimelineCSVValues();

		ValueString = LastCaptureTime.ToIso8601() + TEXT(",") + ValueString;
		
		return ValueString;
	}
};

/** @brief Stat group for capturing whole-state network stats */
UCLASS()
class URH_PEXNetworkStats_Base : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	enum ECaptureStat
	{
		ConnectionCount,
		AvgPing,
		InPackets,
		OutPackets,
		TotalPackets,
		InPacketsLost,
		OutPacketsLost,
		TotalPacketsLost,
		PacketLoss,

		Max
	};

	URH_PEXNetworkStats_Base();
};


/** @brief Stat group for capturing global network stats */
UCLASS()
class URH_PEXNetworkStats_Global : public URH_PEXNetworkStats_Base
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats_Global()
	{
		GroupName = TEXT("GlobalNetworkStats");
	}
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;	
};

class UNetConnection;


/** @brief Stat group for capturing per-player network stats */
UCLASS()
class URH_PEXNetworkStats_Connection : public URH_PEXNetworkStats_Base
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats_Connection()
	{
		GroupName = TEXT("ConnetionNetworkStats");
	}

	void InitForConnection(const UNetConnection* InConnection);

	TWeakObjectPtr<const UNetConnection> Connection;
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;	
};

/** @brief Stat group for capturing local whole-state network stats, plus per-player stats */
UCLASS()
class URH_PEXNetworkStats : public URH_PEXStatGroup
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats();
	
	/** Global network stats, used by summary and timeline */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	URH_PEXNetworkStats_Global* GlobalNetworkStats;
	
	/** Per-player network stats, only used by summary */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	TMap<FGuid, URH_PEXNetworkStats_Connection*> PlayerNetworkStats;

	/** Client's server connection, only used by summary */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	URH_PEXNetworkStats_Connection* ServerNetworkStats;
	
	/** @brief Reset the capture state of all stats */
	virtual void ResetCapture() override
	{
		Super::ResetCapture();

		if (GlobalNetworkStats != nullptr)
		{
			GlobalNetworkStats->ResetCapture();
		}
		for (auto PlayerNetworkStatsPair : PlayerNetworkStats)
		{
			PlayerNetworkStatsPair.Value->ResetCapture();
		}
	}
	/** @brief Reset the summary state of all stats */
	virtual void ResetSummary() override
	{
		Super::ResetSummary();

		if (GlobalNetworkStats != nullptr)
		{
			GlobalNetworkStats->ResetSummary();
		}

		// network stats are only used by the summary and are dynamic, so just clear the entire map
		PlayerNetworkStats.Reset();
	}
	
	/** @brief Write the timeline data header to a CSV file for all stats */
	virtual FString GetTimelineCSVHeader() const override
	{
		FString HeaderString = Super::GetTimelineCSVHeader();

		if (GlobalNetworkStats != nullptr)
		{
			FString GlobalHeader = GlobalNetworkStats->GetTimelineCSVHeader();
			if (!GlobalHeader.IsEmpty())
			{
				if (!HeaderString.IsEmpty())
				{
					HeaderString += TEXT(",");
				}
				HeaderString += GlobalHeader;
			}
		}

		return HeaderString;
	}
	/** @brief Write the timeline data values to a CSV file for all stats */
	virtual FString GetTimelineCSVValues() const override
	{
		FString ValueString = Super::GetTimelineCSVValues();

		if (GlobalNetworkStats != nullptr)
		{
			FString GlobalValues = GlobalNetworkStats->GetTimelineCSVValues();
			if (!GlobalValues.IsEmpty())
			{
				if (!ValueString.IsEmpty())
				{
					ValueString += TEXT(",");
				}
				ValueString += GlobalValues;
			}
		}

		return ValueString;
	}

	/** @brief Update the summary state of all stats */
	virtual void UpdateSummary() override
	{
		Super::UpdateSummary();

		if (GlobalNetworkStats != nullptr)
		{
			GlobalNetworkStats->UpdateSummary();
		}
		if (ServerNetworkStats != nullptr)
		{
			ServerNetworkStats->UpdateSummary();
		}
		for (auto PlayerNetworkStatsPair : PlayerNetworkStats)
		{
			PlayerNetworkStatsPair.Value->UpdateSummary();
		}
	}
	
	/** @brief Write the summary data to a JSON object */
	virtual TSharedPtr<FJsonObject> GetSummary() const override
	{
		auto SummaryData = Super::GetSummary();

		if (!SummaryData.IsValid())
		{
			SummaryData = MakeShared<FJsonObject>();
		}

		// write global network stats to the summary data
		if (GlobalNetworkStats != nullptr)
		{
			auto GlobalSummary = GlobalNetworkStats->GetSummary();
			if (GlobalSummary.IsValid() && GlobalSummary->Values.Num() > 0)
			{
				SummaryData->SetObjectField(TEXT("Global"), GlobalSummary);
			}
		}
		
		// write server network stats to the summary data
		if (ServerNetworkStats != nullptr)
		{
			auto ServerSummary = ServerNetworkStats->GetSummary();
			if (ServerSummary.IsValid() && ServerSummary->Values.Num() > 0)
			{
				SummaryData->SetObjectField(TEXT("Server"), ServerSummary);
			}
		}

		// write per-player network stats to the summary data
		if (!PlayerNetworkStats.IsEmpty())
		{
			// create a container for all the per player data
			auto PlayerNetworkStatsJsonData = MakeShared<FJsonObject>();

			// loop over all player network stats and add them to the summary data
			for (auto PlayerNetworkStatsPair : PlayerNetworkStats)
			{
				auto PlayerNetworkStatsJson = PlayerNetworkStatsPair.Value->GetSummary();
				if (PlayerNetworkStatsJson.IsValid() && PlayerNetworkStatsJson->Values.Num() > 0)
				{
					// inject player id into the player network stats
					const auto PlayerId = PlayerNetworkStatsPair.Key.ToString(EGuidFormats::DigitsWithHyphens);
					PlayerNetworkStatsJson->SetStringField(TEXT("PlayerId"), PlayerId);
					PlayerNetworkStatsJsonData->SetObjectField(PlayerId, PlayerNetworkStatsJson);
				}
			}

			// if we have any stats, add them to the summary data
			if (PlayerNetworkStatsJsonData->Values.Num() > 0)
			{
				SummaryData->SetObjectField(TEXT("Players"), PlayerNetworkStatsJsonData);
			}
		}

		if (SummaryData->Values.Num() > 0)
		{
			return SummaryData;
		}
		return nullptr;
	}

	virtual void GetOrCreatePlayerNetworkStats(const class UNetConnection* Connection, URH_PEXNetworkStats_Connection*& OutPlayerNetworkStats);
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
};

/** @brief Stat group for capturing game stats */
UCLASS()
class URH_PEXGameStats : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	enum ECaptureStat
	{
		PlayerControllerCount,
		AIControllerCount,
		PawnCount,

		Max
	};

	URH_PEXGameStats();
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
};


/** @brief Blueprintable stat group for capturing stats */
UCLASS(BlueprintType, Blueprintable)
class URH_PEXBlueprintableStats : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	URH_PEXBlueprintableStats() {}
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override
	{
		BLUEPRINT_CapturePerFrameStats(Owner);
	}
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override
	{
		BLUEPRINT_CapturePerSecondStats(Owner);
	}

	UFUNCTION(BlueprintImplementableEvent, Category="PlayerExperience")
	void BLUEPRINT_CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner);
	UFUNCTION(BlueprintImplementableEvent, Category="PlayerExperience")
	void BLUEPRINT_CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner);

	UFUNCTION(BlueprintCallable, Category="PlayerExperience")
	void CaptureValue(FName StatName, float Value)
	{
		for (int i = 0; i < Stats.Num(); ++i)
		{
			if (Stats[i].GetName() == StatName)
			{
				Stats[i].CaptureValue(Value);
				return;
			}
		}
	}

	UFUNCTION(BlueprintCallable, Category="PlayerExperience")
	static void CaptureStatValue(FRH_StatAccumulator& InStat, float Value)
	{
		InStat.CaptureValue(Value);
	}
};

//////////////////////////////////////////////////////////////////////////////////////

/** @} */