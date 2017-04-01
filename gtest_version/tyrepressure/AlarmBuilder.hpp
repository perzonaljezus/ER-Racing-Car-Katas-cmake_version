
#ifndef TYREPRESSURE_ALARMBUILDER_HPP
#define TYREPRESSURE_ALARMBUILDER_HPP


#include "TyrepressureSensor.hpp"

class AlarmBuilder {
public:
    static AlarmBuilder anAlarm();

    AlarmBuilder usingSensor(TyrepressureSensor* sensor);

protected:
    TyrepressureSensor* m_sensor;
};


#endif //TYREPRESSURE_ALARMBUILDER_HPP
