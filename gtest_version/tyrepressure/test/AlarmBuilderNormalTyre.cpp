
#include "AlarmBuilderNormalTyre.hpp"

AlarmBuilderNormalTyre* AlarmBuilderNormalTyre::anAlarm() {
    return new AlarmBuilderNormalTyre();
}

AlarmBuilderNormalTyre* AlarmBuilderNormalTyre::usingSensor(TyrepressureSensorNormalTyre* sensor) {
    m_sensor = sensor;

    return this;
}

AlarmBuilderNormalTyre* AlarmBuilderNormalTyre::andWithSafetyRange(SafetyRangeNormalTyre* safetyRange) {
    m_safetyRange = safetyRange;

    return this;
}

Alarm* AlarmBuilderNormalTyre::build() {
    return new Alarm(m_sensor, m_safetyRange);
}
