
#ifndef TYREPRESSURE_ALARMBUILDER_HPP
#define TYREPRESSURE_ALARMBUILDER_HPP


#include "../lib/sensor/TyrepressureSensorNormalTyre.hpp"
#include "../lib/safetyRange/SafetyRangeNormalTyre.hpp"
#include "../Alarm.hpp"

class AlarmBuilderNormalTyre {
public:
    static AlarmBuilderNormalTyre* anAlarm();

    AlarmBuilderNormalTyre* usingSensor(TyrepressureSensorNormalTyre* sensor);

    AlarmBuilderNormalTyre* andWithSafetyRange(SafetyRangeNormalTyre* safetyRange);

    Alarm* build();

protected:
    TyrepressureSensorNormalTyre* m_sensor;
    SafetyRangeNormalTyre* m_safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDER_HPP
