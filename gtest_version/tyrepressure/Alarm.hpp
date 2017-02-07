#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "TelemetryPressureSensor.hpp"
#include "SafetyRange.hpp"


class Alarm
{
public:
    Alarm(ISensor *sensor, SafetyRange *safetyRange);

    void check();
    bool isAlarmOn();

protected:
    SafetyRange *m_safetyRange;
    ISensor *m_sensor;
    bool m_alarmOn;

};

#endif //TYREPRESSURE_ALARM_H
