#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "TyrepressureSensor.hpp"

class Alarm
{
public:
    Alarm();
    Alarm(TyrepressureSensor* sensor);

    void check();
    bool isAlarmOn();

protected:
    TyrepressureSensor* m_sensor;
    double m_lowPressureTreshold;
    double m_highPressureTreshold;
    bool m_alarmOn;

    virtual double pressureValue();
};

#endif //TYREPRESSURE_ALARM_H
