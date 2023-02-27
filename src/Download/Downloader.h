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

#ifndef SDV_SUA_DOWNLOADER_H
#define SDV_SUA_DOWNLOADER_H

#include "IDownloader.h"

namespace sua {

    class Downloader : public IDownloader
    {
    public:
        Downloader(const std::string& download_dir);

        static const std::string EVENT_DOWNLOADING;

        TechCode start(const std::string & input) override;
    };

} // namespace sua

#endif
