
#include "Alarm.hpp"

Alarm::Alarm(ISensor *sensor, SafetyRange *safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange),  m_alarmOn(false)
{
}

void Alarm::check()
{
    double psiPressureValue = m_sensor->probe();

    if ( ! m_safetyRange->isInSafetyRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
