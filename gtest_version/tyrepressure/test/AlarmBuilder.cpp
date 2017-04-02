
#include "AlarmBuilder.hpp"

AlarmBuilder* AlarmBuilder::anAlarm() {
    return new AlarmBuilder();
}

AlarmBuilder* AlarmBuilder::usingSensor(TyrepressureSensor* sensor) {
    m_sensor = sensor;

    return this;
}

AlarmBuilder* AlarmBuilder::andWithSafetyRange(SafetyRangeNormalTyre* safetyRange) {
    m_safetyRange = safetyRange;

    return this;
}

Alarm* AlarmBuilder::build() {
    return new Alarm(m_sensor, m_safetyRange);
}
