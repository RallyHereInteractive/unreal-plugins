/*
Copyright 2023 RallyHere

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef RH_C_STATUS_H
#define RH_C_STATUS_H

#include "c_platform.h"

#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum RallyHereStatusCode
    {
        RH_STATUS_OK = 0,
        RH_STATUS_ERROR = 1,
        RH_STATUS_NO_BOOTSTRAP_MODE_PROVIDED = 2,
        RH_STATUS_CREDENTIALS_FILE_NOT_TWO_LINES = 3,
        RH_STATUS_NO_RALLYHERE_URL_PROVIDED = 4,
        RH_STATUS_NO_SIC_PROFILE_ID_PROVIDED = 5,
        RH_STATUS_CANCELLED = 6,
        RH_STATUS_VALIDATION_ERROR_ADAPTER_IS_NULLPTR = 7,
        RH_STATUS_ADAPTER_ALLOCATION_ERROR = 8,
        RH_STATUS_VALIDATION_ERROR_MAP_IS_NULLPTR = 9,
        RH_STATUS_MAP_ALLOCATION_ERROR = 10,
        RH_STATUS_VALIDATION_ERROR_KEY_IS_NULLPTR = 11,
        RH_STATUS_VALIDATION_ERROR_VALUE_IS_NULLPTR = 12,
        RH_STATUS_VALIDATION_ERROR_VALUE_SIZE_IS_NULLPTR = 13,
        RH_STATUS_KEY_NOT_FOUND = 14,
        RH_STATUS_COULD_NOT_PARSE_RESPONSE = 15,
        RH_STATUS_RESPONSE_NO_ACCESS_TOKEN = 16,
        RH_STATUS_RESPONSE_NO_REFRESH_TOKEN = 17,
        RH_STATUS_RESPONSE_NO_AUTH_SUCCESS = 18,
        RH_STATUS_RESPONSE_AUTH_SUCCESS_NOT_BOOL = 19,
        RH_STATUS_POLL_INTERVAL_MUST_BE_NUMERIC = 20,
        RH_STATUS_CANNOT_POLL_WITHOUT_ON_ALLOCATED_CALLBACK = 21,
        RH_STATUS_PROMETHEUS_PORT_MUST_BE_NUMERIC = 22,
        RH_STATUS_PROMETHEUS_ALREADY_STARTED = 23,
        RH_STATUS_PROMETHEUS_COULD_NOT_START = 24,
        RH_STATUS_REQUEST_TIMEOUT_MUST_BE_NUMERIC = 25,
        RH_STATUS_POLL_UNKNOWN_STATE = 26,
        RH_STATUS_COULD_NOT_PARSE_SERVER_JSON = 27,
        RH_STATUS_NO_SERVER_JSON = 28,
        RH_STATUS_A2S_QUERY_PORT_MUST_BE_SHORT_NUMBER = 29,
        RH_STATUS_VALIDATION_ERROR_STATS_IS_NULLPTR = 30,
        RH_STATUS_VALIDATION_ERROR_STATS_PROVIDED_IS_NULLPTR = 31,
        RH_STATUS_PUBLIC_PORT_MUST_BE_NUMERIC = 32,
        RH_STATUS_BIND_PORT_MUST_BE_NUMERIC = 33,
        RH_STATUS_MAX_POLL_FAILURES_MUST_BE_NUMERIC = 34,
        RH_STATUS_MUST_PROVIDE_REPORTED_PUBLIC_HOST = 35,
        RH_STATUS_VALIDATION_ERROR_DEFINITION_IS_NULLPTR = 36,
        RH_STATUS_VALIDATION_ERROR_ACTION_IS_NULLPTR = 37,
        RH_STATUS_METRIC_TYPE_NOT_SUPPORTED_BY_BACKEND = 38,
        RH_STATUS_METRIC_BACKEND_GRAPHITE_NOT_CONFIGURED = 39,
        RH_STATUS_METRIC_BACKEND_STATSD_NOT_CONFIGURED = 40,
        RH_STATUS_METRIC_ACTION_NOT_SUPPORTED_BY_BACKEND = 41,
        RH_STATUS_METRIC_ACTION_NOT_SUPPORTED_BY_TYPE = 42,
        RH_STATUS_REPORT_FORCED_MAX_PLAYERS_MUST_BE_UNSIGNED_INT_8 = 43,
        RH_STATUS_REPORT_DEFAULT_MAX_PLAYERS_MUST_BE_UNSIGNED_INT_8 = 44,
        RH_STATUS_SIMULATE_CURRENT_PLAYERS_AT_MUST_BE_TWO_VALUES = 45,
        RH_STATUS_SIMULATE_CURRENT_PLAYERS_AT_MUST_BE_UNSIGNED_INT_8 = 46,
        RH_STATUS_SIMULATE_MAX_PLAYERS_AT_MUST_BE_TWO_VALUES = 47,
        RH_STATUS_SIMULATE_MAX_PLAYERS_AT_MUST_BE_UNSIGNED_INT_8 = 48,
        RH_STATUS_SIMULATE_GAME_STARTUP_LAG_MUST_BE_TWO_VALUES = 49,
        RH_STATUS_A2S_COULD_NOT_START = 50,
        RH_STATUS_PROMETHEUS_FAILED_AFTER_REGISTRATION = 51,
        RH_STATUS_PROMETHEUS_FAILED_RELOADING_ADDITIONAL_INFO_LABELS = 52,
        RH_STATUS_BIND_IPS_AND_PORTS_MUST_MATCH = 53,
        RH_STATUS_CONNECT_CALLED_TWICE = 54,
        RH_STATUS_HTTP_CONTINUE                            = 100,
        RH_STATUS_HTTP_SWITCHINGPROTOCOLS                  = 101,
        RH_STATUS_HTTP_PROCESSING                          = 102,

        RH_STATUS_HTTP_OK                                  = 200,
        RH_STATUS_HTTP_CREATED                             = 201,
        RH_STATUS_HTTP_ACCEPTED                            = 202,
        RH_STATUS_HTTP_NON_AUTHORITATIVE_INFORMATION       = 203,
        RH_STATUS_HTTP_NO_CONTENT                          = 204,
        RH_STATUS_HTTP_RESET_CONTENT                       = 205,
        RH_STATUS_HTTP_PARTIAL_CONTENT                     = 206,
        RH_STATUS_HTTP_MULTI_STATUS                        = 207,
        RH_STATUS_HTTP_ALREADY_REPORTED                    = 208,
        RH_STATUS_HTTP_IM_USED                             = 226,

        RH_STATUS_HTTP_MULTIPLE_CHOICES                    = 300,
        RH_STATUS_HTTP_MOVED_PERMANENTLY                   = 301,
        RH_STATUS_HTTP_FOUND                               = 302,
        RH_STATUS_HTTP_SEE_OTHER                           = 303,
        RH_STATUS_HTTP_NOT_MODIFIED                        = 304,
        RH_STATUS_HTTP_USE_PROXY                           = 305,
        RH_STATUS_HTTP_TEMPORARY_REDIRECT                  = 307,
        RH_STATUS_HTTP_PERMANENT_REDIRECT                  = 308,

        RH_STATUS_HTTP_BAD_REQUEST                         = 400,
        RH_STATUS_HTTP_UNAUTHORIZED                        = 401,
        RH_STATUS_HTTP_PAYMENT_REQUIRED                    = 402,
        RH_STATUS_HTTP_FORBIDDEN                           = 403,
        RH_STATUS_HTTP_NOT_FOUND                           = 404,
        RH_STATUS_HTTP_METHOD_NOT_ALLOWED                  = 405,
        RH_STATUS_HTTP_NOT_ACCEPTABLE                      = 406,
        RH_STATUS_HTTP_PROXY_AUTHENTICATION_REQUIRED       = 407,
        RH_STATUS_HTTP_REQUEST_TIMEOUT                     = 408,
        RH_STATUS_HTTP_CONFLICT                            = 409,
        RH_STATUS_HTTP_GONE                                = 410,
        RH_STATUS_HTTP_LENGTH_REQUIRED                     = 411,
        RH_STATUS_HTTP_PRECONDITION_FAILED                 = 412,
        RH_STATUS_HTTP_PAYLOAD_TOO_LARGE                   = 413,
        RH_STATUS_HTTP_URI_TOO_LONG                        = 414,
        RH_STATUS_HTTP_UNSUPPORTED_MEDIA_TYPE              = 415,
        RH_STATUS_HTTP_RANGE_NOT_SATISFIABLE               = 416,
        RH_STATUS_HTTP_EXPECTATION_FAILED                  = 417,
        RH_STATUS_HTTP_MISDIRECTED_REQUEST                 = 421,
        RH_STATUS_HTTP_UNPROCESSABLE_ENTITY                = 422,
        RH_STATUS_HTTP_LOCKED                              = 423,
        RH_STATUS_HTTP_FAILED_DEPENDENCY                   = 424,
        RH_STATUS_HTTP_UPGRADE_REQUIRED                    = 426,
        RH_STATUS_HTTP_PRECONDITION_REQUIRED               = 428,
        RH_STATUS_HTTP_TOO_MANY_REQUESTS                   = 429,
        RH_STATUS_HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE     = 431,
        RH_STATUS_HTTP_CONNECTION_CLOSED_WITHOUT_RESPONSE  = 444,
        RH_STATUS_HTTP_UNAVAILABLE_FOR_LEGAL_REASONS       = 451,
        RH_STATUS_HTTP_CLIENT_CLOSED_REQUEST               = 499,

        RH_STATUS_HTTP_INTERNAL_SERVER_ERROR               = 500,
        RH_STATUS_HTTP_NOT_IMPLEMENTED                     = 501,
        RH_STATUS_HTTP_BAD_GATEWAY                         = 502,
        RH_STATUS_HTTP_SERVICE_UNAVAILABLE                 = 503,
        RH_STATUS_HTTP_GATEWAY_TIMEOUT                     = 504,
        RH_STATUS_HTTP_HTTP_VERSION_NOT_SUPPORTED          = 505,
        RH_STATUS_HTTP_VARIANT_ALSO_NEGOTIATES             = 506,
        RH_STATUS_HTTP_INSUFFICIENT_STORAGE                = 507,
        RH_STATUS_HTTP_LOOP_DETECTED                       = 508,
        RH_STATUS_HTTP_NOT_EXTENDED                        = 510,
        RH_STATUS_HTTP_NETWORK_AUTHENTICATION_REQUIRED     = 511,
        RH_STATUS_HTTP_NETWORK_CONNECT_TIMEOUT_ERROR       = 599
    } RallyHereStatusCode;

    RH_EXPORT bool rallyhere_is_error(RallyHereStatusCode err);
    RH_EXPORT bool rallyhere_is_cancelled(RallyHereStatusCode err);
    RH_EXPORT const char* rallyhere_status_text(RallyHereStatusCode err);

#ifdef __cplusplus
};
#endif

#endif // RH_C_STATUS_H
