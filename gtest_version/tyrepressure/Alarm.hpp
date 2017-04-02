#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "lib/sensor/TyrepressureSensorNormalTyre.hpp"
#include "lib/safetyRange/SafetyRangeNormalTyre.hpp"

class Alarm
{
public:
    Alarm(TyrepressureSensorNormalTyre* sensor, SafetyRangeNormalTyre* safetyRange);

    void check();
    bool isAlarmOn();

protected:
    TyrepressureSensorNormalTyre* m_sensor;
    SafetyRangeNormalTyre* m_safetyRange;
    bool m_alarmOn;

    virtual double pressureValue();

    bool isInRange(double pressureValue) const;
};

#endif //TYREPRESSURE_ALARM_H
