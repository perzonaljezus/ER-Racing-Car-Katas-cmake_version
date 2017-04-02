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

protected:
    ISensor* m_sensor;
    SafetyRange* m_safetyRange;
    bool m_alarmOn;

    virtual double pressureValue();

    bool isInRange(double pressureValue) const;
};

#endif //TYREPRESSURE_ALARM_H
