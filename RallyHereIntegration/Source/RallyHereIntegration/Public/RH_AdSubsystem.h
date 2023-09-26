#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "AdOpportunity.h"
#include "AdAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_AdSubsystem.generated.h"

/** @defgroup Ads RallyHere Ads
 *  @{
 */

/**
 * @brief Ad Subsystem used for serving and responging to ad operrtunities for players.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_AdSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()
public:
	/**
	* @brief Initialize the subsystem.
	*/
    virtual void Initialize() override;
	/**
	* @brief Safely tears down the subsystem.
	*/
    virtual void Deinitialize() override;
	/**
	* @brief Starts a session for serving ad oppertunities.
	* @param [in] Request Request information for obtaining a new session.
	* @param [in] Delegate Callback Delegate for when session creation is complete.
	* @return Http Request for the session creation.
 	*/
    FHttpRequestPtr BeginNewSession(RallyHereAPI::FRequest_BeginNewSession Request = RallyHereAPI::FRequest_BeginNewSession(),
                                    const RallyHereAPI::FDelegate_BeginNewSession& Delegate =
                                        RallyHereAPI::FDelegate_BeginNewSession());
	/**
	* @brief Attempts to find new ad oppertunities to present to the user.
	* @param [in] Request Request information for requesting new ads.
	* @param [in] Delegate Callback Delegate for when finding oppertunities is complete.
	* @return Http Request for the find oppertunities request.
	*/
    FHttpRequestPtr FindOpportunities(RallyHereAPI::FRequest_FindOpportunities Request = RallyHereAPI::FRequest_FindOpportunities(),
                                      const RallyHereAPI::FDelegate_FindOpportunities& Delegate =
                                          RallyHereAPI::FDelegate_FindOpportunities());
	/**
	* @brief Updates the status of an ad oppertunity.
	* @param [in] Request Request information for current ad oppertunities.
	* @param [in] Delegate Callback Delegate for when updating oppertunities is complete.
	* @return Http Request for the update oppertunities request.
	*/
    FHttpRequestPtr UpdateOpportunityById(RallyHereAPI::FRequest_UpdateOpportunityById Request,
                                          const RallyHereAPI::FDelegate_UpdateOpportunityById& Delegate =
                                              RallyHereAPI::FDelegate_UpdateOpportunityById());
	/**
	* @brief Gets the API token used to make quick ad oppertunity attempts for the same user.
	* @return The API Token.
	*/
    UFUNCTION()
    FString GetAdApiToken() const;
	/**
	* @brief Gets all ad oppertunities that have been been found during the session.
	* @return All ad oppertunities.
	*/
    const TArray<FRHAPI_AdOpportunity>& GetOpportunities() const;
	/**
	* @brief Gets country and language codes based on the clients localization settings.
	* @param [out] OutLangCode The language code.
	* @param [out] OutCountryCode The country code.
	* @return If true, language and country codes were successfully set.
	*/
    UFUNCTION()
    static bool GetCodesFromLocale(FString& OutLangCode, FString& OutCountryCode);

protected:
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
    virtual void OnUserChanged() override;
	/**
	 * @brief Handles the response to a Begin New Ad Session call.
	 * @param [in] Resp Response given for the call.
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
    virtual void OnBeginNewSession(const RallyHereAPI::FResponse_BeginNewSession& Resp, const RallyHereAPI::FDelegate_BeginNewSession Delegate);
	/**
	 * @brief Handles the response to a Find Ad Oppertunities call.
	 * @param [in] Resp Response given for the call.
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
    virtual void OnFindOpportunities(const RallyHereAPI::FResponse_FindOpportunities& Resp, const RallyHereAPI::FDelegate_FindOpportunities Delegate);
	/**
	 * @brief Handles the response to a Update Ad Oppertunities call.
	 * @param [in] Resp Response given for the call.
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
    virtual void OnUpdateOpportunityById(const RallyHereAPI::FResponse_UpdateOpportunityById& Resp, const RallyHereAPI::FDelegate_UpdateOpportunityById Delegate);
	/** @brief Cached Ad Oppertunities. */
    TArray<FRHAPI_AdOpportunity> Opportunities;
	/** @brief Ad API token used by the subsystem to make ad calls. */
    FString XHzAdApiToken;
};

/** @} */