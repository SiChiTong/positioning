/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * PositionFeedback = This interface allows the application implementing the
 *  map-matching algorithm to provide a position feedback to the
 *  EnahncedPositionService
 */
#ifndef ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Position_Feedback_PROXY_BASE_H_
#define ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Position_Feedback_PROXY_BASE_H_

#include "PositionFeedback.h"


#include <org/genivi/EnhancedPositionService/EnhancedPositionServiceTypes.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/SerializableStruct.h>
#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace EnhancedPositionService {

class PositionFeedbackProxyBase: virtual public CommonAPI::Proxy {
 public:

    typedef std::function<void(const CommonAPI::CallStatus&, const EnhancedPositionServiceTypes::Version&)> GetVersionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> SetPositionFeedbackAsyncCallback;



    /**
     * GetVersion = This method returns the API version implemented by the server
     *  application
     */
    virtual void GetVersion(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Version& version) = 0;
    virtual std::future<CommonAPI::CallStatus> GetVersionAsync(GetVersionAsyncCallback callback) = 0;
    /**
     * SetPositionFeedback = This method allows a client application to provide the
     *  EnhancedPositionService with a position feedback
     */
    virtual void SetPositionFeedback(const PositionFeedback::PositionFeedbackInfo& feedback, const uint64_t& timestamp, const EnhancedPositionServiceTypes::PositionFeedbackType& feedbackType, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> SetPositionFeedbackAsync(const PositionFeedback::PositionFeedbackInfo& feedback, const uint64_t& timestamp, const EnhancedPositionServiceTypes::PositionFeedbackType& feedbackType, SetPositionFeedbackAsyncCallback callback) = 0;
};

} // namespace EnhancedPositionService
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Position_Feedback_PROXY_BASE_H_
