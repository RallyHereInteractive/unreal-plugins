#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RallyHereIntegrationModule.h"
#include "imgui.h"
#include "Engine/World.h"
#include "RH_ImGuiUtilities.h"
#include "RH_Diagnostics.h"

#include "RHDTW_About.h"

// used for copy support
#if PLATFORM_ALLOWS_COPY
#include "HAL/PlatformApplicationMisc.h"
#endif

FRHDTW_About::FRHDTW_About()
	: Super(),
	DiagnosticReportGenerator(MakeShared<FRH_DiagnosticReportGenerator>())
{
	DiagnosticExportMessage.Empty();
}

FRHDTW_About::~FRHDTW_About()
{
}

void FRHDTW_About::Do()
{
	TSharedPtr<FJsonObject> Metadata = DiagnosticReportGenerator->Metadata;
	if (Metadata == nullptr)
	{
		RefreshDiagnosticMetadata();
	}

	ImGuiDisplayJsonObject(Metadata, true);
	ImGui::Text("");

	if (ImGui::Button("Refresh Info"))
	{
		RefreshDiagnosticMetadata();
	}
	ImGui::SameLine();
	if (ImGui::Button("Generate Full Diagnostic"))
	{
		FRH_DiagnosticReportOptions Options;
		Options.World = GetWorld();
		GetGameInstance();
		Options.bWriteToFile = true;
		Options.OnReportComplete.BindLambda([](const TSharedRef<const FRH_DiagnosticReportGenerator>& Report)
			{
#if PLATFORM_ALLOWS_COPY
				// copy the filename to the clipboard
				FPlatformApplicationMisc::ClipboardCopy(*Report->ReportFilename);
#endif
			});
		FRallyHereIntegrationModule::Get().GetDiagnostics()->GenerateReport(Options);

		DiagnosticExportMessage = TEXT("Diagnostic generated at ") + FDateTime::Now().ToString();
	}
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
	{
#if PLATFORM_ALLOWS_COPY
		ImGui::SetTooltip("Generate a full diagnostic JSON file, and copies the filename to clipboard.");
#else
		ImGui::SetTooltip("Generate a full diagnostic JSON file.");
#endif
	}
	ImGui::Text("%s", TCHAR_TO_UTF8(*DiagnosticExportMessage));
}

void FRHDTW_About::RefreshDiagnosticMetadata()
{
	if (DiagnosticReportGenerator->CanStart())
	{
		FRH_DiagnosticReportOptions Options(FRH_DiagnosticReportOptions::AllDisabled);
		Options.bIncludeMetadata = true;
		Options.World = GetWorld();
		DiagnosticReportGenerator->Start(Options);
	}
}