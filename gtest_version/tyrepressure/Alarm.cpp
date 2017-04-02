
#include "Alarm.hpp"

Alarm::Alarm(ISensor *sensor, SafetyRange *safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (! m_safetyRange->isInRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

double Alarm::pressureValue()
{
    return m_sensor->probe();
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}

