#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#include "TelemetryPressureSensor.hpp"
#include "SafetyRange.hpp"


class Alarm
{
public:
    Alarm(TelemetryPressureSensor *sensor, SafetyRange *safetyRange);

    void check();
    bool isAlarmOn();

protected:
    SafetyRange *m_safetyRange;
    Sensor *m_sensor;
    bool m_alarmOn;

    double probePressure();
};

#endif //TYREPRESSURE_ALARM_H
