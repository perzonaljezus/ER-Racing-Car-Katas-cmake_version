
#include "Alarm.hpp"
#include "SafetyRange.hpp"


Alarm::Alarm(TyrepressureSensor *sensor, SafetyRange* safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (psiPressureValue < m_safetyRange->getLowPressureTreshold() || m_safetyRange->getHighPressureTreshold() < psiPressureValue)
    {
        m_alarmOn = true;
    }
}

double Alarm::pressureValue()
{
    return m_sensor->pressureValue();
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}

