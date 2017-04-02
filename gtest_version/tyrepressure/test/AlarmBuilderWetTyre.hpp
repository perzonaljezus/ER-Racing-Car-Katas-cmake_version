
#ifndef TYREPRESSURE_ALARMBUILDERWETTYRE_HPP
#define TYREPRESSURE_ALARMBUILDERWETTYRE_HPP


#include "../lib/sensor/TyrepressureSensorWetTyre.hpp"
#include "../lib/safetyRange/SafetyRangeWetTyre.hpp"
#include "../Alarm.hpp"

class AlarmBuilderWetTyre {
public:
    static AlarmBuilderWetTyre* anAlarm();

    AlarmBuilderWetTyre* usingSensor(TyrepressureSensorWetTyre* sensor);

    AlarmBuilderWetTyre* andWithSafetyRange(SafetyRangeWetTyre* safetyRange);

    Alarm* build();

protected:
    TyrepressureSensorWetTyre* m_sensor;
    SafetyRangeWetTyre* m_safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDERWETTYRE_HPP
