
#ifndef TYREPRESSURE_ALARMBUILDER_HPP
#define TYREPRESSURE_ALARMBUILDER_HPP


#include "../lib/sensor/TyrepressureSensor.hpp"
#include "../lib/safetyRange/SafetyRangeNormalTyre.hpp"
#include "../Alarm.hpp"

class AlarmBuilder {
public:
    static AlarmBuilder* anAlarm();

    AlarmBuilder* usingSensor(TyrepressureSensor* sensor);

    AlarmBuilder* andWithSafetyRange(SafetyRangeNormalTyre* safetyRange);

    Alarm* build();

protected:
    TyrepressureSensor* m_sensor;
    SafetyRangeNormalTyre* m_safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDER_HPP
