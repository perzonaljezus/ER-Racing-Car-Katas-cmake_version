
#include "Alarm.hpp"
#include "SafetyRange.hpp"

Alarm::Alarm() : m_sensor(), m_alarmOn(false)
{}

Alarm::Alarm(TyrepressureSensor* sensor) : m_sensor(sensor), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (psiPressureValue < SafetyRange::m_lowPressureTreshold || SafetyRange::m_highPressureTreshold < psiPressureValue)
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

