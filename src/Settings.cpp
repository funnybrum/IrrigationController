#include "Settings.h"
#include "ActuatorController.h"

Settings::Settings()
    :SettingsBase(&logger) {
}

void Settings::initializeSettings() {
    strcpy(settingsData.network.hostname, HOSTNAME);
    settingsData.influxDB.enable = false;
    settingsData.actuator1.type = NC;
    settingsData.actuator2.type = NC;
    settingsData.actuator3.type = NC;
    settingsData.actuator4.type = NC;
    settingsData.actuator5.type = NC;
}

SettingsData* Settings::getSettings() {
    return &settingsData;
}

Empty* Settings::getRTCSettings() {
    return NULL;
}
