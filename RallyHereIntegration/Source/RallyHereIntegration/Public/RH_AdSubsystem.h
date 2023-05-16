#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "AdOpportunity.h"
#include "AdAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_AdSubsystem.generated.h"

UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_AdSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()
public:
    virtual void Initialize() override;
    virtual void Deinitialize() override;

    FHttpRequestPtr BeginNewSession(RallyHereAPI::FRequest_BeginNewSession Request = RallyHereAPI::FRequest_BeginNewSession(),
                                    const RallyHereAPI::FDelegate_BeginNewSession& Delegate =
                                        RallyHereAPI::FDelegate_BeginNewSession());
    FHttpRequestPtr FindOpportunities(RallyHereAPI::FRequest_FindOpportunities Request = RallyHereAPI::FRequest_FindOpportunities(),
                                      const RallyHereAPI::FDelegate_FindOpportunities& Delegate =
                                          RallyHereAPI::FDelegate_FindOpportunities());
    FHttpRequestPtr UpdateOpportunityById(RallyHereAPI::FRequest_UpdateOpportunityById Request,
                                          const RallyHereAPI::FDelegate_UpdateOpportunityById& Delegate =
                                              RallyHereAPI::FDelegate_UpdateOpportunityById());

    UFUNCTION()
    FString GetAdApiToken() const;

    const TArray<FRHAPI_AdOpportunity>& GetOpportunities() const;

    UFUNCTION()
    static bool GetCodesFromLocale(FString& OutLangCode, FString& OutCountryCode);

private:
    virtual void OnUserChanged() override;
    void OnBeginNewSession(const RallyHereAPI::FResponse_BeginNewSession& Resp,
                           RallyHereAPI::FDelegate_BeginNewSession Delegate);
    void OnFindOpportunities(const RallyHereAPI::FResponse_FindOpportunities& Resp,
                             RallyHereAPI::FDelegate_FindOpportunities Delegate);
    void OnUpdateOpportunityById(const RallyHereAPI::FResponse_UpdateOpportunityById& Resp,
                                 RallyHereAPI::FDelegate_UpdateOpportunityById Delegate);

    TArray<FRHAPI_AdOpportunity> Opportunities;
    FString XHzAdApiToken;
};
