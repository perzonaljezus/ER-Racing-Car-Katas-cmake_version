#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "lib/sensor/ISensor.hpp"
#include "lib/safetyRange/SafetyRange.hpp"

class Alarm
{
public:
    Alarm(ISensor *sensor, SafetyRange *safetyRange);

    void check();
    bool isAlarmOn();

    SafetyRange* m_safetyRange;
protected:
    ISensor* m_sensor;
    bool m_alarmOn;

    virtual double probe();

};

#endif //TYREPRESSURE_ALARM_H
