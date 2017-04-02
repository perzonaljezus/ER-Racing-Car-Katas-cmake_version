
#include "AlarmBuilder.hpp"

AlarmBuilder* AlarmBuilder::anAlarm() {
    return new AlarmBuilder();
}

AlarmBuilder* AlarmBuilder::usingSensor(ISensor* sensor) {
    m_sensor = sensor;

    return this;
}

AlarmBuilder* AlarmBuilder::andWithSafetyRange(SafetyRange* safetyRange) {
    m_safetyRange = safetyRange;

    return this;
}

Alarm* AlarmBuilder::build() {
    return new Alarm(m_sensor, m_safetyRange);
}
