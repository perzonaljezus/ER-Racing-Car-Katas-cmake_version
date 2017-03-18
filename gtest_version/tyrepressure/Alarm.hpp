#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "Sensor.hpp"

class Alarm
{
public:
    Alarm();
    void check();
    bool isAlarmOn();

    static double m_lowPressureTreshold;
    static double m_highPressureTreshold;

protected:
    Sensor m_sensor;
    bool m_alarmOn;

    virtual double pressureValue();

    double probeValue();
};

#endif //TYREPRESSURE_ALARM_H
