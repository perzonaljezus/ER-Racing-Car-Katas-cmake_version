
#include "Alarm.hpp"
#include "SafetyRange.h"

Alarm::Alarm(Sensor *sensor) : m_sensor(sensor), m_lowPressureTreshold(MIN_TYRE_PRESSURE), m_highPressureTreshold(MAX_TYRE_PRESSURE), m_alarmOn(false)
{
}

void Alarm::check()
{
    double psiPressureValue = probePressure();

    if ( ! isInSafetyRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

bool Alarm::isInSafetyRange(double psiPressureValue) const {
    return m_lowPressureTreshold <= psiPressureValue && psiPressureValue <= m_highPressureTreshold;
}

double Alarm::probePressure() { return m_sensor->popNextPressurePsiValue(); }

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
