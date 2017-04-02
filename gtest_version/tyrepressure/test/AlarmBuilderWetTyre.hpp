
#ifndef TYREPRESSURE_ALARMBUILDERWETTYRE_HPP
#define TYREPRESSURE_ALARMBUILDERWETTYRE_HPP


#include "../lib/sensor/TyrepressureSensorWetTyre.hpp"
#include "../lib/safetyRange/SafetyRangeWetTyre.hpp"
#include "../Alarm.hpp"

class AlarmBuilderWetTyre {
public:
    static AlarmBuilderWetTyre* anAlarm();

    AlarmBuilderWetTyre* usingSensor(TyrepressureSensorNormalTyre* sensor);

    AlarmBuilderWetTyre* andWithSafetyRange(SafetyRangeNormalTyre* safetyRange);

    Alarm* build();

protected:
    TyrepressureSensorNormalTyre* m_sensor;
    SafetyRangeNormalTyre* m_safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDERWETTYRE_HPP
