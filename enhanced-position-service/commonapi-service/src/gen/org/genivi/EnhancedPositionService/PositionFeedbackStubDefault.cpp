/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <org/genivi/EnhancedPositionService/PositionFeedbackStubDefault.h>

namespace org {
namespace genivi {
namespace EnhancedPositionService {

PositionFeedbackStubDefault::PositionFeedbackStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(PositionFeedback::getInterfaceVersion()) {
}

const CommonAPI::Version& PositionFeedbackStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

PositionFeedbackStubRemoteEvent* PositionFeedbackStubDefault::initStubAdapter(const std::shared_ptr<PositionFeedbackStubAdapter>& stubAdapter) {
    CommonAPI::Stub<PositionFeedbackStubAdapter, PositionFeedbackStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


/**
 * GetVersion = This method returns the API version implemented by the server
 *  application
 */
void PositionFeedbackStubDefault::GetVersion(const std::shared_ptr<CommonAPI::ClientId> clientId, EnhancedPositionServiceTypes::Version& version) {
    // Call old style methods in default 
    GetVersion(version);
}
void PositionFeedbackStubDefault::GetVersion(EnhancedPositionServiceTypes::Version& version) {
    // No operation in default
}

/**
 * SetPositionFeedback = This method allows a client application to provide the
 *  EnhancedPositionService with a position feedback
 */
void PositionFeedbackStubDefault::SetPositionFeedback(const std::shared_ptr<CommonAPI::ClientId> clientId, PositionFeedback::PositionFeedbackInfo feedback, uint64_t timestamp, EnhancedPositionServiceTypes::PositionFeedbackType feedbackType) {
    // Call old style methods in default 
    SetPositionFeedback(feedback, timestamp, feedbackType);
}
void PositionFeedbackStubDefault::SetPositionFeedback(PositionFeedback::PositionFeedbackInfo feedback, uint64_t timestamp, EnhancedPositionServiceTypes::PositionFeedbackType feedbackType) {
    // No operation in default
}




PositionFeedbackStubDefault::RemoteEventHandler::RemoteEventHandler(PositionFeedbackStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace EnhancedPositionService
} // namespace genivi
} // namespace org
