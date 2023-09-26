#include "RH_AdSubsystem.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "Internationalization/Internationalization.h"
#include "Internationalization/Culture.h"

void URH_AdSubsystem::Initialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
    Opportunities = {};
    XHzAdApiToken = {};
}

void URH_AdSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
    Opportunities = {};
    XHzAdApiToken = {};
}

void URH_AdSubsystem::OnUserChanged()
{
	Super::OnUserChanged();

    // Reset opportunities and token when then login data changes
    Opportunities = {};
    XHzAdApiToken = {};
}

FString URH_AdSubsystem::GetAdApiToken() const
{
    return XHzAdApiToken;
}

const TArray<FRHAPI_AdOpportunity>& URH_AdSubsystem::GetOpportunities() const
{
    return Opportunities;
}

FHttpRequestPtr URH_AdSubsystem::BeginNewSession(RallyHereAPI::FRequest_BeginNewSession Request,
                                                 const RallyHereAPI::FDelegate_BeginNewSession& Delegate)
{
    if (Request.BodyBeginNewSession.CountryCode.IsEmpty())
    {
        FString Lang;
        GetCodesFromLocale(Lang, Request.BodyBeginNewSession.CountryCode);
        if (Lang.IsEmpty() || Request.BodyBeginNewSession.CountryCode.IsEmpty())
        {
            return nullptr;
        }
    }
    if (!Request.AuthContext)
    {
        Request.AuthContext = GetAuthContext();
    }
    if (!Request.XHzAdApiToken.IsSet() || Request.XHzAdApiToken->IsEmpty())
    {
        Request.XHzAdApiToken = XHzAdApiToken;
    }
    return RH_APIs::GetAdAPI().BeginNewSession(Request,
                                                                                RallyHereAPI::FDelegate_BeginNewSession::CreateUObject(
                                                                                    this, &URH_AdSubsystem::OnBeginNewSession,
                                                                                    Delegate), GetDefault<URH_IntegrationSettings>()->BeginNewAdSessionPriority);
}

void URH_AdSubsystem::OnBeginNewSession(const RallyHereAPI::FResponse_BeginNewSession& Resp,
                                        const RallyHereAPI::FDelegate_BeginNewSession Delegate)
{
    if (Resp.IsSuccessful() && !Resp.XHzAdApiToken.IsSet() && !Resp.XHzAdApiToken->IsEmpty())
    {
        XHzAdApiToken = Resp.XHzAdApiToken.GetValue();
    }
    Delegate.ExecuteIfBound(Resp);
}

FHttpRequestPtr URH_AdSubsystem::FindOpportunities(RallyHereAPI::FRequest_FindOpportunities Request,
                                                   const RallyHereAPI::FDelegate_FindOpportunities& Delegate)
{
    if (Request.BodyFindOpportunities.CountryCode.IsEmpty()
        || Request.BodyFindOpportunities.LanguageCode.IsEmpty())
    {
        GetCodesFromLocale(Request.BodyFindOpportunities.LanguageCode,
                           Request.BodyFindOpportunities.CountryCode);
        if (Request.BodyFindOpportunities.LanguageCode.IsEmpty()
            || Request.BodyFindOpportunities.CountryCode.IsEmpty())
        {
            return nullptr;
        }
    }
    if (!Request.AuthContext)
    {
        Request.AuthContext = GetAuthContext();
    }
    if (!Request.XHzAdApiToken.IsSet() || Request.XHzAdApiToken->IsEmpty())
    {
        Request.XHzAdApiToken = XHzAdApiToken;
    }
    return RH_APIs::GetAdAPI().FindOpportunities(Request,
                                                                                  RallyHereAPI::FDelegate_FindOpportunities::CreateUObject(
                                                                                      this, &URH_AdSubsystem::OnFindOpportunities,
                                                                                      Delegate), GetDefault<URH_IntegrationSettings>()->FindAdOppertunitiesPriority);
}

void URH_AdSubsystem::OnFindOpportunities(const RallyHereAPI::FResponse_FindOpportunities& Resp,
                                          const RallyHereAPI::FDelegate_FindOpportunities Delegate)
{
    if (Resp.IsSuccessful())
    {
        if (Resp.XHzAdApiToken.IsSet() && !Resp.XHzAdApiToken->IsEmpty())
        {
            XHzAdApiToken = Resp.XHzAdApiToken.GetValue();
        }
        Opportunities = Resp.Content.Opportunities;
    }
    Delegate.ExecuteIfBound(Resp);
}

FHttpRequestPtr URH_AdSubsystem::UpdateOpportunityById(RallyHereAPI::FRequest_UpdateOpportunityById Request,
                                                       const RallyHereAPI::FDelegate_UpdateOpportunityById& Delegate)
{
    if (!Request.AuthContext)
    {
        Request.AuthContext = GetAuthContext();
    }
    if (!Request.XHzAdApiToken.IsSet() || Request.XHzAdApiToken->IsEmpty())
    {
        Request.XHzAdApiToken = XHzAdApiToken;
    }
    return RH_APIs::GetAdAPI().UpdateOpportunityById(Request,
                                                     RallyHereAPI::FDelegate_UpdateOpportunityById::CreateUObject(
                                                         this,
                                                         &URH_AdSubsystem::OnUpdateOpportunityById,
                                                         Delegate), GetDefault<URH_IntegrationSettings>()->UpdateAdOppertunitiesPriority);
}

void URH_AdSubsystem::OnUpdateOpportunityById(const RallyHereAPI::FResponse_UpdateOpportunityById& Resp,
                                              const RallyHereAPI::FDelegate_UpdateOpportunityById Delegate)
{
    if (Resp.IsSuccessful() && Resp.XHzAdApiToken.IsSet() && !Resp.XHzAdApiToken->IsEmpty())
    {
        XHzAdApiToken = Resp.XHzAdApiToken.GetValue();
    }
    Delegate.ExecuteIfBound(Resp);
}

bool URH_AdSubsystem::GetCodesFromLocale(FString& OutLangCode, FString& OutCountryCode)
{
    FCultureRef CurrentCulture = FInternationalization::Get().GetCurrentLanguage();
    FCultureRef DefaultCulture = FInternationalization::Get().GetDefaultLanguage();
    if (!CurrentCulture->GetThreeLetterISOLanguageName().IsEmpty())
    {
        OutLangCode = CurrentCulture->GetThreeLetterISOLanguageName();
    }
    else if (!DefaultCulture->GetThreeLetterISOLanguageName().IsEmpty())
    {
        OutLangCode = DefaultCulture->GetThreeLetterISOLanguageName();
    }
    else
    {
        // Can't continue and make a valid request if there is no language code
        return false;
    }

    if (!CurrentCulture->GetRegion().IsEmpty())
    {
        OutCountryCode = CurrentCulture->GetRegion();
    }
    else if (!DefaultCulture->GetRegion().IsEmpty())
    {
        OutCountryCode = DefaultCulture->GetRegion();
    }
    else if (!OutLangCode.IsEmpty())
    {
        // There is a language code but no country. However, we can use a backup associated with the language.
        // Maps alpha-3 country code to a default ISO 3166-1 alpha-2 country code
        static TMap<FString, FString> LangCountryMap = {
            {"deu", "DE"},
            {"eng", "US"},
            {"spa", "ES"},
            {"fra", "FR"},
            {"jpn", "JP"},
            {"pol", "PL"},
            {"por", "PT"},
            {"rus", "RU"},
            {"tur", "TR"},
            {"zho", "CN"},
        };

        if (FString* MappedCountry = LangCountryMap.Find(OutLangCode))
        {
            OutCountryCode = *MappedCountry;
        }
        else
        {
            OutCountryCode = "US";
        }
    }

    return true;
}
