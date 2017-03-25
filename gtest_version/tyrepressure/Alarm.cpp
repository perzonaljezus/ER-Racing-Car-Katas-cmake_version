
#include "Alarm.hpp"

Alarm::Alarm() : m_sensor(), m_lowPressureTreshold(17), m_highPressureTreshold(21), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (psiPressureValue < m_lowPressureTreshold || m_highPressureTreshold < psiPressureValue)
    {
        m_alarmOn = true;
    }
}

double Alarm::pressureValue() {
    double psiPressureValue = m_sensor.popNextPressurePsiValue();
    return psiPressureValue;
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
