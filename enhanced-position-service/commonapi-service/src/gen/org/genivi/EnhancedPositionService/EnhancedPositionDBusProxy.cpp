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
#include "EnhancedPositionDBusProxy.h"

namespace org {
namespace genivi {
namespace EnhancedPositionService {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createEnhancedPositionDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<EnhancedPositionDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

INITIALIZER(registerEnhancedPositionDBusProxy) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(EnhancedPosition::getInterfaceId(),
       &createEnhancedPositionDBusProxy);
}

EnhancedPositionDBusProxy::EnhancedPositionDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
,        positionUpdate_(*this, "PositionUpdate", "t")
    {
    }


EnhancedPositionDBusProxy::PositionUpdateEvent& EnhancedPositionDBusProxy::getPositionUpdateEvent() {
    return positionUpdate_;
}

/**
 * GetVersion = This method returns the API version implemented by the server
 *  application
 */
void EnhancedPositionDBusProxy::GetVersion(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Version& version) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Version> >::callMethodWithReply(
        *this,
        "GetVersion",
        "",
        callStatus
        , version);
}
std::future<CommonAPI::CallStatus> EnhancedPositionDBusProxy::GetVersionAsync(GetVersionAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Version> >::callMethodAsync(
        *this,
        "GetVersion",
        "",
        std::move(callback));
}
/**
 * GetPositionInfo = This method returns a given set of positioning data (e.g.
 *  Position, Course, Accuracy, Status, ... )
           Note: If a requested
 *  value is invalid, it's not returned to the client application
 */
void EnhancedPositionDBusProxy::GetPositionInfo(const EnhancedPositionServiceTypes::Bitmask& valuesToReturn, CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Timestamp& timestamp, EnhancedPositionServiceTypes::PositionInfo& data) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Bitmask>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Timestamp, EnhancedPositionServiceTypes::PositionInfo> >::callMethodWithReply(
        *this,
        "GetPositionInfo",
        "t",
        valuesToReturn,
        callStatus
        , timestamp, data);
}
std::future<CommonAPI::CallStatus> EnhancedPositionDBusProxy::GetPositionInfoAsync(const EnhancedPositionServiceTypes::Bitmask& valuesToReturn, GetPositionInfoAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Bitmask>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Timestamp, EnhancedPositionServiceTypes::PositionInfo> >::callMethodAsync(
        *this,
        "GetPositionInfo",
        "t",
        valuesToReturn, 
        std::move(callback));
}
/**
 * GetSatelliteInfo = This method returns information about the current satellite
 *  constellation
        Note: If a requested value is invalid, it's not
 *  returned to the client application
 */
void EnhancedPositionDBusProxy::GetSatelliteInfo(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Timestamp& timestamp, EnhancedPositionServiceTypes::SatelliteInfo& satelliteInfo) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Timestamp, EnhancedPositionServiceTypes::SatelliteInfo> >::callMethodWithReply(
        *this,
        "GetSatelliteInfo",
        "",
        callStatus
        , timestamp, satelliteInfo);
}
std::future<CommonAPI::CallStatus> EnhancedPositionDBusProxy::GetSatelliteInfoAsync(GetSatelliteInfoAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Timestamp, EnhancedPositionServiceTypes::SatelliteInfo> >::callMethodAsync(
        *this,
        "GetSatelliteInfo",
        "",
        std::move(callback));
}
/**
 * GetTime = This method returns UTC time and date.
            Note: If a
 *  requested value is invalid, it's not returned to the client application
 */
void EnhancedPositionDBusProxy::GetTime(CommonAPI::CallStatus& callStatus, EnhancedPositionServiceTypes::Timestamp& timestamp, EnhancedPositionServiceTypes::TimeInfo& time) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Timestamp, EnhancedPositionServiceTypes::TimeInfo> >::callMethodWithReply(
        *this,
        "GetTime",
        "",
        callStatus
        , timestamp, time);
}
std::future<CommonAPI::CallStatus> EnhancedPositionDBusProxy::GetTimeAsync(GetTimeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<EnhancedPositionServiceTypes::Timestamp, EnhancedPositionServiceTypes::TimeInfo> >::callMethodAsync(
        *this,
        "GetTime",
        "",
        std::move(callback));
}



void EnhancedPositionDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 0;
    ownVersionMinor = 0;
}

} // namespace EnhancedPositionService
} // namespace genivi
} // namespace org
