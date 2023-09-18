#pragma once
#include "RH_DebugToolWindow.h"

struct FRHDTW_Analytics : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Analytics();
	virtual ~FRHDTW_Analytics();

	void Do() override;

protected:
	TArray<ANSICHAR> APINameFilterInput;
	TArray<ANSICHAR> URLFilterInput;

	int APINameCountPlotToggle;
	int URLCountPlotToggle;

#pragma region REUSABLE HELPERS
	void DoCallCountPlot(const TMap<FName, int32>& CountAllTime, TMap<FName, int32>& CountRecent, bool bAllTime, const FString& PlotName, const FString& CategoryName, const FString& FilterString);
	void DoTimelinePlot(class URH_WebRequests* WebRequestsTracker, const FString& FilterString, TFunctionRef<FName(struct FRH_WebRequest*)> GetKeyFromRequest);
	void DoTable(const TMap<FName, int32>& CountAllTime, TMap<FName, int32>& CountRecent, TMap<FName, TTuple<int32, int32>>& Bursts, const FString& TableName, const FString& CategoryName, const FString& FilterString);
#pragma endregion
};
