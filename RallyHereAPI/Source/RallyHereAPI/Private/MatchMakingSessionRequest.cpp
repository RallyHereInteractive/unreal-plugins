// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchMakingSessionRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchMakingSessionRequest

void FRHAPI_MatchMakingSessionRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("teams"));
	RallyHereAPI::WriteJsonValue(Writer, Teams);
	if (SessionTickets_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("session_tickets"));
		RallyHereAPI::WriteJsonValue(Writer, SessionTickets_Optional);
	}
	if (Sessions_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("sessions"));
		RallyHereAPI::WriteJsonValue(Writer, Sessions_Optional);
	}
	if (InstanceLaunchTemplateId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("instance_launch_template_id"));
		RallyHereAPI::WriteJsonValue(Writer, InstanceLaunchTemplateId_Optional);
	}
	if (InstanceRequestTemplateId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("instance_request_template_id"));
		RallyHereAPI::WriteJsonValue(Writer, InstanceRequestTemplateId_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("region_id"));
	RallyHereAPI::WriteJsonValue(Writer, RegionId);
	Writer->WriteIdentifierPrefix(TEXT("match_id"));
	RallyHereAPI::WriteJsonValue(Writer, MatchId);
	if (CustomData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_data"));
		RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
	}
	if (HostPlayerUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("host_player_uuid"));
		RallyHereAPI::WriteJsonValue(Writer, HostPlayerUuid_Optional);
	}
	if (BackfillId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("backfill_id"));
		RallyHereAPI::WriteJsonValue(Writer, BackfillId_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("match_create_request_time"));
	RallyHereAPI::WriteJsonValue(Writer, MatchCreateRequestTime);
	if (EvaluationScore_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("evaluation_score"));
		RallyHereAPI::WriteJsonValue(Writer, EvaluationScore_Optional);
	}
	if (RankQuality_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("rank_quality"));
		RallyHereAPI::WriteJsonValue(Writer, RankQuality_Optional);
	}
	Writer->WriteIdentifierPrefix(TEXT("match_making_profile_id"));
	RallyHereAPI::WriteJsonValue(Writer, MatchMakingProfileId);
	if (TicketAddedUnixTime_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("ticket_added_unix_time"));
		RallyHereAPI::WriteJsonValue(Writer, TicketAddedUnixTime_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_MatchMakingSessionRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonTeamsField = (*Object)->TryGetField(TEXT("teams"));
	const bool Teams_IsValid = JsonTeamsField.IsValid() && (!JsonTeamsField->IsNull() && TryGetJsonValue(JsonTeamsField, Teams));
	ParseSuccess &= Teams_IsValid; 
	const TSharedPtr<FJsonValue> JsonSessionTicketsField = (*Object)->TryGetField(TEXT("session_tickets"));
	if (JsonSessionTicketsField.IsValid())
	{
		SessionTickets_IsSet = TryGetJsonValue(JsonSessionTicketsField, SessionTickets_Optional);
		ParseSuccess &= SessionTickets_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSessionsField = (*Object)->TryGetField(TEXT("sessions"));
	if (JsonSessionsField.IsValid())
	{
		Sessions_IsSet = TryGetJsonValue(JsonSessionsField, Sessions_Optional);
		ParseSuccess &= Sessions_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInstanceLaunchTemplateIdField = (*Object)->TryGetField(TEXT("instance_launch_template_id"));
	if (JsonInstanceLaunchTemplateIdField.IsValid())
	{
		InstanceLaunchTemplateId_IsSet = TryGetJsonValue(JsonInstanceLaunchTemplateIdField, InstanceLaunchTemplateId_Optional);
		ParseSuccess &= InstanceLaunchTemplateId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInstanceRequestTemplateIdField = (*Object)->TryGetField(TEXT("instance_request_template_id"));
	if (JsonInstanceRequestTemplateIdField.IsValid())
	{
		InstanceRequestTemplateId_IsSet = TryGetJsonValue(JsonInstanceRequestTemplateIdField, InstanceRequestTemplateId_Optional);
		ParseSuccess &= InstanceRequestTemplateId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonRegionIdField = (*Object)->TryGetField(TEXT("region_id"));
	const bool RegionId_IsValid = JsonRegionIdField.IsValid() && (!JsonRegionIdField->IsNull() && TryGetJsonValue(JsonRegionIdField, RegionId));
	ParseSuccess &= RegionId_IsValid; 
	const TSharedPtr<FJsonValue> JsonMatchIdField = (*Object)->TryGetField(TEXT("match_id"));
	const bool MatchId_IsValid = JsonMatchIdField.IsValid() && (!JsonMatchIdField->IsNull() && TryGetJsonValue(JsonMatchIdField, MatchId));
	ParseSuccess &= MatchId_IsValid; 
	const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
	if (JsonCustomDataField.IsValid())
	{
		CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
		ParseSuccess &= CustomData_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonHostPlayerUuidField = (*Object)->TryGetField(TEXT("host_player_uuid"));
	if (JsonHostPlayerUuidField.IsValid())
	{
		HostPlayerUuid_IsSet = TryGetJsonValue(JsonHostPlayerUuidField, HostPlayerUuid_Optional);
		ParseSuccess &= HostPlayerUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonBackfillIdField = (*Object)->TryGetField(TEXT("backfill_id"));
	if (JsonBackfillIdField.IsValid())
	{
		BackfillId_IsSet = TryGetJsonValue(JsonBackfillIdField, BackfillId_Optional);
		ParseSuccess &= BackfillId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonMatchCreateRequestTimeField = (*Object)->TryGetField(TEXT("match_create_request_time"));
	const bool MatchCreateRequestTime_IsValid = JsonMatchCreateRequestTimeField.IsValid() && (!JsonMatchCreateRequestTimeField->IsNull() && TryGetJsonValue(JsonMatchCreateRequestTimeField, MatchCreateRequestTime));
	ParseSuccess &= MatchCreateRequestTime_IsValid; 
	const TSharedPtr<FJsonValue> JsonEvaluationScoreField = (*Object)->TryGetField(TEXT("evaluation_score"));
	if (JsonEvaluationScoreField.IsValid())
	{
		EvaluationScore_IsSet = TryGetJsonValue(JsonEvaluationScoreField, EvaluationScore_Optional);
		ParseSuccess &= EvaluationScore_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonRankQualityField = (*Object)->TryGetField(TEXT("rank_quality"));
	if (JsonRankQualityField.IsValid())
	{
		RankQuality_IsSet = TryGetJsonValue(JsonRankQualityField, RankQuality_Optional);
		ParseSuccess &= RankQuality_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonMatchMakingProfileIdField = (*Object)->TryGetField(TEXT("match_making_profile_id"));
	const bool MatchMakingProfileId_IsValid = JsonMatchMakingProfileIdField.IsValid() && (!JsonMatchMakingProfileIdField->IsNull() && TryGetJsonValue(JsonMatchMakingProfileIdField, MatchMakingProfileId));
	ParseSuccess &= MatchMakingProfileId_IsValid; 
	const TSharedPtr<FJsonValue> JsonTicketAddedUnixTimeField = (*Object)->TryGetField(TEXT("ticket_added_unix_time"));
	if (JsonTicketAddedUnixTimeField.IsValid())
	{
		TicketAddedUnixTime_IsSet = TryGetJsonValue(JsonTicketAddedUnixTimeField, TicketAddedUnixTime_Optional);
		ParseSuccess &= TicketAddedUnixTime_IsSet;
	}

	return ParseSuccess;
}

