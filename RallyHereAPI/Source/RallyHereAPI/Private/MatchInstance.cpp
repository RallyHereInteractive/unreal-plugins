// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchInstance.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchInstance

void FRHAPI_MatchInstance::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("instance_id"));
	RallyHereAPI::WriteJsonValue(Writer, InstanceId);
	if (HostPlayerUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("host_player_uuid"));
		if (HostPlayerUuid_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, HostPlayerUuid_Optional);
	}
	if (RegionId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("region_id"));
		if (RegionId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, RegionId_Optional);
	}
	if (InstanceRequestTemplateId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("instance_request_template_id"));
		if (InstanceRequestTemplateId_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, InstanceRequestTemplateId_Optional);
	}
	if (Map_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("map"));
		if (Map_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, Map_Optional);
	}
	if (GameMode_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("game_mode"));
		if (GameMode_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, GameMode_Optional);
	}
	if (HostType_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("host_type"));
		if (HostType_IsNull)
			WriteJsonValue(Writer, nullptr);
		else
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(HostType_Optional));
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_MatchInstance::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
	const bool InstanceId_IsValid = JsonInstanceIdField.IsValid() && (!JsonInstanceIdField->IsNull() && TryGetJsonValue(JsonInstanceIdField, InstanceId));
	ParseSuccess &= InstanceId_IsValid; 
	const TSharedPtr<FJsonValue> JsonHostPlayerUuidField = (*Object)->TryGetField(TEXT("host_player_uuid"));
	if (JsonHostPlayerUuidField.IsValid())
	{
		HostPlayerUuid_IsNull = JsonHostPlayerUuidField->IsNull();
		HostPlayerUuid_IsSet = HostPlayerUuid_IsNull || TryGetJsonValue(JsonHostPlayerUuidField, HostPlayerUuid_Optional);
		ParseSuccess &= HostPlayerUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonRegionIdField = (*Object)->TryGetField(TEXT("region_id"));
	if (JsonRegionIdField.IsValid())
	{
		RegionId_IsNull = JsonRegionIdField->IsNull();
		RegionId_IsSet = RegionId_IsNull || TryGetJsonValue(JsonRegionIdField, RegionId_Optional);
		ParseSuccess &= RegionId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInstanceRequestTemplateIdField = (*Object)->TryGetField(TEXT("instance_request_template_id"));
	if (JsonInstanceRequestTemplateIdField.IsValid())
	{
		InstanceRequestTemplateId_IsNull = JsonInstanceRequestTemplateIdField->IsNull();
		InstanceRequestTemplateId_IsSet = InstanceRequestTemplateId_IsNull || TryGetJsonValue(JsonInstanceRequestTemplateIdField, InstanceRequestTemplateId_Optional);
		ParseSuccess &= InstanceRequestTemplateId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonMapField = (*Object)->TryGetField(TEXT("map"));
	if (JsonMapField.IsValid())
	{
		Map_IsNull = JsonMapField->IsNull();
		Map_IsSet = Map_IsNull || TryGetJsonValue(JsonMapField, Map_Optional);
		ParseSuccess &= Map_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonGameModeField = (*Object)->TryGetField(TEXT("game_mode"));
	if (JsonGameModeField.IsValid())
	{
		GameMode_IsNull = JsonGameModeField->IsNull();
		GameMode_IsSet = GameMode_IsNull || TryGetJsonValue(JsonGameModeField, GameMode_Optional);
		ParseSuccess &= GameMode_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonHostTypeField = (*Object)->TryGetField(TEXT("host_type"));
	if (JsonHostTypeField.IsValid())
	{
		HostType_IsNull = JsonHostTypeField->IsNull();
		HostType_IsSet = HostType_IsNull || TryGetJsonValue(JsonHostTypeField, HostType_Optional);
		ParseSuccess &= HostType_IsSet;
	}

	return ParseSuccess;
}

