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
#ifndef ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Position_Feedback_STUB_H_
#define ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Position_Feedback_STUB_H_



#include <org/genivi/EnhancedPositionService/EnhancedPositionServiceTypes.h>

#include "PositionFeedback.h"

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

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace EnhancedPositionService {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service PositionFeedback. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class PositionFeedbackStubAdapter: virtual public CommonAPI::StubAdapter, public PositionFeedback {
 public:



    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for PositionFeedback.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class PositionFeedbackStubRemoteEvent {
 public:
    virtual ~PositionFeedbackStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service PositionFeedback to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class PositionFeedbackStub: public virtual CommonAPI::Stub<PositionFeedbackStubAdapter, PositionFeedbackStubRemoteEvent> {
public:
    virtual ~PositionFeedbackStub() { }
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;


    /**
     * GetVersion = This method returns the API version implemented by the server
     *  application
     */
    /// This is the method that will be called on remote calls on the method GetVersion.
    virtual void GetVersion(const std::shared_ptr<CommonAPI::ClientId> clientId, EnhancedPositionServiceTypes::Version& version) = 0;
    /**
     * SetPositionFeedback = This method allows a client application to provide the
     *  EnhancedPositionService with a position feedback
     */
    /// This is the method that will be called on remote calls on the method SetPositionFeedback.
    virtual void SetPositionFeedback(const std::shared_ptr<CommonAPI::ClientId> clientId, PositionFeedback::PositionFeedbackInfo feedback, uint64_t timestamp, EnhancedPositionServiceTypes::PositionFeedbackType feedbackType) = 0;

    using CommonAPI::Stub<PositionFeedbackStubAdapter, PositionFeedbackStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<PositionFeedbackStubAdapter, PositionFeedbackStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<PositionFeedbackStubAdapter, PositionFeedbackStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef PositionFeedbackStubRemoteEvent RemoteEventType;
    typedef PositionFeedback StubInterface;
};

} // namespace EnhancedPositionService
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Position_Feedback_STUB_H_
