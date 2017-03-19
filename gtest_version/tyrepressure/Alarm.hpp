#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "TirePressureSensor.hpp"

class Alarm
{
public:
    Alarm(TirePressureSensor* sensor);

    void check();
    bool isAlarmOn();

    static double m_lowPressureTreshold;
    static double m_highPressureTreshold;

protected:
    TirePressureSensor* m_sensor;
    bool m_alarmOn;

    virtual double pressureValue();

    double probeValue();
};

#endif //TYREPRESSURE_ALARM_H
