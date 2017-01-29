
#include "Alarm.hpp"

Alarm::Alarm() : m_sensor(), m_lowPressureTreshold(MIN_TYRE_PRESSURE), m_highPressureTreshold(MAX_TYRE_PRESSURE), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = probePressure();

    if (isNotInSafetyRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

bool Alarm::isNotInSafetyRange(double psiPressureValue) const { return psiPressureValue < m_lowPressureTreshold || m_highPressureTreshold < psiPressureValue; }

double Alarm::probePressure() { return m_sensor.popNextPressurePsiValue(); }

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
