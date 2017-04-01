#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "TyrepressureSensor.hpp"
#include "SafetyRange.hpp"

class Alarm
{
public:
    Alarm(TyrepressureSensor* sensor, SafetyRange* safetyRange);

    void check();
    bool isAlarmOn();

protected:
    TyrepressureSensor* m_sensor;
    SafetyRange* m_safetyRange;
    bool m_alarmOn;

    virtual double pressureValue();

    bool isInRange(double pressureValue) const;
};

#endif //TYREPRESSURE_ALARM_H
