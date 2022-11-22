//    Copyright 2022 Contributors to the Eclipse Foundation
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

#ifndef SDV_SUA_MQTTMESSAGEDESERIALIZER_H
#define SDV_SUA_MQTTMESSAGEDESERIALIZER_H

#include <string>

namespace sua {
    class MqttMessageDeserializer {
    public:
        void deserialize(const std::string& payload, class MessageStart& m) const;
        void deserialize(const std::string& payload, class MessageState& m) const;
    };
} // namespace sua

#endif
