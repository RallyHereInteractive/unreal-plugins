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

/** Bindable delegate to get custom metadata to add to diagnostic reports.  Can be used by a project to add data to the Metadata section. */
DECLARE_DELEGATE_RetVal(TSharedPtr<FJsonObject>, FGetCustomDiagnosticMetadata);


class FRH_DiagnosticReportGenerator;

/** Bindable delegate to notify that a report generation is complete */
DECLARE_DELEGATE_OneParam(FRH_OnDiagnosticReportComplete, const TSharedRef<const FRH_DiagnosticReportGenerator>&);

/**
* @brief Options for generating a diagnostic report.
*/
USTRUCT(BlueprintType)
struct FRH_DiagnosticReportOptions
{
	GENERATED_BODY()

	/** Whether to include metadata in the report */
	UPROPERTY()
	bool bIncludeMetadata;

	/** Whether to include web request data in the report */
	UPROPERTY()
	bool bIncludeWebRequests;

	/** Whether to write to a file when the report is complete */
	UPROPERTY()
	bool bWriteToFile;
	/** Optional filename to write the report to if bWiteToFile is set (otherwise, generates a name) */
	UPROPERTY()
	FString OutputFilename;

	/** Whether to write to cloud when the report is complete */
	UPROPERTY()
	bool bWriteToCloud;

	/** World to use to acquire RH subsystems and information */
	UPROPERTY()
	TWeakObjectPtr<UWorld> World;

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

			bWriteToFile = true;
			bWriteToCloud = true;
		}
		else // if (Preset == AllDisabled)
		{
			bIncludeMetadata = false;
			bIncludeWebRequests = false;

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
		static FString Name(TEXT("FRH_DiagnosticReportGenerator"));
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

	/** Final combined report */
	TSharedPtr<FJsonObject> FinalReport;
	/** Filename the report was written to (if requested) */
	FString ReportFilename;
	/** Whether the cloud write was successful (if requested) */
	bool bCloudWriteSuccesful;
};


/**
 * @brief Class to handle initializing and running a diagnostic (blueprint compatible).  Tracks and stores local state from the running engine for tracking previous errors.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_Diagnostics : public UObject
{
	GENERATED_BODY()

public:
	/**
	* @brief Initialize the system.
	*/
	void Initialize();
	/**
	* @brief Safely tears down the system.
	*/
	void Uninitialize();
	
	/**
	* @brief Clears the diagnostics cache
	*/
	void ClearCache()
	{
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
	UFUNCTION(Category = "RallyHere | Diagnostics")
	void GenerateReport(const FRH_DiagnosticReportOptions& Options) const;

private:

};

/** @} */