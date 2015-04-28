/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <org/genivi/EnhancedPositionService/ConfigurationStubDefault.h>

namespace org {
namespace genivi {
namespace EnhancedPositionService {

ConfigurationStubDefault::ConfigurationStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(Configuration::getInterfaceVersion()) {
}

const CommonAPI::Version& ConfigurationStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

ConfigurationStubRemoteEvent* ConfigurationStubDefault::initStubAdapter(const std::shared_ptr<ConfigurationStubAdapter>& stubAdapter) {
    CommonAPI::Stub<ConfigurationStubAdapter, ConfigurationStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const EnhancedPositionServiceTypes::SatelliteSystem& ConfigurationStubDefault::getSatSystemAttribute() {
    return satSystemAttributeValue_;
}

const EnhancedPositionServiceTypes::SatelliteSystem& ConfigurationStubDefault::getSatSystemAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getSatSystemAttribute();
}

void ConfigurationStubDefault::setSatSystemAttribute(EnhancedPositionServiceTypes::SatelliteSystem value) {
    const bool valueChanged = trySetSatSystemAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireSatSystemAttributeChanged(satSystemAttributeValue_);
    }
}

bool ConfigurationStubDefault::trySetSatSystemAttribute(EnhancedPositionServiceTypes::SatelliteSystem value) {
    if (!validateSatSystemAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (satSystemAttributeValue_ != value);
    satSystemAttributeValue_ = std::move(value);
    return valueChanged;
}

bool ConfigurationStubDefault::validateSatSystemAttributeRequestedValue(const EnhancedPositionServiceTypes::SatelliteSystem& value) {
    return true;
}

void ConfigurationStubDefault::setSatSystemAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, EnhancedPositionServiceTypes::SatelliteSystem value) {
    setSatSystemAttribute(value);
}

void ConfigurationStubDefault::onRemoteSatSystemAttributeChanged() {
    // No operation in default
}

void ConfigurationStubDefault::RemoteEventHandler::onRemoteSatSystemAttributeChanged() {
    defaultStub_->onRemoteSatSystemAttributeChanged();
}

bool ConfigurationStubDefault::RemoteEventHandler::onRemoteSetSatSystemAttribute(EnhancedPositionServiceTypes::SatelliteSystem value) {
    return defaultStub_->trySetSatSystemAttribute(std::move(value));
}

bool ConfigurationStubDefault::RemoteEventHandler::onRemoteSetSatSystemAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, EnhancedPositionServiceTypes::SatelliteSystem value) {
    return onRemoteSetSatSystemAttribute(value);
}

const int32_t& ConfigurationStubDefault::getUpdateIntervalAttribute() {
    return updateIntervalAttributeValue_;
}

const int32_t& ConfigurationStubDefault::getUpdateIntervalAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getUpdateIntervalAttribute();
}

void ConfigurationStubDefault::setUpdateIntervalAttribute(int32_t value) {
    const bool valueChanged = trySetUpdateIntervalAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireUpdateIntervalAttributeChanged(updateIntervalAttributeValue_);
    }
}

bool ConfigurationStubDefault::trySetUpdateIntervalAttribute(int32_t value) {
    if (!validateUpdateIntervalAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (updateIntervalAttributeValue_ != value);
    updateIntervalAttributeValue_ = std::move(value);
    return valueChanged;
}

bool ConfigurationStubDefault::validateUpdateIntervalAttributeRequestedValue(const int32_t& value) {
    return true;
}

void ConfigurationStubDefault::setUpdateIntervalAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value) {
    setUpdateIntervalAttribute(value);
}

void ConfigurationStubDefault::onRemoteUpdateIntervalAttributeChanged() {
    // No operation in default
}

void ConfigurationStubDefault::RemoteEventHandler::onRemoteUpdateIntervalAttributeChanged() {
    defaultStub_->onRemoteUpdateIntervalAttributeChanged();
}

bool ConfigurationStubDefault::RemoteEventHandler::onRemoteSetUpdateIntervalAttribute(int32_t value) {
    return defaultStub_->trySetUpdateIntervalAttribute(std::move(value));
}

bool ConfigurationStubDefault::RemoteEventHandler::onRemoteSetUpdateIntervalAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value) {
    return onRemoteSetUpdateIntervalAttribute(value);
}


/**
 * GetVersion = This method returns the API version implemented by the server
 *  application
 */
void ConfigurationStubDefault::GetVersion(const std::shared_ptr<CommonAPI::ClientId> clientId, EnhancedPositionServiceTypes::Version& version) {
    // Call old style methods in default 
    GetVersion(version);
}
void ConfigurationStubDefault::GetVersion(EnhancedPositionServiceTypes::Version& version) {
    // No operation in default
}

/**
 * GetSupportedSatelliteSystems = This method returns a list of supported
 *  satellite systems
 */
void ConfigurationStubDefault::GetSupportedSatelliteSystems(const std::shared_ptr<CommonAPI::ClientId> clientId, std::vector<EnhancedPositionServiceTypes::SatelliteSystem>& satelliteSystems) {
    // Call old style methods in default 
    GetSupportedSatelliteSystems(satelliteSystems);
}
void ConfigurationStubDefault::GetSupportedSatelliteSystems(std::vector<EnhancedPositionServiceTypes::SatelliteSystem>& satelliteSystems) {
    // No operation in default
}




ConfigurationStubDefault::RemoteEventHandler::RemoteEventHandler(ConfigurationStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace EnhancedPositionService
} // namespace genivi
} // namespace org
