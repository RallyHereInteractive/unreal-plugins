// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Engine/GameEngine.h"
#include "UObject/WeakInterfacePtr.h"
#include "RH_Common.h"
#include "PlayerExperienceAPI.h"

#include "RH_PlayerExperienceCollector.generated.h"

/** @defgroup PlayerExperience RallyHere PlayerExperience
 *  @{
 */

UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_PEXCollectorConfig : public UObject
{
	GENERATED_BODY()
public:
	URH_PEXCollectorConfig();

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

	/** How many intervals to ignore for summary after a map load (to allow things like streaming to stablize) */
	UPROPERTY(Config)
	int32 NumIntervalsToIgnoreAfterMapLoadForSummary;

	/** Prefix for timeline file name */
	UPROPERTY(Config)
	FString TimelineFilePrefix;

	/** Prefix for summary file name */
	UPROPERTY(Config)
	FString SummaryFilePrefix;
	
	/** Array of StatGroups to capture */
	UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, Category="PlayerExperience")
	TSet<TSubclassOf<URH_PEXStatGroup>> StatGroupsToCapture;

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

	// SUBMIT REPORTS - called during summary write
	/** @brief Submit a PEX Host Summary report */
	virtual void SubmitPEXHostSummary(FRHAPI_PexHostRequest&& Report) const PURE_VIRTUAL(IRH_PEXOwnerInterface::SubmitPEXHostSummary, )
	/** @brief Submit a PEX Client Summary report */
	virtual void SubmitPEXClientSummary(FRHAPI_PexClientRequest&& Report) const PURE_VIRTUAL(IRH_PEXOwnerInterface::SubmitPEXClientSummary, )
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
struct RALLYHEREINTEGRATION_API FRH_PEXStatState
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

		if (Count > 0)
		{
			Avg = Sum / Count;
			Variance = (SumOfSquares / Count) - (Avg * Avg);
		}
		else
		{
			Avg = 0.0f;
			Variance = 0.0f;
		}
	}
	
	/** @brief Merge another stat state into this one */
	void MergeAddValue(const FRH_PEXStatState& Other)
	{
		if (Other.Count <= 0)
		{
			// if no data is available to merge, do not merge anything
		}
		else if (Count <= 0)
		{
			// if we have no data locally, accept the new data as-is
			*this = Other;
		}
		else
		{
			// merge the values
			Current = Other.Current; // just take the current value from the other state, adding generally does not make sense
			Min = FMath::Min(Min, Other.Min);
			Max = FMath::Max(Max, Other.Max);
			Sum += Other.Sum;
			SumOfSquares += Other.SumOfSquares;
			Count += Other.Count;

			if (Count > 0)
			{
				Avg = Sum / Count;
				Variance = (SumOfSquares / Count) - (Avg * Avg);
			}
			else
			{
				Avg = 0.0f;
				Variance = 0.0f;
			}
		}
	}

	/** @brief Update the summary state with the current state */
	void UpdateSummary(const FRH_PEXStatState& CurrentState)
	{
		MergeAddValue(CurrentState);
	}
};

/** @brief Simple accumulator that represents a captured statistic. Tracks min, max, average, and other values internally without having to store all values. */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_StatAccumulator
{
	GENERATED_BODY()
	
public:
	/** @brief Name of the stat */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	FName Name;
	/** @brief Type of value to record for timeline file (which value from the capture state is used to build the timeline data) */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	ERH_PEXValueType TimelineValueType;

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
	{}
	
	/** @brief Constructor */
	FRH_StatAccumulator(FName InName, ERH_PEXValueType InTimelineValueType=ERH_PEXValueType::Current)
		: Name(InName)
		, TimelineValueType(InTimelineValueType)
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
		SummaryState.UpdateSummary(CaptureState);
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

	// summary object field names
	struct RALLYHEREINTEGRATION_API SummaryFields
	{
		static FString Name;
		static FString Last;
		static FString Min;
		static FString Max;
		static FString Avg;
		static FString Sum;
		static FString StdDev;
		static FString Count;
	};

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
			SummaryJson->SetStringField(SummaryFields::Name, Name.ToString());
		}
		SummaryJson->SetNumberField(SummaryFields::Last, SummaryState.Current);
		SummaryJson->SetNumberField(SummaryFields::Min, SummaryState.Min);
		SummaryJson->SetNumberField(SummaryFields::Max, SummaryState.Max);
		SummaryJson->SetNumberField(SummaryFields::Avg, SummaryState.Avg);
		SummaryJson->SetNumberField(SummaryFields::StdDev, FMath::Sqrt(FMath::Max(0.0f, SummaryState.Variance)));
		SummaryJson->SetNumberField(SummaryFields::Sum, SummaryState.Sum);
		SummaryJson->SetNumberField(SummaryFields::Count, SummaryState.Count);
		return SummaryJson;
	}

	/** @brief Get a PexStat object representing the summary data */
	bool GetPexStat(FRHAPI_PexStat& PexStat) const
	{
		if (SummaryState.Count == 0)
		{
			return false;
		}
		
		PexStat.SetAvg(SummaryState.Avg);
		PexStat.SetMin(SummaryState.Min);
		PexStat.SetMax(SummaryState.Max);
		PexStat.SetStddev(FMath::Sqrt(FMath::Max(0.0f, SummaryState.Variance)));

		return true;
	}
};


/** @brief Simple counter that represents a captured statistic. Tracks current value, and tracks summary data. */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_StatCounter
{
	GENERATED_BODY()
	
public:
	/** @brief Name of the stat */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	FName Name;

	/** @brief State of the stat for the current capture */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	float Current;
	/** @brief State of the stat for the summary */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="PlayerExperience")
	FRH_PEXStatState SummaryState;

	/** @brief Constructor */
	FRH_StatCounter()
		: Name(NAME_None)
		, Current(0.0f)
	{}
	
	/** @brief Constructor */
	FRH_StatCounter(FName InName)
		: Name(InName)
		, Current(0.0f)
	{}

	/** @brief Reset the capture state */
	void ResetCapture()
	{
		Current = 0.0f;
	}
	/** @brief Reset the summary state */
	void ResetSummary()
	{
		SummaryState.Reset();
	}

	/** @brief Add a value to the accumulator */
	void CaptureValue(float Value)
	{
		Current = Value;
	}
	/**
	 * @brief Increment the capture state's current value by 1 and recapture
	 * @param [in] IncrementBy The amount to increment the current value by (default is 1.0)
	 */
	void IncrementCaptureValue(float IncrementBy = 1.0f)
	{
		Current += IncrementBy;
	}
	/** @brief Capture the current value into the summary state */
	void CaptureSummaryValue()
	{
		SummaryState.AddValue(Current);
	}

	/** @brief Get the name of the stat */
	FName GetName() const
	{
		return Name;
	}
	/** @brief Get the value of the stat to be recorded in the timeline */
	float GetTimelineValue() const
	{
		return Current;
	}

	// summary object field names
	struct RALLYHEREINTEGRATION_API SummaryFields
	{
		static FString Name;
		static FString Last;
		static FString Min;
		static FString Max;
		static FString Avg;
		static FString Sum;
		static FString StdDev;
		static FString Count;
	};

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
			SummaryJson->SetStringField(SummaryFields::Name, Name.ToString());
		}
		SummaryJson->SetNumberField(SummaryFields::Last, SummaryState.Current);
		SummaryJson->SetNumberField(SummaryFields::Min, SummaryState.Min);
		SummaryJson->SetNumberField(SummaryFields::Max, SummaryState.Max);
		SummaryJson->SetNumberField(SummaryFields::Avg, SummaryState.Avg);
		SummaryJson->SetNumberField(SummaryFields::StdDev, FMath::Sqrt(FMath::Max(0.0f, SummaryState.Variance)));
		SummaryJson->SetNumberField(SummaryFields::Sum, SummaryState.Sum);
		SummaryJson->SetNumberField(SummaryFields::Count, SummaryState.Count);
		return SummaryJson;
	}

	/** @brief Get a PexStat object representing the summary data */
	bool GetPexStat(FRHAPI_PexStat& PexStat) const
	{
		if (SummaryState.Count == 0)
		{
			return false;
		}
		
		PexStat.SetAvg(SummaryState.Avg);
		PexStat.SetMin(SummaryState.Min);
		PexStat.SetMax(SummaryState.Max);
		PexStat.SetStddev(FMath::Sqrt(FMath::Max(0.0f, SummaryState.Variance)));

		return true;
	}
};


#define PEX_ADD_INDEXED_STAT_TO_REPORT(StatName, PexStatName) \
{ \
	FRHAPI_PexStat PexStat; \
	if (GetCaptureStat(ECaptureStat::StatName).GetPexStat(PexStat)) \
	{ \
		Report.Set##PexStatName(PexStat); \
	} \
}

#define PEX_ADD_INDEXED_COUNTER_TO_REPORT(StatName, PexStatName) \
{ \
	FRHAPI_PexStat PexStat; \
	if (GetCaptureCounter(ECaptureCounter::StatName).GetPexStat(PexStat)) \
	{ \
		Report.Set##PexStatName(PexStat); \
	} \
}

/** @brief Base class for a group of stats */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PEXStatGroup : public UObject
{
	GENERATED_BODY()
public:

	URH_PEXStatGroup()
		: GroupName(NAME_None)
		, bDynamic(false)
		, bNotForTimeline(false)
	{
	}

	/** @brief Initialize the stat group and any children.  May add non-dynamic groups and init them as well */
	virtual void Init(const URH_PEXCollectorConfig* InConfig, const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
	{
		// init any existing children
		for (auto Child : Children)
		{
			Child->Init(InConfig, Owner);
		}
	}

	/** @brief Name of the stat group */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	FName GroupName;
	/** @brief Array of stats to track */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	TArray<FRH_StatAccumulator> Stats;
	/** @brief Array of stats to track */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	TArray<FRH_StatCounter> Counters;
	/** @brief Array of children stat groups to track */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	TArray<URH_PEXStatGroup*> Children;
	/** @brief Whether this group was dynamically created.  Dynamic groups do not get written to the timeline since it has a rigid structure */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	bool bDynamic;
	/** @brief Whether this group should be excluded from the timline.  Some groups do not get written to the timeline since it has a rigid structure */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	bool bNotForTimeline;

	/** @brief Capture once-per-frame stats */
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
	{
		for (auto Child : Children)
		{
			Child->CapturePerFrameStats(Owner);
		}
	}
	/** @brief Capture once-per-second stats */
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
	{
		for (auto Child : Children)
		{
			Child->CapturePerSecondStats(Owner);
		}
	}
	/** @brief Capture once-per-interval stats */
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner)
	{
		for (auto Child : Children)
		{
			Child->CapturePerIntervalStats(Owner);
		}
	}
	
	/** @brief Reset the capture state of all stats */
	virtual void ResetCapture()
	{
		// reset capture on all stats
		for (auto& Stat : Stats)
		{
			Stat.ResetCapture();
		}

		// reset capture on all counters
		for (auto& Counter : Counters)
		{
			Counter.ResetCapture();
		}

		// reset capture on all children
		for (auto& Child : Children)
		{
			Child->ResetCapture();
		}
	}
	/** @brief Reset the summary state of all stats */
	virtual void ResetSummary()
	{
		// reset summary on all stats
		for (auto& Stat : Stats)
		{
			Stat.ResetSummary();
		}
		
		// reset summary on all counters
		for (auto& Counter : Counters)
		{
			Counter.ResetSummary();
		}

		// remove all null or dynamic children
		Children.RemoveAll([this](const URH_PEXStatGroup* Child)
		{
			return Child == nullptr || Child->bDynamic;
		});

		// reset summary on all children
		for (auto& Child : Children)
		{
			Child->ResetSummary();
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
		// update summary on all stats
		for (auto& Stat : Stats)
		{
			Stat.CaptureSummaryValue();
		}

		// update summary on all counters
		for (auto& Counter : Counters)
		{
			Counter.CaptureSummaryValue();
		}

		// reset summary on all children
		for (auto& Child : Children)
		{
			Child->UpdateSummary();
		}
	}

	struct RALLYHEREINTEGRATION_API SummaryFields
	{
		static FString Name;
		static FString Stats;
		static FString Counters;
		static FString Children;
	};
	
	/**
	 * @brief Write the summary data to a JSON object
	 * @return The JSON object containing the summary data
	 */
	virtual TSharedRef<FJsonObject> GetSummary() const
	{
		auto StatGroupJsonData = MakeShared<FJsonObject>();
		{
			auto StatsJsonData = MakeShared<FJsonObject>();
			for (const auto& Stat : Stats)
			{
				const auto& StatName = Stat.GetName();
			
				// if we have any summary data, add it to the stat group
				auto SummaryData = Stat.GetSummaryJson(true);
				if (SummaryData.IsValid() && SummaryData->Values.Num() > 0)
				{
					StatsJsonData->SetObjectField(StatName.ToString(), SummaryData);
				}
			}
			
			// if we have any stats, add the stats object to the document
			if (StatsJsonData->Values.Num() > 0)
			{
				StatGroupJsonData->SetObjectField(SummaryFields::Stats, StatsJsonData);
			}
		}
		{
			auto CountersJsonData = MakeShared<FJsonObject>();
			for (const auto& Counter : Counters)
			{
				const auto& CounterName = Counter.GetName();
			
				// if we have any summary data, add it to the stat group
				auto SummaryData = Counter.GetSummaryJson(true);
				if (SummaryData.IsValid() && SummaryData->Values.Num() > 0)
				{
					CountersJsonData->SetObjectField(CounterName.ToString(), SummaryData);
				}
			}
			
			// if we have any counters, add the counters object to the document
			if (CountersJsonData->Values.Num() > 0)
			{
				StatGroupJsonData->SetObjectField(SummaryFields::Counters, CountersJsonData);
			}
		}

		{
			auto ChildrenJsonData = MakeShared<FJsonObject>();
			for (const auto& Child : Children)
			{
				const auto& ChildName = Child->GroupName;
			
				// if we have any summary data, add it to the stat group
				auto SummaryData = Child->GetSummary();
				if (SummaryData->Values.Num() > 0)
				{
					ChildrenJsonData->SetObjectField(ChildName.ToString(), SummaryData);
				}
			}

			if (ChildrenJsonData->Values.Num() > 0)
			{
				StatGroupJsonData->SetObjectField(SummaryFields::Children, ChildrenJsonData);
			}
		}
		
		return StatGroupJsonData;
	}

	/** @brief Write the timeline data header to a CSV file for all stats */
	virtual FString GetTimelineCSVHeader() const
	{
		// dynamic groups cannot be written to the timeline
		if (bNotForTimeline || bDynamic)
		{
			return FString();
		}
		
		FString HeaderString;
		for (const auto& Stat : Stats)
		{
			if (!HeaderString.IsEmpty())
			{
				HeaderString += TEXT(",");
			}
			HeaderString += Stat.GetName().ToString();
		}
		
		for (const auto& Counter : Counters)
		{
			if (!HeaderString.IsEmpty())
			{
				HeaderString += TEXT(",");
			}
			HeaderString += Counter.GetName().ToString();
		}

		for (const auto& Child : Children)
		{
			const auto ChildString = Child->GetTimelineCSVHeader();
			if (!HeaderString.IsEmpty() && !ChildString.IsEmpty())
			{
				HeaderString += TEXT(",");
			}
			HeaderString += ChildString;
		}
		
		return HeaderString;
	}
	/** @brief Write the timeline data values to a CSV file for all stats */
	virtual FString GetTimelineCSVValues() const
	{
		// dynamic groups cannot be written to the timeline
		if (bNotForTimeline || bDynamic)
		{
			return FString();
		}
		
		FString ValueString;
		for (const auto& Stat : Stats)
		{
			if (!ValueString.IsEmpty())
			{
				ValueString += TEXT(",");
			}

			// if the value is close to an integer, round it
			float Value = Stat.GetTimelineValue();
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

		for (const auto& Counter : Counters)
		{
			if (!ValueString.IsEmpty())
			{
				ValueString += TEXT(",");
			}

			// if the value is close to an integer, round it
			float Value = Counter.GetTimelineValue();
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
		
		for (const auto& Child : Children)
		{
			const auto ChildString = Child->GetTimelineCSVValues();
			if (!ValueString.IsEmpty() && !ChildString.IsEmpty())
			{
				ValueString += TEXT(",");
			}
			ValueString += ChildString;
		}
		
		return ValueString;
	}
	
	/** @brief Fill in a API PEX host summary report with the summary data */
	virtual void GetPEXHostSummary(FRHAPI_PexHostRequest& Report) const
	{
		for (const auto Child : Children)
		{
			Child->GetPEXHostSummary(Report);
		}
	}

	/** @brief Fill in a API PEX client summary report with the summary data */
	virtual void GetPEXClientSummary(FRHAPI_PexClientRequest& Report) const
	{
		for (const auto Child : Children)
		{
			Child->GetPEXClientSummary(Report);
		}
	}
};

/** @brief Stat group that contains all other stat groups, configurable via INI */
UCLASS()
class RALLYHEREINTEGRATION_API URH_PEXStatGroupsTopLevel : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	URH_PEXStatGroupsTopLevel();
	
	virtual void Init(const URH_PEXCollectorConfig* InConfig, const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;

	// top level stats are ones that affect the capture state as a whole
	enum class ECaptureCounter : uint8
	{
		IgnoredForSummary,

		Max
	};
	FORCEINLINE FRH_StatCounter& GetCaptureCounter(ECaptureCounter Counter) { return Counters[static_cast<uint8>(Counter)]; }
	FORCEINLINE const FRH_StatCounter& GetCaptureCounter(ECaptureCounter Counter) const { return Counters[static_cast<uint8>(Counter)]; }

	
	virtual void SetIgnoredForSummary()
	{
		GetCaptureCounter(ECaptureCounter::IgnoredForSummary).IncrementCaptureValue();
	}

	/** @brief The timetamp for the last capture */
	FDateTime LastCaptureTime;

	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override
	{
		Super::CapturePerIntervalStats(Owner);
		
		LastCaptureTime = FDateTime::UtcNow();
	}

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

/**
 * @brief PlayerExperience Collector class, responsible for collecting and tracking PEX data via PEX Stat Groups.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_PEXCollector : public UObject
{
	GENERATED_BODY()
public:
    URH_PEXCollector();
    virtual ~URH_PEXCollector() override;

	/** @brief Initialize the collector.  Can only be done once */
    virtual bool Init(IRH_PEXOwnerInterface* InOwner);
	/** @brief Initialize the collector.  Can only be done once */
	virtual bool InitWithConfig(IRH_PEXOwnerInterface* InOwner, const URH_PEXCollectorConfig* InConfig);
	/** @brief Tick the collector, updating per frame stats and potentially per second stats. */
    virtual void OnEndFrame();
	/** @brief Notification that a map load has completed */
	virtual void OnMapLoadComplete();

	/** @brief Retrieve the config to use for this collector instance */
	const URH_PEXCollectorConfig* GetConfig() const
    {
		return CachedConfig;
    }

	/** @brief Reset the summary state, which is useful if wanting to trim the front of the summary to when gameplay starts. */
	void ResetSummary()
	{
		if (TopLevelStatGroup)
		{
			TopLevelStatGroup->ResetSummary();
		}
	}

	/** @brief Flags the current interval (and potentially more) to be ignored for summary if it was not already.  This is useful in cases of events that will generate bad behavior reports such as map loads */
	void SetIgnoreCurrentIntervalForSummary(int32 NumToIgnore = 1)
	{
		NumRemainingIntervalsToIgnore = FMath::Max(NumToIgnore, NumRemainingIntervalsToIgnore);
	}

	/** @brief Closes state, writes summary if needed, and uploads data if needed.  Can only be done once. */
	void Close();
	
	/** @brief Writes summary data to file and/or API, and uploads any data requested, can only be called once */
	void WriteSummary();

	/** @brief Get the file path for the summary file, if it was written */
	FString GetSummaryFilePath() const
	{
		return SummaryFilePath;
	}

	/** @brief Get the file path for the timeline file, if it was written */
	FString GetTimelineFilePath() const
	{
		return TimelineFilePath;
	}

	/** @brief Retrieves the summary data in Json format */
	TSharedRef<FJsonObject> GetSummaryJson() const;
	
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

	/** Number of remaining intervals to ignore for summary (decremented at the end of each interval) */
	UPROPERTY(BlueprintReadOnly, Category="PlayerExperience")
	int32 NumRemainingIntervalsToIgnore;

	UPROPERTY(BlueprintReadOnly, Transient, Category="PlayerExperience")
	URH_PEXStatGroupsTopLevel* TopLevelStatGroup;

	/** Internal helper to upload a file to remote file storage */
	void UploadFile(const FString& FilePath, const FString& RemoteFileName) const;

	/** Local file archive to write timeline data to */
	class FArchive* TimelineFileCSV;

	/** Cached file path for timeline file */
	UPROPERTY(BlueprintReadOnly, Transient, Category="PlayerExperience")
	FString TimelineFilePath;

	/** Cached file path for summary file */
	UPROPERTY(BlueprintReadOnly, Transient, Category="PlayerExperience")
	FString SummaryFilePath;
};

//////////////////////////////////////////////////////////////////////////////////////

/** @brief Stat group for capturing primary stats */
UCLASS(MinimalAPI)
class URH_PEXPrimaryStats : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	enum class ECaptureStat : uint8
	{
		FrameTime,
		GameThreadTime,
		RenderThreadTime,
		RHIThreadTime,
		GPUTime,
		DeltaTime,
		GameThreadWaitTime,
		FlushLoadingTime,
	
		MemoryWS,
		MemoryVB,
		CPUProcess,
		CPUMachine,

		Max
	};
	FORCEINLINE FRH_StatAccumulator& GetCaptureStat(ECaptureStat Stat) { return Stats[static_cast<uint8>(Stat)]; }
	FORCEINLINE const FRH_StatAccumulator& GetCaptureStat(ECaptureStat Stat) const { return Stats[static_cast<uint8>(Stat)]; }

	enum class ECaptureCounter : uint8
	{
		TickCount,
		DelayedTickCount,
		LevelLoadCompleted,

		Max
	};
	FORCEINLINE FRH_StatCounter& GetCaptureCounter(ECaptureCounter Counter) { return Counters[static_cast<uint8>(Counter)]; }
	FORCEINLINE const FRH_StatCounter& GetCaptureCounter(ECaptureCounter Counter) const { return Counters[static_cast<uint8>(Counter)]; }

	URH_PEXPrimaryStats();

	/** @brief Initialize the stat group and any children.  May add non-dynamic groups and init them as well */
	virtual void Init(const URH_PEXCollectorConfig* InConfig, const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;

	/** @brief Fill in a API PEX host summary report with the summary data */
	virtual void GetPEXHostSummary(FRHAPI_PexHostRequest& Report) const
	{
		Super::GetPEXHostSummary(Report);
		
		PEX_ADD_INDEXED_STAT_TO_REPORT(FrameTime, FrameTime);
		PEX_ADD_INDEXED_STAT_TO_REPORT(DeltaTime, DeltaTime);
		PEX_ADD_INDEXED_STAT_TO_REPORT(MemoryWS, MemoryWs);
		PEX_ADD_INDEXED_STAT_TO_REPORT(MemoryVB, MemoryVb);
		PEX_ADD_INDEXED_STAT_TO_REPORT(CPUProcess, CpuProcess);
		
		PEX_ADD_INDEXED_COUNTER_TO_REPORT(TickCount, TickCount);
		PEX_ADD_INDEXED_COUNTER_TO_REPORT(DelayedTickCount, DelayedTickCount);
	}

	/** @brief Fill in a API PEX client summary report with the summary data */
	virtual void GetPEXClientSummary(FRHAPI_PexClientRequest& Report) const
	{
		Super::GetPEXClientSummary(Report);
		
		PEX_ADD_INDEXED_STAT_TO_REPORT(FrameTime, FrameTime);
		PEX_ADD_INDEXED_STAT_TO_REPORT(DeltaTime, DeltaTime);
		PEX_ADD_INDEXED_STAT_TO_REPORT(MemoryWS, MemoryWs);
		PEX_ADD_INDEXED_STAT_TO_REPORT(MemoryVB, MemoryVb);
		PEX_ADD_INDEXED_STAT_TO_REPORT(CPUProcess, CpuProcess);

		PEX_ADD_INDEXED_STAT_TO_REPORT(GameThreadTime, GameThreadTime);
		PEX_ADD_INDEXED_STAT_TO_REPORT(RenderThreadTime, RenderThreadTime);
		PEX_ADD_INDEXED_STAT_TO_REPORT(RHIThreadTime, GpuTime);
		
		PEX_ADD_INDEXED_COUNTER_TO_REPORT(TickCount, TickCount);
        PEX_ADD_INDEXED_COUNTER_TO_REPORT(DelayedTickCount, DelayedTickCount);
	}
};

/** @brief Stat group for capturing whole-state network stats */
UCLASS(MinimalAPI)
class URH_PEXNetworkStats_Base : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	enum class ECaptureStat : uint8
	{
		ConnectionCount,
		Ping,
		InPackets,
		OutPackets,
		TotalPackets,
		InPacketsLost,
		OutPacketsLost,
		TotalPacketsLost,
		InPacketLossPct,
		OutPacketLossPct,
		TotalPacketLossPct,

		Max
	};
	FORCEINLINE FRH_StatAccumulator& GetCaptureStat(ECaptureStat Stat) { return Stats[static_cast<uint8>(Stat)]; }
    FORCEINLINE const FRH_StatAccumulator& GetCaptureStat(ECaptureStat Stat) const { return Stats[static_cast<uint8>(Stat)]; }

	URH_PEXNetworkStats_Base();

	
	/** @brief Fill in a API PEX host summary report with the summary data */
	virtual void GetPEXHostSummary(FRHAPI_PexHostRequest& Report) const
	{
		Super::GetPEXHostSummary(Report);
		
		PEX_ADD_INDEXED_STAT_TO_REPORT(ConnectionCount, ConnectionCount);
		PEX_ADD_INDEXED_STAT_TO_REPORT(Ping, Ping);
		PEX_ADD_INDEXED_STAT_TO_REPORT(InPackets, InPackets);
		PEX_ADD_INDEXED_STAT_TO_REPORT(OutPackets, OutPackets);
		PEX_ADD_INDEXED_STAT_TO_REPORT(TotalPackets, TotalPackets);
		PEX_ADD_INDEXED_STAT_TO_REPORT(InPacketsLost, InPacketLoss);
		PEX_ADD_INDEXED_STAT_TO_REPORT(OutPacketsLost, OutPacketLoss);
		PEX_ADD_INDEXED_STAT_TO_REPORT(TotalPacketsLost, TotalPacketLoss);
		PEX_ADD_INDEXED_STAT_TO_REPORT(InPacketLossPct, InPacketLossPct);
		PEX_ADD_INDEXED_STAT_TO_REPORT(OutPacketLossPct, OutPacketLossPct);
		PEX_ADD_INDEXED_STAT_TO_REPORT(TotalPacketLossPct, TotalPacketLossPct);
	}

	/** @brief Fill in a API PEX client summary report with the summary data */
	virtual void GetPEXClientSummary(FRHAPI_PexClientRequest& Report) const
	{
		Super::GetPEXClientSummary(Report);
		
		PEX_ADD_INDEXED_STAT_TO_REPORT(Ping, Ping);
		PEX_ADD_INDEXED_STAT_TO_REPORT(InPackets, InPackets);
		PEX_ADD_INDEXED_STAT_TO_REPORT(OutPackets, OutPackets);
		PEX_ADD_INDEXED_STAT_TO_REPORT(TotalPackets, TotalPackets);
		PEX_ADD_INDEXED_STAT_TO_REPORT(InPacketsLost, InPacketLoss);
		PEX_ADD_INDEXED_STAT_TO_REPORT(OutPacketsLost, OutPacketLoss);
		PEX_ADD_INDEXED_STAT_TO_REPORT(TotalPacketsLost, TotalPacketLoss);
		PEX_ADD_INDEXED_STAT_TO_REPORT(InPacketLossPct, InPacketLossPct);
		PEX_ADD_INDEXED_STAT_TO_REPORT(OutPacketLossPct, OutPacketLossPct);
		PEX_ADD_INDEXED_STAT_TO_REPORT(TotalPacketLossPct, TotalPacketLossPct);
	}
};


/** @brief Stat group for capturing global network stats */
UCLASS(MinimalAPI)
class URH_PEXNetworkStats_Global : public URH_PEXNetworkStats_Base
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats_Global()
	{
		GroupName = TEXT("GlobalNetworkStats");
	}
	
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;	
};

class UNetConnection;


/** @brief Stat group for capturing per-player network stats */
UCLASS(MinimalAPI)
class URH_PEXNetworkStats_Connection : public URH_PEXNetworkStats_Base
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats_Connection()
	{
		GroupName = TEXT("ConnectionNetworkStats");
	}

	void InitForConnection(const UNetConnection* InConnection);

	TWeakObjectPtr<const UNetConnection> Connection;
	
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;	
};

/** @brief Stat group for capturing a group of player network stats */
UCLASS(MinimalAPI)
class URH_PEXNetworkStats_Host : public URH_PEXNetworkStats_Base
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats_Host()
	{
		GroupName = TEXT("HostNetworkStats");
	}

	/** @brief Get or create a player's network stats */
	virtual void GetOrCreatePlayerNetworkStats(const class UNetConnection* Connection, URH_PEXNetworkStats_Connection*& OutPlayerNetworkStats);
	
	/** Per-player network stats, only used by summary */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	TMap<FGuid, URH_PEXNetworkStats_Connection*> PlayerNetworkStats;

	/** @brief Reset the summary state of all stats */
	virtual void ResetSummary() override
	{
		Super::ResetSummary();

		// when resetting the summary state, clear out all player network stats
		PlayerNetworkStats.Reset();
	}
	
	/** @brief Fill in a API PEX host summary report with the summary data */
	virtual void GetPEXHostSummary(FRHAPI_PexHostRequest& Report) const
	{
		Super::GetPEXHostSummary(Report);

		// inject player count into the summary
		{
			FRHAPI_PexCount PexCount;
			PexCount.SetCount(PlayerNetworkStats.Num());
			Report.SetTotalUniquePlayers(PexCount);
		}
	}

	virtual void EnsureConnectionTrackersExist(const TScriptInterface<IRH_PEXOwnerInterface>& Owner);
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
};


/** @brief Stat group for capturing a group of client's connection to server's network stats */
UCLASS(MinimalAPI)
class URH_PEXNetworkStats_Client : public URH_PEXNetworkStats_Connection
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats_Client()
	{
		GroupName = TEXT("ClientNetworkStats");
	}
	
	virtual void EnsureConnectionTrackersExist(const TScriptInterface<IRH_PEXOwnerInterface>& Owner);
	virtual void CapturePerFrameStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerSecondStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
};


/** @brief Stat group for capturing local whole-state network stats, plus per-player stats */
UCLASS(MinimalAPI)
class URH_PEXNetworkStats : public URH_PEXStatGroup
{
	GENERATED_BODY()
public:

	URH_PEXNetworkStats();
	
	/** Global network stats, used by summary and timeline */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	URH_PEXNetworkStats_Global* GlobalNetworkStats;

	/** Client's connection to host, only used by summary */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	URH_PEXNetworkStats_Client* ClientNetworkStats;

	/** Host's connection to clients, only used by summary */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="PlayerExperience")
	URH_PEXNetworkStats_Host* HostNetworkStats;

	/** @brief Fill in a API PEX host summary report with the summary data */
	virtual void GetPEXHostSummary(FRHAPI_PexHostRequest& Report) const
	{
		// Super::GetPEXHostSummary(Report);

		// the host reports the host network state from the host capture to the host capture summary
		HostNetworkStats->GetPEXHostSummary(Report);
	}

	/** @brief Fill in a API PEX client summary report with the summary data */
	virtual void GetPEXClientSummary(FRHAPI_PexClientRequest& Report) const
	{
		// Super::GetPEXClientSummary(Report);

		// the client reports the client network state from the client capture to the client capture summary
		ClientNetworkStats->GetPEXClientSummary(Report);
	}
};

/** @brief Stat group for capturing game stats */
UCLASS(MinimalAPI)
class URH_PEXGameStats : public URH_PEXStatGroup
{
	GENERATED_BODY()

public:
	enum class ECaptureStat : uint8
	{
		PlayerControllerCount,
		AIControllerCount,
		PawnCount,

		Max
	};
	FORCEINLINE FRH_StatAccumulator& GetCaptureStat(ECaptureStat Stat) { return Stats[static_cast<uint8>(Stat)]; }
	FORCEINLINE const FRH_StatAccumulator& GetCaptureStat(ECaptureStat Stat) const { return Stats[static_cast<uint8>(Stat)]; }

	URH_PEXGameStats();
	
	virtual void CapturePerIntervalStats(const TScriptInterface<IRH_PEXOwnerInterface>& Owner) override;
};


/** @brief Blueprintable stat group for capturing stats */
UCLASS(BlueprintType, Blueprintable)
class RALLYHEREINTEGRATION_API URH_PEXBlueprintableStats : public URH_PEXStatGroup
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
	void CaptureStatValue(FName StatName, float Value)
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
	void CaptureCounterValue(FName StatName, float Value)
	{
		for (int i = 0; i < Counters.Num(); ++i)
		{
			if (Counters[i].GetName() == StatName)
			{
				Counters[i].CaptureValue(Value);
				return;
			}
		}
	}	
};

//////////////////////////////////////////////////////////////////////////////////////

UCLASS()
class URH_PEXCollectorConfig_Test : public URH_PEXCollectorConfig_Host
{
	GENERATED_BODY()
};

UCLASS()
class URH_TestPEXOwner : public UObject, public IRH_PEXOwnerInterface
{
	GENERATED_BODY()

public:
	URH_TestPEXOwner()
	{
		PlayerId = FGuid::NewGuid();
		MatchId = FString("TestMatchID");
		bSendReportsToAPI = false;
	}
	UPROPERTY()
	FGuid PlayerId;
	UPROPERTY()
	FString MatchId;
	UPROPERTY()
	bool bSendReportsToAPI;

	mutable TOptional<FRHAPI_PexClientRequest> ClientReport;
	mutable TOptional<FRHAPI_PexHostRequest> HostReport;
	
	virtual UEngine* GetPEXEngine() const override { return GEngine; }
	virtual UWorld* GetPEXWorld() const override { return GEngine->GetWorld(); }
	virtual FString GetPEXMatchId() const override { return MatchId; }
	virtual FGuid GetPEXPlayerId() const override { return PlayerId; }
	virtual FRH_RemoteFileApiDirectory GetPEXRemoteFileDirectory() const override { return FRH_RemoteFileApiDirectory(); }
	virtual bool GetPEXIsHost() const override { return true; }
	virtual void SubmitPEXHostSummary(FRHAPI_PexHostRequest&& Report) const override;
	virtual void SubmitPEXClientSummary(FRHAPI_PexClientRequest&& Report) const override;

	virtual void ValidateReports(FAutomationTestBase* Test, const URH_PEXCollectorConfig* Config) const;
};

/** @} */