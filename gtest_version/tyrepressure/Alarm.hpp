#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "Sensor.hpp"

class Alarm
{
public:
    Alarm();
    void check();
    bool isAlarmOn();

protected:
    Sensor m_sensor;
    double m_lowPressureTreshold;
    double m_highPressureTreshold;
    bool m_alarmOn;

    virtual double probePressure();
};

#endif