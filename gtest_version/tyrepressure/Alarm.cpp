
#include "Alarm.hpp"

Alarm::Alarm() : m_sensor(), m_lowPressureTreshold(17), m_highPressureTreshold(21), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = probePressure();

    if (psiPressureValue < m_lowPressureTreshold || m_highPressureTreshold < psiPressureValue)
    {
        m_alarmOn = true;
    }
}

double Alarm::probePressure() { return m_sensor.popNextPressurePsiValue(); }

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
