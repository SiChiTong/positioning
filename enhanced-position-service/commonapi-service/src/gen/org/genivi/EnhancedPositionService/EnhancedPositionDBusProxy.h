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
 * EnhancedPosition = This interface offers functionalities to retrieve the
 *  enhanced position of the vehicle
 */
#ifndef ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Enhanced_Position_DBUS_PROXY_H_
#define ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Enhanced_Position_DBUS_PROXY_H_

#include <org/genivi/EnhancedPositionService/EnhancedPositionProxyBase.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>
#include <CommonAPI/DBus/DBusEvent.h>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace org {
namespace genivi {
namespace EnhancedPositionService {

class EnhancedPositionDBusProxy: virtual public EnhancedPositionProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    EnhancedPositionDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);

    virtual ~EnhancedPositionDBusProxy() { }


    virtual PositionUpdateEvent& getPositionUpdateEvent();

    /**
     * GetVersion = This method returns the API version implemented by the server
     *  application
     */
    virtual void GetVersion(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Version& version);
    virtual std::future<CommonAPI::CallStatus> GetVersionAsync(GetVersionAsyncCallback callback);
    /**
     * GetPositionInfo = This method returns a given set of positioning data (e.g.
     *  Position, Course, Accuracy, Status, ... )
               Note: If a requested
     *  value is invalid, it's not returned to the client application
     */
    virtual void GetPositionInfo(const EnhancedPositionServiceTypes::Bitmask& valuesToReturn, CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Timestamp& timestamp, EnhancedPositionServiceTypes::PositionInfo& data);
    virtual std::future<CommonAPI::CallStatus> GetPositionInfoAsync(const EnhancedPositionServiceTypes::Bitmask& valuesToReturn, GetPositionInfoAsyncCallback callback);
    /**
     * GetSatelliteInfo = This method returns information about the current satellite
     *  constellation
            Note: If a requested value is invalid, it's not
     *  returned to the client application
     */
    virtual void GetSatelliteInfo(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Timestamp& timestamp, EnhancedPositionServiceTypes::SatelliteInfo& satelliteInfo);
    virtual std::future<CommonAPI::CallStatus> GetSatelliteInfoAsync(GetSatelliteInfoAsyncCallback callback);
    /**
     * GetTime = This method returns UTC time and date.
                Note: If a
     *  requested value is invalid, it's not returned to the client application
     */
    virtual void GetTime(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Timestamp& timestamp, EnhancedPositionServiceTypes::TimeInfo& time);
    virtual std::future<CommonAPI::CallStatus> GetTimeAsync(GetTimeAsyncCallback callback);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:

    CommonAPI::DBus::DBusEvent<PositionUpdateEvent> positionUpdate_;

};



} // namespace EnhancedPositionService
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_ENHANCEDPOSITIONSERVICE_Enhanced_Position_DBUS_PROXY_H_
