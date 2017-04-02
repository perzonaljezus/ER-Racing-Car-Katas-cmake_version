
#ifndef TYREPRESSURE_ALARMBUILDER_HPP
#define TYREPRESSURE_ALARMBUILDER_HPP


#include "../Alarm.hpp"
#include "../lib/sensor/ISensor.hpp"
#include "../lib/safetyRange/SafetyRange.hpp"

class AlarmBuilder {
public:
    static AlarmBuilder* anAlarm();

    AlarmBuilder* usingSensor(ISensor* sensor);

    AlarmBuilder* andWithSafetyRange(SafetyRange* safetyRange);

    Alarm* build();

protected:
    ISensor* m_sensor;
    SafetyRange* m_safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDER_HPP
