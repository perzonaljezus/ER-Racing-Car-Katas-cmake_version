
#include "AlarmBuilder.hpp"

AlarmBuilder AlarmBuilder::anAlarm() {
    return AlarmBuilder();
}

AlarmBuilder AlarmBuilder::usingSensor(TyrepressureSensor* sensor) {
    m_sensor = sensor;

    return AlarmBuilder();
}

AlarmBuilder AlarmBuilder::andWithSafetyRange(SafetyRange *safetyRange) {
    m_safetyRange = safetyRange;

    return AlarmBuilder();
}
