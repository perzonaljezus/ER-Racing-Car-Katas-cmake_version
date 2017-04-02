#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "lib/sensor/ISensor.hpp"
#include "lib/safetyRange/SafetyRangeNormalTyre.hpp"
#include "lib/safetyRange/SafetyRangeWetTyre.hpp"

class Alarm
{
public:
    Alarm(ISensor *sensor, SafetyRangeWetTyre *safetyRange);

    void check();
    bool isAlarmOn();

protected:
    ISensor* m_sensor;
    SafetyRangeNormalTyre* m_safetyRange;
    bool m_alarmOn;

    virtual double pressureValue();

    bool isInRange(double pressureValue) const;
};

#endif //TYREPRESSURE_ALARM_H
