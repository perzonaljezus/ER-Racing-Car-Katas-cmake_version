#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

static const double MAX_TYRE_PRESSURE = 21.;
static const double MIN_TYRE_PRESSURE = 17.;

#include "Sensor.hpp"

class Alarm
{
public:
    Alarm();
    void check();
    bool isAlarmOn();

protected:
    Sensor m_sensor;
    bool m_alarmOn;
    double m_lowPressureTreshold;
    double m_highPressureTreshold;

    virtual double probePressure();

    bool isNotInSafetyRange(double psiPressureValue) const;
};

#endif