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
#ifndef GAME_HOST_ADAPTER_C_METRICS_H
#define GAME_HOST_ADAPTER_C_METRICS_H

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum RallyHereMetricType {
    RALLY_HERE_METRIC_TYPE_COUNTER, /** Can be incremented with or without sampling */
    RALLY_HERE_METRIC_TYPE_GAUGE, /** Can be set or incremented without sampling rate */
    RALLY_HERE_METRIC_TYPE_TIMER, /** Can be set with or without sampling rate */
    RALLY_HERE_METRIC_TYPE_SET,
} RallyHereMetricType;

typedef enum RallyHereMetricActionType {
    RALLY_HERE_METRIC_ACTION_INCREMENT,
    RALLY_HERE_METRIC_ACTION_INCREMENT_WITH_SAMPLE,
    RALLY_HERE_METRIC_ACTION_SET,
    RALLY_HERE_METRIC_ACTION_SET_WITH_SAMPLE,
    RALLY_HERE_METRIC_ACTION_UNIQUE,
} RallyHereMetricActionType;

typedef enum RallyHereMetricFlush {
    RALLY_HERE_METRIC_FLUSH,
    RALLY_HERE_METRIC_NO_FLUSH,
} RallyHereMetricFlush;

typedef struct {
    /** The amount to add to the metric. */
    double change;
    /** The sampling rate associated with this. 0 and 1 are interpreted as 100% */
    double sample_rate;
} RallyHereMetricActionIncrementWithSample;

typedef struct {
    /** The amount to set the metric to. */
    double value;
    /** The sampling rate associated with this. 0 and 1 are interpreted as 100% */
    double sample_rate;
} RallyHereMetricActionSetWithSample;

typedef struct {
    /** The amount to add to the metric. */
    double change;
} RallyHereMetricActionIncrement;

typedef struct {
    /** The amount to set the metric to. */
    double value;
} RallyHereMetricActionSet;

typedef struct {
    /** Unique value to count */
    const char *unique;
} RallyHereMetricActionUnique;

typedef struct {
    RallyHereMetricActionType type;
    /** A list of label names, separated by \0, terminated by \0\0 */
    const char *label_names;
    /** A list of label values, separated by \0, terminated by \0\0 */
    const char *label_values;
    /** The action to take */
    union {
        RallyHereMetricActionIncrementWithSample increment_with_sample;
        RallyHereMetricActionSetWithSample set_with_sample;
        RallyHereMetricActionIncrement increment;
        RallyHereMetricActionSet set;
        RallyHereMetricActionUnique unique;
    } action;
} RallyHereMetricAction;

typedef struct {
    /** An array of values for metrics in the same order that they were defined in the registry.
     * A value must be provided for every metric defined in the registry. */
    RallyHereMetricAction* actions;
    /** A UTC unix timestamp in seconds with milliseconds fraction */
    double timestamp;
} RallyHereMetricCheckpoint;

typedef struct {
    RallyHereMetricType type;
    const char *name;
    const char *help;
    /** A list of label names, separated by \0, terminated by \0\0 */
    const char *label_names;
    /** A list of label values, separated by \0, terminated by \0\0 */
    const char *label_values;
} RallyHereMetricDefinition;

/// Opaque type and handle to a Rally Here Metric Registry.
struct RallyHereMetricRegistry;
typedef RallyHereMetricRegistry* RallyHereMetricRegistryPtr;

#ifdef __cplusplus
};
#endif

#if 0
void prepare()
{
    RallyHereMetricsRegistryPtr registry = rallyhere_metrics_registry_create();

    RallyHereMetricDefinition definition{};
    definition.label_names = "game\0map\0\0";
    definition.label_values = "rallyheredemo\0thebestmap\0\0";

    definition.type = GAME_HOST_ADAPTER_METRIC_TYPE_COUNTER;
    definition.name = "TickCount";
    definition.help = "A counter of ticks that have passed";
    rallyhere_metrics_registry_metric_definition_add(registry, &definition);

    definition.type = GAME_HOST_ADAPTER_METRIC_TYPE_TIMER;
    definition.name = "MaxFrameTime";
    definition.help = "The maximum frame time in milliseconds";
    rallyhere_metrics_registry_metric_definition_add(registry, &definition);

    definition.type = GAME_HOST_ADAPTER_METRIC_TYPE_GAUGE;
    definition.name = "CurrentPlayers";
    definition.help = "Current number of players connected";
    rallyhere_metrics_registry_metric_definition_add(registry, &definition);

    definition.type = GAME_HOST_ADAPTER_METRIC_TYPE_SET;
    definition.name = "UniqueUsers";
    definition.help = "How many unique users we've seen";
    rallyhere_metrics_registry_metric_definition_add(registry, &definition);
}

void checkpoint()
{
    RallyHereMetricAction actions[4]{};
    actions[0].type = RALLY_HERE_METRIC_ACTION_INCREMENT;
    actions[0].action.increment.change = DeltaTickCount; // This is a counter so it needs to be the delta of the ticks
    actions[1].type = RALLY_HERE_METRIC_ACTION_SET;
    actions[1].action.set.value = 838.0f;
    actions[2].type = RALLY_HERE_METRIC_ACTION_SET;
    actions[2].action.set.value = 5.0f;
    actions[3].type = RALLY_HERE_METRIC_ACTION_UNIQUE;
    actions[3].action.unique.unique = "TotallyAwesomePlayer";

    RallyHereMetricCheckpoint checkpoint{};
    checkpoint.actions = actions;
    checkpoint.timestamp = time(nullptr);
    rallyhere_metrics_registry_checkpoint_add(registry, &checkpoint);
}

void immediate_mode()
{
    RallyHereMetricDefinition definition{};
    definition.type = GAME_HOST_ADAPTER_METRIC_TYPE_COUNTER;
    definition.name = "TickCount";

    RallyHereMetricAction action{};
    action.type = RALLY_HERE_METRIC_ACTION_INCREMENT;
    action.action.increment.change = 1.0f;
    rallyhere_metrics_registry_immediate_add(registry, &definition, &action, RALLY_HERE_METRIC_FLUSH);

    rallyhere_metrics_registry_immediate_add_with_time(registry, &definition, &action, time(nullptr), RALLY_HERE_METRIC_NO_FLUSH);
    rallyhere_metrics_registry_immediate_add_with_time(registry, &definition, &action, time(nullptr), RALLY_HERE_METRIC_NO_FLUSH);
    rallyhere_metrics_registry_immediate_add_with_time(registry, &definition, &action, time(nullptr), RALLY_HERE_METRIC_NO_FLUSH);
    rallyhere_metrics_registry_immediate_add_with_time(registry, &definition, &action, time(nullptr), RALLY_HERE_METRIC_NO_FLUSH);
    rallyhere_metrics_registry_immediate_flush(registry);
}
#endif


#endif // GAME_HOST_ADAPTER_C_METRICS_H
