//    Copyright 2023 Contributors to the Eclipse Foundation
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//
//    SPDX-License-Identifier: Apache-2.0

#include "FSM/States/Activating.h"
#include "Context.h"
#include "Logger.h"

namespace sua {

    Activating::Activating()
        : Connected("Activating")
    { }

    void Activating::onEnter(Context& ctx)
    {
        auto slots = ctx.installerAgent->getSlotStatus();
        for(auto it : slots) {
            Logger::info("Slot '{}': state='{}' version='{}'", it.first, it.second["state"], it.second["version"]);
        }

        ctx.installerAgent->activateOther();
    }

} // namespace sua
