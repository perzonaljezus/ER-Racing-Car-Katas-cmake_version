
#include "AlarmBuilderWetTyre.hpp"

AlarmBuilderWetTyre* AlarmBuilderWetTyre::anAlarm() {
    return new AlarmBuilderWetTyre();
}

AlarmBuilderWetTyre* AlarmBuilderWetTyre::usingSensor(TyrepressureSensorWetTyre* sensor) {
    m_sensor = sensor;

    return this;
}

AlarmBuilderWetTyre* AlarmBuilderWetTyre::andWithSafetyRange(SafetyRangeWetTyre* safetyRange) {
    m_safetyRange = safetyRange;

    return this;
}

Alarm* AlarmBuilderWetTyre::build() {
    return new Alarm(m_sensor, m_safetyRange);
}
