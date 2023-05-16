
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Templates/SharedPointer.h"
#include "Delegates/Delegate.h"
#include "Delegates/DelegateCombinations.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_SessionData.h"

#include "RH_SessionBrowser.generated.h"

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionBrowserSearchParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FString SessionType;

	UPROPERTY()
	int32 Cursor;

	UPROPERTY()
	int32 PageSize;

	FRH_SessionBrowserSearchParams()
		:	Cursor(INDEX_NONE)
		,	PageSize(-1)
	{}

	FString GetDescription() const
	{
		return FString::Printf(TEXT("%s: #%d @%d"), *SessionType, Cursor, PageSize);
	}
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionBrowserSearchResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FRH_SessionBrowserSearchParams SearchParams;

	UPROPERTY()
	TArray<TWeakObjectPtr<URH_SessionView>> Sessions;

	FString GetDescription() const
	{
		return FString::Printf(TEXT("Session Count: %d, Search: {%s}"), Sessions.Num(), *SearchParams.GetDescription());
	}
};


// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnSessionSearchCompleteDynamicDelegate, bool, bSuccess, const FRH_SessionBrowserSearchResult&, SearchResult);
DECLARE_DELEGATE_TwoParams(FRH_OnSessionSearchCompleteDelegate, bool, const FRH_SessionBrowserSearchResult&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnSessionSearchCompleteDelegateBlock, FRH_OnSessionSearchCompleteDelegate, FRH_OnSessionSearchCompleteDynamicDelegate, bool, const FRH_SessionBrowserSearchResult&);

// Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_SessionBrowserCache : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	URH_SessionBrowserCache();

	UFUNCTION(BlueprintCallable, Category = "Session Browser", meta = (DisplayName = "Search For Sessions", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Search(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDynamicDelegate Delegate) { Search(params, Delegate); }
	void Search(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDelegateBlock Delegate = FRH_OnSessionSearchCompleteDelegateBlock());

	UFUNCTION(BlueprintPure, Category = "Session Browser")
	URH_SessionView* GetSessionById(const FString& SessionId) const
	{
		auto ptr = Sessions.Find(SessionId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}

	TOptional<FString> GetETagForSession(const FString& SessionId) const
	{
		const auto* Session = GetSessionById(SessionId);
		if (Session != nullptr)
		{
			return Session->GetETag();
		}
		return TOptional<FString>();
	}

	UFUNCTION(BlueprintPure, Category = "Session")
	bool GetTemplate(const FString& Type, FRH_SessionTemplate& Template) const;

	void ImportAPISession(const FRH_APISessionWithETag& Session);
	void ImportAPITemplate(const FRH_APISessionTemplateWithETag& Template);

	void ClearCache(bool bClearTemplates = false)
	{
		Sessions.Reset();
		if (bClearTemplates) Templates.Reset();
	}

private:
	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, FRH_SessionTemplate> Templates;

	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, URH_SessionView*> Sessions;
};