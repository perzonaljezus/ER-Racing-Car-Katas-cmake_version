
#ifndef TYREPRESSURE_ALARMBUILDER_HPP
#define TYREPRESSURE_ALARMBUILDER_HPP


#include "TyrepressureSensor.hpp"
#include "SafetyRange.hpp"

class AlarmBuilder {
public:
    static AlarmBuilder anAlarm();

    AlarmBuilder usingSensor(TyrepressureSensor* sensor);

    AlarmBuilder andWithSafetyRange(SafetyRange* safetyRange);

protected:
    TyrepressureSensor* m_sensor;
    SafetyRange* m_safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDER_HPP
