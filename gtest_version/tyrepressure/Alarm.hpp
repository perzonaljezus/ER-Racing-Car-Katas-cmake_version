#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#ifndef TYREPRESSURE_SENSOR_H
#define TYREPRESSURE_SENSOR_H
#include "Sensor.hpp"
#include "SafetyRange.hpp"

#endif //TYREPRESSURE_SENSOR_H

class Alarm
{
public:
    Alarm(Sensor *sensor, SafetyRange *safetyRange);

    void check();
    bool isAlarmOn();

protected:
    SafetyRange *m_safetyRange;
    Sensor *m_sensor;
    bool m_alarmOn;

    double probePressure();

    bool isInSafetyRange(double psiPressureValue) const;
};

#endif