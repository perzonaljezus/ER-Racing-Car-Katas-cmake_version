#pragma once

#include "Sensor.h"

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
};
