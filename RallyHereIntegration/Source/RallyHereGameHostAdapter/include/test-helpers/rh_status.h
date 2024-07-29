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
#ifndef GAME_HOST_ADAPTER_INTERFACE_RH_STATUS_H
#define GAME_HOST_ADAPTER_INTERFACE_RH_STATUS_H

#include "c_status.h"

#include "rh_string.h"
#include <string_view>

namespace rallyhere
{

    RH_EXPORT const char* status_text(RallyHereStatusCode);

    constexpr bool is_error(RallyHereStatusCode err)
    {
        return err != RH_STATUS_OK;
    }

    constexpr bool is_cancelled(RallyHereStatusCode err)
    {
        return err == RH_STATUS_CANCELLED;
    }

    class Status
    {
    public:
        Status() : m_Code(RH_STATUS_OK), m_Message("") {}
        Status(RallyHereStatusCode code) : m_Code(code), m_Message{} {}
        Status(RallyHereStatusCode code, const string& message) : m_Code(code), m_Message(message) {}

        RallyHereStatusCode code() const { return m_Code; };
        std::string_view code_message() const { return status_text(m_Code); }
        std::string_view message() const { return m_Message; }
        bool ok() const { return m_Code == RH_STATUS_OK; }
        operator bool() const { return ok(); }
    private:
        RallyHereStatusCode m_Code;
        string m_Message;
    };

} // namespace rallyhere

#endif //GAME_HOST_ADAPTER_INTERFACE_RH_STATUS_H
