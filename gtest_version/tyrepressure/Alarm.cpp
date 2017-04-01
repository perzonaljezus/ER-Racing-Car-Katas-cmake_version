
#include "Alarm.hpp"
#include "SafetyRange.hpp"


Alarm::Alarm(TyrepressureSensor *sensor, SafetyRange* safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (isNotInRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

bool Alarm::isNotInRange(double pressureValue) const {
    return pressureValue < m_safetyRange->getLowPressureTreshold()
           || m_safetyRange->getHighPressureTreshold() < pressureValue;
}

double Alarm::pressureValue()
{
    return m_sensor->pressureValue();
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}

