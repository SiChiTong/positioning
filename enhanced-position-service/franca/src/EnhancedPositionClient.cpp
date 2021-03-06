/* Copyright (C) 2014 Mentor Graphics
 * Author: Marco Residori(marco_residori@mentor.com)
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <CommonAPI/CommonAPI.hpp>
#include <v5/org/genivi/EnhancedPositionService/EnhancedPositionProxy.hpp>
#include <org/genivi/EnhancedPositionService/EnhancedPositionServiceTypes.hpp>
#include "log.h"
#include <unistd.h>

DLT_DECLARE_CONTEXT(gCtx);

using namespace v5::org::genivi::EnhancedPositionService;
using namespace org::genivi::EnhancedPositionService;

void getPositionInfoAsyncCallback(const CommonAPI::CallStatus& callStatus, const EnhancedPositionServiceTypes::Timestamp& timestamp, const EnhancedPositionServiceTypes::PositionInfo& posInfo)
{
    if (callStatus != CommonAPI::CallStatus::SUCCESS) {
        LOG_ERROR_MSG(gCtx,"Remote call failed!\n");
        return;
    }

    for ( auto it = posInfo.begin(); it != posInfo.end(); ++it ) {
        if (it->first == EnhancedPositionServiceTypes::PositionInfoKey::LATITUDE)
        {
            LOG_INFO(gCtx,"LAT=%lf", it->second.get<double>());
        }
        if (it->first == EnhancedPositionServiceTypes::PositionInfoKey::LONGITUDE)
        {
    	    LOG_INFO(gCtx,"LON=%lf", it->second.get<double>());
        }
        if (it->first == EnhancedPositionServiceTypes::PositionInfoKey::ALTITUDE)
        {
            LOG_INFO(gCtx,"ALT=%lf", it->second.get<float>());
        }
        if (it->first == EnhancedPositionServiceTypes::PositionInfoKey::SPEED)
        {
            LOG_INFO(gCtx,"SPEED=%lf", it->second.get<float>());
        }
        if (it->first == EnhancedPositionServiceTypes::PositionInfoKey::CLIMB)
        {
            LOG_INFO(gCtx,"CLIMB=%lf", it->second.get<float>());
        }
        if (it->first == EnhancedPositionServiceTypes::PositionInfoKey::HEADING)
        {
            LOG_INFO(gCtx,"HEADING=%lf", it->second.get<float>());
        }
    }
}

void positionUpdate(std::shared_ptr<EnhancedPositionProxyDefault> proxy, const EnhancedPositionServiceTypes::Bitmask& changedValues)
{
    LOG_INFO_MSG(gCtx,"Position Update");

    if(proxy == NULL)
    {
	    LOG_ERROR_MSG(gCtx,"Null pointer!");
	    return;
    }

    std::function<void(const CommonAPI::CallStatus&,
    		               const EnhancedPositionServiceTypes::Timestamp&,
    		               const EnhancedPositionServiceTypes::PositionInfo&)> fcb = getPositionInfoAsyncCallback;

    proxy->GetPositionInfoAsync(changedValues,getPositionInfoAsyncCallback);

    LOG_INFO_MSG(gCtx,"Position Update finished");
}

int main() {

    DLT_REGISTER_APP("ENHC","ENHANCED-POSITION-CLIENT");
    DLT_REGISTER_CONTEXT(gCtx,"ENHC","Global Context");

    std::shared_ptr < CommonAPI::Runtime > runtime = CommonAPI::Runtime::get();

    const std::string domain = "local";
    const std::string instance = "EnhancedPositionService";
    const std::string connection = "EnhancedPositionClient";

    std::shared_ptr<EnhancedPositionProxyDefault> myProxy =
    		runtime->buildProxy<EnhancedPositionProxy>(domain, instance);

    LOG_INFO_MSG(gCtx,"EnhancedPositionClient");

    while (!myProxy->isAvailable()) {
        usleep(10);
    }

    std::cout << "Proxy available" << std::endl;

    myProxy->getPositionUpdateEvent().subscribe([&](const EnhancedPositionServiceTypes::Bitmask& changedValues) {
        positionUpdate(myProxy, changedValues);
    });

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(20));
    }

    return 0;
}
