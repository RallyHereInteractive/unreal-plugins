// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAll.h"
#include "RallyHereAPIHelpers.h"

#include "RH_Common.h"

#include "RH_Diagnostics.generated.h"

/** @defgroup Diagnostics RallyHere Diagnostics
 *  @{
 */

/** Bindable delegate to modify custom metadata to add to diagnostic reports.  Can be used by a project to add data to the Metadata section. */
DECLARE_DELEGATE_OneParam(FGetCustomDiagnosticMetadata, FRHAPI_JsonObject&);

class FRH_DiagnosticReportGenerator;
class FRH_Diagnostics;

/** Bindable delegate to notify that a report generation is complete. */
DECLARE_DELEGATE_OneParam(FRH_OnDiagnosticReportComplete, const TSharedRef<const FRH_DiagnosticReportGenerator>&);

/**
* @brief Options for generating a diagnostic report.
*/
USTRUCT(BlueprintType)
struct FRH_DiagnosticReportOptions
{
	GENERATED_BODY()

	/** Whether to include metadata in the report */
	UPROPERTY(BlueprintReadWrite, Category="Diagnostics|Options")
	bool bIncludeMetadata;

	/** Metadata to include in the report */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	FRHAPI_JsonObject CustomMetadata;

	/** Whether to include web request data in the report */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	bool bIncludeWebRequests;

	/** Whether to include device data in the report */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	bool bIncludeDeviceData;

	/** Whether to include errors data in the report */
	UPROPERTY()
	bool bIncludeErrors;

	/** Whether to write to a file when the report is complete */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	bool bWriteToFile;
	/** Optional filename to write the report to if bWiteToFile is set (otherwise, generates a name) */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	FString OutputFilename;

	/** Whether to write to cloud when the report is complete */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	bool bWriteToCloud;

	/** World to use to acquire RH subsystems and information */
	UPROPERTY(BlueprintReadWrite, Category = "Diagnostics|Options")
	TWeakObjectPtr<UWorld> World;

	/** Diagnostics object to use to pull tracked diagnostics */
	TWeakPtr<const FRH_Diagnostics> DiagnosticsTracker;

	/** Delegate fired when report is complete */
	FRH_OnDiagnosticReportComplete OnReportComplete;

	/** Default constructor, defaults to everything enabled */
	FRH_DiagnosticReportOptions() : FRH_DiagnosticReportOptions(DiagnosticReportPreset::AllEnabled)
	{}

	/** Preset for enabling/disabling various diagnostic report options */
	enum DiagnosticReportPreset
	{
		/** Enable all options */
		AllEnabled,
		/** Disable all options */
		AllDisabled
	};

	/** Preset constructor, for ease of use */
	FRH_DiagnosticReportOptions(DiagnosticReportPreset Preset)
	{
		if (Preset == AllEnabled)
		{
			bIncludeMetadata = true;
			bIncludeWebRequests = true;
			bIncludeDeviceData = true;
			bIncludeErrors = true;

			bWriteToFile = true;
			bWriteToCloud = true;
		}
		else // if (Preset == AllDisabled)
		{
			bIncludeMetadata = false;
			bIncludeWebRequests = false;
			bIncludeDeviceData = false;
			bIncludeErrors = false;

			bWriteToFile = false;
			bWriteToCloud = false;
		}
	}
};


/**
 * @brief Report generator worker, which is responsible for collecting information from various locations, organizing the report, and then writing it to a destination
 */
class RALLYHEREINTEGRATION_API FRH_DiagnosticReportGenerator : public FRH_AsyncTaskHelper
{
public:
	/** Default constructor */
	FRH_DiagnosticReportGenerator()
		: Stage(ReportGenerationStage::Unstarted)
		, bCloudWriteSuccesful(false)
	{
	}

	/** Generation stage for report generation */
	enum class ReportGenerationStage : uint8
	{
		Unstarted,
		Metadata,
		WebRequests,
		DeviceData,
		Errors,

		FinalReport,
		WriteToFile,
		WriteToCloud,
		Complete
	};

	/** Check if report generation can start based on the current stage. */
	virtual bool CanStart() const { return Stage == ReportGenerationStage::Unstarted || Stage == ReportGenerationStage::Complete; }

	/** Start generating a report with the given options */
	virtual void Start(const FRH_DiagnosticReportOptions& InOptions)
	{
		Started();

		check(CanStart());

		Stage = ReportGenerationStage::Unstarted;
		Options = InOptions;

		StageComplete();
	}

protected:
	/** Called when a stage is complete, increments the stage and calls the appropriate function to start the next stage */
	void StageComplete()
	{
		// increment stage
		Stage = (ReportGenerationStage)((uint8)Stage+1);

		switch (Stage)
		{
			case ReportGenerationStage::Metadata:
			{
				GenerateMetadata();
				break;
			}
			case ReportGenerationStage::WebRequests:
			{
				GenerateWebRequests();
				break;
			}
			case ReportGenerationStage::DeviceData:
			{
				GenerateDeviceData();
				break;
			}
			case ReportGenerationStage::Errors:
			{
				GenerateErrorsData();
				break;
			}
			case ReportGenerationStage::FinalReport:
			{
				GenerateFinalReport();
				break;
			}
			case ReportGenerationStage::WriteToFile:
			{
				WriteToFile();
				break;
			}
			case ReportGenerationStage::WriteToCloud:
			{
				WriteToCloud();
				break;
			}
			case ReportGenerationStage::Complete:
			{
				Completed(true);
				break;
			}

			default:
			{
				Failed(FString::Printf(TEXT("Unrecognized stage %d"), (uint8)Stage));
				break;
			}
		}
	}

	/**
	* @brief generates the Metadata object
	*/
	void GenerateMetadata();
	/**
	* @brief Generates the WebRequests object
	*/
	void GenerateWebRequests();
	/**
	* @brief Generates the DeviceData object
	*/
	void GenerateDeviceData();
	/**
	* @brief Generates the Errors object
	*/
	void GenerateErrorsData();

	/**
	* @brief Generates a final report in JSON format, stores in Report, and then triggers a delegate
	*/
	void GenerateFinalReport();
	/**
	* @brief Writes the current Report value to the filename specified in options (or a default filename if none is specified)
	*/
	void WriteToFile();
	/**
	* @brief Writes the current Report value to the cloud (based on the RallyHere integration settings)
	*/
	void WriteToCloud();

	/**
	* @brief Gets the name of this object for reporting and debugging
	*/
	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_DiagnosticReportGenerator"));
		return Name;
	}
	/**
	* @brief Execute completion callback
	*/
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Options.OnReportComplete.ExecuteIfBound(StaticCastSharedRef<const FRH_DiagnosticReportGenerator>(this->AsShared()));
	}

	/** Options for generating the report */
	FRH_DiagnosticReportOptions Options;
	/** Current stage of report generation */
	ReportGenerationStage Stage;

public:
	// Output

	/** Metadata JSON generated by the report */
	TSharedPtr<FJsonObject> Metadata;
	/** Web Request JSON generated by the report */
	TSharedPtr<FJsonObject> WebRequests;
	/** Device Data JSON generated by the report */
	TSharedPtr<FJsonObject> DeviceData;
	/** Errors JSON generated by the report */
	TSharedPtr<FJsonObject> Errors;

	/** Final combined report */
	TSharedPtr<FJsonObject> FinalReport;
	/** Final combined report (serialized as string) */
	FString FinalReportString;
	/** Filename the report was written to (if requested) */
	FString ReportFilename;
	/** Whether the cloud write was successful (if requested) */
	bool bCloudWriteSuccesful;
};


/**
 * @brief Class to handle initializing and running a diagnostic.  Tracks and stores local state from the running engine for tracking previous errors.
 */
class RALLYHEREINTEGRATION_API FRH_Diagnostics : public TSharedFromThis<FRH_Diagnostics>
{
public:
	FRH_Diagnostics();
	virtual ~FRH_Diagnostics() = default;

	/**
	* @brief Initialize the system.
	*/
	virtual void Initialize();
	/**
	* @brief Safely tears down the system.
	*/
	virtual void Uninitialize();

	/**
	* @brief Clears the diagnostics cache
	*/
	virtual void ClearCache()
	{
		NetworkFailures.Reset();

		TravelFailures.Reset();
	}

	/**
	 * @brief Delegate to bind to to add extra custom data to the diagnostic report.
	 */
	FGetCustomDiagnosticMetadata CustomDiagnosticMetadataDelegate;

	/**
	 * @brief Generates a report in JSON format
	 * @param [in] World The context world object.
	 * @param [in] Options Options for the generated report.
	 * @return The generated object
	 */
	virtual void GenerateReport(const FRH_DiagnosticReportOptions& Options) const;

	struct FNetworkFailure
	{
		TWeakObjectPtr<UWorld> World;
		TWeakObjectPtr<UNetDriver> NetDriver;
		FString WorldName;
		FString NetDriverName;
		ENetworkFailure::Type Type;
		FString ErrorString;
		FDateTime TimeStamp;

		FNetworkFailure(UWorld* InWorld, UNetDriver* InNetDriver, ENetworkFailure::Type InType, const FString& InErrorString)
			: World(InWorld)
			, NetDriver(InNetDriver)
			, WorldName(InWorld != nullptr ? World->GetName() : TEXT(""))
			, NetDriverName(InNetDriver != nullptr ? NetDriver->GetName() : TEXT(""))
			, Type(InType)
			, ErrorString(InErrorString)
			, TimeStamp(FDateTime::UtcNow())
		{}

		TSharedRef<FJsonObject> ToJsonObject() const
		{
			TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
			JsonObject->SetStringField(TEXT("World"), WorldName);
			JsonObject->SetStringField(TEXT("NetDriver"), NetDriverName);
			JsonObject->SetStringField(TEXT("Type"), ENetworkFailure::ToString(Type));
			JsonObject->SetStringField(TEXT("ErrorString"), ErrorString);
			JsonObject->SetStringField(TEXT("Timestamp"), TimeStamp.ToIso8601());
			return JsonObject;
		}
	};

	TArray<FNetworkFailure> NetworkFailures;

	/**
	 * @brief Called when there was a network failure trying to connect to the instance.
	 * @param [in] World The world that was being connected to.
	 * @param [in] NetDriver The net driver that was being used to connect.
	 * @param [in] FailureType The type of failure that occurred.
	 * @param [in] ErrorString The error string associated with the failure.
	 */
	virtual void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString)
	{
		NetworkFailures.Add(FNetworkFailure(World, NetDriver, FailureType, ErrorString));
	}

	struct FTravelFailure
	{
		TWeakObjectPtr<UWorld> World;
		FString WorldName;
		ETravelFailure::Type Type;
		FString ErrorString;
		FDateTime TimeStamp;


		FTravelFailure(UWorld* InWorld, ETravelFailure::Type InType, const FString& InErrorString)
			: World(InWorld)
			, WorldName(InWorld != nullptr ? World->GetName() : TEXT(""))
			, Type(InType)
			, ErrorString(InErrorString)
			, TimeStamp(FDateTime::UtcNow())
		{}

		TSharedRef<FJsonObject> ToJsonObject() const
		{
			TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
			JsonObject->SetStringField(TEXT("World"), WorldName);
			JsonObject->SetStringField(TEXT("Type"), ETravelFailure::ToString(Type));
			JsonObject->SetStringField(TEXT("ErrorString"), ErrorString);
			JsonObject->SetStringField(TEXT("Timestamp"), TimeStamp.ToIso8601());
			return JsonObject;
		}
	};
	
	TArray<FTravelFailure> TravelFailures;

	/**
	 * @brief Called when there is a travel failure to the instance map.
	 * @param [in] pWorld The world that was being traveled to.
	 * @param [in] FailureType The type of failure that occurred.
	 * @param [in] ErrorString The error string associated with the failure.
	 */
	virtual void OnTravelFailure(UWorld* pWorld, ETravelFailure::Type FailureType, const FString& ErrorString)
	{
		TravelFailures.Add(FTravelFailure(pWorld, FailureType, ErrorString));
	}
};

/**
 * @brief Wrapper library to generate diagnostic reports via blueprint
 */
UCLASS()
class RALLYHEREINTEGRATION_API URH_DiagnosticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * @brief Generates a report in JSON format
	 * @param [in] World The context world object.
	 * @param [in] Options Options for the generated report.
	 * @return The generated object
	 */
	UFUNCTION(Category = "RallyHere | Diagnostics")
	static void GenerateReport(const FRH_DiagnosticReportOptions& Options);
};

/** @} */