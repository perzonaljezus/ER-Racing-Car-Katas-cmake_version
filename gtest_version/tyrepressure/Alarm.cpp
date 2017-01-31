
#include "Alarm.hpp"
#include "SafetyRange.hpp"

Alarm::Alarm(Sensor *sensor, SafetyRange *safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange),  m_alarmOn(false)
{
}

void Alarm::check()
{
    double psiPressureValue = probePressure();

    if ( ! m_safetyRange->isInSafetyRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

double Alarm::probePressure() { return m_sensor->popNextPressurePsiValue(); }

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
