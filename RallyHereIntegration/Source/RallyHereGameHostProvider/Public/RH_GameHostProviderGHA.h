
#include "RH_GameHostProviderInterface.h"
#include "Tickable.h"

THIRD_PARTY_INCLUDES_START
#include "RH_GameHostAdapterFwd.h"
THIRD_PARTY_INCLUDES_END


/** @ingroup GameHostProviderInterface
 *  @{
 */

/** Implementation of IRH_GameHostProviderInterface for GameHostAdapter library */
class RALLYHEREGAMEHOSTPROVIDER_API FRH_GameHostProviderGHA : public IRH_GameHostProviderInterface, public FTickableGameObject
{
public:
	FRH_GameHostProviderGHA(const FString& Commandline);

	/** 
	* @brief Static accessor to check if GameHostAdapter library is loaded and availabile - note will attempt to load the library 
	* @return whether or not the library is loaded and available for Create() calls
	*/
	static bool IsAvailable();
	/**
	* @brief Static creation function, which takes in a commandline
	* @return Pointer to a valid (via IsValid()) FRH_GameHostProviderGHA object, or nullptr if it could not be created properly
	*/
	static FRH_GameHostProviderGHA* Create(const FString& Commandline);

	virtual bool IsValid() const override { return GameHostAdapter != nullptr; }

	virtual void BeginConnecting() override;
	virtual void BeginRegister() override;
	virtual void BeginReservation() override;
	virtual void BeginSelfAllocate() override;

	~FRH_GameHostProviderGHA();

	/** @brief FTickableGameObject interface - Ticks the object */
	virtual void Tick(float DeltaTime) override;
	/** @brief FTickableGameObject interface - Determines whether the object is tickable */
	virtual bool IsTickable() const override;
	/** @brief FTickableGameObject interface - Provides a TStatId for tracking excution time of ticking */
	virtual TStatId GetStatId() const override;

protected:
	RallyHereGameInstanceAdapterPtr GameHostAdapter;

	static void OnLogCallback(RallyHereLogLevel level, const char* message, size_t messagen, void* user_data);

	static void OnConnectCallback(const RallyHereStatusCode& code, void* user_data);
	void OnConnectComplete(const RallyHereStatusCode& code);

	static void OnAllocatedCallback(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code, void* user_data);
	static void OnReadyCallback(const RallyHereStatusCode& code, void* user_data);
	void OnRegisterComplete(const RallyHereStatusCode& code);

	void OnAllocationComplete(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code);
	void OnAllocationTookTooLong();

	static void OnReservationCallback(const RallyHereStatusCode& code, void* user_data);
	void OnReservationComplete(const RallyHereStatusCode& code);

	static void OnSelfAllocateCallback(const RallyHereStatusCode& code, void* user_data);
	void OnSelfAllocateComplete(const RallyHereStatusCode& code);

	static void OnSoftStopRequestedCallback(const RallyHereStatusCode& code, void* user_data);
	void OnSoftStopRequested(const RallyHereStatusCode& code);
};

/** @} */